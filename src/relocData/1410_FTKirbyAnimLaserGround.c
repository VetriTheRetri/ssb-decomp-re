/* AnimJoint data for relocData file 1410 (FTKirbyAnimLaserGround) */
/* 3344 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimLaserGround_joint1[54];
extern u16 dFTKirbyAnimLaserGround_joint2[10];
extern u16 dFTKirbyAnimLaserGround_joint3[130];
extern u16 dFTKirbyAnimLaserGround_joint5[84];
extern u16 dFTKirbyAnimLaserGround_joint6[266];
extern u16 dFTKirbyAnimLaserGround_joint7[22];
extern u16 dFTKirbyAnimLaserGround_joint9[128];
extern u16 dFTKirbyAnimLaserGround_joint10[298];
extern u16 dFTKirbyAnimLaserGround_joint11[24];
extern u16 dFTKirbyAnimLaserGround_joint13[36];
extern u16 dFTKirbyAnimLaserGround_joint14[118];
extern u16 dFTKirbyAnimLaserGround_joint16[14];
extern u16 dFTKirbyAnimLaserGround_joint18[130];
extern u16 dFTKirbyAnimLaserGround_joint19[124];
extern u16 dFTKirbyAnimLaserGround_joint21[190];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimLaserGround_joints[] = {
	(u32)dFTKirbyAnimLaserGround_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimLaserGround_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimLaserGround_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimLaserGround_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimLaserGround_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimLaserGround_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimLaserGround_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimLaserGround_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimLaserGround_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimLaserGround_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimLaserGround_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimLaserGround_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimLaserGround_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimLaserGround_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimLaserGround_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF02F8, /* [21] END */
};

