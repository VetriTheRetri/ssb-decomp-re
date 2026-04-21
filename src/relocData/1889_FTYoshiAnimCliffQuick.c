/* AnimJoint data for relocData file 1889 (FTYoshiAnimCliffQuick) */
/* 1184 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimCliffQuick_joint1[28];
extern u16 dFTYoshiAnimCliffQuick_joint2[20];
extern u16 dFTYoshiAnimCliffQuick_joint3[40];
extern u16 dFTYoshiAnimCliffQuick_joint4[30];
extern u16 dFTYoshiAnimCliffQuick_joint5[42];
extern u16 dFTYoshiAnimCliffQuick_joint7[14];
extern u16 dFTYoshiAnimCliffQuick_joint8[68];
extern u16 dFTYoshiAnimCliffQuick_joint9[28];
extern u16 dFTYoshiAnimCliffQuick_joint11[16];
extern u16 dFTYoshiAnimCliffQuick_joint12[28];
extern u16 dFTYoshiAnimCliffQuick_joint13[14];
extern u16 dFTYoshiAnimCliffQuick_joint14[10];
extern u16 dFTYoshiAnimCliffQuick_joint15[24];
extern u16 dFTYoshiAnimCliffQuick_joint16[24];
extern u16 dFTYoshiAnimCliffQuick_joint18[24];
extern u16 dFTYoshiAnimCliffQuick_joint19[24];
extern u16 dFTYoshiAnimCliffQuick_joint21[16];
extern u16 dFTYoshiAnimCliffQuick_joint23[24];
extern u16 dFTYoshiAnimCliffQuick_joint24[24];
extern u16 dFTYoshiAnimCliffQuick_joint26[14];
extern u16 dFTYoshiAnimCliffQuick_joint27[26];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTYoshiAnimCliffQuick_joints[] = {
	(u32)dFTYoshiAnimCliffQuick_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimCliffQuick_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimCliffQuick_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimCliffQuick_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimCliffQuick_joint5, /* [4] joint 5 */
	(u32)dFTYoshiAnimCliffQuick_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTYoshiAnimCliffQuick_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimCliffQuick_joint9, /* [8] joint 9 */
	(u32)dFTYoshiAnimCliffQuick_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTYoshiAnimCliffQuick_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimCliffQuick_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimCliffQuick_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimCliffQuick_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimCliffQuick_joint16, /* [15] joint 16 */
	(u32)dFTYoshiAnimCliffQuick_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTYoshiAnimCliffQuick_joint19, /* [18] joint 19 */
	(u32)dFTYoshiAnimCliffQuick_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTYoshiAnimCliffQuick_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTYoshiAnimCliffQuick_joint24, /* [23] joint 24 */
	(u32)dFTYoshiAnimCliffQuick_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	(u32)dFTYoshiAnimCliffQuick_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTYoshiAnimCliffQuick_joint1[28] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -1756, -2, -220, 643,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX), 11,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 11, -7, -2016, 1171, -220, 147,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 7), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, 2106, 0, 154,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimCliffQuick_joint2[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 672, 0,
	ftAnimSetValRate(FT_ANIM_ROTY), -893, -68,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), -893,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -893, -116,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimCliffQuick_joint3[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -446, -39, 0, -1, 0, 37, -49, -30, 83, 33, 168, 91,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -446, 0, 0, -49, 83, 168,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 10), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -446, 24, 0, -4, -49, 21, 83, -23, 168, -65,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTYoshiAnimCliffQuick_joint4[30] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 172,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -114, -9, -33, -2, 604, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -114, 8, -33, 2, 604, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 0, 35, 0, -40, 0, -67,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTYoshiAnimCliffQuick_joint5[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 600, 329,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 25), -6, 531, 332,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 8,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 11, -965, -80, 0, -20,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, -965, 141, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -3, 59, 1012, 34, 0, -1,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimCliffQuick_joint7[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 460,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), 0, -12,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 8,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimCliffQuick_joint8[68] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 6144,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1481, -73, -976, -48, -2189, 84,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1026, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_SCAX, 5), 1598, 86, -2312, -96, 7577, -409,
	ftAnimSetValRateT(FT_ANIM_SCAX, 5), 4096, -386,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1700, -205, -2424, 217,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 560, -579,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1034, -85, -1876, 543,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1197, -264, -1338, 436,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 28, -287, -1563, -245, -1004, 264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -14, -43, -1688, -124, -809, 195,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTYoshiAnimCliffQuick_joint9[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1041, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -589, 520,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 589,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimCliffQuick_joint11[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -625,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -625, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 0, 27,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimCliffQuick_joint12[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1217, 0, 429, -1, -1854, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -1208, 3, 489, 23, -1869, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1201, 7, 513, 23, -1870, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimCliffQuick_joint13[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimCliffQuick_joint14[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 8,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTYoshiAnimCliffQuick_joint15[24] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -536, -893, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -536, -9, -893, -1, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -694, 11, -913, -1, 0, 0,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTYoshiAnimCliffQuick_joint16[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -108, 6, 112, 8, 20, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -108, 112, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -108, -4, 112, -6, 20, -1,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimCliffQuick_joint18[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -123, 2, 245, 18, -25, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -123, 245, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -123, -1, 245, -13, -25, 1,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTYoshiAnimCliffQuick_joint19[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 64, 11, 168, 7, 594, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 64, 0, 175, 2, 586, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 63, 0, 177, 2, 583, -2,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTYoshiAnimCliffQuick_joint21[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 6, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTYoshiAnimCliffQuick_joint23[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1868, 12, -225, 0, 323, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -1877, -2, -226, 0, 339, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1879, -2, -226, 0, 344, 4,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTYoshiAnimCliffQuick_joint24[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -7, -10, -39, -44, 493, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -8, 0, -39, 0, 509, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -8, 0, -38, 0, 510, 0,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimCliffQuick_joint26[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 6,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTYoshiAnimCliffQuick_joint27[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 1167, -7, 345, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1116, -21, -46, 0, 360, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1088, -27, -45, 0, 364, 4,
	ftAnimEnd(),
	0x0000, 0x0000,
};
