/* AnimJoint data for relocData file 1175 (FTLinkAnimRollF) */
/* 3440 bytes: 120-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimRollF_joint1[46];
extern u16 dFTLinkAnimRollF_joint2[62];
extern u16 dFTLinkAnimRollF_joint3[44];
extern u16 dFTLinkAnimRollF_joint5[68];
extern u16 dFTLinkAnimRollF_joint6[194];
extern u16 dFTLinkAnimRollF_joint7[72];
extern u16 dFTLinkAnimRollF_joint10[34];
extern u16 dFTLinkAnimRollF_joint11[190];
extern u16 dFTLinkAnimRollF_joint12[76];
extern u16 dFTLinkAnimRollF_joint13[34];
extern u16 dFTLinkAnimRollF_joint14[8];
extern u16 dFTLinkAnimRollF_joint17[50];
extern u16 dFTLinkAnimRollF_joint18[34];
extern u16 dFTLinkAnimRollF_joint19[24];
extern u16 dFTLinkAnimRollF_joint21[24];
extern u16 dFTLinkAnimRollF_joint22[158];
extern u16 dFTLinkAnimRollF_joint24[56];
extern u16 dFTLinkAnimRollF_joint26[128];
extern u16 dFTLinkAnimRollF_joint27[144];
extern u16 dFTLinkAnimRollF_joint29[68];
extern u16 dFTLinkAnimRollF_joint30[146];

/* Joint pointer table (30 entries, 120 bytes) */
u32 dFTLinkAnimRollF_joints[] = {
	(u32)dFTLinkAnimRollF_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimRollF_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimRollF_joint3, /* [2] joint 3 */
	(u32)dFTLinkAnimRollF_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTLinkAnimRollF_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimRollF_joint7, /* [6] joint 7 */
	(u32)dFTLinkAnimRollF_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTLinkAnimRollF_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimRollF_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimRollF_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimRollF_joint14, /* [13] joint 14 */
	(u32)dFTLinkAnimRollF_joint17, /* [14] joint 17 */
	0x00000000, /* [15] NULL */
	0x00000000, /* [16] NULL */
	(u32)dFTLinkAnimRollF_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimRollF_joint19, /* [18] joint 19 */
	(u32)dFTLinkAnimRollF_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTLinkAnimRollF_joint22, /* [21] joint 22 */
	(u32)dFTLinkAnimRollF_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTLinkAnimRollF_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	(u32)dFTLinkAnimRollF_joint27, /* [26] joint 27 */
	(u32)dFTLinkAnimRollF_joint29, /* [27] joint 29 */
	0x00000000, /* [28] NULL */
	(u32)dFTLinkAnimRollF_joint30, /* [29] joint 30 */
};

