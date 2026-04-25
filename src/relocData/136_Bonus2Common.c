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

/* Raw data from file offset 0x0000 to 0x3720 (14112 bytes) */
/* gap sub-block @ 0x0000 (was gap+0x0, 8 bytes) */
u8 dBonus2Common_gap_0x0000[8] = {
	#include <Bonus2Common/gap_0x0000.data.inc.c>
};

/* gap sub-block @ 0x0008 (was gap+0x8, 4104 bytes) */
u8 dBonus2Common_gap_0x0000_sub_0x8[4104] = {
	#include <Bonus2Common/gap_0x0000_sub_0x8.data.inc.c>
};

/* gap sub-block @ 0x1010 (was gap+0x1010, 2056 bytes) */
u8 dBonus2Common_gap_0x0000_sub_0x1010[2056] = {
	#include <Bonus2Common/gap_0x0000_sub_0x1010.data.inc.c>
};

/* gap sub-block @ 0x1818 (was gap+0x1818, 2056 bytes) */
u8 dBonus2Common_gap_0x0000_sub_0x1818[2056] = {
	#include <Bonus2Common/gap_0x0000_sub_0x1818.data.inc.c>
};

/* gap sub-block @ 0x2020 (was gap+0x2020, 3088 bytes) */
u8 dBonus2Common_gap_0x0000_sub_0x2020[3088] = {
	#include <Bonus2Common/gap_0x0000_sub_0x2020.data.inc.c>
};

/* gap sub-block @ 0x2C30 (was gap+0x2C30, 2800 bytes) */
u8 dBonus2Common_gap_0x0000_sub_0x2C30[2800] = {
	#include <Bonus2Common/gap_0x0000_sub_0x2C30.data.inc.c>
};

/* MObjSub: PlatformSmall @ 0x3720 */
MObjSub dBonus2Common_PlatformSmall_MObjSub = {
	0x0000,
	0x00, 0x00,
	(void**)((u8*)dBonus2Common_gap_0x3798 + 0x88),
	0x0E08, 0x0E0A, 0x0000, 0x0000,
	1026,
	0.0f, 2.938735877055719e-39f,
	5.0510293601050545e-39f, 0.0f,
	0.0f, 0.0f,
	(void**)0x3F800000,
	0x3F80,
	0x00, 0x00,
	0x0000,
	0x0000, 0x3F80, 0x0000,
	0.0f, 9.405103871319046e-38f,
	5.0510293601050545e-39f, 5.0510293601050545e-39f,
	0x00000000,
	{ { 0x00, 0x00, 0x00, 0x00 } },
	0x00, 0x00, { 0x00, 0x00 },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x22, 0x05 } },
	{ { 0xFF, 0x00, 0x00, 0x80 } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	-16776961, 8,
	-16777216, -16777216,
};

/* Raw data from file offset 0x3798 to 0x3DA8 (1552 bytes) */
/* gap sub-block @ 0x3798 (was gap+0x0, 16 bytes) */
u8 dBonus2Common_gap_0x3798[16] = {
	#include <Bonus2Common/gap_0x3798.data.inc.c>
};

/* gap sub-block @ 0x37A8 (was gap+0x10, 120 bytes) */
u8 dBonus2Common_gap_0x3798_sub_0x10[120] = {
	#include <Bonus2Common/gap_0x3798_sub_0x10.data.inc.c>
};

/* gap sub-block @ 0x3820 (was gap+0x88, 8 bytes) */
u8 dBonus2Common_gap_0x3798_sub_0x88[8] = {
	#include <Bonus2Common/gap_0x3798_sub_0x88.data.inc.c>
};

/* gap sub-block @ 0x3828 (was gap+0x90, 8 bytes) */
u8 dBonus2Common_gap_0x3798_sub_0x90[8] = {
	#include <Bonus2Common/gap_0x3798_sub_0x90.data.inc.c>
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
	(u32)((u8*)dBonus2Common_PlatformSmall_AnimJoint + 0xC),
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
	(u32)((u8*)dBonus2Common_PlatformSmall_AnimJoint + 0x50),
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
	(u32)((u8*)dBonus2Common_PlatformSmall_MatAnimJoint + 0xC),
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
	(u32)((u8*)dBonus2Common_PlatformSmall_MatAnimJoint + 0x34),
};

u32 dBonus2Common_PlatformSmall_MatAnimJoint_0x3F5C[] = {
	(u32)((u8*)dBonus2Common_PlatformSmall_MatAnimJoint + 0xC),
};

u32 dBonus2Common_PlatformSmall_MatAnimJoint_0x3F60[] = {
	(u32)((u8*)dBonus2Common_PlatformSmall_MatAnimJoint + 0x34),
	aobjEvent32End(),
};

PAD(8);

/* MObjSub: PlatformMedium @ 0x3F70 */
MObjSub dBonus2Common_PlatformMedium_MObjSub = {
	0x0000,
	0x00, 0x00,
	(void**)((u8*)dBonus2Common_gap_0x3FE8 + 0x88),
	0x101C, 0x101E, 0x0000, 0x0000,
	1026,
	0.0f, 2.938735877055719e-39f,
	5.0510293601050545e-39f, 0.0f,
	0.0f, 0.0f,
	(void**)0x3F800000,
	0x3F80,
	0x00, 0x00,
	0x0000,
	0x0000, 0x3F80, 0x0000,
	0.0f, 9.405103871319046e-38f,
	5.0510293601050545e-39f, 5.0510293601050545e-39f,
	0x00000000,
	{ { 0x00, 0x00, 0x00, 0x00 } },
	0x00, 0x00, { 0x00, 0x00 },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x22, 0x05 } },
	{ { 0xFF, 0x00, 0x00, 0x80 } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	-16776961, 8,
	-16777216, -16777216,
};

/* Raw data from file offset 0x3FE8 to 0x45D8 (1520 bytes) */
/* gap sub-block @ 0x3FE8 (was gap+0x0, 16 bytes) */
u8 dBonus2Common_gap_0x3FE8[16] = {
	#include <Bonus2Common/gap_0x3FE8.data.inc.c>
};

/* gap sub-block @ 0x3FF8 (was gap+0x10, 120 bytes) */
u8 dBonus2Common_gap_0x3FE8_sub_0x10[120] = {
	#include <Bonus2Common/gap_0x3FE8_sub_0x10.data.inc.c>
};

/* gap sub-block @ 0x4070 (was gap+0x88, 8 bytes) */
u8 dBonus2Common_gap_0x3FE8_sub_0x88[8] = {
	#include <Bonus2Common/gap_0x3FE8_sub_0x88.data.inc.c>
};

/* gap sub-block @ 0x4078 (was gap+0x90, 8 bytes) */
u8 dBonus2Common_gap_0x3FE8_sub_0x90[8] = {
	#include <Bonus2Common/gap_0x3FE8_sub_0x90.data.inc.c>
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
	(u32)((u8*)dBonus2Common_PlatformMedium_AnimJoint + 0xC),
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
	(u32)((u8*)dBonus2Common_PlatformMedium_AnimJoint + 0x50),
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
	(u32)((u8*)dBonus2Common_PlatformMedium_MatAnimJoint + 0xC),
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
	(u32)((u8*)dBonus2Common_PlatformMedium_MatAnimJoint + 0x34),
};

