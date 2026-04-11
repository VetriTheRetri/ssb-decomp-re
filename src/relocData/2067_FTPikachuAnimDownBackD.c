/* AnimJoint data for relocData file 2067 (FTPikachuAnimDownBackD) */
/* 3904 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimDownBackD_joint1[30];
extern u16 dFTPikachuAnimDownBackD_joint2[70];
extern u16 dFTPikachuAnimDownBackD_joint3[54];
extern u16 dFTPikachuAnimDownBackD_joint4[70];
extern u16 dFTPikachuAnimDownBackD_joint6[38];
extern u16 dFTPikachuAnimDownBackD_joint7[136];
extern u16 dFTPikachuAnimDownBackD_joint8[46];
extern u16 dFTPikachuAnimDownBackD_joint9[70];
extern u16 dFTPikachuAnimDownBackD_joint10[10];
extern u16 dFTPikachuAnimDownBackD_joint11[46];
extern u16 dFTPikachuAnimDownBackD_joint12[46];
extern u16 dFTPikachuAnimDownBackD_joint14[38];
extern u16 dFTPikachuAnimDownBackD_joint15[178];
extern u16 dFTPikachuAnimDownBackD_joint17[80];
extern u16 dFTPikachuAnimDownBackD_joint18[190];
extern u16 dFTPikachuAnimDownBackD_joint20[80];
extern u16 dFTPikachuAnimDownBackD_joint22[194];
extern u16 dFTPikachuAnimDownBackD_joint23[200];
extern u16 dFTPikachuAnimDownBackD_joint25[64];
extern u16 dFTPikachuAnimDownBackD_joint26[258];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTPikachuAnimDownBackD_joints[] = {
	(u32)dFTPikachuAnimDownBackD_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimDownBackD_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimDownBackD_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimDownBackD_joint4, /* [3] joint 4 */
	(u32)dFTPikachuAnimDownBackD_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTPikachuAnimDownBackD_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimDownBackD_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimDownBackD_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimDownBackD_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimDownBackD_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimDownBackD_joint12, /* [11] joint 12 */
	(u32)dFTPikachuAnimDownBackD_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTPikachuAnimDownBackD_joint15, /* [14] joint 15 */
	(u32)dFTPikachuAnimDownBackD_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTPikachuAnimDownBackD_joint18, /* [17] joint 18 */
	(u32)dFTPikachuAnimDownBackD_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTPikachuAnimDownBackD_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTPikachuAnimDownBackD_joint23, /* [22] joint 23 */
	(u32)dFTPikachuAnimDownBackD_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTPikachuAnimDownBackD_joint26, /* [25] joint 26 */
	0xFFFF03B2, /* [26] END */
};

