/* relocData file 353: LinkSpecial2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* MObjSub chain targets (forward decl + cross-file) resolved by fixRelocChain.py */
extern u8 dLinkSpecial2_gap_0x01A8[];
extern u8 dLinkSpecial2_gap_0x0568[];
extern u8 dLinkSpecial2_gap_0x10B0[];

PAD(8);

/* Palette: Lut_0x0008 @ 0x8 (16 colors RGBA5551) */
u16 dLinkSpecial2_Lut_0x0008_palette[16] = {
	#include <LinkSpecial2/Lut_0x0008.palette.inc.c>
};

PAD(8);

/* Raw data from file offset 0x0030 to 0x0130 (256 bytes) */
u8 dLinkSpecial2_Tex_0x0030[256] = {
	#include <LinkSpecial2/Tex_0x0030.tex.inc.c>
};

/* MObjSub: EntryWaveMObjSub @ 0x130 */
MObjSub dLinkSpecial2_EntryWaveMObjSub_MObjSub = {
	0x0000,
	0x00, 0x00,
	(void**)((u8*)dLinkSpecial2_gap_0x01A8 + 0x8),
	0x0000, 0x0202, 0x0000, 0x0000,
	2097152,
	1.4105968083108137e-37f, 0.0f,
	0.0f, 0.0f,
	1.0f, 1.0f,
	(void**)0x00000000,
	0x3F80,
	0x00, 0x00,
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
};

/* Raw data from file offset 0x01A8 to 0x01B8 (16 bytes) */
u8 dLinkSpecial2_gap_0x01A8[16] = {
	#include <LinkSpecial2/gap_0x01A8.data.inc.c>
};

/* Vtx: Vtx_0x01B8 @ 0x1B8 (18 vertices) */
Vtx dLinkSpecial2_Vtx_0x01B8_Vtx[18] = {
	#include <LinkSpecial2/Vtx_0x01B8.vtx.inc.c>
};

/* DisplayList: Joint_0x02D8 @ 0x2D8 (272 bytes) */
Gfx dLinkSpecial2_Joint_0x02D8_DisplayList[34] = {
	#include <LinkSpecial2/Joint_0x02D8.dl.inc.c>
};

