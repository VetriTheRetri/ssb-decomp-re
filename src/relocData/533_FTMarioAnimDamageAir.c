/* AnimJoint data for relocData file 533 (FTMarioAnimDamageAir) */
/* 1920 bytes: 112-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimDamageAir_joint1[32];
extern u16 dFTMarioAnimDamageAir_joint2[38];
extern u16 dFTMarioAnimDamageAir_joint4[46];
extern u16 dFTMarioAnimDamageAir_joint5[102];
extern u16 dFTMarioAnimDamageAir_joint6[14];
extern u16 dFTMarioAnimDamageAir_joint7[10];
extern u16 dFTMarioAnimDamageAir_joint8[50];
extern u16 dFTMarioAnimDamageAir_joint10[28];
extern u16 dFTMarioAnimDamageAir_joint11[108];
extern u16 dFTMarioAnimDamageAir_joint12[28];
extern u16 dFTMarioAnimDamageAir_joint13[38];
extern u16 dFTMarioAnimDamageAir_joint19[10];
extern u16 dFTMarioAnimDamageAir_joint20[86];
extern u16 dFTMarioAnimDamageAir_joint22[16];
extern u16 dFTMarioAnimDamageAir_joint24[84];
extern u16 dFTMarioAnimDamageAir_joint25[88];
extern u16 dFTMarioAnimDamageAir_joint27[34];
extern u16 dFTMarioAnimDamageAir_joint28[92];

/* Joint pointer table (28 entries, 112 bytes) */
u32 dFTMarioAnimDamageAir_joints[] = {
	(u32)dFTMarioAnimDamageAir_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimDamageAir_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimDamageAir_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimDamageAir_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimDamageAir_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimDamageAir_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimDamageAir_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimDamageAir_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimDamageAir_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimDamageAir_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimDamageAir_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimDamageAir_joint19, /* [13] joint 19 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	0x00000000, /* [16] NULL */
	0x00000000, /* [17] NULL */
	0x00000000, /* [18] NULL */
	(u32)dFTMarioAnimDamageAir_joint20, /* [19] joint 20 */
	(u32)dFTMarioAnimDamageAir_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTMarioAnimDamageAir_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTMarioAnimDamageAir_joint25, /* [24] joint 25 */
	(u32)dFTMarioAnimDamageAir_joint27, /* [25] joint 27 */
	0x00000000, /* [26] NULL */
	(u32)dFTMarioAnimDamageAir_joint28, /* [27] joint 28 */
};

/* Joint 1 */
u16 dFTMarioAnimDamageAir_joint1[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 600,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), -204, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -184, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 17), -184, 8, -204, 74,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 5), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimDamageAir_joint2[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 256, 160, -322, -168, 122, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 321, 3, -336, 0, 65, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 321, -14, -336, 15, 65, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimDamageAir_joint4[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 89, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -14, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -110, -34, -174, -199, -266, -208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, 7, -399, -12, -417, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 21, 1, -399, 15, -417, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 42, 13, -108, 79, -109, 83,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 89, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimDamageAir_joint5[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1973, 574, -693, -831, -1734, -773,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2547, 670, -1524, -288, -2508, -900,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3313, 401, -1269, 122, -3535, -525,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1287, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3351, 33, -3559, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3381, 25, -3577, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), 3336, -20, -3556, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1295, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 13), -1289, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3313, -266, -1269, 126, -3535, 254,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2379, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1035, 21, -3046, 597,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1226, -57, -2340, 352,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -935, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2535, 227, -2341, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2834, 523, -2597, -500,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3581, 747, -915, 20, -3342, -745,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimDamageAir_joint6[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimDamageAir_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -115, -132, 190, 143, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimDamageAir_joint8[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY), 127, 0, 0, 288,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 21), 300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 435, 194, -62, -3, -189, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 516, 4, -6, 3, -163, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 516, -16, -6, 0, -163, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 194, 0, 0, 1, 0, 32,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 3), 127, 0, 0, 288,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimDamageAir_joint10[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 53, -18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 21), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 20), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 0, 53, -18,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimDamageAir_joint11[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -346, 898, -2299, 153, -141, 384,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1962, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 551, 562, 243, 248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 778, 116, 356, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 788, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 349, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1959, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1974, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 790, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 772, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 344, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 342, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 778, 47, -1966, 80, 356, 91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 711, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 867, -22, -1813, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 734, -197, -1596, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -2153, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 472, -567, 617, -481,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -401, -409, -251, -379,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -346, 54, -2299, -145, -141, 110,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimDamageAir_joint12[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -343, -336,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -672, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 663,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimDamageAir_joint13[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 625,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 10, 0, 523, 27,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 114,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 114, -6, 10, -1, 523, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -6, 102, -17, -2, 742, -104,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 625, 0, 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTMarioAnimDamageAir_joint19[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTMarioAnimDamageAir_joint20[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 74, 344, 3, -161, -101, -456,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -162, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 419, -159, -558, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -244, -346, -522, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -539, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -272, -24, -163, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -164, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -293, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -268, 22,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -532, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -161, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -243, 51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 91, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -139, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -20, 36,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 85, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 74, -10, 3, 23, -101, 60,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTMarioAnimDamageAir_joint22[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimDamageAir_joint24[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1818, -708, 1654, 196, -1052, 342,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2526, 32, 1850, 54, -710, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1753, 402, 1762, -50, -1082, -196,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1721, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1721, 25, -1104, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1703, 13, -1124, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -1753, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -1061, 2,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1723, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1786, 32,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1713, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1831, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1827, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1695, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1818, 13, 1654, -41, -1052, 9,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTMarioAnimDamageAir_joint25[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1585, 249, -1813, 35, 1374, -299,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1694, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1335, 120, 1075, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1345, -4, 1153, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1126, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -1345, -17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1690, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1700, -4,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1117, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1153, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1374, -43, 1206, 83,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1599, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1708, -39, 1320, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1802, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1223, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1273, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1585, 14, -1813, -10, 1374, 101,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTMarioAnimDamageAir_joint27[34] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 932, -925,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -466,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 18), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 526, 434,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 869, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 932, 63,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTMarioAnimDamageAir_joint28[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1459, -613, -1437, -63, -1791, 937,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1630, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2073, -39, -854, 430,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1537, 282, -930, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -920, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1508, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1482, 25, -1631, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1629, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1587, -39,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -922, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -921, -2,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1625, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1449, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1617, 26, -935, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1479, 36, -1650, -241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1459, 19, -1437, 11, -1791, -141,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
