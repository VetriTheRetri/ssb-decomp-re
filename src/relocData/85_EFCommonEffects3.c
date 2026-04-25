/* relocData file 85: EFCommonEffects3 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* Raw data from file offset 0x0000 to 0x0108 (264 bytes) */
/* gap sub-block @ 0x0000 (was gap+0x0, 8 bytes) */
u8 dEFCommonEffects3_gap_0x0000[8] = {
	#include <EFCommonEffects3/gap_0x0000.data.inc.c>
};

/* gap sub-block @ 0x0008 (was gap+0x8, 256 bytes) */
u8 dEFCommonEffects3_gap_0x0000_sub_0x8[256] = {
	#include <EFCommonEffects3/gap_0x0000_sub_0x8.data.inc.c>
};

/* MObjSub: MBallRays @ 0x108 */
MObjSub dEFCommonEffects3_MBallRays_MObjSub = {
	0x0000,
	0x00, 0x00,
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
u32 dEFCommonEffects3_MBallRays_MatAnimJoint[2200] = {
	aobjEvent32End(),
	aobjEvent32End(),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0xA0),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0xA8),
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0xFFFFFF80,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 5),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 25),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 20),
	    0xFFFFFF00,  /* nanf */
	aobjEvent32End(),
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0xFFFFFF80,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 5),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 25),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 20),
	    0xFFFFFF00,  /* nanf */
	aobjEvent32End(),
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0xFFFFFF80,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 5),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 25),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 20),
	    0xFFFFFF00,  /* nanf */
	aobjEvent32End(),
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0xFFFFFF80,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 5),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 25),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 20),
	    0xFFFFFF00,  /* nanf */
	aobjEvent32End(),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x10),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x34),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x58),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x7C),
	aobjEvent32End(),
	aobjEvent32End(),
	    0xDEF61801,
	aobjEvent32SetExtValBlock(0x002, 18689),
	    0x61C17A41,  /* 4.461288660715071e+20f */
	    0x92C1AB81,
	    0xD4416801,
	    0x94A5B5AD,
	    0xCE73DEF7,
	    0xEF7BFFFF,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32SetValBlock(0x2FC, 2115),
	    0x2973294B,  /* 5.399265493792431e-14f */
	    0x42115295,  /* 36.33064651489258f */
	    0x6319739D,  /* 2.8306826581632667e+21f */
	    0x842194A5,  /* -1.8993713269631408e-36f */
	    0xE73FCE73,  /* -9.057803141306008e+23f */
	    0xFFFFF7BF,  /* nanf */
	    0xDEFFD6BF,  /* -9.217566065704305e+18f */
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x003, 32767),
	    0xF77BEF37,
	    0xE6F5DE6F,
	    0xD62FC5A9,
	    0xC567B523,
	    0xAC5D9C5D,
	    0xA41B9399,
	    0x72D32973,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32SetValBlock(0x2FC, 2115),
	    0x18C7294B,  /* 5.1481989586286865e-24f */
	    0x42115295,  /* 36.33064651489258f */
	    0x6319739D,  /* 2.8306826581632667e+21f */
	    0x842194A5,  /* -1.8993713269631408e-36f */
	    0xA529B5AD,  /* -1.4719967520978786e-16f */
	    0xCE73DEF7,  /* -1022868928.0f */
	    0xEF7BFFFF,  /* -7.7990217752612474e+28f */
	aobjEvent32End(),
	aobjEvent32End(),
	    0xFFFFFFFF,
	aobjEvent32End(),
	    0xEEEEEEEE,
	aobjEvent32End(),
	    0xDDDDDDDD,
	aobjEvent32End(),
	    0xCCCCCCCC,
	aobjEvent32End(),
	    0xBBBBBBBB,
	aobjEvent32End(),
	    0xAAAAAAAA,
	aobjEvent32End(),
	    0x99999999,
	aobjEvent32End(),
	    0x78788788,
	aobjEvent32End(),
	    0x66666666,
	aobjEvent32End(),
	    0x55555555,
	aobjEvent32End(),
	    0x44444444,
	aobjEvent32End(),
	    0x33333333,
	aobjEvent32End(),
	aobjEvent32Cmd17(0x044, 8738),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x222, 4369),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
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
	aobjEvent32EndRaw(0x015, 10923),
	    0xBBBBBBBB,
	    0xBBBBBCCC,
	    0xDDEFFFFF,
	    0xFFF00000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x155, 10923),
	    0xBBBBBBBB,
	    0xBBBBBCCC,
	    0xDDDEFFFF,
	    0xFFFFF000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x155, 10922),
	    0xBBBBBBBB,
	    0xBBBBBBCC,
	    0xCDDEFFFF,
	    0xFFFFFF00,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x155, 10922),
	    0xBBBBBBBB,
	    0xBBBBBBCC,
	    0xCDDDEFFF,
	    0xFFFFFFF0,
	aobjEvent32End(),
	    0x33344444,
	    0xABBBBBBB,
	    0xBBBBBBBC,
	    0xCCDDEFFF,
	    0xFFFFFFF0,
	aobjEvent32End(),
	    0x55556666,
	    0x4BBBBBBB,
	    0xBBBBBBBC,
	    0xCCDDDEFF,
	    0xFFFFFFF0,
	aobjEvent32End(),
	    0x54354336,
	    0x6BBBBBBB,
	    0xBBBBBBBB,
	    0xCCCDDEFF,
	    0xFFFFFFF0,
	aobjEvent32End(),
	    0x63866386,
	    0x8BBBBBBB,
	    0xBBBBBBBB,
	    0xCCCDDDEF,
	    0xFFFFFFF0,
	aobjEvent32End(),
	    0x66667778,
	    0xBBBBBBBB,
	    0xBBBBBBBB,
	    0xBCCCDDEF,
	    0xFFFFFFF0,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x155, 11195),
	    0xBBBBBBBB,
	    0xBBBBBBBB,
	    0xBCCCDDDE,
	    0xFFFFFFF0,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x155, 10939),
	    0xBBBBBBBB,
	    0xBBBBBBBB,
	    0xBBCCCDDE,
	    0xFFFFFFF0,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x155, 10939),
	    0xBBBBBBBB,
	    0xBBBBBBBB,
	    0xBBCCCDDD,
	    0xEFFFFF00,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x155, 10923),
	    0xBBBBBBBB,
	    0xBBBBBBBB,
	    0xBBBCCCDD,
	    0xEFFFF000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x015, 10923),
	    0xBBBBBBBB,
	    0xBBBBBBBB,
	    0xBBBCCCDD,
	    0xDEF00000,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	    0xDDDDDDDD,
	    0xDDDDDDDD,
	    0xDDDDDDDD,
	    0xDDDDDDDD,
	    0xDDDDDDDD,
	    0xDDDDDDDD,
	    0xDDDDDDDD,
	    0xDDDDDDDD,
	    0xDDDDDDDD,
	    0xDDDDDDDD,
	    0xDDDDDDDD,
	    0xDDDDDDDD,
	    0xDDDDDDDD,
	    0xDDDDDDDD,
	    0xDDEEEEEE,
	    0xEEEEEEEE,
	    0xDDDDDDDD,
	    0xDDDDDDDD,
	    0xFEDEEFFF,
	    0xFFFFFFFF,
	    0xDDDDDDDD,
	    0xDDDDDDDE,
	    0xFFEDEFFF,
	    0xFFFFFFFF,
	    0xDDDDDDDD,
	    0xDDDDDDDF,
	    0xFFEEDEEE,
	    0xEEEEEEEE,
	    0xDDDDDDDD,
	    0xDDDDDDEF,
	    0xFFEEEDEE,
	    0xEEEEEEEE,
	    0xDDDDDDDD,
	    0xDDDDDDFF,
	    0xFEEEDDDD,
	    0xDDDDDDDD,
	    0xDDDDDDDD,
	    0xDDDDDEFF,
	    0xFEEEDDDD,
	    0xDDDDDDDD,
	    0xDDDDDDDD,
	    0xDDDDDFFF,
	    0xEEEDDDDD,
	    0xDAAAAAAA,
	    0xDDDDDDDD,
	    0xDDDDEFFF,
	    0xEEEDDAAC,
	    0xCCCCCCCC,
	    0xDDDDDDDD,
	    0xDDDDFFFE,
	    0xEEDDDADC,
	    0xDDDDDDDD,
	    0xDDDDDDDD,
	    0xDDDEFFFE,
	    0xEEDDAACD,
	    0xDDDDDDDD,
	    0xDDDDDDDD,
	    0xDDDFFFEE,
	    0xEDDDADCD,
	    0xDCCCCCCC,
	    0xDDDDDDDD,
	    0xDDEFFFEE,
	    0xEDDAACDD,
	    0xDCCCCCCC,
	    0xDDDDDDDD,
	    0xDDFFFEEE,
	    0xDDDADCDD,
	    0xCCCCCCCC,
	    0xDDDDDDDD,
	    0xDEFFFEEE,
	    0xDDAACDDD,
	    0xCCCCCCCC,
	    0xDDDDDDDD,
	    0xDFFFEEED,
	    0xDDADCDDC,
	    0xCCCCCCCC,
	    0xDDDDDDDD,
	    0xEFFFEEED,
	    0xDAACDDDC,
	    0xCCCCCCCC,
	    0xDDDDDDDD,
	    0xFFFEEEDD,
	    0xDADCDDCC,
	    0xCCCCCCCC,
	    0xDDDDDDDE,
	    0xFFFEEEDD,
	    0xAACDDDCC,
	    0xCCCCCCCC,
	    0xDDDDDDDF,
	    0xFFEEEDDD,
	    0xADCDDCCC,
	    0xCCCCCCCC,
	    0xDDDDDDEF,
	    0xFFEEEDDA,
	    0xACDDDCCC,
	    0xCCCCCCCC,
	    0xDDDDDDFF,
	    0xFEEEDDDA,
	    0xDCDDCCCC,
	    0xCCCCCCCC,
	    0xDDDDDEFF,
	    0xFEEEDDAA,
	    0xCDDDCCCC,
	    0xCCCCCCCC,
	    0xDDDDDFFF,
	    0xEEEDDDAD,
	    0xCDDCCCCC,
	    0xCCCCCCCC,
	    0xDDDDEFFF,
	    0xEEEDDAAC,
	    0xDDDCCCCC,
	    0xCCCCCCCC,
	    0xDDDDFFFE,
	    0xEEDDDADC,
	    0xDDCCCCCC,
	    0xCCCCCCCC,
	    0xDDDEFFFE,
	    0xEEDDAACD,
	    0xDDCCCCCC,
	    0xCCCCCCCC,
	    0xDDDEFFEE,
	    0xEDDDADCD,
	    0xDCCCCCCC,
	    0xCCCCCCCC,
	    0xDDDEEFEE,
	    0xEDDAACDD,
	    0xDCCCCCCC,
	    0xCCCCCCCC,
	aobjEvent32End(),
	aobjEvent32End(),
	    0xEEEEBBBB,
	aobjEvent32End(),
	    0xEEEEBBBB,
	aobjEvent32End(),
	    0xEEEEBBBB,
	aobjEvent32End(),
	    0xEEEEBBBB,
	aobjEvent32End(),
	    0xEEEEBBBB,
	aobjEvent32End(),
	    0xDEEEBBBB,
	aobjEvent32End(),
	    0xCDDDBBBB,
	aobjEvent32End(),
	    0xACCCBBBB,
	aobjEvent32End(),
	    0x8AAA9BBB,
	aobjEvent32End(),
	    0x58887999,
	aobjEvent32End(),
	    0x35556777,
	aobjEvent32End(),
	aobjEvent32SetVal0Rate(0x266, 18022),
	    0x00000000,  /* 0.0f */
	    0x11112444,  /* 1.1449658334206978e-28f */
	    0x00000000,  /* 0.0f */
	    0x11111222,  /* 1.1444070729955825e-28f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x222, 4369),
	    0x00000000,  /* 0.0f */
	    0x11111111,  /* 1.1443742118159064e-28f */
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
	aobjEvent32End(),
	    0x99999999,
	aobjEvent32End(),
	    0x99999999,
	aobjEvent32End(),
	    0xDFDFDDFD,
	aobjEvent32End(),
	    0x55555555,
	aobjEvent32End(),
	aobjEvent32SetVal0RateBlock(0x262, 4881),
	    0x00000000,  /* 0.0f */
	    0xDDFDFDFD,  /* -2.287757829643174e+18f */
	    0x00000000,  /* 0.0f */
	    0x99999999,  /* -1.5881866814385045e-23f */
	aobjEvent32End(),
	    0x99999999,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x08B, 32708),
	    0xFF880000,
	aobjEvent32End(),
	aobjEvent32SetInterp(28928, 0x109),
	    0x008AFFC4,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32SetInterp(28928, 0x109),
	    0x0000FFA6,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32SetInterp(28928, 0x109),
	    0x00AD0000,
	aobjEvent32End(),
	aobjEvent32WaitRaw(0x022, 254),
	    0x62C7C700,
	aobjEvent32EndRaw(0x115, 32708),
	aobjEvent32End(),
	aobjEvent32JumpRaw(0x380, 0, 0x62C7C700),
	aobjEvent32EndRaw(0x08B, 32708),
	    0xFF880000,
	aobjEvent32JumpRaw(0x240, 0, 0x62C7C700),
	aobjEvent32EndRaw(0x0AE, 0),
	    0xFF6C0000,
	aobjEvent32JumpRaw(0x290, 254, 0x62C7C700),
	aobjEvent32EndRaw(0x15A, 0),
	aobjEvent32End(),
	aobjEvent32WaitRaw(0x022, 254),
	    0x62C7C700,
	aobjEvent32EndRaw(0x08B, 32708),
	    0xFF880000,
	aobjEvent32JumpRaw(0x240, 0, 0x62C7C700),
	aobjEvent32EndRaw(0x0AE, 0),
	aobjEvent32EndRaw(0x128, 0),
	aobjEvent32JumpRaw(0x290, 254, 0x62C73900),
	aobjEvent32EndRaw(0x08B, 32708),
	aobjEvent32EndRaw(0x0F0, 0),
	aobjEvent32JumpRaw(0x240, 0, 0x62C73900),
	aobjEvent32EndRaw(0x115, 32708),
	aobjEvent32End(),
	aobjEvent32JumpRaw(0x380, 0, 0x62C73900),
	aobjEvent32EndRaw(0x15A, 0),
	aobjEvent32End(),
	aobjEvent32WaitRaw(0x022, 254),
	    0x62C73900,
	aobjEvent32EndRaw(0x0AE, 0),
	aobjEvent32EndRaw(0x128, 0),
	aobjEvent32JumpRaw(0x290, 254, 0x62C73900),
	aobjEvent32EndRaw(0x115, 32708),
	aobjEvent32End(),
	aobjEvent32JumpRaw(0x380, 0, 0x62C73900),
	aobjEvent32EndRaw(0x1E0, 60),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 512),
	    0x623AC800,
	aobjEvent32EndRaw(0x228, 0),
	aobjEvent32End(),
	aobjEvent32End(),
	    0x623AC800,
	aobjEvent32EndRaw(0x114, 0),
	    0xFF110000,
	aobjEvent32SetValBlock(0x154, 0),
	    0x623AC800,  /* 8.613764791293905e+20f */
	    0x0078003C,  /* 1.1020343616866805e-38f */
	    0xFF300000,  /* -2.339441272581452e+38f */
	    0x06AA0200,  /* 6.39498314206095e-35f */
	    0x623AC800,
	aobjEvent32EndRaw(0x1E0, 60),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 512),
	    0x623AC800,
	aobjEvent32EndRaw(0x114, 0),
	    0xFF110000,
	aobjEvent32SetValBlock(0x154, 0),
	    0x623AC800,  /* 8.613764791293905e+20f */
	    0x00F0003C,  /* 2.204060315582575e-38f */
	    0x00000000,  /* 0.0f */
	    0x077A0400,  /* 1.8809085107507422e-34f */
	    0xFFFFFF00,
	aobjEvent32EndRaw(0x0F0, 60),
	    0xFF300000,
	aobjEvent32WaitRaw(0x37A, 133),
	    0xFFFFFF00,
	aobjEvent32EndRaw(0x000, 60),
	aobjEvent32End(),
	aobjEvent32Wait(1024),
	    0xFFFFFF00,
	aobjEvent32EndRaw(0x0F0, 60),
	aobjEvent32EndRaw(0x1A0, 0),
	aobjEvent32Cmd16(0x2AA, 512),
	    0x623A3800,
	aobjEvent32EndRaw(0x114, 0),
	aobjEvent32EndRaw(0x1DE, 0),
	aobjEvent32Cmd16(0x2AA, 0),
	    0x623A3800,
	aobjEvent32EndRaw(0x228, 0),
	aobjEvent32End(),
	aobjEvent32SetExtValBlock(0x000, 0),
	    0x623A3800,
	aobjEvent32EndRaw(0x1E0, 60),
	aobjEvent32End(),
	aobjEvent32SetExtValBlock(0x000, 512),
	    0x623A3800,
	aobjEvent32EndRaw(0x0F0, 60),
	aobjEvent32EndRaw(0x1A0, 0),
	aobjEvent32Cmd16(0x2AA, 512),
	    0x623A3800,
	aobjEvent32EndRaw(0x228, 0),
	aobjEvent32End(),
	aobjEvent32SetExtValBlock(0x000, 0),
	    0x623A3800,
	aobjEvent32EndRaw(0x115, 32708),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32SetInterp(3840, 0x108),
	    0x0045FFC4,
	aobjEvent32EndRaw(0x0F0, 0),
	aobjEvent32End(),
	aobjEvent32SetInterp(3840, 0x108),
	    0x0000FFA6,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32SetInterp(3840, 0x108),
	    0x0078003C,
	aobjEvent32EndRaw(0x1A0, 0),
	aobjEvent32WaitRaw(0x37A, 1914),
	    0xFFFFFF00,
	aobjEvent32EndRaw(0x1E0, 60),
	aobjEvent32End(),
	aobjEvent32SetValBlock(0x2F4, 1024),
	    0xFFFFFF00,  /* nanf */
	    0x0000003C,  /* 8.407790785948902e-44f */
	    0x00000000,  /* 0.0f */
	    0x04000400,  /* 1.504816440044844e-36f */
	    0xFFFFFF00,  /* nanf */
	    0x008A0000,  /* 1.2673298469802787e-38f */
	    0xFF110000,
	aobjEvent32SetValBlock(0x154, 0),
	    0x003A8F00,  /* 5.377757511345493e-39f */
	    0xFF760000,  /* -3.269900869630893e+38f */
	    0xFF110000,  /* -1.927380593888128e+38f */
	    0x0D550000,  /* 6.5635692504717e-31f */
	aobjEvent32EndRaw(0x075, 3840),
	    0xFF88003C,
	    0xFF300000,
	aobjEvent32SetValRate(0x2AA, 512),
	    0x003A8F00,  /* 5.377757511345493e-39f */
	    0x0078003C,  /* 1.1020343616866805e-38f */
	    0xFF300000,  /* -2.339441272581452e+38f */
	    0x06AA0200,  /* 6.39498314206095e-35f */
	    0x003A8F00,  /* 5.377757511345493e-39f */
	    0x008A0000,  /* 1.2673298469802787e-38f */
	    0xFF110000,  /* -1.927380593888128e+38f */
	    0x06AA0000,  /* 6.394689268473244e-35f */
	    0x003A8F00,  /* 5.377757511345493e-39f */
	    0xFF88003C,  /* nanf */
	    0xFF300000,
	aobjEvent32SetValRate(0x2AA, 512),
	    0x003A8F00,  /* 5.377757511345493e-39f */
	    0x0078003C,  /* 1.1020343616866805e-38f */
	    0xFF300000,  /* -2.339441272581452e+38f */
	    0x05BD0085,  /* 1.777366543007344e-35f */
	    0xFFFFFF00,  /* nanf */
	    0xFF88003C,  /* nanf */
	    0xFF300000,  /* -2.339441272581452e+38f */
	    0x02420085,  /* 1.425301810187684e-37f */
	    0xFFFFFF00,  /* nanf */
	    0x0000003C,  /* 8.407790785948902e-44f */
	aobjEvent32End(),
	aobjEvent32Wait(1024),
	    0xFFFFFF00,
	    0xFF76FFC4,
	aobjEvent32End(),
	aobjEvent32End(),
	    0xE684F100,
	    0xFFBBFFC4,
	    0xFF880000,
	aobjEvent32End(),
	    0xE684F100,
	aobjEvent32EndRaw(0x001, 32678),
	aobjEvent32End(),
	aobjEvent32End(),
	    0xE684F100,
	    0xFFA90000,
	    0xFF6C0000,
	aobjEvent32EndRaw(0x36E, 254),
	    0x9EC7C700,
	    0xFFBBFFC4,
	    0xFF880000,
	aobjEvent32EndRaw(0x3C0, 0),
	    0x9EC7C700,
	    0xFF76FFC4,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x280, 0),
	    0x9EC7C700,
	    0xFF530000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x1DC, 254),
	    0x9EC7C700,
	    0xFFA90000,
	    0xFF6C0000,
	aobjEvent32EndRaw(0x36E, 254),
	    0x9EC7C700,
	    0xFF76FFC4,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x280, 0),
	    0x9EC7C700,
	    0xFF88003C,
	aobjEvent32EndRaw(0x1A0, 0),
	aobjEvent32JumpRaw(0x084, 1914, 0xFFFFFF00),
	aobjEvent32EndRaw(0x0F0, 60),
	aobjEvent32EndRaw(0x1A0, 0),
	aobjEvent32WaitRaw(0x37A, 1914),
	    0xFFFFFF00,
	aobjEvent32EndRaw(0x000, 60),
	aobjEvent32End(),
	aobjEvent32Wait(1024),
	    0xFFFFFF00,
	    0xFF88003C,
	    0xFF300000,
	aobjEvent32SetValRate(0x2AA, 512),
	    0x9E3AC800,  /* -9.888117042458893e-21f */
	    0xFF760000,  /* -3.269900869630893e+38f */
	    0xFF110000,  /* -1.927380593888128e+38f */
	    0x0D550000,  /* 6.5635692504717e-31f */
	    0x9E3AC800,  /* -9.888117042458893e-21f */
	    0xFEEC0000,  /* -1.5684890350262007e+38f */
	    0x00000000,  /* 0.0f */
	    0x14000000,  /* 6.462348535570529e-27f */
	    0x9E3AC800,  /* -9.888117042458893e-21f */
	    0xFF10003C,  /* -1.914100483376041e+38f */
	aobjEvent32End(),
	aobjEvent32SetValAfterBlock(0x000, 512),
	    0x9E3AC800,
	    0xFF88003C,
	    0xFF300000,
	aobjEvent32SetValRate(0x2AA, 512),
	    0x9E3AC800,  /* -9.888117042458893e-21f */
	    0xFEEC0000,  /* -1.5684890350262007e+38f */
	    0x00000000,  /* 0.0f */
	    0x14000000,  /* 6.462348535570529e-27f */
	    0x9E3AC800,  /* -9.888117042458893e-21f */
	    0xFF88003C,  /* nanf */
	    0xFF300000,  /* -2.339441272581452e+38f */
	    0x02420085,  /* 1.425301810187684e-37f */
	    0xFFFFFF00,  /* nanf */
	    0xFF10003C,  /* -1.914100483376041e+38f */
	aobjEvent32End(),
	aobjEvent32EndRaw(0x10A, 1024),
	    0xFFFFFF00,
	aobjEvent32EndRaw(0x000, 60),
	aobjEvent32End(),
	aobjEvent32Wait(1024),
	    0xFFFFFF00,
	    0xFFBBFFC4,
	aobjEvent32EndRaw(0x0F0, 0),
	aobjEvent32End(),
	    0xE6840F00,
	    0xFF76FFC4,
	aobjEvent32End(),
	aobjEvent32End(),
	    0xE6840F00,
	aobjEvent32EndRaw(0x001, 32678),
	aobjEvent32End(),
	aobjEvent32End(),
	    0xE6840F00,
	    0xFF530000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x1DC, 254),
	    0x9EC73900,
	    0xFF76FFC4,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x280, 0),
	    0x9EC73900,
	    0xFFBBFFC4,
	aobjEvent32EndRaw(0x0F0, 0),
	aobjEvent32EndRaw(0x3C0, 0),
	    0x9EC73900,
	    0xFFA90000,
	aobjEvent32EndRaw(0x128, 0),
	aobjEvent32EndRaw(0x36E, 254),
	    0x9EC73900,
	    0xFF530000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x1DC, 254),
	    0x9EC73900,
	    0xFFBBFFC4,
	aobjEvent32EndRaw(0x0F0, 0),
	aobjEvent32EndRaw(0x3C0, 0),
	    0x9EC73900,
	    0xFF88003C,
	aobjEvent32EndRaw(0x1A0, 0),
	aobjEvent32SetInterp(512, 0x154),
	    0x003A7100,
	    0xFF760000,
	aobjEvent32EndRaw(0x1DE, 0),
	aobjEvent32SetInterp(0, 0x154),
	    0x003A7100,
	aobjEvent32EndRaw(0x114, 0),
	aobjEvent32EndRaw(0x1DE, 0),
	aobjEvent32Cmd16(0x2AA, 0),
	aobjEvent32EndRaw(0x074, 28928),
	aobjEvent32EndRaw(0x0F0, 60),
	aobjEvent32EndRaw(0x1A0, 0),
	aobjEvent32Cmd16(0x2AA, 512),
	aobjEvent32EndRaw(0x074, 28928),
	    0xFF88003C,
	aobjEvent32EndRaw(0x1A0, 0),
	aobjEvent32SetInterp(512, 0x154),
	    0x003A7100,
	aobjEvent32EndRaw(0x114, 0),
	aobjEvent32EndRaw(0x1DE, 0),
	aobjEvent32Cmd16(0x2AA, 0),
	aobjEvent32EndRaw(0x074, 28928),
	    0xFF10003C,
	aobjEvent32End(),
	aobjEvent32SetValAfterBlock(0x000, 512),
	    0x9E3A3800,
	    0xFEEC0000,
	aobjEvent32End(),
	aobjEvent32SetValAfterBlock(0x000, 0),
	    0x9E3A3800,
	    0xFF760000,
	aobjEvent32EndRaw(0x1DE, 0),
	aobjEvent32SetInterp(0, 0x154),
	    0x9E3A3800,
	    0xFF88003C,
	aobjEvent32EndRaw(0x1A0, 0),
	aobjEvent32SetInterp(512, 0x154),
	    0x9E3A3800,
	    0xFF10003C,
	aobjEvent32End(),
	aobjEvent32SetValAfterBlock(0x000, 512),
	    0x9E3A3800,
	    0xFF760000,
	aobjEvent32EndRaw(0x1DE, 0),
	aobjEvent32SetInterp(0, 0x154),
	    0x9E3A3800,
	    0xFF10003C,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x10A, 1024),
	    0xFFFFFF00,
	    0xFF88003C,
	aobjEvent32EndRaw(0x1A0, 0),
	aobjEvent32JumpRaw(0x084, 1914, 0xFFFFFF00),
	aobjEvent32EndRaw(0x000, 60),
	aobjEvent32End(),
	aobjEvent32Wait(1024),
	    0xFFFFFF00,
	aobjEvent32EndRaw(0x08B, 32708),
	aobjEvent32EndRaw(0x0F0, 0),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x108, 7936),
	    0xFFBBFFC4,
	aobjEvent32EndRaw(0x0F0, 0),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x108, 7936),
	aobjEvent32EndRaw(0x001, 32678),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x108, 7936),
	aobjEvent32EndRaw(0x0AE, 0),
	aobjEvent32EndRaw(0x128, 0),
	aobjEvent32JumpRaw(0x290, 254, 0x00C97300),
	    0xFFA90000,
	aobjEvent32EndRaw(0x128, 0),
	aobjEvent32EndRaw(0x36E, 254),
	aobjEvent32EndRaw(0x192, 29440),
	    0xFFBBFFC4,
	aobjEvent32EndRaw(0x0F0, 0),
	aobjEvent32EndRaw(0x3C0, 0),
	aobjEvent32EndRaw(0x192, 29440),
	aobjEvent32EndRaw(0x08B, 32708),
	aobjEvent32EndRaw(0x0F0, 0),
	aobjEvent32JumpRaw(0x240, 0, 0x00C97300),
	aobjEvent32EndRaw(0x0AE, 0),
	aobjEvent32EndRaw(0x128, 0),
	aobjEvent32JumpRaw(0x290, 254, 0x00C97300),
	    0xFFBBFFC4,
	aobjEvent32EndRaw(0x0F0, 0),
	aobjEvent32EndRaw(0x3C0, 0),
	aobjEvent32EndRaw(0x192, 29440),
	aobjEvent32EndRaw(0x089, 32709),
	    0xFF760000,
	aobjEvent32End(),
	    0xFFFFFF00,
	aobjEvent32EndRaw(0x089, 32709),
	    0xFECA0000,
	aobjEvent32WaitRaw(0x200, 0),
	    0xFFFFFF00,
	aobjEvent32End(),
	    0xFECA0000,
	aobjEvent32WaitRaw(0x200, 512),
	    0xFFFFFF00,
	aobjEvent32End(),
	    0xFF760000,
	aobjEvent32EndRaw(0x000, 511),
	    0xFFFFFF00,
	aobjEvent32EndRaw(0x089, 32709),
	    0xFF760000,
	aobjEvent32End(),
	    0xFFFFFF00,
	aobjEvent32End(),
	    0xFECA0000,
	aobjEvent32WaitRaw(0x200, 512),
	    0xFFFFFF00,
	    0xFF76FFC5,
	    0xFFBC0000,
	aobjEvent32End(),
	    0xFFFFFF00,
	    0xFECAFFC5,
	    0xFFBC0000,
	aobjEvent32WaitRaw(0x200, 0),
	    0xFFFFFF00,
	    0xFECA0000,
	aobjEvent32End(),
	aobjEvent32WaitRaw(0x200, 512),
	    0xFFFFFF00,
	    0xFF760000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 512),
	    0xFFFFFF00,
	    0xFF76FFC5,
	    0xFFBC0000,
	aobjEvent32End(),
	    0xFFFFFF00,
	    0xFECA0000,
	aobjEvent32End(),
	aobjEvent32WaitRaw(0x200, 512),
	    0xFFFFFF00,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x114, 0),
	aobjEvent32EndRaw(0x000, 512),
	    0xFFFFFF00,
	    0xFFBCFFC5,
	aobjEvent32EndRaw(0x114, 0),
	aobjEvent32End(),
	    0xFFFFFF00,
	    0xFFBCFFC5,
	aobjEvent32EndRaw(0x26C, 0),
	aobjEvent32WaitRaw(0x200, 0),
	    0xFFFFFF00,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x26C, 0),
	aobjEvent32WaitRaw(0x200, 511),
	    0xFFFFFF00,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x114, 0),
	aobjEvent32EndRaw(0x000, 512),
	    0xFFFFFF00,
	    0xFFBCFFC5,
	aobjEvent32EndRaw(0x26C, 0),
	aobjEvent32WaitRaw(0x200, 0),
	    0xFFFFFF00,
	aobjEvent32EndRaw(0x26D, 32709),
	aobjEvent32EndRaw(0x088, 0),
	aobjEvent32WaitRaw(0x200, 0),
	    0xFFFFFF00,
	aobjEvent32EndRaw(0x26C, 0),
	aobjEvent32End(),
	aobjEvent32WaitRaw(0x200, 512),
	    0xFFFFFF00,
	aobjEvent32EndRaw(0x114, 0),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 512),
	    0xFFFFFF00,
	aobjEvent32EndRaw(0x115, 32709),
	aobjEvent32EndRaw(0x088, 0),
	aobjEvent32End(),
	    0xFFFFFF00,
	aobjEvent32EndRaw(0x26D, 32709),
	aobjEvent32EndRaw(0x088, 0),
	aobjEvent32WaitRaw(0x200, 0),
	    0xFFFFFF00,
	aobjEvent32EndRaw(0x114, 0),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 512),
	    0xFFFFFF00,
	aobjEvent32EndRaw(0x0F2, 240),
	aobjEvent32EndRaw(0x1A2, 0),
	aobjEvent32EndRaw(0x180, 512),
	    0xFFFFFF00,
	aobjEvent32EndRaw(0x0F2, 60),
	aobjEvent32EndRaw(0x1A2, 0),
	aobjEvent32EndRaw(0x180, 0),
	    0xFFFFFF00,
	aobjEvent32EndRaw(0x1E4, 60),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 0),
	    0xFFFFFF00,
	aobjEvent32EndRaw(0x1E4, 240),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 512),
	    0xFFFFFF00,
	aobjEvent32EndRaw(0x0F2, 240),
	aobjEvent32EndRaw(0x1A2, 0),
	aobjEvent32EndRaw(0x180, 512),
	    0xFFFFFF00,
	aobjEvent32EndRaw(0x1E4, 60),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 0),
	    0xFFFFFF00,
	aobjEvent32EndRaw(0x1E4, 240),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 512),
	    0xFFFFFF00,
	aobjEvent32EndRaw(0x1E4, 60),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 0),
	    0xFFFFFF00,
	aobjEvent32EndRaw(0x0F2, 60),
	    0xFF2F0000,
	aobjEvent32EndRaw(0x180, 0),
	    0xFFFFFF00,
	aobjEvent32EndRaw(0x0F2, 240),
	    0xFF2F0000,
	aobjEvent32EndRaw(0x180, 512),
	    0xFFFFFF00,
	aobjEvent32EndRaw(0x1E4, 240),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 512),
	    0xFFFFFF00,
	aobjEvent32EndRaw(0x0F2, 60),
	    0xFF2F0000,
	aobjEvent32EndRaw(0x180, 0),
	    0xFFFFFF00,
	    0xFF8700F0,
	aobjEvent32EndRaw(0x1A2, 0),
	aobjEvent32EndRaw(0x080, 512),
	    0xFFFFFF00,
	    0xFF87003C,
	aobjEvent32EndRaw(0x1A2, 0),
	aobjEvent32EndRaw(0x080, 0),
	    0xFFFFFF00,
	aobjEvent32EndRaw(0x0F2, 60),
	aobjEvent32EndRaw(0x1A2, 0),
	aobjEvent32EndRaw(0x180, 0),
	    0xFFFFFF00,
	aobjEvent32EndRaw(0x0F2, 240),
	aobjEvent32EndRaw(0x1A2, 0),
	aobjEvent32EndRaw(0x180, 512),
	    0xFFFFFF00,
	    0xFF8700F0,
	aobjEvent32EndRaw(0x1A2, 0),
	aobjEvent32EndRaw(0x080, 512),
	    0xFFFFFF00,
	aobjEvent32EndRaw(0x0F2, 60),
	aobjEvent32EndRaw(0x1A2, 0),
	aobjEvent32EndRaw(0x180, 0),
	    0xFFFFFF00,
	    0xFF0E00F0,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 512),
	    0xFFFFFF00,
	    0xFF0E003C,
	aobjEvent32End(),
	aobjEvent32End(),
	    0xFFFFFF00,
	    0xFF87003C,
	aobjEvent32EndRaw(0x1A2, 0),
	aobjEvent32EndRaw(0x080, 0),
	    0xFFFFFF00,
	    0xFF8700F0,
	aobjEvent32EndRaw(0x1A2, 0),
	aobjEvent32EndRaw(0x080, 512),
	    0xFFFFFF00,
	    0xFF0E00F0,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 512),
	    0xFFFFFF00,
	    0xFF87003C,
	aobjEvent32EndRaw(0x1A2, 0),
	aobjEvent32EndRaw(0x080, 0),
	    0xFFFFFF00,
	aobjEvent32EndRaw(0x0F2, 60),
	    0xFF2F0000,
	aobjEvent32EndRaw(0x180, 0),
	    0xFFFFFF00,
	    0xFF87003C,
	    0xFF2F0000,
	aobjEvent32EndRaw(0x07E, 0),
	    0xFFFFFF00,
	    0xFF8700F0,
	    0xFF2F0000,
	aobjEvent32EndRaw(0x07E, 512),
	    0xFFFFFF00,
	aobjEvent32EndRaw(0x0F2, 240),
	    0xFF2F0000,
	aobjEvent32EndRaw(0x180, 512),
	    0xFFFFFF00,
	aobjEvent32EndRaw(0x0F2, 60),
	    0xFF2F0000,
	aobjEvent32EndRaw(0x180, 0),
	    0xFFFFFF00,
	    0xFF8700F0,
	    0xFF2F0000,
	aobjEvent32EndRaw(0x07E, 512),
	    0xFFFFFF00,
	    0xFF8700F0,
	    0xFF2F0000,
	aobjEvent32EndRaw(0x07E, 512),
	    0xFFFFFF00,
	    0xFF87003C,
	    0xFF2F0000,
	aobjEvent32EndRaw(0x07E, 0),
	    0xFFFFFF00,
	    0xFF0E003C,
	aobjEvent32End(),
	aobjEvent32End(),
	    0xFFFFFF00,
	    0xFF0E00F0,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 512),
	    0xFFFFFF00,
	    0xFF8700F0,
	    0xFF2F0000,
	aobjEvent32EndRaw(0x07E, 512),
	    0xFFFFFF00,
	    0xFF0E003C,
	aobjEvent32End(),
	aobjEvent32End(),
	    0xFFFFFF00,
	    0xD9C0F9FA,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x044, 1029),
	    0xE3000800,
	aobjEvent32EndRaw(0x100, 0),
	    0xE3000A01,
	aobjEvent32End(),
	    0xE3000C00,
	aobjEvent32EndRaw(0x010, 0),
	    0xE3000D01,
	aobjEvent32End(),
	    0xE3000F00,
	aobjEvent32End(),
	    0xE3001001,
	aobjEvent32End(),
	    0xE3001201,
	aobjEvent32EndRaw(0x000, 8192),
	    0xE3001402,
	aobjEvent32EndRaw(0x000, 3072),
	    0xE3001700,
	aobjEvent32End(),
	    0xE3001801,
	aobjEvent32End(),
	    0xE3001A01,
	aobjEvent32EndRaw(0x000, 48),
	    0xE2001E01,
	aobjEvent32End(),
	    0xE2001D00,
	aobjEvent32End(),
	    0xE200001C,
	aobjEvent32EndRaw(0x0AA, 8312),
	    0xE7000000,
	aobjEvent32End(),
	    0xDB0A0000,
	    0xFFFFFF00,
	    0xDB0A0004,
	    0xFFFFFF00,
	    0xDB0A0018,
	    0xB3B3B300,
	    0xDB0A001C,
	    0xB3B3B300,
	    0xFCFFFFFF,
	    0xFFFE7D3E,
	    0xD7000000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x638),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x818),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x908),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0xA58),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0xBD8),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xDB0A0000,
	    0xFFFFFF00,
	    0xDB0A0004,
	    0xFFFFFF00,
	    0xDB0A0018,
	    0xB3B3B300,
	    0xDB0A001C,
	    0xB3B3B300,
	    0xE3001001,
	aobjEvent32EndRaw(0x001, 0),
	    0xFC127E24,
	    0xFFFFF3F9,
	    0xE8000000,
	aobjEvent32End(),
	    0xF5000100,
	aobjEvent32WaitRaw(0x200, 0),
	    0xF5500000,
	aobjEvent32SetValBlock(0x201, 16432),
	    0xF5400200,  /* -2.4339881876413433e+32f */
	    0x0008C230,  /* 8.04345318522445e-40f */
	    0xFD100000,
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x130),
	    0xE6000000,
	aobjEvent32End(),
	    0xF0000000,
	aobjEvent32WaitRaw(0x207, 16384),
	    0xE7000000,
	aobjEvent32End(),
	    0xD7000002,
	    0xFFFFFFFF,
	    0xF2000000,
	aobjEvent32EndRaw(0x013, 16412),
	    0xFD500000,
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x5F8),
	    0xE6000000,
	aobjEvent32End(),
	    0xF3000000,
	aobjEvent32SetValBlock(0x203, 30720),
	    0xE7000000,  /* -6.044629098073146e+23f */
	    0x00000000,  /* 0.0f */
	    0x01003006,  /* 2.354434214308657e-38f */
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x668),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x698),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x6C8),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x6F8),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x938),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x968),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0xA88),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0xAB8),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0xC08),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0xC38),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xE3001001,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xDB0A0000,
	    0xFFFFFF00,
	    0xDB0A0004,
	    0xFFFFFF00,
	    0xDB0A0018,
	    0xCCCCCC00,
	    0xDB0A001C,
	    0xCCCCCC00,
	    0xE3001001,
	aobjEvent32EndRaw(0x001, 0),
	    0xFC127E24,
	    0xFFFFF3F9,
	    0xE8000000,
	aobjEvent32End(),
	    0xF5000100,
	aobjEvent32WaitRaw(0x200, 0),
	    0xF5500000,
	aobjEvent32SetValBlock(0x202, 48),
	    0xF5400200,  /* -2.4339881876413433e+32f */
	    0x00090030,  /* 8.265867277482085e-40f */
	    0xFD100000,
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x108),
	    0xE6000000,
	aobjEvent32End(),
	    0xF0000000,
	aobjEvent32WaitRaw(0x207, 16384),
	    0xE7000000,
	aobjEvent32End(),
	    0xD7000002,
	    0xFFFFFFFF,
	    0xF2000000,
	aobjEvent32EndRaw(0x09F, 16444),
	    0xFD500000,
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x570),
	    0xE6000000,
	aobjEvent32End(),
	    0xF3000000,
	aobjEvent32SetValBlock(0x207, 30720),
	    0xE7000000,  /* -6.044629098073146e+23f */
	    0x00000000,  /* 0.0f */
	    0xE7000000,  /* -6.044629098073146e+23f */
	    0x00000000,  /* 0.0f */
	    0xD9FFFBFF,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x728),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x758),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x7B8),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x7E8),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x878),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x8A8),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x9C8),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x9F8),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0xAE8),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0xB18),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0xB48),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0xB78),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xE3001001,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9DDFFFF,
	aobjEvent32End(),
	    0xE3001001,
	aobjEvent32EndRaw(0x001, 0),
	    0xFC127E24,
	    0xFFFFF3F9,
	    0xE8000000,
	aobjEvent32End(),
	    0xF5000100,
	aobjEvent32WaitRaw(0x200, 0),
	    0xF5500000,
	aobjEvent32SetValBlock(0x202, 16464),
	    0xF5400400,  /* -2.434087222844486e+32f */
	    0x000D4350,  /* 1.218008625191131e-39f */
	    0xFD100000,
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0xE0),
	    0xE6000000,
	aobjEvent32End(),
	    0xF0000000,
	aobjEvent32WaitRaw(0x207, 16384),
	    0xE7000000,
	aobjEvent32End(),
	    0xD7000002,
	    0xFFFFFFFF,
	    0xF2000000,
	aobjEvent32EndRaw(0x01F, 16636),
	    0xFD500000,
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x368),
	    0xE6000000,
	aobjEvent32End(),
	    0xF3000000,
	aobjEvent32SetValBlock(0x21F, 29696),
	    0xE7000000,  /* -6.044629098073146e+23f */
	    0x00000000,  /* 0.0f */
	    0xE7000000,  /* -6.044629098073146e+23f */
	    0x00000000,  /* 0.0f */
	    0xD9FFFBFF,  /* -9006648962056192.0f */
	    0x00000000,  /* 0.0f */
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x788),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x848),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x8D8),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x998),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0xA28),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0xBA8),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x044, 0),
	    0xE3001001,
	aobjEvent32End(),
	    0xDF000000,
	aobjEvent32End(),
	    0xDE000000,
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x10A8),
	    0xDF000000,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9DDFFFF,
	aobjEvent32End(),
	    0xE3001001,
	aobjEvent32EndRaw(0x001, 0),
	    0xE2001E01,
	aobjEvent32EndRaw(0x000, 1),
	    0xE200001C,
	aobjEvent32EndRaw(0x0AA, 12408),
	    0xFC127E24,
	    0xFFFFF3F9,
	    0xF9000000,
	aobjEvent32End(),
	    0xE8000000,
	aobjEvent32End(),
	    0xF5000100,
	aobjEvent32WaitRaw(0x200, 0),
	    0xF5500000,
	aobjEvent32SetValBlock(0x202, 96),
	    0xF5400600,  /* -2.434186258047629e+32f */
	    0x00090260,  /* 8.273714548882304e-40f */
	    0xFD100000,
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0xB8),
	    0xE6000000,
	aobjEvent32End(),
	    0xF0000000,
	aobjEvent32WaitRaw(0x207, 16384),
	    0xE7000000,
	aobjEvent32End(),
	    0xD7000002,
	    0xFFFFFFFF,
	    0xF2000000,
	aobjEvent32EndRaw(0x013, 16444),
	    0xFD500000,
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x1E0),
	    0xE6000000,
	aobjEvent32End(),
	    0xF3000000,
	aobjEvent32SetValBlock(0x217, 29355),
	    0xE7000000,  /* -6.044629098073146e+23f */
	    0x00000000,  /* 0.0f */
	    0xE7000000,  /* -6.044629098073146e+23f */
	    0x00000000,  /* 0.0f */
	    0xD9FFFBFF,  /* -9006648962056192.0f */
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0xC68),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0xC98),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
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
	    0xD9DDFFFF,
	aobjEvent32End(),
	    0xE3001001,
	aobjEvent32EndRaw(0x001, 0),
	    0xE2001E01,
	aobjEvent32EndRaw(0x000, 1),
	    0xE200001C,
	aobjEvent32EndRaw(0x0AA, 12408),
	    0xFC127E24,
	    0xFFFFF3F9,
	    0xF9000000,
	aobjEvent32End(),
	    0xE8000000,
	aobjEvent32End(),
	    0xF5000100,
	aobjEvent32WaitRaw(0x200, 0),
	    0xF5500000,
	aobjEvent32SetValBlock(0x202, 96),
	    0xF5400600,  /* -2.434186258047629e+32f */
	    0x00090260,  /* 8.273714548882304e-40f */
	    0xFD100000,
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0xB8),
	    0xE6000000,
	aobjEvent32End(),
	    0xF0000000,
	aobjEvent32WaitRaw(0x207, 16384),
	    0xE7000000,
	aobjEvent32End(),
	    0xD7000002,
	    0xFFFFFFFF,
	    0xF2000000,
	aobjEvent32EndRaw(0x013, 16444),
	    0xFD500000,
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x1E0),
	    0xE6000000,
	aobjEvent32End(),
	    0xF3000000,
	aobjEvent32SetValBlock(0x217, 29355),
	    0xE7000000,  /* -6.044629098073146e+23f */
	    0x00000000,  /* 0.0f */
	    0xE7000000,  /* -6.044629098073146e+23f */
	    0x00000000,  /* 0.0f */
	    0xD9FFFBFF,  /* -9006648962056192.0f */
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0xCC8),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0xCF8),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
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
	    0xD9DDFFFF,
	aobjEvent32End(),
	    0xE3001001,
	aobjEvent32EndRaw(0x001, 0),
	    0xE2001E01,
	aobjEvent32EndRaw(0x000, 1),
	    0xE200001C,
	aobjEvent32EndRaw(0x0AA, 12408),
	    0xFC127E24,
	    0xFFFFF3F9,
	    0xF9000000,
	aobjEvent32End(),
	    0xE8000000,
	aobjEvent32End(),
	    0xF5000100,
	aobjEvent32WaitRaw(0x200, 0),
	    0xF5500000,
	aobjEvent32SetValBlock(0x202, 96),
	    0xF5400600,  /* -2.434186258047629e+32f */
	    0x00090260,  /* 8.273714548882304e-40f */
	    0xFD100000,
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0xB8),
	    0xE6000000,
	aobjEvent32End(),
	    0xF0000000,
	aobjEvent32WaitRaw(0x207, 16384),
	    0xE7000000,
	aobjEvent32End(),
	    0xD7000002,
	    0xFFFFFFFF,
	    0xF2000000,
	aobjEvent32EndRaw(0x013, 16444),
	    0xFD500000,
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x1E0),
	    0xE6000000,
	aobjEvent32End(),
	    0xF3000000,
	aobjEvent32SetValBlock(0x217, 29355),
	    0xE7000000,  /* -6.044629098073146e+23f */
	    0x00000000,  /* 0.0f */
	    0xE7000000,  /* -6.044629098073146e+23f */
	    0x00000000,  /* 0.0f */
	    0xD9FFFBFF,  /* -9006648962056192.0f */
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0xD28),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0xD58),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
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
	    0xD9DDFFFF,
	aobjEvent32End(),
	    0xE3001001,
	aobjEvent32EndRaw(0x001, 0),
	    0xE2001E01,
	aobjEvent32EndRaw(0x000, 1),
	    0xE200001C,
	aobjEvent32EndRaw(0x0AA, 12408),
	    0xFC127E24,
	    0xFFFFF3F9,
	    0xF9000000,
	aobjEvent32End(),
	    0xE8000000,
	aobjEvent32End(),
	    0xF5000100,
	aobjEvent32WaitRaw(0x200, 0),
	    0xF5500000,
	aobjEvent32SetValBlock(0x202, 96),
	    0xF5400600,  /* -2.434186258047629e+32f */
	    0x00090260,  /* 8.273714548882304e-40f */
	    0xFD100000,
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0xB8),
	    0xE6000000,
	aobjEvent32End(),
	    0xF0000000,
	aobjEvent32WaitRaw(0x207, 16384),
	    0xE7000000,
	aobjEvent32End(),
	    0xD7000002,
	    0xFFFFFFFF,
	    0xF2000000,
	aobjEvent32EndRaw(0x013, 16444),
	    0xFD500000,
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x1E0),
	    0xE6000000,
	aobjEvent32End(),
	    0xF3000000,
	aobjEvent32SetValBlock(0x217, 29355),
	    0xE7000000,  /* -6.044629098073146e+23f */
	    0x00000000,  /* 0.0f */
	    0xE7000000,  /* -6.044629098073146e+23f */
	    0x00000000,  /* 0.0f */
	    0xD9FFFBFF,  /* -9006648962056192.0f */
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0xD88),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0xDB8),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
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
	    0xDE000000,
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x1B28),
	    0xDE000000,
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x1C40),
	    0xDE000000,
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x1D58),
	    0xDE000000,
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x1E70),
	    0xDF000000,
	aobjEvent32End(),
	    0xD9C0F9FA,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x044, 1029),
	    0xE3000800,
	aobjEvent32EndRaw(0x100, 0),
	    0xE3000A01,
	aobjEvent32End(),
	    0xE3000C00,
	aobjEvent32EndRaw(0x010, 0),
	    0xE3000D01,
	aobjEvent32End(),
	    0xE3000F00,
	aobjEvent32End(),
	    0xE3001001,
	aobjEvent32End(),
	    0xE3001201,
	aobjEvent32EndRaw(0x000, 8192),
	    0xE3001402,
	aobjEvent32EndRaw(0x000, 3072),
	    0xE3001700,
	aobjEvent32End(),
	    0xE3001801,
	aobjEvent32End(),
	    0xE3001A01,
	aobjEvent32EndRaw(0x000, 48),
	    0xE2001E01,
	aobjEvent32End(),
	    0xE2001D00,
	aobjEvent32End(),
	    0xE200001C,
	aobjEvent32EndRaw(0x0A0, 18904),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9DDFFFB,
	aobjEvent32End(),
	    0xFCFFFFFF,
	    0xFFFDF2F9,
	    0xFA000000,
	    0xFFFFFFFF,
	    0xF5900000,
	aobjEvent32SetValBlock(0x202, 48),
	    0xF5800200,  /* -3.245383606990553e+32f */
	    0x00090230,  /* 8.273041925619428e-40f */
	    0xD7000002,
	    0xFFFFFFFF,
	    0xF2000000,
	aobjEvent32EndRaw(0x003, 16444),
	    0xFD900000,
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x158),
	    0xE6000000,
	aobjEvent32End(),
	    0xF3000000,
	aobjEvent32SetValBlock(0x207, 30720),
	    0xE7000000,  /* -6.044629098073146e+23f */
	    0x00000000,  /* 0.0f */
	    0xE7000000,  /* -6.044629098073146e+23f */
	    0x00000000,  /* 0.0f */
	    0xD9FFFBFF,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0xDE8),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0xE18),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0xE48),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0xE78),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0xEA8),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0xED8),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0xF08),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0xF38),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0xF68),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0xF98),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFBFF,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0xFC8),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0xFF8),
	aobjEvent32WaitRaw(0x200, 516),
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x000, 1024),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x044, 4),
	    0xDF000000,
	aobjEvent32End(),
	    0xDE000000,
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x2030),
	    0xDF000000,
	aobjEvent32End(),
	aobjEvent32End(),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x1B18),
	aobjEvent32EndRaw(0x000, 1),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x2228),
	aobjEvent32EndRaw(0x000, 4),
	aobjEvent32End(),
	aobjEvent32End(),
	(u32)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x1F88),
	aobjEvent32EndRaw(0x000, 4),
	aobjEvent32End(),
};

