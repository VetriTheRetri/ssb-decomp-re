/* AnimJoint data for relocData file 552 (FTMarioAnimDownBackU) */
/* 2224 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimDownBackU_joint1[24];
extern u16 dFTMarioAnimDownBackU_joint2[60];
extern u16 dFTMarioAnimDownBackU_joint3[20];
extern u16 dFTMarioAnimDownBackU_joint5[38];
extern u16 dFTMarioAnimDownBackU_joint6[102];
extern u16 dFTMarioAnimDownBackU_joint7[32];
extern u16 dFTMarioAnimDownBackU_joint8[10];
extern u16 dFTMarioAnimDownBackU_joint9[30];
extern u16 dFTMarioAnimDownBackU_joint11[16];
extern u16 dFTMarioAnimDownBackU_joint12[96];
extern u16 dFTMarioAnimDownBackU_joint13[32];
extern u16 dFTMarioAnimDownBackU_joint14[62];
extern u16 dFTMarioAnimDownBackU_joint16[10];
extern u16 dFTMarioAnimDownBackU_joint17[120];
extern u16 dFTMarioAnimDownBackU_joint19[40];
extern u16 dFTMarioAnimDownBackU_joint21[104];
extern u16 dFTMarioAnimDownBackU_joint22[124];
extern u16 dFTMarioAnimDownBackU_joint24[40];
extern u16 dFTMarioAnimDownBackU_joint25[102];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTMarioAnimDownBackU_joints[] = {
	(u32)dFTMarioAnimDownBackU_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimDownBackU_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimDownBackU_joint3, /* [2] joint 3 */
	(u32)dFTMarioAnimDownBackU_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTMarioAnimDownBackU_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimDownBackU_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimDownBackU_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimDownBackU_joint9, /* [8] joint 9 */
	(u32)dFTMarioAnimDownBackU_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTMarioAnimDownBackU_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimDownBackU_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimDownBackU_joint14, /* [13] joint 14 */
	(u32)dFTMarioAnimDownBackU_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTMarioAnimDownBackU_joint17, /* [16] joint 17 */
	(u32)dFTMarioAnimDownBackU_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTMarioAnimDownBackU_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTMarioAnimDownBackU_joint22, /* [21] joint 22 */
	(u32)dFTMarioAnimDownBackU_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTMarioAnimDownBackU_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTMarioAnimDownBackU_joint1[24] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), -120, -160,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -800,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), -1020, -1984,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), -3840, -419,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 11), -4200,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimDownBackU_joint2[60] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -513, 5, 245, -8,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 240, -4,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 15), 5, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), -3216, -67,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 7, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 240, 480,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 840, 384,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 10), 5, -2, -8, 3,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 720, -442,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 286, -89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), -3216, 223, 0, 0, 540, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTMarioAnimDownBackU_joint3[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -71, -790, -95,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimDownBackU_joint5[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 6, -457, 156, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 268, 35,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 36), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 536, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 536, -15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 208, 258, 110,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimDownBackU_joint6[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1741, -2, -556, 5, 1057, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -2196, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -555, -5, 1162, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -551, 13, 1329, 163,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -266, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 2105, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2328, -114,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -2324, 14,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -237, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -88, -72,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2160, 55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 2707, 113,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2313, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -2629, -136,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -154, -66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -307, 8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2768, -127, 2819, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -3052, -32, 2953, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3083, -31, -300, 7, 2944, -8,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimDownBackU_joint7[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -294, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -382, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -221, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 38,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimDownBackU_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTMarioAnimDownBackU_joint9[30] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -134, 0, 0, 0, 288, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 36), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 402, 9,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 26), 201,
	ftAnimBlock(0, 15),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -4, 176,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimDownBackU_joint11[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 54, -18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 36), -221, 139, -209, 0, 54, -17,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimDownBackU_joint12[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1578, -6, 312, 14, 1179, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 478, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 1792, 189, 1254, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2005, 210, 1392, 145,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 2505, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 2257, 46,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 412, -65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 5, -3,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2534, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 3458, 118,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2301, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 3116, 99,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 8, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 522, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3566, 88, 540, 13, 3207, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3636, 46, 549, 5, 3264, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3660, 24, 551, 2, 3282, 18,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimDownBackU_joint13[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -280, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -441, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -820, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTMarioAnimDownBackU_joint14[62] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -268, -1072, 714,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -283, 14, -406, 250, 267, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -210, -59, -69, 203, 190, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -402, -11, 0, 4, 0, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -402, 1, 0, -3, 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -368, 8, -67, -33, -31, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -322, 90, -300, 6, 862, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 625, 91, 0, 23, 0, -62,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTMarioAnimDownBackU_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTMarioAnimDownBackU_joint17[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 381, -38, -90, 44, -397, -72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 148, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -149, -118, -479, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -289, -110, -268, 189,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -320, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 50, -38, -101, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 151, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -155, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -865, -74,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 164, 10, -296, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -122, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -8, -3,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -931, -58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -585, 128,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -128, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -236, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 5, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -47, -44,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -453, 132,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 11, 60,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -91, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -123, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -135, -12, -230, 6, 45, 33,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTMarioAnimDownBackU_joint19[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 294, 218,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1013, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1043, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 1264, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1227, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1005, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1019, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 438, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -37,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTMarioAnimDownBackU_joint21[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1740, 25, 1816, -26, -1033, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -1418, -34, 1483, -4, -1479, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1454, -36, 1479, -3, -1534, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1384, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -1703, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1940, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1897, 46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1515, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1340, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1389, 68,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1444, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1818, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1657, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1763, -13,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1848, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1778, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1457, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1606, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1778, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1810, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1820, -9, 1619, 13, -1764, 13,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTMarioAnimDownBackU_joint22[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1646, -120, 948, 25, 532, -52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1409, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1405, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 575, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 804, 202,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 986, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1473, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1466, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1408, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 1517, 16,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 970, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1002, 82,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1460, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1837, -8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1085, 80,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1630, 59,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1533, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1387, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1824, -18, 1668, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1766, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1558, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1401, 13, 1592, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1794, 20, 1415, 10, 1627, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1808, 13, 1421, 5, 1644, 16,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimDownBackU_joint24[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 570, 73,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 915, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 925, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 1278, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1250, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 981, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 953, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 473, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, -34,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTMarioAnimDownBackU_joint25[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1555, -106, 1663, 12, 1506, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1292, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1641, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1449, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1675, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1698, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1676, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 1516, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1282, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 878, -47,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1617, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1158, -8,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1497, 35, 831, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1747, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1376, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1164, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1681, 34,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1758, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1700, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1697, -3, 1702, 21, 1395, 19,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
