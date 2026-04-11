/* AnimJoint data for relocData file 862 (FTDonkeyAnimCatch) */
/* 1744 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimCatch_joint1[38];
extern u16 dFTDonkeyAnimCatch_joint2[8];
extern u16 dFTDonkeyAnimCatch_joint4[32];
extern u16 dFTDonkeyAnimCatch_joint5[98];
extern u16 dFTDonkeyAnimCatch_joint6[44];
extern u16 dFTDonkeyAnimCatch_joint7[34];
extern u16 dFTDonkeyAnimCatch_joint8[8];
extern u16 dFTDonkeyAnimCatch_joint10[32];
extern u16 dFTDonkeyAnimCatch_joint11[96];
extern u16 dFTDonkeyAnimCatch_joint12[44];
extern u16 dFTDonkeyAnimCatch_joint13[34];
extern u16 dFTDonkeyAnimCatch_joint14[22];
extern u16 dFTDonkeyAnimCatch_joint16[20];
extern u16 dFTDonkeyAnimCatch_joint17[62];
extern u16 dFTDonkeyAnimCatch_joint19[32];
extern u16 dFTDonkeyAnimCatch_joint21[52];
extern u16 dFTDonkeyAnimCatch_joint22[56];
extern u16 dFTDonkeyAnimCatch_joint24[28];
extern u16 dFTDonkeyAnimCatch_joint25[80];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTDonkeyAnimCatch_joints[] = {
	(u32)dFTDonkeyAnimCatch_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimCatch_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimCatch_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimCatch_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimCatch_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimCatch_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimCatch_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimCatch_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimCatch_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimCatch_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimCatch_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimCatch_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimCatch_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimCatch_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimCatch_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimCatch_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimCatch_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimCatch_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTDonkeyAnimCatch_joint25, /* [24] joint 25 */
	0xFFFF01A7, /* [25] END */
};

/* Joint 1 */
u16 dFTDonkeyAnimCatch_joint1[38] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -24, 1032, -402,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 8), -24,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 889, -109, -90, 546,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 923, 44, 144, 526,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -24, 0, 923, 109, 304, -546,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -24, 1032, -402,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTDonkeyAnimCatch_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -265, -41, -16,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTDonkeyAnimCatch_joint4[32] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 750, 24, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 791, 5, 23, 0, 41, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 791, 23, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 791, -5, 23, 0, 41, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 750, 24, 41,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimCatch_joint5[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, -36, -84, -33, -473, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -278, -19, -420, -184, -339, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -232, 184, -594, -41, -423, -228,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 36, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 91, 150, -796, -252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 68, 19, -928, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -925, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 188, -28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 192, 109,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -64, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1005, -83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -925, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 154, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 115, -110,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -717, 204,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -448, 20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -11, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, -51, -84, -20, -473, -25,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimCatch_joint6[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -407, -150,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -763, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -683, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -505, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -517, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -110, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -194, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -669, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -541, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 134,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimCatch_joint7[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -1031, -103, -21, 9, 22, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -824, 34, 80, 16, 67, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -824, 103, 80, -9, 67, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTDonkeyAnimCatch_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, -67, -44,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTDonkeyAnimCatch_joint10[32] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -398, 70, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -495, -12, 73, 0, 29, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -495, 73, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -495, 12, 73, 0, 29, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -398, 70, 29,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimCatch_joint11[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1492, 20, -1780, -49, 1129, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -2154, -42, 1088, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1591, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1539, -166,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1035, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2147, 93, 774, -290,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1370, 119,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 263, -16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 947, -64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 806, 52,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1270, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1804, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 265, 44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 667, 331,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 905, 151,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1442, 101,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1015, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1803, 12, 1160, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1492, 50, -1780, 23, 1129, -31,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimCatch_joint12[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -416, -58,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -556, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -497, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -542, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -376, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -45, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -376, -315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -786, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -606, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 189,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimCatch_joint13[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 103, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1379, 124, 111, -4, 34, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1097, -46, -37, -24, 28, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1097, -124, -37, 4, 28, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 103, 0, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTDonkeyAnimCatch_joint14[22] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 118, 122, 46,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 866, -35, 770,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 144, 12, 428, 153, 67, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 144, 428, 67,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTDonkeyAnimCatch_joint16[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -404,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -404,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -404, -54,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -788,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -404,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTDonkeyAnimCatch_joint17[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -86, 7, -394, 1, -304, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -308, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -136, -74, 105, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -211, -56, 250, 114,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -224, 83, 264, -214,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -294, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -382, -13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -124, 72, -4, -247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -80, 18, -229, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -86, -6, -394, -11, -304, -74,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimCatch_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1004, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 985, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 877, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 846, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 976, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1014, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1004, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimCatch_joint21[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, -10, 24, -3, -377, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -364, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 2, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -633, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -627, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -559, 90,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -322, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -127, 88,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -440, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, 64, 24, 21, -377, 63,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimCatch_joint22[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 99, 4, 216, -5, -297, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 154, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 17, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -601, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -562, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -315, 28,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 139, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 94, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 56, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 186, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 99, 5, 216, 30, -297, 17,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimCatch_joint24[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 993, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 947, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 939, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1052, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1012, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 993, -19,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTDonkeyAnimCatch_joint25[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -22, 105, 5, -383, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 288, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -218, 10, -209, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -208, 9, -271, -53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -414, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -10, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 293, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 133, -44,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -393, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 11, 105, -28, -383, 9,
	ftAnimEnd(),
	0x40C0, 0xFC67, 0x038C, 0x482E, 0x0000, 0x0000, 0x0000, 0x0018, 0x20C1, 0x0006, 0x0082, 0x02FC, 0x06F4, 0x0205, 0x20C1, 0x0005, 0x0082, 0xFCB7, 0x0653, 0xFD47, 0x38C1, 0x0005, 0xFC67, 0x038C, 0x0000, 0x0000,
};
