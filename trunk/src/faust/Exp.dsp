import("music.lib");
import("filter.lib");
import("effect.lib"); 
import("guitarix.lib");

/****************************************************************
 ** unused
 */

/*
distort(x) = x : *(pregain) : (+ : flt : BP(vtu) : flt) ~ *(back) : gain with
{
    back = vslider("FB",0.95,0.6,0.99,0.001);
    mapper(v) = 1 - 19.7 * v * v;
    flt(x) = +(x - x') ~ *(mapper(vslider("FreqT", 1250, 200, 3000, 1)/SR));
    vtu(x) = valve.vtu_(dist, q, g, x);
    g = vslider("Duty", 0, -1.0, 1.0, 0.01) : *(1-log(2)) : +(1);
    q = vslider("Qual", 0.5, 0, 1, 0.01)*1.75 - 1.04 : pow(_, 9);
    dist = pow(10, 4*(vslider("Dist", 0.5, 0, 1, 0.01)));
    pregain = 0.7*sqrt(1-back);
    gain = BP(*(0.4/(vtu(0.2)-vtu(-0.2))));
};
*/

/*
process = hgroup("Tube [option : detachable]", BP(
	hgroup("1 Amp",distort) :
        vgroup("2 Highpass",BP(highpass1(fch))) :
        vgroup("3 Lowpass",BP(lowpass1(fcl)))
	)) with
{
    fch = vslider("freq",130,50,200,1);
    fcl = vslider("freq",200,1400,8000,10);
};
*/

/*
process = hgroup("2 Tube",
    hgroup("1a Distortion", BP(vtu)):
    hgroup("1b Distortion", BP(vtu)):
    hgroup("1c Distortion", BP(vtu)):
    hgroup("1d Distortion", BP(vtu)):
    hgroup("2 Highpass",BP(highpass2(fch))) :
    hgroup("3 Lowpass",BP(lowpass1(fcl)))
    ) with
{
    vtu = valve.vtu(dist, q, g) : *(0.1/(valve.vtu(dist, q, g, 0.05)-valve.vtu(dist, q, g, -0.05)));
    dist = pow(10, 4*vslider("dist", 0.5, 0, 1, 0.01));
    q = vslider("qual", 0.5, 0, 1, 0.01) : -(0.9) : /(10);
    g = vslider("duty", 0, -1.0, 1.0, 0.01) : *(1-log(2)) : +(1);
    fch = vslider("freq",130,50,200,1);
    fcl = vslider("freq",200,1400,8000,10);
};
*/

/****************************************************************
 ** Guitar tone stacks
 ** values from CAPS plugin tonestack (based on work from D.T. Yeh
 */
ts = environment {
    k = *(1e3);
    M = *(1e6);
    nF = *(1e-9);
    pF = *(1e-12);

    /* Fender */

    bassman = environment { /* 59 Bassman 5F6-A */
	R1 = 250:k;
        R2 = 1:M;
        R3 = 25:k;
        R4 = 56:k;
        C1 = 250:pF;
        C2 = 20:nF;
        C3 = 20:nF;
        };

    twin = environment { /* 69 Twin Reverb AA270 */
	R1 = 250:k;
        R2 = 250:k;
        R3 = 10:k;
        R4 = 100:k;
        C1 = 120:pF;
        C2 = 100:nF;
        C3 = 47:nF;
        };

    princeton = environment { /* 64 Princeton AA1164 */
	R1 = 250:k;
        R2 = 250:k;
        R3 = 4.8:k;
        R4 = 100:k;
        C1 = 250:pF;
        C2 = 100:nF;
        C3 = 47:nF;
        };

    /* Marshall */

    jcm800 = environment { /* 59/81 JCM-800 Lead 100 2203 */
	R1 = 220:k;
        R2 = 1:M;
        R3 = 22:k;
        R4 = 33:k;
        C1 = 470:pF;
        C2 = 22:nF;
        C3 = 22:nF;
        };
    /* 90 JCM-900 Master 2100: same as JCM-800 */

    jcm2000 = environment { /* 81 2000 Lead */
	R1 = 250:k;
        R2 = 1:M;
        R3 = 25:k;
        R4 = 56:k; /* a 10 k fixed + 100 k pot in series actually */
        C1 = 500:pF;
        C2 = 22:nF;
        C3 = 22:nF;
        };

	/* parameter order is R1 - R4, C1 - C3 */
    mlead = environment { /* 67 Major Lead 200 */
	R1 = 250:k;
        R2 = 1:M;
        R3 = 25:k;
        R4 = 33:k;
        C1 = 500:pF;
        C2 = 22:nF;
        C3 = 22:nF;
        };

    m2199 = environment { /* undated M2199 30W solid state */
        R1 = 250:k;
        R2 = 250:k;
        R3 = 25:k;
        R4 = 56:k;
        C1 = 250:pF;
        C2 = 47:nF;
        C3 = 47:nF;
        };

    /* Vox */
    ac30 = environment { /* 59/86 AC-30 */
        /* R3 is fixed (circuit differs anyway) */
        R1 = 1:M;
        R2 = 1:M;
        R3 = 10:k;
        R4 = 100:k;
        C1 = 50:pF;
        C2 = 22:nF;
        C3 = 22:nF;
        };
};

