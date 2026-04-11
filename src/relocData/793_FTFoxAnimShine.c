/* AnimJoint data for relocData file 793 (FTFoxAnimShine) */
/* 1232 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimShine_joint1[30];
extern u16 dFTFoxAnimShine_joint2[8];
extern u16 dFTFoxAnimShine_joint4[8];
extern u16 dFTFoxAnimShine_joint5[48];
extern u16 dFTFoxAnimShine_joint6[32];
extern u16 dFTFoxAnimShine_joint7[10];
extern u16 dFTFoxAnimShine_joint8[10];
extern u16 dFTFoxAnimShine_joint10[10];
extern u16 dFTFoxAnimShine_joint11[70];
extern u16 dFTFoxAnimShine_joint12[32];
extern u16 dFTFoxAnimShine_joint13[12];
extern u16 dFTFoxAnimShine_joint15[10];
extern u16 dFTFoxAnimShine_joint16[48];
extern u16 dFTFoxAnimShine_joint18[32];
extern u16 dFTFoxAnimShine_joint20[34];
extern u16 dFTFoxAnimShine_joint21[40];
extern u16 dFTFoxAnimShine_joint23[32];
extern u16 dFTFoxAnimShine_joint24[62];
extern u16 dFTFoxAnimShine_joint25[36];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimShine_joints[] = {
	(u32)dFTFoxAnimShine_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimShine_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimShine_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimShine_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimShine_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimShine_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimShine_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimShine_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimShine_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimShine_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimShine_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimShine_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimShine_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimShine_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimShine_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimShine_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimShine_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimShine_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimShine_joint25, /* [24] joint 25 */
	0xFFFF012B, /* [25] END */
};

/* Joint 1 */
u16 dFTFoxAnimShine_joint1[30] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 679,
	ftAnimSetValRate(FT_ANIM_TRAZ), -60, 448,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 48,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 777, 236,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 946, -7,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 936, -51, -5, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 912, -20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimShine_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -141, -338, -3,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTFoxAnimShine_joint4[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 156, 81,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimShine_joint5[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 34, -22, -137, 61, -841, 81,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 7, -58, 42, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -261, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -242, 44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 256, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -51, -48, 10, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -111, 2, -161, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -109, 1, -165, -4, 258, 2,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimShine_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -701, 14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -712, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -590, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -590, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -561, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimShine_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimShine_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -113, 136, -72, 0, 336, 0,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimShine_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimShine_joint11[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -427, -59, -324, 165, -541, 115,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 382, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -338, 87, -78, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -261, 46, 17, 57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -87, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -178, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 362, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 252, 16,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -19, 67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 328, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -114, 61, 264, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 126, 11, 272, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 132, 6, 271, 0, 336, 8,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimShine_joint12[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -345, -247,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -884, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -786, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -332, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -375, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -588, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimShine_joint13[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 357,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 272, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 18), 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimShine_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimShine_joint16[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -220, -14, -404, 18, -332, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -415, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -202, 44, -2, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -166, 17, 32, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -221, -4, -24, -4,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -411, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -406, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -405, 0, -223, -2, -26, -2,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimShine_joint18[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 858, 16,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 489, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 319, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 292, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 317, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 349, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimShine_joint20[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 48, -14, 122, -8, -249, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 17), 46, 0, 125, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -52, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -54, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 46, 0, 125, 0, -56, -1,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimShine_joint21[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 260, 25, 290, -12, 392, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 198, 27, 313, -34, 224, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 230, 26, 276, -30, 211, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 352, 5, 141, -6, 135, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 355, 2, 137, -3, 134, -1,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimShine_joint23[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 313, -102,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 289, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 418, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 507, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 469, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 337, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimShine_joint24[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 330, -3, -182, 0, -556, 64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -292, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -96, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -276, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -233, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -242, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -308, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -106, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -86, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 15, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -235, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -229, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 15, 0, -102, 4, -226, 2,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimShine_joint25[36] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 442, -18, 339, -4, 140, -5,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 0, 219, 0,
	ftAnimEnd(),
	0x0000, 0x2806, 0x0000, 0xFFF9, 0x0000, 0xFFFB, 0x48E8, 0x0000, 0x0000, 0x0040, 0xFE3E, 0x3807, 0x0012, 0xFF4E, 0xFF86, 0x0000, 0x0000, 0x0000, 0x0000,
};