/* DObjDesc: RebirthHalo @ 0x2AC0 (4 entries) */
DObjDesc dEFCommonEffects3_RebirthHalo[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x2238), { 0.0f, -60.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x2250), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x2B70 to 0x2CA8 (312 bytes) */
u32 dEFCommonEffects3_RebirthHalo_AnimJoint[78] = {
	aobjEvent32End(),
	aobjEvent32End(),
	(u32)((u8*)dEFCommonEffects3_RebirthHalo_AnimJoint + 0xC),
	aobjEvent32SetValBlock(0x002, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x002, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x002, 30),
	    0x40C90FDB,  /* 6.2831854820251465f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)((u8*)dEFCommonEffects3_RebirthHalo_AnimJoint + 0xC),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32SetTargetRate(0x195, 6244),
	    0x21000000,  /* 4.336808689942018e-19f */
	    0x00000000,  /* 0.0f */
	    0x00136641,  /* 1.7815562169024638e-39f */
	    0x01EFFFEB,  /* 8.816195860260056e-38f */
	    0x86421100,  /* -3.649983427700129e-35f */
	aobjEvent32EndRaw(0x000, 1),
	    0x35786420,
	aobjEvent32EndRaw(0x01F, 32766),
	    0xDBBA9876,
	    0x66667788,
	    0x9A853100,
	aobjEvent32EndRaw(0x001, 32767),
	    0xFFFFFFEE,
	    0xDCCBBAAA,
	    0x86433210,
	aobjEvent32EndRaw(0x000, 4095),
	    0xFFFFFFFE,
	    0xDCBA8875,
	    0x31000000,
	aobjEvent32EndRaw(0x000, 15),
	    0xFFFFFFFE,
	    0xDB976532,
	aobjEvent32Cmd16(0x222, 0),
	aobjEvent32End(),
	aobjEvent32SetExtVal(0x1BF, 32767),
	    0xFDA86432,  /* -2.797881838727494e+37f */
	    0x22211122,  /* 2.182863875668742e-18f */
	    0x00000000,  /* 0.0f */
	    0x00049CCD,  /* 4.235915062884273e-40f */
	    0xEFECA743,  /* -1.4648133865653486e+29f */
	    0x22211111,  /* 2.1828603601511387e-18f */
	    0x00000000,  /* 0.0f */
	    0x00000123,  /* 4.077778531185218e-43f */
	    0x8ACDCB96,
	    0x42100000,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32SetVal0Rate(0x06A, 26468),
	    0x32100000,  /* 8.381903171539307e-09f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000011,  /* 2.382207389352189e-44f */
	aobjEvent32SetVal0RateBlock(0x000, 0),
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
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
};

