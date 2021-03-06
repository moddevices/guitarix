from __future__ import division
import sympy, numpy, types, math
import dk_lib
import pylab, scipy.signal

class GeneratedSignal(object):

    def __init__(self, func, op, fs, freq, start_freq, stop_freq):
        self.op = op
        self.fs = fs
        self.freq = freq
        self.start_freq = start_freq
        self.stop_freq = stop_freq
        self.generate_spectrum = False
        self.generate_harmonics = False
        self.make_spectrum = self._default_make_spectrum
        m = [dict(sweep = self._sweep, chirp = self._chirp, impulse = self._impulse, time = self._time,
                  null=self._null, asin=numpy.arcsin, atan=numpy.arctan,
                  Min=numpy.minimum, Max=numpy.maximum, ramp=self._ramp), numpy]
        self.signal = sympy.lambdify((), func, modules=m)()
        if isinstance(self.signal, tuple):
            self.signal = numpy.array(self.signal).T
        else:
            self.signal = self.signal[:,numpy.newaxis]
        samples = len(self.signal)
        if len(op) != self.signal.shape[1]:
            raise ValueError(
                "signal definition error: inconsistent channel count (%d vs. %d in OP definition)"
                % (self.signal.shape[1], len(op)))
        self.input_signal = self.signal + numpy.array(op, dtype=numpy.float64)
        self.timeline = numpy.linspace(0, samples/fs, samples, endpoint=False)

    def _sweep_make_spectrum(self, response, freqlist, shift=True):
        return self._sweep_harmonics_responses(response, 1, freqlist, shift)[0]

    @staticmethod
    def _fft_convolve(h, xd):
        n = len(h) + len(xd) - 1
        np = dk_lib.pow2roundup(n)
        if len(xd.shape) == 2 and len(h.shape) == 1:
            h = h.reshape((len(h), 1))
        s = numpy.fft.irfft(numpy.fft.rfft(h, np, axis=0) * numpy.fft.rfft(xd, np, axis=0), np, axis=0)
        return s[:n]

    def _sweep_harmonics_responses(self, response, N, freqlist, shift=True):
        g = self.input_signal.ptp()/2
        di = self._fft_convolve(self.sweep_inverse_signal, response/g)  # deconvolved impulse response
        imp_indices = numpy.zeros(N+1, dtype=int)  # the indices of each impulse (1st linear, 2nd the first harm. dist. etc.)
        imp_indices[0] = len(self.sweep_inverse_signal) - 1
        for n in range(1, N+1):
            imp_indices[n] = imp_indices[0] - int(round(math.log(n+1) * self.sweep_rate))
        imps = []
        for n in range(N):
            dl = (imp_indices[n] - imp_indices[n+1]) // 2
            lo = imp_indices[n] - dl  # the low limit where to cut
            hi = imp_indices[n] + dl  # the high limit where to cut
            di_w = di[lo:hi]
            win = numpy.blackman(len(di_w))
            if len(di.shape) == 2:
                win = win.reshape((len(win), 1))
            di_w *= win  # smoothed version
            w = freqlist
            if shift:
                w = w * (n + 1)
            h = scipy.signal.freqz(di_w, worN=w)[1]
            off = imp_indices[n] - lo
            h *= numpy.exp(off * 1j * freqlist)
            imps.append(h)
        return imps

    def _sweep(self, t, start, stop, pre, post, fs):
        self.generate_spectrum = True
        self.generate_harmonics = True
        self.make_spectrum = self._sweep_make_spectrum
        self.make_harmonics_responses = self._sweep_harmonics_responses
        post = int(round(post * fs))
        if pre < 0:
            pre = int(round((len(t) - post) * 0.1))
            if pre < 0:
                pre = 0
        else:
            pre = int(round(pre * fs))
        if post >= len(t) - pre:
            post = int((len(t) - pre) * 0.1)
        span = len(t) - (pre + post)
        self.pre = pre
        self.post = post
        self.fs = fs
        sig, self.sweep_inverse_signal, self.start, self.stop, self.sweep_rate = \
          dk_lib.genlogsweep(start, stop, fs, pre, span, post)
        return sig

    def _chirp(self, t, start, stop, pre, post, fs):
        self.generate_spectrum = True
        self.generate_harmonics = True
        self.make_spectrum = self._sweep_make_spectrum
        self.make_harmonics_responses = self._sweep_harmonics_responses
        post = int(round(post * fs))
        if pre < 0:
            pre = int(round((len(t) - post) * 0.1))
        else:
            pre = int(round(pre * fs))
        span = len(t) - (pre + post)
        self.pre = pre
        self.post = post
        self.fs = fs
        sig, self.sweep_inverse_signal, self.start, self.stop, self.sweep_rate = \
          dk_lib.expchirp(start, stop, fs, pre, span, post)
        return sig

    def _impulse_make_spectrum(self, response, freqlist):
        g = self.input_signal.ptp()
        return scipy.signal.freqz(response/g, worN=freqlist)[1]

    def _impulse(self, t, offset):
        self.generate_spectrum = True
        self.make_spectrum = self._impulse_make_spectrum
        a = numpy.zeros_like(t)
        a[offset] = 1
        return a

    def _time(self, samples, fs):
        return numpy.linspace(0, samples/fs, samples)

    def _ramp(self, t, start, log):
        if log:
            if start < 0:
                start = 0.001
            return numpy.logspace(numpy.log10(start), 0, len(t))
        else:
            if start < 0:
                start = 0
            return numpy.linspace(start, 1, len(t))

    def _null(self, s):
        return 0*s

    def _default_make_spectrum(self, response, freqlist):
        n = dk_lib.pow2roundup(len(response))
        return numpy.fft.rfft(response, n, axis=0)

    def has_spectrum(self):
        return self.generate_spectrum

    def get_spectrum(self, response, freqlist, **kw):
        return self.make_spectrum(response, freqlist, **kw)

    def has_harmonics(self):
        return self.generate_harmonics

    def get_harmonics_responses(self, response, N, freqlist, shift=True):
        return self.make_harmonics_responses(response, N, freqlist, shift)

    def _plot_setup(self, lower_freq, upper_freq, plotfunc, freqlist):
        if lower_freq is None:
            lower_freq = self.start_freq
        if upper_freq is None:
            upper_freq = self.stop_freq
        if plotfunc is None:
            plotfunc = pylab.semilogx
        if isinstance(freqlist, int):
            freqlist = numpy.logspace(numpy.log10(lower_freq), numpy.log10(upper_freq), freqlist)
        return lower_freq, upper_freq, plotfunc, freqlist

    def plot_spectrum(self, response, lower_freq=None, upper_freq=None, plotfunc=None, freqlist=200):
        lower_freq, upper_freq, plotfunc, freqlist = self._plot_setup(lower_freq, upper_freq, plotfunc, freqlist)
        h = self.get_spectrum(response, 2 * numpy.pi * freqlist / self.fs)
        return plotfunc(freqlist, 20 * numpy.log10(abs(h)))

    def plot_harmonic_spectrum(self, response, nharmonics=6, lower_freq=None, upper_freq=None, plotfunc=None, freqlist=200):
        lower_freq, upper_freq, plotfunc, freqlist = self._plot_setup(lower_freq, upper_freq, plotfunc, freqlist)
        lines = []
        for i, h in enumerate(self.get_harmonics_responses(response, nharmonics, 2*numpy.pi*freqlist/self.fs)):
            if h.size:
                lines.extend(plotfunc(freqlist, 20 * numpy.log10(abs(h))))
        return lines

    def plot(self, response, label=None, clip=-80, nharmonics=8, spectrum=None, freq_range=None):
        if freq_range is not None:
            lower_freq, upper_freq = freq_range
        else:
            lower_freq = upper_freq = None
        if lower_freq is None:
            lower_freq = self.start_freq
        if upper_freq is None:
            upper_freq = self.stop_freq
        if  self.has_harmonics() and nharmonics > 1 and (spectrum is None or spectrum):
            lines = self.plot_harmonic_spectrum(response, nharmonics=nharmonics, lower_freq=lower_freq, upper_freq=upper_freq)
            pylab.xlim(left=lower_freq, right=upper_freq)
            for i, line in enumerate(lines):
                if label:
                    line.set_label("%d, %s" % (i+1, label))
                else:
                    line.set_label("%d" % (i+1))
            return lines
        elif (spectrum is None and self.has_spectrum()) or spectrum:
            f = numpy.logspace(numpy.log10(lower_freq), numpy.log10(upper_freq), 200)
            h = self.get_spectrum(response, 2*numpy.pi * f / self.fs)
            s = 20*numpy.log10(abs(h))
            lines = pylab.plot(f, numpy.where(s > clip, s, numpy.nan), label=label)
            pylab.xscale('log')
            return lines
        else:
            return pylab.plot(self.timeline, response, label=label)