tonestack(tse) = 1/A0*tf3(B0,B1,B2,B3,A1/A0,A2/A0,A3/A0) with {
    C1 = tse.C1;
    C2 = tse.C2;
    C3 = tse.C3;
    R1 = tse.R1;
    R2 = tse.R2;
    R3 = tse.R3;
    R4 = tse.R4;

    t = vslider("Treble", 0.5, 0, 1, 0.01);
    m = vslider("Middle", 0.5, 0, 1, 0.01);
    l = vslider("Bass", 0.5, 0, 1, 0.01) : (_-1)*3.4 : exp;

    b1 = t*C1*R1 + m*C3*R3 + l*(C1*R2 + C2*R2) + (C1*R3 + C2*R3);

    b2 = t*(C1*C2*R1*R4 + C1*C3*R1*R4) - m*m*(C1*C3*R3*R3 + C2*C3*R3*R3)
         + m*(C1*C3*R1*R3 + C1*C3*R3*R3 + C2*C3*R3*R3)
         + l*(C1*C2*R1*R2 + C1*C2*R2*R4 + C1*C3*R2*R4)
         + l*m*(C1*C3*R2*R3 + C2*C3*R2*R3)
         + (C1*C2*R1*R3 + C1*C2*R3*R4 + C1*C3*R3*R4);

    b3 = l*m*(C1*C2*C3*R1*R2*R3 + C1*C2*C3*R2*R3*R4)
         - m*m*(C1*C2*C3*R1*R3*R3 + C1*C2*C3*R3*R3*R4)
         + m*(C1*C2*C3*R1*R3*R3 + C1*C2*C3*R3*R3*R4)
         + t*C1*C2*C3*R1*R3*R4 - t*m*C1*C2*C3*R1*R3*R4
         + t*l*C1*C2*C3*R1*R2*R4;

    a0 = 1;

    a1 = (C1*R1 + C1*R3 + C2*R3 + C2*R4 + C3*R4)
         + m*C3*R3 + l*(C1*R2 + C2*R2);

    a2 = m*(C1*C3*R1*R3 - C2*C3*R3*R4 + C1*C3*R3*R3 + C2*C3*R3*R3)
         + l*m*(C1*C3*R2*R3 + C2*C3*R2*R3)
         - m*m*(C1*C3*R3*R3 + C2*C3*R3*R3)
         + l*(C1*C2*R2*R4 + C1*C2*R1*R2 + C1*C3*R2*R4 + C2*C3*R2*R4)
         + (C1*C2*R1*R4 + C1*C3*R1*R4 + C1*C2*R3*R4 + C1*C2*R1*R3 + C1*C3*R3*R4 + C2*C3*R3*R4);

    a3 = l*m*(C1*C2*C3*R1*R2*R3 + C1*C2*C3*R2*R3*R4)
         - m*m*(C1*C2*C3*R1*R3*R3 + C1*C2*C3*R3*R3*R4)
         + m*(C1*C2*C3*R3*R3*R4 + C1*C2*C3*R1*R3*R3 - C1*C2*C3*R1*R3*R4)
         + l*C1*C2*C3*R1*R2*R4
         + C1*C2*C3*R1*R3*R4;

    c = 2*float(SR);

    B0 = -b1*c - b2*pow(c,2) - b3*pow(c,3);
    B1 = -b1*c + b2*pow(c,2) + 3*b3*pow(c,3);
    B2 = b1*c + b2*pow(c,2) - 3*b3*pow(c,3);
    B3 = b1*c - b2*pow(c,2) + b3*pow(c,3);
    A0 = -a0 - a1*c - a2*pow(c,2) - a3*pow(c,3);
    A1 = -3*a0 - a1*c + a2*pow(c,2) + 3*a3*pow(c,3);
    A2 = -3*a0 + a1*c + a2*pow(c,2) - 3*a3*pow(c,3);
    A3 = -a0 + a1*c - a2*pow(c,2) + a3*pow(c,3);
};

/****************************************************************
 ** Tube Preamp Emulation
 */

// envelope meter for insertion in front of tube
// the log10 function might be slow, with execution
// time depending on input
meter = _ <: (graph*1e-50,_) :> _ with {
    t = 0.05;
    g = exp(-1/(SR*t));
    env = abs : *(1-g) : + ~ *(g);
    graph = env : 20*log10 :  clip(-20,20) : vbargraph("ENV",-20,20);
};

tubestage(tb,fck,Rk) = tube : hpf with {
    lpfk = lowpass1(fck);
    Ftube = ffunction(float Ftube(int,float), "valve.h", "");
    vplus = 250.0;
    divider = 40;
    Rp = 100.0e3;
    tube = (+ : Ftube(tb)) ~ (-(vplus) : *(Rk/Rp) : lpfk) : /(divider);
    hpf = highpass1(31.0);
};

process = hgroup("test", *(vslider("Pregain",30,-10,80,0.1):db2linear) :
          hgroup("stage1", BP(stage1)) :
          hgroup("stage2", BP(stage2)) :
          hgroup("stage3", BP(stage3)) :
          hgroup("tone", BP(tonestack(ts.jcm2000)))
          ) with {
    stage1 = tubestage(0,86.0,2700.0) : *(gain1) with {
        gain1 = vslider("gain1", 6, -10.0, 20.0, 0.1) : db2linear;
    };
    stage2 = lowpass1(6531.0) : tubestage(1,132.0,1500.0) : *(gain2) with {
        gain2 = vslider("gain2", 6, -10.0, 20.0, 0.1) : db2linear;
    };
    stage3 = lowpass1(6531.0) : tubestage(1,194.0,820.0);
};
