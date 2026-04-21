/* AnimJoint data for relocData file 1367 (FTKirbyAnimStarRodTilt) */
/* 2832 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimStarRodTilt_joint1[58];
extern u16 dFTKirbyAnimStarRodTilt_joint2[38];
extern u16 dFTKirbyAnimStarRodTilt_joint3[68];
extern u16 dFTKirbyAnimStarRodTilt_joint5[58];
extern u16 dFTKirbyAnimStarRodTilt_joint6[192];
extern u16 dFTKirbyAnimStarRodTilt_joint7[24];
extern u16 dFTKirbyAnimStarRodTilt_joint9[78];
extern u16 dFTKirbyAnimStarRodTilt_joint10[172];
extern u16 dFTKirbyAnimStarRodTilt_joint11[24];
extern u16 dFTKirbyAnimStarRodTilt_joint13[124];
extern u16 dFTKirbyAnimStarRodTilt_joint14[120];
extern u16 dFTKirbyAnimStarRodTilt_joint16[8];
extern u16 dFTKirbyAnimStarRodTilt_joint18[116];
extern u16 dFTKirbyAnimStarRodTilt_joint19[132];
extern u16 dFTKirbyAnimStarRodTilt_joint21[44];
extern u16 dFTKirbyAnimStarRodTilt_joint22[116];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimStarRodTilt_joints[] = {
	(u32)dFTKirbyAnimStarRodTilt_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimStarRodTilt_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimStarRodTilt_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimStarRodTilt_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimStarRodTilt_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimStarRodTilt_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimStarRodTilt_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimStarRodTilt_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimStarRodTilt_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimStarRodTilt_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimStarRodTilt_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimStarRodTilt_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimStarRodTilt_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimStarRodTilt_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimStarRodTilt_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTKirbyAnimStarRodTilt_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimStarRodTilt_joint1[58] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 600, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 660, 68, 3891, -58, 4505, 117, 3891, -58,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 660, -205, 3891, 58, 4505, -351, 3891, 58,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 480, -36, 4096, 31, 3276, -63, 4096, 31,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_SCAY, 10), 600, 30, 4096, 51,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 10), 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 22), 600, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimStarRodTilt_joint2[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAZ), -268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, -312,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 3), -240, -274,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 4), -268, 38, -240, 548,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 3), 0, 20, 240, 295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 10), 0, -8, 240, -60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 22), -268, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimStarRodTilt_joint3[68] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 312, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 312, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -178, -25, -268, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -178, 51, -268, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 178, 30, 268, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 223, -5, 357, -8,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 22), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 312, -35, 4096, 25, 4096, -102, 4096, 25,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 240, 4300, 3276, 4300,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 312, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimStarRodTilt_joint5[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -178, -25, -120, -137, -120, -137, -60, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -178, 76, -120, 68, -120, 68, -60, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 357, 41, -60, 36, -60, 36, 120, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 357, -11, -60, 15, -60, 15, 120, -30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 22), 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimStarRodTilt_joint6[192] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, -217, -1387, 156, 1608, 88,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 3), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1021, -871, -1231, 194, 1697, 435,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2547, -964, -998, 57, 2479, 565,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2795, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2950, -208, -1116, -79,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 33), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2964, -2, -1158, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2950, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1127, -50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2766, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2828, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2858, 503, 3040, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2711, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1944, 652, -1217, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1025, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1553, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1534, 14, 2739, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 2475, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1524, 5, -975, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1227, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -1444, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1459, -12, 2471, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1498, 48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 2506, -56,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1243, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1280, 31,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1432, 88,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -845, 46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2430, -99,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1624, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1251, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1380, -12,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -812, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -802, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, -1, -1387, -7, 1608, -16,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimStarRodTilt_joint7[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimStarRodTilt_joint9[78] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -178, -25, 120, 137, -120, -137, 60, 68,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 51, -178, 76, 0, 51, -120, 68, 60, -205,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 4), 120,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 357, 27, 357, 41, 357, 27, -60, 36, -120, -73,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 3), 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 357, -11, 357, -11, 357, -11, 120, -30, -60, 15, -60, 30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 22), 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimStarRodTilt_joint10[172] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2412, 194, 217, 191, 0, 134,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 3), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2607, 818, 408, 266, 134, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4049, 1193, 750, -15, 441, 663,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4993, 491, 378, -194, 1462, 551,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 33), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5031, 52, 361, 2, 1544, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 5111, -54, 403, -2, 1611, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4990, 48, 379, 46, 1457, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5207, 94, 496, 48, 1494, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5178, 120, 476, -16, 1348, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 366, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 5448, 50, 1558, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 5280, -130, 1427, -101,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 5491, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1719, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1893, 157,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 2494, 62,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 288, -70,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 265, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 5484, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 5647, 63,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2563, 73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 3197, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 5708, 52, 291, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 5634, -10, 228, -13,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 4096,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5629, -4, 220, -7, 3216, 19,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimStarRodTilt_joint11[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimStarRodTilt_joint13[124] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 0, -1072,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 204, -120, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -804, 0, -1072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -804, 111, 0, 6, -1072, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -22, 200, 44, 22, -893, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 13, 88, 52, -935, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 19, -1, 200, 53, -1036, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -7, -2, 357, 35, -1163, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, -28, 446, -2, -1117, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -260, -44, 333, -18, -1172, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -354, -19, 299, -9, -1089, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -358, -14, 288, -14, -1014, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -413, -26, 240, -25, -1008, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -466, -24, 185, -27, -1017, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -488, -25, 157, -27, -1022, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -544, -45, 101, -22, -1037, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -804, 0, -1072,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTKirbyAnimStarRodTilt_joint14[120] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, -74, -302, -71, 237, -111,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -446, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -71, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 125, -269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -301, -351,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -637, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -384, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -353, 36,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -577, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -70, 15, -368, 285,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 63, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 247,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 154, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -322, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -300, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 154, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), 220, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 59, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), -23, 0,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -297, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -302, 0,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 221, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 236, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, 0, -302, 0, 237, 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimStarRodTilt_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 42),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimStarRodTilt_joint18[116] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1918, -38, 1785, -42, -1704, -22,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1569, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1899, 111, -1579, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1733, 101, -1434, 89,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1839, -93, -1554, -110,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1573, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1708, 83,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1920, -42, -1656, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1664, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1915, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1763, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1795, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1674, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -1672, -8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1917, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), -1918, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1799, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 1785, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1682, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1704, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1918, 0, 1785, 0, -1704, 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimStarRodTilt_joint19[132] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1632, -17, 1305, -7, -1371, -26,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1391, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1385, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1397, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1602, -198,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1878, 46,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1397, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1400, 86,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1793, 325,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1575, 81, 1311, -4, -1226, 429,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1467, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1563, 26, -933, 193,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -817, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1628, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1581, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1483, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), 1296, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -817, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -1249, -38,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1575, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 1630, -3,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1284, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1371, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1298, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1305, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1629, -1, 1305, 0, -1375, -4,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimStarRodTilt_joint21[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 206, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 465, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 484, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 418, -235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), 7, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimStarRodTilt_joint22[116] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2907, -4, 176, -15, -96, 2,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 216, 86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -2876, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -188, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -192, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -84, 134,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 317, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 170, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 132, 133,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 232, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2866, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -2909, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 139, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 317, -16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 228, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -176, 11,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2927, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -2906, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 297, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 177, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -160, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -101, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2907, 0, 176, 0, -99, 1,
	ftAnimEnd(),
	0x0000, 0x0000,
};
