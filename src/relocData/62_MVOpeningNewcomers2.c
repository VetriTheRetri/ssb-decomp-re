/* relocData file 62: MVOpeningNewcomers2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* Forward externs for AnimJointPtr blocks (defined later in this file) */

/* Forward decls auto-added/hoisted by hoistExterns.py */
extern u8 dMVOpeningNewcomers2_Tex_0x0008[];
extern u8 dMVOpeningNewcomers2_Tex_0x1CA38[];
extern u8 dMVOpeningNewcomers2_Tex_0x2A8D8[];
extern u8 dMVOpeningNewcomers2_Tex_0x358F8[];
extern Vtx dMVOpeningNewcomers2_Vtx_0x1BE08_Vtx[];
extern Vtx dMVOpeningNewcomers2_Vtx_0x2A218_Vtx[];
extern Vtx dMVOpeningNewcomers2_Vtx_0x35420_Vtx[];
extern Vtx dMVOpeningNewcomers2_Vtx_0x3B9F8_Vtx[];
extern u32 dMVOpeningNewcomers2_Captain_AnimJoint[];
extern u32 dMVOpeningNewcomers2_Ness_AnimJoint[];

PAD(8);

/* Texture data @ 0x0008 (114176 bytes) */
/* @tex fmt=RGBA32 dim=128x223 */
u8 dMVOpeningNewcomers2_Tex_0x0008[114176] = {
	#include <MVOpeningNewcomers2/Tex_0x0008.tex.inc.c>
};

/* Vtx: Vtx_0x1BE08_Vtx @ 0x1BE08 (67 vertices) */
Vtx dMVOpeningNewcomers2_Vtx_0x1BE08_Vtx[67] = {
	#include <MVOpeningNewcomers2/Vtx_0x1BE08.vtx.inc.c>
};

/* DisplayList: CaptainShow @ 0x1C238 (1920 bytes, 240 cmds) */
Gfx dMVOpeningNewcomers2_CaptainShow_DisplayList[240] = {
	#include <MVOpeningNewcomers2/CaptainShow.dl.inc.c>
};

/* DObjDLLink for CaptainShow @ 0x1C9B8 (2 entries) */
DObjDLLink dMVOpeningNewcomers2_CaptainShow_DLLink[2] = {
	{ 1, dMVOpeningNewcomers2_CaptainShow_DisplayList },
	{ 4, NULL },
};

PAD(8);

/* AObjEvent32* for Captain animation @ 0x1C9D0 */
AObjEvent32 *dMVOpeningNewcomers2_CaptainShow_AnimJointPtr[1] = { (AObjEvent32 *)dMVOpeningNewcomers2_Captain_AnimJoint };

/* Raw data from file offset 0x1C9D4 to 0x2A448 (55924 bytes) */
/* AObjEvent32 script for Captain (referenced by CaptainShow_post+0x18) @ 0x1C9D4 (22 words, 88 bytes) */
u32 dMVOpeningNewcomers2_Captain_AnimJoint[22] = {
	aobjEvent32SetValRateBlock(0x030, 0),
	    0x444741EE,  /* 797.0301513671875f */
	    0xC308DE95,  /* -136.8694610595703f */
	    0xC3D8011E,  /* -432.00872802734375f */
	    0x42C7954F,  /* 99.79161834716797f */
	aobjEvent32SetValRateBlock(0x030, 8),
	    0x4345AC0D,  /* 197.6720733642578f */
	    0xC14020E5,  /* -12.008030891418457f */
	    0x42A65692,  /* 83.16908264160156f */
	    0x40920B7F,  /* 4.563903331756592f */
	aobjEvent32SetTargetRate(0x030, 0),
	    0xC0EEFB53,  /* -7.468179225921631f */
	    0x3E8C8D56,  /* 0.2745158076286316f */
	aobjEvent32SetValRateBlock(0x030, 25),
	    0x42D22CEC,  /* 105.08773803710938f */
	    0xBFF7C364,  /* -1.93565034866333f */
	    0x4267930A,  /* 57.893592834472656f */
	    0xC0024C33,  /* -2.035900831222534f */
	aobjEvent32SetValBlock(0x030, 7),
	    0x42D22CEC,  /* 105.08773803710938f */
	    0x4267930A,  /* 57.893592834472656f */
	aobjEvent32End(),
};

PAD(12);

/* Texture for NessShow (RGBA32 88x157) @ 0x1CA38 (55264 bytes) */
/* @tex fmt=RGBA32 dim=88x157 */
u8 dMVOpeningNewcomers2_Tex_0x1CA38[55264] = {
	#include <MVOpeningNewcomers2/Tex_0x1CA38.tex.inc.c>
};

/* Vtx for NessShow @ 0x2A218 (35 vertices) */
Vtx dMVOpeningNewcomers2_Vtx_0x2A218_Vtx[35] = {
	#include <MVOpeningNewcomers2/Vtx_0x2A218.vtx.inc.c>
};

