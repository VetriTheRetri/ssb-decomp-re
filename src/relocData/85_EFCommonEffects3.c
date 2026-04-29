/* relocData file 85: EFCommonEffects3 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* Raw data from file offset 0x0000 to 0x0108 (264 bytes) */
PAD(8);

/* gap sub-block @ 0x0008 (was gap+0x8, 256 bytes) */
u8 dEFCommonEffects3_Tex_0x0008[256] = {
	#include <EFCommonEffects3/Tex_0x0008.tex.inc.c>
};

/* MObjSub: MBallRays @ 0x108 */
MObjSub dEFCommonEffects3_MBallRays_MObjSub = {
	0x0000,
	G_IM_FMT_RGBA, G_IM_SIZ_4b,
	(void**)0x00000000,
	0x0045, 0x00BE, 0x00BE, 0x00C1,
	770,
	0.0f, 6.79582671569135e-39f,
	1.4693903593032886e-39f, 0.0f,
	0.0f, 0.2849999964237213f,
	(void**)0x3F800000,
	0x3EDC,
	0x28, 0xF6,
	0x0000,
	0x0000, 0x3F80, 0x0000,
	0.0f, 9.404816885393553e-38f,
	1.4693903593032886e-39f, 1.4693903593032886e-39f,
	0x00000000,
	{ { 0x3E, 0x91, 0xEB, 0x85 } },
	0x00, 0x00, { 0x00, 0x00 },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x20, 0x01 } },
	{ { 0xFF, 0xFF, 0xFF, 0x0C } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	16777215, 8,
	-256, 1717986816,
};

/* Raw data from file offset 0x0180 to 0x0628 (1192 bytes) */
/* gap sub-block @ 0x0180 (was gap+0x0, 16 bytes) */
u8 dEFCommonEffects3_gap_0x0180[16] = {
	#include <EFCommonEffects3/gap_0x0180.data.inc.c>
};

/* gap sub-block @ 0x0190 (was gap+0x10, 120 bytes) */
u8 dEFCommonEffects3_gap_0x0180_sub_0x10[120] = {
	#include <EFCommonEffects3/gap_0x0180_sub_0x10.data.inc.c>
};

/* gap sub-block @ 0x0208 (was gap+0x88, 120 bytes) */
u8 dEFCommonEffects3_gap_0x0180_sub_0x88[120] = {
	#include <EFCommonEffects3/gap_0x0180_sub_0x88.data.inc.c>
};

/* gap sub-block @ 0x0280 (was gap+0x100, 120 bytes) */
u8 dEFCommonEffects3_gap_0x0180_sub_0x100[120] = {
	#include <EFCommonEffects3/gap_0x0180_sub_0x100.data.inc.c>
};

/* gap sub-block @ 0x02F8 (was gap+0x178, 12 bytes) */
u8 dEFCommonEffects3_gap_0x0180_sub_0x178[12] = {
	#include <EFCommonEffects3/gap_0x0180_sub_0x178.data.inc.c>
};

/* gap sub-block @ 0x0304 (was gap+0x184, 12 bytes) */
u8 dEFCommonEffects3_gap_0x0180_sub_0x184[12] = {
	#include <EFCommonEffects3/gap_0x0180_sub_0x184.data.inc.c>
};

/* gap sub-block @ 0x0310 (was gap+0x190, 80 bytes) */
Vtx dEFCommonEffects3_gap_0x0180_sub_0x190[5] = {
	#include <EFCommonEffects3/gap_0x0180_sub_0x190.vtx.inc.c>
};

/* Vtx: gap_0x0180_sub_0x1E0 @ 0x360 (5 vertices) */
Vtx dEFCommonEffects3_gap_0x0180_sub_0x1E0[5] = {
	#include <EFCommonEffects3/gap_0x0180_sub_0x1E0.vtx.inc.c>
};

/* gap sub-block @ 0x03B0 (was gap+0x230, 64 bytes) */
Vtx dEFCommonEffects3_gap_0x0180_sub_0x230[4] = {
	#include <EFCommonEffects3/gap_0x0180_sub_0x230.vtx.inc.c>
};

