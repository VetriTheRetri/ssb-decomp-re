/* AnimJoint data for relocData file 997 (FTSamusAnimStunLandD) */
/* 2048 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimStunLandD_joint2[46];
extern u16 dFTSamusAnimStunLandD_joint4[68];
extern u16 dFTSamusAnimStunLandD_joint5[150];
extern u16 dFTSamusAnimStunLandD_joint6[68];
extern u16 dFTSamusAnimStunLandD_joint7[24];
extern u16 dFTSamusAnimStunLandD_joint8[10];
extern u16 dFTSamusAnimStunLandD_joint11[30];
extern u16 dFTSamusAnimStunLandD_joint12[118];
extern u16 dFTSamusAnimStunLandD_joint14[52];
extern u16 dFTSamusAnimStunLandD_joint15[100];
extern u16 dFTSamusAnimStunLandD_joint17[48];
extern u16 dFTSamusAnimStunLandD_joint19[80];
extern u16 dFTSamusAnimStunLandD_joint20[76];
extern u16 dFTSamusAnimStunLandD_joint22[108];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimStunLandD_joints[] = {
	(u32)dFTSamusAnimStunLandD_joint2, /* [0] joint 2 */
	0x00000000, /* [1] NULL */
	(u32)dFTSamusAnimStunLandD_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimStunLandD_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimStunLandD_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimStunLandD_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimStunLandD_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimStunLandD_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimStunLandD_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimStunLandD_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimStunLandD_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimStunLandD_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimStunLandD_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimStunLandD_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimStunLandD_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF01E0, /* [22] END */
};

/* Joint 2 */
u16 dFTSamusAnimStunLandD_joint2[46] = {
	ftAnimSetValRate(FT_ANIM_TRAY), 360, 2809,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 982, 0, 0, 17, -132,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 21), 23, 1, -25, 32,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 22), 697,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 268, 10, -321, -12,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 2164, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 11), 163,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 23, 200, -25,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 697, 268, -321,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimStunLandD_joint4[68] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 284, 14, 12, 0, -12, 110,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -680, -21, 270, -2, -537, 1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 82, 61, 7, 15, -56, -343,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 47, -27, 0, 4, -154, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -158, 26, -45, -15, 44, 29,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 34, -38, 15, 20, -67, 67,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -27, 38, -23,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -158, -45, 44,
	ftAnimBlock(0, 1),
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -27, 38, -23,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimStunLandD_joint5[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -110, -75, -180, -6, -137, 55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -151, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -456, -346, 75, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -878, -280, 345, 244,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -960, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 847, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -70, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -106, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -313, -95,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -285, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -918, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -666, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 842, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 854, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -275, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -166, 119,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -570, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -578, -213, -18, 105, 952, -111,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -229, -392, 488, 338,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -997, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -980, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1436, -588, -741, -124, 1308, 805,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2157, -337, -478, 272, 2099, 384,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2110, 46, -196, 286, 2077, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1965, -40, 1979, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 335, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 339, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 322, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2052, -87, 264, -57, 2020, 41,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimStunLandD_joint6[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1041, -75,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1204, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -941, 313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -577, 467,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1322, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1304, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -933, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -761, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -475, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -530, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -561, -30,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimStunLandD_joint7[24] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 77, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 18), -562, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -411, 72,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 5), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 77, 74,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimStunLandD_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 86, 68, -29,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimStunLandD_joint11[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -402, -33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 14), -402, 45, 0, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 268, 111,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 268, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimStunLandD_joint12[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 64, 2, 284, -2, -120, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -315, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 341, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -83, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -136, -53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 38, 170,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -357, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 38, 280,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 380, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 427, -87,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 359, 337, 212, 150,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1644, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 583, 254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 848, 216,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1243, 83,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1715, 48, 341, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1741, 43, 271, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1801, -81, 281, 603, 1306, -381,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1579, -66, 1478, 675, 480, -340,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1668, 47, 1633, 88, 626, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1673, 4, 1655, 22, 616, -9,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimStunLandD_joint14[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -903, 11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -572, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -497, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -624, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -790, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1098, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -959, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -592, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -424, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -679, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -540, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -343, 197,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimStunLandD_joint15[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -94, 39, -99, -1, -515, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 0, -68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -182, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -138, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 75, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -78, -36, 300, 117,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -42, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 310, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 167, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -164, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 143, 9,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -46, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -172, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -196, 347, 151, -111, 144, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 522, 393, -79, -140, -146, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 589, -43, -130, 5, -130, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 435, -133, -67, 49, -127, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 323, -112, -31, 35, -144, -17,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimStunLandD_joint17[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 548, 47,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 329, -269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 4, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 85, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 101, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 182, 81,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimStunLandD_joint19[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 129, -67, -143, -6, -257, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 252, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -106, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -296, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -527, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -642, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -552, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -740, -53,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 280, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 630, 3,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -792, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -1538, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1618, 481,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -575, 527,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -564, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -562, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -592, -30, -106, 0, 632, 1,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimStunLandD_joint20[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 53, -10, 37, 0, -759, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 432, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 130, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -341, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -286, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 312, 11,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 447, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 434, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 189, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 373, -33,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 315, -92,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -241, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 291, -34, 464, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 386, 30, 160, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 364, -21, 7, -153, -333, -91,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimStunLandD_joint22[108] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 667, 33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 933, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 932, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 400, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 391, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 405, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 651, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 897, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 880, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 787, -92,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFF69, 0x0021, 0x013F, 0xFFFD, 0xFF8D, 0x0002, 0x2805, 0x0014, 0xFEAC, 0xFFF4, 0x2809, 0x0019, 0x0133, 0x0001, 0x2003, 0x0008, 0x025C, 0x0056, 0x2003, 0x0001, 0x02B0, 0x004C, 0x2803, 0x000C, 0x02B7, 0xFFE8, 0x0801, 0x000B, 0x2005, 0x0001, 0xFEA0, 0xFFF6, 0x2805, 0x0004, 0xFE89, 0xFFFF, 0x2003, 0x0001, 0x029C, 0xFFBC, 0x2003, 0x0002, 0x007D, 0xFDC9, 0x2003, 0x0001, 0xFDC1, 0xFEAA, 0x200F, 0x0001, 0xFDD1, 0x0010, 0xFE88, 0x0000, 0x0134, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
