/* AnimJoint data for relocData file 1929 (FTYoshiAnimFSmashHigh) */
/* 3168 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimFSmashHigh_joint1[30];
extern u16 dFTYoshiAnimFSmashHigh_joint2[62];
extern u16 dFTYoshiAnimFSmashHigh_joint3[132];
extern u16 dFTYoshiAnimFSmashHigh_joint4[96];
extern u16 dFTYoshiAnimFSmashHigh_joint6[10];
extern u16 dFTYoshiAnimFSmashHigh_joint7[78];
extern u16 dFTYoshiAnimFSmashHigh_joint10[40];
extern u16 dFTYoshiAnimFSmashHigh_joint11[92];
extern u16 dFTYoshiAnimFSmashHigh_joint12[40];
extern u16 dFTYoshiAnimFSmashHigh_joint13[10];
extern u16 dFTYoshiAnimFSmashHigh_joint14[10];
extern u16 dFTYoshiAnimFSmashHigh_joint15[40];
extern u16 dFTYoshiAnimFSmashHigh_joint17[40];
extern u16 dFTYoshiAnimFSmashHigh_joint18[136];
extern u16 dFTYoshiAnimFSmashHigh_joint20[56];
extern u16 dFTYoshiAnimFSmashHigh_joint22[156];
extern u16 dFTYoshiAnimFSmashHigh_joint23[210];
extern u16 dFTYoshiAnimFSmashHigh_joint25[104];
extern u16 dFTYoshiAnimFSmashHigh_joint26[190];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTYoshiAnimFSmashHigh_joints[] = {
	(AObjEvent32 *)dFTYoshiAnimFSmashHigh_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTYoshiAnimFSmashHigh_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTYoshiAnimFSmashHigh_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTYoshiAnimFSmashHigh_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTYoshiAnimFSmashHigh_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTYoshiAnimFSmashHigh_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTYoshiAnimFSmashHigh_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTYoshiAnimFSmashHigh_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTYoshiAnimFSmashHigh_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTYoshiAnimFSmashHigh_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTYoshiAnimFSmashHigh_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTYoshiAnimFSmashHigh_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTYoshiAnimFSmashHigh_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTYoshiAnimFSmashHigh_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTYoshiAnimFSmashHigh_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTYoshiAnimFSmashHigh_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTYoshiAnimFSmashHigh_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTYoshiAnimFSmashHigh_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTYoshiAnimFSmashHigh_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimFSmashHigh_joint1[30] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 672, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 314, 29, -269, 453,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 738, 105, 1020, 79,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 23), 672, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 672, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimFSmashHigh_joint2[62] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -12, -89, -17, 30, 9, 20, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 43, -19, 25, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 14), -705, -15, -1008, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -276, 85, 0, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -276, 28, 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 11), 65, 8, 37, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 21), 0, 0, -89, -1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), -81, -5, 24, -1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 30, 16, 20, -12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimFSmashHigh_joint3[132] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 16, 0, 0, -13, 0, 11,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 172,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 0, 45, 172, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 19), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 94, 20, -614, -21, 506, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 326, 95, -329, 153, 348, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 477, 9, 0, 24, 0, -25, 103, 223, 172, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 466, -3, 30, 1, -32, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 111, 172,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 57, 103, -94, 172, -309,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 52, -34, -20, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 3), 36,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, -52, 72, 14, 172, 279,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 63, -25, 189, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 2), -3,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 21), 0, 0, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 432, -3, 27, -1, -28, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 437, 0, 21, 0, -18, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 437, -35, 21, -1, -18, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 16, -10, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimFSmashHigh_joint4[96] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX), 0, 600, 329, 4096,
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 78, 6,
	ftAnimSetValBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAZ, 18), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 277, 4, 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_SCAY, 17), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_SCAY, 1), 8192, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 202, 1,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 27), -7, -29,
	ftAnimSetValRateBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 8192, -3072, 4096, 409,
	ftAnimSetValRateBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 2048, -3072, 4915, 409,
	ftAnimSetValRateBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 2048, 1024, 4915, -409,
	ftAnimSetValRateBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 1228, 4096, -327,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 312, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 5120, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 23), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_SCAY, 3), 4096, -511,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY, 1), 4096,
	ftAnimSetValT(FT_ANIM_SCAY, 19), 4096,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 78, -4, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimFSmashHigh_joint6[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 48, 120,
	ftAnimBlock(0, 51),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimFSmashHigh_joint7[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1498, -5, -1476, 0, 1256, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), 961, -20, -1616, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1725, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1716, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), 1523, -30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 950, -4, -1609, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), 1433, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 20), -1566, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1552, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1476, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1492, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1258, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1446, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 1497, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1498, 0, -1476, 0, 1256, -2,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTYoshiAnimFSmashHigh_joint10[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -764, -11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -812, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -534, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -554, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -891, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -877, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -766, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimFSmashHigh_joint11[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -145, -6, -103, 1, -219, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 154, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -697, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 145, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 162, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 52, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 120, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), 99, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -775, -67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -746, 28,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 61, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 50, -21,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -715, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), -146, 2,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 28, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -102, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 70, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -217, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -145, 1, -103, 0, -219, -2,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimFSmashHigh_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1002, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -885, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -791, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -530, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -548, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -1083, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1074, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1003, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimFSmashHigh_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 172, 0, 0,
	ftAnimBlock(0, 51),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimFSmashHigh_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -536, -893, 0, 0, 156, 0,
	ftAnimBlock(0, 51),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimFSmashHigh_joint15[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -190, 4, 0, 5, 0, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 349, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 282, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, -49, 0, -18, 0, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -499, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -29, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -190, 21, 0, 1, 0, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTYoshiAnimFSmashHigh_joint17[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -153, -14, 0, -12, 0, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -583, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -603, 568,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -133, 7, 0, 39, 0, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -463, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 63, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -153, 15, 0, -1, 0, 1,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimFSmashHigh_joint18[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, 0, 5, 2, -3, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 57, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), -51, -24, 745, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -69, 6, 943, 142,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1127, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 79, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 319, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 500, 56, 100, 87, 1139, -55,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 322, -20, 934, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 431, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 259, -201,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, -161, 908, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -129, 0, -95, 814, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -4, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -1, 858, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 507, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), 5, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -7, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), -6, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 461, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 222, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 178, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -204, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -265, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -41, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, 0, 5, 0, -3, 37,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimFSmashHigh_joint20[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 262, -26,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 171, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 394, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 503, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 712, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 690, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 325, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 262, -63,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimFSmashHigh_joint22[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1602, -1, -83, -27, -263, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -736, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -1639, -56, -372, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1726, -165, -282, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1971, -460, -15, 490,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2647, -555, -746, 24, 697, 561,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -3632, -46, 1540, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -320, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -141, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -596, -517,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3644, 69, 1761, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3492, -1, 1778, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3647, 99, -1305, -505, 2143, 156,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1613, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3293, 183, 2090, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3280, 12, 2013, -85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1587, -63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), -3222, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1618, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -1527, 2,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1522, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1297, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1249, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1156, 16,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3217, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -3210, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1182, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1316, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3210, 0, -1524, 2, 1344, 27,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimFSmashHigh_joint23[210] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 8, 0, -9, -154, 166,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 110, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 220, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 12, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 338, 274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 674, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 131, -54, 679, -134,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -140, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 404, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 211, -153,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -5, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -152, -7, 182, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 206, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -163, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -177, 167, 21, 313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 171, 65, 442, -206, 622, 248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -46, 28, -206, -330, 518, -329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 228, 16, -218, 109, -36, -266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -13, -119, 13, 115, -13, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -13, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -36, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 13, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -54, -16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -15, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 25, 21,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -67, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -386, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -484, -90,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -713, 66,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -72, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 5, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -644, 73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -720, -10,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 44, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 5, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -725, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -321, 97,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 0, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -226, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -4, 0, 1, -154, 72,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimFSmashHigh_joint25[104] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 378, 73,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 452, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 253, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 391, 311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 629, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 838, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 761, -415,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -377,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 282, 208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 757, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 825, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 546, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 569, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 669, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 562, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 455, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -76,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTYoshiAnimFSmashHigh_joint26[190] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1607, 11, -89, 213, -228, -127,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 602, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1416, 173, -312, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1248, 179, -31, 266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1056, 31, 220, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1185, -88, 521, -97, 39, -143,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1318, -53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -259, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -121, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -278, -110,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -256, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1360, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1429, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1404, 117, -214, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1195, -188, -203, 112, 61, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1781, -352, -35, -28, -189, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1900, 105, -260, 28, 471, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1571, 165, 20, 132, 223, -97,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1565, 3, 317, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 5, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 36, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1561, 3, 285, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1554, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 92, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 53, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 3, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1571, -9, -19, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -70, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -1611, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 27, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -92, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -112, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -231, 7,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -91, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1607, 3, -89, 1, -228, 2,
	ftAnimEnd(),
	0x0000, 0x0000,
};
