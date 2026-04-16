/* relocData file 347: PikachuSpecial2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"

/* MObjSub chain targets (forward decl + cross-file) resolved by fixRelocChain.py */
extern u8 dPikachuSpecial2_gap_0x06B8[];

PAD(8);

/* Palette: Lut_0x0008 @ 0x8 (16 colors RGBA5551) */
u16 dPikachuSpecial2_Lut_0x0008_palette[16] = {
	#include <PikachuSpecial2/Lut_0x0008.palette.inc.c>
};

/* Raw data from file offset 0x0028 to 0x0640 (1560 bytes) */
u8 dPikachuSpecial2_gap_0x0028[1560] = {
	#include <PikachuSpecial2/gap_0x0028.data.inc.c>
};

/* MObjSub: UnkMObjSub @ 0x640 */
MObjSub dPikachuSpecial2_UnkMObjSub_MObjSub = {
	0x0000,
	0x00, 0x00,
	(void**)((u8*)dPikachuSpecial2_gap_0x06B8 + 0x18),
	0x0193, 0x0110, 0x0194, 0x008E,
	26673164,
	0.0f, 7.20267410662956e-43f,
	6.612381052168431e-38f, 2.938735877055719e-39f,
	5.877561437213154e-39f, 0.0f,
	(void**)0x00000000,
	0x0000,
	0x00, 0x00,
	0x3F80,
	0x0000, 0x3F80, 0x0000,
	0.0f, 1.0f,
	0.0f, 9.255296097172552e-41f,
	0x00200020,
	{ { 0x00, 0x40, 0x00, 0x40 } },
	0x00, 0x00, { 0x00, 0x00 },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x20, 0x05 } },
	-1, 0,
	255, 0,
};

/* Raw data from file offset 0x06B8 to 0x06D8 (32 bytes) */
u8 dPikachuSpecial2_gap_0x06B8[32] = {
	#include <PikachuSpecial2/gap_0x06B8.data.inc.c>
};

/* Vtx: Vtx_0x06D8 @ 0x6D8 (4 vertices) */
Vtx dPikachuSpecial2_Vtx_0x06D8_Vtx[4] = {
	#include <PikachuSpecial2/Vtx_0x06D8.vtx.inc.c>
};

/* DisplayList: Joint_0x0718 @ 0x718 (232 bytes) */
Gfx dPikachuSpecial2_Joint_0x0718_DisplayList[29] = {
	#include <PikachuSpecial2/Joint_0x0718.dl.inc.c>
};

/* DObjDesc: UnkDObjDesc @ 0x800 (3 entries) */
DObjDesc dPikachuSpecial2_UnkDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dPikachuSpecial2_Joint_0x0718_DisplayList, { 0.0f, 180.0f, 0.0f }, { 0.0f, -1.570796012878418f, 0.0f }, { 1.0f, 1.498731017112732f, 1.498731017112732f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(12);

/* Raw data from file offset 0x0890 to 0x0900 (112 bytes) */
u8 dPikachuSpecial2_UnkAnimJoint_AnimJoint[112] = {
	#include <PikachuSpecial2/UnkAnimJoint_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x0900 to 0x0968 (104 bytes) */
u8 dPikachuSpecial2_UnkMatAnimJoint_MatAnimJoint[104] = {
	#include <PikachuSpecial2/UnkMatAnimJoint_MatAnimJoint.data.inc.c>
};

/* Palette: Lut_0x0968 @ 0x968 (16 colors RGBA5551) */
u16 dPikachuSpecial2_Lut_0x0968_palette[16] = {
	#include <PikachuSpecial2/Lut_0x0968.palette.inc.c>
};

/* Raw data from file offset 0x0988 to 0x11A0 (2072 bytes) */
u8 dPikachuSpecial2_gap_0x0988[2072] = {
	#include <PikachuSpecial2/gap_0x0988.data.inc.c>
};

/* Raw data from file offset 0x11A0 to 0x13A0 (512 bytes) */
u8 dPikachuSpecial2_Tex_0x11A0[512] = {
	#include <PikachuSpecial2/Tex_0x11A0.tex.inc.c>
};

/* MObjSub: ThunderShockMObjSub @ 0x13A0 */
MObjSub dPikachuSpecial2_ThunderShockMObjSub_MObjSub = {
	0x0000,
	0x00, 0x00,
	(void**)0x00000000,
	0x0000, 0x0000, 0x04EC, 0x050C,
	82641766,
	5.619082541163537e-36f, 1.0789998175301091e-42f,
	6.583672370270115e-36f, 2.938735877055719e-39f,
	2.938780718606577e-39f, 0.0f,
	(void**)0x00000000,
	0x0000,
	0x00, 0x00,
	0x3F80,
	0x0000, 0x3F80, 0x0000,
	0.0f, 1.0f,
	0.0f, 1.478659247995565e-38f,
	0x00200020,
	{ { 0x00, 0x20, 0x00, 0x20 } },
	0x00, 0x00, { 0x00, 0x00 },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x20, 0x05 } },
	-1, 0,
	255, 8,
};