/* gap sub-block @ 0x03F0 (was gap+0x270, 80 bytes) */
Vtx dEFCommonEffects3_gap_0x0180_sub_0x270[5] = {
	#include <EFCommonEffects3/gap_0x0180_sub_0x270.vtx.inc.c>
};

/* gap sub-block @ 0x0440 (was gap+0x2C0, 216 bytes) */
Gfx dEFCommonEffects3_DL_0x0440[27] = {
	#include <EFCommonEffects3/DL_0x0440.dl.inc.c>
};

/* gap sub-block @ 0x0518 (was gap+0x398, 240 bytes) */
Gfx dEFCommonEffects3_DL_0x0518[30] = {
	#include <EFCommonEffects3/DL_0x0518.dl.inc.c>
};

/* DObjDLLink @ 0x488 (2 entries) */
DObjDLLink dEFCommonEffects3_DLLink_0x0608[] = {
	{ 1, dEFCommonEffects3_DL_0x0440 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x498 (2 entries) */
DObjDLLink dEFCommonEffects3_DLLink_0x0618[] = {
	{ 1, dEFCommonEffects3_DL_0x0518 },
	{ 4, NULL },
};

/* DObjDesc: MBallRays @ 0x628 (5 entries) */
DObjDesc dEFCommonEffects3_MBallRays[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 3.0f, 3.0f, 3.0f } },
	{ 2, (void*)dEFCommonEffects3_DLLink_0x0608, { -9.0f, -4.5f, 0.0f }, { 0.0f, -31.38558006286621f, 0.0f }, { 36.41071701049805f, 2.9694700241088867f, 36.40849304199219f } },
	{ 2, (void*)dEFCommonEffects3_DLLink_0x0618, { -9.0f, -4.5f, 0.0f }, { 0.0f, 31.72962188720703f, 0.0f }, { 36.41071701049805f, 2.829946994781494f, 36.40849304199219f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(12);

/* Raw data from file offset 0x0710 to 0x0860 (336 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dEFCommonEffects3_MBallRays_AnimJoint_0x720[];
extern u32 dEFCommonEffects3_MBallRays_AnimJoint_0x7C8[];

AObjEvent32 *dEFCommonEffects3_MBallRays_AnimJoint[4] = {
	NULL,
	NULL,
	(AObjEvent32 *)dEFCommonEffects3_MBallRays_AnimJoint_0x720,
	(AObjEvent32 *)dEFCommonEffects3_MBallRays_AnimJoint_0x7C8,
};

u32 dEFCommonEffects3_MBallRays_AnimJoint_0x720[] = {
	aobjEvent32SetValBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x074, 0),
	    0x00000000,  /* 0.0f */
	    0xC1100000,  /* -9.0f */
	    0xC0900000,  /* -4.5f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal(0x001, 90),
	    0x2F0EFA35,  /* 1.3003716159420975e-10f */
	aobjEvent32Cmd12(0x001, 40),
	aobjEvent32SetVal(0x380, 0),
	    0x40400000,  /* 3.0f */
	    0x40C1F230,  /* 6.060813903808594f */
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValRate(0x002, 0),
	    0x00000000,  /* 0.0f */
	    0xBEB2F263,  /* -0.3495055139064789f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetVal0Rate(0x002, 50),
	    0xC1FB53D1,  /* -31.415925979614258f */
	aobjEvent32SetValBlock(0x380, 5),
	    0x3DD28390,  /* 0.1027899980545044f */
	    0x3E88CE70,  /* 0.2671999931335449f */
	    0x3DC826AB,  /* 0.09773000329732895f */
	aobjEvent32SetVal(0x100, 28),
	    0x405BEA92,  /* 3.436192035675049f */
	aobjEvent32SetValBlock(0x280, 12),
	    0x3FCDF0EF,  /* 1.6089152097702026f */
	    0x3FCDF192,  /* 1.6089346408843994f */
	aobjEvent32SetValBlock(0x280, 16),
	    0x4082D4FF,  /* 4.088500499725342f */
	    0x4082D4FF,  /* 4.088500499725342f */
	aobjEvent32SetTargetRate(0x280, 0),
	    0x3E059C54,  /* 0.13047915697097778f */
	    0x3DB8FCE1,  /* 0.09032607823610306f */
	aobjEvent32SetVal0Rate(0x280, 17),
	    0x4212EA88,  /* 36.729034423828125f */
	    0x4212EA88,  /* 36.729034423828125f */
	aobjEvent32SetValBlock(0x100, 17),
	    0x403C2DDF,  /* 2.9402997493743896f */
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32End(),
};

u32 dEFCommonEffects3_MBallRays_AnimJoint_0x7C8[] = {
	aobjEvent32SetValBlock(0x002, 0),
	    0xC1240819,  /* -10.25197696685791f */
	aobjEvent32SetValAfterBlock(0x075, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0xC1100000,  /* -9.0f */
	    0xC0900000,  /* -4.5f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal(0x002, 90),
	    0x4200CE28,  /* 32.201324462890625f */
	aobjEvent32Cmd12(0x002, 40),
	aobjEvent32SetVal(0x380, 0),
	    0x3BF90998,  /* 0.007600020617246628f */
	    0x3BF90998,  /* 0.007600020617246628f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetVal(0x200, 17),
	    0x3FCDF192,  /* 1.6089346408843994f */
	aobjEvent32SetVal(0x100, 33),
	    0x3F883B5D,  /* 1.0643116235733032f */
	aobjEvent32SetValBlock(0x080, 2),
	    0x3D9EB95B,  /* 0.07750197499990463f */
	aobjEvent32SetValBlock(0x080, 15),
	    0x3FCDF0EF,  /* 1.6089152097702026f */
	aobjEvent32SetValBlock(0x280, 16),
	    0x4082D4FF,  /* 4.088500499725342f */
	    0x4082D4FF,  /* 4.088500499725342f */
	aobjEvent32SetTargetRate(0x280, 0),
	    0x3E059C54,  /* 0.13047915697097778f */
	    0x3DB8FCE1,  /* 0.09032607823610306f */
	aobjEvent32SetVal0Rate(0x280, 17),
	    0x4212EA88,  /* 36.729034423828125f */
	    0x4212EA88,  /* 36.729034423828125f */
	aobjEvent32SetValBlock(0x100, 17),
	    0x403C2DDF,  /* 2.9402997493743896f */
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x0860 to 0x2AC0 (8800 bytes) */
/* Pointer-table split fallback: chain-pointer table at the
 * head of the array, followed by raw data containing every
 * referenced (and orphan) script. The data block is dumped
 * as one u8[] include; fixRelocChain rewrites the table
 * entries to chain-encoded form per the .reloc. */
extern u8 dEFCommonEffects3_MBallRays_MatAnimJoint_data[];

AObjEvent32 *dEFCommonEffects3_MBallRays_MatAnimJoint[4] = {
	NULL,
	NULL,
	(AObjEvent32 *)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint_data + 0x90),
	(AObjEvent32 *)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint_data + 0x98),
};

u8 dEFCommonEffects3_MBallRays_MatAnimJoint_data[8784] = {
	#include <EFCommonEffects3/MBallRays_MatAnimJoint_data.data.inc.c>
};

/* DObjDesc: RebirthHalo @ 0x2AC0 (4 entries) */
DObjDesc dEFCommonEffects3_RebirthHalo[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x2238), { 0.0f, -60.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x2250), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x2B70 to 0x2CA8 (312 bytes) */
/* Pointer-table split fallback: chain-pointer table at the
 * head of the array, followed by raw data containing every
 * referenced (and orphan) script. The data block is dumped
 * as one u8[] include; fixRelocChain rewrites the table
 * entries to chain-encoded form per the .reloc. */
extern u8 dEFCommonEffects3_RebirthHalo_AnimJoint_data[];

AObjEvent32 *dEFCommonEffects3_RebirthHalo_AnimJoint[3] = {
	NULL,
	NULL,
	(AObjEvent32 *)dEFCommonEffects3_RebirthHalo_AnimJoint_data,
};

u8 dEFCommonEffects3_RebirthHalo_AnimJoint_data[300] = {
	#include <EFCommonEffects3/RebirthHalo_AnimJoint_data.data.inc.c>
};

/* MObjSub: ItemGetSwirl @ 0x2CA8 */
MObjSub dEFCommonEffects3_ItemGetSwirl_MObjSub = {
	0x0000,
	G_IM_FMT_RGBA, G_IM_SIZ_4b,
	(void**)0x00000000,
	0x0B2D, 0x0BA8, 0x0B2E, 0x0BAA,
	187632556,
	6.472881977195592e-32f, 1.4377322243972623e-42f,
	0.0f, 2.938735877055719e-39f,
	2.938758297831148e-39f, 0.0f,
	(void**)0x00000000,
	0x0000,
	G_IM_FMT_RGBA, G_IM_SIZ_4b,
	0x3F80,
	0x0000, 0x3F80, 0x0000,
	0.0f, 1.0f,
	0.0f, 9.405102750280275e-38f,
	0x00200010,
	{ { 0x00, 0x20, 0x00, 0x10 } },
	0x00, 0x00, { 0x00, 0x00 },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x20, 0x01 } },
	167743667, 0,
	255, 8,
};

