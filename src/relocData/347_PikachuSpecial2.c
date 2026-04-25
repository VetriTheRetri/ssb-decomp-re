/* relocData file 347: PikachuSpecial2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* MObjSub chain targets (forward decl + cross-file) resolved by fixRelocChain.py */
extern u8 dPikachuSpecial2_gap_0x06B8[];

PAD(8);

/* Palette: Lut_0x0008 @ 0x8 (16 colors RGBA5551) */
u16 dPikachuSpecial2_Lut_0x0008_palette[16] = {
	#include <PikachuSpecial2/Lut_0x0008.palette.inc.c>
};

/* Raw data from file offset 0x0028 to 0x0640 (1560 bytes) */
/* gap sub-block @ 0x0028 (was gap+0x0, 8 bytes) */
u8 dPikachuSpecial2_gap_0x0028[8] = {
	#include <PikachuSpecial2/gap_0x0028.data.inc.c>
};

/* gap sub-block @ 0x0030 (was gap+0x8, 520 bytes) */
u8 dPikachuSpecial2_gap_0x0028_sub_0x8[520] = {
	#include <PikachuSpecial2/gap_0x0028_sub_0x8.data.inc.c>
};

/* gap sub-block @ 0x0238 (was gap+0x210, 520 bytes) */
u8 dPikachuSpecial2_gap_0x0028_sub_0x210[520] = {
	#include <PikachuSpecial2/gap_0x0028_sub_0x210.data.inc.c>
};

