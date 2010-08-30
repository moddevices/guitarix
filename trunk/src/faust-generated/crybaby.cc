namespace crybaby {
// generated from file '../src/faust/crybaby.dsp'

FAUSTFLOAT 	fslider0;
FAUSTFLOAT 	fslider1;
double 	fConst0;
double 	fConst1;
double 	fRec1[2];
double 	fRec2[2];
double 	fRec3[2];
FAUSTFLOAT 	fslider2;
double 	fRec0[3];
int	fSamplingFreq;

void init(int samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = (1413.7166941154069 / fSamplingFreq);
	fConst1 = (2827.4333882308138 / fSamplingFreq);
	for (int i=0; i<2; i++) fRec1[i] = 0;
	for (int i=0; i<2; i++) fRec2[i] = 0;
	for (int i=0; i<2; i++) fRec3[i] = 0;
	for (int i=0; i<3; i++) fRec0[i] = 0;
}

void compute(int count, float *input0, float *output0)
{
	double 	fSlow0 = fslider0;
	double 	fSlow1 = (1 - max(0, fSlow0));
	double 	fSlow2 = fslider1;
	double 	fSlow3 = pow(2.0,(2.3 * fSlow2));
	double 	fSlow4 = (1 - (fConst0 * (fSlow3 / pow(2.0,(1.0 + (2.0 * (1.0 - fSlow2)))))));
	double 	fSlow5 = (0.0010000000000000009 * (0 - (2.0 * (cos((fConst1 * fSlow3)) * fSlow4))));
	double 	fSlow6 = (0.0010000000000000009 * faustpower<2>(fSlow4));
	double 	fSlow7 = (0.0001000000000000001 * pow(4.0,fSlow2));
	double 	fSlow8 = fslider2;
	double 	fSlow9 = (1 - max(0, (0 - fSlow0)));
	for (int i=0; i<count; i++) {
		double fTemp0 = (double)input0[i];
		fRec1[0] = (fSlow5 + (0.999 * fRec1[1]));
		fRec2[0] = (fSlow6 + (0.999 * fRec2[1]));
		fRec3[0] = (fSlow7 + (0.999 * fRec3[1]));
		fRec0[0] = ((fSlow8 * (fTemp0 * fRec3[0])) - (0.996 * ((fRec2[0] * fRec0[2]) + (fRec1[0] * fRec0[1]))));
		output0[i] = (FAUSTFLOAT)((fSlow9 * (fRec0[0] - (0.996 * fRec0[1]))) + (fSlow1 * fTemp0));
		// post processing
		fRec0[2] = fRec0[1]; fRec0[1] = fRec0[0];
		fRec3[1] = fRec3[0];
		fRec2[1] = fRec2[0];
		fRec1[1] = fRec1[0];
	}
}

static struct RegisterParams { RegisterParams(); } RegisterParams;
RegisterParams::RegisterParams()
{
	registerVar("crybaby.level","","S","",&fslider2, 0.1, 0.0, 1.0, 0.01);
	registerVar("crybaby.wah","","S","",&fslider1, 0.0, 0.0, 1.0, 0.01);
	registerVar("crybaby.wet_dry","wet/dry","S","",&fslider0, 0.0, -1.0, 1.0, 0.1);
	registerInit("crybaby", init);
}

} // end namespace crybaby