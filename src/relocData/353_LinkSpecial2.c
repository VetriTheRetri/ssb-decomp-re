/* relocData file 353: LinkSpecial2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* MObjSub chain targets (forward decl + cross-file) resolved by fixRelocChain.py */
extern void *dLinkSpecial2_gap_0x01A8[];
extern void *dLinkSpecial2_gap_0x0568[];
extern void *dLinkSpecial2_gap_0x10B0[];

PAD(8);

/* Palette: Lut_0x0008 @ 0x8 (16 colors RGBA5551) */
u16 dLinkSpecial2_Lut_0x0008_palette[16] = {
	#include <LinkSpecial2/Lut_0x0008.palette.inc.c>
};

PAD(8);

/* Raw data from file offset 0x0030 to 0x0130 (256 bytes) */
/* @tex fmt=CI4 dim=16x32 lut=dLinkSpecial2_Lut_0x0008_palette */
u8 dLinkSpecial2_Tex_0x0030[256] = {
	#include <LinkSpecial2/Tex_0x0030.tex.inc.c>
};

/* MObjSub: EntryWaveMObjSub @ 0x130 */
MObjSub dLinkSpecial2_EntryWaveMObjSub_MObjSub[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_4b,
		(void**)((u8*)dLinkSpecial2_gap_0x01A8 + 0x8),
		0x0000, 0x0202, 0x0000, 0x0000,
		2097152,
		1.4105968083108137e-37f, 0.0f,
		0.0f, 0.0f,
		1.0f, 1.0f,
		(void**)0x00000000,
		0x3F80,
		G_IM_FMT_RGBA, G_IM_SIZ_4b,
		0x0000,
		0x0000, 0x32A0, 0x0200,
		1.4694127800787178e-39f, 1.4105968083108137e-37f,
		0.0f, 0.0f,
		0x00000000,
		{ { 0x00, 0x00, 0x00, 0x00 } },
		0x00, 0x02, { 0x22, 0x05 },
		{ { 0xFF, 0xFF, 0xFF, 0x61 } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		-256, 2139127808,
		0, 0,
	}
};

/* Raw data from file offset 0x01A8 to 0x01B8 (16 bytes) */
/* MObjSub.sprites pointer table @ +0x1A8 (4 ptrs) — each entry is a void* texture-data pointer fed to gDPSetTextureImage. */
void *dLinkSpecial2_gap_0x01A8[4] = {
	NULL,
	NULL,
	(void *)((u8 *)&dLinkSpecial2_EntryWaveMObjSub_MObjSub + 0x8),
	NULL,
};

/* Vtx: Vtx_0x01B8 @ 0x1B8 (18 vertices) */
Vtx dLinkSpecial2_Vtx_0x01B8_Vtx[18] = {
	#include <LinkSpecial2/Vtx_0x01B8.vtx.inc.c>
};

/* DisplayList: Joint_0x02D8 @ 0x2D8 (272 bytes) */
Gfx dLinkSpecial2_Joint_0x02D8_DisplayList[34] = {
	#include <LinkSpecial2/Joint_0x02D8.dl.inc.c>
};

/* DObjDLLink @ 0x03E8 (2 entries) — DL slot for a DObjDesc entry. */
DObjDLLink dLinkSpecial2_JointCmd_0x03E8[] = {
	{ 1, dLinkSpecial2_Joint_0x02D8_DisplayList },
	{ 4, NULL },
};