class Signal(object):

    _s_FS, _s_freq, _s_start_freq, _s_stop_freq, _s_sweep_pre, _s_sweep_post, _s_samples = sympy.symbols(
        "FS, freq, start_freq, stop_freq, sweep_pre, sweep_post, samples")
    _s_sweep, _s_chirp, _s_impulse, _s_time, _s_null, _s_ramp = sympy.symbols(
        "sweep,chirp,impulse,time,null,ramp", cls=sympy.Function)
    t = sympy.symbols("t")

    def __init__(self, timespan=0.01):
        self._freq = 440
        self._start_freq = 20
        self._stop_freq = 10000
        self._timespan = timespan
        self._sweep_pre = -1
        self._sweep_post = 0.1
        self.impulse_offset = 0

    @property
    def freq(self):
        return self._freq
    @freq.setter
    def freq(self, v):
        self._freq = v

    @property
    def start_freq(self):
        return self._start_freq
    @start_freq.setter
    def start_freq(self, v):
        self._start_freq = v

    @property
    def stop_freq(self):
        return self._stop_freq
    @stop_freq.setter
    def stop_freq(self, v):
        self._stop_freq = v

    @property
    def timespan(self):
        return self._timespan
    @timespan.setter
    def timespan(self, v):
        self._timespan = v

    @property
    def sweep_pre(self):
        return self._sweep_pre
    @sweep_pre.setter
    def sweep_pre(self, v):
        self._sweep_pre = v

    @property
    def sweep_post(self):
        return self._sweep_post
    @sweep_post.setter
    def sweep_post(self, v):
        self._sweep_post = v

    def sine(self, freq=None):
        if freq is None:
            freq = self.freq
        self.freq = freq
        return sympy.sin(self.t * freq * 2 * sympy.pi)

    def triangle(self, freq=None):
        if freq is None:
            freq = self.freq
        return 2 / sympy.pi * sympy.asin(self.sine(freq))

    def sawtooth(self, freq=None):
        if freq is None:
            freq = self.freq
        return -2 / sympy.pi * sympy.atan(1/sympy.tan(sympy.pi * self.t))

    def square(self, freq=None):
        if freq is None:
            freq = self.freq
        return self.triangle(freq).diff()/(4*freq)

    def sweep(self, start_freq=None, stop_freq=None, pre=None, post=None):
        if start_freq is None:
            start_freq = self._s_start_freq
        if stop_freq is None:
            stop_freq = self._s_stop_freq
        if stop_freq is None:
            stop_freq = self._s_stop_freq
        if pre is None:
            pre = self._s_sweep_pre
        if post is None:
            post = self._s_sweep_post
        return self._s_sweep(self.t, start_freq, stop_freq, pre, post, self._s_FS)

    def chirp(self, start_freq=None, stop_freq=None, pre=None, post=None):
        if start_freq is None:
            start_freq = self._s_start_freq
        if stop_freq is None:
            stop_freq = self._s_stop_freq
        if stop_freq is None:
            stop_freq = self._s_stop_freq
        if pre is None:
            pre = self._s_sweep_pre
        if post is None:
            post = self._s_sweep_post
        return self._s_chirp(self.t, start_freq, stop_freq, pre, post, self._s_FS)

    def ramp(self, start=-1, log=False):
        return self._s_ramp(self.t, start, int(log))

    def impulse(self):
        return self._s_impulse(self.t, self.impulse_offset)

    def generate(self, sig, fs, op=None, channels=None):
        if op is None:
            if channels is None:
                op = [0]
            else:
                op = [0] * channels
        d = {
            self._s_FS: fs,
            self._s_freq: self.freq,
            self._s_start_freq: self.start_freq,
            self._s_stop_freq: self.stop_freq,
            self._s_sweep_pre: self.sweep_pre,
            self._s_sweep_post: self.sweep_post,
            }
        return GeneratedSignal(self(sig).subs(d), op, fs, self.freq, self.start_freq, self.stop_freq)

    def __call__(self, expr, samples=None, timespan=None, periods=None):
        if isinstance(expr, types.FunctionType):
            expr = expr()
        if timespan is not None:
            samples = self._s_FS * timespan
        elif periods is not None:
            samples = periods * self._s_FS / self._s_freq ##FIXME
        elif samples is None:
            samples = self._s_FS * self.timespan
        if isinstance(expr, (int,float)) or not (self.t in expr.atoms() or expr.atoms(self._s_time)):
            expr += self._s_null(self.t)
        return expr.subs(self.t, self._s_time(samples, self._s_FS))