u32 dBonus2Common_PlatformMedium_MatAnimJoint_0x478C[] = {
	(u32)((u8*)dBonus2Common_PlatformMedium_MatAnimJoint + 0xC),
};

u32 dBonus2Common_PlatformMedium_MatAnimJoint_0x4790[] = {
	(u32)((u8*)dBonus2Common_PlatformMedium_MatAnimJoint + 0x34),
	aobjEvent32End(),
};

PAD(8);

/* MObjSub: PlatformLarge @ 0x47A0 */
MObjSub dBonus2Common_PlatformLarge_MObjSub = {
	0x0000,
	0x00, 0x00,
	(void**)((u8*)dBonus2Common_gap_0x4818 + 0x88),
	0x1228, 0x122A, 0x0000, 0x0000,
	1026,
	0.0f, 2.938735877055719e-39f,
	5.0510293601050545e-39f, 0.0f,
	0.0f, 0.0f,
	(void**)0x3F800000,
	0x3F80,
	0x00, 0x00,
	0x0000,
	0x0000, 0x3F80, 0x0000,
	0.0f, 9.405103871319046e-38f,
	5.0510293601050545e-39f, 5.0510293601050545e-39f,
	0x00000000,
	{ { 0x00, 0x00, 0x00, 0x00 } },
	0x00, 0x00, { 0x00, 0x00 },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x22, 0x05 } },
	{ { 0xFF, 0x00, 0x00, 0x80 } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	-16776961, 8,
	-16777216, -16777216,
};

/* Raw data from file offset 0x4818 to 0x4E08 (1520 bytes) */
/* gap sub-block @ 0x4818 (was gap+0x0, 16 bytes) */
u8 dBonus2Common_gap_0x4818[16] = {
	#include <Bonus2Common/gap_0x4818.data.inc.c>
};

/* gap sub-block @ 0x4828 (was gap+0x10, 120 bytes) */
u8 dBonus2Common_gap_0x4818_sub_0x10[120] = {
	#include <Bonus2Common/gap_0x4818_sub_0x10.data.inc.c>
};

/* gap sub-block @ 0x48A0 (was gap+0x88, 8 bytes) */
u8 dBonus2Common_gap_0x4818_sub_0x88[8] = {
	#include <Bonus2Common/gap_0x4818_sub_0x88.data.inc.c>
};

/* gap sub-block @ 0x48A8 (was gap+0x90, 8 bytes) */
u8 dBonus2Common_gap_0x4818_sub_0x90[8] = {
	#include <Bonus2Common/gap_0x4818_sub_0x90.data.inc.c>
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
	(u32)((u8*)dBonus2Common_PlatformLarge_AnimJoint + 0xC),
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
	(u32)((u8*)dBonus2Common_PlatformLarge_AnimJoint + 0x60),
	aobjEvent32End(),
};

PAD(8);

