/* relocData file 118: StageYosterSmallFile2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* Vtx pool @ 0x0000 (4 vertices) — referenced by DL_0x0410 gsSPVertex */
Vtx dStageYosterSmallFile2_Vtx_0x0000_Vtx[4] = {
	#include <StageYosterSmallFile2/Vtx_0x0000.vtx.inc.c>
};

/* Vtx pool @ 0x0040 (4 vertices) — referenced by DL_0x0480 gsSPVertex */
Vtx dStageYosterSmallFile2_Vtx_0x0040_Vtx[4] = {
	#include <StageYosterSmallFile2/Vtx_0x0040.vtx.inc.c>
};

/* Vtx: Vtx_0x0080_Vtx @ 0x80 (8 vertices) */
Vtx dStageYosterSmallFile2_Vtx_0x0080_Vtx[8] = {
	#include <StageYosterSmallFile2/Vtx_0x0080.vtx.inc.c>
};

/* Vtx: Vtx_0x0100 @ 0x100 (5 vertices) */
Vtx dStageYosterSmallFile2_Vtx_0x0100_Vtx[5] = {
	#include <StageYosterSmallFile2/Vtx_0x0100.vtx.inc.c>
};

/* Vtx pool @ 0x0150 (3 vertices) */
Vtx dStageYosterSmallFile2_Vtx_0x0150_Vtx[3] = {
	#include <StageYosterSmallFile2/Vtx_0x0150.vtx.inc.c>
};

/* Vtx pool @ 0x0180 (2 vertices) — referenced by gap_0x03C0_sub_0xE8 gsSPVertex */
Vtx dStageYosterSmallFile2_Vtx_0x0180_Vtx[2] = {
	#include <StageYosterSmallFile2/Vtx_0x0180.vtx.inc.c>
};

/* Vtx: Vtx_0x01A0 @ 0x1A0 (1 vertices) */
Vtx dStageYosterSmallFile2_Vtx_0x01A0_Vtx[1] = {
	#include <StageYosterSmallFile2/Vtx_0x01A0.vtx.inc.c>
};

/* Vtx pool @ 0x01B0 (1 vertex) */
Vtx dStageYosterSmallFile2_Vtx_0x01B0_Vtx[1] = {
	#include <StageYosterSmallFile2/Vtx_0x01B0.vtx.inc.c>
};

/* Vtx: gap_0x01B0_sub_0x10 @ 0x1C0 (3 vertices) */
Vtx dStageYosterSmallFile2_gap_0x01B0_sub_0x10[3] = {
	#include <StageYosterSmallFile2/gap_0x01B0_sub_0x10.vtx.inc.c>
};

/* Vtx: Vtx_0x01F0_Vtx @ 0x1F0 (6 vertices) */
Vtx dStageYosterSmallFile2_Vtx_0x01F0_Vtx[6] = {
	#include <StageYosterSmallFile2/Vtx_0x01F0.vtx.inc.c>
};

/* Vtx: Vtx_0x0250 @ 0x250 (4 vertices) */
Vtx dStageYosterSmallFile2_Vtx_0x0250_Vtx[4] = {
	#include <StageYosterSmallFile2/Vtx_0x0250.vtx.inc.c>
};

/* Vtx: Vtx_0x0290_Vtx @ 0x290 (4 vertices) */
Vtx dStageYosterSmallFile2_Vtx_0x0290_Vtx[4] = {
	#include <StageYosterSmallFile2/Vtx_0x0290.vtx.inc.c>
};

/* Vtx: Vtx_0x02D0 @ 0x2D0 (4 vertices) */
Vtx dStageYosterSmallFile2_Vtx_0x02D0_Vtx[4] = {
	#include <StageYosterSmallFile2/Vtx_0x02D0.vtx.inc.c>
};

/* Vtx: Vtx_0x0310 @ 0x310 (4 vertices) */
Vtx dStageYosterSmallFile2_Vtx_0x0310_Vtx[4] = {
	#include <StageYosterSmallFile2/Vtx_0x0310.vtx.inc.c>
};

/* Vtx: Vtx_0x0350 @ 0x350 (3 vertices) */
Vtx dStageYosterSmallFile2_Vtx_0x0350_Vtx[3] = {
	#include <StageYosterSmallFile2/Vtx_0x0350.vtx.inc.c>
};

/* Vtx: Vtx_0x0380 @ 0x380 (3 vertices) */
Vtx dStageYosterSmallFile2_Vtx_0x0380_Vtx[3] = {
	#include <StageYosterSmallFile2/Vtx_0x0380.vtx.inc.c>
};

/* Vtx: Vtx_0x03B0 @ 0x3B0 (1 vertices) */
Vtx dStageYosterSmallFile2_Vtx_0x03B0_Vtx[1] = {
	#include <StageYosterSmallFile2/Vtx_0x03B0.vtx.inc.c>
};

