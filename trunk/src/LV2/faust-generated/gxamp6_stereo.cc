// generated from file '../src/LV2/faust/gxamp6_stereo.dsp' by dsp2cc:
// Code generated with Faust 0.9.58 (http://faust.grame.fr)

#include "valve.h"

namespace gxamp6_stereo {

class Dsp: public PluginLV2 {
private:
	uint32_t fSamplingFreq;
	int 	iConst0;
	double 	fConst1;
	double 	fConst2;
	double 	fConst3;
	double 	fConst4;
	double 	fConst5;
	double 	fConst6;
	double 	fVec0[2];
	double 	fConst7;
	double 	fRec10[2];
	FAUSTFLOAT 	fslider0;
	FAUSTFLOAT	*fslider0_;
	double 	fRec11[2];
	FAUSTFLOAT 	fslider1;
	FAUSTFLOAT	*fslider1_;
	double 	fRec13[2];
	double 	fConst8;
	double 	fConst9;
	double 	fConst10;
	double 	fConst11;
	double 	fConst12;
	double 	fConst13;
	double 	fConst14;
	double 	fConst15;
	double 	fConst16;
	double 	fVec1[2];
	double 	fConst17;
	double 	fRec26[2];
	double 	fRec25[2];
	double 	fRec24[3];
	double 	fRec23[3];
	FAUSTFLOAT 	fslider2;
	FAUSTFLOAT	*fslider2_;
	double 	fRec27[2];
	double 	fConst18;
	double 	fConst19;
	double 	fConst20;
	double 	fVec2[2];
	double 	fConst21;
	double 	fRec28[2];
	double 	fRec22[2];
	double 	fConst22;
	double 	fConst23;
	double 	fRec21[2];
	double 	fConst24;
	double 	fConst25;
	double 	fConst26;
	double 	fVec3[2];
	double 	fConst27;
	double 	fRec31[2];
	double 	fRec30[2];
	double 	fRec29[2];
	double 	fRec20[2];
	double 	fRec19[2];
	double 	fVec4[2];
	double 	fRec32[2];
	double 	fRec18[2];
	double 	fRec17[2];
	double 	fConst28;
	double 	fConst29;
	double 	fConst30;
	double 	fVec5[2];
	double 	fConst31;
	double 	fRec35[2];
	double 	fRec34[2];
	double 	fRec33[2];
	double 	fRec16[2];
	double 	fVec6[2];
	double 	fRec36[2];
	double 	fRec15[2];
	double 	fRec14[2];
	FAUSTFLOAT 	fslider3;
	FAUSTFLOAT	*fslider3_;
	double 	fRec39[2];
	int 	IOTA;
	double 	fVec7[32768];
	int 	iConst32;
	double 	fRec38[2];
	double 	fConst33;
	double 	fRec37[2];
	double 	fConst34;
	double 	fConst35;
	double 	fConst36;
	double 	fConst37;
	double 	fConst38;
	double 	fConst39;
	double 	fConst40;
	double 	fConst41;
	double 	fConst42;
	double 	fConst43;
	double 	fConst44;
	double 	fConst45;
	double 	fConst46;
	double 	fConst47;
	double 	fConst48;
	double 	fConst49;
	double 	fConst50;
	double 	fConst51;
	double 	fConst52;
	double 	fConst53;
	double 	fConst54;
	double 	fConst55;
	double 	fConst56;
	double 	fConst57;
	double 	fConst58;
	double 	fConst59;
	double 	fConst60;
	double 	fConst61;
	double 	fConst62;
	double 	fConst63;
	double 	fRec47[3];
	double 	fVec8[2];
	double 	fConst64;
	double 	fRec46[2];
	double 	fConst65;
	double 	fRec45[2];
	double 	fRec44[3];
	double 	fVec9[2];
	double 	fConst66;
	double 	fConst67;
	double 	fRec43[2];
	double 	fRec42[3];
	double 	fConst68;
	double 	fRec41[3];
	double 	fConst69;
	double 	fConst70;
	double 	fConst71;
	double 	fConst72;
	double 	fRec51[2];
	double 	fRec50[3];
	double 	fVec10[2];
	double 	fConst73;
	double 	fConst74;
	double 	fRec49[2];
	double 	fRec48[3];
	double 	fConst75;
	double 	fConst76;
	double 	fConst77;
	double 	fConst78;
	double 	fRec55[2];
	double 	fRec54[3];
	double 	fConst79;
	double 	fRec53[3];
	double 	fRec52[3];
	double 	fRec57[2];
	double 	fRec56[3];
	double 	fVec11[2];
	double 	fRec40[2];
	double 	fVec12[2];
	double 	fRec12[2];
	double 	fRec9[2];
	double 	fConst80;
	double 	fRec8[2];
	double 	fVec13[2];
	double 	fRec60[2];
	double 	fRec59[2];
	double 	fRec58[2];
	double 	fRec6[2];
	double 	fRec4[2];
	double 	fRec2[2];
	double 	fRec0[2];
	double 	fVec14[2];
	double 	fRec84[2];
	double 	fRec83[2];
	double 	fRec82[3];
	double 	fRec81[3];
	double 	fVec15[2];
	double 	fRec85[2];
	double 	fRec80[2];
	double 	fRec79[2];
	double 	fVec16[2];
	double 	fRec88[2];
	double 	fRec87[2];
	double 	fRec86[2];
	double 	fRec78[2];
	double 	fRec77[2];
	double 	fVec17[2];
	double 	fRec89[2];
	double 	fRec76[2];
	double 	fRec75[2];
	double 	fVec18[2];
	double 	fRec92[2];
	double 	fRec91[2];
	double 	fRec90[2];
	double 	fRec74[2];
	double 	fVec19[2];
	double 	fRec93[2];
	double 	fRec73[2];
	double 	fRec72[2];
	double 	fRec96[2];
	double 	fVec20[32768];
	double 	fRec95[2];
	double 	fRec94[2];
	double 	fRec104[3];
	double 	fVec21[2];
	double 	fRec103[2];
	double 	fRec102[2];
	double 	fRec101[3];
	double 	fVec22[2];
	double 	fRec100[2];
	double 	fRec99[3];
	double 	fRec98[3];
	double 	fRec108[2];
	double 	fRec107[3];
	double 	fVec23[2];
	double 	fRec106[2];
	double 	fRec105[3];
	double 	fRec112[2];
	double 	fRec111[3];
	double 	fRec110[3];
	double 	fRec109[3];
	double 	fRec114[2];
	double 	fRec113[3];
	double 	fVec24[2];
	double 	fRec97[2];
	double 	fVec25[2];
	double 	fRec71[2];
	double 	fVec26[2];
	double 	fRec115[2];
	double 	fRec70[2];
	double 	fRec69[2];
	double 	fVec27[2];
	double 	fRec118[2];
	double 	fRec117[2];
	double 	fRec116[2];
	double 	fRec67[2];
	double 	fRec65[2];
	double 	fRec63[2];
	double 	fRec61[2];
	void connect(uint32_t port,void* data);
	void clear_state_f();
	void init(uint32_t samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *input1, FAUSTFLOAT *output0, FAUSTFLOAT *output1);