/* Raw data from file offset 0x4F70 to 0x5520 (1456 bytes) */
u32 dBonus2Common_PlatformLarge_MatAnimJoint[364] = {
	aobjEvent32End(),
	(u32)((u8*)dBonus2Common_PlatformLarge_MatAnimJoint + 0x5C),
	(u32)((u8*)dBonus2Common_PlatformLarge_MatAnimJoint + 0x60),
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xFF000080,  /* -1.701437796088985e+38f */
	aobjEvent32SetExtValBlock(0x001, 10),
	    0xFF000080,  /* -1.701437796088985e+38f */
	aobjEvent32SetExtValBlock(0x001, 16),
	    0xFF000000,  /* -1.7014118346046923e+38f */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFF000000,  /* -1.7014118346046923e+38f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)((u8*)dBonus2Common_PlatformLarge_MatAnimJoint + 0xC),
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 10),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 16),
	    0xFFFFFF33,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF33,  /* nanf */
	aobjEvent32SetAnim(0x000, 0),
	(u32)((u8*)dBonus2Common_PlatformLarge_MatAnimJoint + 0x34),
	(u32)((u8*)dBonus2Common_PlatformLarge_MatAnimJoint + 0xC),
	(u32)((u8*)dBonus2Common_PlatformLarge_MatAnimJoint + 0x34),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x12D, 32468),
	aobjEvent32EndRaw(0x258, 0),
	aobjEvent32SetValRateBlock(0x000, 46),
	    0x30007600,
	    0xFF6AFED4,
	aobjEvent32EndRaw(0x258, 0),
	aobjEvent32SetValBlock(0x000, 46),
	    0xD0007600,
	    0xFF6A0000,
	aobjEvent32EndRaw(0x258, 0),
	aobjEvent32SetValBlock(0x000, 977),
	    0xD0007600,
	aobjEvent32EndRaw(0x12C, 0),
	aobjEvent32EndRaw(0x258, 0),
	aobjEvent32SetValRateBlock(0x000, 977),
	    0x30007600,
	aobjEvent32EndRaw(0x259, 32468),
	aobjEvent32EndRaw(0x12C, 0),
	aobjEvent32End(),
	    0x76003000,
	aobjEvent32EndRaw(0x12D, 32468),
	aobjEvent32EndRaw(0x258, 0),
	aobjEvent32JumpRaw(0x280, 0, 0x30007600),
	aobjEvent32EndRaw(0x12C, 0),
	aobjEvent32EndRaw(0x258, 0),
	aobjEvent32JumpRaw(0x280, 1024, 0x30007600),
	aobjEvent32EndRaw(0x258, 0),
	aobjEvent32EndRaw(0x12C, 0),
	aobjEvent32EndRaw(0x000, 1024),
	    0x76003000,
	    0xFED40000,
	aobjEvent32EndRaw(0x12C, 0),
	aobjEvent32EndRaw(0x000, 990),
	    0x8A003000,
	    0xFED4FED4,
	aobjEvent32EndRaw(0x12C, 0),
	aobjEvent32EndRaw(0x000, 33),
	    0x8A003000,
	    0xFF6A0000,
	aobjEvent32EndRaw(0x258, 0),
	aobjEvent32JumpRaw(0x27E, 990, 0xD0007600),
	    0xFF6AFED4,
	aobjEvent32EndRaw(0x258, 0),
	aobjEvent32JumpRaw(0x27E, 33, 0xD0007600),
	aobjEvent32EndRaw(0x258, 0),
	    0xFF6A0000,
	aobjEvent32EndRaw(0x000, 977),
	    0x7F000000,
	aobjEvent32EndRaw(0x259, 32468),
	    0xFF6A0000,
	aobjEvent32EndRaw(0x000, 46),
	    0x7F000000,
	aobjEvent32EndRaw(0x259, 32468),
	aobjEvent32EndRaw(0x12C, 0),
	aobjEvent32Wait(46),
	    0x76003000,
	aobjEvent32EndRaw(0x258, 0),
	aobjEvent32EndRaw(0x12C, 0),
	aobjEvent32Wait(977),
	    0x76003000,
	    0xFED4FED4,
	aobjEvent32EndRaw(0x12C, 0),
	aobjEvent32Wait(46),
	    0x8A003000,
	    0xFED40000,
	aobjEvent32EndRaw(0x12C, 0),
	aobjEvent32Wait(977),
	    0x8A003000,
	    0xFED4FED4,
	    0xFF6A0000,
	aobjEvent32EndRaw(0x000, 46),
	    0x80000000,
	    0xFED40000,
	    0xFF6A0000,
	aobjEvent32EndRaw(0x000, 977),
	    0x80000000,
	    0xFF6A0000,
	aobjEvent32EndRaw(0x258, 0),
	aobjEvent32JumpRaw(0x000, 2048, 0x007F0000),
	aobjEvent32EndRaw(0x12C, 0),
	aobjEvent32EndRaw(0x258, 0),
	aobjEvent32SetValBlock(0x000, 2048),
	aobjEvent32EndRaw(0x0FE, 0),
	aobjEvent32EndRaw(0x12C, 0),
	    0xFED40000,
	aobjEvent32SetValBlock(0x000, 0),
	aobjEvent32EndRaw(0x0FE, 0),
	    0xFED40000,
	aobjEvent32EndRaw(0x12C, 0),
	aobjEvent32EndRaw(0x000, 1536),
	aobjEvent32EndRaw(0x0FE, 0),
	aobjEvent32EndRaw(0x258, 0),
	aobjEvent32EndRaw(0x12C, 0),
	aobjEvent32SetVal(0x000, 1536),
	aobjEvent32EndRaw(0x0FE, 0),
	    0xFF6A0000,
	    0xFED40000,
	aobjEvent32Jump(0x007F0000),
	aobjEvent32EndRaw(0x258, 0),
	    0xFF6A0000,
	aobjEvent32SetVal(0x000, 512),
	aobjEvent32EndRaw(0x0FE, 0),
	    0xFED40000,
	    0xFF6A0000,
	aobjEvent32EndRaw(0x000, 512),
	aobjEvent32EndRaw(0x0FE, 0),
	aobjEvent32EndRaw(0x350, 0),
	aobjEvent32End(),
	aobjEvent32SetValBlock(0x1BE, 0),
	    0x00007F00,  /* 4.5559015672128453e-41f */
	    0x0000FE58,  /* 9.124134560911749e-41f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00007F00,  /* 4.5559015672128453e-41f */
	    0xFE580000,  /* -7.177831177238546e+37f */
	    0x00000000,  /* 0.0f */
	aobjEvent32EndRaw(0x000, 1760),
	aobjEvent32EndRaw(0x000, 32512),
	aobjEvent32EndRaw(0x000, 424),
	aobjEvent32End(),
	aobjEvent32SetValBlock(0x1C0, 1759),
	    0x00007F00,  /* 4.5559015672128453e-41f */
	    0x01A80000,  /* 6.171345341817009e-38f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x07E, 0),
	    0x00007F00,  /* 4.5559015672128453e-41f */
	    0xFE580000,  /* -7.177831177238546e+37f */
	    0x00000000,  /* 0.0f */
	    0x00000640,  /* 2.2420775429197073e-42f */
	    0x00007F00,  /* 4.5559015672128453e-41f */
	    0x000001A8,  /* 5.941505488737224e-43f */
	aobjEvent32End(),
	aobjEvent32SetValBlock(0x080, 1599),
	    0x00007F00,  /* 4.5559015672128453e-41f */
	    0xE7000000,
	aobjEvent32End(),
	    0xDB0A0000,
	    0xFFFFFF00,
	    0xDB0A0004,
	    0xFFFFFF00,
	    0xDB0A0018,
	    0x80808000,
	    0xDB0A001C,
	    0x80808000,
	    0xE2001E01,
	aobjEvent32EndRaw(0x000, 1),
	    0xE200001C,
	aobjEvent32EndRaw(0x0AA, 12408),
	    0xFC127E24,
	    0xFFFFF3F9,
	    0xF9000000,
	aobjEvent32End(),
	    0xF5100000,
	aobjEvent32SetValBlock(0x202, 16480),
	    0xF5102000,  /* -1.8270014275789356e+32f */
	    0x00094360,  /* 8.506890613345953e-40f */
	    0xD7000002,
	    0xFFFFFFFF,
	    0xF2000000,
	aobjEvent32EndRaw(0x03F, 16508),
	    0xFD100000,
	(u32)dBonus2Common_gap_0x0000_sub_0x8,
	    0xE6000000,
	aobjEvent32End(),
	    0xF3000000,
	    0x077FF080,
	    0xE7000000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 16392),
	(u32)((u8*)dBonus2Common_PlatformLarge_MatAnimJoint + 0x70),
	aobjEvent32SetValBlock(0x00C, 1026),
	    0x00000602,  /* 2.1551970381315687e-42f */
	    0xE7000000,  /* -6.044629098073146e+23f */
	aobjEvent32End(),
	    0xF5102000,
	aobjEvent32EndRaw(0x012, 16992),
	    0xF2000000,
	aobjEvent32EndRaw(0x01F, 16508),
	aobjEvent32EndRaw(0x201, 16),
	(u32)((u8*)dBonus2Common_PlatformLarge_MatAnimJoint + 0xB0),
	aobjEvent32SetValBlock(0x01C, 3082),
	    0x000C080A,  /* 1.104909826135475e-39f */
	    0x06060402,  /* 2.520554335722541e-35f */
	    0x00000602,  /* 2.1551970381315687e-42f */
	    0xE7000000,
	aobjEvent32End(),
	    0xF5100000,
	aobjEvent32SetValBlock(0x202, 16464),
	    0xF5101000,  /* -1.826209145953793e+32f */
	    0x00094250,  /* 8.50307908152299e-40f */
	    0xF2000000,
	aobjEvent32EndRaw(0x00F, 16508),
	    0xFD100000,
	(u32)dBonus2Common_gap_0x0000_sub_0x1010,
	    0xE6000000,
	aobjEvent32End(),
	    0xF3000000,
	    0x073FF100,
	    0xE7000000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x201, 16),
	(u32)((u8*)dBonus2Common_PlatformLarge_MatAnimJoint + 0x130),
	aobjEvent32SetValBlock(0x01C, 3082),
	    0x000C080A,  /* 1.104909826135475e-39f */
	    0x06060402,  /* 2.520554335722541e-35f */
	    0x00000602,  /* 2.1551970381315687e-42f */
	    0xE7000000,
	aobjEvent32End(),
	    0xF5101000,
	aobjEvent32EndRaw(0x01A, 17232),
	    0xF2000000,
	aobjEvent32EndRaw(0x01F, 16636),
	    0xFD100000,
	(u32)dBonus2Common_gap_0x0000_sub_0x1818,
	    0xE6000000,
	aobjEvent32End(),
	    0xF3000000,
	    0x073FF100,
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x201, 16),
	(u32)((u8*)dBonus2Common_PlatformLarge_MatAnimJoint + 0x1B0),
	aobjEvent32SetValBlock(0x01C, 3082),
	    0x00080C0E,  /* 7.39008376324836e-40f */
	    0x0606080E,  /* 2.5208516531413525e-35f */
	    0x000C040A,  /* 1.1034748965080064e-39f */
	aobjEvent32SetValBlock(0x004, 2054),
	    0x00000206,  /* 7.258726045202552e-43f */
	    0xE7000000,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE2001E01,
	aobjEvent32End(),
	    0xE200001C,
	aobjEvent32EndRaw(0x0AA, 8312),
	    0xDF000000,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FDFFFF,
	aobjEvent32End(),
	    0xE2001E01,
	aobjEvent32EndRaw(0x000, 1),
	    0xFC309661,
	    0x552EFF7F,
	    0xF9000000,
	aobjEvent32EndRaw(0x000, 8),
	    0xF5900000,
	aobjEvent32SetValBlock(0x203, 96),
	    0xD7000002,  /* -140737521909760.0f */
	    0xFFFFFFFF,  /* nanf */
	    0xDE000000,  /* -2.305843009213694e+18f */
	(u32)((u8*)dBonus2Common_PlatformLarge_MatAnimJoint + 0x498),
	    0xDF000000,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xFA000000,
	aobjEvent32EndRaw(0x001, 32640),
	    0xFB000000,
	aobjEvent32EndRaw(0x001, 32767),
	    0xF5880E00,
	aobjEvent32EndRaw(0x013, 608),
	    0xF2000000,
	aobjEvent32EndRaw(0x01B, 216),
	    0xFD900000,
	(u32)dBonus2Common_gap_0x0000_sub_0x2020,
	    0xE6000000,
	aobjEvent32End(),
	    0xF3000000,
	aobjEvent32SetValBlock(0x2C0, 12581),
	    0xE7000000,  /* -6.044629098073146e+23f */
	    0x00000000,  /* 0.0f */
	    0x01004008,  /* 2.3555827185300175e-38f */
	(u32)((u8*)dBonus2Common_PlatformLarge_MatAnimJoint + 0x230),
	aobjEvent32SetValBlock(0x00C, 1026),
	    0x00000602,  /* 2.1551970381315687e-42f */
	    0xDF000000,  /* -9.223372036854776e+18f */
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xFA000000,
	    0xFFFFFFFF,
	    0xFB000000,
	aobjEvent32EndRaw(0x15B, 32767),
	    0xF5880E00,
	aobjEvent32EndRaw(0x013, 608),
	    0xF2000000,
	aobjEvent32EndRaw(0x018, 16580),
	    0xFD900000,
	(u32)dBonus2Common_gap_0x0000_sub_0x2C30,
	    0xE6000000,
	aobjEvent32End(),
	    0xF3000000,
	    0x07577125,
	    0xE7000000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 4098),
	(u32)((u8*)dBonus2Common_PlatformLarge_MatAnimJoint + 0x240),
	aobjEvent32EndRaw(0x200, 12296),
	(u32)((u8*)dBonus2Common_PlatformLarge_MatAnimJoint + 0x270),
	aobjEvent32SetValBlock(0x00C, 1024),
	    0x00020600,  /* 1.8582338675718534e-40f */
	    0xE7000000,  /* -6.044629098073146e+23f */
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x004, 0),
	    0xE2001E01,
	aobjEvent32End(),
	    0xDF000000,
	aobjEvent32End(),
	aobjEvent32End(),
	(u32)((u8*)dBonus2Common_PlatformLarge_MatAnimJoint + 0x2A0),
	aobjEvent32EndRaw(0x000, 4),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 1),
	(u32)((u8*)dBonus2Common_PlatformLarge_MatAnimJoint + 0x450),
	aobjEvent32EndRaw(0x000, 4),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 1),
	(u32)((u8*)dBonus2Common_PlatformLarge_MatAnimJoint + 0x4F8),
	aobjEvent32EndRaw(0x000, 4),
	aobjEvent32End(),
};

