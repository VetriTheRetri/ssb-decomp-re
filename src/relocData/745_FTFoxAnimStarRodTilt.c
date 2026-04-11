/* AnimJoint data for relocData file 745 (FTFoxAnimStarRodTilt) */
/* 2928 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimStarRodTilt_joint1[46];
extern u16 dFTFoxAnimStarRodTilt_joint2[54];
extern u16 dFTFoxAnimStarRodTilt_joint4[50];
extern u16 dFTFoxAnimStarRodTilt_joint5[166];
extern u16 dFTFoxAnimStarRodTilt_joint6[56];
extern u16 dFTFoxAnimStarRodTilt_joint7[10];
extern u16 dFTFoxAnimStarRodTilt_joint8[78];
extern u16 dFTFoxAnimStarRodTilt_joint10[10];
extern u16 dFTFoxAnimStarRodTilt_joint11[176];
extern u16 dFTFoxAnimStarRodTilt_joint12[62];
extern u16 dFTFoxAnimStarRodTilt_joint13[52];
extern u16 dFTFoxAnimStarRodTilt_joint15[10];
extern u16 dFTFoxAnimStarRodTilt_joint16[126];
extern u16 dFTFoxAnimStarRodTilt_joint18[48];
extern u16 dFTFoxAnimStarRodTilt_joint20[114];
extern u16 dFTFoxAnimStarRodTilt_joint21[120];
extern u16 dFTFoxAnimStarRodTilt_joint23[38];
extern u16 dFTFoxAnimStarRodTilt_joint24[118];
extern u16 dFTFoxAnimStarRodTilt_joint25[78];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimStarRodTilt_joints[] = {
	(u32)dFTFoxAnimStarRodTilt_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimStarRodTilt_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimStarRodTilt_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimStarRodTilt_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimStarRodTilt_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimStarRodTilt_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimStarRodTilt_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimStarRodTilt_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimStarRodTilt_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimStarRodTilt_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimStarRodTilt_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimStarRodTilt_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimStarRodTilt_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimStarRodTilt_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimStarRodTilt_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimStarRodTilt_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimStarRodTilt_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimStarRodTilt_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimStarRodTilt_joint25, /* [24] joint 25 */
	0xFFFF02C3, /* [25] END */
};

