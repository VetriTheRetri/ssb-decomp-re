/* relocData file 60: MVOpeningRunMain — movie/opening camera animation data.
 *
 * Block boundaries from symbols/reloc_data_symbols.us.txt offsets.
 * Each ll{Name}CamAnimJoint in that file points at a u32 AObjEvent32
 * command stream; the movie engine passes each to gcAddCObjCamAnimJoint.
 */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* CamAnimJoint CamAnimJoint @ 0x0000 (240 bytes) */
u32 dMVOpeningRunMain_CamAnimJoint[60] = {
	aobjEvent32SetValRate(0x001, 0),
	    0x43861E4D,  /* 268.2367248535156f */
	    0x413FD203,  /* 11.98877239227295f */
	aobjEvent32SetVal0RateBlock(0x076, 0),
	    0x43B8822C,  /* 369.0169677734375f */
	    0xC19A853E,  /* -19.315059661865234f */
	    0xC43B3EDB,  /* -748.9821166992188f */
	    0x436A75EB,  /* 234.4606170654297f */
	    0x428865C6,  /* 68.19877624511719f */
	aobjEvent32SetValRate(0x007, 90),
	    0x44E56A15,  /* 1835.3150634765625f */
	    0x41212137,  /* 10.070609092712402f */
	    0x43E90072,  /* 466.00347900390625f */
	    0x3FACB950,  /* 1.349405288696289f */
	    0x408126FD,  /* 4.036009311676025f */
	    0xBBBDD7EB,  /* -0.005793561693280935f */
	aobjEvent32SetValRateBlock(0x070, 40),
	    0xC4383A63,  /* -736.9122924804688f */
	    0x3E9364D3,  /* 0.2878786027431488f */
	    0x433D419D,  /* 189.2563018798828f */
	    0xBF99FA71,  /* -1.2029553651809692f */
	    0x42BA8F16,  /* 93.27946472167969f */
	    0x4003944A,  /* 2.0559258460998535f */
	aobjEvent32SetValRateBlock(0x070, 30),
	    0xC4363529,  /* -728.8306274414062f */
	    0x3EFAC05A,  /* 0.4897487759590149f */
	    0x431640F5,  /* 150.2537384033203f */
	    0xC02E876D,  /* -2.727015733718872f */
	    0x43541D14,  /* 212.11358642578125f */
	    0xBFAA2A17,  /* -1.3294094800949097f */
	aobjEvent32SetValRateBlock(0x070, 20),
	    0xC4321B31,  /* -712.4248657226562f */
	    0x3EA73B1F,  /* 0.32662293314933777f */
	    0x42539F3D,  /* 52.9055061340332f */
	    0xC0044E10,  /* -2.0672645568847656f */
	    0x41D678CD,  /* 26.808984756469727f */
	    0xC0729A44,  /* -3.790665626525879f */
	aobjEvent32SetVal0Rate(0x007, 90),
	    0x45020F25,  /* 2080.946533203125f */
	    0x4418FA3C,  /* 611.909912109375f */
	    0xC1A2DCFB,  /* -20.357900619506836f */
	aobjEvent32SetValRateBlock(0x070, 40),
	    0xC4314EED,  /* -709.2332153320312f */
	    0x3E5EA424,  /* 0.21742302179336548f */
	    0x41D1BE2D,  /* 26.217859268188477f */
	    0xBFB1669B,  /* -1.3859437704086304f */
	    0xC17538E4,  /* -15.32638931274414f */
	    0x401501F3,  /* 2.3282439708709717f */
	aobjEvent32SetValRateBlock(0x070, 30),
	    0xC42E4D23,  /* -697.2052612304688f */
	    0xBC51C669,  /* -0.012803652323782444f */
	    0xC2307137,  /* -44.11056137084961f */
	    0xBD7D7D62,  /* -0.06188715249300003f */
	    0x433DC93C,  /* 189.78607177734375f */
	    0x3D14E1F4,  /* 0.03634829819202423f */
	aobjEvent32SetVal0RateBlock(0x070, 20),
	    0xC43177E6,  /* -709.8734130859375f */
	    0x41B8FCEF,  /* 23.123502731323242f */
	    0xC15824C2,  /* -13.508974075317383f */
	aobjEvent32End(),
};