/* gap sub-block @ 0x0440 (was gap+0x418, 512 bytes) */
u8 dPikachuSpecial2_gap_0x0028_sub_0x418[512] = {
	#include <PikachuSpecial2/gap_0x0028_sub_0x418.data.inc.c>
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
/* gap sub-block @ 0x06B8 (was gap+0x0, 24 bytes) */
u8 dPikachuSpecial2_gap_0x06B8[24] = {
	#include <PikachuSpecial2/gap_0x06B8.data.inc.c>
};

/* gap sub-block @ 0x06D0 (was gap+0x18, 8 bytes) */
u8 dPikachuSpecial2_gap_0x06B8_sub_0x18[8] = {
	#include <PikachuSpecial2/gap_0x06B8_sub_0x18.data.inc.c>
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
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dPikachuSpecial2_UnkAnimJoint_AnimJoint_0x898[];

u32 dPikachuSpecial2_UnkAnimJoint_AnimJoint[2] = {
	aobjEvent32End(),
	(u32)dPikachuSpecial2_UnkAnimJoint_AnimJoint_0x898,
};

u32 dPikachuSpecial2_UnkAnimJoint_AnimJoint_0x898[] = {
	aobjEvent32SetValAfter(0x007, 0),
	    0x00000000,
	    0xBFC90FDB,
	    0x00000000,
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetValAfter(0x001, 5),
	    0x3F490FDB,
	aobjEvent32Wait(1),
	aobjEvent32SetFlags(0x002, 1),
	aobjEvent32SetFlags(0x000, 1),
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32SetFlags(0x000, 1),
	aobjEvent32SetFlags(0x002, 1),
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetValAfter(0x001, 4),
	    0x00000000,
	aobjEvent32Wait(1),
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32SetFlags(0x000, 1),
	aobjEvent32SetFlags(0x002, 1),
	aobjEvent32SetFlags(0x000, 1),
	aobjEvent32SetFlags(0x002, 0),
	    0x1C000000,
	(u32)((u8*)dPikachuSpecial2_UnkAnimJoint_AnimJoint + 0x8),
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x0900 to 0x0968 (104 bytes) */
u32 dPikachuSpecial2_UnkMatAnimJoint_MatAnimJoint[26] = {
	aobjEvent32End(),
	aobjEvent32Jump(0x14008000),
	aobjEvent32End(),
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x00000000,
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x00000000,
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,
	aobjEvent32SetAnim(0x000, 0),
	aobjEvent32Jump(0x04EB0242),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
};

/* Palette: Lut_0x0968 @ 0x968 (16 colors RGBA5551) */
u16 dPikachuSpecial2_Lut_0x0968_palette[16] = {
	#include <PikachuSpecial2/Lut_0x0968.palette.inc.c>
};

/* Raw data from file offset 0x0988 to 0x11A0 (2072 bytes) */
/* gap sub-block @ 0x0988 (was gap+0x0, 8 bytes) */
u8 dPikachuSpecial2_gap_0x0988[8] = {
	#include <PikachuSpecial2/gap_0x0988.data.inc.c>
};

/* gap sub-block @ 0x0990 (was gap+0x8, 1032 bytes) */
u8 dPikachuSpecial2_gap_0x0988_sub_0x8[1032] = {
	#include <PikachuSpecial2/gap_0x0988_sub_0x8.data.inc.c>
};

/* gap sub-block @ 0x0D98 (was gap+0x410, 1032 bytes) */
u8 dPikachuSpecial2_gap_0x0988_sub_0x410[1032] = {
	#include <PikachuSpecial2/gap_0x0988_sub_0x410.data.inc.c>
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
/* gap sub-block @ 0x1418 (was gap+0x0, 24 bytes) */
u8 dPikachuSpecial2_gap_0x1418[24] = {
	#include <PikachuSpecial2/gap_0x1418.data.inc.c>
};

/* gap sub-block @ 0x1430 (was gap+0x18, 8 bytes) */
u8 dPikachuSpecial2_gap_0x1418_sub_0x18[8] = {
	#include <PikachuSpecial2/gap_0x1418_sub_0x18.data.inc.c>
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
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dPikachuSpecial2_ThunderShock0AnimJoint_AnimJoint_0x1730[];
extern u32 dPikachuSpecial2_ThunderShock0AnimJoint_AnimJoint_0x17BC[];

u32 dPikachuSpecial2_ThunderShock0AnimJoint_AnimJoint[4] = {
	aobjEvent32End(),
	aobjEvent32End(),
	(u32)dPikachuSpecial2_ThunderShock0AnimJoint_AnimJoint_0x1730,
	(u32)dPikachuSpecial2_ThunderShock0AnimJoint_AnimJoint_0x17BC,
};

u32 dPikachuSpecial2_ThunderShock0AnimJoint_AnimJoint_0x1730[] = {
	aobjEvent32SetVal(0x380, 0),
	    0x3F933332,
	    0x3F933332,
	    0x3F933332,
	aobjEvent32SetValAfter(0x070, 0),
	    0x00000000,
	    0x00000000,
	    0x431ACCCC,
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetVal(0x380, 2),
	    0x3F2B1785,
	    0x3F2B1785,
	    0x3F2B1785,
	aobjEvent32SetValAfterBlock(0x040, 1),
	    0x430A999A,
	aobjEvent32SetValAfterBlock(0x040, 1),
	    0x438F665C,
	aobjEvent32SetVal(0x380, 2),
	    0x3FAB990D,
	    0x3FAB990D,
	    0x3FAB990D,
	aobjEvent32SetValAfterBlock(0x040, 1),
	    0x439B1995,
	aobjEvent32SetValAfterBlock(0x040, 1),
	    0x43E28001,
	aobjEvent32SetVal(0x380, 2),
	    0x3FAF5C29,
	    0x3FAF5C29,
	    0x3FAF5C29,
	aobjEvent32SetValAfterBlock(0x040, 1),
	    0x43E36669,
	aobjEvent32SetValAfterBlock(0x040, 1),
	    0x43E36666,
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32End(),
};

u32 dPikachuSpecial2_ThunderShock0AnimJoint_AnimJoint_0x17BC[] = {
	aobjEvent32SetValAfter(0x3F7, 0),
	    0x40490FDB,
	    0x00000000,
	    0xC0490FDB,
	    0x00000000,
	    0x00000000,
	    0x42960000,
	    0x3F800000,
	    0x3E800000,
	    0x3E800000,
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetValAfter(0x080, 4),
	    0x3F800000,
	aobjEvent32SetValAfterBlock(0x345, 2),
	    0x00000000,
	    0x00000000,
	    0x00000000,
	    0x3EB33333,
	    0x3F4CCCCD,
	aobjEvent32SetValAfterBlock(0x345, 2),
	    0x40490FDB,
	    0xC0490FDB,
	    0x43B40000,
	    0x3F19999A,
	    0x3F99BE52,
	aobjEvent32SetValAfterBlock(0x3C5, 2),
	    0x40490FDB,
	    0xC0490FDB,
	    0x43B40000,
	    0x3F800000,
	    0x3F19999A,
	    0x3F99BE52,
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32End(),
};

PAD(12);

/* Raw data from file offset 0x1850 to 0x1970 (288 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dPikachuSpecial2_ThunderShock1AnimJoint_AnimJoint_0x1860[];
extern u32 dPikachuSpecial2_ThunderShock1AnimJoint_AnimJoint_0x18DC[];

u32 dPikachuSpecial2_ThunderShock1AnimJoint_AnimJoint[4] = {
	aobjEvent32End(),
	aobjEvent32End(),
	(u32)dPikachuSpecial2_ThunderShock1AnimJoint_AnimJoint_0x1860,
	(u32)dPikachuSpecial2_ThunderShock1AnimJoint_AnimJoint_0x18DC,
};

u32 dPikachuSpecial2_ThunderShock1AnimJoint_AnimJoint_0x1860[] = {
	aobjEvent32SetVal(0x380, 0),
	    0x3F800000,
	    0x3F800000,
	    0x3F800000,
	aobjEvent32SetValAfter(0x070, 0),
	    0x00000000,
	    0x00000000,
	    0x43203333,
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetVal(0x380, 5),
	    0x3FAF5C25,
	    0x3FAF5C25,
	    0x3FAF5C25,
	aobjEvent32SetValAfterBlock(0x040, 1),
	    0x4324FFFF,
	aobjEvent32SetValAfterBlock(0x040, 1),
	    0x438559A0,
	aobjEvent32SetValAfterBlock(0x040, 1),
	    0x43880CD4,
	aobjEvent32SetValAfterBlock(0x040, 1),
	    0x43E14CD5,
	aobjEvent32SetValAfterBlock(0x040, 1),
	    0x43E40000,
	aobjEvent32SetValAfter(0x040, 1),
	    0x43E40000,
	aobjEvent32SetValBlock(0x380, 1),
	    0x3FAF5C29,
	    0x3FAF5C29,
	    0x3FAF5C29,
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32End(),
};

u32 dPikachuSpecial2_ThunderShock1AnimJoint_AnimJoint_0x18DC[] = {
	aobjEvent32SetValAfter(0x3F7, 0),
	    0x40490FDB,
	    0x00000000,
	    0x00000000,
	    0x00000000,
	    0x00000000,
	    0x42B40000,
	    0x3F800000,
	    0x3E800000,
	    0x3E99999B,
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetValAfter(0x080, 4),
	    0x3F800000,
	aobjEvent32SetValAfterBlock(0x345, 2),
	    0x00000000,
	    0xC0490FDB,
	    0x00000000,
	    0x3EB33333,
	    0x3F1F1B4B,
	aobjEvent32SetValAfter(0x004, 4),
	    0xC0490FDB,
	aobjEvent32SetValAfterBlock(0x341, 2),
	    0x40490FDB,
	    0x43B40000,
	    0x3F19999A,
	    0x3F99BE52,
	aobjEvent32SetValAfterBlock(0x3C1, 2),
	    0x40490FDB,
	    0x43B40000,
	    0x3F800000,
	    0x3F19999A,
	    0x3F99BE52,
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32End(),
};

PAD(12);

/* Raw data from file offset 0x1970 to 0x1A80 (272 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dPikachuSpecial2_ThunderShock2AnimJoint_AnimJoint_0x1980[];
extern u32 dPikachuSpecial2_ThunderShock2AnimJoint_AnimJoint_0x1A0C[];

u32 dPikachuSpecial2_ThunderShock2AnimJoint_AnimJoint[4] = {
	aobjEvent32End(),
	aobjEvent32End(),
	(u32)dPikachuSpecial2_ThunderShock2AnimJoint_AnimJoint_0x1980,
	(u32)dPikachuSpecial2_ThunderShock2AnimJoint_AnimJoint_0x1A0C,
};

u32 dPikachuSpecial2_ThunderShock2AnimJoint_AnimJoint_0x1980[] = {
	aobjEvent32SetVal(0x380, 0),
	    0x3F800000,
	    0x3F800000,
	    0x3F800000,
	aobjEvent32SetValAfter(0x070, 0),
	    0x00000000,
	    0x00000000,
	    0x43203334,
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetVal(0x380, 2),
	    0x3F52A069,
	    0x3F52A069,
	    0x3F52A069,
	aobjEvent32SetValAfterBlock(0x040, 1),
	    0x4319999A,
	aobjEvent32SetValAfterBlock(0x040, 1),
	    0x438D4CCE,
	aobjEvent32SetVal(0x380, 3),
	    0x3FC8F5C0,
	    0x3FC8F5C0,
	    0x3FC8F5C0,
	aobjEvent32SetValAfterBlock(0x040, 1),
	    0x4395FFFD,
	aobjEvent32SetValAfterBlock(0x040, 1),
	    0x43E23333,
	aobjEvent32SetValAfterBlock(0x040, 1),
	    0x43EAE66B,
	aobjEvent32SetValAfter(0x040, 1),
	    0x43EAE666,
	aobjEvent32SetValBlock(0x380, 1),
	    0x3FC8F5C0,
	    0x3FC8F5C0,
	    0x3FC8F5C0,
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32End(),
};

u32 dPikachuSpecial2_ThunderShock2AnimJoint_AnimJoint_0x1A0C[] = {
	aobjEvent32SetValAfter(0x3F7, 0),
	    0x00000000,
	    0x00000000,
	    0x00000000,
	    0x00000000,
	    0x00000000,
	    0x00000000,
	    0x3F800000,
	    0x3E800000,
	    0x3E99999B,
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetValAfterBlock(0x341, 2),
	    0xC0490FDB,
	    0x43610000,
	    0x3EB33333,
	    0x3F400000,
	aobjEvent32SetValAfterBlock(0x341, 2),
	    0x00000000,
	    0x00000000,
	    0x3F000000,
	    0x3F99999A,
	aobjEvent32SetValAfterBlock(0x341, 2),
	    0x00000000,
	    0x00000000,
	    0x3F000000,
	    0x3F99999A,
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x1A80 to 0x1AC0 (64 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dPikachuSpecial2_ThunderShock0MatAnimJoint_MatAnimJoint_0x1A90[];
extern u32 dPikachuSpecial2_ThunderShock0MatAnimJoint_MatAnimJoint_0x1ABC[];

u32 dPikachuSpecial2_ThunderShock0MatAnimJoint_MatAnimJoint[4] = {
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	(u32)dPikachuSpecial2_ThunderShock0MatAnimJoint_MatAnimJoint_0x1ABC,
};

u32 dPikachuSpecial2_ThunderShock0MatAnimJoint_MatAnimJoint_0x1A90[] = {
	aobjEvent32SetValAfterBlock(0x01F, 0),
	    0x3F800000,
	    0x00000000,
	    0x00000000,
	    0x3F800000,
	    0x3F800000,
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x00000000,
	aobjEvent32End(),
};

u32 dPikachuSpecial2_ThunderShock0MatAnimJoint_MatAnimJoint_0x1ABC[] = {
	(u32)((u8*)dPikachuSpecial2_ThunderShock0MatAnimJoint_MatAnimJoint + 0x10),
};

/* Raw data from file offset 0x1AC0 to 0x1B10 (80 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dPikachuSpecial2_ThunderShock1MatAnimJoint_MatAnimJoint_0x1AD0[];
extern u32 dPikachuSpecial2_ThunderShock1MatAnimJoint_MatAnimJoint_0x1B04[];

u32 dPikachuSpecial2_ThunderShock1MatAnimJoint_MatAnimJoint[4] = {
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	(u32)dPikachuSpecial2_ThunderShock1MatAnimJoint_MatAnimJoint_0x1B04,
};

u32 dPikachuSpecial2_ThunderShock1MatAnimJoint_MatAnimJoint_0x1AD0[] = {
	aobjEvent32SetValAfterBlock(0x01F, 0),
	    0x3F800000,
	    0x00000000,
	    0x00000000,
	    0x3F800000,
	    0x3F800000,
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,
	aobjEvent32End(),
};

u32 dPikachuSpecial2_ThunderShock1MatAnimJoint_MatAnimJoint_0x1B04[] = {
	(u32)((u8*)dPikachuSpecial2_ThunderShock1MatAnimJoint_MatAnimJoint + 0x10),
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x1B10 to 0x1B60 (80 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dPikachuSpecial2_ThunderShock2MatAnimJoint_MatAnimJoint_0x1B20[];
extern u32 dPikachuSpecial2_ThunderShock2MatAnimJoint_MatAnimJoint_0x1B54[];

u32 dPikachuSpecial2_ThunderShock2MatAnimJoint_MatAnimJoint[4] = {
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	(u32)dPikachuSpecial2_ThunderShock2MatAnimJoint_MatAnimJoint_0x1B54,
};

u32 dPikachuSpecial2_ThunderShock2MatAnimJoint_MatAnimJoint_0x1B20[] = {
	aobjEvent32SetValAfterBlock(0x01F, 0),
	    0x00000000,
	    0x00000000,
	    0x00000000,
	    0x3F800000,
	    0x3F800000,
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,
	aobjEvent32End(),
};

u32 dPikachuSpecial2_ThunderShock2MatAnimJoint_MatAnimJoint_0x1B54[] = {
	(u32)((u8*)dPikachuSpecial2_ThunderShock2MatAnimJoint_MatAnimJoint + 0x10),
	aobjEvent32End(),
};

PAD(4);