/* DObjDesc: BoardedPlatformSmall @ 0x5520 (4 entries) */
DObjDesc dBonus2Common_BoardedPlatformSmall[] = {
	{ 0, (void*)((u8*)dBonus2Common_PlatformLarge_MatAnimJoint + 0x580), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dBonus2Common_PlatformLarge_MatAnimJoint + 0x590), { 0.0f, -150.0f, 355.0741271972656f }, { 0.0f, 0.0f, 0.0f }, { 4.0f, 4.0f, 4.0f } },
	{ 1, (void*)((u8*)dBonus2Common_PlatformLarge_MatAnimJoint + 0x5A0), { 0.0f, -150.0f, 409.0042724609375f }, { 0.0f, 0.0f, 0.0f }, { 2.5f, 2.5f, 2.5f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x55D0 to 0x5B80 (1456 bytes) */
u32 dBonus2Common_BoardedPlatformSmall_AnimJoint[364] = {
	aobjEvent32End(),
	(u32)((u8*)dBonus2Common_BoardedPlatformSmall_AnimJoint + 0xC),
	(u32)((u8*)dBonus2Common_BoardedPlatformSmall_AnimJoint + 0x40),
	aobjEvent32SetVal0RateBlock(0x380, 0),
	    0x40800000,  /* 4.0f */
	    0x40800000,  /* 4.0f */
	    0x40800000,  /* 4.0f */
	aobjEvent32SetVal0RateBlock(0x380, 6),
	    0x3FD9999A,  /* 1.7000000476837158f */
	    0x3FD9999A,  /* 1.7000000476837158f */
	    0x3FD9999A,  /* 1.7000000476837158f */
	aobjEvent32SetValBlock(0x380, 24),
	    0x3FD9999A,  /* 1.7000000476837158f */
	    0x3FD9999A,  /* 1.7000000476837158f */
	    0x3FD9999A,  /* 1.7000000476837158f */
	aobjEvent32End(),
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
	aobjEvent32EndRaw(0x196, 0),
	aobjEvent32EndRaw(0x32A, 0),
	aobjEvent32SetValRate(0x000, 1024),
	    0x30007600,
	aobjEvent32EndRaw(0x197, 32468),
	aobjEvent32EndRaw(0x32A, 0),
	aobjEvent32SetValRate(0x000, 0),
	    0x30007600,
	aobjEvent32EndRaw(0x32A, 0),
	aobjEvent32EndRaw(0x196, 0),
	aobjEvent32SetVal0RateBlock(0x000, 1024),
	    0x76003000,
	aobjEvent32EndRaw(0x32B, 32468),
	aobjEvent32EndRaw(0x196, 0),
	aobjEvent32SetVal0RateBlock(0x000, 0),
	    0x76003000,
	aobjEvent32EndRaw(0x197, 32468),
	aobjEvent32EndRaw(0x32A, 0),
	aobjEvent32SetValRateBlock(0x200, 46),
	    0x30007600,  /* 4.673381681641331e-10f */
	    0xFF35FED4,  /* -2.419134105099736e+38f */
	aobjEvent32EndRaw(0x32A, 0),
	aobjEvent32WaitRaw(0x1FE, 46),
	    0xD0007600,
	    0xFF350000,
	aobjEvent32EndRaw(0x32A, 0),
	aobjEvent32WaitRaw(0x1FE, 977),
	    0xD0007600,
	aobjEvent32EndRaw(0x196, 0),
	aobjEvent32EndRaw(0x32A, 0),
	aobjEvent32SetValRateBlock(0x200, 977),
	    0x30007600,  /* 4.673381681641331e-10f */
	    0xFF35FED4,  /* -2.419134105099736e+38f */
	aobjEvent32EndRaw(0x32A, 0),
	aobjEvent32Wait(0),
	    0xD0007600,
	    0xFE6BFED4,
	aobjEvent32EndRaw(0x196, 0),
	aobjEvent32End(),
	    0x8A003000,
	    0xFE6B0000,
	aobjEvent32EndRaw(0x196, 0),
	aobjEvent32EndRaw(0x000, 1024),
	    0x8A003000,
	    0xFF350000,
	aobjEvent32EndRaw(0x32A, 0),
	aobjEvent32Wait(1024),
	    0xD0007600,
	aobjEvent32EndRaw(0x32A, 0),
	    0xFF350000,
	aobjEvent32EndRaw(0x000, 1024),
	    0x7F000000,
	aobjEvent32EndRaw(0x32B, 32468),
	    0xFF350000,
	aobjEvent32End(),
	    0x7F000000,
	aobjEvent32EndRaw(0x32B, 32468),
	aobjEvent32EndRaw(0x196, 0),
	aobjEvent32Wait(0),
	    0x76003000,
	aobjEvent32EndRaw(0x32A, 0),
	aobjEvent32EndRaw(0x196, 0),
	aobjEvent32Wait(1024),
	    0x76003000,
	    0xFE6BFED4,
	aobjEvent32EndRaw(0x196, 0),
	aobjEvent32Wait(0),
	    0x8A003000,
	    0xFE6B0000,
	aobjEvent32EndRaw(0x196, 0),
	aobjEvent32Wait(1024),
	    0x8A003000,
	    0xFE6BFED4,
	    0xFF350000,
	aobjEvent32End(),
	    0x80000000,
	    0xFE6B0000,
	    0xFF350000,
	aobjEvent32EndRaw(0x000, 1024),
	    0x80000000,
	    0xFF350000,
	aobjEvent32EndRaw(0x32A, 0),
	aobjEvent32JumpRaw(0x000, 2048, 0x007F0000),
	aobjEvent32EndRaw(0x196, 0),
	aobjEvent32EndRaw(0x32A, 0),
	aobjEvent32SetValBlock(0x000, 2048),
	aobjEvent32EndRaw(0x0FE, 0),
	aobjEvent32EndRaw(0x196, 0),
	    0xFE6B0000,
	aobjEvent32SetValBlock(0x000, 0),
	aobjEvent32EndRaw(0x0FE, 0),
	    0xFE6B0000,
	aobjEvent32EndRaw(0x196, 0),
	aobjEvent32EndRaw(0x000, 1536),
	aobjEvent32EndRaw(0x0FE, 0),
	aobjEvent32EndRaw(0x32A, 0),
	aobjEvent32EndRaw(0x196, 0),
	aobjEvent32SetVal(0x000, 1536),
	aobjEvent32EndRaw(0x0FE, 0),
	    0xFF350000,
	    0xFE6B0000,
	aobjEvent32Jump(0x007F0000),
	aobjEvent32EndRaw(0x32A, 0),
	    0xFF350000,
	aobjEvent32SetVal(0x000, 512),
	aobjEvent32EndRaw(0x0FE, 0),
	    0xFE6B0000,
	    0xFF350000,
	aobjEvent32EndRaw(0x000, 512),
	aobjEvent32EndRaw(0x0FE, 0),
	aobjEvent32EndRaw(0x350, 0),
	aobjEvent32End(),
	aobjEvent32SetValBlock(0x1BE, 0),
	    0x00007F00,  /* 4.5559015672128453e-41f */
	    0x0000FE58,  /* 9.124134560911749e-41f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00007F00,  /* 4.5559015672128453e-41f */
	    0xFE580000,  /* -7.177831177238546e+37f */
	    0x00000000,  /* 0.0f */
	aobjEvent32EndRaw(0x000, 1760),
	aobjEvent32EndRaw(0x000, 32512),
	aobjEvent32EndRaw(0x000, 424),
	aobjEvent32End(),
	aobjEvent32SetValBlock(0x1C0, 1759),
	    0x00007F00,  /* 4.5559015672128453e-41f */
	    0x01A80000,  /* 6.171345341817009e-38f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x07E, 0),
	    0x00007F00,  /* 4.5559015672128453e-41f */
	    0xFE580000,  /* -7.177831177238546e+37f */
	    0x00000000,  /* 0.0f */
	    0x00000640,  /* 2.2420775429197073e-42f */
	    0x00007F00,  /* 4.5559015672128453e-41f */
	    0x000001A8,  /* 5.941505488737224e-43f */
	aobjEvent32End(),
	aobjEvent32SetValBlock(0x080, 1599),
	    0x00007F00,  /* 4.5559015672128453e-41f */
	    0xE7000000,
	aobjEvent32End(),
	    0xDB0A0000,
	    0xFFFFFF00,
	    0xDB0A0004,
	    0xFFFFFF00,
	    0xDB0A0018,
	    0x80808000,
	    0xDB0A001C,
	    0x80808000,
	    0xE2001E01,
	aobjEvent32EndRaw(0x000, 1),
	    0xE200001C,
	aobjEvent32EndRaw(0x0AA, 12408),
	    0xFC127E24,
	    0xFFFFF3F9,
	    0xF9000000,
	aobjEvent32End(),
	    0xF5100000,
	aobjEvent32SetValBlock(0x202, 16480),
	    0xF5102000,  /* -1.8270014275789356e+32f */
	    0x00094360,  /* 8.506890613345953e-40f */
	    0xD7000002,
	    0xFFFFFFFF,
	    0xF2000000,
	aobjEvent32EndRaw(0x03F, 16508),
	    0xFD100000,
	(u32)dBonus2Common_gap_0x0000_sub_0x8,
	    0xE6000000,
	aobjEvent32End(),
	    0xF3000000,
	    0x077FF080,
	    0xE7000000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x201, 16408),
	(u32)((u8*)dBonus2Common_BoardedPlatformSmall_AnimJoint + 0x90),
	aobjEvent32SetValBlock(0x02C, 5138),
	    0x00101612,  /* 1.4772852748512946e-39f */
	    0x060E0C0A,  /* 2.671607655690609e-35f */
	    0x00080E0A,  /* 7.397202359447131e-40f */
	aobjEvent32SetValBlock(0x00C, 1026),
	    0x00040002,  /* 3.673447872288935e-40f */
	    0xE7000000,  /* -6.044629098073146e+23f */
	aobjEvent32End(),
	    0xF5100000,
	aobjEvent32SetValBlock(0x202, 16464),
	    0xF5101000,  /* -1.826209145953793e+32f */
	    0x00094250,  /* 8.50307908152299e-40f */
	    0xF2000000,
	aobjEvent32EndRaw(0x00F, 16508),
	    0xFD100000,
	(u32)dBonus2Common_gap_0x0000_sub_0x1010,
	    0xE6000000,
	aobjEvent32End(),
	    0xF3000000,
	    0x073FF100,
	    0xE7000000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x201, 16),
	(u32)((u8*)dBonus2Common_BoardedPlatformSmall_AnimJoint + 0x150),
	aobjEvent32SetValBlock(0x01C, 3082),
	    0x000C080A,  /* 1.104909826135475e-39f */
	    0x06060402,  /* 2.520554335722541e-35f */
	    0x00000602,  /* 2.1551970381315687e-42f */
	    0xE7000000,
	aobjEvent32End(),
	    0xF5101000,
	aobjEvent32EndRaw(0x01A, 17232),
	    0xF2000000,
	aobjEvent32EndRaw(0x01F, 16636),
	    0xFD100000,
	(u32)dBonus2Common_gap_0x0000_sub_0x1818,
	    0xE6000000,
	aobjEvent32End(),
	    0xF3000000,
	    0x073FF100,
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x201, 16),
	(u32)((u8*)dBonus2Common_BoardedPlatformSmall_AnimJoint + 0x1D0),
	aobjEvent32SetValBlock(0x01C, 3082),
	    0x00080C0E,  /* 7.39008376324836e-40f */
	    0x0606080E,  /* 2.5208516531413525e-35f */
	    0x000C040A,  /* 1.1034748965080064e-39f */
	aobjEvent32SetValBlock(0x004, 2054),
	    0x00000206,  /* 7.258726045202552e-43f */
	    0xE7000000,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE2001E01,
	aobjEvent32End(),
	    0xE200001C,
	aobjEvent32EndRaw(0x0AA, 8312),
	    0xDF000000,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FDFFFF,
	aobjEvent32End(),
	    0xE2001E01,
	aobjEvent32EndRaw(0x000, 1),
	    0xFC309661,
	    0x552EFF7F,
	    0xF9000000,
	aobjEvent32EndRaw(0x000, 8),
	    0xF5900000,
	aobjEvent32SetValBlock(0x203, 96),
	    0xD7000002,  /* -140737521909760.0f */
	    0xFFFFFFFF,  /* nanf */
	    0xDE000000,  /* -2.305843009213694e+18f */
	(u32)((u8*)dBonus2Common_BoardedPlatformSmall_AnimJoint + 0x498),
	    0xDF000000,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xFA000000,
	aobjEvent32EndRaw(0x001, 32640),
	    0xFB000000,
	aobjEvent32EndRaw(0x001, 32767),
	    0xF5880E00,
	aobjEvent32EndRaw(0x013, 608),
	    0xF2000000,
	aobjEvent32EndRaw(0x01B, 216),
	    0xFD900000,
	(u32)dBonus2Common_gap_0x0000_sub_0x2020,
	    0xE6000000,
	aobjEvent32End(),
	    0xF3000000,
	aobjEvent32SetValBlock(0x2C0, 12581),
	    0xE7000000,  /* -6.044629098073146e+23f */
	    0x00000000,  /* 0.0f */
	    0x01004008,  /* 2.3555827185300175e-38f */
	(u32)((u8*)dBonus2Common_BoardedPlatformSmall_AnimJoint + 0x250),
	aobjEvent32SetValBlock(0x00C, 1026),
	    0x00000602,  /* 2.1551970381315687e-42f */
	    0xDF000000,  /* -9.223372036854776e+18f */
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xFA000000,
	    0xFFFFFFFF,
	    0xFB000000,
	aobjEvent32EndRaw(0x15B, 32767),
	    0xF5880E00,
	aobjEvent32EndRaw(0x013, 608),
	    0xF2000000,
	aobjEvent32EndRaw(0x018, 16580),
	    0xFD900000,
	(u32)dBonus2Common_gap_0x0000_sub_0x2C30,
	    0xE6000000,
	aobjEvent32End(),
	    0xF3000000,
	    0x07577125,
	    0xE7000000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 4098),
	(u32)((u8*)dBonus2Common_BoardedPlatformSmall_AnimJoint + 0x260),
	aobjEvent32EndRaw(0x200, 12296),
	(u32)((u8*)dBonus2Common_BoardedPlatformSmall_AnimJoint + 0x290),
	aobjEvent32SetValBlock(0x00C, 1024),
	    0x00020600,  /* 1.8582338675718534e-40f */
	    0xE7000000,  /* -6.044629098073146e+23f */
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x004, 0),
	    0xE2001E01,
	aobjEvent32End(),
	    0xDF000000,
	aobjEvent32End(),
	aobjEvent32End(),
	(u32)((u8*)dBonus2Common_BoardedPlatformSmall_AnimJoint + 0x2C0),
	aobjEvent32EndRaw(0x000, 4),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 1),
	(u32)((u8*)dBonus2Common_BoardedPlatformSmall_AnimJoint + 0x450),
	aobjEvent32EndRaw(0x000, 4),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 1),
	(u32)((u8*)dBonus2Common_BoardedPlatformSmall_AnimJoint + 0x4F8),
	aobjEvent32EndRaw(0x000, 4),
	aobjEvent32End(),
};