/* Joint 1 */
u16 dFTKirbyAnimLaserGround_joint1[54] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 600, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 24), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 8), 840,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 600, -269,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 600,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 10), 600,
	ftAnimBlock(0, 8),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), -480,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 600, 102, 0, 274,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 780, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 15), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 600, -144,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 600,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimLaserGround_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -268, 0, 0, -312, 0,
	ftAnimBlock(0, 55),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimLaserGround_joint3[130] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 312, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 13), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), -89, -5, 268, 16,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 40), 312,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 8), 3686, 4505,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 5), 4096, 273, 4096, -409,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -89, 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4505, 3276, 4505,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, -136, 4096, 273, 4096, -136,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 8), -89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 268, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4505, -68, 4505, -68, 3072, 136,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -268, 271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), -89, 6, 268, -9, 3891, -87, 3891, -29, 4505, 146,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 25), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), -178, 3, 3891, 27, 4300, 27, 4096, -54,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 15), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 312, -57, 4096, 81, 4096, -204, 4096, 40,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 240, 4300, 3276, 4300,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 312, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimLaserGround_joint5[84] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 13), -357, -22, 357, 22,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -120, -73, -60, -73, 0, 36,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -120, -59, 60, 59,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 5), -120,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 17), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -357, 357, -120, 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -357, 357, -120, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -357, 11, 357, -11, -120, 29, 60, -29,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 25), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -120, 13, -60, 38, 0, -19,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 8), -90, 64,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 7), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimLaserGround_joint6[266] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, -4, -1387, 10, -1608, 17,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -987, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1166, -113, -1053, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1271, -77, -934, 90,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1500, -187, -661, 201,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 32), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -961, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1056, -62,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1744, -245, -405, 255,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 67, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -2130, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2313, -54, -1107, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2130, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1056, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -13, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -16, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2109, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2127, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1054, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1054, 58,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2127, -102, -16, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2331, -408, -936, 57, 257, 469,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1018, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2943, -223, 921, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2374, 273, 295, -325,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2230, 84, 92, -132,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -2209, -34, 50, 45,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -980, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -854, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2266, -155, 119, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2520, -458, 381, 462,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3183, -449, 1045, 446,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -3483, -76, 1325, 61,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -866, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1189, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3571, -84, 1396, 67,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -3952, -151, 1728, 139,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 15), 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4078, -93, 1844, 85,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -4038, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1649, -26,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1260, -64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1383, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4031, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -4022, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1627, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1613, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4021, 1, -1387, -4, 1608, -4,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimLaserGround_joint7[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 36), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimLaserGround_joint9[128] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 180, 59, 0, 59,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 446, 27, 357, 22, 446, 27,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), 60, -160, 0, -106,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 60,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, -59, 0, -59, -120, -119,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 446, 357, 446, 0, 0, -120,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 446, 357, 446,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 14), 0, -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 8), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), -60,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 2), -134, -89, 268, -19, -268, -108, -120, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -178, 5, 223, -10, -312, 10, 0, 47, -120, 48, -120, 48,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -59, 95, -59, 95,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 5), 60,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, -48, 0, 47, 0, 47,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimLaserGround_joint10[298] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2412, 66, 1391, -96, -1608, -12,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1062, -233, -1647, 86,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2346, 284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1843, 556,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1233, 97, 828, -199, -1448, -106,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 331, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1649, -200, -1860, -222,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1001, 241,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 26), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1892, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1613, 97,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 130, -161,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 149, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -871, 72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1152, -241,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 316, 148, -1533, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1527, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 527, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1406, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1518, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1520, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1519, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1527, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1525, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 527, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 600, 63,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1525, 107,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1059, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1452, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1230, 93, 654, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 629, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1265, -152, -1134, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1535, -6, -1450, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1278, 221, 399, -79, -1446, -80,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1123, -41, -1685, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 469, 49,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 20), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 499, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 602, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1175, -48, -1732, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1020, 274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1713, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1565, 277,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -807, 240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -646, 294, 630, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -476, -58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 305, -32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -678, 87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -548, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -549, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -739, -33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 282, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 226, -11,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -497, 55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -96, 82,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -767, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -808, 4,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 4096,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -26, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, 4, 217, -9, 0, 26,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimLaserGround_joint11[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 43), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimLaserGround_joint13[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 804, 300, -180, -90,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 35), 0, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -160, -178, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1608, -321,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -3216, -160, -178, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -3216, -178,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimLaserGround_joint14[118] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, 2, -302, 4, 237, -4,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 233, 12,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 23), -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), -284, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -302, -11,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 10), -302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 243, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, 69, -302, -49, 237, -101,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -436, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 310, 70, -184, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 256, -88, -127, 98,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -21, -25, 233, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -409, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), -303, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -29, -2, 250, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -26, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 204, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 212, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 234, -1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -27, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -22, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, 0, -302, 1, 233, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTKirbyAnimLaserGround_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 54), 7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimLaserGround_joint18[130] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1918, 2, 1785, -1, -1704, 13,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1885, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), -1988, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1435, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1490, -53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1584, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1911, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 1911, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1988, -72, 1911, -29, -1584, 130,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1797, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2238, -40, -1126, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2213, 46, -1174, -92,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1587, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1951, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1851, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1788, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1601, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1495, -20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1942, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -1919, 2,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1785, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1785, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1522, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1709, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1918, 1, 1785, 0, -1708, 1,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimLaserGround_joint19[124] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, 2, 302, -3, 237, 5,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 609, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), 241, 20, 260, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 252, 2, 262, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 9), 241,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 260, -7,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 609,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 609, -42,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 241, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 171, -177, 245, -46, 525, -364,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -113, -123, 166, -10, -119, -251,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 175, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 225, 38, 22, 326,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 247, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 533, 286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 227, 32, 595, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 83, -11, 369, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 73, -9, 348, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), 22, -2, 235, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 249, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 13), 303, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, -1, 302, -1, 233, -2,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimLaserGround_joint21[190] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 24), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 435,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 871, 362,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 725, -435,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -362,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 25), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000, 0x280E, 0xFAEE, 0x000A, 0xF907, 0xFFF9, 0xF958, 0x0008, 0x4F00, 0x1000, 0x1000, 0x1000, 0x2805, 0x0007, 0xF901, 0x002F, 0x2803, 0x0008, 0xFBEE, 0xFFF1, 0x2009, 0x0006, 0xFB48, 0x0075, 0x2009, 0x0001, 0xFBA7, 0x003B, 0x2809, 0x0007, 0xFB51, 0xFFFF, 0x2005, 0x0001, 0xF926, 0x0014, 0x4005, 0x000D, 0xF923, 0x2003, 0x0001, 0xFBDE, 0xFFF8, 0x4003, 0x000E, 0xFBF4, 0x0801, 0x0005, 0x2009, 0x0001, 0xFB55, 0x0003, 0x4009, 0x0008, 0xFB58, 0x0801, 0x0006, 0x3805, 0x0001, 0xF923, 0x2805, 0x0003, 0xF8CF, 0xFFAA, 0x0801, 0x0001, 0x200B, 0x0001, 0xFBF4, 0x0019, 0xFB58, 0xFFBF, 0x2803, 0x000A, 0xFC00, 0x0000, 0x2009, 0x0001, 0xFAD6, 0xFF19, 0x200D, 0x0001, 0xF876, 0xFFE4, 0xF988, 0xFF67, 0x2805, 0x0004, 0xF923, 0x0007, 0x2009, 0x0001, 0xF9A4, 0x00A5, 0x2009, 0x0001, 0xFAD3, 0x00C5, 0x2809, 0x0004, 0xFB61, 0xFFFF, 0x0801, 0x0002, 0x2005, 0x0001, 0xF91E, 0xFFFA, 0x2805, 0x0017, 0xF906, 0x0001, 0x0801, 0x0001, 0x2009, 0x0001, 0xFB59, 0xFFFA, 0x2809, 0x0015, 0xF952, 0x0003, 0x0801, 0x0001, 0x2003, 0x0001, 0xFBFE, 0xFFFC, 0x2003, 0x0011, 0xFAFF, 0xFFF8, 0x2003, 0x0001, 0xFAF7, 0xFFF9, 0x2003, 0x0001, 0xFAF0, 0xFFFC, 0x200F, 0x0001, 0xFAEE, 0xFFFE, 0xF907, 0x0000, 0xF954, 0x0002, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
