/* AnimJoint data for relocData file 764 (FTFoxAnimFSmash) */
/* 4272 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimFSmash_joint1[22];
extern u16 dFTFoxAnimFSmash_joint2[60];
extern u16 dFTFoxAnimFSmash_joint3[46];
extern u16 dFTFoxAnimFSmash_joint5[78];
extern u16 dFTFoxAnimFSmash_joint6[172];
extern u16 dFTFoxAnimFSmash_joint7[72];
extern u16 dFTFoxAnimFSmash_joint8[10];
extern u16 dFTFoxAnimFSmash_joint9[64];
extern u16 dFTFoxAnimFSmash_joint11[10];
extern u16 dFTFoxAnimFSmash_joint12[190];
extern u16 dFTFoxAnimFSmash_joint13[96];
extern u16 dFTFoxAnimFSmash_joint14[22];
extern u16 dFTFoxAnimFSmash_joint16[8];
extern u16 dFTFoxAnimFSmash_joint17[206];
extern u16 dFTFoxAnimFSmash_joint19[80];
extern u16 dFTFoxAnimFSmash_joint21[230];
extern u16 dFTFoxAnimFSmash_joint22[196];
extern u16 dFTFoxAnimFSmash_joint24[102];
extern u16 dFTFoxAnimFSmash_joint25[268];
extern u16 dFTFoxAnimFSmash_joint26[86];
extern u16 dFTFoxAnimFSmash_joint27[64];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTFoxAnimFSmash_joints[] = {
	(u32)dFTFoxAnimFSmash_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimFSmash_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimFSmash_joint3, /* [2] joint 3 */
	(u32)dFTFoxAnimFSmash_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTFoxAnimFSmash_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimFSmash_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimFSmash_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimFSmash_joint9, /* [8] joint 9 */
	(u32)dFTFoxAnimFSmash_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTFoxAnimFSmash_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimFSmash_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimFSmash_joint14, /* [13] joint 14 */
	(u32)dFTFoxAnimFSmash_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTFoxAnimFSmash_joint17, /* [16] joint 17 */
	(u32)dFTFoxAnimFSmash_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTFoxAnimFSmash_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTFoxAnimFSmash_joint22, /* [21] joint 22 */
	(u32)dFTFoxAnimFSmash_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTFoxAnimFSmash_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimFSmash_joint26, /* [25] joint 26 */
	(u32)dFTFoxAnimFSmash_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTFoxAnimFSmash_joint1[22] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 6), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 1920,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 22), 3360,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 988,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 12), 4200,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 12), 4200,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimFSmash_joint2[60] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 48, 912, -20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 1), 591, 94,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 12), -20,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 1), 48,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 960, 407,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 3), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 41), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 8), 1152,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 192, -1600, -20, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 192, -20,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 192, -20,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 432, 480, -240, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 48, 912, -20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTFoxAnimFSmash_joint3[46] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -141, -338, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 9, -55, -326, 28,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -95,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 804, 372,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 11), -804, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 28), 3619,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 16), -804, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), -804, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 12), 3213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -472, 55, -169, -28,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -141, -338,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimFSmash_joint5[78] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 156, 81,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 368, 161, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 309, -36, 81, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 77, -38, 39, -63, 20, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -804, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 0, 16, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 15), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 54, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 268, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 402, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 568, 36, -16, -1, -296, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 695, -36, 39, 24, -170, 54,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 309, 156, 81,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimFSmash_joint6[172] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -109, 8, -165, 192, 258, 126,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 354, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 165, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 27, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -33, -80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -141, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 286, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 274, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 295, 113, -127, 30, 145, -134,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 482, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -4, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -194, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -199, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -203, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 484, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 484, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 481, -233, -10, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 17, -231, -473, -231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 17, 0, -473, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 17, 0, -473, 0,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -203, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 17, -103, -473, 29, -203, 168,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -334, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -188, -119, 133, 339,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 590, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -221, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 30, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -429, -65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -214, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 550, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 272, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 107, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -51, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -80, -28, -189, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -109, -29, -165, 23, 258, -13,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimFSmash_joint7[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, -230,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -789, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -727, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -558, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -683, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -933, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -871, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -830, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -829, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -434, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -434, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -434, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -434, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -828, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -814, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -565, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTFoxAnimFSmash_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 52),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTFoxAnimFSmash_joint9[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -113, 136, -72,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -113, 136, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -113, 46, 136, -12, -72, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 402, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 402, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 491, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), 536,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -58, 68, 11, -36, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 69, -16, 90, 9, -48, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -113, 136, -72,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTFoxAnimFSmash_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 52),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimFSmash_joint12[190] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1741, -111, 1336, 442, -1271, -75,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1676, 58, -1282, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1779, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1569, -195,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1329, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1746, 32, -1236, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1450, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1212, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1156, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1493, -208,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1294, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1569, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1251, -161,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1050, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1686, -160,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1909, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1579, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1578, -8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1048, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1042, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1906, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -1870, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1046, 91, 1569, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1226, 89, 1251, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1226, 0, 1251, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 11), 1226, -14, 1251, 9,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1870, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1786, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1197, -47, 1271, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 1069, 145, 1523, -170,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1781, 88,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1473, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1289, 220, 1249, -173,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 1712, 33, 1291, 52,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1386, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1276, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1741, 28, 1336, 44, -1271, 5,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimFSmash_joint13[96] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -594, -399,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -993, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -962, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -594, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -709, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1060, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -984, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -848, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -851, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -850, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -844, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -540, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -540, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -540, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -520, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -176, 215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -387, -241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -490, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -590, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTFoxAnimFSmash_joint14[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 272, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 893,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 30), 893,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTFoxAnimFSmash_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, -804, 1608, 60,
	ftAnimBlock(0, 52),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimFSmash_joint17[206] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1202, 498, 1831, 140, 1581, -643,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1701, 232, 1972, 55, 938, -235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1668, -58, 1942, -18, 1111, 221,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1943, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1617, 124, 1465, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1832, 198, 1259, -224,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1919, -198, 772, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1800, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1694, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1617, -226, 1812, 19, 794, 89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1630, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1688, -47, 1075, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1637, -37, 1275, 305,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1589, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1686, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1585, -13, 1671, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1674, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1618, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1609, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 1640, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1582, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1649, 20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1663, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1637, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1653, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1834, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1638, -9, 1842, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1666, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1839, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1638, 19, 1797, -168,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1662, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1502, -230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1336, -102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1548, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1571, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1425, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1679, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1833, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1347, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1268, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1202, -65, 1831, -1, 1581, 33,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimFSmash_joint19[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 354, 694,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1048, 288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 930, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 631, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 939, 273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1240, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1233, -212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 815, -613,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -404,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 516, 394,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 795, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 801, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 724, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 403, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -49,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTFoxAnimFSmash_joint21[230] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1655, -102, 1482, 99, 1552, -270,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1331, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1453, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1281, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1308, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1391, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1205, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1312, 78, 1146, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1489, 241, 1366, 38, 1362, 138,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1794, 73, 1263, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1794, 156,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1662, -70,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1679, -121, 1167, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1568, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1551, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1634, 15, 1613, 68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1807, 95,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1712, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1597, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1536, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1896, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1949, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1941, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1709, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1549, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 1598, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1691, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1652, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1725, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1653, 35,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1607, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1613, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1673, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1613, -19,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1612, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1522, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1600, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1475, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1604, 13, 1527, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1622, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1501, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1548, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1578, 23,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1597, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1528, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1602, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1627, 26, 1533, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1655, 27, 1482, -45, 1552, 19,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimFSmash_joint22[196] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1963, 70, 1470, -200, 1743, -200,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2258, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1269, -71, 1542, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1327, 114, 1704, 175,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2162, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1753, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2277, 22, 1772, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1626, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2303, -203, 2254, -526,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1870, -227, 1109, -544,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1848, -62, 1165, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1745, -105, 1306, 79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1747, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1323, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1627, -6, 1434, 182,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1598, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1689, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1622, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1603, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1619, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1757, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 1667, 21,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1601, 5, 1620, -217,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1602, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1184, -230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1159, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1162, 14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1687, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 1643, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1601, 20, 1610, -27, 1180, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1226, 70,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1348, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1676, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1646, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1940, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1283, 64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1718, 36,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1377, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1451, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1963, 22, 1470, 19, 1743, 24,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimFSmash_joint24[102] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 332, 686,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1018, 266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 864, -256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 505, -432,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 519,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1044, 512,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1031, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1091, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1123, -230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 630, -558,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -312,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 506,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1018, 529,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1059, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1018, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1117, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1222, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1138, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 409, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -77,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTFoxAnimFSmash_joint25[268] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1592, 91, 1711, 136, 1381, -427,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1898, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1691, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 954, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1029, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1213, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1514, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1571, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1899, -230, 1621, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1436, -160, 1468, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1787, -20, 1578, 75, 1405, -161,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1612, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1438, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1145, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1094, 62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1567, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1702, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1644, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1557, 132,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1923, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1609, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1597, -18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1623, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1634, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2026, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 2078, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2084, -67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1710, -22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1632, 13, 1590, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1651, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1761, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1727, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1734, 21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1618, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1251, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1252, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1310, -45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1755, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1734, -31,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1775, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1697, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1652, -95, 1698, 4, 1256, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1112, -131,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1723, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1888, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1960, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1721, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 982, -55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 977, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1677, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1613, 41,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 925, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1339, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1622, 59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1615, 17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1655, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1690, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1592, 23, 1711, 20, 1381, 41,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimFSmash_joint26[86] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 219, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 219, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 281, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -190, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -203, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 520, 73, 219, -8, 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 238, 2, 169, -3, -27, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 560, 7, 162, -14, -25, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 402, -15, -132, -37, -325, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 326, -24, -405, -32, -462, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 185, -87, -428, 53, -449, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -108, -18, -138, 64, -259, 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 219, 0,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTFoxAnimFSmash_joint27[64] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -178, -122, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 3), -122,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -178, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 522, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -488, -44, -122, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 122, 40, 414, 11, 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 234, 0, 76, -6, -51, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 136, 25, 274, -18, 34, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 688, -16, -257, -20, -617, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -178, -122, 0,
	ftAnimEnd(),
	0x0000, 0x0000,
};
