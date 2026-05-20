/* AnimJoint data for relocData file 1858 (FTYoshiAnimStunLandD) */
/* 1840 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimStunLandD_joint1[50];
extern u16 dFTYoshiAnimStunLandD_joint2[10];
extern u16 dFTYoshiAnimStunLandD_joint3[28];
extern u16 dFTYoshiAnimStunLandD_joint4[20];
extern u16 dFTYoshiAnimStunLandD_joint6[18];
extern u16 dFTYoshiAnimStunLandD_joint7[132];
extern u16 dFTYoshiAnimStunLandD_joint10[52];
extern u16 dFTYoshiAnimStunLandD_joint11[126];
extern u16 dFTYoshiAnimStunLandD_joint12[40];
extern u16 dFTYoshiAnimStunLandD_joint13[20];
extern u16 dFTYoshiAnimStunLandD_joint14[10];
extern u16 dFTYoshiAnimStunLandD_joint15[22];
extern u16 dFTYoshiAnimStunLandD_joint17[18];
extern u16 dFTYoshiAnimStunLandD_joint18[62];
extern u16 dFTYoshiAnimStunLandD_joint20[32];
extern u16 dFTYoshiAnimStunLandD_joint22[72];
extern u16 dFTYoshiAnimStunLandD_joint23[70];
extern u16 dFTYoshiAnimStunLandD_joint25[40];
extern u16 dFTYoshiAnimStunLandD_joint26[46];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTYoshiAnimStunLandD_joints[] = {
	(AObjEvent32 *)dFTYoshiAnimStunLandD_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTYoshiAnimStunLandD_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTYoshiAnimStunLandD_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTYoshiAnimStunLandD_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTYoshiAnimStunLandD_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTYoshiAnimStunLandD_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTYoshiAnimStunLandD_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTYoshiAnimStunLandD_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTYoshiAnimStunLandD_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTYoshiAnimStunLandD_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTYoshiAnimStunLandD_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTYoshiAnimStunLandD_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTYoshiAnimStunLandD_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTYoshiAnimStunLandD_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTYoshiAnimStunLandD_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTYoshiAnimStunLandD_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTYoshiAnimStunLandD_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTYoshiAnimStunLandD_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTYoshiAnimStunLandD_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimStunLandD_joint1[50] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY), -254, -37, 837, 1034,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 8), 1680,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -419, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -284, 104,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_TRAY, 12), 101, -1591,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -72, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -242, 114,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 1334,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 6), 265, -811,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimStunLandD_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 144, -190,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimStunLandD_joint3[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 949, 57,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 1234, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 733, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 534, 9,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 934, -105,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimStunLandD_joint4[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 334, -199,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -331, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -529, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -607, -42,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTYoshiAnimStunLandD_joint6[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 74,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 358, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 0, -170,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 15), 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimStunLandD_joint7[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1852, 68, -1271, -48, 1252, -57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1247, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -1605, -17, -1558, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1647, -102, -1494, 104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2407, -337,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -957, 102,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1442, 196,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1988, 556,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2781, -564,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3536, -567, -917, -16, 2754, 571,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2949, -62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1076, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3917, -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -3827, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3744, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3804, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2910, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -997, 74, 2974, 225,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1134, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4204, -417, 3361, 412,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4639, -286, 3799, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4776, -76, 3949, 87,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -4799, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 3944, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3965, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4774, 24, -1051, 83, 3902, -63,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTYoshiAnimStunLandD_joint10[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -604, -21,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -544, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -572, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1051, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -975, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -353, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -360, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -621, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -658, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -457, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -537, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, -57,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimStunLandD_joint11[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1882, -61, -1868, 47, 1346, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1287, 69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1993, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 1625, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1674, 93,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2350, 352,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1377, 146,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1927, 575,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2154, -147,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -2243, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2732, 592,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3535, 586, 2731, 586,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 3016, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3906, 225,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 3847, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2175, 54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -2200, -73,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3814, -5, 2968, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 4047, 355, 3173, 355,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2284, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -2119, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4547, 362, 3681, 377,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 4834, 7, 4023, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4838, -9, 4015, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4816, -22, -2176, -56, 3946, -69,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimStunLandD_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -839, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -794, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -890, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -728, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -552, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -471, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -585, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -683, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -710, -27,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimStunLandD_joint13[20] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 306, 320, -8,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 316, 323, -21,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 309, 303, -11,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 284, 225, 28,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimStunLandD_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -536, -893, 0, 0, 156, 0,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimStunLandD_joint15[22] = {
	ftAnimSetVal(FT_ANIM_ROTX), -318,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 18), 116,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), -146,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), -89,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 16,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 39,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTYoshiAnimStunLandD_joint17[18] = {
	ftAnimSetVal(FT_ANIM_ROTX), -271,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 18), 76,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), -217,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), -339,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 107,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimStunLandD_joint18[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2200, 99, -1564, 116, 2118, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1536, 59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 2127, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -1520, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1515, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1356, 34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1489, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1878, -80,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2155, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 2587, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1323, 30, 2629, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1956, -78, -1295, 28, 2677, 47,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimStunLandD_joint20[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 251,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 399, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 404, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 437, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 449, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 377, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 382, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimStunLandD_joint22[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1616, 33, 303, -64, 632, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 459, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1841, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 44, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 33, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -16, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 484, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 575, -30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1841, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -1600, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1497, 105,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1190, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 543, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 477, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1108, 81, -16, 0, 446, -31,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimStunLandD_joint23[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 750, -87, 55, 167, 442, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 157, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 522, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 186, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 128, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 76, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 144, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 312, 67,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 552, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 731, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 684, -50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 493, -31,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 127, 49, 379, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 174, 46, 435, 56, 468, -25,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimStunLandD_joint25[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 95, 281,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 485, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 525, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 447, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 472, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 470, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 512, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 652, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 675, 22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTYoshiAnimStunLandD_joint26[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1097, 67, -256, 21, 641, -51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 1759, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -53, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 457, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 485, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 611, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1727, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 1103, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1000, -102, -57, -3, 611, 0,
	ftAnimEnd(),
};
