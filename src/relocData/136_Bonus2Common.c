/* relocData file 136: Bonus2Common */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* MObjSub chain targets (forward decl + cross-file) resolved by fixRelocChain.py */
extern u8 dBonus2Common_gap_0x3798[];
extern u8 dBonus2Common_gap_0x3FE8[];
extern u8 dBonus2Common_gap_0x4818[];

extern MObjSub *dBonus2Common_gap_0x3798_sub_0x88[];
extern MObjSub *dBonus2Common_gap_0x3FE8_sub_0x88[];
extern MObjSub *dBonus2Common_gap_0x4818_sub_0x88[];

/* Raw data from file offset 0x0000 to 0x3720 (14112 bytes) */
PAD(8);

/* gap sub-block @ 0x0008 (was gap+0x8, 4104 bytes) */
/* @tex fmt=RGBA16 dim=128x32 */
u8 dBonus2Common_Tex_0x0008[4104] = {
	#include <Bonus2Common/Tex_0x0008.tex.inc.c>
};

/* gap sub-block @ 0x1010 (was gap+0x1010, 2056 bytes) */
/* @tex fmt=RGBA16 dim=32x32 */
u8 dBonus2Common_Tex_0x1010[2056] = {
	#include <Bonus2Common/Tex_0x1010.tex.inc.c>
};

/* gap sub-block @ 0x1818 (was gap+0x1818, 2056 bytes) */
/* @tex fmt=RGBA16 dim=64x64 */
u8 dBonus2Common_Tex_0x1818[2056] = {
	#include <Bonus2Common/Tex_0x1818.tex.inc.c>
};

/* gap sub-block @ 0x2020 (was gap+0x2020, 3088 bytes) */
/* @tex fmt=I8 dim=55x55 */
u8 dBonus2Common_Tex_0x2020[3088] = {
	#include <Bonus2Common/Tex_0x2020.tex.inc.c>
};

/* gap sub-block @ 0x2C30 (was gap+0x2C30, 2800 bytes) */
/* @tex fmt=I8 dim=50x50 */
u8 dBonus2Common_Tex_0x2C30[2800] = {
	#include <Bonus2Common/Tex_0x2C30.tex.inc.c>
};

/* MObjSub-list head @ 0x3720 — 4-entry MObjSub** array.
 * The real MObjSub data starts at +0x10 (dBonus2Common_PlatformSmall_MObjSub_real below). */
MObjSub **dBonus2Common_PlatformSmall_MObjSub[4] = {
	NULL,
	NULL,
	NULL,
	NULL,
};

/* The real MObjSub @ +0x10 (was folded into the prior
 * MObjSub-typed declaration). */
MObjSub dBonus2Common_PlatformSmall_MObjSub_real = {
	0x0000,
	G_IM_FMT_I, G_IM_SIZ_16b,
	(void**)0x00000000,
	0x0020, 0x0000, 0x0037, 0x0037,
	0,
	0.0f, 0.0f,
	1.0f, 1.0f,
	0.0f, 1.0f,
	(void**)0x00000000,
	0x0200,
	G_IM_FMT_I, G_IM_SIZ_8b,
	0x0037,
	0x0037, 0x0037, 0x0037,
	0.0f, 0.0f,
	0.0f, 0.0f,
	0x00002205,
	{ { 0xFF, 0x00, 0x00, 0x80 } },
	0x00, 0x00, { 0x00, 0x00 },
	{ { 0xFF, 0x00, 0x00, 0xFF } },
	{ { 0x00, 0x00, 0x00, 0x08 } },
	{ { 0xFF, 0x00, 0x00, 0x00 } },
	{ { 0xFF, 0x00, 0x00, 0x00 } },
	0, 0,
	0, 0,
};

/* Raw data from file offset 0x3798 to 0x3DA8 (1552 bytes) */
/* gap sub-block @ 0x37A8 (was gap+0x10, 120 bytes) */
u8 dBonus2Common_gap_0x3798_sub_0x10[120] = {
	#include <Bonus2Common/gap_0x3798_sub_0x10.data.inc.c>
};

/* MObjSub.sprites array @ 0x3820 — texture-pointer table, NULL-terminated.
 * fixRelocChain.py rewrites the non-NULL entry to its chain-encoded form
 * per the .reloc metadata. */
MObjSub *dBonus2Common_gap_0x3798_sub_0x88[2] = {
	&dBonus2Common_PlatformSmall_MObjSub_real,
	NULL,
};

/* Pointer table @ 0x3828 — referenced by a chain pointer at MObjSub+0x8
 * (a void** field absent from the current MObjSub struct). NULL-terminated. */
void *dBonus2Common_gap_0x3798_sub_0x90[2] = {
	(void *)dBonus2Common_gap_0x3798_sub_0x10,
	NULL,
};

