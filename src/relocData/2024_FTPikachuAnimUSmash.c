/* AnimJoint data for relocData file 2024 (FTPikachuAnimUSmash) */
/* 4704 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimUSmash_joint1[78];
extern u16 dFTPikachuAnimUSmash_joint2[94];
extern u16 dFTPikachuAnimUSmash_joint3[78];
extern u16 dFTPikachuAnimUSmash_joint5[54];
extern u16 dFTPikachuAnimUSmash_joint6[222];
extern u16 dFTPikachuAnimUSmash_joint7[36];
extern u16 dFTPikachuAnimUSmash_joint8[94];
extern u16 dFTPikachuAnimUSmash_joint9[10];
extern u16 dFTPikachuAnimUSmash_joint10[70];
extern u16 dFTPikachuAnimUSmash_joint11[70];
extern u16 dFTPikachuAnimUSmash_joint13[54];
extern u16 dFTPikachuAnimUSmash_joint14[242];
extern u16 dFTPikachuAnimUSmash_joint16[16];
extern u16 dFTPikachuAnimUSmash_joint17[202];
extern u16 dFTPikachuAnimUSmash_joint19[100];
extern u16 dFTPikachuAnimUSmash_joint21[204];
extern u16 dFTPikachuAnimUSmash_joint22[204];
extern u16 dFTPikachuAnimUSmash_joint24[110];
extern u16 dFTPikachuAnimUSmash_joint25[362];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimUSmash_joints[] = {
	(u32)dFTPikachuAnimUSmash_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimUSmash_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimUSmash_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimUSmash_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimUSmash_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimUSmash_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimUSmash_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimUSmash_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimUSmash_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimUSmash_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimUSmash_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimUSmash_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimUSmash_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimUSmash_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimUSmash_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimUSmash_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimUSmash_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimUSmash_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimUSmash_joint25, /* [24] joint 25 */
	0xFFFF0461, /* [25] END */
};

