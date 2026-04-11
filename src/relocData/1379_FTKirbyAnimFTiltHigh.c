/* AnimJoint data for relocData file 1379 (FTKirbyAnimFTiltHigh) */
/* 2480 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimFTiltHigh_joint1[44];
extern u16 dFTKirbyAnimFTiltHigh_joint2[32];
extern u16 dFTKirbyAnimFTiltHigh_joint3[80];
extern u16 dFTKirbyAnimFTiltHigh_joint5[50];
extern u16 dFTKirbyAnimFTiltHigh_joint6[190];
extern u16 dFTKirbyAnimFTiltHigh_joint7[14];
extern u16 dFTKirbyAnimFTiltHigh_joint9[62];
extern u16 dFTKirbyAnimFTiltHigh_joint10[192];
extern u16 dFTKirbyAnimFTiltHigh_joint11[16];
extern u16 dFTKirbyAnimFTiltHigh_joint13[10];
extern u16 dFTKirbyAnimFTiltHigh_joint14[134];
extern u16 dFTKirbyAnimFTiltHigh_joint16[14];
extern u16 dFTKirbyAnimFTiltHigh_joint18[142];
extern u16 dFTKirbyAnimFTiltHigh_joint19[86];
extern u16 dFTKirbyAnimFTiltHigh_joint21[130];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimFTiltHigh_joints[] = {
	(u32)dFTKirbyAnimFTiltHigh_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimFTiltHigh_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimFTiltHigh_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimFTiltHigh_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimFTiltHigh_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimFTiltHigh_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimFTiltHigh_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimFTiltHigh_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimFTiltHigh_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimFTiltHigh_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimFTiltHigh_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimFTiltHigh_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimFTiltHigh_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimFTiltHigh_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimFTiltHigh_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF0231, /* [21] END */
};

