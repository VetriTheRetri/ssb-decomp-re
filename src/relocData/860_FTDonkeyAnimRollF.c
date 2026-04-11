/* AnimJoint data for relocData file 860 (FTDonkeyAnimRollF) */
/* 3360 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimRollF_joint1[54];
extern u16 dFTDonkeyAnimRollF_joint2[68];
extern u16 dFTDonkeyAnimRollF_joint3[40];
extern u16 dFTDonkeyAnimRollF_joint5[52];
extern u16 dFTDonkeyAnimRollF_joint6[154];
extern u16 dFTDonkeyAnimRollF_joint7[76];
extern u16 dFTDonkeyAnimRollF_joint8[98];
extern u16 dFTDonkeyAnimRollF_joint9[8];
extern u16 dFTDonkeyAnimRollF_joint11[8];
extern u16 dFTDonkeyAnimRollF_joint12[118];
extern u16 dFTDonkeyAnimRollF_joint13[44];
extern u16 dFTDonkeyAnimRollF_joint14[34];
extern u16 dFTDonkeyAnimRollF_joint15[8];
extern u16 dFTDonkeyAnimRollF_joint17[26];
extern u16 dFTDonkeyAnimRollF_joint18[210];
extern u16 dFTDonkeyAnimRollF_joint20[70];
extern u16 dFTDonkeyAnimRollF_joint22[160];
extern u16 dFTDonkeyAnimRollF_joint23[168];
extern u16 dFTDonkeyAnimRollF_joint25[232];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTDonkeyAnimRollF_joints[] = {
	(u32)dFTDonkeyAnimRollF_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimRollF_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimRollF_joint3, /* [2] joint 3 */
	(u32)dFTDonkeyAnimRollF_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTDonkeyAnimRollF_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimRollF_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimRollF_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimRollF_joint9, /* [8] joint 9 */
	(u32)dFTDonkeyAnimRollF_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTDonkeyAnimRollF_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimRollF_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimRollF_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimRollF_joint15, /* [14] joint 15 */
	(u32)dFTDonkeyAnimRollF_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTDonkeyAnimRollF_joint18, /* [17] joint 18 */
	(u32)dFTDonkeyAnimRollF_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTDonkeyAnimRollF_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTDonkeyAnimRollF_joint23, /* [22] joint 23 */
	(u32)dFTDonkeyAnimRollF_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF02FC, /* [25] END */
};

