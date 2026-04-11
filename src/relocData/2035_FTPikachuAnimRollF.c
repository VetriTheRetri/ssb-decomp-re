/* AnimJoint data for relocData file 2035 (FTPikachuAnimRollF) */
/* 2672 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimRollF_joint1[34];
extern u16 dFTPikachuAnimRollF_joint2[84];
extern u16 dFTPikachuAnimRollF_joint3[86];
extern u16 dFTPikachuAnimRollF_joint4[62];
extern u16 dFTPikachuAnimRollF_joint6[10];
extern u16 dFTPikachuAnimRollF_joint7[84];
extern u16 dFTPikachuAnimRollF_joint8[16];
extern u16 dFTPikachuAnimRollF_joint9[78];
extern u16 dFTPikachuAnimRollF_joint10[10];
extern u16 dFTPikachuAnimRollF_joint11[116];
extern u16 dFTPikachuAnimRollF_joint12[84];
extern u16 dFTPikachuAnimRollF_joint14[36];
extern u16 dFTPikachuAnimRollF_joint15[68];
extern u16 dFTPikachuAnimRollF_joint17[16];
extern u16 dFTPikachuAnimRollF_joint18[80];
extern u16 dFTPikachuAnimRollF_joint20[40];
extern u16 dFTPikachuAnimRollF_joint22[100];
extern u16 dFTPikachuAnimRollF_joint23[78];
extern u16 dFTPikachuAnimRollF_joint25[40];
extern u16 dFTPikachuAnimRollF_joint26[160];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTPikachuAnimRollF_joints[] = {
	(u32)dFTPikachuAnimRollF_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimRollF_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimRollF_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimRollF_joint4, /* [3] joint 4 */
	(u32)dFTPikachuAnimRollF_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTPikachuAnimRollF_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimRollF_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimRollF_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimRollF_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimRollF_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimRollF_joint12, /* [11] joint 12 */
	(u32)dFTPikachuAnimRollF_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTPikachuAnimRollF_joint15, /* [14] joint 15 */
	(u32)dFTPikachuAnimRollF_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTPikachuAnimRollF_joint18, /* [17] joint 18 */
	(u32)dFTPikachuAnimRollF_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTPikachuAnimRollF_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTPikachuAnimRollF_joint23, /* [22] joint 23 */
	(u32)dFTPikachuAnimRollF_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTPikachuAnimRollF_joint26, /* [25] joint 26 */
	0xFFFF0279, /* [26] END */
};