/* gap sub-block @ 0x3830 (was gap+0x98, 64 bytes) */
Vtx dBonus2Common_gap_0x3798_sub_0x98[4] = {
	#include <Bonus2Common/gap_0x3798_sub_0x98.vtx.inc.c>
};

/* gap sub-block @ 0x3870 (was gap+0xD8, 128 bytes) */
Vtx dBonus2Common_gap_0x3798_sub_0xD8[8] = {
	#include <Bonus2Common/gap_0x3798_sub_0xD8.vtx.inc.c>
};

/* gap sub-block @ 0x38F0 (was gap+0x158, 128 bytes) */
Vtx dBonus2Common_gap_0x3798_sub_0x158[8] = {
	#include <Bonus2Common/gap_0x3798_sub_0x158.vtx.inc.c>
};

/* gap sub-block @ 0x3970 (was gap+0x1D8, 128 bytes) */
Vtx dBonus2Common_gap_0x3798_sub_0x1D8[8] = {
	#include <Bonus2Common/gap_0x3798_sub_0x1D8.vtx.inc.c>
};

/* Vtx: gap_0x3798_sub_0x258 @ 0x39F0 (4 vertices) */
Vtx dBonus2Common_gap_0x3798_sub_0x258[4] = {
	#include <Bonus2Common/gap_0x3798_sub_0x258.vtx.inc.c>
};

/* gap sub-block @ 0x3A30 (was gap+0x298, 48 bytes) */
Vtx dBonus2Common_gap_0x3798_sub_0x298[3] = {
	#include <Bonus2Common/gap_0x3798_sub_0x298.vtx.inc.c>
};

/* gap sub-block @ 0x3A60 (was gap+0x2C8, 432 bytes) */
Gfx dBonus2Common_DL_0x3A60[54] = {
	#include <Bonus2Common/DL_0x3A60.dl.inc.c>
};

/* gap sub-block @ 0x3C10 (was gap+0x478, 176 bytes) */
Gfx dBonus2Common_DL_0x3C10[22] = {
	#include <Bonus2Common/DL_0x3C10.dl.inc.c>
};

/* gap sub-block @ 0x3CC0 (was gap+0x528, 184 bytes) */
Gfx dBonus2Common_DL_0x3CC0[23] = {
	#include <Bonus2Common/DL_0x3CC0.dl.inc.c>
};

