/* AnimJoint data for relocData file 1699 (FTNessAnimDamaged7) */
/* 3088 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimDamaged7_joint1[58];
extern u16 dFTNessAnimDamaged7_joint2[54];
extern u16 dFTNessAnimDamaged7_joint4[54];
extern u16 dFTNessAnimDamaged7_joint5[150];
extern u16 dFTNessAnimDamaged7_joint6[70];
extern u16 dFTNessAnimDamaged7_joint7[10];
extern u16 dFTNessAnimDamaged7_joint8[56];
extern u16 dFTNessAnimDamaged7_joint10[10];
extern u16 dFTNessAnimDamaged7_joint11[146];
extern u16 dFTNessAnimDamaged7_joint12[48];
extern u16 dFTNessAnimDamaged7_joint13[10];
extern u16 dFTNessAnimDamaged7_joint15[10];
extern u16 dFTNessAnimDamaged7_joint16[126];
extern u16 dFTNessAnimDamaged7_joint18[68];
extern u16 dFTNessAnimDamaged7_joint19[134];
extern u16 dFTNessAnimDamaged7_joint21[62];
extern u16 dFTNessAnimDamaged7_joint22[150];
extern u16 dFTNessAnimDamaged7_joint24[72];
extern u16 dFTNessAnimDamaged7_joint25[142];
extern u16 dFTNessAnimDamaged7_joint26[62];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimDamaged7_joints[] = {
	(u32)dFTNessAnimDamaged7_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimDamaged7_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimDamaged7_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimDamaged7_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimDamaged7_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimDamaged7_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimDamaged7_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimDamaged7_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimDamaged7_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimDamaged7_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimDamaged7_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimDamaged7_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimDamaged7_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimDamaged7_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimDamaged7_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimDamaged7_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimDamaged7_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimDamaged7_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimDamaged7_joint25, /* [24] joint 25 */
	(u32)dFTNessAnimDamaged7_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimDamaged7_joint1[58] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 242, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 242, 21, 191, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -268, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), -357, -8, 290, 36, 252, 61,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -1787, -238, 320, 124, 323, -348,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -3216, -130,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 431, -89, -140, -369,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 242, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimDamaged7_joint2[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 146, -209, -36, 0, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), -322, 34,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 256, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -38, 0, 46, 0, 8,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -22,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 0, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -209, -8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTNessAnimDamaged7_joint4[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 148, 72,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -15, -58,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -297, -260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -199, -31, 0, 17, 0, 15,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -512, 31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 332, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 332, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 148, 37,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimDamaged7_joint5[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1282, -343, -964, 880, -1627, 728,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 939, -82, -84, 371, -899, 326,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1116, 404, -222, -212, -975, -373,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2325, 315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -509, -47, -1645, -608,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -316, 2, -2192, -345,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2376, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2379, 20, -505, -62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 2366, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -441, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -422, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2384, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -2376, -21,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -441, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2360, 30, -492, 34, -2411, -83,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2637, 303, -2782, -334,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -372, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -456, 25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3034, 333, -3213, -384,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3758, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 3304, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -373, 87,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -585, -87,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3653, 102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3307, 101,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3189, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2999, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2891, -108, -643, -58, -3236, 71,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimDamaged7_joint6[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -539, 530,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -185, -433,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -875, -328,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -841, 433,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 416,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 12), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -519, -367,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -744, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -347, 321,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -347, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -507, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -567, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -539, 27,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimDamaged7_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 268, 143, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimDamaged7_joint8[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 194, 233,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 254, -79,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 39, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -281, -40, 0, -2, 0, 6,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -312, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 31,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 312, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 312, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 194, 36,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTNessAnimDamaged7_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimDamaged7_joint11[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 573, -21, 639, 432, 178, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 551, -222, 1071, 196, 243, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 128, -452, 1032, -22, 49, -263,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -734, -98,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1280, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -666, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -796, -90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -906, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -785, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -806, -44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1291, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1255, -22,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -902, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -816, 36,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1222, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -776, -42, 1140, 30, -876, -130,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1292, -414, -1383, -379,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1283, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1164, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1730, -303, 1183, 52, -1827, -316,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1827, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1873, 101, 1220, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1730, 216, 1183, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1163, 202, 1047, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1680, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1526, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1034, 128, 968, -79, -1429, 96,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimDamaged7_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -433, 433,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -337,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -674, -382,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -774, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -310, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -295, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -561, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -433, 128,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimDamaged7_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -170, -63, 267, 143, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimDamaged7_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimDamaged7_joint16[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1575, -97, -1248, -99, 908, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1227, 46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1343, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1395, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1569, 118,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1430, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1308, 59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1309, -20,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1328, 14, 1362, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -1326, -17, 1100, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1290, 54, -1344, 52, 1087, -83,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1427, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1220, 47, 934, -304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1249, -39, 479, -137,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1340, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1380, -17, 659, 200,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1475, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 880, 174,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 989, 107,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1355, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1275, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1434, 41, 1130, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1679, 9, 716, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1575, -103, -1248, 27, 908, 191,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimDamaged7_joint18[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 439, -179,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 268, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 309, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 469, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 529, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 499, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 443, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 782, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 736, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 575, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 713, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 621, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 482, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 737, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 689, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 439, -250,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimDamaged7_joint19[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1596, 387, 1573, 154, 1601, 523,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1983, 106, 1727, 40, 2124, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1808, -96, 1654, -70, 2190, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1386, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1923, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1908, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1891, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1973, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1381, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1374, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1922, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 2037, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1978, -154, 1373, -50, 2058, -263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1663, -119, 1273, -11, 1511, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1740, 95, 1349, 52, 1666, 108,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1516, -18, 1550, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1841, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1759, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1616, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1503, 20, 1456, -167,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1573, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1215, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1406, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1596, -20, 1573, 0, 1601, 194,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimDamaged7_joint21[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -476, 178, 112,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -451, 123, 127, -1, -115, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 267, 16, 170, 0, 177, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -169, -68, 114, -6, -27, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -692, -71, 74, 4, -32, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -526, 23, 139, 9, 20, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -526, 7, 139, 5, 20, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -476, 178, 112,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimDamaged7_joint22[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1668, -523, 1165, -13, 809, 225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2192, -309, 1152, 90, 1034, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2288, -9, 1346, 214, 1012, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1762, 140, 602, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1657, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1536, -73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1480, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1714, 50, 633, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 779, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1454, -7,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1484, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1418, -99,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 752, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 717, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 534, -146,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 506, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1316, -76,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1261, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1456, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1538, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 716, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 880, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1631, -17, 864, 78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1371, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1037, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1321, 2, 1357, 140,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1177, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1319, -202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1571, -148, 952, -255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1668, -96, 1165, -11, 809, -143,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimDamaged7_joint24[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 614, -606,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 383, 389,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 948, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 924, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 255, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 168, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 433, 318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 527, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 590, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 363, -291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 518, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 614, 95,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimDamaged7_joint25[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1601, 382, -1504, -124, -1641, 694,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -759, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1629, 20, -946, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1463, -11, -1455, -464,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1651, -80, -1875, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1108, -351, -1624, 58, -1827, 117,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1541, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1462, -192, -1534, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1493, -42, -1578, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1555, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1734, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1471, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1393, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1536, 52, -1415, -88,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1355, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1718, -25, -1569, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1783, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1445, 84,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1644, 87,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1661, 115, -1339, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1419, -175,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1397, -76,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1491, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1679, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1649, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1537, -101, -1603, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1601, -63, -1504, 99, -1641, 38,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimDamaged7_joint26[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -339, -256, -211,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -249, -24, 94, 56, -461, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -487, -24, 79, 0, -278, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -662, -26, 79, -10, -278, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -864, 15, -72, -30, -191, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -586, 74, -71, 0, -248, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -345, 35, -71, -26, -248, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -339, -256, -211,
	ftAnimEnd(),
};