/* Raw data from file offset 0x03E8 to 0x03F8 (16 bytes) */
u8 dLinkSpecial2_JointCmd_0x03E8[16] = {
	#include <LinkSpecial2/JointCmd_0x03E8.data.inc.c>
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
u8 dLinkSpecial2_Tex_0x04B0[64] = {
	#include <LinkSpecial2/Tex_0x04B0.tex.inc.c>
};

/* MObjSub: EntryBeamMObjSub @ 0x4F0 */
MObjSub dLinkSpecial2_EntryBeamMObjSub_MObjSub = {
	0x0000,
	0x00, 0x00,
	(void**)((u8*)dLinkSpecial2_gap_0x0568 + 0x8),
	0x0000, 0x0202, 0x0000, 0x0000,
	4194304,
	1.175495471861059e-38f, 1.401298464324817e-45f,
	0.0f, 0.0f,
	1.0f, 1.0f,
	(void**)0x00000000,
	0x3F80,
	0x00, 0x00,
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
};

/* Raw data from file offset 0x0568 to 0x0578 (16 bytes) */
u8 dLinkSpecial2_gap_0x0568[16] = {
	#include <LinkSpecial2/gap_0x0568.data.inc.c>
};

/* Vtx: Vtx_0x0578 @ 0x578 (18 vertices) */
Vtx dLinkSpecial2_Vtx_0x0578_Vtx[18] = {
	#include <LinkSpecial2/Vtx_0x0578.vtx.inc.c>
};

/* DisplayList: Joint_0x0698 @ 0x698 (272 bytes) */
Gfx dLinkSpecial2_Joint_0x0698_DisplayList[34] = {
	#include <LinkSpecial2/Joint_0x0698.dl.inc.c>
};

/* Raw data from file offset 0x07A8 to 0x07B8 (16 bytes) */
u8 dLinkSpecial2_JointCmd_0x07A8[16] = {
	#include <LinkSpecial2/JointCmd_0x07A8.data.inc.c>
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

u32 dLinkSpecial2_EntryWaveAnimJoint_AnimJoint[2] = {
	(u32)dLinkSpecial2_EntryWaveAnimJoint_AnimJoint_0x848,
	aobjEvent32End(),
};

u32 dLinkSpecial2_EntryWaveAnimJoint_AnimJoint_0x848[] = {
	aobjEvent32SetValAfter(0x005, 0),
	    0x00000000,
	    0x00000000,
	aobjEvent32SetVal0Rate(0x280, 0),
	    0x3FE66666,
	    0x3FE66666,
	aobjEvent32SetValBlock(0x102, 0),
	    0x00000000,
	    0x3F800000,
	aobjEvent32SetValRate(0x280, 4),
	    0x40152B6F,
	    0x3D6EEEF0,
	    0x4015350B,
	    0x3D6EEEF0,
	aobjEvent32SetVal(0x002, 12),
	    0xBF1A702C,
	aobjEvent32SetValBlock(0x100, 4),
	    0x40800000,
	aobjEvent32SetValRate(0x280, 8),
	    0x40200000,
	    0xBD718FE3,
	    0x40200000,
	    0xBD71D439,
	aobjEvent32SetValBlock(0x100, 8),
	    0x3FEB2136,
	aobjEvent32SetValRate(0x280, 1),
	    0x3FE66666,
	    0xBD0AA0DB,
	    0x3FE66666,
	    0xBD0A25DB,
	aobjEvent32SetValBlock(0x102, 1),
	    0x00000000,
	    0x3F800000,
	aobjEvent32SetValRate(0x280, 4),
	    0x40152B6F,
	    0x3D6EEEEF,
	    0x4015350B,
	    0x3D6EEEEF,
	aobjEvent32SetVal(0x002, 12),
	    0xBF1A702C,
	aobjEvent32SetValBlock(0x100, 4),
	    0x40800000,
	aobjEvent32SetValRate(0x280, 8),
	    0x40200000,
	    0xBD718FE3,
	    0x40200000,
	    0xBD71D439,
	aobjEvent32SetValBlock(0x100, 8),
	    0x3FEB2136,
	aobjEvent32SetValRate(0x280, 1),
	    0x3FE66666,
	    0xBD0AA0D9,
	    0x3FE66666,
	    0xBD0A25D9,
	aobjEvent32SetValBlock(0x102, 1),
	    0x00000000,
	    0x3F800000,
	aobjEvent32SetValRate(0x280, 4),
	    0x40152B6F,
	    0x3D6EEEF1,
	    0x4015350B,
	    0x3D6EEEF1,
	aobjEvent32SetVal(0x002, 12),
	    0xBF1A702C,
	aobjEvent32SetValBlock(0x100, 4),
	    0x40800000,
	aobjEvent32SetValRate(0x280, 8),
	    0x40200000,
	    0xBD718FE0,
	    0x40200000,
	    0xBD71D435,
	aobjEvent32SetValBlock(0x100, 8),
	    0x3FEB2136,
	aobjEvent32SetValRate(0x280, 1),
	    0x3FE66666,
	    0xBD0AA0D5,
	    0x3FE66666,
	    0xBD0A25D5,
	aobjEvent32SetValBlock(0x102, 1),
	    0x00000000,
	    0x3F800000,
	aobjEvent32SetValRate(0x280, 4),
	    0x40152B6F,
	    0x3D6EEEF1,
	    0x4015350B,
	    0x3D6EEEF1,
	aobjEvent32SetVal(0x002, 12),
	    0xBF1A702C,
	aobjEvent32SetValBlock(0x100, 4),
	    0x40800000,
	aobjEvent32SetValRate(0x280, 8),
	    0x40200000,
	    0xBD718FE0,
	    0x40200000,
	    0xBD71D435,
	aobjEvent32SetValBlock(0x100, 8),
	    0x3FEB2136,
	aobjEvent32SetValRate(0x280, 1),
	    0x3FE66666,
	    0xBD0AA0DC,
	    0x3FE66666,
	    0xBD0A25DC,
	aobjEvent32SetValBlock(0x102, 1),
	    0x00000000,
	    0x3F800000,
	aobjEvent32SetValRate(0x280, 4),
	    0x40152B6F,
	    0x3D6EEEED,
	    0x4015350B,
	    0x3D6EEEED,
	aobjEvent32SetVal(0x002, 12),
	    0xBF1A702C,
	aobjEvent32SetValBlock(0x100, 4),
	    0x40800000,
	aobjEvent32SetValRate(0x280, 8),
	    0x40200000,
	    0xBD718FE0,
	    0x40200000,
	    0xBD71D435,
	aobjEvent32SetValBlock(0x100, 8),
	    0x3FEB2136,
	aobjEvent32SetValRate(0x280, 1),
	    0x3FE66666,
	    0xBD0AA0E2,
	    0x3FE66666,
	    0xBD0A25E2,
	aobjEvent32SetValBlock(0x102, 1),
	    0x00000000,
	    0x3F800000,
	aobjEvent32SetValRate(0x280, 4),
	    0x40152B6F,
	    0x3D6EEEF5,
	    0x4015350B,
	    0x3D6EEEF5,
	aobjEvent32SetVal(0x002, 12),
	    0xBF1A702C,
	aobjEvent32SetValBlock(0x100, 4),
	    0x40800000,
	aobjEvent32SetValRate(0x280, 8),
	    0x40200000,
	    0xBD718FE6,
	    0x40200000,
	    0xBD71D43C,
	aobjEvent32SetValBlock(0x100, 8),
	    0x3FEB2136,
	aobjEvent32SetValRate(0x280, 1),
	    0x3FE66666,
	    0xBD0AA0D5,
	    0x3FE66666,
	    0xBD0A25D5,
	aobjEvent32SetValBlock(0x102, 1),
	    0x00000000,
	    0x3F800000,
	aobjEvent32SetValRate(0x280, 4),
	    0x40152B6F,
	    0x3D6EEEED,
	    0x4015350B,
	    0x3D6EEEED,
	aobjEvent32SetVal(0x002, 12),
	    0xBF1A702C,
	aobjEvent32SetValBlock(0x100, 4),
	    0x40800000,
	aobjEvent32SetValRate(0x280, 8),
	    0x40200000,
	    0xBD718FE6,
	    0x40200000,
	    0xBD71D43C,
	aobjEvent32SetValBlock(0x100, 8),
	    0x3FEB2136,
	aobjEvent32SetValRate(0x280, 1),
	    0x3FE66666,
	    0xBD0AA0E2,
	    0x3FE66666,
	    0xBD0A25E2,
	aobjEvent32SetValBlock(0x102, 1),
	    0x00000000,
	    0x3F800000,
	aobjEvent32SetValRate(0x280, 4),
	    0x40152B6F,
	    0x3D6EEEED,
	    0x4015350B,
	    0x3D6EEEED,
	aobjEvent32SetVal(0x002, 12),
	    0xBF1A702C,
	aobjEvent32SetValBlock(0x100, 4),
	    0x40800000,
	aobjEvent32SetVal0Rate(0x280, 8),
	    0x40200000,
	    0x40200000,
	aobjEvent32SetValBlock(0x100, 8),
	    0x3FEB2136,
	aobjEvent32SetValBlock(0x382, 17),
	    0xBF1A702C,
	    0x40200000,
	    0x3FEB2136,
	    0x40200000,
	    0x1C000000,
	(u32)((u8*)dLinkSpecial2_EntryWaveAnimJoint_AnimJoint + 0x8),
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

u32 dLinkSpecial2_EntryWaveMatAnimJoint_MatAnimJoint[2] = {
	aobjEvent32End(),
	(u32)dLinkSpecial2_EntryWaveMatAnimJoint_MatAnimJoint_0xBE0,
};

u32 dLinkSpecial2_EntryWaveMatAnimJoint_MatAnimJoint_0xB98[] = {
	aobjEvent32SetExtValAfter(0x018, 0),
	    0xFFFFFF00,
	    0x7F808000,
	aobjEvent32SetExtVal(0x001, 0),
	    0xFFFFFF66,
	aobjEvent32SetValAfterBlock(0x01E, 0),
	    0x00000000,
	    0x00000000,
	    0x3F800000,
	    0x3F800000,
	aobjEvent32SetExtValBlock(0x001, 40),
	    0xFFFFFF4C,
	aobjEvent32SetExtValBlock(0x001, 40),
	    0xFFFFFF66,
	aobjEvent32SetExtValBlock(0x001, 40),
	    0xFFFFFF00,
	    0x1C000000,
	(u32)((u8*)dLinkSpecial2_EntryWaveMatAnimJoint_MatAnimJoint + 0x8),
};

u32 dLinkSpecial2_EntryWaveMatAnimJoint_MatAnimJoint_0xBE0[] = {
	(u32)((u8*)dLinkSpecial2_EntryWaveMatAnimJoint_MatAnimJoint + 0x8),
	aobjEvent32End(),
};

PAD(8);

/* Raw data from file offset 0x0BF0 to 0x0C38 (72 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dLinkSpecial2_EntryBeamMatAnimJoint_MatAnimJoint_0xBF8[];
extern u32 dLinkSpecial2_EntryBeamMatAnimJoint_MatAnimJoint_0xC2C[];

u32 dLinkSpecial2_EntryBeamMatAnimJoint_MatAnimJoint[2] = {
	aobjEvent32End(),
	(u32)dLinkSpecial2_EntryBeamMatAnimJoint_MatAnimJoint_0xC2C,
};

u32 dLinkSpecial2_EntryBeamMatAnimJoint_MatAnimJoint_0xBF8[] = {
	aobjEvent32SetExtVal(0x001, 0),
	    0xFFFFFF66,
	aobjEvent32SetExtValAfterBlock(0x018, 0),
	    0xB3B3B300,
	    0x7F808000,
	aobjEvent32SetExtValBlock(0x001, 40),
	    0xFFFFFF33,
	aobjEvent32SetExtValBlock(0x001, 40),
	    0xFFFFFF66,
	aobjEvent32SetExtValBlock(0x001, 40),
	    0xFFFFFF00,
	    0x1C000000,
	(u32)((u8*)dLinkSpecial2_EntryBeamMatAnimJoint_MatAnimJoint + 0x8),
};

u32 dLinkSpecial2_EntryBeamMatAnimJoint_MatAnimJoint_0xC2C[] = {
	(u32)((u8*)dLinkSpecial2_EntryBeamMatAnimJoint_MatAnimJoint + 0x8),
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x0C38 to 0x1038 (1024 bytes) */
u8 dLinkSpecial2_Tex_0x0C38[1024] = {
	#include <LinkSpecial2/Tex_0x0C38.tex.inc.c>
};

/* MObjSub: SpinAttackMObjSub @ 0x1038 */
MObjSub dLinkSpecial2_SpinAttackMObjSub_MObjSub = {
	0x0000,
	0x00, 0x00,
	(void**)((u8*)dLinkSpecial2_gap_0x10B0 + 0x8),
	0x0000, 0x0302, 0x0000, 0x0000,
	2097152,
	2.938780718606577e-39f, 0.0f,
	0.0f, 0.0f,
	1.0f, 1.0f,
	(void**)0x00000000,
	0x3F80,
	0x00, 0x00,
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
};

/* Raw data from file offset 0x10B0 to 0x10C0 (16 bytes) */
u8 dLinkSpecial2_gap_0x10B0[16] = {
	#include <LinkSpecial2/gap_0x10B0.data.inc.c>
};

/* Vtx: Vtx_0x10C0 @ 0x10C0 (4 vertices) */
Vtx dLinkSpecial2_Vtx_0x10C0_Vtx[4] = {
	#include <LinkSpecial2/Vtx_0x10C0.vtx.inc.c>
};

/* DisplayList: Joint_0x1100 @ 0x1100 (176 bytes) */
Gfx dLinkSpecial2_Joint_0x1100_DisplayList[22] = {
	#include <LinkSpecial2/Joint_0x1100.dl.inc.c>
};

/* Raw data from file offset 0x11B0 to 0x11C0 (16 bytes) */
u8 dLinkSpecial2_JointCmd_0x11B0[16] = {
	#include <LinkSpecial2/JointCmd_0x11B0.data.inc.c>
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

u32 dLinkSpecial2_SpinAttackAnimJoint_AnimJoint[2] = {
	aobjEvent32End(),
	(u32)dLinkSpecial2_SpinAttackAnimJoint_AnimJoint_0x1258,
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
u32 dLinkSpecial2_SpinAttackMatAnimJoint_MatAnimJoint[456] = {
	aobjEvent32End(),
	(u32)((u8*)dLinkSpecial2_SpinAttackMatAnimJoint_MatAnimJoint + 0x44),
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xFFFF6000,
	aobjEvent32SetExtValBlock(0x001, 12),
	    0xFFFF60CC,
	aobjEvent32SetExtValBlock(0x001, 1),
	    0xFFFF6033,
	aobjEvent32SetExtValBlock(0x001, 17),
	    0xFFFF6033,
	aobjEvent32SetExtValBlock(0x001, 24),
	    0xFFFF60B3,
	aobjEvent32SetExtValBlock(0x001, 11),
	    0xFFFF6000,
	aobjEvent32SetExtValBlock(0x001, 35),
	    0xFFFF6000,
	aobjEvent32End(),
	(u32)((u8*)dLinkSpecial2_SpinAttackMatAnimJoint_MatAnimJoint + 0x8),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x008, 20933),
	    0x8B419D7D,
	    0x32350021,
	aobjEvent32Cmd16(0x356, 11),
	    0x63BBEFBD,
	    0xEE4300AD,
	    0xB48B0013,
	    0xCEFD7C3D,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32SetVal0RateBlock(0x000, 0),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 257),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 34),
	aobjEvent32EndRaw(0x002, 6205),
	aobjEvent32Jump(0x00000000),
	aobjEvent32EndRaw(0x000, 52),
	aobjEvent32EndRaw(0x000, 317),
	    0x7E030100,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 72),
	aobjEvent32EndRaw(0x000, 1),
	    0xAEBF3E02,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 122),
	aobjEvent32End(),
	aobjEvent32JumpRaw(0x1FF, 32670, 0x02000000),
	aobjEvent32EndRaw(0x000, 173),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x2DD, 32767),
	    0xEF1B0100,
	aobjEvent32EndRaw(0x000, 206),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x003, 16127),
	    0xFFFF8F02,
	aobjEvent32EndRaw(0x200, 1518),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 5887),
	    0xFFFFFFDF,
	    0x3F001CEF,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 350),
	    0xFFFFFFFF,
	    0xFF8F3FFF,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 1),
	    0xCFFFFFFF,
	    0xFFFFBFFF,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 1),
	    0x3EFFFFFF,
	    0xFFFFFFFF,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x0BF, 28671),
	    0xFFFFFFFF,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 1),
	aobjEvent32SetAnim(0x09E, 32767),
	    0xFFFFFFFF,
	aobjEvent32EndRaw(0x000, 1048),
	    0x4A8BBFEF,
	    0xFFFFFFFF,
	    0xFFFFFFFF,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 1911),
	    0x77700000,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x0EE, 32221),
	    0xDDD77700,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x77DDD777,
	    0x777DDD77,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 7),
	    0xDD777777,
	    0x777777DD,
	    0x70000000,
	aobjEvent32EndRaw(0x000, 125),
	    0x77777777,
	    0x77777777,
	    0xD7000000,
	aobjEvent32EndRaw(0x000, 2007),
	    0x777777DD,
	    0xDD777777,
	    0x7D700000,
	aobjEvent32EndRaw(0x000, 32119),
	    0x77DDDDDD,
	    0xDDDDDD77,
	    0x77D70000,
	aobjEvent32EndRaw(0x000, 32119),
	    0xDDDDDDDD,
	    0xDDDDDDDD,
	    0xD7D70000,
	aobjEvent32EndRaw(0x00F, 22397),
	    0xDDDDDD55,
	    0x55DDDDDD,
	    0xDD7D7000,
	aobjEvent32EndRaw(0x00F, 22493),
	    0xDD555555,
	    0x555555DD,
	    0xDD7DD000,
	aobjEvent32EndRaw(0x0FA, 32221),
	    0x55555555,
	    0x55555555,
	    0xDDD7D700,
	aobjEvent32EndRaw(0x0FA, 32213),
	    0x55555555,
	    0x55555555,
	    0x55DDD700,
	aobjEvent32EndRaw(0x1BB, 23893),
	    0x55555555,
	    0x55566666,
	    0x555DDD00,
	aobjEvent32EndRaw(0x1BB, 21845),
	    0x55555555,
	    0x56488884,
	    0x6B55DD00,
	aobjEvent32EndRaw(0x1BB, 21845),
	    0x55555555,
	    0x64833338,
	    0x4BBB5D00,
	aobjEvent32EndRaw(0x1BA, 21845),
	    0x55555555,
	    0x683E9993,
	    0x84BB5D00,
	aobjEvent32EndRaw(0x1BA, 21845),
	    0x55555556,
	    0x4FE9999E,
	    0xF4BB5D00,
	aobjEvent32EndRaw(0x00A, 21845),
	    0x55555556,
	    0x83999999,
	    0xF4BB5000,
	aobjEvent32EndRaw(0x00A, 21845),
	    0x55555556,
	    0x8399999E,
	    0x84BB5000,
	aobjEvent32EndRaw(0x000, 21845),
	    0x55555556,
	    0x4FE99993,
	    0x4BB50000,
	aobjEvent32EndRaw(0x000, 21845),
	    0x55555556,
	    0x483EEE38,
	    0x4BB50000,
	aobjEvent32EndRaw(0x000, 1365),
	    0x55555555,
	    0x6488F844,
	    0xBB500000,
	aobjEvent32EndRaw(0x000, 85),
	    0x55555555,
	    0x566444BB,
	    0xB5000000,
	aobjEvent32EndRaw(0x000, 5),
	    0x55555555,
	    0x55BBBBBB,
	    0x50000000,
	aobjEvent32End(),
	    0x55555555,
	    0x55BBBBB5,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32WaitRaw(0x2AA, 21845),
	    0x55555550,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x016, 4642),
	    0xCCAAC000,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 4810),
	    0xAAAC0000,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 274),
	    0xCCC00000,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 28),
	    0xAC000000,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 12),
	    0xC0000000,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x0E3, 32655),
	aobjEvent32End(),
	aobjEvent32End(),
	    0xFFFFFF00,
	    0xFF8FFF8F,
	aobjEvent32End(),
	aobjEvent32JumpRaw(0x3FE, 0, 0xFFFFFF00),
	    0xFF8F0071,
	aobjEvent32End(),
	aobjEvent32Wait(1024),
	    0xFFFFFF00,
	aobjEvent32EndRaw(0x0E2, 113),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 1024),
	    0xFFFFFF00,
	aobjEvent32EndRaw(0x07F, 32705),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 32512),
	    0xFFC1FFC1,
	aobjEvent32End(),
	aobjEvent32Wait(0),
	aobjEvent32EndRaw(0x000, 32512),
	    0xFFC1003F,
	aobjEvent32End(),
	aobjEvent32Wait(1024),
	aobjEvent32EndRaw(0x000, 32512),
	aobjEvent32EndRaw(0x07E, 63),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 1024),
	aobjEvent32EndRaw(0x000, 32512),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9DDFFFF,
	aobjEvent32End(),
	    0xE3001001,
	aobjEvent32EndRaw(0x001, 0),
	    0xE2001E01,
	aobjEvent32EndRaw(0x000, 1),
	    0xE200001C,
	aobjEvent32SetValRate(0x032, 12408),
	    0xFC127EAC,
	    0xF0FFF238,
	    0xF9000000,
	    0x00000000,
	    0xE8000000,
	    0x00000000,
	    0xF5000100,
	aobjEvent32WaitRaw(0x200, 0),
	    0xF5500000,
	aobjEvent32SetValBlock(0x202, 16464),
	    0xF5400400,
	    0x00094250,
	    0xFD100000,
	(u32)((u8*)dLinkSpecial2_SpinAttackMatAnimJoint_MatAnimJoint + 0x58),
	    0xE6000000,
	aobjEvent32End(),
	    0xF0000000,
	aobjEvent32WaitRaw(0x207, 16384),
	    0xE7000000,
	aobjEvent32End(),
	    0xD7000002,
	    0xFFFFFFFF,
	    0xF2000000,
	aobjEvent32EndRaw(0x00F, 16508),
	    0xFD500000,
	(u32)((u8*)dLinkSpecial2_SpinAttackMatAnimJoint_MatAnimJoint + 0x188),
	    0xE6000000,
	aobjEvent32End(),
	    0xF3000000,
	    0x070FF400,
	    0xE7000000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 16392),
	(u32)((u8*)dLinkSpecial2_SpinAttackMatAnimJoint_MatAnimJoint + 0x388),
	aobjEvent32SetValBlock(0x00C, 1026),
	    0x00000602,
	    0xE7000000,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x044, 0),
	    0xE3001001,
	aobjEvent32End(),
	    0xE2001E01,
	aobjEvent32End(),
	    0xE200001C,
	aobjEvent32EndRaw(0x0AA, 8312),
	    0xDF000000,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9DDFFFB,
	aobjEvent32End(),
	    0xE3000A01,
	aobjEvent32EndRaw(0x020, 0),
	    0xE2001E01,
	aobjEvent32EndRaw(0x000, 1),
	    0xE200001C,
	aobjEvent32SetValRate(0x030, 18904),
	    0xFC30FFFF,
	    0x5FFEF238,
	    0xFA000000,
	    0xFFFFACFF,
	    0xFB000000,
	    0xFEB800FF,
	    0xF9000000,
	aobjEvent32EndRaw(0x000, 8),
	    0xF5700000,
	aobjEvent32SetValBlock(0x202, 64),
	    0xF5680400,
	    0x000D0340,
	    0xD7000002,
	    0xFFFFFFFF,
	    0xF2000000,
	aobjEvent32EndRaw(0x00F, 16508),
	    0xFD700000,
	(u32)((u8*)dLinkSpecial2_SpinAttackMatAnimJoint_MatAnimJoint + 0x80),
	    0xE6000000,
	aobjEvent32End(),
	    0xF3000000,
	    0x0707F400,
	    0xE7000000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 16392),
	(u32)((u8*)dLinkSpecial2_SpinAttackMatAnimJoint_MatAnimJoint + 0x3C8),
	aobjEvent32SetValBlock(0x00C, 1026),
	    0x00000602,
	    0xE7000000,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x044, 4),
	    0xE3000A01,
	aobjEvent32End(),
	    0xE2001E01,
	aobjEvent32End(),
	    0xE200001C,
	aobjEvent32EndRaw(0x0A0, 18904),
	    0xDF000000,
	aobjEvent32End(),
	aobjEvent32End(),
	(u32)((u8*)dLinkSpecial2_SpinAttackMatAnimJoint_MatAnimJoint + 0x408),
	aobjEvent32EndRaw(0x000, 4),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 1),
	(u32)((u8*)dLinkSpecial2_SpinAttackMatAnimJoint_MatAnimJoint + 0x4F8),
	aobjEvent32EndRaw(0x000, 4),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	    0xC28B94E7,
	    0x43AAD1C5,
	    0x42E3A388,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	    0x3F800000,
	    0x3F800000,
	    0x3F800000,
	aobjEvent32EndRaw(0x000, 1),
	(u32)((u8*)dLinkSpecial2_SpinAttackMatAnimJoint_MatAnimJoint + 0x5C8),
	    0x41F00000,
	    0x42B40000,
	    0x41700000,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	    0x3F800000,
	    0x3F800000,
	    0x3F800000,
	aobjEvent32EndRaw(0x000, 2),
	(u32)((u8*)dLinkSpecial2_SpinAttackMatAnimJoint_MatAnimJoint + 0x5D8),
	    0x41700000,
	    0x42A20003,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	    0x3FCA3D68,
	    0x3FCA3D68,
	    0x3FCA3D68,
	aobjEvent32EndRaw(0x000, 18),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	(u32)((u8*)dLinkSpecial2_SpinAttackMatAnimJoint_MatAnimJoint + 0x6AC),
	aobjEvent32SetVal0Rate(0x004, 0),
	    0x00000000,
	aobjEvent32SetValAfterBlock(0x380, 0),
	    0x3FCA3D6C,
	    0x3FCA3D6C,
	    0x3FCA3D6C,
	aobjEvent32SetVal0Rate(0x004, 3),
	    0x3F490FDB,
	aobjEvent32SetValAfterBlock(0x380, 1),
	    0x3ECC6901,
	    0x3ECC6901,
	    0x3ECC6901,
	aobjEvent32SetValAfterBlock(0x380, 2),
	    0x3FCA3D6C,
	    0x3FCA3D6C,
	    0x3FCA3D6C,
	aobjEvent32SetVal0Rate(0x004, 3),
	    0x00000000,
	aobjEvent32SetValAfterBlock(0x380, 1),
	    0x3ECC6901,
	    0x3ECC6901,
	    0x3ECC6901,
	aobjEvent32SetValAfterBlock(0x380, 2),
	    0x3FCA3D6C,
	    0x3FCA3D6C,
	    0x3FCA3D6C,
	    0x1C000000,
	(u32)((u8*)dLinkSpecial2_SpinAttackMatAnimJoint_MatAnimJoint + 0x6AC),
	aobjEvent32End(),
};
