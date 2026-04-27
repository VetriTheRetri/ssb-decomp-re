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

extern MObjSub *dPikachuSpecial2_gap_0x06B8_sub_0x18[];

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
u8 dPikachuSpecial2_Tex_0x30[520] = {
	#include <PikachuSpecial2/Tex_0x30.tex.inc.c>
};

/* gap sub-block @ 0x0238 (was gap+0x210, 520 bytes) */
u8 dPikachuSpecial2_Tex_0x238[520] = {
	#include <PikachuSpecial2/Tex_0x238.tex.inc.c>
};

/* gap sub-block @ 0x0440 (was gap+0x418, 512 bytes) */
u8 dPikachuSpecial2_Tex_0x440[512] = {
	#include <PikachuSpecial2/Tex_0x440.tex.inc.c>
};

/* MObjSub-list head @ 0x640 — 6-entry MObjSub** array.
 * The real MObjSub data starts at +0x18 (dPikachuSpecial2_UnkMObjSub_MObjSub_real below). */
MObjSub **dPikachuSpecial2_UnkMObjSub_MObjSub[2] = {
	NULL,
	NULL,
};

/* Texture-pointer sprites array (was MObjSub**[] tail starting at +0x8). */
void *dPikachuSpecial2_UnkMObjSub_MObjSub_sprites[4] = {
	(void *)dPikachuSpecial2_Tex_0x440,
	(void *)dPikachuSpecial2_Tex_0x238,
	(void *)dPikachuSpecial2_Tex_0x30,
	NULL,
};

/* The real MObjSub @ +0x18 (was folded into the prior
 * MObjSub-typed declaration). */
MObjSub dPikachuSpecial2_UnkMObjSub_MObjSub_real = {
	0x0000,
	0x02, 0x02,
	(void**)dPikachuSpecial2_UnkMObjSub_MObjSub_sprites,
	0x0020, 0x0000, 0x0040, 0x0040,
	0,
	0.0f, 0.0f,
	1.0f, 1.0f,
	0.0f, 1.0f,
	(void**)0x00000000,
	0x0001,
	0x02, 0x00,
	0x0020,
	0x0020, 0x0040, 0x0040,
	0.0f, 0.0f,
	0.0f, 0.0f,
	0x00002005,
	{ { 0xFF, 0xFF, 0xFF, 0xFF } },
	0x00, 0x00, { 0x00, 0x00 },
	{ { 0x00, 0x00, 0x00, 0xFF } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0xFF, 0xFF, 0xFF, 0x00 } },
	{ { 0x26, 0x26, 0x26, 0x00 } },
	0, 0,
	0, 0,
};