	static void clear_state_f_static(PluginLV2*);
	static void init_static(uint32_t samplingFreq, PluginLV2*);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *input1, FAUSTFLOAT *output0, FAUSTFLOAT *output1, PluginLV2*);
	static void del_instance(PluginLV2 *p);
	static void connect_static(uint32_t port,void* data, PluginLV2 *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginLV2() {
	version = PLUGINLV2_VERSION;
	id = "pre 6DJ8/ push-pull 6V6";
	name = N_("pre 6DJ8/ push-pull 6V6");
	mono_audio = 0;
	stereo_audio = compute_static;
	set_samplerate = init_static;
	activate_plugin = 0;
	connect_ports = connect_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int i=0; i<2; i++) fVec0[i] = 0;
	for (int i=0; i<2; i++) fRec10[i] = 0;
	for (int i=0; i<2; i++) fRec11[i] = 0;
	for (int i=0; i<2; i++) fRec13[i] = 0;
	for (int i=0; i<2; i++) fVec1[i] = 0;
	for (int i=0; i<2; i++) fRec26[i] = 0;
	for (int i=0; i<2; i++) fRec25[i] = 0;
	for (int i=0; i<3; i++) fRec24[i] = 0;
	for (int i=0; i<3; i++) fRec23[i] = 0;
	for (int i=0; i<2; i++) fRec27[i] = 0;
	for (int i=0; i<2; i++) fVec2[i] = 0;
	for (int i=0; i<2; i++) fRec28[i] = 0;
	for (int i=0; i<2; i++) fRec22[i] = 0;
	for (int i=0; i<2; i++) fRec21[i] = 0;
	for (int i=0; i<2; i++) fVec3[i] = 0;
	for (int i=0; i<2; i++) fRec31[i] = 0;
	for (int i=0; i<2; i++) fRec30[i] = 0;
	for (int i=0; i<2; i++) fRec29[i] = 0;
	for (int i=0; i<2; i++) fRec20[i] = 0;
	for (int i=0; i<2; i++) fRec19[i] = 0;
	for (int i=0; i<2; i++) fVec4[i] = 0;
	for (int i=0; i<2; i++) fRec32[i] = 0;
	for (int i=0; i<2; i++) fRec18[i] = 0;
	for (int i=0; i<2; i++) fRec17[i] = 0;
	for (int i=0; i<2; i++) fVec5[i] = 0;
	for (int i=0; i<2; i++) fRec35[i] = 0;
	for (int i=0; i<2; i++) fRec34[i] = 0;
	for (int i=0; i<2; i++) fRec33[i] = 0;
	for (int i=0; i<2; i++) fRec16[i] = 0;
	for (int i=0; i<2; i++) fVec6[i] = 0;
	for (int i=0; i<2; i++) fRec36[i] = 0;
	for (int i=0; i<2; i++) fRec15[i] = 0;
	for (int i=0; i<2; i++) fRec14[i] = 0;
	for (int i=0; i<2; i++) fRec39[i] = 0;
	for (int i=0; i<32768; i++) fVec7[i] = 0;
	for (int i=0; i<2; i++) fRec38[i] = 0;
	for (int i=0; i<2; i++) fRec37[i] = 0;
	for (int i=0; i<3; i++) fRec47[i] = 0;
	for (int i=0; i<2; i++) fVec8[i] = 0;
	for (int i=0; i<2; i++) fRec46[i] = 0;
	for (int i=0; i<2; i++) fRec45[i] = 0;
	for (int i=0; i<3; i++) fRec44[i] = 0;
	for (int i=0; i<2; i++) fVec9[i] = 0;
	for (int i=0; i<2; i++) fRec43[i] = 0;
	for (int i=0; i<3; i++) fRec42[i] = 0;
	for (int i=0; i<3; i++) fRec41[i] = 0;
	for (int i=0; i<2; i++) fRec51[i] = 0;
	for (int i=0; i<3; i++) fRec50[i] = 0;
	for (int i=0; i<2; i++) fVec10[i] = 0;
	for (int i=0; i<2; i++) fRec49[i] = 0;
	for (int i=0; i<3; i++) fRec48[i] = 0;
	for (int i=0; i<2; i++) fRec55[i] = 0;
	for (int i=0; i<3; i++) fRec54[i] = 0;
	for (int i=0; i<3; i++) fRec53[i] = 0;
	for (int i=0; i<3; i++) fRec52[i] = 0;
	for (int i=0; i<2; i++) fRec57[i] = 0;
	for (int i=0; i<3; i++) fRec56[i] = 0;
	for (int i=0; i<2; i++) fVec11[i] = 0;
	for (int i=0; i<2; i++) fRec40[i] = 0;
	for (int i=0; i<2; i++) fVec12[i] = 0;
	for (int i=0; i<2; i++) fRec12[i] = 0;
	for (int i=0; i<2; i++) fRec9[i] = 0;
	for (int i=0; i<2; i++) fRec8[i] = 0;
	for (int i=0; i<2; i++) fVec13[i] = 0;
	for (int i=0; i<2; i++) fRec60[i] = 0;
	for (int i=0; i<2; i++) fRec59[i] = 0;
	for (int i=0; i<2; i++) fRec58[i] = 0;
	for (int i=0; i<2; i++) fRec6[i] = 0;
	for (int i=0; i<2; i++) fRec4[i] = 0;
	for (int i=0; i<2; i++) fRec2[i] = 0;
	for (int i=0; i<2; i++) fRec0[i] = 0;
	for (int i=0; i<2; i++) fVec14[i] = 0;
	for (int i=0; i<2; i++) fRec84[i] = 0;
	for (int i=0; i<2; i++) fRec83[i] = 0;
	for (int i=0; i<3; i++) fRec82[i] = 0;
	for (int i=0; i<3; i++) fRec81[i] = 0;
	for (int i=0; i<2; i++) fVec15[i] = 0;
	for (int i=0; i<2; i++) fRec85[i] = 0;
	for (int i=0; i<2; i++) fRec80[i] = 0;
	for (int i=0; i<2; i++) fRec79[i] = 0;
	for (int i=0; i<2; i++) fVec16[i] = 0;
	for (int i=0; i<2; i++) fRec88[i] = 0;
	for (int i=0; i<2; i++) fRec87[i] = 0;
	for (int i=0; i<2; i++) fRec86[i] = 0;
	for (int i=0; i<2; i++) fRec78[i] = 0;
	for (int i=0; i<2; i++) fRec77[i] = 0;
	for (int i=0; i<2; i++) fVec17[i] = 0;
	for (int i=0; i<2; i++) fRec89[i] = 0;
	for (int i=0; i<2; i++) fRec76[i] = 0;
	for (int i=0; i<2; i++) fRec75[i] = 0;
	for (int i=0; i<2; i++) fVec18[i] = 0;
	for (int i=0; i<2; i++) fRec92[i] = 0;
	for (int i=0; i<2; i++) fRec91[i] = 0;
	for (int i=0; i<2; i++) fRec90[i] = 0;
	for (int i=0; i<2; i++) fRec74[i] = 0;
	for (int i=0; i<2; i++) fVec19[i] = 0;
	for (int i=0; i<2; i++) fRec93[i] = 0;
	for (int i=0; i<2; i++) fRec73[i] = 0;
	for (int i=0; i<2; i++) fRec72[i] = 0;
	for (int i=0; i<2; i++) fRec96[i] = 0;
	for (int i=0; i<32768; i++) fVec20[i] = 0;
	for (int i=0; i<2; i++) fRec95[i] = 0;
	for (int i=0; i<2; i++) fRec94[i] = 0;
	for (int i=0; i<3; i++) fRec104[i] = 0;
	for (int i=0; i<2; i++) fVec21[i] = 0;
	for (int i=0; i<2; i++) fRec103[i] = 0;
	for (int i=0; i<2; i++) fRec102[i] = 0;
	for (int i=0; i<3; i++) fRec101[i] = 0;
	for (int i=0; i<2; i++) fVec22[i] = 0;
	for (int i=0; i<2; i++) fRec100[i] = 0;
	for (int i=0; i<3; i++) fRec99[i] = 0;
	for (int i=0; i<3; i++) fRec98[i] = 0;
	for (int i=0; i<2; i++) fRec108[i] = 0;
	for (int i=0; i<3; i++) fRec107[i] = 0;
	for (int i=0; i<2; i++) fVec23[i] = 0;
	for (int i=0; i<2; i++) fRec106[i] = 0;
	for (int i=0; i<3; i++) fRec105[i] = 0;
	for (int i=0; i<2; i++) fRec112[i] = 0;
	for (int i=0; i<3; i++) fRec111[i] = 0;
	for (int i=0; i<3; i++) fRec110[i] = 0;
	for (int i=0; i<3; i++) fRec109[i] = 0;
	for (int i=0; i<2; i++) fRec114[i] = 0;
	for (int i=0; i<3; i++) fRec113[i] = 0;
	for (int i=0; i<2; i++) fVec24[i] = 0;
	for (int i=0; i<2; i++) fRec97[i] = 0;
	for (int i=0; i<2; i++) fVec25[i] = 0;
	for (int i=0; i<2; i++) fRec71[i] = 0;
	for (int i=0; i<2; i++) fVec26[i] = 0;
	for (int i=0; i<2; i++) fRec115[i] = 0;
	for (int i=0; i<2; i++) fRec70[i] = 0;
	for (int i=0; i<2; i++) fRec69[i] = 0;
	for (int i=0; i<2; i++) fVec27[i] = 0;
	for (int i=0; i<2; i++) fRec118[i] = 0;
	for (int i=0; i<2; i++) fRec117[i] = 0;
	for (int i=0; i<2; i++) fRec116[i] = 0;
	for (int i=0; i<2; i++) fRec67[i] = 0;
	for (int i=0; i<2; i++) fRec65[i] = 0;
	for (int i=0; i<2; i++) fRec63[i] = 0;
	for (int i=0; i<2; i++) fRec61[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	iConst0 = min(192000, max(1, fSamplingFreq));
	fConst1 = (1.0 / tan((97.38937226128358 / double(iConst0))));
	fConst2 = (1 + fConst1);
	fConst3 = (0 - ((1 - fConst1) / fConst2));
	fConst4 = (1.0 / tan((20517.741620594938 / double(iConst0))));
	fConst5 = (1 + fConst4);
	fConst6 = (0 - ((1 - fConst4) / fConst5));
	fConst7 = (1.0 / fConst5);
	fConst8 = tan((37699.11184307752 / double(iConst0)));
	fConst9 = (2 * (1 - (1.0 / faustpower<2>(fConst8))));
	fConst10 = (1.0 / fConst8);
	fConst11 = (1 + ((fConst10 - 0.7653668647301795) / fConst8));
	fConst12 = (1.0 / (1 + ((0.7653668647301795 + fConst10) / fConst8)));
	fConst13 = (1 + ((fConst10 - 1.8477590650225735) / fConst8));
	fConst14 = (1.0 / (1 + ((fConst10 + 1.8477590650225735) / fConst8)));
	fConst15 = (973.8937226128359 / double(iConst0));
	fConst16 = (1 - fConst15);
	fConst17 = (1.0 / (1 + fConst15));
	fConst18 = (1.0 / tan((270.1769682087222 / double(iConst0))));
	fConst19 = (1 + fConst18);
	fConst20 = (0 - ((1 - fConst18) / fConst19));
	fConst21 = (1.0 / fConst19);
	fConst22 = (0 - fConst1);
	fConst23 = (0.05 / fConst2);
	fConst24 = (1.0 / tan((414.6902302738527 / double(iConst0))));
	fConst25 = (1 + fConst24);
	fConst26 = (0 - ((1 - fConst24) / fConst25));
	fConst27 = (1.0 / fConst25);
	fConst28 = (1.0 / tan((609.4689747964198 / double(iConst0))));
	fConst29 = (1 + fConst28);
	fConst30 = (0 - ((1 - fConst28) / fConst29));
	fConst31 = (1.0 / fConst29);
	IOTA = 0;
	iConst32 = int((int((0.1111111111111111 * iConst0)) & 65535));
	fConst33 = (0.009000000000000008 / double(iConst0));
	fConst34 = tan((942.4777960769379 / double(iConst0)));
	fConst35 = (1.0 / faustpower<2>(fConst34));
	fConst36 = (2 * (1 - fConst35));
	fConst37 = (1.0 / fConst34);
	fConst38 = (1 + ((fConst37 - 1.0) / fConst34));
	fConst39 = (1.0 / (1 + ((1.0 + fConst37) / fConst34)));
	fConst40 = tan((3769.9111843077517 / double(iConst0)));
	fConst41 = (1.0 / faustpower<2>(fConst40));
	fConst42 = (2 * (1 - fConst41));
	fConst43 = (1.0 / fConst40);
	fConst44 = (1 + ((fConst43 - 1.0000000000000004) / fConst40));
	fConst45 = (1 + ((fConst43 + 1.0000000000000004) / fConst40));
	fConst46 = (1.0 / fConst45);
	fConst47 = (1 + fConst43);
	fConst48 = (0 - ((1 - fConst43) / fConst47));
	fConst49 = tan((10053.096491487338 / double(iConst0)));
	fConst50 = (1.0 / faustpower<2>(fConst49));
	fConst51 = (2 * (1 - fConst50));
	fConst52 = (1.0 / fConst49);
	fConst53 = (1 + ((fConst52 - 1.0000000000000004) / fConst49));
	fConst54 = (1 + ((1.0000000000000004 + fConst52) / fConst49));
	fConst55 = (1.0 / fConst54);
	fConst56 = (1 + fConst52);
	fConst57 = (0 - ((1 - fConst52) / fConst56));
	fConst58 = tan((47123.8898038469 / double(iConst0)));
	fConst59 = (2 * (1 - (1.0 / faustpower<2>(fConst58))));
	fConst60 = (1.0 / fConst58);
	fConst61 = (1 + ((fConst60 - 1.414213562373095) / fConst58));
	fConst62 = (1 + ((1.414213562373095 + fConst60) / fConst58));
	fConst63 = (1.0 / fConst62);
	fConst64 = (1.0 / (fConst2 * fConst62));
	fConst65 = (1.0 / fConst56);
	fConst66 = (0 - fConst43);
	fConst67 = (1.0 / (fConst47 * fConst54));
	fConst68 = (2 * (0 - fConst41));
	fConst69 = (1 + ((fConst37 - 1.0000000000000004) / fConst34));
	fConst70 = (1.0 / (1 + ((fConst37 + 1.0000000000000004) / fConst34)));
	fConst71 = (1 + fConst37);
	fConst72 = (0 - ((1 - fConst37) / fConst71));
	fConst73 = (0 - fConst37);
	fConst74 = (1.0 / (fConst71 * fConst45));
	fConst75 = (2 * (0 - fConst35));
	fConst76 = (1 + ((fConst43 - 1.0) / fConst40));
	fConst77 = (1.0 / (1 + ((1.0 + fConst43) / fConst40)));
	fConst78 = (0 - fConst52);
	fConst79 = (2 * (0 - fConst50));
	fConst80 = (0.025 / fConst2);
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *input1, FAUSTFLOAT *output0, FAUSTFLOAT *output1)
{
#define fslider0 (*fslider0_)
#define fslider1 (*fslider1_)
#define fslider2 (*fslider2_)
#define fslider3 (*fslider3_)
	double 	fSlow0 = (0.0010000000000000009 * pow(10,(0.05 * fslider0)));
	double 	fSlow1 = (1.000000000000001e-05 * fslider1);
	double 	fSlow2 = (0.0010000000000000009 * pow(10,(0.05 * fslider2)));
	double 	fSlow3 = fslider3;
	double 	fSlow4 = (1.25 * fSlow3);
	double 	fSlow5 = (2 * (fSlow3 - 0.5));
	double 	fSlow6 = (0.024937655860349125 * (1 - max((double)0, fSlow5)));
	double 	fSlow7 = pow(1e+01,(1.2 * fSlow3));
	double 	fSlow8 = (fConst70 * pow(1e+01,(2 * fSlow3)));
	double 	fSlow9 = pow(1e+01,(0.8 * fSlow3));
	double 	fSlow10 = (fConst70 * pow(1e+01,(0.9 * fSlow3)));
	double 	fSlow11 = (1 - max((double)0, (0 - fSlow5)));
	for (int i=0; i<count; i++) {
		double fTemp0 = (0.5 * fRec0[1]);
		double fTemp1 = (fTemp0 + (0.4 * fRec2[1]));
		double fTemp2 = (fTemp1 + (0.3 * fRec4[1]));
		double fTemp3 = (1e-15 + (0.0041 * fRec9[1]));
		fVec0[0] = fTemp3;
		fRec10[0] = ((fConst7 * (fVec0[0] + fVec0[1])) + (fConst6 * fRec10[1]));
		fRec11[0] = (fSlow0 + (0.999 * fRec11[1]));
		fRec13[0] = (fSlow1 + (0.999 * fRec13[1]));
		double fTemp4 = (1 - fRec13[0]);
		double fTemp5 = (double)input0[i];
		fVec1[0] = fTemp5;
		fRec26[0] = (fConst17 * ((fVec1[0] - fVec1[1]) + (fConst16 * fRec26[1])));
		fRec25[0] = (fConst17 * ((fRec26[0] - fRec26[1]) + (fConst16 * fRec25[1])));
		fRec24[0] = (fRec25[0] - (fConst14 * ((fConst13 * fRec24[2]) + (fConst9 * fRec24[1]))));
		fRec23[0] = ((fConst14 * (fRec24[2] + (fRec24[0] + (2 * fRec24[1])))) - (fConst12 * ((fConst11 * fRec23[2]) + (fConst9 * fRec23[1]))));
		fRec27[0] = (fSlow2 + (0.999 * fRec27[1]));
		double fTemp6 = (1e-15 + (0.027 * fRec22[1]));
		fVec2[0] = fTemp6;
		fRec28[0] = ((fConst21 * (fVec2[0] + fVec2[1])) + (fConst20 * fRec28[1]));
		fRec22[0] = (Ftube(TUBE_TABLE_6DJ8_68k, ((fRec28[0] + (fConst12 * (fRec27[0] * (fRec23[2] + (fRec23[0] + (2 * fRec23[1])))))) - 1.863945999999999)) - 60.96496296296296);
		fRec21[0] = ((fConst23 * ((fConst22 * fRec22[1]) + (fConst1 * fRec22[0]))) + (fConst3 * fRec21[1]));
		double fTemp7 = (1e-15 + (0.015 * fRec30[1]));
		fVec3[0] = fTemp7;
		fRec31[0] = ((fConst27 * (fVec3[0] + fVec3[1])) + (fConst26 * fRec31[1]));
		fRec30[0] = (Ftube(TUBE_TABLE_6DJ8_250k, ((fRec31[0] + fRec20[1]) - 1.2716089999999989)) - 45.22606666666667);
		fRec29[0] = ((fConst23 * ((fConst22 * fRec30[1]) + (fConst1 * fRec30[0]))) + (fConst3 * fRec29[1]));
		fRec20[0] = ((0.6 * fRec29[0]) + fRec21[0]);
		fRec19[0] = ((fConst7 * (fRec20[0] + fRec20[1])) + (fConst6 * fRec19[1]));
		double fTemp8 = (1e-15 + (0.015 * fRec18[1]));
		fVec4[0] = fTemp8;
		fRec32[0] = ((fConst27 * (fVec4[0] + fVec4[1])) + (fConst26 * fRec32[1]));
		fRec18[0] = (Ftube(TUBE_TABLE_6DJ8_250k, ((fRec32[0] + fRec19[0]) - 1.2716089999999989)) - 45.22606666666667);
		fRec17[0] = ((fConst23 * ((fConst22 * fRec18[1]) + (fConst1 * fRec18[0]))) + (fConst3 * fRec17[1]));
		double fTemp9 = (1e-15 + (0.0082 * fRec34[1]));
		fVec5[0] = fTemp9;
		fRec35[0] = ((fConst31 * (fVec5[0] + fVec5[1])) + (fConst30 * fRec35[1]));
		fRec34[0] = (Ftube(TUBE_TABLE_6DJ8_250k, ((fRec35[0] + fRec16[1]) - 0.797042999999999)) - 32.799634146341475);
		fRec33[0] = ((fConst23 * ((fConst22 * fRec34[1]) + (fConst1 * fRec34[0]))) + (fConst3 * fRec33[1]));
		fRec16[0] = ((0.6 * fRec33[0]) + fRec17[0]);
		double fTemp10 = (1e-15 + (0.0082 * fRec15[1]));
		fVec6[0] = fTemp10;
		fRec36[0] = ((fConst31 * (fVec6[0] + fVec6[1])) + (fConst30 * fRec36[1]));
		fRec15[0] = (Ftube(TUBE_TABLE_6DJ8_250k, ((fRec36[0] + fRec16[0]) - 0.797042999999999)) - 32.799634146341475);
		fRec14[0] = ((fConst23 * ((fConst22 * fRec15[1]) + (fConst1 * fRec15[0]))) + (fConst3 * fRec14[1]));
		double fTemp11 = (fRec14[0] * fTemp4);
		double fTemp12 = (fRec14[0] * fRec13[0]);
		double fTemp13 = fabs(fTemp12);
		fRec39[0] = ((9.999999999998899e-05 * fTemp13) + (0.9999 * fRec39[1]));
		double fTemp14 = max(fRec39[0], fTemp13);
		fVec7[IOTA&32767] = fTemp14;
		fRec38[0] = ((fVec7[IOTA&32767] + fRec38[1]) - fVec7[(IOTA-iConst32)&32767]);
		fRec37[0] = ((fConst33 * fRec38[0]) + (0.999 * fRec37[1]));
		double fTemp15 = max(-1.0, min(-0.01, (fVec7[IOTA&32767] - (1.0 + (1.02 * fRec37[0])))));
		double fTemp16 = (0 - fTemp15);
		double fTemp17 = (40.1 * fTemp16);
		double fTemp18 = max((double)-600, fTemp17);
		double fTemp19 = (0 - fTemp18);
		double fTemp20 = (fTemp12 - fTemp15);
		double fTemp21 = (40.1 * fTemp20);
		double fTemp22 = max((double)-600, fTemp21);
		double fTemp23 = (0 - fTemp22);
		double fTemp24 = (((int((fabs(fTemp21) > 0.0001)))?((int((fTemp22 < -50)))?(exp(fTemp22) * fTemp23):(fTemp22 / (1 - exp(fTemp23)))):(1 + (fTemp20 * (20.05 + (134.00083333333336 * fTemp20))))) - ((int((fabs(fTemp17) > 0.0001)))?((int((fTemp18 < -50)))?(exp(fTemp18) * fTemp19):(fTemp18 / (1 - exp(fTemp19)))):(1 + (fTemp16 * (20.05 + (134.00083333333336 * fTemp16))))));
		double fTemp25 = (fConst36 * fRec41[1]);
		fRec47[0] = ((0.024937655860349125 * fTemp24) - (fConst63 * ((fConst61 * fRec47[2]) + (fConst59 * fRec47[1]))));
		double fTemp26 = (fRec47[2] + (fRec47[0] + (2 * fRec47[1])));
		fVec8[0] = fTemp26;
		fRec46[0] = ((fConst64 * ((fConst22 * fVec8[1]) + (fConst1 * fVec8[0]))) + (fConst3 * fRec46[1]));
		fRec45[0] = ((fConst65 * (fRec46[0] + fRec46[1])) + (fConst57 * fRec45[1]));
		fRec44[0] = (fRec45[0] - (fConst55 * ((fConst53 * fRec44[2]) + (fConst51 * fRec44[1]))));
		double fTemp27 = (fRec44[2] + (fRec44[0] + (2 * fRec44[1])));
		fVec9[0] = fTemp27;
		fRec43[0] = ((fConst67 * ((fConst66 * fVec9[1]) + (fConst43 * fVec9[0]))) + (fConst48 * fRec43[1]));
		fRec42[0] = (fRec43[0] - (fConst46 * ((fConst44 * fRec42[2]) + (fConst42 * fRec42[1]))));
		fRec41[0] = ((fConst46 * (((fConst41 * fRec42[0]) + (fConst68 * fRec42[1])) + (fConst41 * fRec42[2]))) - (fConst39 * ((fConst38 * fRec41[2]) + fTemp25)));
		double fTemp28 = max((double)-1, min((double)1, (fSlow7 * (fRec41[2] + (fConst39 * (fTemp25 + (fConst38 * fRec41[0])))))));
		fRec51[0] = ((fConst67 * (fVec9[0] + fVec9[1])) + (fConst48 * fRec51[1]));
		fRec50[0] = (fRec51[0] - (fConst46 * ((fConst44 * fRec50[2]) + (fConst42 * fRec50[1]))));
		double fTemp29 = (fRec50[2] + (fRec50[0] + (2 * fRec50[1])));
		fVec10[0] = fTemp29;
		fRec49[0] = ((fConst74 * ((fConst73 * fVec10[1]) + (fConst37 * fVec10[0]))) + (fConst72 * fRec49[1]));
		fRec48[0] = (fRec49[0] - (fConst70 * ((fConst69 * fRec48[2]) + (fConst36 * fRec48[1]))));
		double fTemp30 = max((double)-1, min((double)1, (fSlow8 * (((fConst35 * fRec48[0]) + (fConst75 * fRec48[1])) + (fConst35 * fRec48[2])))));
		double fTemp31 = (fConst36 * fRec52[1]);
		double fTemp32 = (fConst42 * fRec53[1]);
		fRec55[0] = ((fConst65 * ((fConst78 * fRec46[1]) + (fConst52 * fRec46[0]))) + (fConst57 * fRec55[1]));
		fRec54[0] = (fRec55[0] - (fConst55 * ((fConst53 * fRec54[2]) + (fConst51 * fRec54[1]))));
		fRec53[0] = ((fConst55 * (((fConst50 * fRec54[0]) + (fConst79 * fRec54[1])) + (fConst50 * fRec54[2]))) - (fConst77 * ((fConst76 * fRec53[2]) + fTemp32)));
		fRec52[0] = ((fRec53[2] + (fConst77 * (fTemp32 + (fConst76 * fRec53[0])))) - (fConst39 * ((fConst38 * fRec52[2]) + fTemp31)));
		double fTemp33 = max((double)-1, min((double)1, (fSlow9 * (fRec52[2] + (fConst39 * (fTemp31 + (fConst38 * fRec52[0])))))));
		fRec57[0] = ((fConst74 * (fVec10[0] + fVec10[1])) + (fConst72 * fRec57[1]));
		fRec56[0] = (fRec57[0] - (fConst70 * ((fConst69 * fRec56[2]) + (fConst36 * fRec56[1]))));
		double fTemp34 = max((double)-1, min((double)1, (fSlow10 * (fRec56[2] + (fRec56[0] + (2 * fRec56[1]))))));
		double fTemp35 = ((1.2589412 * (fTemp34 * (1 - (0.3333333333333333 * faustpower<2>(fTemp34))))) + (1.584893192 * ((fTemp33 * (1 - (0.3333333333333333 * faustpower<2>(fTemp33)))) + ((fTemp30 * (1 - (0.3333333333333333 * faustpower<2>(fTemp30)))) + (0.8413951417869425 * (fTemp28 * (1 - (0.3333333333333333 * faustpower<2>(fTemp28)))))))));
		fVec11[0] = fTemp35;
		fRec40[0] = ((fConst7 * (fVec11[0] + fVec11[1])) + (fConst6 * fRec40[1]));
		double fTemp36 = (((fSlow11 * fRec40[0]) + (fSlow6 * fTemp24)) + (fTemp11 * (1 + (fSlow4 * ((4 - (4 * fabs(fTemp11))) - 1)))));
		fVec12[0] = fTemp36;
		fRec12[0] = ((fConst7 * (fVec12[0] + fVec12[1])) + (fConst6 * fRec12[1]));
		double fTemp37 = (fRec12[0] * fRec11[0]);
		fRec9[0] = (Ftube(TUBE_TABLE_6V6_68k, ((fTemp37 + fRec10[0]) - 0.664540999999999)) - 87.91682926829267);
		fRec8[0] = ((fConst80 * ((fConst22 * fRec9[1]) + (fConst1 * fRec9[0]))) + (fConst3 * fRec8[1]));
		double fTemp38 = (1e-15 + (0.0041 * fRec59[1]));
		fVec13[0] = fTemp38;
		fRec60[0] = ((fConst7 * (fVec13[0] + fVec13[1])) + (fConst6 * fRec60[1]));
		fRec59[0] = (Ftube(TUBE_TABLE_6V6_250k, ((fRec60[0] + fTemp37) - 0.659760999999999)) - 89.08268292682925);
		fRec58[0] = ((fConst80 * ((fConst22 * fRec59[1]) + (fConst1 * fRec59[0]))) + (fConst3 * fRec58[1]));
		double fTemp39 = (min(0.7, fRec58[0]) + max(-0.75, fRec8[0]));
		double fTemp40 = ((fTemp39 + (0.2 * fRec6[1])) - fTemp2);
		fRec6[0] = fTemp40;
		double 	fRec7 = (0 - (0.2 * fTemp40));
		fRec4[0] = (fRec7 + fRec6[1]);
		double 	fRec5 = (0.3 * (fTemp39 - fTemp2));
		fRec2[0] = (fRec5 + fRec4[1]);
		double 	fRec3 = (0.4 * (fTemp39 - fTemp1));
		fRec0[0] = (fRec3 + fRec2[1]);
		double 	fRec1 = (0.5 * (fTemp39 - fTemp0));
		output0[i] = (FAUSTFLOAT)(fRec1 + fRec0[1]);
		double fTemp41 = (0.5 * fRec61[1]);
		double fTemp42 = (fTemp41 + (0.4 * fRec63[1]));
		double fTemp43 = (fTemp42 + (0.3 * fRec65[1]));
		double fTemp44 = (double)input1[i];
		fVec14[0] = fTemp44;
		fRec84[0] = (fConst17 * ((fVec14[0] - fVec14[1]) + (fConst16 * fRec84[1])));
		fRec83[0] = (fConst17 * ((fRec84[0] - fRec84[1]) + (fConst16 * fRec83[1])));
		fRec82[0] = (fRec83[0] - (fConst14 * ((fConst13 * fRec82[2]) + (fConst9 * fRec82[1]))));
		fRec81[0] = ((fConst14 * (fRec82[2] + (fRec82[0] + (2 * fRec82[1])))) - (fConst12 * ((fConst11 * fRec81[2]) + (fConst9 * fRec81[1]))));
		double fTemp45 = (1e-15 + (0.027 * fRec80[1]));
		fVec15[0] = fTemp45;
		fRec85[0] = ((fConst21 * (fVec15[0] + fVec15[1])) + (fConst20 * fRec85[1]));
		fRec80[0] = (Ftube(TUBE_TABLE_6DJ8_68k, ((fRec85[0] + (fConst12 * (fRec27[0] * (fRec81[2] + (fRec81[0] + (2 * fRec81[1])))))) - 1.863945999999999)) - 60.96496296296296);
		fRec79[0] = ((fConst23 * ((fConst22 * fRec80[1]) + (fConst1 * fRec80[0]))) + (fConst3 * fRec79[1]));
		double fTemp46 = (1e-15 + (0.015 * fRec87[1]));
		fVec16[0] = fTemp46;
		fRec88[0] = ((fConst27 * (fVec16[0] + fVec16[1])) + (fConst26 * fRec88[1]));
		fRec87[0] = (Ftube(TUBE_TABLE_6DJ8_250k, ((fRec88[0] + fRec78[1]) - 1.2716089999999989)) - 45.22606666666667);
		fRec86[0] = ((fConst23 * ((fConst22 * fRec87[1]) + (fConst1 * fRec87[0]))) + (fConst3 * fRec86[1]));
		fRec78[0] = ((0.6 * fRec86[0]) + fRec79[0]);
		fRec77[0] = ((fConst7 * (fRec78[0] + fRec78[1])) + (fConst6 * fRec77[1]));
		double fTemp47 = (1e-15 + (0.015 * fRec76[1]));
		fVec17[0] = fTemp47;
		fRec89[0] = ((fConst27 * (fVec17[0] + fVec17[1])) + (fConst26 * fRec89[1]));
		fRec76[0] = (Ftube(TUBE_TABLE_6DJ8_250k, ((fRec89[0] + fRec77[0]) - 1.2716089999999989)) - 45.22606666666667);
		fRec75[0] = ((fConst23 * ((fConst22 * fRec76[1]) + (fConst1 * fRec76[0]))) + (fConst3 * fRec75[1]));
		double fTemp48 = (1e-15 + (0.0082 * fRec91[1]));
		fVec18[0] = fTemp48;
		fRec92[0] = ((fConst31 * (fVec18[0] + fVec18[1])) + (fConst30 * fRec92[1]));
		fRec91[0] = (Ftube(TUBE_TABLE_6DJ8_250k, ((fRec92[0] + fRec74[1]) - 0.797042999999999)) - 32.799634146341475);
		fRec90[0] = ((fConst23 * ((fConst22 * fRec91[1]) + (fConst1 * fRec91[0]))) + (fConst3 * fRec90[1]));
		fRec74[0] = ((0.6 * fRec90[0]) + fRec75[0]);
		double fTemp49 = (1e-15 + (0.0082 * fRec73[1]));
		fVec19[0] = fTemp49;
		fRec93[0] = ((fConst31 * (fVec19[0] + fVec19[1])) + (fConst30 * fRec93[1]));
		fRec73[0] = (Ftube(TUBE_TABLE_6DJ8_250k, ((fRec93[0] + fRec74[0]) - 0.797042999999999)) - 32.799634146341475);
		fRec72[0] = ((fConst23 * ((fConst22 * fRec73[1]) + (fConst1 * fRec73[0]))) + (fConst3 * fRec72[1]));
		double fTemp50 = (fTemp4 * fRec72[0]);
		double fTemp51 = (fRec13[0] * fRec72[0]);
		double fTemp52 = fabs(fTemp51);
		fRec96[0] = ((9.999999999998899e-05 * fTemp52) + (0.9999 * fRec96[1]));
		double fTemp53 = max(fRec96[0], fTemp52);
		fVec20[IOTA&32767] = fTemp53;
		fRec95[0] = ((fVec20[IOTA&32767] + fRec95[1]) - fVec20[(IOTA-iConst32)&32767]);
		fRec94[0] = ((fConst33 * fRec95[0]) + (0.999 * fRec94[1]));
		double fTemp54 = max(-1.0, min(-0.01, (fVec20[IOTA&32767] - (1.0 + (1.02 * fRec94[0])))));
		double fTemp55 = (0 - fTemp54);
		double fTemp56 = (40.1 * fTemp55);
		double fTemp57 = max((double)-600, fTemp56);
		double fTemp58 = (0 - fTemp57);
		double fTemp59 = (fTemp51 - fTemp54);
		double fTemp60 = (40.1 * fTemp59);
		double fTemp61 = max((double)-600, fTemp60);
		double fTemp62 = (0 - fTemp61);
		double fTemp63 = (((int((fabs(fTemp60) > 0.0001)))?((int((fTemp61 < -50)))?(exp(fTemp61) * fTemp62):(fTemp61 / (1 - exp(fTemp62)))):(1 + (fTemp59 * (20.05 + (134.00083333333336 * fTemp59))))) - ((int((fabs(fTemp56) > 0.0001)))?((int((fTemp57 < -50)))?(exp(fTemp57) * fTemp58):(fTemp57 / (1 - exp(fTemp58)))):(1 + (fTemp55 * (20.05 + (134.00083333333336 * fTemp55))))));
		double fTemp64 = (fConst36 * fRec98[1]);
		fRec104[0] = ((0.024937655860349125 * fTemp63) - (fConst63 * ((fConst61 * fRec104[2]) + (fConst59 * fRec104[1]))));
		double fTemp65 = (fRec104[2] + (fRec104[0] + (2 * fRec104[1])));
		fVec21[0] = fTemp65;
		fRec103[0] = ((fConst64 * ((fConst22 * fVec21[1]) + (fConst1 * fVec21[0]))) + (fConst3 * fRec103[1]));
		fRec102[0] = ((fConst65 * (fRec103[0] + fRec103[1])) + (fConst57 * fRec102[1]));
		fRec101[0] = (fRec102[0] - (fConst55 * ((fConst53 * fRec101[2]) + (fConst51 * fRec101[1]))));
		double fTemp66 = (fRec101[2] + (fRec101[0] + (2 * fRec101[1])));
		fVec22[0] = fTemp66;
		fRec100[0] = ((fConst67 * ((fConst66 * fVec22[1]) + (fConst43 * fVec22[0]))) + (fConst48 * fRec100[1]));
		fRec99[0] = (fRec100[0] - (fConst46 * ((fConst44 * fRec99[2]) + (fConst42 * fRec99[1]))));
		fRec98[0] = ((fConst46 * (((fConst41 * fRec99[0]) + (fConst68 * fRec99[1])) + (fConst41 * fRec99[2]))) - (fConst39 * ((fConst38 * fRec98[2]) + fTemp64)));
		double fTemp67 = max((double)-1, min((double)1, (fSlow7 * (fRec98[2] + (fConst39 * (fTemp64 + (fConst38 * fRec98[0])))))));
		fRec108[0] = ((fConst67 * (fVec22[0] + fVec22[1])) + (fConst48 * fRec108[1]));
		fRec107[0] = (fRec108[0] - (fConst46 * ((fConst44 * fRec107[2]) + (fConst42 * fRec107[1]))));
		double fTemp68 = (fRec107[2] + (fRec107[0] + (2 * fRec107[1])));
		fVec23[0] = fTemp68;
		fRec106[0] = ((fConst74 * ((fConst73 * fVec23[1]) + (fConst37 * fVec23[0]))) + (fConst72 * fRec106[1]));
		fRec105[0] = (fRec106[0] - (fConst70 * ((fConst69 * fRec105[2]) + (fConst36 * fRec105[1]))));
		double fTemp69 = max((double)-1, min((double)1, (fSlow8 * (((fConst35 * fRec105[0]) + (fConst75 * fRec105[1])) + (fConst35 * fRec105[2])))));
		double fTemp70 = (fConst36 * fRec109[1]);
		double fTemp71 = (fConst42 * fRec110[1]);
		fRec112[0] = ((fConst65 * ((fConst78 * fRec103[1]) + (fConst52 * fRec103[0]))) + (fConst57 * fRec112[1]));
		fRec111[0] = (fRec112[0] - (fConst55 * ((fConst53 * fRec111[2]) + (fConst51 * fRec111[1]))));
		fRec110[0] = ((fConst55 * (((fConst50 * fRec111[0]) + (fConst79 * fRec111[1])) + (fConst50 * fRec111[2]))) - (fConst77 * ((fConst76 * fRec110[2]) + fTemp71)));
		fRec109[0] = ((fRec110[2] + (fConst77 * (fTemp71 + (fConst76 * fRec110[0])))) - (fConst39 * ((fConst38 * fRec109[2]) + fTemp70)));
		double fTemp72 = max((double)-1, min((double)1, (fSlow9 * (fRec109[2] + (fConst39 * (fTemp70 + (fConst38 * fRec109[0])))))));
		fRec114[0] = ((fConst74 * (fVec23[0] + fVec23[1])) + (fConst72 * fRec114[1]));
		fRec113[0] = (fRec114[0] - (fConst70 * ((fConst69 * fRec113[2]) + (fConst36 * fRec113[1]))));
		double fTemp73 = max((double)-1, min((double)1, (fSlow10 * (fRec113[2] + (fRec113[0] + (2 * fRec113[1]))))));
		double fTemp74 = ((1.2589412 * (fTemp73 * (1 - (0.3333333333333333 * faustpower<2>(fTemp73))))) + (1.584893192 * ((fTemp72 * (1 - (0.3333333333333333 * faustpower<2>(fTemp72)))) + ((fTemp69 * (1 - (0.3333333333333333 * faustpower<2>(fTemp69)))) + (0.8413951417869425 * (fTemp67 * (1 - (0.3333333333333333 * faustpower<2>(fTemp67)))))))));
		fVec24[0] = fTemp74;
		fRec97[0] = ((fConst7 * (fVec24[0] + fVec24[1])) + (fConst6 * fRec97[1]));
		double fTemp75 = (((fSlow11 * fRec97[0]) + (fSlow6 * fTemp63)) + (fTemp50 * (1 + (fSlow4 * ((4 - (4 * fabs(fTemp50))) - 1)))));
		fVec25[0] = fTemp75;
		fRec71[0] = ((fConst7 * (fVec25[0] + fVec25[1])) + (fConst6 * fRec71[1]));
		double fTemp76 = (fRec11[0] * fRec71[0]);
		double fTemp77 = (1e-15 + (0.0041 * fRec70[1]));
		fVec26[0] = fTemp77;
		fRec115[0] = ((fConst7 * (fVec26[0] + fVec26[1])) + (fConst6 * fRec115[1]));
		fRec70[0] = (Ftube(TUBE_TABLE_6V6_68k, ((fRec115[0] + fTemp76) - 0.664540999999999)) - 87.91682926829267);
		fRec69[0] = ((fConst80 * ((fConst22 * fRec70[1]) + (fConst1 * fRec70[0]))) + (fConst3 * fRec69[1]));
		double fTemp78 = (1e-15 + (0.0041 * fRec117[1]));
		fVec27[0] = fTemp78;
		fRec118[0] = ((fConst7 * (fVec27[0] + fVec27[1])) + (fConst6 * fRec118[1]));
		fRec117[0] = (Ftube(TUBE_TABLE_6V6_250k, ((fRec118[0] + fTemp76) - 0.659760999999999)) - 89.08268292682925);
		fRec116[0] = ((fConst80 * ((fConst22 * fRec117[1]) + (fConst1 * fRec117[0]))) + (fConst3 * fRec116[1]));
		double fTemp79 = (min(0.7, fRec116[0]) + max(-0.75, fRec69[0]));
		double fTemp80 = ((fTemp79 + (0.2 * fRec67[1])) - fTemp43);
		fRec67[0] = fTemp80;
		double 	fRec68 = (0 - (0.2 * fTemp80));
		fRec65[0] = (fRec68 + fRec67[1]);
		double 	fRec66 = (0.3 * (fTemp79 - fTemp43));
		fRec63[0] = (fRec66 + fRec65[1]);
		double 	fRec64 = (0.4 * (fTemp79 - fTemp42));
		fRec61[0] = (fRec64 + fRec63[1]);
		double 	fRec62 = (0.5 * (fTemp79 - fTemp41));
		output1[i] = (FAUSTFLOAT)(fRec62 + fRec61[1]);
		// post processing
		fRec61[1] = fRec61[0];
		fRec63[1] = fRec63[0];
		fRec65[1] = fRec65[0];
		fRec67[1] = fRec67[0];
		fRec116[1] = fRec116[0];
		fRec117[1] = fRec117[0];
		fRec118[1] = fRec118[0];
		fVec27[1] = fVec27[0];
		fRec69[1] = fRec69[0];
		fRec70[1] = fRec70[0];
		fRec115[1] = fRec115[0];
		fVec26[1] = fVec26[0];
		fRec71[1] = fRec71[0];
		fVec25[1] = fVec25[0];
		fRec97[1] = fRec97[0];
		fVec24[1] = fVec24[0];
		fRec113[2] = fRec113[1]; fRec113[1] = fRec113[0];
		fRec114[1] = fRec114[0];
		fRec109[2] = fRec109[1]; fRec109[1] = fRec109[0];
		fRec110[2] = fRec110[1]; fRec110[1] = fRec110[0];
		fRec111[2] = fRec111[1]; fRec111[1] = fRec111[0];
		fRec112[1] = fRec112[0];
		fRec105[2] = fRec105[1]; fRec105[1] = fRec105[0];
		fRec106[1] = fRec106[0];
		fVec23[1] = fVec23[0];
		fRec107[2] = fRec107[1]; fRec107[1] = fRec107[0];
		fRec108[1] = fRec108[0];
		fRec98[2] = fRec98[1]; fRec98[1] = fRec98[0];
		fRec99[2] = fRec99[1]; fRec99[1] = fRec99[0];
		fRec100[1] = fRec100[0];
		fVec22[1] = fVec22[0];
		fRec101[2] = fRec101[1]; fRec101[1] = fRec101[0];
		fRec102[1] = fRec102[0];
		fRec103[1] = fRec103[0];
		fVec21[1] = fVec21[0];
		fRec104[2] = fRec104[1]; fRec104[1] = fRec104[0];
		fRec94[1] = fRec94[0];
		fRec95[1] = fRec95[0];
		fRec96[1] = fRec96[0];
		fRec72[1] = fRec72[0];
		fRec73[1] = fRec73[0];
		fRec93[1] = fRec93[0];
		fVec19[1] = fVec19[0];
		fRec74[1] = fRec74[0];
		fRec90[1] = fRec90[0];
		fRec91[1] = fRec91[0];
		fRec92[1] = fRec92[0];
		fVec18[1] = fVec18[0];
		fRec75[1] = fRec75[0];
		fRec76[1] = fRec76[0];
		fRec89[1] = fRec89[0];
		fVec17[1] = fVec17[0];
		fRec77[1] = fRec77[0];
		fRec78[1] = fRec78[0];
		fRec86[1] = fRec86[0];
		fRec87[1] = fRec87[0];
		fRec88[1] = fRec88[0];
		fVec16[1] = fVec16[0];
		fRec79[1] = fRec79[0];
		fRec80[1] = fRec80[0];
		fRec85[1] = fRec85[0];
		fVec15[1] = fVec15[0];
		fRec81[2] = fRec81[1]; fRec81[1] = fRec81[0];
		fRec82[2] = fRec82[1]; fRec82[1] = fRec82[0];
		fRec83[1] = fRec83[0];
		fRec84[1] = fRec84[0];
		fVec14[1] = fVec14[0];
		fRec0[1] = fRec0[0];
		fRec2[1] = fRec2[0];
		fRec4[1] = fRec4[0];
		fRec6[1] = fRec6[0];
		fRec58[1] = fRec58[0];
		fRec59[1] = fRec59[0];
		fRec60[1] = fRec60[0];
		fVec13[1] = fVec13[0];
		fRec8[1] = fRec8[0];
		fRec9[1] = fRec9[0];
		fRec12[1] = fRec12[0];
		fVec12[1] = fVec12[0];
		fRec40[1] = fRec40[0];
		fVec11[1] = fVec11[0];
		fRec56[2] = fRec56[1]; fRec56[1] = fRec56[0];
		fRec57[1] = fRec57[0];
		fRec52[2] = fRec52[1]; fRec52[1] = fRec52[0];
		fRec53[2] = fRec53[1]; fRec53[1] = fRec53[0];
		fRec54[2] = fRec54[1]; fRec54[1] = fRec54[0];
		fRec55[1] = fRec55[0];
		fRec48[2] = fRec48[1]; fRec48[1] = fRec48[0];
		fRec49[1] = fRec49[0];
		fVec10[1] = fVec10[0];
		fRec50[2] = fRec50[1]; fRec50[1] = fRec50[0];
		fRec51[1] = fRec51[0];
		fRec41[2] = fRec41[1]; fRec41[1] = fRec41[0];
		fRec42[2] = fRec42[1]; fRec42[1] = fRec42[0];
		fRec43[1] = fRec43[0];
		fVec9[1] = fVec9[0];
		fRec44[2] = fRec44[1]; fRec44[1] = fRec44[0];
		fRec45[1] = fRec45[0];
		fRec46[1] = fRec46[0];
		fVec8[1] = fVec8[0];
		fRec47[2] = fRec47[1]; fRec47[1] = fRec47[0];
		fRec37[1] = fRec37[0];
		fRec38[1] = fRec38[0];
		IOTA = IOTA+1;
		fRec39[1] = fRec39[0];
		fRec14[1] = fRec14[0];
		fRec15[1] = fRec15[0];
		fRec36[1] = fRec36[0];
		fVec6[1] = fVec6[0];
		fRec16[1] = fRec16[0];
		fRec33[1] = fRec33[0];
		fRec34[1] = fRec34[0];
		fRec35[1] = fRec35[0];
		fVec5[1] = fVec5[0];
		fRec17[1] = fRec17[0];
		fRec18[1] = fRec18[0];
		fRec32[1] = fRec32[0];
		fVec4[1] = fVec4[0];
		fRec19[1] = fRec19[0];
		fRec20[1] = fRec20[0];
		fRec29[1] = fRec29[0];
		fRec30[1] = fRec30[0];
		fRec31[1] = fRec31[0];
		fVec3[1] = fVec3[0];
		fRec21[1] = fRec21[0];
		fRec22[1] = fRec22[0];
		fRec28[1] = fRec28[0];
		fVec2[1] = fVec2[0];
		fRec27[1] = fRec27[0];
		fRec23[2] = fRec23[1]; fRec23[1] = fRec23[0];
		fRec24[2] = fRec24[1]; fRec24[1] = fRec24[0];
		fRec25[1] = fRec25[0];
		fRec26[1] = fRec26[0];
		fVec1[1] = fVec1[0];
		fRec13[1] = fRec13[0];
		fRec11[1] = fRec11[0];
		fRec10[1] = fRec10[0];
		fVec0[1] = fVec0[0];
	}
#undef fslider0
#undef fslider1
#undef fslider2
#undef fslider3
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *input1, FAUSTFLOAT *output0, FAUSTFLOAT *output1, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, input1, output0, output1);
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
	case DRIVE: 
		fslider3_ = (float*)data; // , 0.35, 0.0, 1.0, 0.01 
		break;
	case WET_DRY: 
		fslider1_ = (float*)data; // , 1e+02, 0.0, 1e+02, 1.0 
		break;
	case PREGAIN: 
		fslider2_ = (float*)data; // , -6.0, -2e+01, 2e+01, 0.1 
		break;
	case GAIN1: 
		fslider0_ = (float*)data; // , -6.0, -2e+01, 2e+01, 0.1 
		break;
	default:
		break;
	}
}

void Dsp::connect_static(uint32_t port,void* data, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->connect(port, data);
}


PluginLV2 *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginLV2 *p)
{
	delete static_cast<Dsp*>(p);
}

/*
typedef enum
{
   DRIVE, 
   WET_DRY, 
   PREGAIN, 
   GAIN1, 
} PortIndex;
*/

} // end namespace gxamp6_stereo