/* Joint 1 */
u16 dFTPikachuAnimDownBackD_joint1[30] = {
	ftAnimSetVal(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 3), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -3235,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 12), -2640, -743,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -1319,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), -3181, -118,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -206,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 11), -3181,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPikachuAnimDownBackD_joint2[70] = {
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 540, -58,
	ftAnimSetValBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 540, 16, -58, 20,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -214,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -3216, -146,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 552, -278, -43, 42,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 330, 11, -26, 46,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 564, 116, 8, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 1, 0, -1, 564, 41, 8, 37,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 10), -3216,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 33, -28, 673, 108,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 11), -3243,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPikachuAnimDownBackD_joint3[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 580, 34, 68,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 381, -37, 625, 128, 0, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 353, 28, 804, 35, -8, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 551, -23, 839, 31, -7, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 139, -25, 1091, 15, 10, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 139, -5, 1091, -45, 10, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 23, 133, 32,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTPikachuAnimDownBackD_joint4[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 170, 175, 199,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 75, 8, 123, -67, -113, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 222, 111, -227, -122, -158, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 746, 8, -612, 4, -945, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 272, -124, -198, 90, -390, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1, -25, -71, -10, 10, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -54, 3, -333, -16, 96, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 44, 3, -312, 30, 64, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -13, 0, -2,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimDownBackD_joint6[38] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 276, 47, -76, 11, 332, -27,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 412, 17, -41, 4, 261, -7,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 324, -33, -62, -7, 313, 19,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 324, -62, 313,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimDownBackD_joint7[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 601, 29, -329, 3, 2759, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 818, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 2468, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -210, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -99, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -368, -73,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 832, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 770, -47,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -438, -61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -465, -27,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2442, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 2759, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -491, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -347, 20,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 723, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 690, 66,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -329, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -430, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2743, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2680, 118,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 759, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 659, 59,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -202, 231, 2828, 121,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 228, 16, 3010, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 730, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 784, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 19, 240, 12, 3014, 3,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimDownBackD_joint8[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, -219,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -404, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -363, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -605, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -556, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -278, 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 20), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 10,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimDownBackD_joint9[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 65, 188, 23,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 207, -28, 506, -60, 30, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -105, -62, -174, -142, -69, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -167, 0, -350, 28, -12, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -103, -6, -5, -43, -28, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -204, 13, -614, -29, 217, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 66, 24, -389, 8, 0, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 157, -6, -483, 20, -9, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -2, -163, 20,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimDownBackD_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimDownBackD_joint11[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 111, 367, 335,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -349, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 169, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 96, 20, 367, 8, 335, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 111, -26, 367, -18, 335, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -295, -10, 82, -33, -6, -30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTPikachuAnimDownBackD_joint12[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -454, -43, -274,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -435, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -715, 0, -43, -1, -274, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -454, 6, -43, 1, -274, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -612, 41, -21, 3, -136, 24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimDownBackD_joint14[38] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -358, -41, 225,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -317, -49, -115, -9, 320, -34,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), -451, -62, -59, 40, 161, -103,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -488, 48, -4, -1, 35, 58,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), -324, -62, 313,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTPikachuAnimDownBackD_joint15[178] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2217, -232, 549, -228, -2175, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2450, 74, 320, 294, -2325, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2068, 35, 1138, 579, -1707, 163,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1454, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2378, -175, -1997, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2419, -38, -2054, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -2824, -96, -2649, -107,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1393, -67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1197, 30,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2907, -51, -2733, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -2975, -42, -2731, -37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1228, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1201, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3008, -25, -2759, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -3010, 27, -2728, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2974, -33, 1201, -31, -2694, -66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3097, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1094, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2860, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2924, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3320, -474,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3097, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -3369, -449,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4011, -529, -3977, -536,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4428, -526, -4392, -515,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -5064, -361, -5008, -309,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -5151, -127, -5012, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5318, -151, 1306, 202, -5043, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -5620, -18, 1694, 16, -5120, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5629, -9, 1703, 8, -5122, -2,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimDownBackD_joint17[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -885,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -885, -535,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1070, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -524, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -481, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -477, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -243, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -10, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -345, -250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -501, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -413, 263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -63, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTPikachuAnimDownBackD_joint18[190] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -245, -51, -133, -110, -187, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -411, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -270, -254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -244, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -487, -192,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -546, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -369, 306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 202, 119, -652, -236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -129, -34, -321, 193, -743, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 134, 105, -160, 54, -979, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 80, -203, -212, -38, -642, 314,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -253, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -273, -173, -350, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -267, -6, -260, 168,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -72, 320,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 34, 281, -13, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 310, 50, 151, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 353, 175, 135, -200, -13, -137,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 116, -83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -368, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -123, -369,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -752, -510,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 111, -59, -1144, -156,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -37, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1065, 65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -858, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -344, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -89, -24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 302, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 248, -66, -117, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 37, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -3, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -747, 106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -423, 20,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 51, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 6, 0, 4, -409, 13,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTPikachuAnimDownBackD_joint20[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 507, 86,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 934, 255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1244, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1307, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1350, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1077, -217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 915, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 675, -454,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -337,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 309,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 618, 334,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 676, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 655, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 700, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1091, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1063, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 958, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 951, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPikachuAnimDownBackD_joint22[194] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1857, 5, -1420, -23, 1820, -105,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1795, -191, 1250, -344,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1862, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1568, -256,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1428, 435,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1972, -14, 821, 74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1576, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2221, 201, 1399, 375,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1830, -261, 1572, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1697, 135, 1224, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2101, 140, -1734, -79, 1365, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1978, -118, -1735, 117, 1423, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1864, 65, -1499, 82, 1241, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2109, -113, -1571, 33, 1878, 445,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1637, -269, -1431, 51, 2132, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1833, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1570, 35, -1468, -207,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1970, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1847, -216,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1874, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2163, 180,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2192, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2038, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1412, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1868, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1758, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2180, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 1389, -20,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1404, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1640, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1708, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1747, 17,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1364, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1262, -18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1621, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1614, -7, -1736, 11, 1252, -10,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTPikachuAnimDownBackD_joint23[200] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1537, -74, -1961, -86, -1517, -498,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -2022, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1612, -204, -2015, -603,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1946, -241, -2724, -363,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2558, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2096, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1961, 81, -1967, 106,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1794, 142,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1793, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2381, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2211, 258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1646, 81, -1864, 229,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1672, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1866, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1962, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1837, 240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1741, 57, -1482, 158,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1655, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1557, 59, -1804, 65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1883, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1622, -125,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2026, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1789, -111,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1709, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2180, -234,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2316, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1924, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1550, 212,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2346, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2686, -19,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1646, 48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1759, -89,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2669, 90,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2187, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1321, 184, -1821, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1517, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1460, -33,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2070, 110,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1813, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1513, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1545, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1478, -18, -1551, -5, -1802, 10,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTPikachuAnimDownBackD_joint25[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 161, 622,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1101, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 827, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1034, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1223, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1140, -235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 793, -279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 582, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 772, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1118, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1003, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 1056, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1018, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 814, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 812, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTPikachuAnimDownBackD_joint26[258] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1425, -379, -1607, 185, 2149, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1804, -621, -1421, 353, 1991, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2668, -531, -899, 543, 2417, 453,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2868, -193, -335, 377, 2898, 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3054, -136, -144, 134, 2954, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -3278, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -182, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 2920, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2736, 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3285, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3151, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3183, -14, -86, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3180, -96, 133, 102, 3336, -60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3420, 96,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2749, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 117, -115,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -326, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3185, 289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2841, 77, -81, 122, 2675, 68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -65, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3030, -87, 2886, 139,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3005, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2954, 58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 3218, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -51, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -3, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2995, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -3026, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3148, -169, 3241, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -3661, -45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2936, -117,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -44, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 278, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3658, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -3242, 33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2825, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 2728, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3224, 18, 284, 5, 2729, 0,
	ftAnimEnd(),
	0x400E, 0x001F, 0xFF57, 0x0606, 0x48E0, 0xFFFF, 0xFF4C, 0xFE9E, 0x200F, 0x0003, 0xFF63, 0xFFB9, 0xFF57, 0x0017, 0x0606, 0x0039, 0x200F, 0x0003, 0xFE76, 0xFFD8, 0xFFE2, 0xFFF7, 0x075C, 0x0063, 0x200F, 0x0003, 0xFE6E, 0x0005, 0xFF1E, 0x0047, 0x085B, 0xFFF4, 0x200F, 0x0003, 0xFE94, 0xFFF2, 0x018C, 0x0026, 0x0711, 0xFF45, 0x200F, 0x0003, 0xFE17, 0x000E, 0x0006, 0xFFF0, 0x03F4, 0xFFB5, 0x380F, 0x0015, 0xFFF2, 0x0000, 0xFFFD, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
