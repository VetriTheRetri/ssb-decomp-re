/* AnimJoint data for relocData file 1869 (FTYoshiAnimDownAttackU) */
/* 4160 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimDownAttackU_joint1[72];
extern u16 dFTYoshiAnimDownAttackU_joint2[58];
extern u16 dFTYoshiAnimDownAttackU_joint3[30];
extern u16 dFTYoshiAnimDownAttackU_joint4[76];
extern u16 dFTYoshiAnimDownAttackU_joint6[12];
extern u16 dFTYoshiAnimDownAttackU_joint7[186];
extern u16 dFTYoshiAnimDownAttackU_joint8[46];
extern u16 dFTYoshiAnimDownAttackU_joint10[16];
extern u16 dFTYoshiAnimDownAttackU_joint11[192];
extern u16 dFTYoshiAnimDownAttackU_joint12[56];
extern u16 dFTYoshiAnimDownAttackU_joint13[56];
extern u16 dFTYoshiAnimDownAttackU_joint14[10];
extern u16 dFTYoshiAnimDownAttackU_joint15[36];
extern u16 dFTYoshiAnimDownAttackU_joint17[36];
extern u16 dFTYoshiAnimDownAttackU_joint18[242];
extern u16 dFTYoshiAnimDownAttackU_joint20[78];
extern u16 dFTYoshiAnimDownAttackU_joint22[240];
extern u16 dFTYoshiAnimDownAttackU_joint23[242];
extern u16 dFTYoshiAnimDownAttackU_joint25[94];
extern u16 dFTYoshiAnimDownAttackU_joint26[250];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimDownAttackU_joints[] = {
	(u32)dFTYoshiAnimDownAttackU_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimDownAttackU_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimDownAttackU_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimDownAttackU_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimDownAttackU_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimDownAttackU_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimDownAttackU_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimDownAttackU_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimDownAttackU_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimDownAttackU_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimDownAttackU_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimDownAttackU_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimDownAttackU_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimDownAttackU_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimDownAttackU_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimDownAttackU_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimDownAttackU_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimDownAttackU_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimDownAttackU_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTYoshiAnimDownAttackU_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimDownAttackU_joint1[72] = {
	ftAnimSetValAfter(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX), 1422, 23,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_TRAY), 0, 273,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 822, -29,
	ftAnimSetValT(FT_ANIM_TRAY, 18), 614,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 10), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 4), 857,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 884, -59,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 4), 1608,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 285, 31,
	ftAnimSetValT(FT_ANIM_ROTY, 7), 3216,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 5), 960,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 881,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 8), 1441,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 0, -10,
	ftAnimBlock(0, 2),
	ftAnimSetValT(FT_ANIM_ROTY, 17), 3216,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 11), 672, -1333,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 8), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 8), 3216, 672,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimDownAttackU_joint2[58] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 144, -190,
	ftAnimSetValAfter(FT_ANIM_ROTZ), 0,
	ftAnimSetValT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 18), 176, -59,
	ftAnimSetValT(FT_ANIM_ROTY, 35), 0,
	ftAnimSetValT(FT_ANIM_TRAX, 42), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 14), -337,
	ftAnimSetValT(FT_ANIM_ROTX, 28), 0,
	ftAnimBlock(0, 4),
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 195, -89,
	ftAnimSetValT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), 30, 20,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -89, -10,
	ftAnimSetValT(FT_ANIM_ROTX, 8), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -89, -10,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, -133, 20,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 30, 20,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimDownAttackU_joint3[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 841, -20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 965, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1228, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 1123, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 19), 16, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 16, -46,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimDownAttackU_joint4[76] = {
	ftAnimSetValAfter(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 249, -56, -524, 72, -379, 52,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 600, 329,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 457, 21,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 600, 329,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 398, -111, 391, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 644, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 489, 337,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 32), 0, 489, 337,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 390, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 892, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 251, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 78, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 78, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTYoshiAnimDownAttackU_joint6[12] = {
	ftAnimSetVal(FT_ANIM_ROTX), 0,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 42), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 8), 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimDownAttackU_joint7[186] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1737, 60, -233, -39, 1144, -94,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1781, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -125, 94, 1384, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -25, 60, 1507, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -2, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1431, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1778, -1, 1457, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1770, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1599, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, -2, 1520, -70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1705, 167,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -97, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1748, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1776, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1933, -453,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2684, -535, 1881, 153,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2124, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3003, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -3062, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3079, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -3249, -30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2172, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 3086, 52,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3286, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -3600, -163,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -127, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -132, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3127, 76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 3252, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3779, -102,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -3395, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -74, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -237, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3139, -95,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2849, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -229, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -164, 35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3345, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3327, 17, -131, 32, 2864, 15,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimDownAttackU_joint8[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -630, -21,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -435, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 31), -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -379, -332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -665, -248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -851, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -765, 86,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTYoshiAnimDownAttackU_joint10[16] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -278, 124, -401,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 42), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimDownAttackU_joint11[192] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1541, 4, 308, 5, 1017, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1813, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 187, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1092, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1299, 157,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1587, 44,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1846, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1855, -65,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 169, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1730, -63, 15, -81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1807, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 7, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), 52, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1643, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1717, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1746, -44, 1634, -76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1794, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1719, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1769, 252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2225, 633,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3037, 449, 1959, 148,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2189, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3124, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3140, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 3382, 35,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2236, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 3117, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 54, -57, 3154, 169,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -59, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3411, -26, 3456, 199,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 3175, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3552, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, 29, 3524, -171,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -91, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3209, -207,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3021, -70,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3150, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3105, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2967, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2959, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3071, -33, -103, -11, 2997, 38,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimDownAttackU_joint12[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -436, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -367, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -98, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -336,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -672, -468,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -945, -253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1310, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1267, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1096, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, 93,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimDownAttackU_joint13[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 224, 13, -131, -31, -289, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), 276, -1, -405, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -385, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -402, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 18), 196, -6, -122, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -465, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -479, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 0, 17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), 0, -8, 0, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, -8, 0, 8, 0, 17,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimDownAttackU_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -536, -893, 0, 0, 156, 0,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimDownAttackU_joint15[36] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 141, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -379, 9, 24,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 238, 8, 22,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -347, 8, 20,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 198, 4, 10,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -190, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -190, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTYoshiAnimDownAttackU_joint17[36] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -56, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -299, 3, 13,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -121, 2, 12,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -275, 2, 11,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 115, 1, 6,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -153, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -153, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimDownAttackU_joint18[242] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1781, -33, -1484, 3, -1124, -63,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1565, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1514, 2,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 17), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1389, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1410, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1199, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1157, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -811, 38,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1559, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1329, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1527, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1827, 40,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -783, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -967, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1843, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1844, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1421, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1479, -148, -990, 513,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 5873, 2321, 2297,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1650, -103, -1718, -95, 59, 605,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 6963, 5324, 5324,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1639, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 1594, -11, 4096, -6590, 4096, -2839, 4096, -2836,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 219, 95,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -9, -352,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1630, 16,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 21), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), -1612, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1587, -2, -455, -286,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1574, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -719, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -859, -145,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1348, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1472, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1121, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1540, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1574, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1574, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 1598, 4,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1349, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1350, 33,
	ftAnimBlock(0, 4),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1291, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1548, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1671, -107,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1775, 96,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1611, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1602, 4, -1613, -2, -1612, 162,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimDownAttackU_joint20[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 416, 92,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 635, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 544, -261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 112, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 253, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -126,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 544, 340,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 681, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 573, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 261, -311,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimDownAttackU_joint22[240] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -102, 25, 1718, -60, 1624, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 60, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1572, 8, 1810, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1578, -5, 1913, 73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1533, 57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1878, -67,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 75, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -145, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1637, 162,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1996, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1826, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -307, 12, 1839, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -121, 46, 1810, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -215, -51, 1571, -301, 2063, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -225, 388, 1393, 24, 2150, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 561, 90, 1620, 54, 2158, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -43, -195, 1503, -38, 1777, -427,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 170, 50, 1544, 31, 1302, -187,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1567, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 57, -88, 1403, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -7, -37, 1604, 98,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -3, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1599, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1915, 140,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 59, 179, 1485, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 355, -14, 1243, 31, 2094, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 31, -172, 1547, 165, 1987, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 13, 2, 1574, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2015, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1950, -82,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 15, 1, 1575, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 21, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1675, 1,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1846, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1404, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 35, 5, 1316, -82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1240, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1004, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1062, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1678, 3, 1119, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1682, 7, 1199, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6, 0, 1692, 9, 1344, 145,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimDownAttackU_joint23[242] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1791, 33, -1787, 18, 2354, 47,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1803, -119,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1591, 41,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 13), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 2586, 252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2906, 189,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3023, 47,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1937, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2071, 188, -1550, 110, 3059, -562,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1559, 138, -1370, -4, 1899, -447,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1794, -839, -1559, -102, 2165, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1824, -256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3237, -1506, 1940, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4806, -818, 1779, -108,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1803, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4875, -212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -5231, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5344, -222, -2163, -153, 1878, -109,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5676, -31, -2131, 28, 1584, -39,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 8192, 6144, 6144,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5406, 371, -2107, 41, 1798, 335,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4932, 266, -2047, 166, 2254, 196,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 34), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4873, 55, -1774, 196, 2192, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2096, -120,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -4726, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1612, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1597, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), -1609, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1952, -123,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 1683, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4707, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -4822, -3,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1693, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1713, 14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4825, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -4827, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1740, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1626, -244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1251, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1265, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1288, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1375, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4825, 1, -1608, 0, 1454, 78,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimDownAttackU_joint25[94] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 616, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 425, -300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 477,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 954, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -477,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 634, 262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 524, -313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 263, 475,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 958, 306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 877, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 784, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 549, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -170,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimDownAttackU_joint26[250] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 86, 49, 1677, -12, -1165, -150,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1779, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -58, -93, 1288, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -154, -10, 1214, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -80, 155, 1324, 85, -1853, 292,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 156, 806, 1384, 244, -1194, 649,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2991, 813,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1813, 6, -553, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1396, -169, -1087, -309,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3160, 115, 1474, -147, -1173, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3223, 358, 1101, -82, -893, 131,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1552, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3877, 453, -909, -247,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 3481, -346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1388, -244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1486, -88, -1399, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1434, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1298, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1309, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3172, -147, 1702, 89, -1113, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3187, -38, 1612, -60, -1424, -177,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1217, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3096, -77, 1580, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 2965, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1717, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1084, 122,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1042, -57,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2928, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 2958, 46,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1721, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1864, 59,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3006, 25, -1101, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 3006, 29, -1192, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3057, 135, -1340, -286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3277, 94, 1916, -18, -1765, -269,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1754, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3247, -46, -1880, -131,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2071, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 3213, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1737, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1700, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2026, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1915, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3217, 3, 1697, -2, -1837, 78,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