/* MObjSub: ItemGetSwirl @ 0x2CA8 */
MObjSub dEFCommonEffects3_ItemGetSwirl_MObjSub = {
	0x0000,
	0x00, 0x00,
	(void**)0x00000000,
	0x0B2D, 0x0BA8, 0x0B2E, 0x0BAA,
	187632556,
	6.472881977195592e-32f, 1.4377322243972623e-42f,
	0.0f, 2.938735877055719e-39f,
	2.938758297831148e-39f, 0.0f,
	(void**)0x00000000,
	0x0000,
	0x00, 0x00,
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
	(u32)((u8*)dEFCommonEffects3_ItemGetSwirl_MatAnimJoint + 0x18),
};

u32 dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x351C[] = {
	(u32)((u8*)dEFCommonEffects3_ItemGetSwirl_MatAnimJoint + 0x34),
};

u32 dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x3520[] = {
	(u32)((u8*)dEFCommonEffects3_ItemGetSwirl_MatAnimJoint + 0x50),
};

u32 dEFCommonEffects3_ItemGetSwirl_MatAnimJoint_0x3524[] = {
	(u32)((u8*)dEFCommonEffects3_ItemGetSwirl_MatAnimJoint + 0x6C),
	aobjEvent32End(),
};

PAD(4);