/* DObjDLLink @ 0x5E0 (2 entries) */
DObjDLLink dBonus2Common_DLLink_0x3D78[] = {
	{ 0, dBonus2Common_DL_0x3A60 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x5F0 (2 entries) */
DObjDLLink dBonus2Common_DLLink_0x3D88[] = {
	{ 1, dBonus2Common_DL_0x3C10 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x600 (2 entries) */
DObjDLLink dBonus2Common_DLLink_0x3D98[] = {
	{ 1, dBonus2Common_DL_0x3CC0 },
	{ 4, NULL },
};

/* DObjDesc: PlatformSmall @ 0x3DA8 (4 entries) */
DObjDesc dBonus2Common_PlatformSmall[] = {
	{ 0, (void*)dBonus2Common_DLLink_0x3D78, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dBonus2Common_DLLink_0x3D88, { 0.0f, -150.0f, 355.0741271972656f }, { 0.0f, 0.0f, 0.0f }, { 1.7000000476837158f, 1.7000000476837158f, 1.7000000476837158f } },
	{ 1, (void*)dBonus2Common_DLLink_0x3D98, { 0.0f, -150.0f, 409.0042724609375f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(8);

/* Raw data from file offset 0x3E60 to 0x3F00 (160 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dBonus2Common_PlatformSmall_AnimJoint_0x3E6C[];
extern u32 dBonus2Common_PlatformSmall_AnimJoint_0x3EB0[];

AObjEvent32 *dBonus2Common_PlatformSmall_AnimJoint[3] = {
	NULL,
	(AObjEvent32 *)dBonus2Common_PlatformSmall_AnimJoint_0x3E6C,
	(AObjEvent32 *)dBonus2Common_PlatformSmall_AnimJoint_0x3EB0,
};

u32 dBonus2Common_PlatformSmall_AnimJoint_0x3E6C[] = {
	aobjEvent32SetVal0Rate(0x380, 0),
	    0x40400000,  /* 3.0f */
	    0x40400000,  /* 3.0f */
	    0x40400000,  /* 3.0f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetVal0RateBlock(0x380, 6),
	    0x3FD9999A,  /* 1.7000000476837158f */
	    0x3FD9999A,  /* 1.7000000476837158f */
	    0x3FD9999A,  /* 1.7000000476837158f */
	aobjEvent32SetVal(0x380, 24),
	    0x3FD9999A,  /* 1.7000000476837158f */
	    0x3FD9999A,  /* 1.7000000476837158f */
	    0x3FD9999A,  /* 1.7000000476837158f */
	aobjEvent32Wait(19),
	aobjEvent32SetFlags(0x002, 5),
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dBonus2Common_PlatformSmall_AnimJoint_0x3E6C),
};

u32 dBonus2Common_PlatformSmall_AnimJoint_0x3EB0[] = {
	aobjEvent32SetVal0Rate(0x380, 0),
	    0x3FB33333,  /* 1.399999976158142f */
	    0x3FB33333,  /* 1.399999976158142f */
	    0x3FB33333,  /* 1.399999976158142f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetVal0RateBlock(0x380, 6),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal(0x380, 24),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32Wait(19),
	aobjEvent32SetFlags(0x002, 5),
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dBonus2Common_PlatformSmall_AnimJoint_0x3EB0),
	aobjEvent32End(),
};

PAD(8);

/* Raw data from file offset 0x3F00 to 0x3F70 (112 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dBonus2Common_PlatformSmall_MatAnimJoint_0x3F0C[];
extern u32 dBonus2Common_PlatformSmall_MatAnimJoint_0x3F34[];
extern u32 dBonus2Common_PlatformSmall_MatAnimJoint_0x3F5C[];
extern u32 dBonus2Common_PlatformSmall_MatAnimJoint_0x3F60[];

AObjEvent32 *dBonus2Common_PlatformSmall_MatAnimJoint[3] = {
	NULL,
	(AObjEvent32 *)dBonus2Common_PlatformSmall_MatAnimJoint_0x3F5C,
	(AObjEvent32 *)dBonus2Common_PlatformSmall_MatAnimJoint_0x3F60,
};

u32 dBonus2Common_PlatformSmall_MatAnimJoint_0x3F0C[] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xFF000080,  /* -1.701437796088985e+38f */
	aobjEvent32SetExtValBlock(0x001, 10),
	    0xFF000080,  /* -1.701437796088985e+38f */
	aobjEvent32SetExtValBlock(0x001, 16),
	    0xFF000000,  /* -1.7014118346046923e+38f */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFF000000,  /* -1.7014118346046923e+38f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dBonus2Common_PlatformSmall_MatAnimJoint_0x3F0C),
};

u32 dBonus2Common_PlatformSmall_MatAnimJoint_0x3F34[] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 10),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 16),
	    0xFFFFFF33,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF33,  /* nanf */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dBonus2Common_PlatformSmall_MatAnimJoint_0x3F34),
};

u32 dBonus2Common_PlatformSmall_MatAnimJoint_0x3F5C[] = {
	(u32)(dBonus2Common_PlatformSmall_MatAnimJoint_0x3F0C),
};

u32 dBonus2Common_PlatformSmall_MatAnimJoint_0x3F60[] = {
	(u32)(dBonus2Common_PlatformSmall_MatAnimJoint_0x3F34),
	aobjEvent32End(),
};

PAD(8);

/* MObjSub-list head @ 0x3f70 — 4-entry MObjSub** array.
 * The real MObjSub data starts at +0x10 (dBonus2Common_PlatformMedium_MObjSub_real below). */
MObjSub **dBonus2Common_PlatformMedium_MObjSub[4] = {
	NULL,
	NULL,
	NULL,
	NULL,
};

/* The real MObjSub @ +0x10 (was folded into the prior
 * MObjSub-typed declaration). */
MObjSub dBonus2Common_PlatformMedium_MObjSub_real = {
	0x0000,
	G_IM_FMT_I, G_IM_SIZ_16b,
	(void**)0x00000000,
	0x0020, 0x0000, 0x0037, 0x0037,
	0,
	0.0f, 0.0f,
	1.0f, 1.0f,
	0.0f, 1.0f,
	(void**)0x00000000,
	0x0200,
	G_IM_FMT_I, G_IM_SIZ_8b,
	0x0037,
	0x0037, 0x0037, 0x0037,
	0.0f, 0.0f,
	0.0f, 0.0f,
	0x00002205,
	{ { 0xFF, 0x00, 0x00, 0x80 } },
	0x00, 0x00, { 0x00, 0x00 },
	{ { 0xFF, 0x00, 0x00, 0xFF } },
	{ { 0x00, 0x00, 0x00, 0x08 } },
	{ { 0xFF, 0x00, 0x00, 0x00 } },
	{ { 0xFF, 0x00, 0x00, 0x00 } },
	0, 0,
	0, 0,
};

/* Raw data from file offset 0x3FE8 to 0x45D8 (1520 bytes) */
/* gap sub-block @ 0x3FF8 (was gap+0x10, 120 bytes) */
u8 dBonus2Common_gap_0x3FE8_sub_0x10[120] = {
	#include <Bonus2Common/gap_0x3FE8_sub_0x10.data.inc.c>
};

/* MObjSub.sprites array @ 0x4070 — see PlatformSmall version for notes. */
MObjSub *dBonus2Common_gap_0x3FE8_sub_0x88[2] = {
	&dBonus2Common_PlatformMedium_MObjSub_real,
	NULL,
};

/* Pointer table @ 0x4078 — see PlatformSmall version for notes. */
void *dBonus2Common_gap_0x3FE8_sub_0x90[2] = {
	(void *)dBonus2Common_gap_0x3FE8_sub_0x10,
	NULL,
};

/* gap sub-block @ 0x4080 (was gap+0x98, 192 bytes) */
Vtx dBonus2Common_gap_0x3FE8_sub_0x98[12] = {
	#include <Bonus2Common/gap_0x3FE8_sub_0x98.vtx.inc.c>
};

/* gap sub-block @ 0x4140 (was gap+0x158, 128 bytes) */
Vtx dBonus2Common_gap_0x3FE8_sub_0x158[8] = {
	#include <Bonus2Common/gap_0x3FE8_sub_0x158.vtx.inc.c>
};

/* gap sub-block @ 0x41C0 (was gap+0x1D8, 128 bytes) */
Vtx dBonus2Common_gap_0x3FE8_sub_0x1D8[8] = {
	#include <Bonus2Common/gap_0x3FE8_sub_0x1D8.vtx.inc.c>
};

/* Vtx: gap_0x3FE8_sub_0x258 @ 0x4240 (4 vertices) */
Vtx dBonus2Common_gap_0x3FE8_sub_0x258[4] = {
	#include <Bonus2Common/gap_0x3FE8_sub_0x258.vtx.inc.c>
};

/* gap sub-block @ 0x4280 (was gap+0x298, 48 bytes) */
Vtx dBonus2Common_gap_0x3FE8_sub_0x298[3] = {
	#include <Bonus2Common/gap_0x3FE8_sub_0x298.vtx.inc.c>
};

/* gap sub-block @ 0x42B0 (was gap+0x2C8, 400 bytes) */
Gfx dBonus2Common_DL_0x42B0[50] = {
	#include <Bonus2Common/DL_0x42B0.dl.inc.c>
};

/* gap sub-block @ 0x4440 (was gap+0x458, 176 bytes) */
Gfx dBonus2Common_DL_0x4440[22] = {
	#include <Bonus2Common/DL_0x4440.dl.inc.c>
};

/* gap sub-block @ 0x44F0 (was gap+0x508, 184 bytes) */
Gfx dBonus2Common_DL_0x44F0[23] = {
	#include <Bonus2Common/DL_0x44F0.dl.inc.c>
};

/* DObjDLLink @ 0x5C0 (2 entries) */
DObjDLLink dBonus2Common_DLLink_0x45A8[] = {
	{ 0, dBonus2Common_DL_0x42B0 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x5D0 (2 entries) */
DObjDLLink dBonus2Common_DLLink_0x45B8[] = {
	{ 1, dBonus2Common_DL_0x4440 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x5E0 (2 entries) */
DObjDLLink dBonus2Common_DLLink_0x45C8[] = {
	{ 1, dBonus2Common_DL_0x44F0 },
	{ 4, NULL },
};

/* DObjDesc: PlatformMedium @ 0x45D8 (4 entries) */
DObjDesc dBonus2Common_PlatformMedium[] = {
	{ 0, (void*)dBonus2Common_DLLink_0x45A8, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dBonus2Common_DLLink_0x45B8, { 0.0f, -150.0f, 505.0741271972656f }, { 0.0f, 0.0f, 0.0f }, { 3.0f, 3.0f, 3.0f } },
	{ 1, (void*)dBonus2Common_DLLink_0x45C8, { 0.0f, -150.0f, 559.0042724609375f }, { 0.0f, 0.0f, 0.0f }, { 1.399999976158142f, 1.399999976158142f, 1.399999976158142f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(8);

/* Raw data from file offset 0x4690 to 0x4730 (160 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dBonus2Common_PlatformMedium_AnimJoint_0x469C[];
extern u32 dBonus2Common_PlatformMedium_AnimJoint_0x46E0[];

AObjEvent32 *dBonus2Common_PlatformMedium_AnimJoint[3] = {
	NULL,
	(AObjEvent32 *)dBonus2Common_PlatformMedium_AnimJoint_0x469C,
	(AObjEvent32 *)dBonus2Common_PlatformMedium_AnimJoint_0x46E0,
};

u32 dBonus2Common_PlatformMedium_AnimJoint_0x469C[] = {
	aobjEvent32SetVal0Rate(0x380, 0),
	    0x40400000,  /* 3.0f */
	    0x40400000,  /* 3.0f */
	    0x40400000,  /* 3.0f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetVal0RateBlock(0x380, 6),
	    0x3FD9999A,  /* 1.7000000476837158f */
	    0x3FD9999A,  /* 1.7000000476837158f */
	    0x3FD9999A,  /* 1.7000000476837158f */
	aobjEvent32SetVal(0x380, 24),
	    0x3FD9999A,  /* 1.7000000476837158f */
	    0x3FD9999A,  /* 1.7000000476837158f */
	    0x3FD9999A,  /* 1.7000000476837158f */
	aobjEvent32Wait(19),
	aobjEvent32SetFlags(0x002, 5),
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dBonus2Common_PlatformMedium_AnimJoint_0x469C),
};

u32 dBonus2Common_PlatformMedium_AnimJoint_0x46E0[] = {
	aobjEvent32SetVal0Rate(0x380, 0),
	    0x3FB33333,  /* 1.399999976158142f */
	    0x3FB33333,  /* 1.399999976158142f */
	    0x3FB33333,  /* 1.399999976158142f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetVal0RateBlock(0x380, 6),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal(0x380, 24),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32Wait(19),
	aobjEvent32SetFlags(0x002, 5),
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dBonus2Common_PlatformMedium_AnimJoint_0x46E0),
	aobjEvent32End(),
};

PAD(8);

/* Raw data from file offset 0x4730 to 0x47A0 (112 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dBonus2Common_PlatformMedium_MatAnimJoint_0x473C[];
extern u32 dBonus2Common_PlatformMedium_MatAnimJoint_0x4764[];
extern u32 dBonus2Common_PlatformMedium_MatAnimJoint_0x478C[];
extern u32 dBonus2Common_PlatformMedium_MatAnimJoint_0x4790[];

AObjEvent32 *dBonus2Common_PlatformMedium_MatAnimJoint[3] = {
	NULL,
	(AObjEvent32 *)dBonus2Common_PlatformMedium_MatAnimJoint_0x478C,
	(AObjEvent32 *)dBonus2Common_PlatformMedium_MatAnimJoint_0x4790,
};

u32 dBonus2Common_PlatformMedium_MatAnimJoint_0x473C[] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xFF000080,  /* -1.701437796088985e+38f */
	aobjEvent32SetExtValBlock(0x001, 10),
	    0xFF000080,  /* -1.701437796088985e+38f */
	aobjEvent32SetExtValBlock(0x001, 16),
	    0xFF000000,  /* -1.7014118346046923e+38f */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFF000000,  /* -1.7014118346046923e+38f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dBonus2Common_PlatformMedium_MatAnimJoint_0x473C),
};

u32 dBonus2Common_PlatformMedium_MatAnimJoint_0x4764[] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 10),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 16),
	    0xFFFFFF33,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF33,  /* nanf */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dBonus2Common_PlatformMedium_MatAnimJoint_0x4764),
};

u32 dBonus2Common_PlatformMedium_MatAnimJoint_0x478C[] = {
	(u32)(dBonus2Common_PlatformMedium_MatAnimJoint_0x473C),
};

u32 dBonus2Common_PlatformMedium_MatAnimJoint_0x4790[] = {
	(u32)(dBonus2Common_PlatformMedium_MatAnimJoint_0x4764),
	aobjEvent32End(),
};

PAD(8);

/* MObjSub-list head @ 0x47a0 — 4-entry MObjSub** array.
 * The real MObjSub data starts at +0x10 (dBonus2Common_PlatformLarge_MObjSub_real below). */
MObjSub **dBonus2Common_PlatformLarge_MObjSub[4] = {
	NULL,
	NULL,
	NULL,
	NULL,
};

/* The real MObjSub @ +0x10 (was folded into the prior
 * MObjSub-typed declaration). */
MObjSub dBonus2Common_PlatformLarge_MObjSub_real = {
	0x0000,
	G_IM_FMT_I, G_IM_SIZ_16b,
	(void**)0x00000000,
	0x0020, 0x0000, 0x0037, 0x0037,
	0,
	0.0f, 0.0f,
	1.0f, 1.0f,
	0.0f, 1.0f,
	(void**)0x00000000,
	0x0200,
	G_IM_FMT_I, G_IM_SIZ_8b,
	0x0037,
	0x0037, 0x0037, 0x0037,
	0.0f, 0.0f,
	0.0f, 0.0f,
	0x00002205,
	{ { 0xFF, 0x00, 0x00, 0x80 } },
	0x00, 0x00, { 0x00, 0x00 },
	{ { 0xFF, 0x00, 0x00, 0xFF } },
	{ { 0x00, 0x00, 0x00, 0x08 } },
	{ { 0xFF, 0x00, 0x00, 0x00 } },
	{ { 0xFF, 0x00, 0x00, 0x00 } },
	0, 0,
	0, 0,
};

/* Raw data from file offset 0x4818 to 0x4E08 (1520 bytes) */
/* gap sub-block @ 0x4828 (was gap+0x10, 120 bytes) */
u8 dBonus2Common_gap_0x4818_sub_0x10[120] = {
	#include <Bonus2Common/gap_0x4818_sub_0x10.data.inc.c>
};

/* MObjSub.sprites array @ 0x48A0 — see PlatformSmall version for notes. */
MObjSub *dBonus2Common_gap_0x4818_sub_0x88[2] = {
	&dBonus2Common_PlatformLarge_MObjSub_real,
	NULL,
};

/* Pointer table @ 0x48A8 — see PlatformSmall version for notes. */
void *dBonus2Common_gap_0x4818_sub_0x90[2] = {
	(void *)dBonus2Common_gap_0x4818_sub_0x10,
	NULL,
};

/* gap sub-block @ 0x48B0 (was gap+0x98, 192 bytes) */
Vtx dBonus2Common_gap_0x4818_sub_0x98[12] = {
	#include <Bonus2Common/gap_0x4818_sub_0x98.vtx.inc.c>
};

/* gap sub-block @ 0x4970 (was gap+0x158, 128 bytes) */
Vtx dBonus2Common_gap_0x4818_sub_0x158[8] = {
	#include <Bonus2Common/gap_0x4818_sub_0x158.vtx.inc.c>
};

/* gap sub-block @ 0x49F0 (was gap+0x1D8, 128 bytes) */
Vtx dBonus2Common_gap_0x4818_sub_0x1D8[8] = {
	#include <Bonus2Common/gap_0x4818_sub_0x1D8.vtx.inc.c>
};

/* Vtx: gap_0x4818_sub_0x258 @ 0x4A70 (4 vertices) */
Vtx dBonus2Common_gap_0x4818_sub_0x258[4] = {
	#include <Bonus2Common/gap_0x4818_sub_0x258.vtx.inc.c>
};

/* gap sub-block @ 0x4AB0 (was gap+0x298, 48 bytes) */
Vtx dBonus2Common_gap_0x4818_sub_0x298[3] = {
	#include <Bonus2Common/gap_0x4818_sub_0x298.vtx.inc.c>
};

/* gap sub-block @ 0x4AE0 (was gap+0x2C8, 400 bytes) */
Gfx dBonus2Common_DL_0x4AE0[50] = {
	#include <Bonus2Common/DL_0x4AE0.dl.inc.c>
};

/* gap sub-block @ 0x4C70 (was gap+0x458, 176 bytes) */
Gfx dBonus2Common_DL_0x4C70[22] = {
	#include <Bonus2Common/DL_0x4C70.dl.inc.c>
};

/* gap sub-block @ 0x4D20 (was gap+0x508, 184 bytes) */
Gfx dBonus2Common_DL_0x4D20[23] = {
	#include <Bonus2Common/DL_0x4D20.dl.inc.c>
};

/* DObjDLLink @ 0x5C0 (2 entries) */
DObjDLLink dBonus2Common_DLLink_0x4DD8[] = {
	{ 0, dBonus2Common_DL_0x4AE0 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x5D0 (2 entries) */
DObjDLLink dBonus2Common_DLLink_0x4DE8[] = {
	{ 1, dBonus2Common_DL_0x4C70 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x5E0 (2 entries) */
DObjDLLink dBonus2Common_DLLink_0x4DF8[] = {
	{ 1, dBonus2Common_DL_0x4D20 },
	{ 4, NULL },
};

/* DObjDesc: PlatformLarge @ 0x4E08 (4 entries) */
DObjDesc dBonus2Common_PlatformLarge[] = {
	{ 0, (void*)dBonus2Common_DLLink_0x4DD8, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dBonus2Common_DLLink_0x4DE8, { 0.0f, -150.0f, 805.0740966796875f }, { 0.0f, 0.0f, 0.0f }, { 3.0f, 3.0f, 3.0f } },
	{ 1, (void*)dBonus2Common_DLLink_0x4DF8, { 0.0f, -150.0f, 859.0042724609375f }, { 0.0f, 0.0f, 0.0f }, { 1.399999976158142f, 1.399999976158142f, 1.399999976158142f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(8);

/* Raw data from file offset 0x4EC0 to 0x4F70 (176 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dBonus2Common_PlatformLarge_AnimJoint_0x4ECC[];
extern u32 dBonus2Common_PlatformLarge_AnimJoint_0x4F20[];

AObjEvent32 *dBonus2Common_PlatformLarge_AnimJoint[3] = {
	NULL,
	(AObjEvent32 *)dBonus2Common_PlatformLarge_AnimJoint_0x4ECC,
	(AObjEvent32 *)dBonus2Common_PlatformLarge_AnimJoint_0x4F20,
};

u32 dBonus2Common_PlatformLarge_AnimJoint_0x4ECC[] = {
	aobjEvent32SetValAfter(0x070, 0),
	    0x00000000,  /* 0.0f */
	    0xC3160000,  /* -150.0f */
	    0x444944BE,  /* 805.0740966796875f */
	aobjEvent32SetVal0Rate(0x380, 0),
	    0x40400000,  /* 3.0f */
	    0x40400000,  /* 3.0f */
	    0x40400000,  /* 3.0f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetVal0RateBlock(0x380, 6),
	    0x3FD9999A,  /* 1.7000000476837158f */
	    0x3FD9999A,  /* 1.7000000476837158f */
	    0x3FD9999A,  /* 1.7000000476837158f */
	aobjEvent32SetVal(0x380, 24),
	    0x3FD9999A,  /* 1.7000000476837158f */
	    0x3FD9999A,  /* 1.7000000476837158f */
	    0x3FD9999A,  /* 1.7000000476837158f */
	aobjEvent32Wait(19),
	aobjEvent32SetFlags(0x002, 5),
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dBonus2Common_PlatformLarge_AnimJoint_0x4ECC),
};

u32 dBonus2Common_PlatformLarge_AnimJoint_0x4F20[] = {
	aobjEvent32SetVal0Rate(0x380, 0),
	    0x3FB33333,  /* 1.399999976158142f */
	    0x3FB33333,  /* 1.399999976158142f */
	    0x3FB33333,  /* 1.399999976158142f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetVal0RateBlock(0x380, 6),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal(0x380, 24),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32Wait(19),
	aobjEvent32SetFlags(0x002, 5),
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dBonus2Common_PlatformLarge_AnimJoint_0x4F20),
	aobjEvent32End(),
};

PAD(8);

/* Raw data from file offset 0x4F70 to 0x5520 (1456 bytes) */
/* Pointer-table split fallback: chain-pointer table at the
 * head of the array, followed by raw data containing every
 * referenced (and orphan) script. The data block is dumped
 * as one u8[] include; fixRelocChain rewrites the table
 * entries to chain-encoded form per the .reloc. */
extern u8 dBonus2Common_PlatformLarge_MatAnimJoint_data[];

AObjEvent32 *dBonus2Common_PlatformLarge_MatAnimJoint[3] = {
	NULL,
	(AObjEvent32 *)((u8*)dBonus2Common_PlatformLarge_MatAnimJoint_data + 0x50),
	(AObjEvent32 *)((u8*)dBonus2Common_PlatformLarge_MatAnimJoint_data + 0x54),
};

u8 dBonus2Common_PlatformLarge_MatAnimJoint_data[1444] = {
	#include <Bonus2Common/PlatformLarge_MatAnimJoint_data.data.inc.c>
};

/* DObjDesc: BoardedPlatformSmall @ 0x5520 (4 entries) */
DObjDesc dBonus2Common_BoardedPlatformSmall[] = {
	{ 0, (void*)((u8*)dBonus2Common_PlatformLarge_MatAnimJoint + 0x580), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dBonus2Common_PlatformLarge_MatAnimJoint + 0x590), { 0.0f, -150.0f, 355.0741271972656f }, { 0.0f, 0.0f, 0.0f }, { 4.0f, 4.0f, 4.0f } },
	{ 1, (void*)((u8*)dBonus2Common_PlatformLarge_MatAnimJoint + 0x5A0), { 0.0f, -150.0f, 409.0042724609375f }, { 0.0f, 0.0f, 0.0f }, { 2.5f, 2.5f, 2.5f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x55D0 to 0x5B80 (1456 bytes) */
/* Pointer-table split fallback: chain-pointer table at the
 * head of the array, followed by raw data containing every
 * referenced (and orphan) script. The data block is dumped
 * as one u8[] include; fixRelocChain rewrites the table
 * entries to chain-encoded form per the .reloc. */
extern u8 dBonus2Common_BoardedPlatformSmall_AnimJoint_data[];

AObjEvent32 *dBonus2Common_BoardedPlatformSmall_AnimJoint[3] = {
	NULL,
	(AObjEvent32 *)dBonus2Common_BoardedPlatformSmall_AnimJoint_data,
	(AObjEvent32 *)((u8*)dBonus2Common_BoardedPlatformSmall_AnimJoint_data + 0x34),
};

u8 dBonus2Common_BoardedPlatformSmall_AnimJoint_data[1444] = {
	#include <Bonus2Common/BoardedPlatformSmall_AnimJoint_data.data.inc.c>
};

/* DObjDesc: BoardedPlatformMedium @ 0x5B80 (4 entries) */
DObjDesc dBonus2Common_BoardedPlatformMedium[] = {
	{ 0, (void*)((u8*)dBonus2Common_BoardedPlatformSmall_AnimJoint + 0x580), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dBonus2Common_BoardedPlatformSmall_AnimJoint + 0x590), { 0.0f, -150.0f, 505.0741271972656f }, { 0.0f, 0.0f, 0.0f }, { 4.0f, 4.0f, 4.0f } },
	{ 1, (void*)((u8*)dBonus2Common_BoardedPlatformSmall_AnimJoint + 0x5A0), { 0.0f, -150.0f, 559.0042724609375f }, { 0.0f, 0.0f, 0.0f }, { 2.5f, 2.5f, 2.5f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x5C30 to 0x61E0 (1456 bytes) */
/* Pointer-table split fallback: chain-pointer table at the
 * head of the array, followed by raw data containing every
 * referenced (and orphan) script. The data block is dumped
 * as one u8[] include; fixRelocChain rewrites the table
 * entries to chain-encoded form per the .reloc. */
extern u8 dBonus2Common_BoardedPlatformMedium_AnimJoint_data[];

AObjEvent32 *dBonus2Common_BoardedPlatformMedium_AnimJoint[3] = {
	NULL,
	(AObjEvent32 *)dBonus2Common_BoardedPlatformMedium_AnimJoint_data,
	(AObjEvent32 *)((u8*)dBonus2Common_BoardedPlatformMedium_AnimJoint_data + 0x34),
};

u8 dBonus2Common_BoardedPlatformMedium_AnimJoint_data[1444] = {
	#include <Bonus2Common/BoardedPlatformMedium_AnimJoint_data.data.inc.c>
};

/* DObjDesc: BoardedPlatformLarge @ 0x61E0 (4 entries) */
DObjDesc dBonus2Common_BoardedPlatformLarge[] = {
	{ 0, (void*)((u8*)dBonus2Common_BoardedPlatformMedium_AnimJoint + 0x580), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dBonus2Common_BoardedPlatformMedium_AnimJoint + 0x590), { 0.0f, -150.0f, 805.0740966796875f }, { 0.0f, 0.0f, 0.0f }, { 4.0f, 4.0f, 4.0f } },
	{ 1, (void*)((u8*)dBonus2Common_BoardedPlatformMedium_AnimJoint + 0x5A0), { 0.0f, -150.0f, 859.0042724609375f }, { 0.0f, 0.0f, 0.0f }, { 2.5f, 2.5f, 2.5f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x6290 to 0x6330 (160 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dBonus2Common_BoardedPlatformLarge_AnimJoint_0x629C[];
extern u32 dBonus2Common_BoardedPlatformLarge_AnimJoint_0x62E0[];

AObjEvent32 *dBonus2Common_BoardedPlatformLarge_AnimJoint[3] = {
	NULL,
	(AObjEvent32 *)dBonus2Common_BoardedPlatformLarge_AnimJoint_0x629C,
	(AObjEvent32 *)dBonus2Common_BoardedPlatformLarge_AnimJoint_0x62E0,
};

u32 dBonus2Common_BoardedPlatformLarge_AnimJoint_0x629C[] = {
	aobjEvent32SetVal0Rate(0x380, 0),
	    0x40800000,  /* 4.0f */
	    0x40800000,  /* 4.0f */
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x070, 0),
	    0x00000000,  /* 0.0f */
	    0xC3160000,  /* -150.0f */
	    0x444944BE,  /* 805.0740966796875f */
	aobjEvent32SetVal0RateBlock(0x380, 6),
	    0x3FD9999A,  /* 1.7000000476837158f */
	    0x3FD9999A,  /* 1.7000000476837158f */
	    0x3FD9999A,  /* 1.7000000476837158f */
	aobjEvent32SetValBlock(0x380, 24),
	    0x3FD9999A,  /* 1.7000000476837158f */
	    0x3FD9999A,  /* 1.7000000476837158f */
	    0x3FD9999A,  /* 1.7000000476837158f */
	aobjEvent32End(),
};

u32 dBonus2Common_BoardedPlatformLarge_AnimJoint_0x62E0[] = {
	aobjEvent32SetVal0RateBlock(0x380, 0),
	    0x40200000,  /* 2.5f */
	    0x40200000,  /* 2.5f */
	    0x40200000,  /* 2.5f */
	aobjEvent32SetValRateBlock(0x380, 2),
	    0x3FA04786,  /* 1.2521827220916748f */
	    0xBE800000,  /* -0.25f */
	    0x3F9FA9C1,  /* 1.2473679780960083f */
	    0xBE800000,  /* -0.25f */
	    0x3F9FA9C1,  /* 1.2473679780960083f */
	    0xBE800000,  /* -0.25f */
	aobjEvent32SetVal0RateBlock(0x380, 4),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x380, 24),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32End(),
};

