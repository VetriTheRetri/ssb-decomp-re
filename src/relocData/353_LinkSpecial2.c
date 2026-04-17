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
u32 dLinkSpecial2_EntryWaveAnimJoint_AnimJoint[200] = {
	#include <LinkSpecial2/EntryWaveAnimJoint_AnimJoint.data.inc.c>
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
u32 dLinkSpecial2_EntryWaveMatAnimJoint_MatAnimJoint[24] = {
	#include <LinkSpecial2/EntryWaveMatAnimJoint_MatAnimJoint.data.inc.c>
};

/* Raw data from file offset 0x0BF0 to 0x0C38 (72 bytes) */
u32 dLinkSpecial2_EntryBeamMatAnimJoint_MatAnimJoint[18] = {
	#include <LinkSpecial2/EntryBeamMatAnimJoint_MatAnimJoint.data.inc.c>
};

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
u32 dLinkSpecial2_SpinAttackAnimJoint_AnimJoint[40] = {
	aobjEvent32End(),
	aobjEvent32Wait(1174),
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
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
};

/* Raw data from file offset 0x12F0 to 0x1A10 (1824 bytes) */
u32 dLinkSpecial2_SpinAttackMatAnimJoint_MatAnimJoint[456] = {
	#include <LinkSpecial2/SpinAttackMatAnimJoint_MatAnimJoint.data.inc.c>
};
