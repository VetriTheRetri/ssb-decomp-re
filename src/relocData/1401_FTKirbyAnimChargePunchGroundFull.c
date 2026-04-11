/* AnimJoint data for relocData file 1401 (FTKirbyAnimChargePunchGroundFull) */
/* 3952 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimChargePunchGroundFull_joint1[60];
extern u16 dFTKirbyAnimChargePunchGroundFull_joint2[24];
extern u16 dFTKirbyAnimChargePunchGroundFull_joint3[124];
extern u16 dFTKirbyAnimChargePunchGroundFull_joint5[122];
extern u16 dFTKirbyAnimChargePunchGroundFull_joint6[268];
extern u16 dFTKirbyAnimChargePunchGroundFull_joint7[20];
extern u16 dFTKirbyAnimChargePunchGroundFull_joint9[150];
extern u16 dFTKirbyAnimChargePunchGroundFull_joint10[344];
extern u16 dFTKirbyAnimChargePunchGroundFull_joint11[38];
extern u16 dFTKirbyAnimChargePunchGroundFull_joint13[10];
extern u16 dFTKirbyAnimChargePunchGroundFull_joint14[144];
extern u16 dFTKirbyAnimChargePunchGroundFull_joint16[24];
extern u16 dFTKirbyAnimChargePunchGroundFull_joint18[170];
extern u16 dFTKirbyAnimChargePunchGroundFull_joint19[170];
extern u16 dFTKirbyAnimChargePunchGroundFull_joint21[264];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimChargePunchGroundFull_joints[] = {
	(u32)dFTKirbyAnimChargePunchGroundFull_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimChargePunchGroundFull_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimChargePunchGroundFull_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimChargePunchGroundFull_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimChargePunchGroundFull_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimChargePunchGroundFull_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimChargePunchGroundFull_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimChargePunchGroundFull_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimChargePunchGroundFull_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimChargePunchGroundFull_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimChargePunchGroundFull_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimChargePunchGroundFull_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimChargePunchGroundFull_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimChargePunchGroundFull_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimChargePunchGroundFull_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF0373, /* [21] END */
};

