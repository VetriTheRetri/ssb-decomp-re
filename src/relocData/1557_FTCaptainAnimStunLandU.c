/* AnimJoint data for relocData file 1557 (FTCaptainAnimStunLandU) */
/* 2800 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimStunLandU_joint2[42];
extern u16 dFTCaptainAnimStunLandU_joint4[72];
extern u16 dFTCaptainAnimStunLandU_joint5[172];
extern u16 dFTCaptainAnimStunLandU_joint6[72];
extern u16 dFTCaptainAnimStunLandU_joint7[24];
extern u16 dFTCaptainAnimStunLandU_joint8[46];
extern u16 dFTCaptainAnimStunLandU_joint10[10];
extern u16 dFTCaptainAnimStunLandU_joint11[180];
extern u16 dFTCaptainAnimStunLandU_joint12[64];
extern u16 dFTCaptainAnimStunLandU_joint13[42];
extern u16 dFTCaptainAnimStunLandU_joint14[8];
extern u16 dFTCaptainAnimStunLandU_joint16[50];
extern u16 dFTCaptainAnimStunLandU_joint17[134];
extern u16 dFTCaptainAnimStunLandU_joint19[56];
extern u16 dFTCaptainAnimStunLandU_joint21[110];
extern u16 dFTCaptainAnimStunLandU_joint22[122];
extern u16 dFTCaptainAnimStunLandU_joint24[146];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTCaptainAnimStunLandU_joints[] = {
	(u32)dFTCaptainAnimStunLandU_joint2, /* [0] joint 2 */
	0x00000000, /* [1] NULL */
	(u32)dFTCaptainAnimStunLandU_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimStunLandU_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimStunLandU_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimStunLandU_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimStunLandU_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimStunLandU_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimStunLandU_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimStunLandU_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimStunLandU_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimStunLandU_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimStunLandU_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimStunLandU_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimStunLandU_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimStunLandU_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimStunLandU_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimStunLandU_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF028F, /* [24] END */
};