/* Raw data from file offset 0x2D20 to 0x3170 (1104 bytes) */
/* gap sub-block @ 0x2D20 (was gap+0x0, 24 bytes) */
u8 dEFCommonEffects3_gap_0x2D20[24] = {
	#include <EFCommonEffects3/gap_0x2D20.data.inc.c>
};

/* gap sub-block @ 0x2D38 (was gap+0x18, 120 bytes) */
u8 dEFCommonEffects3_gap_0x2D20_sub_0x18[120] = {
	#include <EFCommonEffects3/gap_0x2D20_sub_0x18.data.inc.c>
};

/* gap sub-block @ 0x2DB0 (was gap+0x90, 120 bytes) */
u8 dEFCommonEffects3_gap_0x2D20_sub_0x90[120] = {
	#include <EFCommonEffects3/gap_0x2D20_sub_0x90.data.inc.c>
};

/* gap sub-block @ 0x2E28 (was gap+0x108, 120 bytes) */
u8 dEFCommonEffects3_gap_0x2D20_sub_0x108[120] = {
	#include <EFCommonEffects3/gap_0x2D20_sub_0x108.data.inc.c>
};

/* gap sub-block @ 0x2EA0 (was gap+0x180, 8 bytes) */
u8 dEFCommonEffects3_gap_0x2D20_sub_0x180[8] = {
	#include <EFCommonEffects3/gap_0x2D20_sub_0x180.data.inc.c>
};

