/* AnimJoint data for relocData file 1865 (FTYoshiAnimDownForwardU) */
/* 2704 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimDownForwardU_joint1[18];
extern u16 dFTYoshiAnimDownForwardU_joint2[88];
extern u16 dFTYoshiAnimDownForwardU_joint3[20];
extern u16 dFTYoshiAnimDownForwardU_joint4[22];
extern u16 dFTYoshiAnimDownForwardU_joint5[30];
extern u16 dFTYoshiAnimDownForwardU_joint7[10];
extern u16 dFTYoshiAnimDownForwardU_joint8[94];
extern u16 dFTYoshiAnimDownForwardU_joint9[40];
extern u16 dFTYoshiAnimDownForwardU_joint11[10];
extern u16 dFTYoshiAnimDownForwardU_joint12[110];
extern u16 dFTYoshiAnimDownForwardU_joint13[36];
extern u16 dFTYoshiAnimDownForwardU_joint14[30];
extern u16 dFTYoshiAnimDownForwardU_joint15[10];
extern u16 dFTYoshiAnimDownForwardU_joint16[16];
extern u16 dFTYoshiAnimDownForwardU_joint18[20];
extern u16 dFTYoshiAnimDownForwardU_joint19[140];
extern u16 dFTYoshiAnimDownForwardU_joint21[96];
extern u16 dFTYoshiAnimDownForwardU_joint23[138];
extern u16 dFTYoshiAnimDownForwardU_joint24[148];
extern u16 dFTYoshiAnimDownForwardU_joint26[96];
extern u16 dFTYoshiAnimDownForwardU_joint27[126];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTYoshiAnimDownForwardU_joints[] = {
	(AObjEvent32 *)dFTYoshiAnimDownForwardU_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTYoshiAnimDownForwardU_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTYoshiAnimDownForwardU_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTYoshiAnimDownForwardU_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTYoshiAnimDownForwardU_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTYoshiAnimDownForwardU_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTYoshiAnimDownForwardU_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTYoshiAnimDownForwardU_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTYoshiAnimDownForwardU_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTYoshiAnimDownForwardU_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTYoshiAnimDownForwardU_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTYoshiAnimDownForwardU_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTYoshiAnimDownForwardU_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTYoshiAnimDownForwardU_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTYoshiAnimDownForwardU_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTYoshiAnimDownForwardU_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTYoshiAnimDownForwardU_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTYoshiAnimDownForwardU_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTYoshiAnimDownForwardU_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTYoshiAnimDownForwardU_joint26, /* [24] joint 26 */
	NULL, /* [25] NULL */
	(AObjEvent32 *)dFTYoshiAnimDownForwardU_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTYoshiAnimDownForwardU_joint1[18] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 164,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 7), 194, 233,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 23), 4200,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 6), 4200,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimDownForwardU_joint2[88] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1422, 11, 273, 214, 0, 60,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAY, 8), 493, 221,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 9), 28, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 1574, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 5666, 217,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAY, 7), 1215, 1678,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 145, 931,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 3), 861, 1369,
	ftAnimBlock(0, 2),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -1025,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 213, -1455,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 704, -1996,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 816,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 487, 49,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), 109, -604,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 4), 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAY, 11), 6433, 16, 672, 204,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 9), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimDownForwardU_joint3[20] = {
	ftAnimSetVal(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 144, -190,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetValT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 36), 30, 20,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 30), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -89, -20,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimDownForwardU_joint4[22] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 841, 94,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), 1408, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 758, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 16, -24,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTYoshiAnimDownForwardU_joint5[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 249, 17, -524, 76, -379, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 634, 35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 0, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 353, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 78, -14,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimDownForwardU_joint7[10] = {
	ftAnimSetVal(FT_ANIM_ROTX), 0,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 36), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTYoshiAnimDownForwardU_joint8[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -128, 7, -1374, 14, 2752, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1088, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -114, -40, 2805, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -178, -156, 2894, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -428, -401, -982, 54, 3167, 416,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1214, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -980, -419, 3726, 420,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1478, -56, 4226, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1512, -25, -1251, -28, 4260, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1323, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -1723, -36, 4424, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1753, -22, 4488, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -1715, -1, 4468, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1365, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), -1471, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1718, -3, -1476, -5, 4473, 4,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTYoshiAnimDownForwardU_joint9[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -630, -17,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -832, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -825, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -648, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -685, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -782, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -738, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -713, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, -50,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimDownForwardU_joint11[10] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -278, 124, -401,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimDownForwardU_joint12[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -66, -4, 1299, -6, 2626, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1002, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 11, 86, 2736, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 132, 231, 2868, 237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 475, 467, 920, -30, 3210, 461,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1188, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1067, 423, 3791, 409,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1496, 58, 4186, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1547, 37, 1235, 37, 4241, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1287, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 1675, 36, 4306, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1714, 33, 4360, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 4566, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1578, -41,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1344, 55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1666, 40,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4572, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1530, -57, 4584, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1463, -67, 1711, 44, 4606, 21,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimDownForwardU_joint13[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -436, -78,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -743, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -699, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -730, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -786, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -885, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -941, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, -61,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimDownForwardU_joint14[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 224, -5, -131, 4, -289, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 31), 5, 4, -218, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 30), 52, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 0, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -5, 0, 66,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimDownForwardU_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -536, -893, 0, 0, 156, 0,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTYoshiAnimDownForwardU_joint16[16] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 141, -60,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), -562, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), -190, 32,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimDownForwardU_joint18[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -56, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -176, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -529, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 18), -153, 48,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTYoshiAnimDownForwardU_joint19[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 172, 44, -124, 31, 484, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 223, -74, -250, -76, 610, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 119, -55, -318, -34, 801, 92,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 32, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -157, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 762, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 846, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 809, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -72, -45, 990, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 26, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 654, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 567, -95,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 374, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 58, 17, -156, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 57, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 2, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 302, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 304, -116,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -77, -18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 66, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -9, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 34, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -181, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -214, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -192, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -194, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -76, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, 3, 5, 3, -3, 72,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTYoshiAnimDownForwardU_joint21[96] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 416, 258,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 940, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 829, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 703, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 610, -240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 221, -231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 147, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 273, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 288, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 298, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 451, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 343, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 326, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 410, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 265, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 511, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 611, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 529, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 789, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 741, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 682, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 391, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 261, -129,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTYoshiAnimDownForwardU_joint23[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1711, -31, -110, 18, 15, -62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 267, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -172, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1703, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1716, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1799, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 266, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 179, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -262, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -84, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1729, 51, 174, 168,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 185, -200,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1759, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 161, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 47, 11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -81, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -71, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -148, -78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -219, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1752, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -1610, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -71, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -92, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 65, -1, 131, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -59, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -58, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -333, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -305, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1602, 8, -83, -23, -263, 42,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTYoshiAnimDownForwardU_joint24[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -182, -6, 179, 0, 745, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -143, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 179, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 825, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 816, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 772, 27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -140, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -42, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 839, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 797, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 946, 45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 653, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 162, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 38, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -65, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 1, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 569, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 379, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 294, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 291, -115,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -83, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 21, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 33, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -181, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -215, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -199, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -218, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -186, 27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0, -1, -154, 32,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimDownForwardU_joint26[96] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 616, 79,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 842, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 831, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 732, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 640, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 284, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 202, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 293, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 292, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 301, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 449, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 346, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 349, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 429, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 290, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 527, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 625, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 535, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 793, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 742, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 682, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 467, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -89,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTYoshiAnimDownForwardU_joint27[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 86, 5, 1677, 16, -1165, -83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1693, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 128, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1682, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1714, -53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1701, 179,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1660, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1683, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1453, 165,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1431, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 123, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 66, -15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1633, -37, -1691, -124,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1620, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1680, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1757, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1829, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1683, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1605, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 52, -8, -1478, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1804, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1863, -75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1880, 38,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1621, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 1677, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 2, 1697, 20, -1837, 42,
	ftAnimEnd(),
};
