/* relocData file 355: DonkeySpecial2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

PAD(8);

/* Palette: Lut_0x0008 @ 0x8 (16 colors RGBA5551) */
u16 dDonkeySpecial2_Lut_0x0008_palette[16] = {
	#include <DonkeySpecial2/Lut_0x0008.palette.inc.c>
};

PAD(8);

/* Palette: Lut_0x0030 @ 0x30 (16 colors RGBA5551) */
u16 dDonkeySpecial2_Lut_0x0030_palette[16] = {
	#include <DonkeySpecial2/Lut_0x0030.palette.inc.c>
};

PAD(8);

/* Raw data from file offset 0x0058 to 0x0260 (520 bytes) */
/* @tex fmt=CI4 dim=32x32 lut=dDonkeySpecial2_Lut_0x0008_palette */
u8 dDonkeySpecial2_Tex_0x0058[512] = {
	#include <DonkeySpecial2/Tex_0x0058.tex.inc.c>
};

PAD(8);

/* Raw data from file offset 0x0260 to 0x0460 (512 bytes) */
/* @tex fmt=CI4 dim=32x32 lut=dDonkeySpecial2_Lut_0x0030_palette */
u8 dDonkeySpecial2_Tex_0x0260[512] = {
	#include <DonkeySpecial2/Tex_0x0260.tex.inc.c>
};

/* Vtx: Vtx_0x0460 @ 0x460 (10 vertices) */
Vtx dDonkeySpecial2_Vtx_0x0460_Vtx[10] = {
	#include <DonkeySpecial2/Vtx_0x0460.vtx.inc.c>
};

/* Vtx: Vtx_0x0500 @ 0x500 (18 vertices) */
Vtx dDonkeySpecial2_Vtx_0x0500_Vtx[18] = {
	#include <DonkeySpecial2/Vtx_0x0500.vtx.inc.c>
};

/* DisplayList: Joint_0x0620 @ 0x620 (424 bytes) */
Gfx dDonkeySpecial2_Joint_0x0620_DisplayList[53] = {
	#include <DonkeySpecial2/Joint_0x0620.dl.inc.c>
};

/* DObjDesc: EntryTaruDObjDesc @ 0x7C8 (3 entries) */
DObjDesc dDonkeySpecial2_EntryTaruDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dDonkeySpecial2_Joint_0x0620_DisplayList, { 0.0f, 237.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(4);

/* Raw data from file offset 0x0850 to 0x0930 (224 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dDonkeySpecial2_EntryTaruAnimJoint_AnimJoint_0x858[];

AObjEvent32 *dDonkeySpecial2_EntryTaruAnimJoint_AnimJoint[2] = {
	NULL,
	(AObjEvent32 *)dDonkeySpecial2_EntryTaruAnimJoint_AnimJoint_0x858,
};

u32 dDonkeySpecial2_EntryTaruAnimJoint_AnimJoint_0x858[] = {
	aobjEvent32SetValAfter(0x002, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRate(0x005, 0),
	    0x00000000,  /* 0.0f */
	    0x3CA317F7,  /* 0.019908888265490532f */
	    0x00000000,  /* 0.0f */
	    0xBD21AC4F,  /* -0.039470966905355453f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetVal0Rate(0x001, 10),
	    0x3E23D6EE,  /* 0.15999957919120789f */
	aobjEvent32SetVal0RateBlock(0x004, 5),
	    0xBE23D705,  /* -0.15999992191791534f */
	aobjEvent32SetVal0Rate(0x004, 10),
	    0x3E2CB6F6,  /* 0.16866669058799744f */
	aobjEvent32Wait(5),
	aobjEvent32SetVal0Rate(0x001, 10),
	    0xBE40D4F1,  /* -0.18831230700016022f */
	aobjEvent32Wait(5),
	aobjEvent32SetVal0Rate(0x004, 10),
	    0xBE23D705,  /* -0.15999992191791534f */
	aobjEvent32Wait(5),
	aobjEvent32SetVal0Rate(0x001, 10),
	    0x3E1D4424,  /* 0.15358024835586548f */
	aobjEvent32Wait(5),
	aobjEvent32SetVal0Rate(0x004, 10),
	    0x3E2CB6F6,  /* 0.16866669058799744f */
	aobjEvent32Wait(5),
	aobjEvent32SetVal0Rate(0x001, 10),
	    0xBE37D45F,  /* -0.17952106893062592f */
	aobjEvent32Wait(5),
	aobjEvent32SetVal0Rate(0x004, 10),
	    0xBE23D705,  /* -0.15999992191791534f */
	aobjEvent32Wait(5),
	aobjEvent32SetVal0Rate(0x001, 10),
	    0x3E1B79B2,  /* 0.15183141827583313f */
	aobjEvent32Wait(5),
	aobjEvent32SetVal0Rate(0x004, 10),
	    0x3E2CB6F6,  /* 0.16866669058799744f */
	aobjEvent32Wait(5),
	aobjEvent32SetValRate(0x001, 10),
	    0x00000000,  /* 0.0f */
	    0xBCBEEC84,  /* -0.023306138813495636f */
	aobjEvent32Wait(5),
	aobjEvent32SetValRateBlock(0x004, 5),
	    0x00000000,  /* 0.0f */
	    0xBD54DC20,  /* -0.051967740058898926f */
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32SetValBlock(0x005, 60),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
};