/* Joint 1 */
u16 dFTPikachuAnimRollF_joint1[34] = {
	ftAnimSetVal(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 6), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 1248,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 1248, 2884,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 11), 3727, 1003,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), 4262, 380,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 9), 4440, 129,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 2), 4440,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPikachuAnimRollF_joint2[84] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 675, 108,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 783, 269, -127, 417,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 223, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 0, 0, -268, -88, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 911, 60, 473, 104,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 920, -110, 108, -273,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -1099, -96,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 8), -1616,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 0, 0, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 675, -130, -108, -115,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 0, -1614, 0, 675, -108,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPikachuAnimRollF_joint3[86] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, 165, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -19, -212, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 485, 202, 6, -67, 155, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 603, 48, -37, -20, 211, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 727, 52, -96, -17, 241, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 973, 49, -162, -13, -343, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 973, -55, -162, 106, -343, -334,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 806, -88, 155, 26, -1346, -337,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 442, -27, -6, -21, -2367, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 589, -35, -20, 14, -3101, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 86, -39, 142, 12, -3155, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -2, 165, -3221,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTPikachuAnimRollF_joint4[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -13, 0, -2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 154, -20, 32, 0, 141, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -136, -37, -4, -91, -18, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -105, 6, -606, -37, -31, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -64, 13, -412, 39, 15, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 93, 3, -10, 24, 26, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -13, -9, 0, 0, -2, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -13, 0, -2,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimRollF_joint6[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 324, -62, 313,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimRollF_joint7[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 476, 88, 237, -49, -199, -229,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 777, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 87, -26, -887, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 75, -115, -934, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 557, -16, -606, -90, -598, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 679, 24, -467, 48, -753, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -820, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 291, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 702, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 608, -35,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -771, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -300, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 466, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 456, 1, 267, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 476, 6, 237, -10, -199, 33,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimRollF_joint8[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPikachuAnimRollF_joint9[78] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, -163, 20,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -315, 9, -138, 44, 72, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 95, 71, 279, 86, 239, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 42, -83, 293, -13, 115, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -238, -71, 227, -42, 90, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -384, 21, 37, -25, -13, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -85, 60, 51, -29, 125, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 41, 12, -169, -22, 15, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 41, -3, -169, 0, 15, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -2, -163, 20,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimRollF_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimRollF_joint11[116] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 254, 357, 37,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 254, -46, 357, -24, 37, -54,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -17, 0, 1, 0, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -88, -38, 6, 63, -188, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -309, 13, 504, 36, -158, 27,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 190, 323, -37,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 254, 20, 357, 10, 37, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 64, 35, 402, -18, 119, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 48, 16, 323, -49, 162, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 224, -31, -89, -29, 124, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -200, -106, 84, 43, -19, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -200, 32, 84, -17, -19, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -51, 40, 3, -16, 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTPikachuAnimRollF_joint12[84] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -29, 0, 29, 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -299, -57, 295, 16, -18, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -684, 32, 198, -19, -189, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 24, 98, 103, -21, 265, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 494, -30, -54, -16, -66, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -216, -177, -29, 6, -16, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -216, 35, -29, 7, -16, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -51, 43, 3, 5, 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTPikachuAnimRollF_joint14[36] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -324, -36, -62, 195, 313, -119,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -337, 10, 268,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -324, 3, -62, -17, 313, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), -324, -62, 313,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTPikachuAnimRollF_joint15[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 0, 1703, -192, 1311, -166,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 564, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 33), 803, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1127, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1197, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1591, 2, 718, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1214, -54, 924, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1262, 19, 881, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 971, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1329, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1687, 14,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1210, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 804, 0, 1703, 5, 1311, 33,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimRollF_joint17[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTPikachuAnimRollF_joint18[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1666, -155, -1609, -1, 1201, -94,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1646, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1198, -55, 917, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1335, 27, 1376, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 1493, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1495, 27, 1134, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1500, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1089, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1120, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1454, 8, 967, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1594, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 878, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1616, 26, 1124, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 1664, 2, 1231, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1666, 0, -1609, -4, 1201, -10,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTPikachuAnimRollF_joint20[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 946, -195,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 6, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 267, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 206, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 543, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 874, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 943, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 926, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 946, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPikachuAnimRollF_joint22[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 6, -11, -3089, 5, -353, 122,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -3016, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -28, 54, 14, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 335, 58, 580, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 321, -7, -3079, -9, 660, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -3109, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 290, -19, 683, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 187, 16, 622, -25,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -3141, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -2826, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 301, 3, 481, -94,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -248, -71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -9, -10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -2954, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -3091, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -373, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -2, 2, -370, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 6, 2, -3089, 0, -353, 5,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTPikachuAnimRollF_joint23[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1501, -83, 1694, -240, 1409, -263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1751, 53, 971, -70, 620, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1179, 2, 1272, 46, 1550, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1734, -23, 1251, 13, 747, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1323, 5, 1353, 10, 1477, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1379, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1702, -66, 859, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1724, 0, 836, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), -1521, 14, 1336, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1439, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), 1667, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1501, 6, 1694, 8, 1409, 24,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTPikachuAnimRollF_joint25[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 807, -22,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 739, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 277, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 647, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 6, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 863, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1001, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 876, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 807, -23,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTPikachuAnimRollF_joint26[160] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1613, 127, -1893, 106, 1124, 107,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1424, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1230, 33, 1446, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1413, -78, 2066, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1702, 15, -1476, -35, 2126, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1841, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1321, 114, 2227, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1017, -25, 2004, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1474, -82, 1366, -125,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1518, -2, 1255, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1807, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1843, -19,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1531, -8, 1287, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1596, -7, 1181, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1613, -5, -1893, -16, 1124, -19,
	ftAnimEnd(),
	0x400E, 0xFFF2, 0x0000, 0xFFFD, 0x48E0, 0xFFFF, 0xFF4C, 0xFE9E, 0x200F, 0x0001, 0xFE00, 0xFF2C, 0x0107, 0x003E, 0xFCA7, 0xFEEB, 0x200F, 0x0002, 0xFD73, 0xFFEF, 0x00BB, 0xFFA2, 0xFCBB, 0xFFF1, 0x200F, 0x0007, 0xFD67, 0x005A, 0xFDB9, 0xFFEE, 0xFC19, 0xFFD0, 0x200F, 0x0001, 0x0044, 0x005C, 0x0025, 0x005E, 0xFB36, 0xFFE5, 0x200F, 0x0007, 0x0046, 0xFFFA, 0x00AF, 0xFFFD, 0xFB3F, 0x0065, 0x200F, 0x0005, 0xFFF2, 0xFFFA, 0x0000, 0xFFF0, 0xFFFD, 0x006F, 0x380F, 0x0007, 0xFFF6, 0xFFEA, 0x0078, 0x380F, 0x0006, 0xFFF2, 0x0000, 0xFFFD, 0x0000, 0x0000, 0x0000, 0x0000,
};