/* DisplayList: NessShow @ 0x2A448 (1024 bytes, 128 cmds) */
Gfx dMVOpeningNewcomers2_NessShow_DisplayList[128] = {
	#include <MVOpeningNewcomers2/NessShow.dl.inc.c>
};

/* DObjDLLink for NessShow @ 0x2A848 (2 entries) */
DObjDLLink dMVOpeningNewcomers2_NessShow_DLLink[2] = {
	{ 1, dMVOpeningNewcomers2_NessShow_DisplayList },
	{ 4, NULL },
};

PAD(8);

/* AObjEvent32* for Ness animation @ 0x2A860 */
AObjEvent32 *dMVOpeningNewcomers2_NessShow_AnimJointPtr[1] = { (AObjEvent32 *)dMVOpeningNewcomers2_Ness_AnimJoint };

/* Raw data from file offset 0x2A864 to 0x355C0 (44380 bytes) */
/* AObjEvent32 script for Ness (referenced by NessShow_post+0x18) @ 0x2A864 (26 words, 104 bytes) */
u32 dMVOpeningNewcomers2_Ness_AnimJoint[26] = {
	aobjEvent32SetValBlock(0x030, 0),
	    0xC4887D1B,  /* -1091.9095458984375f */
	    0x427B9602,  /* 62.89649200439453f */
	aobjEvent32SetValBlock(0x030, 6),
	    0xC4887D1B,  /* -1091.9095458984375f */
	    0x427B9602,  /* 62.89649200439453f */
	aobjEvent32SetTargetRate(0x030, 0),
	    0x42B99C07,  /* 92.80474090576172f */
	    0x429D02F7,  /* 78.50579071044922f */
	aobjEvent32SetValRateBlock(0x030, 8),
	    0xC3FE3DD8,  /* -508.483154296875f */
	    0x416D26FE,  /* 14.822019577026367f */
	    0x43B9AC89,  /* 371.3479309082031f */
	    0x40997694,  /* 4.795724868774414f */
	aobjEvent32SetTargetRate(0x030, 0),
	    0x40D7C1BC,  /* 6.742399215698242f */
	    0x3EC313E6,  /* 0.3810111880302429f */
	aobjEvent32SetValRateBlock(0x030, 24),
	    0xC3DFACBB,  /* -447.3494567871094f */
	    0x3F21663D,  /* 0.6304662823677063f */
	    0x43B01579,  /* 352.1677551269531f */
	    0xBFBF928D,  /* -1.4966598749160767f */
	aobjEvent32SetValBlock(0x030, 2),
	    0xC3DFACBB,  /* -447.3494567871094f */
	    0x43B01579,  /* 352.1677551269531f */
	aobjEvent32End(),
};

PAD(12);

/* Texture for CaptainHidden (I8 168x261) @ 0x2A8D8 (43848 bytes) */
/* @tex fmt=I8 dim=168x261 */
u8 dMVOpeningNewcomers2_Tex_0x2A8D8[43848] = {
	#include <MVOpeningNewcomers2/Tex_0x2A8D8.tex.inc.c>
};

/* Vtx for CaptainHidden @ 0x35420 (26 vertices) */
Vtx dMVOpeningNewcomers2_Vtx_0x35420_Vtx[26] = {
	#include <MVOpeningNewcomers2/Vtx_0x35420.vtx.inc.c>
};

/* DisplayList: CaptainHidden @ 0x355C0 (800 bytes, 100 cmds) */
Gfx dMVOpeningNewcomers2_CaptainHidden_DisplayList[100] = {
	#include <MVOpeningNewcomers2/CaptainHidden.dl.inc.c>
};

/* DObjDLLink for CaptainHidden @ 0x358E0 (2 entries) */
DObjDLLink dMVOpeningNewcomers2_CaptainHidden_DLLink[2] = {
	{ 1, dMVOpeningNewcomers2_CaptainHidden_DisplayList },
	{ 4, NULL },
};

PAD(8);

/* Texture for NessHidden (I8 128x194) @ 0x358F8 (24832 bytes) */
/* @tex fmt=I8 dim=128x194 */
u8 dMVOpeningNewcomers2_Tex_0x358F8[24832] = {
	#include <MVOpeningNewcomers2/Tex_0x358F8.tex.inc.c>
};

/* Vtx for NessHidden @ 0x3B9F8 (16 vertices) */
Vtx dMVOpeningNewcomers2_Vtx_0x3B9F8_Vtx[16] = {
	#include <MVOpeningNewcomers2/Vtx_0x3B9F8.vtx.inc.c>
};

/* DisplayList: NessHidden @ 0x3BAF8 (520 bytes, 65 cmds) */
Gfx dMVOpeningNewcomers2_NessHidden_DisplayList[65] = {
	#include <MVOpeningNewcomers2/NessHidden.dl.inc.c>
};

/* DObjDLLink for NessHidden @ 0x3BD00 (2 entries) */
DObjDLLink dMVOpeningNewcomers2_NessHidden_DLLink[2] = {
	{ 1, dMVOpeningNewcomers2_NessHidden_DisplayList },
	{ 4, NULL },
};