/* Joint 2 */
u16 dFTCaptainAnimStunLandU_joint2[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAZ), 12, -132,
	ftAnimSetValRate(FT_ANIM_TRAY), 219, 2726,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX), -804, 0, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -323, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 26), -23,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 2164, -16,
	ftAnimSetValRateT(FT_ANIM_TRAY, 11), 312, -2628,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -26, 70,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 268, 36,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 420,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTCaptainAnimStunLandU_joint4[72] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 284, -51,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 14, 12, 4, -22, 68,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), -357, -1, -11, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 264, 1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 0, -13, -6, 16, -60, -63,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -26, -31, 13, 2, -69, -6,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 300, 18, -177, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 0, 0, -74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 39, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX, 3), 300, -26, -43, -40,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 6), -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 205, 5,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimStunLandU_joint5[172] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1513, -91, -1446, 34, -1749, 82,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1354, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1422, -188, -1666, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1135, -272, -1399, 282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 876, -179, -1438, -103, -1102, 225,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1579, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 777, -71, -948, 108,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 731, 59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1272, -61,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1520, 57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1307, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 794, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 943, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1327, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1402, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1310, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1290, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1033, 386, -1131, 151, -1513, -418,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1716, 497, -987, -53, -2239, -546,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2027, 185, -1237, -241, -2607, -234,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1553, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2087, 87, -2708, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2202, -10, -2677, 455,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2065, -228, -1364, -28, -1798, 604,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1744, -213, -1610, -177, -1469, 231,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1235, 87,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1610, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1719, -67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1751, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1159, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1611, 1, -1752, 0, -1128, 31,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimStunLandU_joint6[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1052, -77,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1180, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1049, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -647, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -620, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -571, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -599, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -844, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1010, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -737, 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -427, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -374, -290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1007, -313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1001, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1022, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1109, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1129, -20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimStunLandU_joint7[24] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 7, 2, 59, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -399, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), -345, 35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 406, 68, 69,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTCaptainAnimStunLandU_joint8[46] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 268, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -218, -7, 0, -17, 0, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -273, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 95, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 78, 68, -44, 86, 0, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 491, 0, 98, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -166, -74,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -178, -134, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTCaptainAnimStunLandU_joint10[10] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 26), -357,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimStunLandU_joint11[180] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1656, 87, 1332, -30, 1486, 81,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1262, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1892, 179, 1751, 250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2102, 163, 2069, 317,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2562, 124,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2138, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1359, 91,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1551, 40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2635, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2605, -69,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2164, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2171, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1587, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1501, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2135, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2262, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2535, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1544, 21, 2496, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2638, 293, 1544, -119, 2294, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2849, 231, 1305, -268, 2240, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3100, -164, 1006, -344, 2494, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2520, -183, 616, -315, 1908, -210,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 272, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2734, 186, 2074, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2893, 271, 2212, 592,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3278, 135, 167, -42, 3259, 554,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 291, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3163, -134, 3322, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3010, -155, 3279, -85,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2738, -76, 3009, -103,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 292, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2698, -40, 283, -8, 2943, -65,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimStunLandU_joint12[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -917, -65,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1128, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1044, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -801, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -613, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -827, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -936, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -746, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -450, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -366, -312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1075, -353,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1074, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1177, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1185, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimStunLandU_joint13[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 20,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 501, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -31, 19, 144, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 193, 1, 17, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 480, -3, -8, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 178, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 9), 8,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 449, 44,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimStunLandU_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1538, -1003, 119,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTCaptainAnimStunLandU_joint16[50] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -11,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 138, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -112, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -344, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 292, -52,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -204,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -489, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -177, 6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -256, 62,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 7), -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -49, 58, -46, 34,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 151, 62,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimStunLandU_joint17[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1514, 28, -1509, 10, 1092, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1726, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1504, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1284, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1481, 189,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1722, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1719, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1661, -70,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1664, -65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1098, -89,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1542, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1540, 27,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1581, -84, 1023, -52,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1282, -20, 1106, 51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1522, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1616, -35,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1258, 35, 1166, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1353, 2, -1662, 4, 1431, 177,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1520, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1262, -194, 1521, 113,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 723, -93, 1746, 28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1517, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 777, 59, -1540, -50, 1715, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 843, 65, -1617, -77, 1696, -18,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimStunLandU_joint19[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 548, 55,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 592, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 727, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 830, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 798, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 696, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 526, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 558, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 415, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 347, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 260, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 111, -148,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimStunLandU_joint21[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1479, -23, 1752, 7, -1866, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1526, 108,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1782, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1666, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1744, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1725, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1432, 71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1350, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1708, 29, 1773, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1139, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 1684, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1353, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1393, 1,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1180, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1228, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1430, -230, -1390, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1690, -168, -1282, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1767, 14, -1265, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1280, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1661, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1647, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1648, 0, 1686, 2, -1290, -9,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimStunLandU_joint22[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 52, -6, 37, 1, -759, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 136, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -211, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -699, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -635, 45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -828, -11,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 137, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 290, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -269, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -135, 81,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -834, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -740, 59,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 356, 59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 251, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -48, 74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 0, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -677, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -650, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -65, 11, -759, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 23, 34, -618, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3, -39, -542, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -130, -69, -483, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 124, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 0, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -193, -63, -87, -88, -457, 25,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimStunLandU_joint24[146] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 667, 45,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1042, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1062, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 979, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 907, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 483, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 408, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 874, 287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 982, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 974, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 967, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 964, -2,
	ftAnimEnd(),
	0x0000, 0x200E, 0x05B1, 0x0003, 0x0509, 0x0000, 0xF945, 0x0002, 0x2805, 0x0010, 0x0612, 0x001B, 0x2809, 0x0014, 0xFB7C, 0x0010, 0x2003, 0x0005, 0x065E, 0x003C, 0x2003, 0x0001, 0x0694, 0x002F, 0x2003, 0x0007, 0x06F1, 0xFFD7, 0x2003, 0x0001, 0x06C2, 0xFFC9, 0x2803, 0x0005, 0x05E1, 0x0016, 0x0801, 0x0002, 0x2005, 0x0001, 0x062D, 0x0019, 0x2805, 0x0004, 0x0680, 0x000C, 0x0801, 0x0002, 0x2003, 0x0001, 0x0608, 0xFF8A, 0x200B, 0x0001, 0x04F4, 0xFF45, 0xFB8A, 0xFFB6, 0x200F, 0x0001, 0x0490, 0x001B, 0x0687, 0xFFDE, 0xFAE7, 0xFF9E, 0x2807, 0x0003, 0x06E3, 0x0089, 0x059E, 0xFFD2, 0x2009, 0x0001, 0xFAC5, 0xFFEA, 0x2009, 0x0002, 0xFABA, 0x0001, 0x200F, 0x0001, 0x073D, 0x005A, 0x0584, 0xFFE7, 0xFABC, 0x0002, 0x0000, 0x0000, 0x0000,
};
