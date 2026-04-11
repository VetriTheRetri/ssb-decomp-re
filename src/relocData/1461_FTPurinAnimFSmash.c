/* AnimJoint data for relocData file 1461 (FTPurinAnimFSmash) */
/* 3856 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimFSmash_joint1[20];
extern u16 dFTPurinAnimFSmash_joint2[40];
extern u16 dFTPurinAnimFSmash_joint3[12];
extern u16 dFTPurinAnimFSmash_joint4[78];
extern u16 dFTPurinAnimFSmash_joint6[58];
extern u16 dFTPurinAnimFSmash_joint7[246];
extern u16 dFTPurinAnimFSmash_joint8[42];
extern u16 dFTPurinAnimFSmash_joint10[64];
extern u16 dFTPurinAnimFSmash_joint11[250];
extern u16 dFTPurinAnimFSmash_joint12[38];
extern u16 dFTPurinAnimFSmash_joint14[28];
extern u16 dFTPurinAnimFSmash_joint15[224];
extern u16 dFTPurinAnimFSmash_joint17[82];
extern u16 dFTPurinAnimFSmash_joint19[260];
extern u16 dFTPurinAnimFSmash_joint20[166];
extern u16 dFTPurinAnimFSmash_joint22[274];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTPurinAnimFSmash_joints[] = {
	(u32)dFTPurinAnimFSmash_joint1, /* [0] joint 1 */
	(u32)dFTPurinAnimFSmash_joint2, /* [1] joint 2 */
	(u32)dFTPurinAnimFSmash_joint3, /* [2] joint 3 */
	(u32)dFTPurinAnimFSmash_joint4, /* [3] joint 4 */
	(u32)dFTPurinAnimFSmash_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTPurinAnimFSmash_joint7, /* [6] joint 7 */
	(u32)dFTPurinAnimFSmash_joint8, /* [7] joint 8 */
	(u32)dFTPurinAnimFSmash_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTPurinAnimFSmash_joint11, /* [10] joint 11 */
	(u32)dFTPurinAnimFSmash_joint12, /* [11] joint 12 */
	(u32)dFTPurinAnimFSmash_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTPurinAnimFSmash_joint15, /* [14] joint 15 */
	(u32)dFTPurinAnimFSmash_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTPurinAnimFSmash_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPurinAnimFSmash_joint20, /* [19] joint 20 */
	(u32)dFTPurinAnimFSmash_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF035A, /* [22] END */
};