/* DObjDesc: BoardedPlatformMedium @ 0x5B80 (4 entries) */
DObjDesc dBonus2Common_BoardedPlatformMedium[] = {
	{ 0, (void*)((u8*)dBonus2Common_BoardedPlatformSmall_AnimJoint + 0x580), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dBonus2Common_BoardedPlatformSmall_AnimJoint + 0x590), { 0.0f, -150.0f, 505.0741271972656f }, { 0.0f, 0.0f, 0.0f }, { 4.0f, 4.0f, 4.0f } },
	{ 1, (void*)((u8*)dBonus2Common_BoardedPlatformSmall_AnimJoint + 0x5A0), { 0.0f, -150.0f, 559.0042724609375f }, { 0.0f, 0.0f, 0.0f }, { 2.5f, 2.5f, 2.5f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x5C30 to 0x61E0 (1456 bytes) */
u32 dBonus2Common_BoardedPlatformMedium_AnimJoint[364] = {
	aobjEvent32End(),
	(u32)((u8*)dBonus2Common_BoardedPlatformMedium_AnimJoint + 0xC),
	(u32)((u8*)dBonus2Common_BoardedPlatformMedium_AnimJoint + 0x40),
	aobjEvent32SetVal0RateBlock(0x380, 0),
	    0x40800000,  /* 4.0f */
	    0x40800000,  /* 4.0f */
	    0x40800000,  /* 4.0f */
	aobjEvent32SetVal0RateBlock(0x380, 6),
	    0x3FD9999A,  /* 1.7000000476837158f */
	    0x3FD9999A,  /* 1.7000000476837158f */
	    0x3FD9999A,  /* 1.7000000476837158f */
	aobjEvent32SetValBlock(0x380, 24),
	    0x3FD9999A,  /* 1.7000000476837158f */
	    0x3FD9999A,  /* 1.7000000476837158f */
	    0x3FD9999A,  /* 1.7000000476837158f */
	aobjEvent32End(),
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
	aobjEvent32EndRaw(0x234, 0),
	aobjEvent32JumpRaw(0x182, 0, 0x0B330400),
	    0x30007600,
	aobjEvent32EndRaw(0x235, 32468),
	aobjEvent32JumpRaw(0x182, 0, 0x0B330000),
	    0x30007600,
	aobjEvent32JumpRaw(0x182, 0, 0x011A0000),
	aobjEvent32SetVal0RateBlock(0x000, 1024),
	    0x76003000,
	aobjEvent32JumpRaw(0x183, 32468, 0x011A0000),
	aobjEvent32SetVal0RateBlock(0x000, 0),
	    0x76003000,
	aobjEvent32EndRaw(0x235, 32468),
	aobjEvent32JumpRaw(0x182, 0, 0x0C000000),
	    0x30007600,
	    0xFEE6FED4,
	aobjEvent32JumpRaw(0x182, 0, 0x04000000),
	    0xD0007600,
	    0xFEE60000,
	aobjEvent32JumpRaw(0x182, 0, 0x04000400),
	    0xD0007600,
	aobjEvent32EndRaw(0x234, 0),
	aobjEvent32JumpRaw(0x182, 0, 0x0C000400),
	    0x30007600,
	    0xFEE6FED4,
	aobjEvent32JumpRaw(0x182, 0, 0x04CC0000),
	    0xD0007600,
	    0xFD3FFED4,
	aobjEvent32EndRaw(0x234, 0),
	aobjEvent32End(),
	    0x8A003000,
	    0xFD3F0000,
	aobjEvent32EndRaw(0x234, 0),
	aobjEvent32EndRaw(0x000, 1024),
	    0x8A003000,
	    0xFEE60000,
	aobjEvent32JumpRaw(0x182, 0, 0x04CC0400),
	    0xD0007600,
	aobjEvent32JumpRaw(0x182, 0, 0xFEE60000),
	aobjEvent32EndRaw(0x0CC, 1024),
	    0x7F000000,
	aobjEvent32JumpRaw(0x183, 32468, 0xFEE60000),
	aobjEvent32EndRaw(0x0CC, 0),
	    0x7F000000,
	aobjEvent32JumpRaw(0x183, 32468, 0x011A0000),
	aobjEvent32JumpRaw(0x332, 0, 0x76003000),
	aobjEvent32JumpRaw(0x182, 0, 0x011A0000),
	aobjEvent32JumpRaw(0x332, 1024, 0x76003000),
	    0xFD3FFED4,
	aobjEvent32EndRaw(0x234, 0),
	aobjEvent32JumpRaw(0x332, 0, 0x8A003000),
	    0xFD3F0000,
	aobjEvent32EndRaw(0x234, 0),
	aobjEvent32JumpRaw(0x332, 1024, 0x8A003000),
	    0xFD3FFED4,
	    0xFEE60000,
	aobjEvent32EndRaw(0x0CC, 0),
	    0x80000000,
	    0xFD3F0000,
	    0xFEE60000,
	aobjEvent32EndRaw(0x0CC, 1024),
	    0x80000000,
	    0xFEE60000,
	aobjEvent32JumpRaw(0x182, 0, 0x02660800),
	aobjEvent32EndRaw(0x0FE, 0),
	aobjEvent32EndRaw(0x234, 0),
	aobjEvent32JumpRaw(0x182, 0, 0x05990800),
	aobjEvent32EndRaw(0x0FE, 0),
	aobjEvent32EndRaw(0x234, 0),
	    0xFD3F0000,
	aobjEvent32WaitRaw(0x332, 0),
	aobjEvent32EndRaw(0x0FE, 0),
	    0xFD3F0000,
	aobjEvent32EndRaw(0x234, 0),
	aobjEvent32EndRaw(0x000, 1433),
	aobjEvent32EndRaw(0x0FE, 0),
	aobjEvent32JumpRaw(0x182, 0, 0x011A0000),
	aobjEvent32SetVal(0x000, 1433),
	aobjEvent32EndRaw(0x0FE, 0),
	    0xFEE60000,
	    0xFD3F0000,
	aobjEvent32JumpRaw(0x0CC, 0, 0x007F0000),
	aobjEvent32JumpRaw(0x182, 0, 0xFEE60000),
	aobjEvent32SetVal(0x000, 614),
	aobjEvent32EndRaw(0x0FE, 0),
	    0xFD3F0000,
	    0xFEE60000,
	aobjEvent32EndRaw(0x000, 614),
	aobjEvent32EndRaw(0x0FE, 0),
	aobjEvent32EndRaw(0x350, 0),
	aobjEvent32End(),
	aobjEvent32SetValBlock(0x1BE, 0),
	    0x00007F00,  /* 4.5559015672128453e-41f */
	    0x0000FE58,  /* 9.124134560911749e-41f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00007F00,  /* 4.5559015672128453e-41f */
	    0xFE580000,  /* -7.177831177238546e+37f */
	    0x00000000,  /* 0.0f */
	aobjEvent32EndRaw(0x000, 1760),
	aobjEvent32EndRaw(0x000, 32512),
	aobjEvent32EndRaw(0x000, 424),
	aobjEvent32End(),
	aobjEvent32SetValBlock(0x1C0, 1759),
	    0x00007F00,  /* 4.5559015672128453e-41f */
	    0x01A80000,  /* 6.171345341817009e-38f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x07E, 0),
	    0x00007F00,  /* 4.5559015672128453e-41f */
	    0xFE580000,  /* -7.177831177238546e+37f */
	    0x00000000,  /* 0.0f */
	    0x00000640,  /* 2.2420775429197073e-42f */
	    0x00007F00,  /* 4.5559015672128453e-41f */
	    0x000001A8,  /* 5.941505488737224e-43f */
	aobjEvent32End(),
	aobjEvent32SetValBlock(0x080, 1599),
	    0x00007F00,  /* 4.5559015672128453e-41f */
	    0xE7000000,
	aobjEvent32End(),
	    0xDB0A0000,
	    0xFFFFFF00,
	    0xDB0A0004,
	    0xFFFFFF00,
	    0xDB0A0018,
	    0x80808000,
	    0xDB0A001C,
	    0x80808000,
	    0xE2001E01,
	aobjEvent32EndRaw(0x000, 1),
	    0xE200001C,
	aobjEvent32EndRaw(0x0AA, 12408),
	    0xFC127E24,
	    0xFFFFF3F9,
	    0xF9000000,
	aobjEvent32End(),
	    0xF5100000,
	aobjEvent32SetValBlock(0x202, 16480),
	    0xF5102000,  /* -1.8270014275789356e+32f */
	    0x00094360,  /* 8.506890613345953e-40f */
	    0xD7000002,
	    0xFFFFFFFF,
	    0xF2000000,
	aobjEvent32EndRaw(0x03F, 16508),
	    0xFD100000,
	(u32)dBonus2Common_gap_0x0000_sub_0x8,
	    0xE6000000,
	aobjEvent32End(),
	    0xF3000000,
	    0x077FF080,
	    0xE7000000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x201, 16408),
	(u32)((u8*)dBonus2Common_BoardedPlatformMedium_AnimJoint + 0x90),
	aobjEvent32SetValBlock(0x02C, 5138),
	    0x00101612,  /* 1.4772852748512946e-39f */
	    0x060E0C0A,  /* 2.671607655690609e-35f */
	    0x00080E0A,  /* 7.397202359447131e-40f */
	aobjEvent32SetValBlock(0x00C, 1026),
	    0x00040002,  /* 3.673447872288935e-40f */
	    0xE7000000,  /* -6.044629098073146e+23f */
	aobjEvent32End(),
	    0xF5100000,
	aobjEvent32SetValBlock(0x202, 16464),
	    0xF5101000,  /* -1.826209145953793e+32f */
	    0x00094250,  /* 8.50307908152299e-40f */
	    0xF2000000,
	aobjEvent32EndRaw(0x00F, 16508),
	    0xFD100000,
	(u32)dBonus2Common_gap_0x0000_sub_0x1010,
	    0xE6000000,
	aobjEvent32End(),
	    0xF3000000,
	    0x073FF100,
	    0xE7000000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x201, 16),
	(u32)((u8*)dBonus2Common_BoardedPlatformMedium_AnimJoint + 0x150),
	aobjEvent32SetValBlock(0x01C, 3082),
	    0x000C080A,  /* 1.104909826135475e-39f */
	    0x06060402,  /* 2.520554335722541e-35f */
	    0x00000602,  /* 2.1551970381315687e-42f */
	    0xE7000000,
	aobjEvent32End(),
	    0xF5101000,
	aobjEvent32EndRaw(0x01A, 17232),
	    0xF2000000,
	aobjEvent32EndRaw(0x01F, 16636),
	    0xFD100000,
	(u32)dBonus2Common_gap_0x0000_sub_0x1818,
	    0xE6000000,
	aobjEvent32End(),
	    0xF3000000,
	    0x073FF100,
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x201, 16),
	(u32)((u8*)dBonus2Common_BoardedPlatformMedium_AnimJoint + 0x1D0),
	aobjEvent32SetValBlock(0x01C, 3082),
	    0x00080C0E,  /* 7.39008376324836e-40f */
	    0x0606080E,  /* 2.5208516531413525e-35f */
	    0x000C040A,  /* 1.1034748965080064e-39f */
	aobjEvent32SetValBlock(0x004, 2054),
	    0x00000206,  /* 7.258726045202552e-43f */
	    0xE7000000,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE2001E01,
	aobjEvent32End(),
	    0xE200001C,
	aobjEvent32EndRaw(0x0AA, 8312),
	    0xDF000000,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FDFFFF,
	aobjEvent32End(),
	    0xE2001E01,
	aobjEvent32EndRaw(0x000, 1),
	    0xFC309661,
	    0x552EFF7F,
	    0xF9000000,
	aobjEvent32EndRaw(0x000, 8),
	    0xF5900000,
	aobjEvent32SetValBlock(0x203, 96),
	    0xD7000002,  /* -140737521909760.0f */
	    0xFFFFFFFF,  /* nanf */
	    0xDE000000,  /* -2.305843009213694e+18f */
	(u32)((u8*)dBonus2Common_BoardedPlatformMedium_AnimJoint + 0x498),
	    0xDF000000,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xFA000000,
	aobjEvent32EndRaw(0x001, 32640),
	    0xFB000000,
	aobjEvent32EndRaw(0x001, 32767),
	    0xF5880E00,
	aobjEvent32EndRaw(0x013, 608),
	    0xF2000000,
	aobjEvent32EndRaw(0x01B, 216),
	    0xFD900000,
	(u32)dBonus2Common_gap_0x0000_sub_0x2020,
	    0xE6000000,
	aobjEvent32End(),
	    0xF3000000,
	aobjEvent32SetValBlock(0x2C0, 12581),
	    0xE7000000,  /* -6.044629098073146e+23f */
	    0x00000000,  /* 0.0f */
	    0x01004008,  /* 2.3555827185300175e-38f */
	(u32)((u8*)dBonus2Common_BoardedPlatformMedium_AnimJoint + 0x250),
	aobjEvent32SetValBlock(0x00C, 1026),
	    0x00000602,  /* 2.1551970381315687e-42f */
	    0xDF000000,  /* -9.223372036854776e+18f */
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xFA000000,
	    0xFFFFFFFF,
	    0xFB000000,
	aobjEvent32EndRaw(0x15B, 32767),
	    0xF5880E00,
	aobjEvent32EndRaw(0x013, 608),
	    0xF2000000,
	aobjEvent32EndRaw(0x018, 16580),
	    0xFD900000,
	(u32)dBonus2Common_gap_0x0000_sub_0x2C30,
	    0xE6000000,
	aobjEvent32End(),
	    0xF3000000,
	    0x07577125,
	    0xE7000000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 4098),
	(u32)((u8*)dBonus2Common_BoardedPlatformMedium_AnimJoint + 0x260),
	aobjEvent32EndRaw(0x200, 12296),
	(u32)((u8*)dBonus2Common_BoardedPlatformMedium_AnimJoint + 0x290),
	aobjEvent32SetValBlock(0x00C, 1024),
	    0x00020600,  /* 1.8582338675718534e-40f */
	    0xE7000000,  /* -6.044629098073146e+23f */
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x004, 0),
	    0xE2001E01,
	aobjEvent32End(),
	    0xDF000000,
	aobjEvent32End(),
	aobjEvent32End(),
	(u32)((u8*)dBonus2Common_BoardedPlatformMedium_AnimJoint + 0x2C0),
	aobjEvent32EndRaw(0x000, 4),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 1),
	(u32)((u8*)dBonus2Common_BoardedPlatformMedium_AnimJoint + 0x450),
	aobjEvent32EndRaw(0x000, 4),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 1),
	(u32)((u8*)dBonus2Common_BoardedPlatformMedium_AnimJoint + 0x4F8),
	aobjEvent32EndRaw(0x000, 4),
	aobjEvent32End(),
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

