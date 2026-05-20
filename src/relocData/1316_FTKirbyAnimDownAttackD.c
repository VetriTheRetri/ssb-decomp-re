/* AnimJoint data for relocData file 1316 (FTKirbyAnimDownAttackD) */
/* 3488 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimDownAttackD_joint1[116];
extern u16 dFTKirbyAnimDownAttackD_joint2[36];
extern u16 dFTKirbyAnimDownAttackD_joint3[64];
extern u16 dFTKirbyAnimDownAttackD_joint5[68];
extern u16 dFTKirbyAnimDownAttackD_joint6[190];
extern u16 dFTKirbyAnimDownAttackD_joint7[16];
extern u16 dFTKirbyAnimDownAttackD_joint9[68];
extern u16 dFTKirbyAnimDownAttackD_joint10[202];
extern u16 dFTKirbyAnimDownAttackD_joint11[24];
extern u16 dFTKirbyAnimDownAttackD_joint13[40];
extern u16 dFTKirbyAnimDownAttackD_joint14[162];
extern u16 dFTKirbyAnimDownAttackD_joint16[46];
extern u16 dFTKirbyAnimDownAttackD_joint18[228];
extern u16 dFTKirbyAnimDownAttackD_joint19[190];
extern u16 dFTKirbyAnimDownAttackD_joint21[14];
extern u16 dFTKirbyAnimDownAttackD_joint22[236];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTKirbyAnimDownAttackD_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimDownAttackD_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimDownAttackD_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimDownAttackD_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimDownAttackD_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTKirbyAnimDownAttackD_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTKirbyAnimDownAttackD_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimDownAttackD_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTKirbyAnimDownAttackD_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTKirbyAnimDownAttackD_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimDownAttackD_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTKirbyAnimDownAttackD_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTKirbyAnimDownAttackD_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTKirbyAnimDownAttackD_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTKirbyAnimDownAttackD_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTKirbyAnimDownAttackD_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTKirbyAnimDownAttackD_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimDownAttackD_joint1[116] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 773, 576, 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 480, -220,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 0, 4505, 3276, 4505,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 300, -144,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4915, 2457, 4915,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), 0, -96,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 300, 4915, 2457, 4915,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 804, 241, 960, 432, -120, 96,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 2412, 241, 840, -552, 120, 288,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_TRAY, 5), 3216, 270,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), 240, 63,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4915, 2048, 4915,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 10), 240, -96,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 20), 3216,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 600, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 540, 4300, 3686, 4300,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 600, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimDownAttackD_joint2[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -312, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 40), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 402, -240, -222,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, -312, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 40), 0, -312, 0,
	ftAnimBlock(0, 30),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), -268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimDownAttackD_joint3[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 10), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 178, 26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 178, -26, 0, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 446, 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 446, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 268, 26, 536, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 268, -8, 536, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 178, -17, 357, -35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimDownAttackD_joint5[68] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 77, -162, -63, -180, -60, -120,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -7, -178, -1, -178, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -178, 17, -178, 17,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 10), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 45), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX, 5), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 17, 0, 35,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 40), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 5), -180,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 0, 178, -120, -120,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 30), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 20), 178, -120, -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 10), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimDownAttackD_joint6[190] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -576, -23, -1022, -8, 149, 94,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4095,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 40), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -606, 37, -1329, -99, 709, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -570, 23, -1407, -59, 753, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1173, 163, 724, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -560, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -467, 201,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 307, 574,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1000, 148, 700, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1207, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 627, -302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 991, 505, 95, -442,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1318, 35, -257, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1063, -213, -140, 100,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 804, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 0, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1210, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1186, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 804, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 892, 100,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 59, -12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1006, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 899, -30,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1184, 9, 44, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -599, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 869, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 805, -2,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4095,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -551, 46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -235, 32,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 804, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 804, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 0, -220, 14, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimDownAttackD_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 49), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimDownAttackD_joint9[68] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 28, 157, -44, 120, -120, 90,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -2, 178, 2, 178, 22,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 178, -17, 178, -17,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 10), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 45), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX, 5), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -17, 0, -35,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 40), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 5), 180,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 0, -178, 120, -120,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 30), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 20), -178, 120, -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 10), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimDownAttackD_joint10[202] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 644, -49, 1457, -12, 286, 33,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4095,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 774, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1463, 5,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 40), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 511, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 570, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 589, -16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 750, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 701, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1455, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1001, -147,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 561, -60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -308, -589,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 877, -89, 626, -317,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1207, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1020, -504, 65, -441,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1318, -17, -257, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1055, 212, -132, 99,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -804, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -58, 59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 28, 37,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1207, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1183, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -804, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -891, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1005, -53, 75, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -900, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 17, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1184, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 599, -54,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -869, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -805, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4095,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 547, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 238, -34,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -804, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -804, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, 0, 217, -21, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimDownAttackD_joint11[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 41), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimDownAttackD_joint13[40] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY), -804, 0,
	ftAnimSetValAfter(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1072, 204, -120, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), -804, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -1072, 268,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -804, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -804, 0,
	ftAnimSetValT(FT_ANIM_ROTX, 25), -804,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 5), 446,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 5), 446,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 5), 446,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 10), 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimDownAttackD_joint14[162] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 25, -4, -202, -7, 128, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -391, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 421, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -181, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -218, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -51, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -418, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -232, 86,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 397, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -3, -29,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 22, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 77, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -152, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -162, -69,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -21, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -37, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 170, 1, -248, -107, -131, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 79, -212, -377, -38, 77, 323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -255, -228, -326, 33, 515, 262,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -337, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -251, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 592, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 576, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 394, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -301, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -117, 2,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -249, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -304, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 383, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 246, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -111, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -30, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, 9, -302, 1, 233, -13,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimDownAttackD_joint16[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 184, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 595, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 482, -297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimDownAttackD_joint18[228] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4095,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1684, -10, 1494, 29, -751, -26,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4095,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1996, 55,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 15), 4095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -2024, -111, -1131, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2130, -30, -1188, -126,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2093, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1618, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2025, -60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1778, -71,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2111, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2100, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1732, -22, -1665, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1732, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1691, -29,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2105, 73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1795, 263,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 6144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1755, 74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1968, -80,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1426, 51, -1715, 358,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1692, -102, 1720, -203, -974, 460,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1549, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1631, 36, -793, 102,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 6144,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1631, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -767, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1561, 35, -793, -101,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1866, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1693, -145, -970, -317,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2077, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1427, -378,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 3), 4095,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1797, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2039, -41, 1819, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1765, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2160, -56,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 20), 4095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2151, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1895, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1800, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -1707, 4,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1761, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1785, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1918, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1923, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1920, 3, 1785, 0, -1704, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimDownAttackD_joint19[190] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1110, 65, 1315, -16, 1180, 51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1189, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1343, 176, 1396, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1528, 109, 1625, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1606, 65, 1717, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1687, 78, 1806, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 1852, -12, 2037, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1836, -54, 2005, -80,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1652, -283,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1543, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1208, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1457, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1308, -302,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1180, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1611, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1554, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1476, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1529, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1548, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1463, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1176, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 970, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1356, -50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1458, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 987, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1155, 14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1478, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1410, -31,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1529, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1245, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1175, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1828, 35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1394, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1628, 9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1271, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1295, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1629, 0, 1305, 10, 1841, 13,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimDownAttackD_joint21[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 49), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimDownAttackD_joint22[236] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1163, -10, 1767, -67, -638, -54,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4095,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1362, -38, -838, 24,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 20), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -920, 265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -607, 217,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -594, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1334, -31, -825, -70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1490, -182,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1447, 54,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -857, -219,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1122, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1624, -92,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1678, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1480, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1428, -7,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1129, 5, -1675, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1254, -151, -1430, 162,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1448, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1665, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1445, -162, -1265, 103,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1106, 120,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1564, 15,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 6144,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -982, 112,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 6144,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -877, -71,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1544, 18,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 3), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1422, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1624, -36, -946, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -960, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1529, -5,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 20), 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1436, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1335, 84,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -987, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1291, -109,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1526, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1466, -25,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1252, 70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1283, -28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1402, -115,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1685, -43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1445, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1435, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1298, -14, 1431, -3, -1708, -22,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
