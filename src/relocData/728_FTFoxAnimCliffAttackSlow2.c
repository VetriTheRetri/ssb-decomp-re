/* AnimJoint data for relocData file 728 (FTFoxAnimCliffAttackSlow2) */
/* 3296 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimCliffAttackSlow2_joint1[20];
extern u16 dFTFoxAnimCliffAttackSlow2_joint2[28];
extern u16 dFTFoxAnimCliffAttackSlow2_joint3[20];
extern u16 dFTFoxAnimCliffAttackSlow2_joint5[26];
extern u16 dFTFoxAnimCliffAttackSlow2_joint6[142];
extern u16 dFTFoxAnimCliffAttackSlow2_joint7[64];
extern u16 dFTFoxAnimCliffAttackSlow2_joint8[10];
extern u16 dFTFoxAnimCliffAttackSlow2_joint9[50];
extern u16 dFTFoxAnimCliffAttackSlow2_joint11[10];
extern u16 dFTFoxAnimCliffAttackSlow2_joint12[146];
extern u16 dFTFoxAnimCliffAttackSlow2_joint13[72];
extern u16 dFTFoxAnimCliffAttackSlow2_joint14[60];
extern u16 dFTFoxAnimCliffAttackSlow2_joint16[10];
extern u16 dFTFoxAnimCliffAttackSlow2_joint17[144];
extern u16 dFTFoxAnimCliffAttackSlow2_joint19[64];
extern u16 dFTFoxAnimCliffAttackSlow2_joint21[160];
extern u16 dFTFoxAnimCliffAttackSlow2_joint22[184];
extern u16 dFTFoxAnimCliffAttackSlow2_joint24[64];
extern u16 dFTFoxAnimCliffAttackSlow2_joint25[178];
extern u16 dFTFoxAnimCliffAttackSlow2_joint26[74];
extern u16 dFTFoxAnimCliffAttackSlow2_joint27[68];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTFoxAnimCliffAttackSlow2_joints[] = {
	(u32)dFTFoxAnimCliffAttackSlow2_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimCliffAttackSlow2_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimCliffAttackSlow2_joint3, /* [2] joint 3 */
	(u32)dFTFoxAnimCliffAttackSlow2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTFoxAnimCliffAttackSlow2_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimCliffAttackSlow2_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimCliffAttackSlow2_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimCliffAttackSlow2_joint9, /* [8] joint 9 */
	(u32)dFTFoxAnimCliffAttackSlow2_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTFoxAnimCliffAttackSlow2_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimCliffAttackSlow2_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimCliffAttackSlow2_joint14, /* [13] joint 14 */
	(u32)dFTFoxAnimCliffAttackSlow2_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTFoxAnimCliffAttackSlow2_joint17, /* [16] joint 17 */
	(u32)dFTFoxAnimCliffAttackSlow2_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTFoxAnimCliffAttackSlow2_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTFoxAnimCliffAttackSlow2_joint22, /* [21] joint 22 */
	(u32)dFTFoxAnimCliffAttackSlow2_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTFoxAnimCliffAttackSlow2_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimCliffAttackSlow2_joint26, /* [25] joint 26 */
	(u32)dFTFoxAnimCliffAttackSlow2_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTFoxAnimCliffAttackSlow2_joint1[20] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 376,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 11), 600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 7), 600,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 540, -179,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 7), 360,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimCliffAttackSlow2_joint2[28] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 552, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 18), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 960, 571,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 960, -739,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 300,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 7), 300,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 48, 912, -20,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTFoxAnimCliffAttackSlow2_joint3[20] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 11), 3216,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 11), 3216,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 3075, -338, -3,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimCliffAttackSlow2_joint5[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 714, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 178, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 268, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 9), 357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 309, 156, 81,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTFoxAnimCliffAttackSlow2_joint6[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2323, -100, -1604, 10, -2419, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2938, -421,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1460, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 2102, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2297, 383,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2869, 514, -3438, -513,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -4230, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3326, 646, -1407, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 4162, 467, -1577, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4262, 81, -1562, 37, -4240, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1328, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 4534, 200, -4610, -324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4726, 102, -4964, -183,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -4974, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 4717, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1324, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1500, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4926, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -4758, 45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4724, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 4607, 77,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4725, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -4681, 79,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1551, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1460, 32,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4686, 54, -4601, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4715, 29, -1442, 17, -4566, 34,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimCliffAttackSlow2_joint7[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -7, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -54, -229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -742, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -721, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -438, 356,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -48, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -256, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -338, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -762, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -681, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -553, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTFoxAnimCliffAttackSlow2_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTFoxAnimCliffAttackSlow2_joint9[50] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTZ), -178,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 4), 357,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 13), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 0, -28,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 89, 12,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 89, -12, 0, 8,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 11), -113, 136,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 11), -72,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTFoxAnimCliffAttackSlow2_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimCliffAttackSlow2_joint12[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -661, 3, 7, 8, -457, -53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 125, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -813, -178, -1001, -340,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1049, 326, -1384, 303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -160, 739, 356, 144, -394, 701,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 430, 565, 414, -166, 18, 324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 971, 248, 23, -234, 255, 100,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 28, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 927, -177, 219, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -64, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 256, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 238, 124, 104, -197,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 301, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -139, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -103, 7, -152, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 32, 0, -12, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 299, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 206, -31,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 29, 13, -3, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 279, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 580, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 178, -17, 667, 70,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 273, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 568, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 178, -73, 413, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 132, -45, 271, -1, 336, -76,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimCliffAttackSlow2_joint13[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -339, -454,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -908, -344,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1028, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -737, 241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -279, 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -151, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -193, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -492, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -775, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -812, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -661, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 66,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTFoxAnimCliffAttackSlow2_joint14[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 357,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 804, 12, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 893, -67, 268, -44, 0, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 268, -89, 0, -38, 268, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0, -38,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 268,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 268, -19, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTFoxAnimCliffAttackSlow2_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimCliffAttackSlow2_joint17[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -37, -66, -569, 59, -42, 107,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -140, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -33, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -83, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -370, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -339, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -68, 53, -622, -307,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -99, -182, -1209, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -151, -418,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -870, 48, -399, 29, -985, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -54, 417, -41, 191, -1329, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -35, 8, -16, 12, -1139, 95,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1126, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -43, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -36, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 25, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1116, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -814, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -660, 102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -491, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 21, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -392, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -82, -72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -257, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -373, 118,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -61, 58,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -236, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -405, -12, -223, 13, -26, 34,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimCliffAttackSlow2_joint19[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 292, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 350, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 220, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 278, 339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 899, 324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 927, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 848, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 756, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 947, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1159, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1138, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1387, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1339, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 412, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -58,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTFoxAnimCliffAttackSlow2_joint21[160] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -422, 36, -9, 67, -253, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -385, 205, 57, 159, -215, 301,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -11, 152, 310, 55, 348, 251,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -57, 170, 69, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 288, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 182, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 260, 57, 206, -3, -132, -179,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -16, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 57, -93, -176, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 60, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 73, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 227, 407, 32, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 889, -71, 247, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 85, -411, -126, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 66, -8, -86, 20, -29, -62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -290, -62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 38, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -86, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 3, 52,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -380, -126,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -585, 72,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 46, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 164, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 43, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 54, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -488, 93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -87, 49,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 203, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 138, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 46, -8, 125, -12, -56, 31,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimCliffAttackSlow2_joint22[184] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX), 1793, -41, 1415, 50, 1408, 111, 4095, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4095,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4095,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1633, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1600, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1474, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1352, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1210, 74,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 6553, 5324, 5324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1501, 44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1038, -220,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1647, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1926, 69, 1563, -1, 857, -152,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 1787, -144,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 817, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1616, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 6553, 5324, 5324,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1631, 0,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 5324, -860, 4710, -430, 4710, -430,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4095, 4096, 4095,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 819, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 992, 86,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 14), 4095, 4096, 4095,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1631, 0, 1616, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1624, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1617, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1641, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1776, 205, 1668, -44, 1103, 69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1305, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2053, 120, 1535, -82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1959, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1502, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1468, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1500, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1952, 2, 1667, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1963, 11, 1470, 2, 1743, 75,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimCliffAttackSlow2_joint24[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1086, -37,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1048, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 869, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 816, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 711, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 495, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 229, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 508, 316,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 637, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 435, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -103,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTFoxAnimCliffAttackSlow2_joint25[178] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -539, 11, 107, 50, -761, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -527, -49, 158, -30, -658, 385,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -637, 110, 46, -56, 9, 343,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 66, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -306, 250, 28, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -137, 155, -7, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -95, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 40, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -27, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 51, -118, 7, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -313, -60, -170, -69, 203, 83,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -77, 93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 126, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -87, 97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 90, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -29, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -49, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 171, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 63, -3,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -45, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -76, -117,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 93, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 258, 180,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 70, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -281, -323, -46, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -723, -57, 463, 34, -352, -159,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 192, -139, -318, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -396, 227,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -159, 111,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 48, -126, -294, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -45, 88, -61, -75, -257, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16, 61, -102, -41, -226, 30,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimCliffAttackSlow2_joint26[74] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -659, 20, 158, -24, -355, 36,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -470, 129, 0, -16, 0, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 378, 126, 23, 7, 27, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 544, -83, 60, 10, 27, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -122, -88, 88, -2, 22, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -73, -32, 40, -9, 15, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -417, -51, 0, 10, 5, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -485, 69, 122, 36, 1, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 219, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTFoxAnimCliffAttackSlow2_joint27[68] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -29, -61, 338, 64, -171, -2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 64, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -495, -48, 132, -40, -181, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -371, 111, 53, -14, -152, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 395, 116, 13, -9, -118, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 559, -66, -22, -8, -86, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -67, -43, -48, 2, -64, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 214, -10, 0, -6, -124, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -178, -122, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