/* Raw data from file offset 0x03C0 to 0x0A88 (1736 bytes) */
/* gap sub-block @ 0x03C0 (was gap+0x0, 80 bytes) */
Gfx dStageYosterSmallFile2_DL_0x03C0[10] = {
	#include <StageYosterSmallFile2/DL_0x03C0.dl.inc.c>
};

/* gap sub-block @ 0x0410 (was gap+0x50, 112 bytes) */
Gfx dStageYosterSmallFile2_DL_0x0410[14] = {
	#include <StageYosterSmallFile2/DL_0x0410.dl.inc.c>
};

/* gap sub-block @ 0x0480 (was gap+0xC0, 40 bytes) */
Gfx dStageYosterSmallFile2_DL_0x0480[5] = {
	#include <StageYosterSmallFile2/DL_0x0480.dl.inc.c>
};

/* Merged Gfx DL @ 0xE8 — 2 blocks merged because
 * the head wasn't terminated with gsSPEndDisplayList; runtime
 * walks straight through. */
Gfx dStageYosterSmallFile2_gap_0x03C0_sub_0xE8[76] = {
	#include <StageYosterSmallFile2/gap_0x03C0_sub_0xE8.dl.inc.c>
};

/* Merged Gfx DL @ 0x348 — 2 blocks merged because
 * the head wasn't terminated with gsSPEndDisplayList; runtime
 * walks straight through. */
Gfx dStageYosterSmallFile2_gap_0x03C0_sub_0x348[19] = {
	#include <StageYosterSmallFile2/gap_0x03C0_sub_0x348.dl.inc.c>
};

/* gap sub-block @ 0x07A0 (was gap+0x3E0, 344 bytes) */
Gfx dStageYosterSmallFile2_DL_0x07A0[43] = {
	#include <StageYosterSmallFile2/DL_0x07A0.dl.inc.c>
};

/* gap sub-block @ 0x08F8 (was gap+0x538, 128 bytes) */
Gfx dStageYosterSmallFile2_DL_0x08F8[16] = {
	#include <StageYosterSmallFile2/DL_0x08F8.dl.inc.c>
};

/* gap sub-block @ 0x0978 (was gap+0x5B8, 32 bytes) */
Gfx dStageYosterSmallFile2_DL_0x0978[4] = {
	#include <StageYosterSmallFile2/DL_0x0978.dl.inc.c>
};

/* gap sub-block @ 0x0998 (was gap+0x5D8, 40 bytes) */
Gfx dStageYosterSmallFile2_DL_0x0998[5] = {
	#include <StageYosterSmallFile2/DL_0x0998.dl.inc.c>
};

/* gap sub-block @ 0x09C0 (was gap+0x600, 32 bytes) */
Gfx dStageYosterSmallFile2_DL_0x09C0[4] = {
	#include <StageYosterSmallFile2/DL_0x09C0.dl.inc.c>
};

/* gap sub-block @ 0x09E0 (was gap+0x620, 32 bytes) */
Gfx dStageYosterSmallFile2_DL_0x09E0[4] = {
	#include <StageYosterSmallFile2/DL_0x09E0.dl.inc.c>
};

/* gap sub-block @ 0x0A00 (was gap+0x640, 32 bytes) */
Gfx dStageYosterSmallFile2_DL_0x0A00[4] = {
	#include <StageYosterSmallFile2/DL_0x0A00.dl.inc.c>
};

/* gap sub-block @ 0x0A20 (was gap+0x660, 32 bytes) */
Gfx dStageYosterSmallFile2_DL_0x0A20[4] = {
	#include <StageYosterSmallFile2/DL_0x0A20.dl.inc.c>
};

/* Merged Gfx DL @ 0x680 — 2 blocks merged because
 * the head wasn't terminated with gsSPEndDisplayList; runtime
 * walks straight through. */
Gfx dStageYosterSmallFile2_gap_0x03C0_sub_0x680[9] = {
	#include <StageYosterSmallFile2/gap_0x03C0_sub_0x680.dl.inc.c>
};