/* Joint 1 */
u16 dFTKirbyAnimChargePunchGroundFull_joint1[60] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 600, -240,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 10), 600,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), -240, 384,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 240, 112,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 600, 60, 240, -48,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 10), 0, -213,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 900,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 600, -128, -240, -64,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 7), -120, 141,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 7), 660,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 600, -32, 0, 64,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 600, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimChargePunchGroundFull_joint2[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 45), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 13), 0, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 14), -268, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), -268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimChargePunchGroundFull_joint3[124] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -178, -178, 312, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 58), 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), -178, 44, -178, 53, 4096, 163, 4096, -81, 4096, -81,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 268, 32, 357, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4915, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 4096, -46, 4096, 23, 4096, 23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 446, 536,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 268, -16, 357, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 18), -89, -8, -446, -11,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, -40, 4096, 81, 4096, -40,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 3891, 4505, 3891,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4096, 81, 4096, -204, 4096, 81,
	ftAnimSetValRateT(FT_ANIM_TRAY, 7), 312, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 14), 0, 4, 0, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4300, 3481, 4300,
	ftAnimSetValRateT(FT_ANIM_SCAY, 2), 4096, -34,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 2), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4300, 3276, 4300,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 7), 240,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 0, 0, 312, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimChargePunchGroundFull_joint5[122] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -357, 223, -30, -90, -150,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 6), -357, 71, 223, -22, -30, -48, -150, 264,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 6), -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 357, 21, 0, -6, -90, -37, -90, 12, 180, 138,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 15), -120, -8, 180, -8,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 30), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), 357, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 15), -60,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), -120, -11, -90, -23, 150, -47,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -120, 48, 60, -120,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -268, -11,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 40), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 5), -150,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -30, 55, 0, -92,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 5), -120,
	ftAnimSetValRateT(FT_ANIM_TRAX, 8), -150, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -30, -90,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 7), -90, 52, 0, 52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 0, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 7), -30,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 7), -60, 48, -30, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 7), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimChargePunchGroundFull_joint6[268] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1942, 21, 2650, -18, 1687, -26,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 72), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1848, -83, 2562, 54, 1572, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1942, 18, 2650, 189, 1687, 55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 3134, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1542, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1684, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1413, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2884, -230, 1215, -77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 2613, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1561, -33, 1258, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1770, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1512, -13,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2624, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 2633, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1744, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1685, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1496, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 1493, 4,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1714, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1687, 19,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1492, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1480, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2621, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 2539, -34,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1682, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1796, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1552, 65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1954, 341,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1797, -74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2238, -202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2502, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 2507, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2385, 349,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 3068, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2351, -84,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2872, -140,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3265, 200,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 4085, -94,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3024, -123, 2508, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 2645, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -3066, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2945, 94, 3937, -119,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2537, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 3581, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2634, -3, 3466, -117,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 3133, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 2993, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2458, 67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -2411, -2,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3154, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 3213, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2412, -1, 2999, 5, 3216, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimChargePunchGroundFull_joint7[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 34), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 44), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimChargePunchGroundFull_joint9[150] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -268, -268,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 3216, 134, 60, 30, -120, -60, 150, -30,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -268, 53, -268, 53, 60, 120, -120, 30, 150, -90,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 3216,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 268, 15, 268, 15,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 74), 3216,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 180, 120, -90, 180, 60, -480,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 120, -34, -30, 102, -90, -171,
	ftAnimSetValRateT(FT_ANIM_TRAX, 5), 150, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 268, -11, 268, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, -90,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 10), 30, -19, -30, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), -90,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 15), 90, 59, -90, 47,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 15), -30,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -268, -8, -268, -8,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 180, 48, -30, -24, 30, 144,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 150, -129, -60, -18, 90, 36,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 8), -30, -32, 90, -48,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 8), -60,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 0, 12, 0, 12,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 90, 70, -60, 17, 0, -35,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 7), 90, -48, -30, 32,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 7), 30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimChargePunchGroundFull_joint10[344] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1029, 1, 496, -6, 1407, -27,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1084, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 499, -17,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1572, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1547, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1031, 25, 1410, -91,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1239, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 514, -52, 1365, -83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1354, 379,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 305, 4,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 6144, 5120, 5120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1429, 372,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1983, 283, 2003, 319,
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_SCAX, 5), 4096, -409,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1996, 8, 320, 12, 1994, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 2127, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 303, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1983, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1973, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1920, 15,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 65), 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 2028, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2059, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 2049, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2170, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 2284, -34,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 47), 3072,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2247, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1962, -29,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 314, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 407, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2025, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1937, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1920, -81, 1897, -89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1442, -305,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1250, -84,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 413, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 324, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1146, -209,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 910, -20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1177, -76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 499, -114,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 893, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 809, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 383, 72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 711, -64,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 378, -258, 736, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -16, -610, 376, -581,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -842, -505, -425, -484,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1028, -123, 616, -93, -593, -110,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 883, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1090, -44, -645, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1137, -44, -728, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1182, -28, -712, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1287, -73, -924, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1390, 9, -956, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1268, -333, -624, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2057, -459, -1173, -285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2187, -97, 966, 73, -1195, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1378, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2253, -55, -1238, -54,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -2411, -3, -1602, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2412, -1, 1391, 12, -1608, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimChargePunchGroundFull_joint11[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -490, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 67), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTKirbyAnimChargePunchGroundFull_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 80),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimChargePunchGroundFull_joint14[144] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 927, 8, -244, -1, -666, -6,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 47), -188, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 927, -99, -666, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 768, -239, -575, 133,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -149, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 197, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 108, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 71, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -138, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 39), -182, -8,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 72, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 28), 73, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 75, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 362, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -182, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -321, 13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -193, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -238, 48,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 389, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 23, -26,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -186, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 252, -6,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -24, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -308, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -301, -2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 245, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 239, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, 3, -302, -1, 233, -6,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimChargePunchGroundFull_joint16[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 45), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimChargePunchGroundFull_joint18[170] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 245, -6, 2121, -6, -343, 10,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 2121, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 220, 15, -310, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 245, 131, -343, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 482, 446, 2222, -14, -595, -459,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1851, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1138, 401, -1261, -385,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1327, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1366, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1769, -41, -1377, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1774, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 30), -1381, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1331, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 35), 1409, 13,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1776, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 1752, -22,
	ftAnimBlock(0, 22),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1359, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1317, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1724, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1897, 27,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1420, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 1327, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1355, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -1709, -5,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1918, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1775, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1321, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1298, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1776, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1784, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1715, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1705, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1298, 0, 1785, 0, -1708, -2,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimChargePunchGroundFull_joint19[170] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -2, 0, -1, 368, -2,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 35, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 73, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 368, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 456, 142,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 920, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 71, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 104, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 113, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 928, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 29), 916, -11,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), -2, 4,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 113, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 113, 7,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 904, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 320, -24,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -84, -35,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 122, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), 303, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 295, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 272, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 89, -146,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -68, 48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -112, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 16, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 207, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 216, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 233, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 18, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 21, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, 0, 302, 0, 233, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimChargePunchGroundFull_joint21[264] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 54), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 302, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 463, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 455, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 346, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 92, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000, 0x280E, 0xFA0C, 0xFFFF, 0xF7B0, 0x0004, 0xF880, 0xFFFD, 0x4F00, 0x1000, 0x1000, 0x1000, 0x280D, 0x0006, 0xF7B0, 0xFFDC, 0xF880, 0x0039, 0x2003, 0x0005, 0xFA04, 0x0005, 0x2003, 0x0001, 0xFA0C, 0x0042, 0x200F, 0x0001, 0xFA89, 0x00CB, 0xF77F, 0x0003, 0xF8E9, 0x0106, 0x2805, 0x0003, 0xF8D8, 0x0034, 0x200B, 0x0001, 0xFBA4, 0xFFF0, 0xFA8D, 0x0124, 0x200B, 0x0001, 0xFA68, 0xFF40, 0xFB32, 0x0055, 0x2809, 0x0003, 0xFB52, 0x000B, 0x2003, 0x0001, 0xFA23, 0xFFDE, 0x2803, 0x0009, 0xFA53, 0x000B, 0x2005, 0x0001, 0xF8E8, 0x000D, 0x2805, 0x0018, 0xF8C8, 0x0002, 0x0801, 0x0001, 0x2009, 0x0001, 0xFB5A, 0x0009, 0x2809, 0x0017, 0xFB60, 0xFFF4, 0x0801, 0x0006, 0x2003, 0x0001, 0xFA5E, 0x000B, 0x2803, 0x0018, 0xFA07, 0x0000, 0x0801, 0x000F, 0x2005, 0x0001, 0xF8CB, 0x0003, 0x2805, 0x000B, 0xF880, 0xFFF6, 0x2009, 0x0001, 0xFB54, 0xFFF7, 0x2809, 0x000A, 0xFA17, 0xFFA4, 0x0801, 0x0007, 0x2003, 0x0001, 0xFA0D, 0x000B, 0x2803, 0x000E, 0xFB75, 0x000D, 0x0801, 0x0002, 0x200D, 0x0001, 0xF87E, 0x0002, 0xF9BD, 0xFFB9, 0x2805, 0x0010, 0xF8B7, 0x000C, 0x2009, 0x0006, 0xF963, 0xFFFC, 0x2009, 0x0001, 0xF961, 0xFFC0, 0x2009, 0x0002, 0xF8B9, 0xFFEB, 0x2009, 0x0001, 0xF8B8, 0x0007, 0x2809, 0x0005, 0xF985, 0x0044, 0x0801, 0x0001, 0x2003, 0x0001, 0xFB7C, 0x0000, 0x2803, 0x0010, 0xFAEB, 0x0000, 0x0801, 0x0003, 0x2009, 0x0001, 0xF9A9, 0x0010, 0x2809, 0x000A, 0xF950, 0x0000, 0x2005, 0x0001, 0xF8C4, 0x000B, 0x2805, 0x000E, 0xF908, 0x0000, 0x0801, 0x0009, 0x2009, 0x0001, 0xF950, 0x0000, 0x2809, 0x0004, 0xF954, 0x0000, 0x0801, 0x0001, 0x2003, 0x0001, 0xFAEC, 0x0000, 0x2003, 0x0002, 0xFAED, 0x0000, 0x200F, 0x0001, 0xFAEE, 0x0000, 0xF907, 0x0000, 0xF954, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