/* Joint 1 */
u16 dFTKirbyAnimFTiltHigh_joint1[44] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 600, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 600, 384, -120, 384,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 840, 48, 240, 288,
	ftAnimSetValRateT(FT_ANIM_TRAY, 17), 720, -101,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 7), 240, -112,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), 0, -160,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 600, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 600, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimFTiltHigh_joint2[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 0, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -804, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -1072, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -3485, -201,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), -3485,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), -3485,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimFTiltHigh_joint3[80] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 312, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 5), 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 0, -8, 178, 107, 3891, 81, 4505, -163, 3891, 81,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 536, 26, 4300, 20, 3686, -40, 4300, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -44,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 17), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_SCAY, 17), 312, -30, 4096, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 0, 2, 446, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 0, -37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 0, 240, 4300, 3276, 4300,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 0, 312, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimFTiltHigh_joint5[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -178, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 89, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), -180, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX, 17), 178, -4, -120, 50,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 17), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 6), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX, 2), 0, -29, -60, 160,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX, 4), 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimFTiltHigh_joint6[190] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2412, 96, -1387, 86, -1608, -207,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1226, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2509, 153, -1816, -309,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2719, 79, -2226, -201,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2637, 9, -2226, -228,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 20), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1278, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1126, 32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2686, 56, -2675, -213,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 2959, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1156, -22, -2654, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -968, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2622, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2416, -38,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2967, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 3101, 138,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2474, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3313, 591, -873, 49, -2681, -585,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1156, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4283, 600, -3645, -593,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4514, 152, -3868, -143,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 4658, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3932, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3996, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4730, 325, -4064, -277,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5309, 449, -1164, -85, -4551, -380,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5629, 164, -1327, -104, -4825, -134,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 5637, -3, -4822, -1,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1374, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1392, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 5632, -4, -4824, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5629, -3, -1391, 1, -4825, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimFTiltHigh_joint7[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 27), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimFTiltHigh_joint9[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 2), -178, 35, 0, -35, 60, 192,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 178, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -178, 120, -120, -60,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 0, -9, 0, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), 120, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX, 2), 60, -160,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 4), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimFTiltHigh_joint10[192] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2412, 70, 217, 135, 0, 178,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 462, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 3178, 613,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 178, 277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 555, 339,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 20), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 342, -86, 857, 278,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 608, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3941, 507, 1111, 490,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 4227, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1838, 364,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1840, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1506, -249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4265, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 4149, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3861, -283, 1202, -278,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 3348, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 724, 33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 600, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1183, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3306, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3267, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3315, -85, 806, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3097, -110, 634, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3094, -14, 686, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 3037, 3, 783, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3052, 298, 832, 249,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1608, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3635, 484, 1142, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 4021, 194, 1327, 117,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4025, 1, 1377, 32, 1604, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1391, -2, 1607, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4024, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4022, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4021, -1, 1387, -3, 1608, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimFTiltHigh_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimFTiltHigh_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 28),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimFTiltHigh_joint14[134] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1629, -139, -1305, -29, 1841, 252,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -2089, -318, -1223, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 2266, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2370, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2529, -470, -999, 127, 2716, 423,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -954, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3031, -283, 3216, 285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3097, -59, 3286, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -3433, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3342, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 3630, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -943, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -450, 47,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3509, 187, 3705, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3058, 34, 3253, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3441, -213, 3637, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -3495, -2, 3704, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3489, 11, 3710, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -3296, 76, 3535, -103,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -406, 36,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 6), -302,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3240, 29, 3454, -42,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -3238, 3450,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3238, -302, 3450,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimFTiltHigh_joint16[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 27), 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimFTiltHigh_joint18[142] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1918, -292, -1431, 216, -1708, 435,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -945, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2210, 72, -1214, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1772, 268, -1698, -159,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 3), 8192,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1769, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1534, 101, -976, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -818, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1495, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1450, 76,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_SCAX, 7), 5120, -630,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1800, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -2333, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -936, -90,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 6), 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2474, -121,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2591, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1373, 69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1274, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1044, -256,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1704, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2190, 336,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1918, 135, -1431, -78,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 3), -1431,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1918, 0, -1708, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1918, -1708,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1918, -1431, -1708,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimFTiltHigh_joint19[86] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, 28, 302, -64, 237, 73,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -15, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 178, 30, 286, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 215, 23, 204, -62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 162, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 278, 11,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -14, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -100, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 164, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 24, -6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 289, 10,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 9), 302,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -102, 29, 23, 50,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 21, 233,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 21, 233,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 302,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimFTiltHigh_joint21[130] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 27), 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
	0x280E, 0xFAEE, 0x0004, 0xF907, 0xFF92, 0xF958, 0xFFE5, 0x4F00, 0x1000, 0x1000, 0x1000, 0x2809, 0x0003, 0xF9BD, 0x0081, 0x2803, 0x000C, 0xFAC3, 0x0000, 0x2005, 0x0002, 0xF82A, 0xFFF7, 0x2005, 0x0001, 0xF885, 0x0079, 0x2805, 0x0003, 0xF96A, 0x0001, 0x2009, 0x0001, 0xFA3A, 0x0059, 0x2809, 0x0006, 0xFA77, 0xFFFD, 0x0801, 0x0002, 0x2005, 0x0001, 0xF96B, 0x0001, 0x2805, 0x000C, 0xF9F9, 0x0015, 0x0801, 0x0003, 0x2009, 0x0001, 0xFA74, 0xFFFC, 0x2809, 0x000A, 0xFA0A, 0xFFF4, 0x0801, 0x0001, 0x2003, 0x0001, 0xFAC1, 0xFFFB, 0x2803, 0x000A, 0xFAC6, 0x003A, 0x0801, 0x0006, 0x2005, 0x0001, 0xFA0C, 0x000E, 0x2805, 0x0003, 0xF98E, 0xFF79, 0x0801, 0x0001, 0x2009, 0x0001, 0xF9FF, 0xFFCF, 0x4009, 0x0003, 0xF954, 0x0801, 0x0001, 0x2007, 0x0001, 0xFAEE, 0x0013, 0xF907, 0xFFBD, 0x4007, 0x0003, 0xFAEE, 0xF907, 0x0801, 0x0001, 0x4009, 0x0003, 0xF954, 0x0801, 0x0002, 0x3807, 0x0001, 0xFAEE, 0xF907, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