/* gap sub-block @ 0x2EA8 (was gap+0x188, 8 bytes) */
u8 dEFCommonEffects3_gap_0x2D20_sub_0x188[8] = {
	#include <EFCommonEffects3/gap_0x2D20_sub_0x188.data.inc.c>
};

/* gap sub-block @ 0x2EB0 (was gap+0x190, 8 bytes) */
u8 dEFCommonEffects3_gap_0x2D20_sub_0x190[8] = {
	#include <EFCommonEffects3/gap_0x2D20_sub_0x190.data.inc.c>
};

/* gap sub-block @ 0x2EB8 (was gap+0x198, 8 bytes) */
u8 dEFCommonEffects3_gap_0x2D20_sub_0x198[8] = {
	#include <EFCommonEffects3/gap_0x2D20_sub_0x198.data.inc.c>
};

/* gap sub-block @ 0x2EC0 (was gap+0x1A0, 48 bytes) */
Vtx dEFCommonEffects3_gap_0x2D20_sub_0x1A0[3] = {
	#include <EFCommonEffects3/gap_0x2D20_sub_0x1A0.vtx.inc.c>
};

/* gap sub-block @ 0x2EF0 (was gap+0x1D0, 144 bytes) */
Gfx dEFCommonEffects3_DL_0x2EF0[18] = {
	#include <EFCommonEffects3/DL_0x2EF0.dl.inc.c>
};

/* gap sub-block @ 0x2F80 (was gap+0x260, 144 bytes) */
Gfx dEFCommonEffects3_DL_0x2F80[18] = {
	#include <EFCommonEffects3/DL_0x2F80.dl.inc.c>
};