/* Joint 1 */
u16 dFTLinkAnimRollF_joint1[46] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 0, -443, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 1889,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 8), -720,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 30), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 7), 1438, 993,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 22), 3600, 188,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 21), 0, 261,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 1), 3600, 188,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 1), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimRollF_joint2[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 901, 1, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 25), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), 714, 45,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 705, -24, -111, 26,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 864, -22, 39, 119,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 676, -731, 37, -15,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 133, -501, 23, -23,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 175, 207, 14, -22,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 263, 483, 9, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 1608, 0, 901, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTLinkAnimRollF_joint3[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, 0, 276, -35, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 20, 96, 276, -43, 0, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 11), 1439, 136, -425, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 517, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 119, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 2747, 87, 94, 36, 1, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 3109, 276, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTLinkAnimRollF_joint5[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 259, 0, 166, 0, 56, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 454, -48, 166, -20, 56, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -125, 28, 0, -15, 0, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 651, 77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 651, 0, 0, 2,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -15, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 580, 7, 96, 10, 33, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 747, -29, 139, 6, 47, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 259, 166, 56,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTLinkAnimRollF_joint6[194] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 280, -3, -326, -12, -86, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 280, 63, -86, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -374, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -326, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -429, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 392, 416, -198, -441,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1113, 345, -968, -437,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1083, -386, -118, 175, -1073, -111,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1253, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 341, -486, -79, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 109, -122, -64, -61,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 74, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -430, -96,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1187, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1219, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 106, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 45, -332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -516, -95,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -686, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1107, 362,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -538, -467, -495, 490,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -816, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -515, 207, -126, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -59, 59, 126, 297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -512, 243, -153, -132, 539, 226,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 289, -163,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 115, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -395, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -410, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -285, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 127, -157,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -145, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 223, 90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 234, 16,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -338, -43, -65, 62,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -383, 40, -36, -40,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 255, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 280, 24, -326, 56, -86, -49,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTLinkAnimRollF_joint7[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -500, -20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -578, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -577, 321,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -781, -225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -882, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1219, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1251, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -225, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -412, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -508, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -584, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 83,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimRollF_joint10[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 4, -12, 7, -14, 76, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -180, -7, -216, 0, 74, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -153, 9, 26, 11, 92, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 4, 7, 76,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimRollF_joint11[190] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2024, 1, 1484, -14, 1557, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 2065, -12, 1383, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1642, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1651, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2023, -84, 1294, 29, 1453, -448,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1656, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1441, 69, 753, -546,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1432, 21, 360, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1483, -20, 565, 267,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1105, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1511, -7, 1391, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1878, 133, 1644, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1020, -81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 734, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1909, 3, 1581, -76,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1141, -104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1851, 255,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 744, 74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1227, 417,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1029, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1653, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2183, 206, 1717, 345,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1925, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 2033, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2060, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1849, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1855, -10, 1671, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2054, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1653, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1865, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1711, -103,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2074, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2035, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1660, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1510, -43,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1606, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2024, -10, 1484, -26, 1557, -48,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLinkAnimRollF_joint12[76] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -587, 14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -731, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -888, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -639, 440,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -329, -363,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -733, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -816, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -918, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -449, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -556, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -819, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -834, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -143, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -202, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -664, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -621, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 33,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimRollF_joint13[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -37, -209, 4, 0, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -563, -7, -138, 6, 142, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -101, 28, -130, -3, 158, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 0, -209, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTLinkAnimRollF_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 937, -804, 670,
	ftAnimBlock(0, 35),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimRollF_joint17[50] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1654, -7, -129, 102, -273, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1651, -15, 76, 33, -351, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1576, 19, 39, 30, -771, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1823, 42, 347, 13, -472, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1998, -6, 173, -44, -218, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 1697, -536, -339,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimRollF_joint18[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, -163, 19, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 0, 332, 3, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, -83, -49, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -163, 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTLinkAnimRollF_joint19[24] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -2, -199, 21, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -61, 327, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -199, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimRollF_joint21[24] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -8, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -211, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTLinkAnimRollF_joint22[158] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1850, 55, -1364, 18, -1499, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1363, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1507, -87, -1924, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1578, -2, -1992, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1662, 64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1483, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1443, -91,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1567, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1734, -71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2263, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1486, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1352, 53,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1571, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1529, -9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2235, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1873, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1538, 133, -1299, -11, -1739, -82,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -989, 217, -1492, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2037, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2064, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1851, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -827, 89, -1403, 108,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1274, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -811, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1182, -251,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1485, -73,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1287, -6, -1847, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1347, -19, -1535, 46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1554, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1830, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1850, -19, -1364, -16, -1499, 35,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTLinkAnimRollF_joint24[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 249, 104,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 704, -228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 370, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 496, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 610, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1268, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1300, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1256, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1425, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1186, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1078, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 323, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -74,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTLinkAnimRollF_joint26[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 329, 15, -161, -9, -34, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -47, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 380, 33, -414, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 435, 12, -410, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -248, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 381, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 403, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 476, 58,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -54, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -355, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 572, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1022, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 998, -100,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 646, -126,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -250, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -99, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 569, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 929, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 742, -319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 289, -275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 192, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 341, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -317, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -176, 25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -64, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -42, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, -12, -161, 14, -34, 7,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTLinkAnimRollF_joint27[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, -10, 269, 12, -125, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -129, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 159, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -518, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -659, -64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -597, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -186, -67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -645, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 91, -65, -595, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -418, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 141, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 200, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 200, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -619, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -125, 250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -411, 60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 8, 350,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 282, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 138, 23, 243, 9, 403, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -77, -160, 302, 25, -135, -418,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 237, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -183, -101, -434, -267,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -357, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -894, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 296, 56, -822, 87,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 284, -23, -150, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -260, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 254, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 16, 269, -15, -125, 25,
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTLinkAnimRollF_joint29[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 424, 50,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 741, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 758, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 962, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 939, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 333, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 225, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 240, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 473, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 450, -300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 629, 420,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 846, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 584, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 473, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -48,
	ftAnimEnd(),
	0x0000,
};

/* Joint 30 */
u16 dFTLinkAnimRollF_joint30[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -427, 2, -74, 5, -69, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -392, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -61, -12, -104, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -74, 52, -69, -82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -348, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 149, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -309, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -319, 40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -294, 61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 217, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -265, 62, 169, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -85, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -183, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -235, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -504, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -453, -51, 226, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 173, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -607, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -410, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -713, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -686, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -503, 15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -111, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -54, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -493, 27, 93, -96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -450, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -138, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -63, -8, -108, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -70, -5, -81, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -427, 22, -74, -3, -69, 11,
	ftAnimEnd(),
};