/* Joint 1 */
u16 dFTDonkeyAnimRollF_joint1[54] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, -4, 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_TRAY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 6), 0, 5, 0, 6,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -2256,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 2886,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 12), 3577, 1891,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 4), -786, -865,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 4), -865, 251,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 4), -541, 667,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 7), 0, 228, 4492, 457,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 12), 4665, 106,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 12), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 0, 4665,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTDonkeyAnimRollF_joint2[68] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -24, 1032, -402,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 866, -416, -392, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 3), -27,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -24, 110, 824, 596, -387, 1783,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 13, 0, 1090, 1105, 275, 569,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -24, -925, 1654, -77, 40, 8,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 906, -340, 295, 187,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 4), -911, -387,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 6), -508, 462,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 5), -311, 213,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 13), -24, 694,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 844, 77,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 9), 1032,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTDonkeyAnimRollF_joint3[40] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -265, -41, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -265, 0, -41, 0, -16, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 51, -19, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 426, 7, 306, 78,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -117, -28, 1578, 54, -16, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -265, 1578, -16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimRollF_joint5[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 750, 24, 41,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 25, 312, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 817, -20, 24, 0, 41, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 539, -24, 30, 1, 25, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 563, 14, 35, 0, 13, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 750, 20, 24, 0, 41, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 856, 22, 46,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 750, 24, 41,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTDonkeyAnimRollF_joint6[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, -16, -84, 0, -473, 77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -99, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 11, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -210, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -272, -69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -843, -101,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -63, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -35, 24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 44, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 78, -38,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -953, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -763, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 3, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 95, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -40, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -85, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -674, 91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -670, -158,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 65, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 201, 11,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -875, -140,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -955, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -142, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -15, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 192, -61, -791, 129,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -616, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -280, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -44, -32, -297, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -66, 6, -88, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -549, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -461, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, 3, -84, 3, -473, -12,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimRollF_joint7[76] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -407, -148,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1066, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1061, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -427, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -249, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -435, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -549, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -602, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -553, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -433, 208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -136, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -357, -326,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -756, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -770, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -523, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -443, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 35,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimRollF_joint8[98] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 7, 0, -28, 0, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 110, 11, -409, -20, -637, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 136, -16, -235, 86, -658, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 61, -52, -150, 110, -654, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 30, -37, -15, 113, -683, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -14, -46, 76, 103, -679, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -63, -42, 192, 124, -649, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -99, 21, 326, 38, -614, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -20, 63, 268, -15, -549, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 26, 75, 294, -41, -555, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 204, -1, 143, -19, -519, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTDonkeyAnimRollF_joint9[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, -67, -44,
	ftAnimBlock(0, 38),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimRollF_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -398, 70, 29,
	ftAnimBlock(0, 38),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTDonkeyAnimRollF_joint12[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1492, 29, 1436, -21, 1129, 70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1796, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 996, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1424, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1400, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 952, -113,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1806, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1449, -85,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 962, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1337, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 843, -90,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 739, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1381, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1377, 2,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 736, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1120, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1380, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1510, -13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1319, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1431, 8,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1168, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1141, -18,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1497, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1492, -5, 1436, 4, 1129, -12,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTDonkeyAnimRollF_joint13[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -416, -135,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1071, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1103, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -815, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -778, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -682, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -775, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -532, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -451, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 34,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimRollF_joint14[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 98, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 98, 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 103, -4, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -37, 0, 1, 0, 6, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 98, 0, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTDonkeyAnimRollF_joint15[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 38),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTDonkeyAnimRollF_joint17[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -404,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -542, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -342, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), -983, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -963, 41,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -404,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTDonkeyAnimRollF_joint18[210] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1584, 28, -1249, -3, -1958, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1297, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1736, 47, -2118, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1770, -128, -2154, 252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1479, -235, -1272, -45, -1612, 398,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1546, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1299, -126, -1357, 264,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1163, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1083, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1523, -21, -1121, -82,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1613, 35, -1361, -42,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1154, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1151, 207, -1555, 233, -1415, -381,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1568, 406, -1146, 139, -2124, -621,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1963, 227, -1277, -79, -2659, -353,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2024, 92, -1305, 51, -2831, -264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2148, 37, -1174, 42, -3188, -147,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2936, 142,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1368, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2099, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1808, -66,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2842, 80,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2372, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1340, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1209, -38,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1745, -51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1741, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2299, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1284, -42, -2075, 116,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1252, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2066, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2072, 26,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1703, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1588, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2052, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1962, 7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1250, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1249, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1584, -3, -1249, 0, -1958, 3,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTDonkeyAnimRollF_joint20[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1039, 32,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1203, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1243, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 639, -505,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -319,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 468,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 937, 570,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1144, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1192, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1205, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1201, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1208, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1043, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1039, -3,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimRollF_joint22[160] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -128, -1, 24, -10, -377, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -150, -61, -5, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -404, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -421, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -264, -67, -148, -83, -599, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -146, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -17, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -501, 194,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 285, 163,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -122, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -182, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 380, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -329, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -9, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 30, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -222, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -115, 343, -365, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -328, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 464, 282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 50, -312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -174, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -133, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -130, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -131, -67,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 28, -35, -335, -78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 23, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -265, -66, -485, -74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -216, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -484, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -371, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -200, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -133, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -131, 2, 23, 0, -370, 1,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTDonkeyAnimRollF_joint23[168] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 136, -11, 238, 5, -258, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 236, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 150, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -387, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -421, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -67, 304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 208, -115, 188, 282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 258, 59, 4, -123, 497, 137,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 291, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -37, 3, 463, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 63, 16, 237, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 291, -133, 84, 121, 182, -370,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -150, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 306, 98, -502, -533,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 282, -31, -884, -242,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -948, 100,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 232, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -207, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 121, 19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -810, 156,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 21, 84,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 261, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 178, 15,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 99, 92,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 319, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 136, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 113, -16,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 192, 11, 187, -138,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 238, 9, -264, -42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 103, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 118, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 125, 6, 244, 5, -285, -20,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTDonkeyAnimRollF_joint25[232] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 951, 35,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1129, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1171, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 581, -480,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 491,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 983, 618,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1237, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1380, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1376, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 797, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 747, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 726, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 837, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 994, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 990, -4,
	ftAnimEnd(),
	0x0000, 0x200E, 0xF9AA, 0xFFFF, 0x05DF, 0xFFFF, 0xF838, 0xFFED, 0x2803, 0x0004, 0xF9C1, 0x0055, 0x2805, 0x0005, 0x0609, 0x0020, 0x2009, 0x0003, 0xF80C, 0xFFF8, 0x2009, 0x0001, 0xF7F8, 0xFF9F, 0x200B, 0x0001, 0xFA59, 0x004B, 0xF74A, 0xFFC5, 0x2803, 0x0003, 0xFA19, 0x001D, 0x200D, 0x0001, 0x0619, 0xFFFF, 0xF781, 0x00A3, 0x2805, 0x0003, 0x05F3, 0x0020, 0x2009, 0x0001, 0xF891, 0x00E1, 0x2009, 0x0001, 0xF944, 0x0151, 0x200B, 0x0001, 0xFA68, 0x0025, 0xFB33, 0x013D, 0x2803, 0x0007, 0xF9C3, 0x0028, 0x200D, 0x0001, 0x0613, 0x000D, 0xFBBF, 0x0015, 0x2805, 0x0018, 0x05A6, 0x0018, 0x2009, 0x0003, 0xF8EC, 0xFF0E, 0x2009, 0x0001, 0xF85B, 0xFFA0, 0x2809, 0x0007, 0xF794, 0xFFEA, 0x0801, 0x0002, 0x2003, 0x0001, 0xF9F6, 0x0032, 0x2803, 0x0008, 0xFA70, 0xFFF4, 0x0801, 0x0004, 0x2009, 0x0001, 0xF77C, 0xFFE6, 0x2809, 0x0007, 0xF6FA, 0x000E, 0x0801, 0x0003, 0x2003, 0x0001, 0xFA6B, 0x0000, 0x2803, 0x0009, 0xF9FE, 0xFFBC, 0x0801, 0x0003, 0x2009, 0x0001, 0xF70C, 0x0015, 0x2809, 0x0007, 0xF817, 0x0010, 0x0801, 0x0004, 0x2005, 0x0001, 0x05BF, 0x0016, 0x2805, 0x0002, 0x05E3, 0x0009, 0x2003, 0x0001, 0xF9BF, 0xFFCD, 0x2003, 0x0001, 0xF996, 0xFFE5, 0x200F, 0x0001, 0xF988, 0xFFF2, 0x05E8, 0x0005, 0xF81F, 0x0008, 0x0000, 0x0000, 0x0000,
};