/* Raw data from file offset 0x1418 to 0x1438 (32 bytes) */
u8 dPikachuSpecial2_gap_0x1418[32] = {
	#include <PikachuSpecial2/gap_0x1418.data.inc.c>
};

/* Vtx: Vtx_0x1438 @ 0x1438 (4 vertices) */
Vtx dPikachuSpecial2_Vtx_0x1438_Vtx[4] = {
	#include <PikachuSpecial2/Vtx_0x1438.vtx.inc.c>
};

/* Vtx: Vtx_0x1478 @ 0x1478 (4 vertices) */
Vtx dPikachuSpecial2_Vtx_0x1478_Vtx[4] = {
	#include <PikachuSpecial2/Vtx_0x1478.vtx.inc.c>
};

/* DisplayList: Joint_0x14B8 @ 0x14B8 (224 bytes) */
Gfx dPikachuSpecial2_Joint_0x14B8_DisplayList[28] = {
	#include <PikachuSpecial2/Joint_0x14B8.dl.inc.c>
};

/* DisplayList: Joint_0x1598 @ 0x1598 (136 bytes) */
Gfx dPikachuSpecial2_Joint_0x1598_DisplayList[17] = {
	#include <PikachuSpecial2/Joint_0x1598.dl.inc.c>
};

/* Raw data from file offset 0x1620 to 0x1630 (16 bytes) */
u8 dPikachuSpecial2_JointCmd_0x1620[16] = {
	#include <PikachuSpecial2/JointCmd_0x1620.data.inc.c>
};

/* Raw data from file offset 0x1630 to 0x1640 (16 bytes) */
u8 dPikachuSpecial2_JointCmd_0x1630[16] = {
	#include <PikachuSpecial2/JointCmd_0x1630.data.inc.c>
};

/* DObjDesc: ThunderShockDObjDesc @ 0x1640 (5 entries) */
DObjDesc dPikachuSpecial2_ThunderShockDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dPikachuSpecial2_JointCmd_0x1620, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dPikachuSpecial2_JointCmd_0x1630, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(4);

/* Raw data from file offset 0x1720 to 0x1850 (304 bytes) */
u8 dPikachuSpecial2_ThunderShock0AnimJoint_AnimJoint[304] = {
	#include <PikachuSpecial2/ThunderShock0AnimJoint_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x1850 to 0x1970 (288 bytes) */
u8 dPikachuSpecial2_ThunderShock1AnimJoint_AnimJoint[288] = {
	#include <PikachuSpecial2/ThunderShock1AnimJoint_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x1970 to 0x1A80 (272 bytes) */
u8 dPikachuSpecial2_ThunderShock2AnimJoint_AnimJoint[272] = {
	#include <PikachuSpecial2/ThunderShock2AnimJoint_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x1A80 to 0x1AC0 (64 bytes) */
u8 dPikachuSpecial2_ThunderShock0MatAnimJoint_MatAnimJoint[64] = {
	#include <PikachuSpecial2/ThunderShock0MatAnimJoint_MatAnimJoint.data.inc.c>
};

/* Raw data from file offset 0x1AC0 to 0x1B10 (80 bytes) */
u8 dPikachuSpecial2_ThunderShock1MatAnimJoint_MatAnimJoint[80] = {
	#include <PikachuSpecial2/ThunderShock1MatAnimJoint_MatAnimJoint.data.inc.c>
};

/* Raw data from file offset 0x1B10 to 0x1B60 (80 bytes) */
u8 dPikachuSpecial2_ThunderShock2MatAnimJoint_MatAnimJoint[80] = {
	#include <PikachuSpecial2/ThunderShock2MatAnimJoint_MatAnimJoint.data.inc.c>
};