/* DObjDesc: Layer0DObj @ 0xA88 (15 entries) */
DObjDesc dStageYosterSmallFile2_Layer0DObj[] = {
	{ 0, (void*)0x00000000, { 0.0001140000022132881f, 0.0f, 0.0001140000022132881f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageYosterSmallFile2_DL_0x03C0, { 887.4002075195312f, 1080.0f, -1799.9998779296875f }, { 0.0f, 0.0f, 5.841399192810059f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageYosterSmallFile2_DL_0x0480, { -1500.0003662109375f, 60.00001525878906f, -1584.0010986328125f }, { 0.0f, 0.0f, 0.441785991191864f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageYosterSmallFile2_gap_0x03C0_sub_0xE8, { 0.0f, 0.0f, 0.0001720000000204891f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageYosterSmallFile2_gap_0x03C0_sub_0x348, { 138.6901092529297f, 903.6001586914062f, -933.5997924804688f }, { 0.0f, 0.0f, 0.4115299880504608f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageYosterSmallFile2_DL_0x07A0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageYosterSmallFile2_DL_0x08F8, { 53.022560119628906f, 250.85641479492188f, -837.2098999023438f }, { 0.0f, 0.0f, 2.967060089111328f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageYosterSmallFile2_DL_0x0978, { 692.7176513671875f, 413.430419921875f, -837.2098999023438f }, { 0.0f, 0.0f, 3.9269909858703613f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageYosterSmallFile2_DL_0x0998, { -490.6918640136719f, 483.9459228515625f, -837.2099609375f }, { 0.0f, 0.0f, 2.356194019317627f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageYosterSmallFile2_DL_0x09C0, { 827.814208984375f, 950.05029296875f, -837.2099609375f }, { 0.0f, 0.0f, 4.71238899230957f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageYosterSmallFile2_DL_0x09E0, { -570.9690551757812f, 950.05029296875f, -837.2099609375f }, { 0.0f, 0.0f, 1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageYosterSmallFile2_DL_0x0A00, { 692.7176513671875f, 1437.642333984375f, -837.2099609375f }, { 0.0f, 0.0f, 5.497786998748779f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageYosterSmallFile2_DL_0x0A20, { -473.24542236328125f, 1442.763916015625f, -837.2099609375f }, { 0.0f, 0.0f, 0.785398006439209f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageYosterSmallFile2_gap_0x03C0_sub_0x680, { 87.81080627441406f, 1604.2396240234375f, -837.2099609375f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(4);

/* Raw data from file offset 0x0D20 to 0x37F0 (10960 bytes) */
/* Split AnimJoint blob: forward decls for sub-scripts. */
extern u32 dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x38[6];
extern u32 dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x50[6];
extern u32 dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x68[28];
extern u32 dStageYosterSmallFile2_Layer0Anim_AnimJoint_0xD8[245];
extern u32 dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x4AC[263];
extern u32 dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x8C8[245];
extern u32 dStageYosterSmallFile2_Layer0Anim_AnimJoint_0xC9C[166];
extern u32 dStageYosterSmallFile2_Layer0Anim_AnimJoint_0xF34[170];
extern u32 dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x11DC[251];
extern u32 dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x15C8[245];
extern u32 dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x199C[170];
extern Vtx dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x1C50[8];
extern Vtx dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x1CD0[16];
extern Vtx dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x1DD0[7];
extern Vtx dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x1E40[4];
extern Vtx dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x1E80[4];
extern Vtx dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x1EC0[16];
extern Vtx dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x1FC0[32];
extern Vtx dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x21C0[4];
extern Vtx dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x2200[32];
extern Vtx dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x2400[4];
extern Vtx dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x2440[4];
extern Vtx dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x2480[8];
extern Vtx dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x2500[8];
extern Vtx dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x2580[8];
extern Gfx dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x2600[154];

AObjEvent32 *dStageYosterSmallFile2_Layer0Anim_AnimJoint[14] = {
	NULL,
	(AObjEvent32 *)dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x38,
	(AObjEvent32 *)dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x50,
	NULL,
	(AObjEvent32 *)dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x68,
	NULL,
	(AObjEvent32 *)dStageYosterSmallFile2_Layer0Anim_AnimJoint_0xD8,
	(AObjEvent32 *)dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x4AC,
	(AObjEvent32 *)dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x8C8,
	(AObjEvent32 *)dStageYosterSmallFile2_Layer0Anim_AnimJoint_0xC9C,
	(AObjEvent32 *)dStageYosterSmallFile2_Layer0Anim_AnimJoint_0xF34,
	(AObjEvent32 *)dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x11DC,
	(AObjEvent32 *)dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x15C8,
	(AObjEvent32 *)dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x199C,
};

u32 dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x38[6] = {
	aobjEvent32SetValBlock(0x004, 0),
	    0x40C90FDB,  /* 6.2831854820251465f */
	aobjEvent32SetValBlock(0x004, 640),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x38,
};

u32 dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x50[6] = {
	aobjEvent32SetValBlock(0x004, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x004, 640),
	    0x40C90FDB,  /* 6.2831854820251465f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x50,
};

u32 dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x68[28] = {
	aobjEvent32SetValRateBlock(0x004, 0),
	    0x00000000,  /* 0.0f */
	    0x3CBC0AEB,  /* 0.0229544248431921f */
	aobjEvent32SetVal0RateBlock(0x004, 32),
	    0x3F060A92,  /* 0.5235987901687622f */
	aobjEvent32SetVal0RateBlock(0x004, 64),
	    0xBF060A92,  /* -0.5235987901687622f */
	aobjEvent32SetVal0RateBlock(0x004, 64),
	    0x3F060A92,  /* 0.5235987901687622f */
	aobjEvent32SetVal0RateBlock(0x004, 64),
	    0xBF060A92,  /* -0.5235987901687622f */
	aobjEvent32SetVal0RateBlock(0x004, 64),
	    0x3F060A92,  /* 0.5235987901687622f */
	aobjEvent32SetVal0RateBlock(0x004, 64),
	    0xBF060A92,  /* -0.5235987901687622f */
	aobjEvent32SetVal0RateBlock(0x004, 64),
	    0x3F060A92,  /* 0.5235987901687622f */
	aobjEvent32SetVal0RateBlock(0x004, 64),
	    0xBF060A92,  /* -0.5235987901687622f */
	aobjEvent32SetVal0RateBlock(0x004, 64),
	    0x3F060A92,  /* 0.5235987901687622f */
	aobjEvent32SetVal0RateBlock(0x004, 64),
	    0xBF060A92,  /* -0.5235987901687622f */
	aobjEvent32SetValRateBlock(0x004, 32),
	    0x00000000,  /* 0.0f */
	    0x3CC90D1F,  /* 0.024542389437556267f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x68,
};

u32 dStageYosterSmallFile2_Layer0Anim_AnimJoint_0xD8[245] = {
	aobjEvent32SetValBlock(0x030, 0),
	    0x42266DBD,  /* 41.6071662902832f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DBD,  /* 41.6071662902832f */
	    0x433A1892,  /* 186.09597778320312f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CB8,  /* 59.871795654296875f */
	    0x4390DB39,  /* 289.7126770019531f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DBD,  /* 41.6071662902832f */
	    0x433A1892,  /* 186.09597778320312f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CB8,  /* 59.871795654296875f */
	    0x4390DB39,  /* 289.7126770019531f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DBD,  /* 41.6071662902832f */
	    0x433A1892,  /* 186.09597778320312f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CB8,  /* 59.871795654296875f */
	    0x4390DB39,  /* 289.7126770019531f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DBD,  /* 41.6071662902832f */
	    0x433A1892,  /* 186.09597778320312f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CB8,  /* 59.871795654296875f */
	    0x4390DB39,  /* 289.7126770019531f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DBD,  /* 41.6071662902832f */
	    0x433A1892,  /* 186.09597778320312f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CB8,  /* 59.871795654296875f */
	    0x4390DB39,  /* 289.7126770019531f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DBD,  /* 41.6071662902832f */
	    0x433A1892,  /* 186.09597778320312f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CB8,  /* 59.871795654296875f */
	    0x4390DB39,  /* 289.7126770019531f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DBD,  /* 41.6071662902832f */
	    0x433A1892,  /* 186.09597778320312f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB39,  /* 289.7126770019531f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DBD,  /* 41.6071662902832f */
	    0x433A1892,  /* 186.09597778320312f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CB8,  /* 59.871795654296875f */
	    0x4390DB39,  /* 289.7126770019531f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DBD,  /* 41.6071662902832f */
	    0x433A1892,  /* 186.09597778320312f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CB8,  /* 59.871795654296875f */
	    0x4390DB39,  /* 289.7126770019531f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DBD,  /* 41.6071662902832f */
	    0x433A1892,  /* 186.09597778320312f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CB8,  /* 59.871795654296875f */
	    0x4390DB39,  /* 289.7126770019531f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dStageYosterSmallFile2_Layer0Anim_AnimJoint_0xD8,
};

u32 dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x4AC[263] = {
	aobjEvent32SetValBlock(0x030, 0),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF91,  /* 441.3716125488281f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF91,  /* 441.3716125488281f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF91,  /* 441.3716125488281f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF91,  /* 441.3716125488281f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF91,  /* 441.3716125488281f */
	aobjEvent32SetVal(0x010, 9),
	    0x4438D77F,  /* 739.3671264648438f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetVal(0x020, 8),
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32Wait(1),
	aobjEvent32SetValBlock(0x010, 7),
	    0x44262E96,  /* 664.7279052734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetVal(0x010, 10),
	    0x4438D77F,  /* 739.3671264648438f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetVal(0x020, 8),
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32Wait(2),
	aobjEvent32SetValBlock(0x010, 6),
	    0x44262E96,  /* 664.7279052734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetVal(0x020, 10),
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	aobjEvent32SetVal(0x010, 8),
	    0x44262E96,  /* 664.7279052734375f */
	aobjEvent32Wait(2),
	aobjEvent32SetValBlock(0x020, 6),
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF91,  /* 441.3716125488281f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF91,  /* 441.3716125488281f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF91,  /* 441.3716125488281f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF91,  /* 441.3716125488281f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF91,  /* 441.3716125488281f */
	aobjEvent32SetVal(0x010, 9),
	    0x4438D77F,  /* 739.3671264648438f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetVal(0x020, 8),
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32Wait(1),
	aobjEvent32SetValBlock(0x010, 7),
	    0x44262E96,  /* 664.7279052734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetVal(0x010, 10),
	    0x4438D77F,  /* 739.3671264648438f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetVal(0x020, 8),
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32Wait(2),
	aobjEvent32SetValBlock(0x010, 6),
	    0x44262E96,  /* 664.7279052734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetVal(0x020, 10),
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	aobjEvent32SetVal(0x010, 8),
	    0x44262E96,  /* 664.7279052734375f */
	aobjEvent32Wait(2),
	aobjEvent32SetValBlock(0x020, 6),
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x4AC,
};

u32 dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x8C8[245] = {
	aobjEvent32SetValBlock(0x030, 0),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655D9,  /* -537.3413696289062f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E2,  /* -462.70220947265625f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655D9,  /* -537.3413696289062f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E2,  /* -462.70220947265625f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655D9,  /* -537.3413696289062f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E2,  /* -462.70220947265625f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655D9,  /* -537.3413696289062f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E2,  /* -462.70220947265625f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655D9,  /* -537.3413696289062f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E2,  /* -462.70220947265625f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F3,  /* 437.2964782714844f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F3,  /* 437.2964782714844f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F3,  /* 437.2964782714844f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F3,  /* 437.2964782714844f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F3,  /* 437.2964782714844f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F3,  /* 437.2964782714844f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F3,  /* 437.2964782714844f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655D9,  /* -537.3413696289062f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E2,  /* -462.70220947265625f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655D9,  /* -537.3413696289062f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E2,  /* -462.70220947265625f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655D9,  /* -537.3413696289062f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E2,  /* -462.70220947265625f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655D9,  /* -537.3413696289062f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E2,  /* -462.70220947265625f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655D9,  /* -537.3413696289062f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E2,  /* -462.70220947265625f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F3,  /* 437.2964782714844f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F3,  /* 437.2964782714844f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F3,  /* 437.2964782714844f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F3,  /* 437.2964782714844f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F3,  /* 437.2964782714844f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F3,  /* 437.2964782714844f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F3,  /* 437.2964782714844f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x8C8,
};

u32 dStageYosterSmallFile2_Layer0Anim_AnimJoint_0xC9C[166] = {
	aobjEvent32SetVal(0x010, 0),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValAfter(0x020, 0),
	    0x446D8338,  /* 950.05029296875f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B0B,  /* 893.6725463867188f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B0B,  /* 893.6725463867188f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B0B,  /* 893.6725463867188f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B0B,  /* 893.6725463867188f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B0B,  /* 893.6725463867188f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 9),
	    0x445F6B0B,  /* 893.6725463867188f */
	aobjEvent32SetValBlock(0x010, 7),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B0B,  /* 893.6725463867188f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B0B,  /* 893.6725463867188f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B0B,  /* 893.6725463867188f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B0B,  /* 893.6725463867188f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B0B,  /* 893.6725463867188f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 9),
	    0x445F6B0B,  /* 893.6725463867188f */
	aobjEvent32SetValBlock(0x010, 7),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dStageYosterSmallFile2_Layer0Anim_AnimJoint_0xC9C,
};

u32 dStageYosterSmallFile2_Layer0Anim_AnimJoint_0xF34[170] = {
	aobjEvent32SetVal(0x010, 0),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValAfter(0x020, 0),
	    0x446D8338,  /* 950.05029296875f */
	aobjEvent32SetValBlock(0x010, 3),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 5),
	    0xC41F34F3,  /* -636.8273315429688f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F3,  /* -636.8273315429688f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F3,  /* -636.8273315429688f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F3,  /* -636.8273315429688f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F3,  /* -636.8273315429688f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 3),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 5),
	    0xC41F34F3,  /* -636.8273315429688f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F3,  /* -636.8273315429688f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F3,  /* -636.8273315429688f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F3,  /* -636.8273315429688f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F3,  /* -636.8273315429688f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dStageYosterSmallFile2_Layer0Anim_AnimJoint_0xF34,
};

u32 dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x11DC[251] = {
	aobjEvent32SetValBlock(0x030, 0),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C2,  /* 1484.211181640625f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C2,  /* 1484.211181640625f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C2,  /* 1484.211181640625f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C2,  /* 1484.211181640625f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetVal(0x020, 9),
	    0x44B986C2,  /* 1484.211181640625f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	aobjEvent32SetVal(0x010, 8),
	    0x44262E96,  /* 664.7279052734375f */
	aobjEvent32Wait(1),
	aobjEvent32SetValBlock(0x020, 7),
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C2,  /* 1484.211181640625f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C2,  /* 1484.211181640625f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C2,  /* 1484.211181640625f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C2,  /* 1484.211181640625f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetVal(0x020, 9),
	    0x44B986C2,  /* 1484.211181640625f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	aobjEvent32SetVal(0x010, 8),
	    0x44262E96,  /* 664.7279052734375f */
	aobjEvent32Wait(1),
	aobjEvent32SetValBlock(0x020, 7),
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x11DC,
};

u32 dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x15C8[245] = {
	aobjEvent32SetValBlock(0x030, 0),
	    0xC3DEA4EF,  /* -445.2885437011719f */
	    0x44B0DA50,  /* 1414.822265625f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4EF,  /* -445.2885437011719f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4EF,  /* -445.2885437011719f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C5,  /* -519.8401489257812f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4EF,  /* -445.2885437011719f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C5,  /* -519.8401489257812f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4EF,  /* -445.2885437011719f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C5,  /* -519.8401489257812f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4EF,  /* -445.2885437011719f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C5,  /* -519.8401489257812f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4EF,  /* -445.2885437011719f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C5,  /* -519.8401489257812f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4EF,  /* -445.2885437011719f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4EF,  /* -445.2885437011719f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4EF,  /* -445.2885437011719f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C5,  /* -519.8401489257812f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4EF,  /* -445.2885437011719f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C5,  /* -519.8401489257812f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4EF,  /* -445.2885437011719f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C5,  /* -519.8401489257812f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4EF,  /* -445.2885437011719f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C5,  /* -519.8401489257812f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4EF,  /* -445.2885437011719f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C5,  /* -519.8401489257812f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4EF,  /* -445.2885437011719f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x15C8,
};

u32 dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x199C[170] = {
	aobjEvent32SetVal(0x020, 0),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValAfter(0x010, 0),
	    0x42AF9F22,  /* 87.81080627441406f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 7),
	    0x44D0C321,  /* 1670.0977783203125f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C321,  /* 1670.0977783203125f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C321,  /* 1670.0977783203125f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C321,  /* 1670.0977783203125f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C321,  /* 1670.0977783203125f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 9),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 7),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 7),
	    0x44D0C321,  /* 1670.0977783203125f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C321,  /* 1670.0977783203125f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C321,  /* 1670.0977783203125f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C321,  /* 1670.0977783203125f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C321,  /* 1670.0977783203125f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 9),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 7),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x199C,
};
PAD(12);

Vtx dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x1C50[8] = {
	#include <StageYosterSmallFile2/Layer0Anim_AnimJoint_0x1C50.vtx.inc.c>
};

Vtx dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x1CD0[16] = {
	#include <StageYosterSmallFile2/Layer0Anim_AnimJoint_0x1CD0.vtx.inc.c>
};

Vtx dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x1DD0[7] = {
	#include <StageYosterSmallFile2/Layer0Anim_AnimJoint_0x1DD0.vtx.inc.c>
};

Vtx dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x1E40[4] = {
	#include <StageYosterSmallFile2/Layer0Anim_AnimJoint_0x1E40.vtx.inc.c>
};

Vtx dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x1E80[4] = {
	#include <StageYosterSmallFile2/Layer0Anim_AnimJoint_0x1E80.vtx.inc.c>
};

Vtx dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x1EC0[16] = {
	#include <StageYosterSmallFile2/Layer0Anim_AnimJoint_0x1EC0.vtx.inc.c>
};

Vtx dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x1FC0[32] = {
	#include <StageYosterSmallFile2/Layer0Anim_AnimJoint_0x1FC0.vtx.inc.c>
};

Vtx dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x21C0[4] = {
	#include <StageYosterSmallFile2/Layer0Anim_AnimJoint_0x21C0.vtx.inc.c>
};

Vtx dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x2200[32] = {
	#include <StageYosterSmallFile2/Layer0Anim_AnimJoint_0x2200.vtx.inc.c>
};

Vtx dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x2400[4] = {
	#include <StageYosterSmallFile2/Layer0Anim_AnimJoint_0x2400.vtx.inc.c>
};

Vtx dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x2440[4] = {
	#include <StageYosterSmallFile2/Layer0Anim_AnimJoint_0x2440.vtx.inc.c>
};

Vtx dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x2480[8] = {
	#include <StageYosterSmallFile2/Layer0Anim_AnimJoint_0x2480.vtx.inc.c>
};

Vtx dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x2500[8] = {
	#include <StageYosterSmallFile2/Layer0Anim_AnimJoint_0x2500.vtx.inc.c>
};

Vtx dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x2580[8] = {
	#include <StageYosterSmallFile2/Layer0Anim_AnimJoint_0x2580.vtx.inc.c>
};

Gfx dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x2600[154] = {
	#include <StageYosterSmallFile2/Layer0Anim_AnimJoint_0x2600.dl.inc.c>
};

/* DObjDesc: Layer1DObj @ 0x37F0 (3 entries) */
DObjDesc dStageYosterSmallFile2_Layer1DObj[] = {
	{ 0, (void*)0x00000000, { 0.0001140000022132881f, 0.0f, 0.0002859999949578196f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageYosterSmallFile2_Layer0Anim_AnimJoint_0x2600, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x3874 to 0x39F0 (380 bytes) */
/* MPVertexData[15] @ 0x3874 — MPGeometryData.vertex_data (2 bytes pad; compiler 4-aligns next decl) */
MPVertexData dStageYosterSmallFile2_gap_0x3874[15] = {
	{ { -2125,  -708 }, 0x0000 },
	{ {     0,  -975 }, 0x0000 },
	{ {  2126,  -714 }, 0x0000 },
	{ {  2023,   -51 }, 0x8000 },
	{ {   155,  -384 }, 0x8000 },
	{ {  -155,  -384 }, 0x8000 },
	{ { -2029,   -40 }, 0x0000 },
	{ {  -821,  1731 }, 0x4000 },
	{ {  -556,  1731 }, 0x4000 },
	{ {   474,  1785 }, 0x4000 },
	{ {   803,  1785 }, 0x0000 },
	{ {  -528,   479 }, 0x4000 },
	{ { -1545,   703 }, 0x0000 },
	{ {  1655,  1010 }, 0x4000 },
	{ {   454,   725 }, 0x0000 },
};

/* MPVertexArray (20 IDs) @ 0x38D0 — vertex_id table (MPGeometryData.vertex_id) */
u16 dStageYosterSmallFile2_gap_0x3874_sub_0x5C[20] = {
	  7,   8,   9,  10,  13,  14,  11,  12,   3,   4,   5,   6,   0,   1,   2,   2,
	  3,   6,   0,   0,
};

/* MPVertexLinks[7] @ 0x38F8 — line vertex pairs (MPGeometryData.vertex_links) */
MPVertexLinks dStageYosterSmallFile2_gap_0x3874_sub_0x84[7] = {
	{   0, 4 }, {   4, 2 }, {   6, 2 }, {   8, 4 }, {  12, 3 }, {  15, 2 },
	{  17, 2 },
};

/* MPLineInfo[1] @ 0x3914 — yakumono line groups (MPGeometryData.line_info) */
MPLineInfo dStageYosterSmallFile2_gap_0x3874_sub_0xA0[1] = {
	{ 1, { {  0,   4}, {  4,   1}, {  5,   1}, {  6,   1} } },
};

/* MPMapObjData[33] @ 0x3928 — map objects (MPGeometryData.mapobjs); 2 bytes pad to align next decl */
MPMapObjData dStageYosterSmallFile2_gap_0x3874_sub_0xB4[33] = {
	{  37, { -1110,   930 } },
	{  38, {  1259,  1319 } },
	{  39, {     0,  2250 } },
	{  33, {    29,  -180 } },
	{  24, {   749,  -156 } },
	{  25, {  1529,    23 } },
	{  26, {  -630,  -191 } },
	{  27, { -1200,   -77 } },
	{  28, {  -840,   786 } },
	{  29, {  1110,  1178 } },
	{  30, {  -119,  2085 } },
	{  31, {   -60,  -218 } },
	{   4, {   519,  3612 } },
	{   4, {  1872,   863 } },
	{   4, {  -506,  3519 } },
	{   4, {  1467,  2559 } },
	{   4, { -1251,  2049 } },
	{   4, { -1016,  1386 } },
	{   4, {   252,   455 } },
	{   4, {  -293,   791 } },
	{   4, { -1866,   971 } },
	{   4, {  1007,  1941 } },
	{  21, {    29,  -293 } },
	{   0, {   629,  -180 } },
	{   1, {    90,  2085 } },
	{   2, {   900,  1140 } },
	{   3, {  -990,   828 } },
	{  32, {     0,  2820 } },
	{  43, {  1553,  3641 } },
	{  43, {  2700,  3629 } },
	{  43, { -1245,  3644 } },
	{  43, { -2550,  3539 } },
	{  43, {     0,  3690 } },
};

/* MPGeometryData @ 0x39F0 (28 bytes) */
MPGeometryData dStageYosterSmallFile2_MPGeometryData_0x39F0 = {
	1,
	(MPVertexPosContainer*)dStageYosterSmallFile2_gap_0x3874,
	(MPVertexArray*)dStageYosterSmallFile2_gap_0x3874_sub_0x5C,
	dStageYosterSmallFile2_gap_0x3874_sub_0x84,
	dStageYosterSmallFile2_gap_0x3874_sub_0xA0,
	33,
	(MPMapObjContainer*)dStageYosterSmallFile2_gap_0x3874_sub_0xB4,
};

PAD(4);

/* Vtx pool @ 0x3A10 (12 vertices) — drawn by DL_0x3B50 */
Vtx dStageYosterSmallFile2_Vtx_0x3A10_Vtx[12] = {
	#include <StageYosterSmallFile2/Vtx_0x3A10.vtx.inc.c>
};

/* Vtx pool @ 0x3AD0 (8 vertices) — drawn by DL_0x3B50 */
Vtx dStageYosterSmallFile2_Vtx_0x3AD0_Vtx[8] = {
	#include <StageYosterSmallFile2/Vtx_0x3AD0.vtx.inc.c>
};

/* Gfx DL @ 0x3B50 — referenced by Layer2DObj; draws the two vtx pools above */
Gfx dStageYosterSmallFile2_DL_0x3B50[43] = {
	#include <StageYosterSmallFile2/DL_0x3B50.dl.inc.c>
};

/* DObjDesc: Layer2DObj @ 0x3CA8 (3 entries) */
DObjDesc dStageYosterSmallFile2_Layer2DObj[] = {
	{ 0, (void*)0x00000000, { 0.0001140000022132881f, 0.0f, 0.0001140000022132881f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageYosterSmallFile2_DL_0x3B50, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x3D2C to 0x4498 (1900 bytes) */
PAD(4);

/* gap sub-block @ 0x3D30 (was gap+0x4, 64 bytes) */
Vtx dStageYosterSmallFile2_gap_0x3D2C_sub_0x4[4] = {
	#include <StageYosterSmallFile2/gap_0x3D2C_sub_0x4.vtx.inc.c>
};

/* gap sub-block @ 0x3D70 (was gap+0x44, 64 bytes) */
Vtx dStageYosterSmallFile2_gap_0x3D2C_sub_0x44[4] = {
	#include <StageYosterSmallFile2/gap_0x3D2C_sub_0x44.vtx.inc.c>
};

/* gap sub-block @ 0x3DB0 (was gap+0x84, 64 bytes) */
Vtx dStageYosterSmallFile2_gap_0x3D2C_sub_0x84[4] = {
	#include <StageYosterSmallFile2/gap_0x3D2C_sub_0x84.vtx.inc.c>
};

/* gap sub-block @ 0x3DF0 (was gap+0xC4, 128 bytes) */
Vtx dStageYosterSmallFile2_gap_0x3D2C_sub_0xC4[8] = {
	#include <StageYosterSmallFile2/gap_0x3D2C_sub_0xC4.vtx.inc.c>
};

/* gap sub-block @ 0x3E70 (was gap+0x144, 64 bytes) */
Vtx dStageYosterSmallFile2_gap_0x3D2C_sub_0x144[4] = {
	#include <StageYosterSmallFile2/gap_0x3D2C_sub_0x144.vtx.inc.c>
};

/* gap sub-block @ 0x3EB0 (was gap+0x184, 112 bytes) */
Vtx dStageYosterSmallFile2_gap_0x3D2C_sub_0x184[7] = {
	#include <StageYosterSmallFile2/gap_0x3D2C_sub_0x184.vtx.inc.c>
};

/* gap sub-block @ 0x3F20 (was gap+0x1F4, 64 bytes) */
Vtx dStageYosterSmallFile2_gap_0x3D2C_sub_0x1F4[4] = {
	#include <StageYosterSmallFile2/gap_0x3D2C_sub_0x1F4.vtx.inc.c>
};

/* gap sub-block @ 0x3F60 (was gap+0x234, 64 bytes) */
Vtx dStageYosterSmallFile2_gap_0x3D2C_sub_0x234[4] = {
	#include <StageYosterSmallFile2/gap_0x3D2C_sub_0x234.vtx.inc.c>
};

/* gap sub-block @ 0x3FA0 (was gap+0x274, 128 bytes) */
Vtx dStageYosterSmallFile2_gap_0x3D2C_sub_0x274[8] = {
	#include <StageYosterSmallFile2/gap_0x3D2C_sub_0x274.vtx.inc.c>
};

/* gap sub-block @ 0x4020 (was gap+0x2F4, 128 bytes) */
Vtx dStageYosterSmallFile2_gap_0x3D2C_sub_0x2F4[8] = {
	#include <StageYosterSmallFile2/gap_0x3D2C_sub_0x2F4.vtx.inc.c>
};

/* gap sub-block @ 0x40A0 (was gap+0x374, 128 bytes) */
Vtx dStageYosterSmallFile2_gap_0x3D2C_sub_0x374[8] = {
	#include <StageYosterSmallFile2/gap_0x3D2C_sub_0x374.vtx.inc.c>
};

/* gap sub-block @ 0x4120 (was gap+0x3F4, 56 bytes) */
Gfx dStageYosterSmallFile2_DL_0x4120[7] = {
	#include <StageYosterSmallFile2/DL_0x4120.dl.inc.c>
};

/* gap sub-block @ 0x4158 (was gap+0x42C, 272 bytes) */
Gfx dStageYosterSmallFile2_DL_0x4158[34] = {
	#include <StageYosterSmallFile2/DL_0x4158.dl.inc.c>
};

/* gap sub-block @ 0x4268 (was gap+0x53C, 560 bytes) */
Gfx dStageYosterSmallFile2_DL_0x4268[70] = {
	#include <StageYosterSmallFile2/DL_0x4268.dl.inc.c>
};

/* DObjDesc: Layer3DObj @ 0x4498 (4 entries) */
DObjDesc dStageYosterSmallFile2_Layer3DObj[] = {
	{ 0, (void*)0x00000000, { 0.0001140000022132881f, 0.0f, 0.0002859999949578196f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageYosterSmallFile2_DL_0x4120, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageYosterSmallFile2_DL_0x4268, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};