/* gap sub-block @ 0x3010 (was gap+0x2F0, 144 bytes) */
Gfx dEFCommonEffects3_DL_0x3010[18] = {
	#include <EFCommonEffects3/DL_0x3010.dl.inc.c>
};

/* gap sub-block @ 0x30A0 (was gap+0x380, 144 bytes) */
Gfx dEFCommonEffects3_DL_0x30A0[18] = {
	#include <EFCommonEffects3/DL_0x30A0.dl.inc.c>
};

/* DObjDLLink @ 0x410 (2 entries) */
DObjDLLink dEFCommonEffects3_DLLink_0x3130[] = {
	{ 1, dEFCommonEffects3_DL_0x2EF0 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x420 (2 entries) */
DObjDLLink dEFCommonEffects3_DLLink_0x3140[] = {
	{ 1, dEFCommonEffects3_DL_0x2F80 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x430 (2 entries) */
DObjDLLink dEFCommonEffects3_DLLink_0x3150[] = {
	{ 1, dEFCommonEffects3_DL_0x3010 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x440 (2 entries) */
DObjDLLink dEFCommonEffects3_DLLink_0x3160[] = {
	{ 1, dEFCommonEffects3_DL_0x30A0 },
	{ 4, NULL },
};

/* DObjDesc: ItemGetSwirl @ 0x3170 (7 entries) */
DObjDesc dEFCommonEffects3_ItemGetSwirl[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { -0.8541679978370667f, 1.570796012878418f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dEFCommonEffects3_DLLink_0x3130, { 0.24000099301338196f, -2.7028450965881348f, -233.6550750732422f }, { -0.27849701046943665f, 0.0f, 0.0f }, { 0.9855470061302185f, 0.5486469864845276f, 0.5575129985809326f } },
	{ 2, (void*)dEFCommonEffects3_DLLink_0x3140, { 0.24000099301338196f, 233.6550750732422f, -2.70284104347229f }, { 1.2919600009918213f, 0.0f, 0.0f }, { 0.9855470061302185f, 0.5486469864845276f, 0.5575129985809326f } },
	{ 2, (void*)dEFCommonEffects3_DLLink_0x3150, { 0.24000099301338196f, 2.702807903289795f, 233.65505981445312f }, { 2.8615520000457764f, 0.0f, 0.0f }, { 0.9855470061302185f, 0.5486469864845276f, 0.5575129985809326f } },
	{ 2, (void*)dEFCommonEffects3_DLLink_0x3160, { 0.24000099301338196f, -233.6550750732422f, 2.7028489112854004f }, { -1.8504990339279175f, 0.0f, 0.0f }, { 0.9855470061302185f, 0.5486469864845276f, 0.5575129985809326f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(12);

/* Raw data from file offset 0x32B0 to 0x3490 (480 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dEFCommonEffects3_ItemGetSwirl_AnimJoint_0x32C8[];
extern u32 dEFCommonEffects3_ItemGetSwirl_AnimJoint_0x330C[];
extern u32 dEFCommonEffects3_ItemGetSwirl_AnimJoint_0x336C[];
extern u32 dEFCommonEffects3_ItemGetSwirl_AnimJoint_0x33CC[];
extern u32 dEFCommonEffects3_ItemGetSwirl_AnimJoint_0x342C[];

AObjEvent32 *dEFCommonEffects3_ItemGetSwirl_AnimJoint[6] = {
	NULL,
	(AObjEvent32 *)dEFCommonEffects3_ItemGetSwirl_AnimJoint_0x32C8,
	(AObjEvent32 *)dEFCommonEffects3_ItemGetSwirl_AnimJoint_0x330C,
	(AObjEvent32 *)dEFCommonEffects3_ItemGetSwirl_AnimJoint_0x336C,
	(AObjEvent32 *)dEFCommonEffects3_ItemGetSwirl_AnimJoint_0x33CC,
	(AObjEvent32 *)dEFCommonEffects3_ItemGetSwirl_AnimJoint_0x342C,
};

u32 dEFCommonEffects3_ItemGetSwirl_AnimJoint_0x32C8[] = {
	aobjEvent32SetValAfter(0x3F6, 0),
	    0x3FC90FDB,  /* 1.5707963705062866f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValRate(0x001, 0),
	    0xBDA58095,  /* -0.08081165701150894f */
	    0xBD46FB0D,  /* -0.04857926443219185f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetValRateBlock(0x001, 8),
	    0xBF860A92,  /* -1.0471975803375244f */
	    0xBE51BD8D,  /* -0.20482464134693146f */
	aobjEvent32End(),
};

u32 dEFCommonEffects3_ItemGetSwirl_AnimJoint_0x330C[] = {
	aobjEvent32SetValAfterBlock(0x006, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfter(0x010, 0),
	    0x3E75C2E1,  /* 0.24000121653079987f */
	aobjEvent32SetVal0Rate(0x381, 0),
	    0x3E7AD95E,  /* 0.24496981501579285f */
	    0x3F29E4CF,  /* 0.6636475920677185f */
	    0x3F1D5256,  /* 0.6145375967025757f */
	    0x3F29E4CF,  /* 0.6636475920677185f */
	aobjEvent32SetValRate(0x060, 0),
	    0x42BD0DCC,  /* 94.52694702148438f */
	    0xC13E147B,  /* -11.880000114440918f */
	    0xC2A1ACB8,  /* -80.83734130859375f */
	    0xC1956042,  /* -18.672000885009766f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetVal0RateBlock(0x3E1, 8),
	    0xBE9A9FC0,  /* -0.3020000457763672f */
	    0xC0B6BCDB,  /* -5.7105536460876465f */
	    0xC36E61E2,  /* -238.38235473632812f */
	    0x3F800000,  /* 1.0f */
	    0x3F0BB247,  /* 0.545689046382904f */
	    0x3F0D80E1,  /* 0.5527477860450745f */
	aobjEvent32End(),
};

u32 dEFCommonEffects3_ItemGetSwirl_AnimJoint_0x336C[] = {
	aobjEvent32SetValAfterBlock(0x006, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfter(0x010, 0),
	    0x3E75C2E1,  /* 0.24000121653079987f */
	aobjEvent32SetVal0Rate(0x381, 0),
	    0x3FE7689E,  /* 1.807880163192749f */
	    0x3F29E4CF,  /* 0.6636475920677185f */
	    0x3F1D5256,  /* 0.6145375967025757f */
	    0x3F29E4CF,  /* 0.6636475920677185f */
	aobjEvent32SetValRate(0x060, 0),
	    0x42A1ACB8,  /* 80.83734130859375f */
	    0x41956042,  /* 18.672000885009766f */
	    0x42BD0DCC,  /* 94.52694702148438f */
	    0xC13E147B,  /* -11.880000114440918f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetVal0RateBlock(0x3E1, 8),
	    0x3FA267EC,  /* 1.268796443939209f */
	    0x436E61E2,  /* 238.38235473632812f */
	    0xC0B6BCD1,  /* -5.7105488777160645f */
	    0x3F800000,  /* 1.0f */
	    0x3F0BB247,  /* 0.545689046382904f */
	    0x3F0D80E1,  /* 0.5527477860450745f */
	aobjEvent32End(),
};

u32 dEFCommonEffects3_ItemGetSwirl_AnimJoint_0x33CC[] = {
	aobjEvent32SetValAfterBlock(0x006, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfter(0x010, 0),
	    0x3E75C2E1,  /* 0.24000121653079987f */
	aobjEvent32SetVal0Rate(0x381, 0),
	    0x40567139,  /* 3.350660562515259f */
	    0x3F29E4CF,  /* 0.6636475920677185f */
	    0x3F1D5256,  /* 0.6145375967025757f */
	    0x3F29E4CF,  /* 0.6636475920677185f */
	aobjEvent32SetValRate(0x060, 0),
	    0xC2BD0DCF,  /* -94.52696990966797f */
	    0x413E1477,  /* 11.879996299743652f */
	    0x42A1ACB4,  /* 80.83731079101562f */
	    0x41956042,  /* 18.672000885009766f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetVal0RateBlock(0x3E1, 8),
	    0x4035BBE3,  /* 2.839592695236206f */
	    0x40B6BC8C,  /* 5.710515975952148f */
	    0x436E61E0,  /* 238.38232421875f */
	    0x3F800000,  /* 1.0f */
	    0x3F0BB247,  /* 0.545689046382904f */
	    0x3F0D80E1,  /* 0.5527477860450745f */
	aobjEvent32End(),
};

u32 dEFCommonEffects3_ItemGetSwirl_AnimJoint_0x342C[] = {
	aobjEvent32SetValAfterBlock(0x006, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfter(0x010, 0),
	    0x3E75C2E1,  /* 0.24000121653079987f */
	aobjEvent32SetVal0Rate(0x381, 0),
	    0xBFAD4C0E,  /* -1.3538835048675537f */
	    0x3F29E4CF,  /* 0.6636475920677185f */
	    0x3F1D5256,  /* 0.6145375967025757f */
	    0x3F29E4CF,  /* 0.6636475920677185f */
	aobjEvent32SetValRate(0x060, 0),
	    0xC2A1ACB8,  /* -80.83734130859375f */
	    0xC1956042,  /* -18.672000885009766f */
	    0xC2BD0DCC,  /* -94.52694702148438f */
	    0x413E147B,  /* 11.880000114440918f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetVal0RateBlock(0x3E1, 8),
	    0xBFEFB7CB,  /* -1.8727964162826538f */
	    0xC36E61E2,  /* -238.38235473632812f */
	    0x40B6BCE4,  /* 5.71055793762207f */
	    0x3F800000,  /* 1.0f */
	    0x3F0BB247,  /* 0.545689046382904f */
	    0x3F0D80E1,  /* 0.5527477860450745f */
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x3490 to 0x3530 (160 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x34A8[];
extern u32 dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x34C4[];
extern u32 dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x34E0[];
extern u32 dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x34FC[];
extern u32 dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x3518[];
extern u32 dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x351C[];
extern u32 dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x3520[];
extern u32 dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x3524[];

AObjEvent32 *dEFCommonEffects3_ItemGetSwirl_MatAnimJoint[6] = {
	NULL,
	NULL,
	(AObjEvent32 *)dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x3518,
	(AObjEvent32 *)dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x351C,
	(AObjEvent32 *)dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x3520,
	(AObjEvent32 *)dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x3524,
};

u32 dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x34A8[] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0x4CFFFFFF,  /* 134217720.0f */
	aobjEvent32SetExtValBlock(0x001, 5),
	    0x1CFFB0FF,  /* 1.6920236913971645e-21f */
	aobjEvent32SetExtValBlock(0x001, 3),
	    0x00FF808D,  /* 2.3464166851450224e-38f */
	aobjEvent32End(),
};

u32 dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x34C4[] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0x4CFFFFFF,  /* 134217720.0f */
	aobjEvent32SetExtValBlock(0x001, 5),
	    0x1CFFB0FF,  /* 1.6920236913971645e-21f */
	aobjEvent32SetExtValBlock(0x001, 3),
	    0x00FF808D,  /* 2.3464166851450224e-38f */
	aobjEvent32End(),
};

u32 dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x34E0[] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0x4CFFFFFF,  /* 134217720.0f */
	aobjEvent32SetExtValBlock(0x001, 5),
	    0x1CFFB0FF,  /* 1.6920236913971645e-21f */
	aobjEvent32SetExtValBlock(0x001, 3),
	    0x00FF808D,  /* 2.3464166851450224e-38f */
	aobjEvent32End(),
};

u32 dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x34FC[] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0x4CFFFFFF,  /* 134217720.0f */
	aobjEvent32SetExtValBlock(0x001, 5),
	    0x1CFFB0FF,  /* 1.6920236913971645e-21f */
	aobjEvent32SetExtValBlock(0x001, 3),
	    0x00FF808D,  /* 2.3464166851450224e-38f */
	aobjEvent32End(),
};

u32 dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x3518[] = {
	(u32)(dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x34A8),
};

u32 dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x351C[] = {
	(u32)(dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x34C4),
};

u32 dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x3520[] = {
	(u32)(dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x34E0),
};

u32 dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x3524[] = {
	(u32)(dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x34FC),
	aobjEvent32End(),
};

PAD(4);