/* Joint 1 */
u16 dFTPikachuAnimUSmash_joint1[78] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 675, 108,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), -26, 33, -28, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 597, -208, 18, -237,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 597, 208, 18, 237,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 675, 905, 108, 460,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1254, 1423, 191, 14,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1797, 46, 119, -292,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 1403, -657, -247, -147,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 893, -1359, -83, 537,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 554, 11, 88, 155,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 554, 11, 88, -122,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 656, 531, -95, 15,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 34,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 675, 14,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), 108,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimUSmash_joint2[94] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, 133, 32,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 151, 42, -33, -55, 31, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 151, -44, -33, 1, 31, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 19, -196, -30, 1, 30, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -438, -224, -29, 2, 31, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1329, -185, -17, 0, 31, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -2667, -155, -33, -1, 32, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -3146, -43, -33, 2, 32, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -2882, 29, -20, 1, 26, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -2882, -21, -20, 0, 26, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -3141, -30, -28, 15, 26, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -3193, 133, 32,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimUSmash_joint3[78] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -13, 0, -2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 145, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 145, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -13, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -143, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -380, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 226, 65, 0, 0, -2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 344, 13, 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 293, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 293, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 302, -30, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -13, 0, -2,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimUSmash_joint5[54] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 484, 429, -48, 39, 312, -3,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 484, -429, -48, -39, 312, 3,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 324, -168, -62, 37, 313, -313,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 421, 57, -34, 43, 194, -54,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 447, -22, 28, -6, 196, 27,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), 324, -62, 313,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimUSmash_joint6[222] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2412, -4, 236, -476, 3014, -308,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2423, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -407, 0, 2525, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -239, 322, 2705, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2412, -681, 236, 163, 3014, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3786, 106, 86, -352, 2955, -155,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2565, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2199, 808, -467, -361,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2169, -9, -636, -125,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -549, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2219, -172, 2513, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2821, -128, 2901, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2773, 39, 2779, -128,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -3205, -17, 2514, -23,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -509, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -405, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3205, 102, 2488, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3001, 439, 2318, -370,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2325, 439, 1747, -369,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2123, -331, 1579, 315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2988, -417, 2378, 427,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2957, 28, -106, 156, 2435, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -96, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2930, 21, 2451, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2845, 62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 2220, -89,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -111, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -199, 35,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2753, 136,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2272, 24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2139, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2436, 302,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2328, -292, -149, 97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 221, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2857, -337,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3004, 34, 2776, 250,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2525, 187, 2997, 38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 233, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2412, 112, 236, 2, 3014, 16,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimUSmash_joint7[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 20), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -161,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -10, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -10,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimUSmash_joint8[94] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, -163, 20,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 99, 34, 6, 56, -4, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 99, -31, 6, 0, -4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, -126, 5, 0, -4, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -279, -82, 9, 0, 8, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -492, 22, 5, -3, 3, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -10, 43, -36, -3, 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -10, 22, -36, 7, 6, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 101, 12, 0, 4, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 101, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 148, -10, 0, -16, 0, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -2, -163, 20,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimUSmash_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimUSmash_joint10[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -430, -123, 0, 74, 0, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -371, 203, 222, -13, 226, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 589, 207, -69, -11, 440, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1078, 8, 139, 9, 203, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 713, -75, 79, -5, 117, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -423, -68, 37, -3, 54, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -239, 41, 37, -3, 54, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimUSmash_joint11[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -419, -117, 0, -78, 0, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -352, 247, -234, -10, -252, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 817, 217, -54, 1, -528, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1168, -3, -223, -4, -189, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 764, -89, -128, 13, -108, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -604, -81, 44, 12, -128, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -379, 59, 44, -4, -128, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimUSmash_joint13[54] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -393, -185, -75, -34, 295, -46,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -393, 185, -75, 34, 295, 46,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -324, -44, -62, 74, 313, -241,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -410, -62, -47, 50, 205, -59,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), -456, 20, 43, -3, 187, 25,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), -324, -62, 313,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimUSmash_joint14[242] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2412, 7, 1703, -400, -1905, -276,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1128, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2392, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2182, -275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2456, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1905, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1302, 287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2412, 194, 1703, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2002, -92, 1619, -194, -1928, -62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1110, -163,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1960, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2597, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2385, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2173, 274, 986, -84,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1657, 72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1182, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1767, 135,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1954, -183,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1691, -101,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2059, -36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2122, -130,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2386, -100,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2072, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1990, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1197, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1118, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2010, -173, -2545, -264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2519, 179, -3077, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1977, 193, -2451, 440,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2173, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2132, -130, 1292, 92,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1253, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2238, -83,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -2466, -130,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2177, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2405, -129,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1221, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 987, 5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2609, -84, -2547, -95,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2351, 421, -2397, 255,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1017, 129,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1522, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1792, 301, -2085, 214,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1909, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1748, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2134, -304, 1641, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2358, -139, 1689, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2412, -54, 1707, 18, -1905, 4,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimUSmash_joint16[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), -10, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimUSmash_joint17[202] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1550, -54, -1608, 45, 1205, -234,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1458, -60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1467, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 890, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 877, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1608, -67, 1205, 461,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1610, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1801, 357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1433, -12, 1920, 100,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1827, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1610, 0, 2002, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1493, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1980, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2045, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2075, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1815, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1438, 37, 1673, -80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1308, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1855, 40, 1655, -175,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1702, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1323, -472,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1318, -80, 710, -164,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1594, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1895, -106, 993, 271,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1696, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1253, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1501, 81, 1190, -90,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1380, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1072, -273,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 278, -174,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1551, 72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1536, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 293, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 584, 145,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1534, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1636, 50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1385, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1600, -9,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 744, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1035, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1580, 42, 1153, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1550, 29, -1608, -7, 1205, 52,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimUSmash_joint19[100] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 938, 190,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1149, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 938, -571,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -465,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 447, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 595, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 607, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1002, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1064, -300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 401, -532,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 282, 261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 522, 335,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 953, 352,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1228, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1221, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1005, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 903, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 991, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 962, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 938, -23,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPikachuAnimUSmash_joint21[204] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1614, -29, 1480, 69, -1961, -172,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1492, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1466, -81, -2101, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1387, 6, -2008, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1480, 41, -1961, 452,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1544, 12, 1469, 33, -1103, 558,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1363, -175, 1536, -24, -940, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1166, 92, 1500, -9, -964, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1529, -50, -925, -248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1548, 263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1693, 77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1542, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1438, -62, -1347, -384,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1527, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1694, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1613, 26, -1579, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1595, -94, -1444, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1424, 12, -1483, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1282, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1620, 153, 1708, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1732, 42, 1547, -75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1640, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1557, 24, -1061, 66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1657, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1149, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1246, -178,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1641, -90,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1630, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1692, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1688, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1517, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1679, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1479, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1532, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1931, -59,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1668, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1630, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1614, -16, 1480, 0, -1961, -30,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimUSmash_joint22[204] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 128, 55, -57, 184, -192, -447,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 49, -109,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 66, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -639, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -569, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -154, 295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -74, -49, 178, 205,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -62, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -148, -86, 255, 80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -90, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 338, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 326, 60,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -83, 17, -57, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -66, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 236, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 398, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 302, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -54, 83, 257, -196,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 212, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -90, -384,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 256, 62, -511, -141,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -122, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 362, -39, 75, -109,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 97, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 176, -173,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 108, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -93, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 28, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 353, 145, 117, -16, 192, 105,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 313, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 415, -7, -18, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 403, -13, -16, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 277, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 268, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 324, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -113, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -232, -79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -206, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 237, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -24, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 257, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 147, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 128, -18, -57, -32, -192, 13,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimUSmash_joint24[110] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 807, 327,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1134, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1136, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 807, -526,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -400,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 589, 415,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 830, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 284, -411,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 336, 285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 577, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 607, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 373, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 218, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 223, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 373, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1000, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 936, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 826, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 807, -18,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTPikachuAnimUSmash_joint25[362] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -6, -71, 284, 65, -484, 66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -496, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -6, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 349, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 251, -54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 284, 42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -484, 448,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 268, 99, 326, -78, 400, 596,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -80, -399,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 128, -83, 709, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 158, 40, 670, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 167, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -606, -430, 667, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 612, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -941, 362,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 119, 501,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 61, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -14, -70, 454, -103,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 53, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 406, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 636, 232,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 742, -440,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 317, -186, 312, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -30, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -319, -275, -9, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -234, 107, 346, 248,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -84, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 43, 88, 487, -89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 184, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 167, -306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -91, 38, -124, -289,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -514, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -6, 179, 1, -191,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -231, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 267, 157,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 296, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -463, 72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -447, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -246, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -207, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 280, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 312, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -514, -74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -585, 90,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 291, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 5, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -196, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 118, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -480, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -484, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 235, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -6, -12, 284, 49, -484, 0,
	ftAnimEnd(),
	0x400E, 0xFFF2, 0x0000, 0xFFFD, 0x48E0, 0xFFFF, 0xFF4C, 0xFE9E, 0x400D, 0x0003, 0x0000, 0xFFFD, 0x2003, 0x0001, 0xFD90, 0xFF35, 0x3803, 0x0002, 0xFD90, 0x200F, 0x0001, 0xFD90, 0x00A9, 0x0000, 0x0056, 0xFFFD, 0x0003, 0x200F, 0x0002, 0xFF8D, 0x0071, 0x0102, 0x0047, 0x0005, 0xFFC0, 0x200F, 0x0002, 0xFF55, 0xFF92, 0x011C, 0x0047, 0xFEFA, 0xFF6B, 0x200F, 0x0002, 0xFDD4, 0xFFC3, 0x0222, 0xFFAB, 0xFDB0, 0xFFD4, 0x200F, 0x0008, 0xFCF1, 0x0005, 0xFDC2, 0xFFA6, 0xFD40, 0x0008, 0x200F, 0x0002, 0xFE0E, 0x009A, 0xFE9D, 0x0095, 0xFE01, 0x0044, 0x200F, 0x0001, 0xFEC2, 0x004F, 0xFF83, 0x00F4, 0xFE0C, 0x0117, 0x200F, 0x0002, 0xFEFC, 0x0006, 0x017A, 0x0038, 0x0148, 0x005D, 0x200F, 0x0007, 0xFEFC, 0x000E, 0x017A, 0xFFCF, 0x0148, 0xFFF3, 0x200F, 0x0005, 0xFFAA, 0x0018, 0xFF2D, 0xFFDB, 0x00A5, 0xFFE0, 0x380F, 0x0005, 0xFFF2, 0x0000, 0xFFFD, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