/* Joint 1 */
u16 dFTFoxAnimStarRodTilt_joint1[46] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 48, 912, -20,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, -48, 720, -192, 480, 500,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), 480, 274,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 0, 720,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 8), 0, 720,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 720, 239,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 6), 720,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), 0, 15, 720, 59, 720, -227,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 48, 912, -20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimStarRodTilt_joint2[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -141, -338, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 178, 40, 446, 98, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 446, -25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 178, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 8), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 178, 11, 268, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 268, 3, -89, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 268, -15, -89, -9, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -141, -338, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTFoxAnimStarRodTilt_joint4[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 156, 81,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 268, -5, 446, 36, 0, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 446, -38,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 268, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 268, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 178, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -178, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 268, 1, -178, 12, 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 309, 156, 81,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimStarRodTilt_joint5[166] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1498, 216, -1442, 52, -1349, -80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2100, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1561, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1430, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1704, -241,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1917, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2098, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2216, 123,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1539, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1450, 122,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1912, -96,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2265, 226,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2347, -5, -1275, 154,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1765, -451,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1146, -178,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1879, 395,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1300, -313, -1473, 285,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1141, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1385, -221, -1307, 112,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1251, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1679, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1147, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 1141, 38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1246, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -1306, -29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1686, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1594, 25,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1203, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1452, 44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1571, 22, -1334, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1483, 39, -1357, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1498, 46, -1442, 40, -1349, 7,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimStarRodTilt_joint6[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, -205,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -771, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -682, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -662, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -614, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -592, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -480, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -435, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -451, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -480, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -429, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -543, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, -15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimStarRodTilt_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 42),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimStarRodTilt_joint8[78] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -113, 136, -72,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -130, -98, -72, -277, -7, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -310, -266, -419, -196, 295, 371,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -662, -58, -464, -7, 735, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -662, 34, -464, 15, 735, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -420, 56, -356, 76, 319, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -381, 1, -80, 79, 14, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -411, -1, 122, 9, -203, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -411, 11, 122, 0, -203, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -113, 136, -72,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimStarRodTilt_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 42),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimStarRodTilt_joint11[176] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3084, -611, 271, -21, 336, -704,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 98, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -4124, -180, -887, -241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4056, 26, -850, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -874, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -3966, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 126, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 59, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 98, 205, -850, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 469, 124, -1043, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3779, 34, 347, -57, -1143, -99,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1295, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3897, -105, 354, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3990, -94, 307, 52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1136, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4087, -194, -1365, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4379, 189, -1696, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3708, 304, -1074, 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3769, -33, -1160, -52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -3812, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1146, 8, -1178, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 1114, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -1334, 16,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3819, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -3922, -54,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1112, 74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1495, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4004, -95, -1319, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1105, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -4623, -114,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1412, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1348, -38, -1206, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4692, -69, 1336, -12, -1271, -65,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimStarRodTilt_joint12[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -594, 30,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -578, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -699, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -661, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -699, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -476, 349,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -632, -248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -778, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -661, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 66,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimStarRodTilt_joint13[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 13, 1, 292, 36, 684, 85,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 13, 292, 684,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 13, 0, 292, 25, 684, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 20, 0, 496, 8, 694, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 20, 0, 496, -19, 694, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTFoxAnimStarRodTilt_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 42),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimStarRodTilt_joint16[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1202, 8, -1385, 8, 1581, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1210, 165, -1376, -133, 1383, -289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1534, 256, -1651, -266, 1003, -271,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1712, 0, 816, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1909, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1948, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1484, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1713, 5, 834, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1764, -48, 966, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1709, -57, 948, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 872, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 1563, -13,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1477, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -1417, 35,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 878, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1295, 138,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1540, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1220, -35,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1383, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1376, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1434, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1539, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1202, -17, -1385, -9, 1581, 42,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimStarRodTilt_joint18[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 354, 149,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 646, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 640, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 646, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 793, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 892, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 891, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 891, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 865, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 406, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -52,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimStarRodTilt_joint20[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1655, 82, 1482, -161, 1552, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1750, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1662, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1320, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1407, 74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1469, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1658, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1658, -35,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1619, -116,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1258, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1603, -37, 1536, 68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1615, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1559, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1221, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 1160, -1,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1616, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 1648, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1556, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 1487, -14,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1158, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 1451, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1481, -2, 1520, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1655, 6, 1482, 0, 1552, 31,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimStarRodTilt_joint21[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1963, -26, -1746, 11, 1743, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2007, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1734, 152, 1775, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1441, 247, 1915, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1766, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1238, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2173, 117,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 2005, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1750, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1944, -13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1277, -54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1670, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1997, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), 1934, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1926, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), 1896, 7,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1675, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -1769, -36,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1927, -7, 1898, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1953, 16, 1738, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1783, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1761, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1963, 10, -1746, 15, 1743, 4,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimStarRodTilt_joint23[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 332, 11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 343, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -171,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 33), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 342, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 346, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimStarRodTilt_joint24[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1624, 46, 1711, -211, -1835, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1250, -140,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1956, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1888, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1768, 111,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1554, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1218, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 1378, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1940, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1865, -26,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1449, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1576, -17,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1842, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), 1679, -42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1587, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -1587, -29,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1380, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1363, 11,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1628, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1853, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1387, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1689, 41,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1640, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1624, -15, 1711, 21, -1835, 18,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimStarRodTilt_joint25[78] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 219,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 219, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 393, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 352, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -399, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 22), 219,
	ftAnimEnd(),
	0x400E, 0xFF4E, 0xFF86, 0x0000, 0x48E0, 0x0000, 0x0040, 0xFE3E, 0x200F, 0x0006, 0xFF27, 0xFFFD, 0xFEF9, 0x002F, 0x0042, 0xFFEE, 0x200F, 0x0003, 0xFF2C, 0x0001, 0x0134, 0x001E, 0xFF57, 0xFFF4, 0x200F, 0x000B, 0xFF3E, 0xFFFE, 0x009F, 0xFFD4, 0xFF90, 0x0013, 0x200F, 0x0004, 0xFF06, 0x0000, 0xFE95, 0xFFF4, 0x0078, 0x0005, 0x380F, 0x0012, 0xFF4E, 0xFF86, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
