/* AnimJoint data for relocData file 2066 (FTPikachuAnimDownForwardU) */
/* 2944 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimDownForwardU_joint1[26];
extern u16 dFTPikachuAnimDownForwardU_joint2[60];
extern u16 dFTPikachuAnimDownForwardU_joint3[56];
extern u16 dFTPikachuAnimDownForwardU_joint4[38];
extern u16 dFTPikachuAnimDownForwardU_joint6[22];
extern u16 dFTPikachuAnimDownForwardU_joint7[84];
extern u16 dFTPikachuAnimDownForwardU_joint8[38];
extern u16 dFTPikachuAnimDownForwardU_joint9[38];
extern u16 dFTPikachuAnimDownForwardU_joint10[14];
extern u16 dFTPikachuAnimDownForwardU_joint11[22];
extern u16 dFTPikachuAnimDownForwardU_joint12[22];
extern u16 dFTPikachuAnimDownForwardU_joint14[22];
extern u16 dFTPikachuAnimDownForwardU_joint15[76];
extern u16 dFTPikachuAnimDownForwardU_joint17[30];
extern u16 dFTPikachuAnimDownForwardU_joint18[160];
extern u16 dFTPikachuAnimDownForwardU_joint20[64];
extern u16 dFTPikachuAnimDownForwardU_joint22[154];
extern u16 dFTPikachuAnimDownForwardU_joint23[192];
extern u16 dFTPikachuAnimDownForwardU_joint25[80];
extern u16 dFTPikachuAnimDownForwardU_joint26[160];
extern u16 dFTPikachuAnimDownForwardU_joint27[60];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTPikachuAnimDownForwardU_joints[] = {
	(u32)dFTPikachuAnimDownForwardU_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimDownForwardU_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimDownForwardU_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimDownForwardU_joint4, /* [3] joint 4 */
	(u32)dFTPikachuAnimDownForwardU_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTPikachuAnimDownForwardU_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimDownForwardU_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimDownForwardU_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimDownForwardU_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimDownForwardU_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimDownForwardU_joint12, /* [11] joint 12 */
	(u32)dFTPikachuAnimDownForwardU_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTPikachuAnimDownForwardU_joint15, /* [14] joint 15 */
	(u32)dFTPikachuAnimDownForwardU_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTPikachuAnimDownForwardU_joint18, /* [17] joint 18 */
	(u32)dFTPikachuAnimDownForwardU_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTPikachuAnimDownForwardU_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTPikachuAnimDownForwardU_joint23, /* [22] joint 23 */
	(u32)dFTPikachuAnimDownForwardU_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTPikachuAnimDownForwardU_joint26, /* [25] joint 26 */
	(u32)dFTPikachuAnimDownForwardU_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTPikachuAnimDownForwardU_joint1[26] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), 333, 1919,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), 2160, 1323,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), 2880, 779,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 802,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 21), 3480,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimDownForwardU_joint2[60] = {
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 287,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY), 0, 0, 0, 615,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 3), 257, -93,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 3), 556,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -8,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 611, 1066, 241, -152,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 956, 146, 200, -179,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 703, -323, 129, -161,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 592, -8, 19, -6,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 21), -26, 33, -28, 673, 108,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPikachuAnimDownForwardU_joint3[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -11, -60,
	ftAnimSetValRate(FT_ANIM_ROTX), -900, 28,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 22, 334, 0, 2, 0, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1108, 299,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 3614, 156, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 3614, -24, 0, 16, 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 3274, -26, 235, 9, 54, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 3240, 133, 32,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTPikachuAnimDownForwardU_joint4[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -61, 273, -120,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 194, 24, 0, -18, 0, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 304, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -10, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 209, -15, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -13, 0, -2,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimDownForwardU_joint6[22] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 500, -30, 63,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 471, -39, -42, -7, 273, 55,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 33), 324, -62, 313,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimDownForwardU_joint7[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2559, -350, -742, -70, -2596, 338,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1087, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2208, -52, -2258, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2455, 92, -2514, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2291, -90, -2310, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2212, -66, -1157, -78, -2203, 92,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2015, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 2103, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -1659, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1688, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), -1849, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1990, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -1811, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2128, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 2409, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2412, 2, -1845, 4, -1810, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimDownForwardU_joint8[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -784, 20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -670, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -657, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -271, 245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 135,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 0, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -10,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimDownForwardU_joint9[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -183, 354, -62,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 255, 30, 0, -24, 0, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 281, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -18, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 245, -13, 0, -6, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -2, -163, 20,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimDownForwardU_joint10[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 434, 148, 2349,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 8, 32, 508,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), 59, 5, 2401,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimDownForwardU_joint11[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 132, 55, 516,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -3, 0, -1, 0, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 33), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTPikachuAnimDownForwardU_joint12[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -280, -178, -261,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 7, 0, 4, 0, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 33), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimDownForwardU_joint14[22] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -525, -36, -17,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -413, 44, -51, -5, 240, 73,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 33), -324, -62, 313,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTPikachuAnimDownForwardU_joint15[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2013, -19, 710, -56, 1271, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2033, -276, 653, 219, 1230, -309,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2567, -195, 1149, 425, 653, -216,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1713, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2425, 105, 797, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2357, 60, 853, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -2305, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 31), 1311, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1717, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), 1703, -2,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2316, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), -2412, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2412, 0, 1703, 0, 1311, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimDownForwardU_joint17[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -214, -511,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -801, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -358, 400,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 174,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTPikachuAnimDownForwardU_joint18[160] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -348, -8, -147, -19, 446, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -356, 174, -167, -67, 279, -378,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 344, -283, 19, -311, -440,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 331, -35, -127, -4, -602, 369,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -70, -207, -292, -83, 427, 417,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -5, 55, -336, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 231, -250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -72, -244,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -451, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 27, -4, -336, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -339, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -33, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 45, 1, -646, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -198, -87, -406, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -204, 30, -336, -11, -635, -243,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -118, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -342, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1005, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1061, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -816, 49,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -117, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -4, 29,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -763, 55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -416, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -313, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -4, 10,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 22, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 54, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 4, 0, 5, -410, 6,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTPikachuAnimDownForwardU_joint20[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 539, 492,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 992, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 503, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 773, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 870, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 886, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1074, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1069, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 883, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1189, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1181, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 953, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 951, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPikachuAnimDownForwardU_joint22[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1487, -22, 1504, -2, 1753, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1386, -108, 1504, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1753, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1450, -241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1247, -71, 1613, -48, 1270, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1442, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1406, -122, 1391, 80,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1360, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1368, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1254, -20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1472, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1663, 113,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1308, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1562, -52,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1773, 76, 1264, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1713, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1118, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1446, -130,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1262, 14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1707, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1819, 34,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1280, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1429, -44,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1110, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1467, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1843, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1619, -9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1380, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1258, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1614, -4, 1480, 13, 1252, -6,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTPikachuAnimDownForwardU_joint23[192] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 278, -59, 2, 53, 246, -169,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 62, -240, 167, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 76, -266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -287, -360,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -262, 40, 96, 37, -644, 420,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 143, 200, 243, 72, 553, 479,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 137, -57, 241, 21, 313, -309,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 269, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -66, -292,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -492, -175,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 29, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 18, 87,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -700, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -486, -70,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 148, 78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 232, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 251, 0, -698, -218,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1264, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 316, -40,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 300, 78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 234, -149,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1218, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1070, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 276, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 373, 3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 75, -143, -1067, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 37, 84,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -389, 118,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 380, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 181, -116,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 111, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 135, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 60, -103, -288, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -25, -58, -220, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 129, -5, -57, -31, -194, 26,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTPikachuAnimDownForwardU_joint25[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 685, 61,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 862, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1065, -233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, -307,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 451, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 773, 218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 889, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 922, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1120, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1141, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 962, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1177, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1158, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 690, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 734, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 971, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 990, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 840, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 812, -27,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTPikachuAnimDownForwardU_joint26[160] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1753, -41, -1553, -43, 1207, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1909, 251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1629, -82, 1219, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1760, 10, 1381, 128,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1541, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2214, 17, -1609, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1945, -195, -1541, 48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1604, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1824, -88, 1436, -97,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1623, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1351, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1733, -18, 1479, 85,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1584, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1394, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1657, -51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1313, -88,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1580, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1573, -24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1225, -104, 1320, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 899, 23, 1725, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 932, 34, -1595, -14, 1797, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 1550, 79, 1798, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -1329, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1260, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1625, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1615, 49, 1697, -102,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 1616, -22, 1139, -34,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1768, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1860, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1601, -15, -1892, -31, 1120, -19,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTPikachuAnimDownForwardU_joint27[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 17, -535, -952,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -15, 9, 259, 102, 264, 307,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 75, 22, 82, -31, 894, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 119, 24, 73, -13, 1115, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 299, 13, -36, -8, 964, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 299, -14, -36, 1, 964, -46,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -14, 0, -3,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