/* Raw data from file offset 0x06B8 to 0x06D8 (32 bytes) */
/* gap sub-block @ 0x06D0 (was gap+0x18, 8 bytes) */
/* MObjSub.sprites pointer table @ +0x6D0 (2 ptrs) — each entry is a void* texture-data pointer fed to gDPSetTextureImage. */
MObjSub *dPikachuSpecial2_gap_0x06B8_sub_0x18[2] = {
	&dPikachuSpecial2_UnkMObjSub_MObjSub_real,
	NULL,
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

AObjEvent32 *dPikachuSpecial2_UnkAnimJoint_AnimJoint[2] = {
	NULL,
	(AObjEvent32 *)dPikachuSpecial2_UnkAnimJoint_AnimJoint_0x898,
};

u32 dPikachuSpecial2_UnkAnimJoint_AnimJoint_0x898[] = {
	aobjEvent32SetValAfter(0x007, 0),
	    0x00000000,  /* 0.0f */
	    0xBFC90FDB,  /* -1.5707963705062866f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetValAfter(0x001, 5),
	    0x3F490FDB,  /* 0.7853981852531433f */
	aobjEvent32Wait(1),
	aobjEvent32SetFlags(0x002, 1),
	aobjEvent32SetFlags(0x000, 1),
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32SetFlags(0x000, 1),
	aobjEvent32SetFlags(0x002, 1),
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetValAfter(0x001, 4),
	    0x00000000,  /* 0.0f */
	aobjEvent32Wait(1),
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32SetFlags(0x000, 1),
	aobjEvent32SetFlags(0x002, 1),
	aobjEvent32SetFlags(0x000, 1),
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dPikachuSpecial2_UnkAnimJoint_AnimJoint_0x898),
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

/* DObjDLLink @ 0x1620 (2 entries) — DL slot for a DObjDesc entry. */
DObjDLLink dPikachuSpecial2_JointCmd_0x1620[] = {
	{ 0, dPikachuSpecial2_Joint_0x14B8_DisplayList },
	{ 4, NULL },
};

/* DObjDLLink @ 0x1630 (2 entries) — DL slot for a DObjDesc entry. */
DObjDLLink dPikachuSpecial2_JointCmd_0x1630[] = {
	{ 1, dPikachuSpecial2_Joint_0x1598_DisplayList },
	{ 4, NULL },
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

AObjEvent32 *dPikachuSpecial2_ThunderShock0AnimJoint_AnimJoint[4] = {
	NULL,
	NULL,
	(AObjEvent32 *)dPikachuSpecial2_ThunderShock0AnimJoint_AnimJoint_0x1730,
	(AObjEvent32 *)dPikachuSpecial2_ThunderShock0AnimJoint_AnimJoint_0x17BC,
};

u32 dPikachuSpecial2_ThunderShock0AnimJoint_AnimJoint_0x1730[] = {
	aobjEvent32SetVal(0x380, 0),
	    0x3F933332,  /* 1.1499998569488525f */
	    0x3F933332,  /* 1.1499998569488525f */
	    0x3F933332,  /* 1.1499998569488525f */
	aobjEvent32SetValAfter(0x070, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x431ACCCC,  /* 154.79998779296875f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetVal(0x380, 2),
	    0x3F2B1785,  /* 0.6683276295661926f */
	    0x3F2B1785,  /* 0.6683276295661926f */
	    0x3F2B1785,  /* 0.6683276295661926f */
	aobjEvent32SetValAfterBlock(0x040, 1),
	    0x430A999A,  /* 138.60000610351562f */
	aobjEvent32SetValAfterBlock(0x040, 1),
	    0x438F665C,  /* 286.7996826171875f */
	aobjEvent32SetVal(0x380, 2),
	    0x3FAB990D,  /* 1.3406082391738892f */
	    0x3FAB990D,  /* 1.3406082391738892f */
	    0x3FAB990D,  /* 1.3406082391738892f */
	aobjEvent32SetValAfterBlock(0x040, 1),
	    0x439B1995,  /* 310.1998596191406f */
	aobjEvent32SetValAfterBlock(0x040, 1),
	    0x43E28001,  /* 453.0000305175781f */
	aobjEvent32SetVal(0x380, 2),
	    0x3FAF5C29,  /* 1.3700000047683716f */
	    0x3FAF5C29,  /* 1.3700000047683716f */
	    0x3FAF5C29,  /* 1.3700000047683716f */
	aobjEvent32SetValAfterBlock(0x040, 1),
	    0x43E36669,  /* 454.8000793457031f */
	aobjEvent32SetValAfterBlock(0x040, 1),
	    0x43E36666,  /* 454.79998779296875f */
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32End(),
};

u32 dPikachuSpecial2_ThunderShock0AnimJoint_AnimJoint_0x17BC[] = {
	aobjEvent32SetValAfter(0x3F7, 0),
	    0x40490FDB,  /* 3.1415927410125732f */
	    0x00000000,  /* 0.0f */
	    0xC0490FDB,  /* -3.1415927410125732f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x42960000,  /* 75.0f */
	    0x3F800000,  /* 1.0f */
	    0x3E800000,  /* 0.25f */
	    0x3E800000,  /* 0.25f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetValAfter(0x080, 4),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x345, 2),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x3EB33333,  /* 0.3499999940395355f */
	    0x3F4CCCCD,  /* 0.800000011920929f */
	aobjEvent32SetValAfterBlock(0x345, 2),
	    0x40490FDB,  /* 3.1415927410125732f */
	    0xC0490FDB,  /* -3.1415927410125732f */
	    0x43B40000,  /* 360.0f */
	    0x3F19999A,  /* 0.6000000238418579f */
	    0x3F99BE52,  /* 1.2011206150054932f */
	aobjEvent32SetValAfterBlock(0x3C5, 2),
	    0x40490FDB,  /* 3.1415927410125732f */
	    0xC0490FDB,  /* -3.1415927410125732f */
	    0x43B40000,  /* 360.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F19999A,  /* 0.6000000238418579f */
	    0x3F99BE52,  /* 1.2011206150054932f */
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

AObjEvent32 *dPikachuSpecial2_ThunderShock1AnimJoint_AnimJoint[4] = {
	NULL,
	NULL,
	(AObjEvent32 *)dPikachuSpecial2_ThunderShock1AnimJoint_AnimJoint_0x1860,
	(AObjEvent32 *)dPikachuSpecial2_ThunderShock1AnimJoint_AnimJoint_0x18DC,
};

u32 dPikachuSpecial2_ThunderShock1AnimJoint_AnimJoint_0x1860[] = {
	aobjEvent32SetVal(0x380, 0),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfter(0x070, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x43203333,  /* 160.1999969482422f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetVal(0x380, 5),
	    0x3FAF5C25,  /* 1.3699995279312134f */
	    0x3FAF5C25,  /* 1.3699995279312134f */
	    0x3FAF5C25,  /* 1.3699995279312134f */
	aobjEvent32SetValAfterBlock(0x040, 1),
	    0x4324FFFF,  /* 164.99998474121094f */
	aobjEvent32SetValAfterBlock(0x040, 1),
	    0x438559A0,  /* 266.7001953125f */
	aobjEvent32SetValAfterBlock(0x040, 1),
	    0x43880CD4,  /* 272.1002197265625f */
	aobjEvent32SetValAfterBlock(0x040, 1),
	    0x43E14CD5,  /* 450.6002502441406f */
	aobjEvent32SetValAfterBlock(0x040, 1),
	    0x43E40000,  /* 456.0f */
	aobjEvent32SetValAfter(0x040, 1),
	    0x43E40000,  /* 456.0f */
	aobjEvent32SetValBlock(0x380, 1),
	    0x3FAF5C29,  /* 1.3700000047683716f */
	    0x3FAF5C29,  /* 1.3700000047683716f */
	    0x3FAF5C29,  /* 1.3700000047683716f */
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32End(),
};

u32 dPikachuSpecial2_ThunderShock1AnimJoint_AnimJoint_0x18DC[] = {
	aobjEvent32SetValAfter(0x3F7, 0),
	    0x40490FDB,  /* 3.1415927410125732f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x42B40000,  /* 90.0f */
	    0x3F800000,  /* 1.0f */
	    0x3E800000,  /* 0.25f */
	    0x3E99999B,  /* 0.30000004172325134f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetValAfter(0x080, 4),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x345, 2),
	    0x00000000,  /* 0.0f */
	    0xC0490FDB,  /* -3.1415927410125732f */
	    0x00000000,  /* 0.0f */
	    0x3EB33333,  /* 0.3499999940395355f */
	    0x3F1F1B4B,  /* 0.6215102076530457f */
	aobjEvent32SetValAfter(0x004, 4),
	    0xC0490FDB,  /* -3.1415927410125732f */
	aobjEvent32SetValAfterBlock(0x341, 2),
	    0x40490FDB,  /* 3.1415927410125732f */
	    0x43B40000,  /* 360.0f */
	    0x3F19999A,  /* 0.6000000238418579f */
	    0x3F99BE52,  /* 1.2011206150054932f */
	aobjEvent32SetValAfterBlock(0x3C1, 2),
	    0x40490FDB,  /* 3.1415927410125732f */
	    0x43B40000,  /* 360.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F19999A,  /* 0.6000000238418579f */
	    0x3F99BE52,  /* 1.2011206150054932f */
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

AObjEvent32 *dPikachuSpecial2_ThunderShock2AnimJoint_AnimJoint[4] = {
	NULL,
	NULL,
	(AObjEvent32 *)dPikachuSpecial2_ThunderShock2AnimJoint_AnimJoint_0x1980,
	(AObjEvent32 *)dPikachuSpecial2_ThunderShock2AnimJoint_AnimJoint_0x1A0C,
};

u32 dPikachuSpecial2_ThunderShock2AnimJoint_AnimJoint_0x1980[] = {
	aobjEvent32SetVal(0x380, 0),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfter(0x070, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x43203334,  /* 160.20001220703125f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetVal(0x380, 2),
	    0x3F52A069,  /* 0.8227601647377014f */
	    0x3F52A069,  /* 0.8227601647377014f */
	    0x3F52A069,  /* 0.8227601647377014f */
	aobjEvent32SetValAfterBlock(0x040, 1),
	    0x4319999A,  /* 153.60000610351562f */
	aobjEvent32SetValAfterBlock(0x040, 1),
	    0x438D4CCE,  /* 282.60003662109375f */
	aobjEvent32SetVal(0x380, 3),
	    0x3FC8F5C0,  /* 1.5699996948242188f */
	    0x3FC8F5C0,  /* 1.5699996948242188f */
	    0x3FC8F5C0,  /* 1.5699996948242188f */
	aobjEvent32SetValAfterBlock(0x040, 1),
	    0x4395FFFD,  /* 299.9999084472656f */
	aobjEvent32SetValAfterBlock(0x040, 1),
	    0x43E23333,  /* 452.3999938964844f */
	aobjEvent32SetValAfterBlock(0x040, 1),
	    0x43EAE66B,  /* 469.8001403808594f */
	aobjEvent32SetValAfter(0x040, 1),
	    0x43EAE666,  /* 469.79998779296875f */
	aobjEvent32SetValBlock(0x380, 1),
	    0x3FC8F5C0,  /* 1.5699996948242188f */
	    0x3FC8F5C0,  /* 1.5699996948242188f */
	    0x3FC8F5C0,  /* 1.5699996948242188f */
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32End(),
};

u32 dPikachuSpecial2_ThunderShock2AnimJoint_AnimJoint_0x1A0C[] = {
	aobjEvent32SetValAfter(0x3F7, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	    0x3E800000,  /* 0.25f */
	    0x3E99999B,  /* 0.30000004172325134f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetValAfterBlock(0x341, 2),
	    0xC0490FDB,  /* -3.1415927410125732f */
	    0x43610000,  /* 225.0f */
	    0x3EB33333,  /* 0.3499999940395355f */
	    0x3F400000,  /* 0.75f */
	aobjEvent32SetValAfterBlock(0x341, 2),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x3F000000,  /* 0.5f */
	    0x3F99999A,  /* 1.2000000476837158f */
	aobjEvent32SetValAfterBlock(0x341, 2),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x3F000000,  /* 0.5f */
	    0x3F99999A,  /* 1.2000000476837158f */
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

AObjEvent32 *dPikachuSpecial2_ThunderShock0MatAnimJoint_MatAnimJoint[4] = {
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dPikachuSpecial2_ThunderShock0MatAnimJoint_MatAnimJoint_0x1ABC,
};

u32 dPikachuSpecial2_ThunderShock0MatAnimJoint_MatAnimJoint_0x1A90[] = {
	aobjEvent32SetValAfterBlock(0x01F, 0),
	    0x3F800000,  /* 1.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
};

u32 dPikachuSpecial2_ThunderShock0MatAnimJoint_MatAnimJoint_0x1ABC[] = {
	(u32)(dPikachuSpecial2_ThunderShock0MatAnimJoint_MatAnimJoint_0x1A90),
};

/* Raw data from file offset 0x1AC0 to 0x1B10 (80 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dPikachuSpecial2_ThunderShock1MatAnimJoint_MatAnimJoint_0x1AD0[];
extern u32 dPikachuSpecial2_ThunderShock1MatAnimJoint_MatAnimJoint_0x1B04[];

AObjEvent32 *dPikachuSpecial2_ThunderShock1MatAnimJoint_MatAnimJoint[4] = {
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dPikachuSpecial2_ThunderShock1MatAnimJoint_MatAnimJoint_0x1B04,
};

u32 dPikachuSpecial2_ThunderShock1MatAnimJoint_MatAnimJoint_0x1AD0[] = {
	aobjEvent32SetValAfterBlock(0x01F, 0),
	    0x3F800000,  /* 1.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32End(),
};

u32 dPikachuSpecial2_ThunderShock1MatAnimJoint_MatAnimJoint_0x1B04[] = {
	(u32)(dPikachuSpecial2_ThunderShock1MatAnimJoint_MatAnimJoint_0x1AD0),
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x1B10 to 0x1B60 (80 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dPikachuSpecial2_ThunderShock2MatAnimJoint_MatAnimJoint_0x1B20[];
extern u32 dPikachuSpecial2_ThunderShock2MatAnimJoint_MatAnimJoint_0x1B54[];

AObjEvent32 *dPikachuSpecial2_ThunderShock2MatAnimJoint_MatAnimJoint[4] = {
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dPikachuSpecial2_ThunderShock2MatAnimJoint_MatAnimJoint_0x1B54,
};

u32 dPikachuSpecial2_ThunderShock2MatAnimJoint_MatAnimJoint_0x1B20[] = {
	aobjEvent32SetValAfterBlock(0x01F, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
};

u32 dPikachuSpecial2_ThunderShock2MatAnimJoint_MatAnimJoint_0x1B54[] = {
	(u32)(dPikachuSpecial2_ThunderShock2MatAnimJoint_MatAnimJoint_0x1B20),
	aobjEvent32End(),
};

PAD(4);
