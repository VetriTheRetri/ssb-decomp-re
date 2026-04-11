/* AnimJoint data for relocData file 1901 (FTYoshiAnimCliffEscapeSlow1) */
/* 1264 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimCliffEscapeSlow1_joint1[34];
extern u16 dFTYoshiAnimCliffEscapeSlow1_joint2[22];
extern u16 dFTYoshiAnimCliffEscapeSlow1_joint3[38];
extern u16 dFTYoshiAnimCliffEscapeSlow1_joint4[40];
extern u16 dFTYoshiAnimCliffEscapeSlow1_joint5[46];
extern u16 dFTYoshiAnimCliffEscapeSlow1_joint7[14];
extern u16 dFTYoshiAnimCliffEscapeSlow1_joint8[28];
extern u16 dFTYoshiAnimCliffEscapeSlow1_joint9[14];
extern u16 dFTYoshiAnimCliffEscapeSlow1_joint11[16];
extern u16 dFTYoshiAnimCliffEscapeSlow1_joint12[28];
extern u16 dFTYoshiAnimCliffEscapeSlow1_joint13[16];
extern u16 dFTYoshiAnimCliffEscapeSlow1_joint14[18];
extern u16 dFTYoshiAnimCliffEscapeSlow1_joint15[16];
extern u16 dFTYoshiAnimCliffEscapeSlow1_joint16[20];
extern u16 dFTYoshiAnimCliffEscapeSlow1_joint18[20];
extern u16 dFTYoshiAnimCliffEscapeSlow1_joint19[24];
extern u16 dFTYoshiAnimCliffEscapeSlow1_joint21[16];
extern u16 dFTYoshiAnimCliffEscapeSlow1_joint23[38];
extern u16 dFTYoshiAnimCliffEscapeSlow1_joint24[64];
extern u16 dFTYoshiAnimCliffEscapeSlow1_joint26[66];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTYoshiAnimCliffEscapeSlow1_joints[] = {
	(u32)dFTYoshiAnimCliffEscapeSlow1_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimCliffEscapeSlow1_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimCliffEscapeSlow1_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimCliffEscapeSlow1_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimCliffEscapeSlow1_joint5, /* [4] joint 5 */
	(u32)dFTYoshiAnimCliffEscapeSlow1_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTYoshiAnimCliffEscapeSlow1_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimCliffEscapeSlow1_joint9, /* [8] joint 9 */
	(u32)dFTYoshiAnimCliffEscapeSlow1_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTYoshiAnimCliffEscapeSlow1_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimCliffEscapeSlow1_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimCliffEscapeSlow1_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimCliffEscapeSlow1_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimCliffEscapeSlow1_joint16, /* [15] joint 16 */
	(u32)dFTYoshiAnimCliffEscapeSlow1_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTYoshiAnimCliffEscapeSlow1_joint19, /* [18] joint 19 */
	(u32)dFTYoshiAnimCliffEscapeSlow1_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTYoshiAnimCliffEscapeSlow1_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTYoshiAnimCliffEscapeSlow1_joint24, /* [23] joint 24 */
	(u32)dFTYoshiAnimCliffEscapeSlow1_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	0xFFFF0129, /* [26] END */
};

/* Joint 1 */
u16 dFTYoshiAnimCliffEscapeSlow1_joint1[34] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX), 13,
	ftAnimSetValRate(FT_ANIM_TRAZ), -214, -4,
	ftAnimSetValBlock(FT_ANIM_TRAY), -519,
	ftAnimSetValT(FT_ANIM_TRAY, 8), -519,
	ftAnimSetValRateT(FT_ANIM_TRAX, 8), 13, -10,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 7), -115, 90,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 3), 0, 702,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 415,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 0, -35, 0, 1385,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimCliffEscapeSlow1_joint2[22] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 672, 0,
	ftAnimSetValRate(FT_ANIM_ROTY), 0, 17,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 268, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -178, -7,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimCliffEscapeSlow1_joint3[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -914, 28, 0, -1, -194, 34, -455, -50, -133, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 10), -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -224, 68,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -129, 59, -2, -51, 40, 158,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -119, 589, -520, -1218, 64, 44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTYoshiAnimCliffEscapeSlow1_joint4[40] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 172,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 962, -54, 7, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 745, -16, 6, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 829, 1, 0, 51, 5, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 759, -6, 357, -2, 0, 6,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTYoshiAnimCliffEscapeSlow1_joint5[46] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 478, 353,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 600, 329,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 82, -12, 1, 7, -18, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -367, -61, 103, -5, 0, 14,
	ftAnimBlock(0, 3),
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, 600, 329,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -589, -19, -64, -1, 139, -15,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimCliffEscapeSlow1_joint7[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 0, -3,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 100), 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 30,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimCliffEscapeSlow1_joint8[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -922, 1, -126, 0, 126, 4,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -901, 1, -112, 0, 190, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -900, 1, -112, 0, 194, 3,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTYoshiAnimCliffEscapeSlow1_joint9[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1093, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1093, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -1093,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTYoshiAnimCliffEscapeSlow1_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -31, -804, 76,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -670, -33, 0, 40,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimCliffEscapeSlow1_joint12[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1668, -4, 1274, -2, -2476, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -1751, -7, 1229, -3, -2488, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1757, -5, 1226, -2, -2489, -1,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimCliffEscapeSlow1_joint13[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -558, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimCliffEscapeSlow1_joint14[18] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -31, -804, 76,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 11), -670,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 0, 17,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTYoshiAnimCliffEscapeSlow1_joint15[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -870, 5, -429, 26, 314, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -625, 21, 89, 39, 0, -18,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTYoshiAnimCliffEscapeSlow1_joint16[20] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -354, -3, 56, 4, 10, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, 14, 268, -12, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimCliffEscapeSlow1_joint18[20] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -589, -8, 122, 1, -12, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -232, 14, 268, -15, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTYoshiAnimCliffEscapeSlow1_joint19[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 140, -15, 135, -19, 821, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -285, -49, -274, -54, 855, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -331, -45, -323, -49, 866, 10,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTYoshiAnimCliffEscapeSlow1_joint21[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 6, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTYoshiAnimCliffEscapeSlow1_joint23[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -83, 8, -1372, 9, -1272, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 200, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1329, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1769, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1866, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 224, 2, -1942, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 205, -18, -1352, -22, -1994, -52,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTYoshiAnimCliffEscapeSlow1_joint24[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -14, 24, -15, 25, 799, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -243, -171,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 364, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 800, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 555, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 45, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -428, -161, -130, -144,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -295, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -536, 295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 360, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 465, 66,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -183, 315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -54, 481, 503, 37, 336, 519,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimCliffEscapeSlow1_joint26[66] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 412, 325,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 946, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 908, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 743, -165,
	ftAnimEnd(),
	0x0000, 0x200E, 0xF996, 0x001A, 0xFFAB, 0x0010, 0x0169, 0xFFF1, 0x280D, 0x0008, 0x00B2, 0x0009, 0x006A, 0x0000, 0x2003, 0x0007, 0xF9EA, 0xFFCE, 0x2003, 0x0001, 0xF9B7, 0xFFFB, 0x200F, 0x0001, 0xF9DF, 0x0032, 0x00A7, 0xFFD9, 0x0086, 0x003F, 0x200F, 0x0001, 0xFA1B, 0x003C, 0x0063, 0xFFBC, 0x00EA, 0x0063, 0x0000,
};