/* DObjDesc: EntryWaveDObjDesc @ 0x3F8 (3 entries) */
DObjDesc dLinkSpecial2_EntryWaveDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, -0.40218299627304077f, 0.0f }, { 2.532696008682251f, 2.9184749126434326f, 2.533055067062378f } },
	{ 1, (void*)dLinkSpecial2_JointCmd_0x03E8, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(12);

/* Palette: Lut_0x0488 @ 0x488 (16 colors RGBA5551) */
u16 dLinkSpecial2_Lut_0x0488_palette[16] = {
	#include <LinkSpecial2/Lut_0x0488.palette.inc.c>
};

PAD(8);

/* Raw data from file offset 0x04B0 to 0x04F0 (64 bytes) */
/* @tex fmt=CI4 dim=16x8 lut=dLinkSpecial2_Lut_0x0488_palette */
u8 dLinkSpecial2_Tex_0x04B0[64] = {
	#include <LinkSpecial2/Tex_0x04B0.tex.inc.c>
};

/* MObjSub: EntryBeamMObjSub @ 0x4F0 */
MObjSub dLinkSpecial2_EntryBeamMObjSub_MObjSub[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_4b,
		(void**)((u8*)dLinkSpecial2_gap_0x0568 + 0x8),
		0x0000, 0x0202, 0x0000, 0x0000,
		4194304,
		1.175495471861059e-38f, 1.401298464324817e-45f,
		0.0f, 0.0f,
		1.0f, 1.0f,
		(void**)0x00000000,
		0x3F80,
		G_IM_FMT_RGBA, G_IM_SIZ_4b,
		0x0000,
		0x0000, 0x3200, 0x0200,
		1.469379148915574e-39f, 1.175495471861059e-38f,
		0.0f, 0.0f,
		0x00000000,
		{ { 0x00, 0x00, 0x00, 0x00 } },
		0x00, 0x02, { 0x22, 0x05 },
		{ { 0xFF, 0xFF, 0xFF, 0x5C } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		-1280068864, 2139127808,
		0, 0,
	}
};

/* Raw data from file offset 0x0568 to 0x0578 (16 bytes) */
/* MObjSub.sprites pointer table @ +0x568 (4 ptrs) — each entry is a void* texture-data pointer fed to gDPSetTextureImage. */
void *dLinkSpecial2_gap_0x0568[4] = {
	NULL,
	NULL,
	(void *)((u8 *)&dLinkSpecial2_EntryBeamMObjSub_MObjSub + 0x8),
	NULL,
};

/* Vtx: Vtx_0x0578 @ 0x578 (18 vertices) */
Vtx dLinkSpecial2_Vtx_0x0578_Vtx[18] = {
	#include <LinkSpecial2/Vtx_0x0578.vtx.inc.c>
};

/* DisplayList: Joint_0x0698 @ 0x698 (272 bytes) */
Gfx dLinkSpecial2_Joint_0x0698_DisplayList[34] = {
	#include <LinkSpecial2/Joint_0x0698.dl.inc.c>
};

/* DObjDLLink @ 0x07A8 (2 entries) — DL slot for a DObjDesc entry. */
DObjDLLink dLinkSpecial2_JointCmd_0x07A8[] = {
	{ 1, dLinkSpecial2_Joint_0x0698_DisplayList },
	{ 4, NULL },
};

/* DObjDesc: EntryBeamDObjDesc @ 0x7B8 (3 entries) */
DObjDesc dLinkSpecial2_EntryBeamDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.10471999645233154f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dLinkSpecial2_JointCmd_0x07A8, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(4);

/* Raw data from file offset 0x0840 to 0x0B60 (800 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dLinkSpecial2_EntryWaveAnimJoint_AnimJoint_0x848[];

AObjEvent32 *dLinkSpecial2_EntryWaveAnimJoint_AnimJoint[2] = {
	(AObjEvent32 *)dLinkSpecial2_EntryWaveAnimJoint_AnimJoint_0x848,
	NULL,
};

u32 dLinkSpecial2_EntryWaveAnimJoint_AnimJoint_0x848[] = {
	aobjEvent32SetValAfter(0x005, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0Rate(0x280, 0),
	    0x3FE66666,  /* 1.7999999523162842f */
	    0x3FE66666,  /* 1.7999999523162842f */
	aobjEvent32SetValBlock(0x102, 0),
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValRate(0x280, 4),
	    0x40152B6F,  /* 2.3307759761810303f */
	    0x3D6EEEF0,  /* 0.05833333730697632f */
	    0x4015350B,  /* 2.33136248588562f */
	    0x3D6EEEF0,  /* 0.05833333730697632f */
	aobjEvent32SetVal(0x002, 12),
	    0xBF1A702C,  /* -0.6032741069793701f */
	aobjEvent32SetValBlock(0x100, 4),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValRate(0x280, 8),
	    0x40200000,  /* 2.5f */
	    0xBD718FE3,  /* -0.058975111693143845f */
	    0x40200000,  /* 2.5f */
	    0xBD71D439,  /* -0.05904028192162514f */
	aobjEvent32SetValBlock(0x100, 8),
	    0x3FEB2136,  /* 1.8369510173797607f */
	aobjEvent32SetValRate(0x280, 1),
	    0x3FE66666,  /* 1.7999999523162842f */
	    0xBD0AA0DB,  /* -0.03384480997920036f */
	    0x3FE66666,  /* 1.7999999523162842f */
	    0xBD0A25DB,  /* -0.033727508038282394f */
	aobjEvent32SetValBlock(0x102, 1),
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValRate(0x280, 4),
	    0x40152B6F,  /* 2.3307759761810303f */
	    0x3D6EEEEF,  /* 0.05833333358168602f */
	    0x4015350B,  /* 2.33136248588562f */
	    0x3D6EEEEF,  /* 0.05833333358168602f */
	aobjEvent32SetVal(0x002, 12),
	    0xBF1A702C,  /* -0.6032741069793701f */
	aobjEvent32SetValBlock(0x100, 4),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValRate(0x280, 8),
	    0x40200000,  /* 2.5f */
	    0xBD718FE3,  /* -0.058975111693143845f */
	    0x40200000,  /* 2.5f */
	    0xBD71D439,  /* -0.05904028192162514f */
	aobjEvent32SetValBlock(0x100, 8),
	    0x3FEB2136,  /* 1.8369510173797607f */
	aobjEvent32SetValRate(0x280, 1),
	    0x3FE66666,  /* 1.7999999523162842f */
	    0xBD0AA0D9,  /* -0.033844802528619766f */
	    0x3FE66666,  /* 1.7999999523162842f */
	    0xBD0A25D9,  /* -0.0337275005877018f */
	aobjEvent32SetValBlock(0x102, 1),
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValRate(0x280, 4),
	    0x40152B6F,  /* 2.3307759761810303f */
	    0x3D6EEEF1,  /* 0.05833334103226662f */
	    0x4015350B,  /* 2.33136248588562f */
	    0x3D6EEEF1,  /* 0.05833334103226662f */
	aobjEvent32SetVal(0x002, 12),
	    0xBF1A702C,  /* -0.6032741069793701f */
	aobjEvent32SetValBlock(0x100, 4),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValRate(0x280, 8),
	    0x40200000,  /* 2.5f */
	    0xBD718FE0,  /* -0.05897510051727295f */
	    0x40200000,  /* 2.5f */
	    0xBD71D435,  /* -0.059040267020463943f */
	aobjEvent32SetValBlock(0x100, 8),
	    0x3FEB2136,  /* 1.8369510173797607f */
	aobjEvent32SetValRate(0x280, 1),
	    0x3FE66666,  /* 1.7999999523162842f */
	    0xBD0AA0D5,  /* -0.03384478762745857f */
	    0x3FE66666,  /* 1.7999999523162842f */
	    0xBD0A25D5,  /* -0.033727485686540604f */
	aobjEvent32SetValBlock(0x102, 1),
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValRate(0x280, 4),
	    0x40152B6F,  /* 2.3307759761810303f */
	    0x3D6EEEF1,  /* 0.05833334103226662f */
	    0x4015350B,  /* 2.33136248588562f */
	    0x3D6EEEF1,  /* 0.05833334103226662f */
	aobjEvent32SetVal(0x002, 12),
	    0xBF1A702C,  /* -0.6032741069793701f */
	aobjEvent32SetValBlock(0x100, 4),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValRate(0x280, 8),
	    0x40200000,  /* 2.5f */
	    0xBD718FE0,  /* -0.05897510051727295f */
	    0x40200000,  /* 2.5f */
	    0xBD71D435,  /* -0.059040267020463943f */
	aobjEvent32SetValBlock(0x100, 8),
	    0x3FEB2136,  /* 1.8369510173797607f */
	aobjEvent32SetValRate(0x280, 1),
	    0x3FE66666,  /* 1.7999999523162842f */
	    0xBD0AA0DC,  /* -0.03384481370449066f */
	    0x3FE66666,  /* 1.7999999523162842f */
	    0xBD0A25DC,  /* -0.03372751176357269f */
	aobjEvent32SetValBlock(0x102, 1),
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValRate(0x280, 4),
	    0x40152B6F,  /* 2.3307759761810303f */
	    0x3D6EEEED,  /* 0.05833332613110542f */
	    0x4015350B,  /* 2.33136248588562f */
	    0x3D6EEEED,  /* 0.05833332613110542f */
	aobjEvent32SetVal(0x002, 12),
	    0xBF1A702C,  /* -0.6032741069793701f */
	aobjEvent32SetValBlock(0x100, 4),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValRate(0x280, 8),
	    0x40200000,  /* 2.5f */
	    0xBD718FE0,  /* -0.05897510051727295f */
	    0x40200000,  /* 2.5f */
	    0xBD71D435,  /* -0.059040267020463943f */
	aobjEvent32SetValBlock(0x100, 8),
	    0x3FEB2136,  /* 1.8369510173797607f */
	aobjEvent32SetValRate(0x280, 1),
	    0x3FE66666,  /* 1.7999999523162842f */
	    0xBD0AA0E2,  /* -0.03384483605623245f */
	    0x3FE66666,  /* 1.7999999523162842f */
	    0xBD0A25E2,  /* -0.033727534115314484f */
	aobjEvent32SetValBlock(0x102, 1),
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValRate(0x280, 4),
	    0x40152B6F,  /* 2.3307759761810303f */
	    0x3D6EEEF5,  /* 0.05833335593342781f */
	    0x4015350B,  /* 2.33136248588562f */
	    0x3D6EEEF5,  /* 0.05833335593342781f */
	aobjEvent32SetVal(0x002, 12),
	    0xBF1A702C,  /* -0.6032741069793701f */
	aobjEvent32SetValBlock(0x100, 4),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValRate(0x280, 8),
	    0x40200000,  /* 2.5f */
	    0xBD718FE6,  /* -0.05897512286901474f */
	    0x40200000,  /* 2.5f */
	    0xBD71D43C,  /* -0.05904029309749603f */
	aobjEvent32SetValBlock(0x100, 8),
	    0x3FEB2136,  /* 1.8369510173797607f */
	aobjEvent32SetValRate(0x280, 1),
	    0x3FE66666,  /* 1.7999999523162842f */
	    0xBD0AA0D5,  /* -0.03384478762745857f */
	    0x3FE66666,  /* 1.7999999523162842f */
	    0xBD0A25D5,  /* -0.033727485686540604f */
	aobjEvent32SetValBlock(0x102, 1),
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValRate(0x280, 4),
	    0x40152B6F,  /* 2.3307759761810303f */
	    0x3D6EEEED,  /* 0.05833332613110542f */
	    0x4015350B,  /* 2.33136248588562f */
	    0x3D6EEEED,  /* 0.05833332613110542f */
	aobjEvent32SetVal(0x002, 12),
	    0xBF1A702C,  /* -0.6032741069793701f */
	aobjEvent32SetValBlock(0x100, 4),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValRate(0x280, 8),
	    0x40200000,  /* 2.5f */
	    0xBD718FE6,  /* -0.05897512286901474f */
	    0x40200000,  /* 2.5f */
	    0xBD71D43C,  /* -0.05904029309749603f */
	aobjEvent32SetValBlock(0x100, 8),
	    0x3FEB2136,  /* 1.8369510173797607f */
	aobjEvent32SetValRate(0x280, 1),
	    0x3FE66666,  /* 1.7999999523162842f */
	    0xBD0AA0E2,  /* -0.03384483605623245f */
	    0x3FE66666,  /* 1.7999999523162842f */
	    0xBD0A25E2,  /* -0.033727534115314484f */
	aobjEvent32SetValBlock(0x102, 1),
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValRate(0x280, 4),
	    0x40152B6F,  /* 2.3307759761810303f */
	    0x3D6EEEED,  /* 0.05833332613110542f */
	    0x4015350B,  /* 2.33136248588562f */
	    0x3D6EEEED,  /* 0.05833332613110542f */
	aobjEvent32SetVal(0x002, 12),
	    0xBF1A702C,  /* -0.6032741069793701f */
	aobjEvent32SetValBlock(0x100, 4),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetVal0Rate(0x280, 8),
	    0x40200000,  /* 2.5f */
	    0x40200000,  /* 2.5f */
	aobjEvent32SetValBlock(0x100, 8),
	    0x3FEB2136,  /* 1.8369510173797607f */
	aobjEvent32SetValBlock(0x382, 17),
	    0xBF1A702C,  /* -0.6032741069793701f */
	    0x40200000,  /* 2.5f */
	    0x3FEB2136,  /* 1.8369510173797607f */
	    0x40200000,  /* 2.5f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dLinkSpecial2_EntryWaveAnimJoint_AnimJoint_0x848),
};

/* Raw data from file offset 0x0B60 to 0x0B90 (48 bytes) */
u32 dLinkSpecial2_EntryBeamAnimJoint_AnimJoint[12] = {
	aobjEvent32Jump(0x00000000),
	aobjEvent32SetVal(0x002, 0),
	    0x00000000,
	aobjEvent32SetValAfter(0x005, 0),
	    0x00000000,
	    0x00000000,
	aobjEvent32SetValBlock(0x002, 120),
	    0x3FC90FDB,
	aobjEvent32SetAnim(0x000, 0),
	aobjEvent32Jump(0x00000000),
};

/* Raw data from file offset 0x0B90 to 0x0BF0 (96 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dLinkSpecial2_EntryWaveMatAnimJoint_MatAnimJoint_0xB98[];
extern u32 dLinkSpecial2_EntryWaveMatAnimJoint_MatAnimJoint_0xBE0[];

AObjEvent32 *dLinkSpecial2_EntryWaveMatAnimJoint_MatAnimJoint[2] = {
	NULL,
	(AObjEvent32 *)dLinkSpecial2_EntryWaveMatAnimJoint_MatAnimJoint_0xBE0,
};

u32 dLinkSpecial2_EntryWaveMatAnimJoint_MatAnimJoint_0xB98[] = {
	aobjEvent32SetExtValAfter(0x018, 0),
	    0xFFFFFF00,  /* nanf */
	    0x7F808000,  /* nanf */
	aobjEvent32SetExtVal(0x001, 0),
	    0xFFFFFF66,  /* nanf */
	aobjEvent32SetValAfterBlock(0x01E, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetExtValBlock(0x001, 40),
	    0xFFFFFF4C,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 40),
	    0xFFFFFF66,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 40),
	    0xFFFFFF00,  /* nanf */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dLinkSpecial2_EntryWaveMatAnimJoint_MatAnimJoint_0xB98),
};

