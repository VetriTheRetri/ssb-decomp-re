/* AnimJoint data for relocData file 1322 (FTKirbyAnimRollF) */
/* 2832 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimRollF_joint1[28];
extern u16 dFTKirbyAnimRollF_joint2[100];
extern u16 dFTKirbyAnimRollF_joint3[24];
extern u16 dFTKirbyAnimRollF_joint4[22];
extern u16 dFTKirbyAnimRollF_joint6[54];
extern u16 dFTKirbyAnimRollF_joint7[182];
extern u16 dFTKirbyAnimRollF_joint8[16];
extern u16 dFTKirbyAnimRollF_joint10[54];
extern u16 dFTKirbyAnimRollF_joint11[202];
extern u16 dFTKirbyAnimRollF_joint12[16];
extern u16 dFTKirbyAnimRollF_joint14[10];
extern u16 dFTKirbyAnimRollF_joint15[152];
extern u16 dFTKirbyAnimRollF_joint17[16];
extern u16 dFTKirbyAnimRollF_joint19[176];
extern u16 dFTKirbyAnimRollF_joint20[112];
extern u16 dFTKirbyAnimRollF_joint22[38];
extern u16 dFTKirbyAnimRollF_joint23[168];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTKirbyAnimRollF_joints[] = {
	(u32)dFTKirbyAnimRollF_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimRollF_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimRollF_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimRollF_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimRollF_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTKirbyAnimRollF_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimRollF_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimRollF_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimRollF_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimRollF_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimRollF_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTKirbyAnimRollF_joint15, /* [14] joint 15 */
	(u32)dFTKirbyAnimRollF_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTKirbyAnimRollF_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimRollF_joint20, /* [19] joint 20 */
	(u32)dFTKirbyAnimRollF_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTKirbyAnimRollF_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTKirbyAnimRollF_joint1[28] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), 960, 1920,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), 2100, 480,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), 3240, 1920,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 6), 4200,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), 4200,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimRollF_joint2[100] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -268, 0, 600, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 4), -268,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 13), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), -240, 660,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 0, 600,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY, 6), -446, -59, 720, 799, 1320, 746,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 6), 1200,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -804, -59,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 1440, -239,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 1140, 4300, 3276, 4300,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 1440, 240,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX, 6), -1161, -59, 720, -800,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 1320, -1013,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 6), 0, 300,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1608, -71,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4915, 2048, 4915,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), -1876, 0, 600, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimRollF_joint3[24] = {
	ftAnimSetVal(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, -312, 0, 4096, 4096, 4096,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 12), -1608,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 12), -3216,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 4), -3216,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTKirbyAnimRollF_joint4[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 28), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimRollF_joint6[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 357, 22,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), -120, -120,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 14), -120,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 26), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 89,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 24), 89,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 60, 160,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 0, -360,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimRollF_joint7[182] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, -992, -1387, 432, -1608, 195,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -576, 253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1796, -425, -1413, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1654, -132, -1749, -120,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2412, -171,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 26), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -447, 114, -1655, 70,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -569, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1608, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2024, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2404, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2008, 187,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -663, -74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -461, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1815, 76, -2220, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1855, -269, -2173, 276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2354, -311, -1667, 316,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -2433, 24, -1589, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2412, 22, -323, 127, -1608, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -292, -234, -1773, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -2154, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2009, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1934, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1729, 109, -546, -214, -1707, 124,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -758, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1716, -236, -1523, 419,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2201, -582, -868, 670,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2881, -453, -182, 435,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3109, -53, -568, 165, 1, 98,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -2494, 151, -244, 45, 2, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2412, 82, -220, 23, 0, -2,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTKirbyAnimRollF_joint8[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimRollF_joint10[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 178, -22,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 120, -120,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 6), -120,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 26), 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), -89,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 24), -89,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 0, 360,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 60, -159,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 12), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimRollF_joint11[202] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 1041, 1391, -459, -1608, 235,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 507, -256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1845, 419, -1372, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1643, 101, -1712, -139,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2412, 184,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 26), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 418, -78, -1651, 51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 286, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1608, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1792, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2416, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 2248, 41,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 194, -103,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -9, 74,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1803, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1592, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2298, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2450, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 89, 107,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 765, -18,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1571, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1656, -298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2465, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2365, -294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1876, -274, -2151, -281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1817, -142, 718, -38, -2218, -101,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 620, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1590, -407, -2354, -222,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2870, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1002, -521,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 546, -426,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -71, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3049, -148,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -3218, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 561, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -101, -87, 569, -66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -724, -146,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 428, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 244, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, -79, 220, -23, -3216, 1,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTKirbyAnimRollF_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTKirbyAnimRollF_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimRollF_joint15[152] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, -235, -302, -238, 237, 247,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -541, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -259, -330, 485, 324,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -683, 886,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -259, 331, 485, -326,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, 121, -302, 145, 233, -128,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -214, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -9, 7, 218, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1, 7, 198, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -12, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 200, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -257, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -403, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -293, 83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -109, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -7, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 55, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 182, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 172, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -95, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -348, 29,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 38, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -79, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 213, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 234, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -303, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -302, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -57, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -32, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, 11, -302, 0, 233, -1,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimRollF_joint17[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimRollF_joint19[176] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1298, -2, 1785, 72, -1704, 90,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1759, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1296, 91, -1614, 165,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 1481, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -1373,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1311, -91, -1614, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1298, 51, -1708, -62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1656, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1425, 148,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1754, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1590, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1626, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1359, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1298, 90,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1337, 11,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1406, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1284, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1318, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1241, 59,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1600, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1465, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1333, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1465, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1192, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1178, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1445, -80, 1444, 77, -1208, -127,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1604, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1303, -54, 1621, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1336, -15, 1694, 50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1287, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1777, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1705, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1709, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1295, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1298, 3, 1785, 8, -1708, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTKirbyAnimRollF_joint20[112] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1629, 8, -1911, 93, -1375, 35,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1469, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1605, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1726, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1817, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), -1704, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1712, -35, -1429, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1958, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1456, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1609, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1598, 15,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1988, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1785, -76,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1611, -20, -1399, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1556, 31, -1546, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1674, 69, -1867, -62, -1318, 87,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 1642, -14, -1911, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1371, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1378, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1372, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1632, -10, -1911, 0, -1371, 1,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimRollF_joint22[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 516, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTKirbyAnimRollF_joint23[168] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1918, -84, 1431, 32, 1508, -68,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1463, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1680, 175,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 1753,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1833, 82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1940, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1431, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1764, 48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1858, 169,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1889, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1751, -109,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1789, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1743, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1624, 14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1811, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1852, -36,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1637, 15, 1898, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1987, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1472, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1836, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1871, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1846, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1552, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1983, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1703, -277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1368, -3, 1411, -25, 1361, -322,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1901, 200,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1467, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1058, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1392, 228,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1510, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1945, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1921, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1443, -18, 1512, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1918, -3, 1431, -11, 1512, 0,
	ftAnimEnd(),
	0x0000,
};
