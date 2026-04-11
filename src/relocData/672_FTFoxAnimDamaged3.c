/* AnimJoint data for relocData file 672 (FTFoxAnimDamaged3) */
/* 1936 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimDamaged3_joint1[26];
extern u16 dFTFoxAnimDamaged3_joint2[24];
extern u16 dFTFoxAnimDamaged3_joint4[38];
extern u16 dFTFoxAnimDamaged3_joint5[94];
extern u16 dFTFoxAnimDamaged3_joint6[44];
extern u16 dFTFoxAnimDamaged3_joint7[10];
extern u16 dFTFoxAnimDamaged3_joint8[60];
extern u16 dFTFoxAnimDamaged3_joint10[10];
extern u16 dFTFoxAnimDamaged3_joint11[76];
extern u16 dFTFoxAnimDamaged3_joint12[36];
extern u16 dFTFoxAnimDamaged3_joint13[10];
extern u16 dFTFoxAnimDamaged3_joint15[10];
extern u16 dFTFoxAnimDamaged3_joint16[66];
extern u16 dFTFoxAnimDamaged3_joint18[40];
extern u16 dFTFoxAnimDamaged3_joint20[90];
extern u16 dFTFoxAnimDamaged3_joint21[78];
extern u16 dFTFoxAnimDamaged3_joint23[52];
extern u16 dFTFoxAnimDamaged3_joint24[86];
extern u16 dFTFoxAnimDamaged3_joint25[66];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimDamaged3_joints[] = {
	(u32)dFTFoxAnimDamaged3_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimDamaged3_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimDamaged3_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimDamaged3_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimDamaged3_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimDamaged3_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimDamaged3_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimDamaged3_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimDamaged3_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimDamaged3_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimDamaged3_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimDamaged3_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimDamaged3_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimDamaged3_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimDamaged3_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimDamaged3_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimDamaged3_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimDamaged3_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimDamaged3_joint25, /* [24] joint 25 */
	0xFFFF01D5, /* [25] END */
};

/* Joint 1 */
u16 dFTFoxAnimDamaged3_joint1[26] = {
	ftAnimSetVal(FT_ANIM_TRAY | FT_ANIM_TRAZ), 912, -20,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 48,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1113, -20,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 1241, -41,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 912, -20,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 912, -20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimDamaged3_joint2[24] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, -1,
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -141, -338, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -18, -180, -311,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 11), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 11), 0, -1,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimDamaged3_joint4[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 156, 81,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 375, 82, 156, 69, 81, 70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 804, 14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 572, 502,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 156, 0, 81, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 493, -82,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 309,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimDamaged3_joint5[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1498, -61, -1442, 520, 1867, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1437, -236, -922, 36, 1985, 307,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1025, -269, -1368, -158, 2481, 268,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 742, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1239, -17, 2522, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1403, -18, 2591, 93,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1194, -27, 2844, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 531, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 374, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 532, 151, -1331, -169, 2631, -195,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1660, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 795, 189, 2369, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1054, 233, 2455, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1262, 221, -1569, 108, 2406, -293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1498, 236, -1442, 126, 1867, -538,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimDamaged3_joint6[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -503, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -284, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -659, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -575, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -442, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -652, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -762, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -778, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 219,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimDamaged3_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimDamaged3_joint8[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -113, -72,
	ftAnimSetValRate(FT_ANIM_ROTY), 136, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 25, 90, 356, 5, -22, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 158, 54, 151, -65, -68, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 298, 45, 28, -12, 121, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 428, 19, 73, 49, -50, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 375, -180, 225, 20, -15, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -72, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -113, 136,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTFoxAnimDamaged3_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimDamaged3_joint11[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1475, -457, 1336, -611, -1271, -532,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 341, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1933, -272, -1804, -373,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2020, -57, -2018, -145,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2276, -61,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2017, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 391, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 274, 70,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2313, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2189, -128,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2025, -95,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2533, -437,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 373, -1, -2360, -345,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3084, -551, 271, -101, -2880, -519,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimDamaged3_joint12[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -594, -71,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -596, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -418, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -631, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -673, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -800, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -766, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 171,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimDamaged3_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 272, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimDamaged3_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimDamaged3_joint16[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -404, 430, -224, -8, -28, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -113, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 25, -21, -76, 377,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -448, -274, 725, 454,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -340, 67, 165, -273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 18, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -187, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -229, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -233, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -302, 16, -57, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -398, -16, -43, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -404, -6, -224, 8, -28, 15,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimDamaged3_joint18[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 357, 570,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 928, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 213, -464,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 595, 413,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 594, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 514, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 352, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 357, 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimDamaged3_joint20[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 46, -14, 125, -155, -57, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 31, -53, -29, 115, -186, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -59, 39, 356, 177, 141, 326,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 178, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 111, 48, 465, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 37, -47, 50, -406,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 5, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 86, -52, -347, -207,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 78, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -364, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -272, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -40, -24, -302, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -5, 44, -148, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 97, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 112, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 46, 51, 125, 13, -57, 90,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimDamaged3_joint21[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 354, -229, 138, -176, 132, -208,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -21, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -104, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -75, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 186, 160,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 335, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 32, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 6, -20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 379, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -75, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -127, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 114, 217,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2, 33, 53, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 74, 70, 87, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 354, 240, 138, 64, 132, 45,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimDamaged3_joint23[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 336, 88,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 236, 327,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 660, 286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 906, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 954, -247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 412, -297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 358, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 336, -22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimDamaged3_joint24[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 16, -18, -102, 150, -229, 76,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 83, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -54, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -152, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 52, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 85, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 88, 93, 125, -60,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 356, 28, -235, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -160, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -36, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -113, -72, 327, -45, -317, -70,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -21, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -225, 72, -411, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -35, 133, -311, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 41, 25, -270, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16, -25, -102, -80, -229, 41,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimDamaged3_joint25[66] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 219, -77, 0, -10,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 571, 56, 463, 25, 354, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 505, -51, 450, -22, 175, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -24, 219, -77, 0, -10,
	ftAnimEnd(),
	0x4002, 0xFF4E, 0x48EC, 0xFF86, 0x0000, 0x0000, 0x0040, 0xFE3E, 0x2003, 0x0001, 0x003F, 0x0018, 0x2003, 0x0008, 0x002B, 0x0011, 0x2003, 0x0001, 0x00E1, 0xFFB7, 0x3803, 0x0002, 0xFF4E, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
