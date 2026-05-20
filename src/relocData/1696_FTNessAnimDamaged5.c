/* AnimJoint data for relocData file 1696 (FTNessAnimDamaged5) */
/* 3440 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimDamaged5_joint1[88];
extern u16 dFTNessAnimDamaged5_joint2[52];
extern u16 dFTNessAnimDamaged5_joint4[70];
extern u16 dFTNessAnimDamaged5_joint5[106];
extern u16 dFTNessAnimDamaged5_joint6[28];
extern u16 dFTNessAnimDamaged5_joint7[28];
extern u16 dFTNessAnimDamaged5_joint8[74];
extern u16 dFTNessAnimDamaged5_joint10[10];
extern u16 dFTNessAnimDamaged5_joint11[172];
extern u16 dFTNessAnimDamaged5_joint12[68];
extern u16 dFTNessAnimDamaged5_joint13[70];
extern u16 dFTNessAnimDamaged5_joint15[10];
extern u16 dFTNessAnimDamaged5_joint16[166];
extern u16 dFTNessAnimDamaged5_joint18[72];
extern u16 dFTNessAnimDamaged5_joint19[154];
extern u16 dFTNessAnimDamaged5_joint21[66];
extern u16 dFTNessAnimDamaged5_joint22[142];
extern u16 dFTNessAnimDamaged5_joint24[70];
extern u16 dFTNessAnimDamaged5_joint25[154];
extern u16 dFTNessAnimDamaged5_joint26[68];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTNessAnimDamaged5_joints[] = {
	(AObjEvent32 *)dFTNessAnimDamaged5_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimDamaged5_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimDamaged5_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTNessAnimDamaged5_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTNessAnimDamaged5_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimDamaged5_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNessAnimDamaged5_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNessAnimDamaged5_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTNessAnimDamaged5_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTNessAnimDamaged5_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimDamaged5_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimDamaged5_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTNessAnimDamaged5_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTNessAnimDamaged5_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTNessAnimDamaged5_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTNessAnimDamaged5_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTNessAnimDamaged5_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTNessAnimDamaged5_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTNessAnimDamaged5_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTNessAnimDamaged5_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimDamaged5_joint1[88] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -16, 537, -28,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 19), -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 134, 561, 767, -64, -144,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAY, 1), 268, 268, 729, 672,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), -64,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 2), -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 1), 536, 134, 729, 287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 1), 536, 11, 801, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 714, 32, 753, 156, -64, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1161, 273, -16, 6, 1173, -207, 91, 559,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2904, 293,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -11, 21, 597, -1443, 355, -510,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -5, 17, 451, -567, -163, -568,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 3216, 0, 242, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimDamaged5_joint2[52] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 28, -360, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 15, -418, -29, -103, -56,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, -418, -103,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 58, -418, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 58, -3, -418, 22, -103, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, -7, 0, 52, 0, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 0, -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -209, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimDamaged5_joint4[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 253, 126, -127, -63, -76, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 253, -156, -127, 59, -76, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -60, -156, -7, 59, 69, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -60, -10, -7, -1, 69, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -231, 21, -25, 0, 211, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 357, 73, 0, 3, 0, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 357, -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 148, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimDamaged5_joint5[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -410, 699, -261, -308, 415, -961,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 289, 345, -570, -155, -545, -476,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 281, 209, -572, 31, -537, -505,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -507, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 707, 213, -1555, -510,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 708, 2, -1557, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), 751, -35, -1627, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 707, -117, -1555, 180,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 318, -115, -908, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -502, 67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -189, 36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 284, -21, -778, 89,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 315, 53, -737, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -169, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -437, -193,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 383, -320, -765, 358,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -325, -709, -643, -206, -19, 746,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimDamaged5_joint6[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -473, 473,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -539, -539,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimDamaged5_joint7[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0, 0, 0, 38,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTNessAnimDamaged5_joint8[74] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, 0, 364, 0, -32, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 49, 29, 240, -62, -121, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 49, -130, 240, -77, -121, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -212, -130, 84, -77, -65, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -212, -3, 84, -2, -65, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -265, 25, 50, -4, 61, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 268, 66, 0, -6, 0, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 268, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 194, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTNessAnimDamaged5_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimDamaged5_joint11[172] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2024, 416, 1038, -549, -1727, -389,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1608, 208, 488, -274, -2117, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1608, -39, 488, 49, -2117, -343,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 588, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1610, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2803, -343,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2803, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2531, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 588, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 535, 50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1524, 103,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1281, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2412, 57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2404, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1269, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1278, -48,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2404, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2415, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1356, -203, -2481, -194,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2304, -739,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -3952, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 588, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 489, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3166, -585, 501, -108,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3470, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 272, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 201, -46, -3954, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 201, 55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -3953, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3474, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -3438, 26,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 291, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3417, 397, 556, 174, -3853, 457,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2643, 774, 639, 83, -3038, 814,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimDamaged5_joint12[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, 111,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -447, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -350, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -140, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -9, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -85, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -350, -270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -627, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -9, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -123, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -433, -309,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimDamaged5_joint13[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 90, 54, 126,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 95, 2, -44, -49, 619, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 95, -90, -44, 81, 619, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -84, -90, 117, 81, 415, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -84, -1, 117, -21, 415, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -115, 19, -228, -6, 521, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 294, 45, -13, 31, 289, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 251, -66, 22, -7, 292, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -170, -63, 267,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimDamaged5_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimDamaged5_joint16[166] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1242, 335, -1328, 236, 1310, -281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1578, -49, -1092, -3, 1029, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1144, -186, -1335, -74, 1584, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1205, -7, -1241, -19, 1497, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1129, -44, -1375, -85, 1647, 92,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1607, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1035, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1795, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1817, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1788, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1644, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1658, 41,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1037, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1323, 154,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1615, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1354, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1731, -101,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1326, -293,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1487, 137,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1680, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 999, -249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1368, 3, 827, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1416, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1502, -154, 984, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1370, -46, 1210, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1409, -5, -1373, -5, 1141, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1360, 44, -1427, 37, 1186, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1498, 107, -1297, 89, 989, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1575, 77, -1248, 49, 908, -81,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimDamaged5_joint18[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 396, 588,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 985, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 482, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 705, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 580, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 266, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 204, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 7, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 87, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 688, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 848, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 604, -306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 235, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 375, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 305, 215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 439, 133,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimDamaged5_joint19[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1602, 17, 1596, 31, 1634, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1718, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1585, 77, 1684, 262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1447, 78, 2160, 79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1429, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1662, -28, 1842, -212,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1651, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1736, -58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1799, 24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1421, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1397, -21,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1824, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1634, -54,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1652, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1585, -48,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1423, -69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1790, 20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1587, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1699, 73, 1546, -19, 1563, 72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1508, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1545, -45, 1731, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1455, 78, 1764, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1323, 94, 1702, 94, 2097, 118,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1546, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1643, -93, 2002, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1515, -47, 1979, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1549, 28, 1703, -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1620, -74, 1573, 24, 1601, -102,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimDamaged5_joint21[66] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -259, 442, -102,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -115, 71, 400, -21, 130, 116,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -115, 117,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 400, 130,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 400, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 120, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 120, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 299, -21, 400, -21, 130, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -296, -74, 0, -50, 0, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -296, -25, 0, 25, 0, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -476, 178, 112,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimDamaged5_joint22[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -127, 623, 136, 97, -210, 389,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 362, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 495, -103, 178, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -335, -375, 141, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 220, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -255, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -257, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -333, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 232, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 193, -7,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 376, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 203, -47,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -301, 91, 186, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 272, 51, 107, -246,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 181, 62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 391, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 211, -106, -259, -327,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -552, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 60, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 147, 152, 378, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 364, -17, 206, 6, -252, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 111, -139, 390, 97, -505, -196,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 425, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 86, -60, -646, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -8, -73, -757, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -59, -51, 442, 17, -799, -41,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimDamaged5_joint24[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 407, -407,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -52,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -151,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 72, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 104, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 93, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 57, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 433, 286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 515, -315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 610, 291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 583, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 616, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 614, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimDamaged5_joint25[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1684, 78, -1633, 545, 1406, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1762, 238, -1088, -5, 1603, 240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2162, 8, -1645, -267, 1886, 173,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1853, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1780, -164, -1622, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1832, 31, -1697, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1911, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1833, -36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1835, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 1789, 32,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1910, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1758, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1791, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1536, -152,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1841, 76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1985, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1364, -120, -1549, 179,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1343, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1425, -86,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1874, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1823, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1346, -137, 1733, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1249, -38, -1618, -80, 2173, 78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1476, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1507, 43, 1891, -241,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1523, 14, 1589, -57,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1574, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1615, 41, -1504, 18, 1575, -13,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimDamaged5_joint26[68] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -140, 283, -182,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 353, 246, 312, 14, 104, 143,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 353, 69,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 312, 104,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 312, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 491, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 491, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 353, -31, 312, -22, 104, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -115, -58, -122, -54, -137, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -115, -32, -122, -19, -137, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -339, -256, -211,
	ftAnimEnd(),
	0x0000, 0x0000,
};