u32 dLinkSpecial2_EntryWaveMatAnimJoint_MatAnimJoint_0xBE0[] = {
	(u32)(dLinkSpecial2_EntryWaveMatAnimJoint_MatAnimJoint_0xB98),
	aobjEvent32End(),
};

PAD(8);

/* Raw data from file offset 0x0BF0 to 0x0C38 (72 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dLinkSpecial2_EntryBeamMatAnimJoint_MatAnimJoint_0xBF8[];
extern u32 dLinkSpecial2_EntryBeamMatAnimJoint_MatAnimJoint_0xC2C[];

AObjEvent32 *dLinkSpecial2_EntryBeamMatAnimJoint_MatAnimJoint[2] = {
	NULL,
	(AObjEvent32 *)dLinkSpecial2_EntryBeamMatAnimJoint_MatAnimJoint_0xC2C,
};

u32 dLinkSpecial2_EntryBeamMatAnimJoint_MatAnimJoint_0xBF8[] = {
	aobjEvent32SetExtVal(0x001, 0),
	    0xFFFFFF66,  /* nanf */
	aobjEvent32SetExtValAfterBlock(0x018, 0),
	    0xB3B3B300,  /* -8.367896953132004e-08f */
	    0x7F808000,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 40),
	    0xFFFFFF33,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 40),
	    0xFFFFFF66,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 40),
	    0xFFFFFF00,  /* nanf */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dLinkSpecial2_EntryBeamMatAnimJoint_MatAnimJoint_0xBF8),
};

