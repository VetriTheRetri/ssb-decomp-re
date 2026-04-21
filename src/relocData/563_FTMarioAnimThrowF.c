/* AnimJoint data for relocData file 563 (FTMarioAnimThrowF) */
/* 2672 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimThrowF_joint1[46];
extern u16 dFTMarioAnimThrowF_joint2[24];
extern u16 dFTMarioAnimThrowF_joint4[62];
extern u16 dFTMarioAnimThrowF_joint5[96];
extern u16 dFTMarioAnimThrowF_joint6[30];
extern u16 dFTMarioAnimThrowF_joint7[12];
extern u16 dFTMarioAnimThrowF_joint8[68];
extern u16 dFTMarioAnimThrowF_joint10[28];
extern u16 dFTMarioAnimThrowF_joint11[122];
extern u16 dFTMarioAnimThrowF_joint12[26];
extern u16 dFTMarioAnimThrowF_joint13[22];
extern u16 dFTMarioAnimThrowF_joint15[10];
extern u16 dFTMarioAnimThrowF_joint16[132];
extern u16 dFTMarioAnimThrowF_joint18[70];
extern u16 dFTMarioAnimThrowF_joint20[134];
extern u16 dFTMarioAnimThrowF_joint21[144];
extern u16 dFTMarioAnimThrowF_joint23[66];
extern u16 dFTMarioAnimThrowF_joint24[136];
extern u16 dFTMarioAnimThrowF_joint25[58];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTMarioAnimThrowF_joints[] = {
	(u32)dFTMarioAnimThrowF_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimThrowF_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimThrowF_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimThrowF_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimThrowF_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimThrowF_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimThrowF_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimThrowF_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimThrowF_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimThrowF_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimThrowF_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimThrowF_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimThrowF_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimThrowF_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimThrowF_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimThrowF_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimThrowF_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTMarioAnimThrowF_joint24, /* [23] joint 24 */
	(u32)dFTMarioAnimThrowF_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTMarioAnimThrowF_joint1[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_TRAZ), 0, -201, 180, -333,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 540,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -3216, -226,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 17), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 7), -182, 108,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 7), 367, 439,
	ftAnimSetValT(FT_ANIM_ROTY, 8), -3216,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 3), 367,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAZ, 5), 0, 0, 367, -266,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ, 6), -2993, 0, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimThrowF_joint2[24] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAY), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 22), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 8,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -68, -798, -97,
	ftAnimBlock(0, 14),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 8), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 6), 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimThrowF_joint4[62] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 790, 15, 622, 3, 795, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 923, 6, 652, 3, 851, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 848, 19, 658, 0, 862, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1034, 10, 652, -8, 851, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 893, -28, 622, -5, 795, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 893, 622, 795,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 893, -62, 622, -33, 795, -62,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 208, 258, 110,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimThrowF_joint5[96] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4096,
	ftAnimSetValRateBlock(FT_ANIM_SCAX), 6144, 187,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 16), 6144,
	_FT_ANIM_CMD(11, FT_ANIM_SCAX, 1), 2,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 663, -138, -151, 1, -886, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -174, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 13), 178, 40, -1048, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 215, 22, -1099, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1114, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 213, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 3), 6144,
	ftAnimSetValRateT(FT_ANIM_SCAX, 5), 6144, -372,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -183, -25, -1094, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -540, 249,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -332, 32,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 4095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 210, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 80, 39,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -299, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -221, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 133, 52, -300, 31, -272, -50,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTMarioAnimThrowF_joint6[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -556, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -552, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -381, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 199,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimThrowF_joint7[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -625, 0, 0, 143, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 8,
	ftAnimBlock(0, 28),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimThrowF_joint8[68] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -1, 0, 0, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -23, 283, -49,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), -23, 283, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -6, -7, 0, -101, -5, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -48, 0, -680, 0, 37, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 4, 0, 68, 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 18, 0, 0, 0, 16, -23, 16, 283, 3, -49, 35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 201, -4, 176, 0, 288, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimThrowF_joint10[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -20, 0, 12, 0, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -221, 139, -209,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimThrowF_joint11[122] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4096,
	ftAnimSetValRateBlock(FT_ANIM_SCAX), 6144, 187,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 16), 6144,
	_FT_ANIM_CMD(11, FT_ANIM_SCAX, 1), 2,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1341, 3, 1421, 1, 724, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 1480, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 1349, -46, 719, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1276, -129, 638, -108,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 271, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 586, -129,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 3), 6144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 536, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 576, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 283, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 318, 28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_SCAX, 5), 6144, -372,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 572, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 769, 147,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1474, -12,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 4095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1415, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1343, -213, 357, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 976, 573, 989, -189, 546, 578,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1915, 537, 964, 33, 1515, 563,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2052, 136, 1056, 92, 1674, 158,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTMarioAnimThrowF_joint12[26] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 24), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -571, -382,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -773, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, -37,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimThrowF_joint13[22] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 759, -14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 625, -77,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 625, 42,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 625,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTMarioAnimThrowF_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 28),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimThrowF_joint16[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2296, -76, -1375, 135, 1955, -104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2407, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1743, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1274, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1315, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1270, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2362, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2580, 50,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1334, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1283, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1653, -61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1887, 46,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2492, 74, -1248, -54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -2333, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1581, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1878, -158, 1899, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1997, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1893, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1884, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1850, 74,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2326, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2354, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1745, 189, 1991, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1865, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1471, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1331, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1261, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2369, -14, -1242, 18, 1852, -13,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimThrowF_joint18[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 276, 92,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 369, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 151, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 7, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 347, 251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 396, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 283, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 521, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 357, -260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -174,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 34, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 356, 195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 425, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 417, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 401, -16,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTMarioAnimThrowF_joint20[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -275, 103, -10, 136, -153, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -125, -36, 183, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -101, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 96, 160,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 175, -136,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -187, -27, 117, -51,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 155, -96, 48, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -53, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -148, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -29, 73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -87, -122,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 16, -109, -13, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -220, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -12, -121, -247, -63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -69, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -257, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -435, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -385, 52, -98, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -94, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -128, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -200, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -170, 32,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -158, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -40, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -64, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -6, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -148, 22, 20, 26, -8, 32,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimThrowF_joint21[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1599, 62, 1326, 45, 1742, -110,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1805, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1397, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1643, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1826, 185,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2008, -35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1764, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1796, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1366, -6, 1944, -126,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1519, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1681, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1867, 30, 1835, 198,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2130, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1720, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1589, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1190, -67,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2046, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1442, -148, 1806, -119,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1426, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1175, -4, 1807, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1820, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1347, 57,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1428, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 1565, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1680, 71, 1854, -63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1771, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1387, 31, 1692, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1410, 16, 1645, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1800, 29, 1419, 9, 1634, -10,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimThrowF_joint23[66] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 147,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 154, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 399, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 275, -213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 408, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 302, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 12), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 311, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 419, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, 26,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimThrowF_joint24[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 220, -48, -86, -23, 39, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 163, 87, 85, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -201, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -191, 95,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 279, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 269, 119, 223, 120,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 414, -100,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 454, 43,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 164, -163,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -115, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 283, -71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 457, 245,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 512, 15, 139, 278,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 273, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 761, 107, 441, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 673, -69, 422, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 350, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 622, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 164, -58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 262, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -12, -50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 320, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -57, -36, -155, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 110, -38, -86, -19, -202, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 88, -22, -96, -9, -213, -11,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTMarioAnimThrowF_joint25[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX), 0, 1608, 0,
	ftAnimSetValBlock(FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 600,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX, 10), 0, -46, 1608, 14, 0, -114,
	ftAnimSetValBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 752, 300, 600,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 58,
	ftAnimSetValRateT(FT_ANIM_TRAX, 2), -177, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 1092,
	ftAnimSetValT(FT_ANIM_TRAY, 32), 2581,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 32), 6333, 1412,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -574, 1794, 722,
	ftAnimSetValRateT(FT_ANIM_TRAX, 30), 0, 47,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -574, 1794, 722,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
