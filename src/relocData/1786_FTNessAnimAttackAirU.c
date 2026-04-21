/* AnimJoint data for relocData file 1786 (FTNessAnimAttackAirU) */
/* 3328 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimAttackAirU_joint1[108];
extern u16 dFTNessAnimAttackAirU_joint2[30];
extern u16 dFTNessAnimAttackAirU_joint4[28];
extern u16 dFTNessAnimAttackAirU_joint5[158];
extern u16 dFTNessAnimAttackAirU_joint6[62];
extern u16 dFTNessAnimAttackAirU_joint7[10];
extern u16 dFTNessAnimAttackAirU_joint8[120];
extern u16 dFTNessAnimAttackAirU_joint10[10];
extern u16 dFTNessAnimAttackAirU_joint11[180];
extern u16 dFTNessAnimAttackAirU_joint12[70];
extern u16 dFTNessAnimAttackAirU_joint13[54];
extern u16 dFTNessAnimAttackAirU_joint15[10];
extern u16 dFTNessAnimAttackAirU_joint16[138];
extern u16 dFTNessAnimAttackAirU_joint18[62];
extern u16 dFTNessAnimAttackAirU_joint19[126];
extern u16 dFTNessAnimAttackAirU_joint21[62];
extern u16 dFTNessAnimAttackAirU_joint22[134];
extern u16 dFTNessAnimAttackAirU_joint24[62];
extern u16 dFTNessAnimAttackAirU_joint25[124];
extern u16 dFTNessAnimAttackAirU_joint26[64];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimAttackAirU_joints[] = {
	(u32)dFTNessAnimAttackAirU_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimAttackAirU_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimAttackAirU_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimAttackAirU_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimAttackAirU_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimAttackAirU_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimAttackAirU_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimAttackAirU_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimAttackAirU_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimAttackAirU_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimAttackAirU_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimAttackAirU_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimAttackAirU_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimAttackAirU_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimAttackAirU_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimAttackAirU_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimAttackAirU_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimAttackAirU_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimAttackAirU_joint25, /* [24] joint 25 */
	(u32)dFTNessAnimAttackAirU_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimAttackAirU_joint1[108] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 242, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 163, 4, 241, 36, -51, -106,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 17), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 8), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 8), -6, 150,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 150, -4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 300, 213,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 607, 157,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 14), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 418, -60, 53, 178,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), 122, 119,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 393, -78,
	ftAnimSetValRateT(FT_ANIM_TRAX, 5), 0, 1,
	ftAnimSetValRateT(FT_ANIM_TRAY, 13), 262, -238,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 163, 16,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 8), 2,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 8), 385, 89,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 0, 0,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 12), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -36, -12, 297, -503,
	ftAnimSetValRateT(FT_ANIM_TRAY, 8), 242, 130,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), -54, -130,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimAttackAirU_joint2[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -209, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -303, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -378, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -378, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -18, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 1601, 426,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 9), 3216,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTNessAnimAttackAirU_joint4[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 148,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 148, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 724, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 775, -18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), 148,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimAttackAirU_joint5[158] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2891, -27, -643, 15, -19, 100,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 613, 151,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -435, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 2710, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2563, -137,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2294, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 749, 107,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 851, -63,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -414, -56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -636, 249,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 735, -79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 879, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2286, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2027, -181, -238, 254,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -70, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1922, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2021, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 856, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 482, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2019, -7, -63, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 2055, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), -105, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -157, -4, 487, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -113, -37, 360, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2113, 50, -233, -89, 388, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 67, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -643, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 2720, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2789, 61,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2879, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 21, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2891, 12, -643, 0, -19, -10,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimAttackAirU_joint6[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -539, -42,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -795, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -647, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -724, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -467, 357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -316,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -632, -440,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -881, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -890, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -863, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -545, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -539, 6,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimAttackAirU_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 268, 143, 0, 0,
	ftAnimBlock(0, 42),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimAttackAirU_joint8[120] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 194, 0, 0,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -424, -38, 0, 1, 0, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -361, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -115, -31, 0, -12,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 291, 245, 244,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -254, -28, -103, -16,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 5322, 0, 5322, 0, 5318, -1,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4098, -76, 4094, -76, 4090, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -75, 304,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -216, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -107, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 247, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 395, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 392, 29, -234, 38,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 27), 4096, 4096, 4096,
	ftAnimBlock(0, 7),
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 863, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -21, 29, 0, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 0, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 194, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTNessAnimAttackAirU_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 42),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimAttackAirU_joint11[180] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1034, -133, 968, 6, -1429, -67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1649, -86,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1029, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1168, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1453, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1568, 80, -1669, 150,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1022, 240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1292, 286,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -850, 108,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1127, 85, -867, 107,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1165, -83, -880, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -779, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -752, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -879, -29, 1058, -46, -1061, -105,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -848, -278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1072, -308, -1091, -620,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 441, -416, -2303, -592,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 191, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1367, -439, -2276, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1903, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2279, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -2669, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 189, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 396, 32,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1923, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -2230, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2297, -72, 413, -26, -2736, -72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -2990, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -2633, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 374, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 410, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 637, 4,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3004, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3035, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2640, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2643, -2, 639, 2, -3038, -2,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimAttackAirU_joint12[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -433, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -517, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -616, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -575, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -532, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -465, 261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -247, -360,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -720, -254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -755, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -765, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -440, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -433, 7,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimAttackAirU_joint13[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -170, -63, 267,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -170, -92, -63, 6, 267, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1277, -129, 17, -108, 86, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -558, 96, -390, -34, 242, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -22, 17, -424, 16, -154, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -207, -8, -65, 21, 545, 24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -170, -63, 267,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimAttackAirU_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 42),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimAttackAirU_joint16[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -32, 207, -360, 9, -700, -120,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 204, -74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -165, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -821, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -382, 439,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 26, -104, 56, 271,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -17, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 161, 79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 169, -66,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -173, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -181, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -15, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 4, -69,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 73, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -142, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -79, -48, 23, 60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -178, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -49, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -80, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -266, -16,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -188, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -104, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -191, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -359, -1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -287, -58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -697, -6,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -87, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -34, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -32, 1, -360, 0, -700, -3,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimAttackAirU_joint18[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 439, 353,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 988, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 799, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 682, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 701, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 409, -332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -200,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 221, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 271, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 437, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 439, 2,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimAttackAirU_joint19[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -12, 0, 34, -6, -7, 114,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -112, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -12, 97, 106, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 182, 2, 581, 384,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 604, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -7, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -49, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 46, -140,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 490, -111,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 315, 90,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -165, -179,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -11, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -79, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -98, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 423, 83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 469, -21,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 56, 66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 36, -12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -93, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 34, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 446, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -5, -3,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 24, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -10, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -12, -1, 34, 0, -7, -1,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimAttackAirU_joint21[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -476, 178, 112,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 233, 107, 45, -14, 195, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 386, -4, 63, 0, 146, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 186, -33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 49, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -12, -8, 63, 15, 146, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 62, -11, 267, 14, 17, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -173, -38, 267, -6, 17, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -476, 178, 112,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimAttackAirU_joint22[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -59, -157, 442, -62, -799, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -252, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 380, -149, -737, 315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 143, -143, -168, 457,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 126, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 355, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -238, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -197, 28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 143, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 78, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 335, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 22, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 52, 6, -51, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 17, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 307, 26,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -179, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 129, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -134, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -149, -62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -477, -45,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 122, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -57, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 332, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 441, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -522, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -795, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -59, -2, 442, 0, -799, -3,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimAttackAirU_joint24[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 614, 169,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 787, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 530, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 580, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 599, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 514, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 191, -257,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 267, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 334, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 612, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 614, 1,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimAttackAirU_joint25[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 7, -507, -104, 44, -32, 237,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 98, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -499, -180, 205, 346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -353, 229, 660, 291,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 764, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -40, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 62, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 106, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 94, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 726, -46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 468, 66,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 123, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 256, -67,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 556, 63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 518, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 184, -52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -164, -20,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 498, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -30, -4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -181, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 5, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 75, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 13), -103, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, 1, -104, -1, -32, -2,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimAttackAirU_joint26[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -339, -256, -211,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 368, 95, -96, 33, -30, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 426, -17, 8, 3, -76, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 173, -36, -60, -11, 44, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -13, -20, -134, 3, 94, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -114, -17, -10, -13, -130, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -261, -16, -329, -17, -8, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -339, -256, -211,
	ftAnimEnd(),
	0x0000, 0x0000,
};