u32 dLinkSpecial2_EntryBeamMatAnimJoint_MatAnimJoint_0xC2C[] = {
	(u32)(dLinkSpecial2_EntryBeamMatAnimJoint_MatAnimJoint_0xBF8),
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x0C38 to 0x1038 (1024 bytes) */
/* @tex fmt=IA8 dim=32x32 */
u8 dLinkSpecial2_Tex_0x0C38[1024] = {
	#include <LinkSpecial2/Tex_0x0C38.tex.inc.c>
};

/* MObjSub: SpinAttackMObjSub @ 0x1038 */
MObjSub dLinkSpecial2_SpinAttackMObjSub_MObjSub[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_4b,
		(void**)((u8*)dLinkSpecial2_gap_0x10B0 + 0x8),
		0x0000, 0x0302, 0x0000, 0x0000,
		2097152,
		2.938780718606577e-39f, 0.0f,
		0.0f, 0.0f,
		1.0f, 1.0f,
		(void**)0x00000000,
		0x3F80,
		G_IM_FMT_RGBA, G_IM_SIZ_4b,
		0x0000,
		0x0000, 0x0200, 0x0301,
		2.938780718606577e-39f, 2.938780718606577e-39f,
		0.0f, 0.0f,
		0x00000000,
		{ { 0x00, 0x00, 0x00, 0x00 } },
		0x00, 0x00, { 0x20, 0x01 },
		{ { 0xFF, 0xFF, 0x60, 0xA3 } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0xD0, 0x0C, 0x03, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		-256, -256,
		0, 0,
	}
};

/* Raw data from file offset 0x10B0 to 0x10C0 (16 bytes) */
/* MObjSub.sprites pointer table @ +0x10B0 (4 ptrs) — each entry is a void* texture-data pointer fed to gDPSetTextureImage. */
void *dLinkSpecial2_gap_0x10B0[4] = {
	NULL,
	NULL,
	(void *)((u8 *)&dLinkSpecial2_SpinAttackMObjSub_MObjSub + 0x8),
	NULL,
};

/* Vtx: Vtx_0x10C0 @ 0x10C0 (4 vertices) */
Vtx dLinkSpecial2_Vtx_0x10C0_Vtx[4] = {
	#include <LinkSpecial2/Vtx_0x10C0.vtx.inc.c>
};

/* DisplayList: Joint_0x1100 @ 0x1100 (176 bytes) */
Gfx dLinkSpecial2_Joint_0x1100_DisplayList[22] = {
	#include <LinkSpecial2/Joint_0x1100.dl.inc.c>
};

/* DObjDLLink @ 0x11B0 (2 entries) — DL slot for a DObjDesc entry. */
DObjDLLink dLinkSpecial2_JointCmd_0x11B0[] = {
	{ 1, dLinkSpecial2_Joint_0x1100_DisplayList },
	{ 4, NULL },
};

/* DObjDesc: SpinAttackDObjDesc @ 0x11C0 (3 entries) */
DObjDesc dLinkSpecial2_SpinAttackDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dLinkSpecial2_JointCmd_0x11B0, { 0.0f, 300.0f, 0.0f }, { 0.0f, -31.511884689331055f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(12);

/* Raw data from file offset 0x1250 to 0x12F0 (160 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dLinkSpecial2_SpinAttackAnimJoint_AnimJoint_0x1258[];

AObjEvent32 *dLinkSpecial2_SpinAttackAnimJoint_AnimJoint[2] = {
	NULL,
	(AObjEvent32 *)dLinkSpecial2_SpinAttackAnimJoint_AnimJoint_0x1258,
};

u32 dLinkSpecial2_SpinAttackAnimJoint_AnimJoint_0x1258[] = {
	aobjEvent32SetValAfter(0x020, 0),
	    0x43960000,
	aobjEvent32SetVal0Rate(0x002, 0),
	    0x00000000,
	    0x1E010000,
	aobjEvent32SetValRateBlock(0x002, 7),
	    0xBFAC0508,
	    0xBF0FF75D,
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetTargetRate(0x002, 0),
	    0xBFA31564,
	aobjEvent32SetValRateBlock(0x002, 9),
	    0xC139B3FA,
	    0xBF68A84B,
	aobjEvent32SetTargetRate(0x002, 0),
	    0xBF728967,
	aobjEvent32SetValRateBlock(0x002, 9),
	    0xC19996C7,
	    0xBF1C3681,
	aobjEvent32SetTargetRate(0x002, 0),
	    0xBF293A22,
	aobjEvent32SetValRateBlock(0x002, 15),
	    0xC1DAEF21,
	    0xBEDD9D6B,
	aobjEvent32SetValRateBlock(0x002, 20),
	    0xC209646F,
	    0xBE9C61D6,
	aobjEvent32SetTargetRate(0x002, 0),
	    0xBE82F2F7,
	aobjEvent32SetValRate(0x002, 40),
	    0xC21DEADA,
	    0xBDC635F6,
	aobjEvent32Wait(5),
	aobjEvent32SetFlags(0x002, 35),
	aobjEvent32End(),
};

PAD(12);

/* Raw data from file offset 0x12F0 to 0x1A10 (1824 bytes) */
/* Pointer-table split fallback: chain-pointer table at the
 * head of the array, followed by raw data containing every
 * referenced (and orphan) script. The data block is dumped
 * as one u8[] include; fixRelocChain rewrites the table
 * entries to chain-encoded form per the .reloc. */
extern u32 dLinkSpecial2_SpinAttackMatAnimJoint_MatAnimJoint_data[];
AObjEvent32 *dLinkSpecial2_SpinAttackMatAnimJoint_MatAnimJoint[2] = {
	NULL,
	(AObjEvent32 *)((u8*)dLinkSpecial2_SpinAttackMatAnimJoint_MatAnimJoint_data + 0x3C),
};

u32 dLinkSpecial2_SpinAttackMatAnimJoint_MatAnimJoint_data[454] = {
	#include <LinkSpecial2/SpinAttackMatAnimJoint_MatAnimJoint_data.data.inc.c>
};