/* Joint 1 */
u16 dFTPurinAnimFSmash_joint1[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 600, 2400,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 22), 3240, 360,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 10), 3600,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPurinAnimFSmash_joint2[40] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 600, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 25), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 8), 780,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 13), 540, -315,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 300, 4915, 2048, 4915,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 600, 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPurinAnimFSmash_joint3[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 40), -272,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTPurinAnimFSmash_joint4[78] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4300, -68, 3276, 136, 4300, -68,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 12), -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY, 4), 0, 0, 240,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 0, -22, 0, 22,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 312, 3891, 4505, 3891,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4300, 17, 3276, -34, 4300, 17,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 34), 312,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -178, 178,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 18), 4096, -14, 4096, 58, 4096, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -178, -178, 178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 0, 0, 0, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPurinAnimFSmash_joint6[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, -14, -202, 116, -223, -201, -23, -107,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 174, 1, -302, 3, -161, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), -178,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 18), -178,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 174, -1, -302, 4, -161, 3,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 90, -69, -370, 121, -316, 64,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPurinAnimFSmash_joint7[246] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2412, 18, -1387, 99, -1608, -25,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2430, 47, -1288, 169, -1633, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2507, 250, -1048, 195, -1750, -326,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2830, -373,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2931, 360, -897, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3229, 191, -939, -51,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 2048,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3314, 204, -1000, -59, -3033, -175,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -3362, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3638, 155, -1059, -99,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1548, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3624, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3512, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3444, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3444, 4, -1635, -65, -3347, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1722, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -3331, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 3476, 11,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 23), 2048,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1723, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1589, 29,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3328, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -3218, 25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3488, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 3498, -18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1560, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1505, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3480, -14, -3193, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 3508, 59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -3357, -125,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1501, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1440, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3587, 87, -1294, 159,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -888, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3683, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3807, 221, -3511, -260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4126, 453, -3878, -495,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4713, 454, -908, -66, -4501, -425,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1174, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 5035, 346, -4729, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 5406, 275, -4790, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5586, 108, -1325, -108, -4810, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5624, 37, -1391, -65, -4813, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPurinAnimFSmash_joint8[42] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPurinAnimFSmash_joint10[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, -14, 0, -14, 144, -123, -148, -343, -8, 155,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -185, -185, -515, -222, 232, 163,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -178, -178,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -178, -178,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -226, -12, -613, -58, 318, 21,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -214, 90, -646, 82, 281, -127,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTPurinAnimFSmash_joint11[250] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2412, -9, 1391, -91, -1608, -8,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2448, -51, -1642, -55,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1299, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1094, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2524, -225, 910, -127, -1727, -262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2898, -377, 839, -41, -2168, -443,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 2048,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3278, -867, 827, -5, -2615, -902,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4633, -558, 828, 40, -3973, -595,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 994, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4394, 216, -3806, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4200, 224, -3727, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3946, 220, 1072, 79, -3593, 131,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3388, 46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1240, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3758, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3675, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -3676, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3371, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -3397, -2,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 23), 2048,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1241, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1311, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3683, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -3698, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3399, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -3382, -4,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3691, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -3633, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3390, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -3378, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1317, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1267, -86,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3641, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3641, 32, 1146, -139,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 864, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3575, 86, -3348, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3268, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -3237, 46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 777, -82,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 590, -130,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3226, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3224, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3239, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3483, -337, 438, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3914, -271, 287, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4026, -112, 220, -66, -3229, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTPurinAnimFSmash_joint12[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -6, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPurinAnimFSmash_joint14[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -804,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -1072, 58, -40, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -804, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -619, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -619, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -189, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -804,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTPurinAnimFSmash_joint15[224] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, 6, -302, -10, 237, -12,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 52, 74, -385, -47, 117, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 153, 86, -436, -42, -4, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, 108, -469, 27, -136, -225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 369, 86, -382, 77, -454, -257,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -180, 54, -907, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 399, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 407, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 410, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -124, 63, -991, -88,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 100, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1196, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 416, 1, -1197, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 354, -31, -1115, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 73, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -90, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 319, -51, -139, -59, -1093, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -300, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -65, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1038, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -919, 132,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -649, 97,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -300, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -343, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -579, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -518, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -59, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 24, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -501, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -437, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -356, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -268, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 11, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 5, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 39, 29, -401, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 64, -19, -292, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -56, -290, -12, -23, 234,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -297, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -48, -15, 176, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -31, 11, 222, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -26, 4, -297, 0, 243, 20,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPurinAnimFSmash_joint17[82] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 365, 319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 645, 271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1094, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1206, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1275, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1219, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 927, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 808, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 838, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 804, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 680, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 637, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 543, -207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 221, -267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPurinAnimFSmash_joint19[260] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -309, -11, -176, -6, -96, 6,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -415, -74, -224, -25, -19, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -505, -52, -250, 1, 68, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -520, 95, -222, 60, 158, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -313, 280, -129, 91, 31, -121,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 9, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 40, 280, -83, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 247, 132, -231, -129,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 317, 8,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 7168, 3276, 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 25, 12, -342, -62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 76, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -357, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -183, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 322, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 321, -11,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 7168, 3276, 3072,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -125, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -172, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 310, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 405, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 441, 47, -164, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 590, 26, -152, 23,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 83, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 81, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 607, 8, -120, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 550, -78, -103, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 450, -111, -117, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 327, -101, -195, -62,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 12), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 246, -72, 78, 0, -242, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 40, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -67, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -276, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -230, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -132, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 6, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -177, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -164, -96, -145, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -321, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -126, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -329, 2, -72, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -317, 9, -94, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -310, 6, -184, -7, -96, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTPurinAnimFSmash_joint20[166] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 21, 1, 302, -4, 233, 3,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 232, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 20, -1, 232, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 19, -30, 234, -65,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -66, 14, 7, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 189, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -12, 94, 180, -21, 105, 221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 121, 90, 147, -19, 450, 213,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 121, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 167, 38, 532, 65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 619, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 226, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 123, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 57, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 615, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 539, -10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 226, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 241, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 244, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 388, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 528, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 465, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 452, 46, 53, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 252, -79, 142, 38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 458, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 239, -14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 176, -68, 181, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 26, -11, 300, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 18, -7, 307, 6, 226, -12,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPurinAnimFSmash_joint22[274] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 503, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 12), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x280E, 0xF4A5, 0x0002, 0x00B0, 0x0000, 0xFF9D, 0x0003, 0x4F00, 0x1000, 0x1000, 0x1000, 0x2803, 0x0003, 0xF4BC, 0x000D, 0x2805, 0x0005, 0x00CC, 0x0014, 0x2009, 0x0002, 0xFF9B, 0xFFFD, 0x2009, 0x0001, 0xFF99, 0xFFC8, 0x2809, 0x0002, 0xFEF1, 0x0010, 0x2003, 0x0001, 0xF4CB, 0x0021, 0x2003, 0x0001, 0xF4FE, 0x004B, 0x200F, 0x0001, 0xF563, 0x0045, 0x00DF, 0x0004, 0xFF4B, 0x00D7, 0x200F, 0x0001, 0xF588, 0xFFC0, 0x00D4, 0xFFDD, 0x00A0, 0x010D, 0x200F, 0x0001, 0xF4E2, 0xFF6C, 0x0098, 0xFFCA, 0x0166, 0x0099, 0x2805, 0x0007, 0x0039, 0x0000, 0x200B, 0x0003, 0xF3F7, 0xFFEB, 0x021B, 0x0012, 0x200B, 0x0001, 0xF3EE, 0xFFFE, 0x0228, 0x0009, 0x2803, 0x0007, 0xF3E6, 0xFFFB, 0x2809, 0x0009, 0x0224, 0xFFFB, 0x0801, 0x0003, 0x2005, 0x0001, 0x003A, 0x0001, 0x2805, 0x0008, 0x0059, 0x0005, 0x0801, 0x0003, 0x2003, 0x0001, 0xF3E0, 0xFFFD, 0x2803, 0x0005, 0xF49E, 0x0076, 0x0801, 0x0001, 0x2009, 0x0001, 0x021E, 0xFFF8, 0x2809, 0x0003, 0x0205, 0xFFE7, 0x0801, 0x0002, 0x2005, 0x0001, 0x005F, 0x001A, 0x200F, 0x0001, 0xF528, 0x0040, 0x008D, 0x002E, 0x01DD, 0xFF86, 0x200F, 0x0001, 0xF51F, 0xFFD6, 0x00BC, 0xFFE3, 0x0110, 0xFF0B, 0x2805, 0x0002, 0xFFD7, 0xFFA4, 0x200B, 0x0001, 0xF4D2, 0xFFE0, 0xFFF4, 0xFF20, 0x2803, 0x0002, 0xF4F2, 0x0006, 0x2809, 0x0003, 0xFF06, 0xFFFD, 0x0801, 0x0001, 0x2005, 0x0001, 0xFF9B, 0xFFE1, 0x2805, 0x0006, 0x0085, 0x0020, 0x2003, 0x0001, 0xF4EC, 0xFFF2, 0x2803, 0x0005, 0xF488, 0x0002, 0x2009, 0x0001, 0xFF0E, 0x000B, 0x2809, 0x0007, 0xFF9B, 0x000A, 0x0801, 0x0004, 0x2007, 0x0001, 0xF48F, 0x0008, 0x009D, 0x0010, 0x2007, 0x0002, 0xF4A1, 0x0005, 0x00A9, 0x0000, 0x200F, 0x0001, 0xF4A4, 0x0003, 0x00A9, 0x0000, 0xFF9D, 0x0001, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
