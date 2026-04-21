/* AnimJoint data for relocData file 1317 (FTKirbyAnimDownAttackU) */
/* 3152 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimDownAttackU_joint1[92];
extern u16 dFTKirbyAnimDownAttackU_joint2[58];
extern u16 dFTKirbyAnimDownAttackU_joint3[70];
extern u16 dFTKirbyAnimDownAttackU_joint5[82];
extern u16 dFTKirbyAnimDownAttackU_joint6[204];
extern u16 dFTKirbyAnimDownAttackU_joint7[14];
extern u16 dFTKirbyAnimDownAttackU_joint9[82];
extern u16 dFTKirbyAnimDownAttackU_joint10[184];
extern u16 dFTKirbyAnimDownAttackU_joint11[14];
extern u16 dFTKirbyAnimDownAttackU_joint13[24];
extern u16 dFTKirbyAnimDownAttackU_joint14[112];
extern u16 dFTKirbyAnimDownAttackU_joint16[30];
extern u16 dFTKirbyAnimDownAttackU_joint18[134];
extern u16 dFTKirbyAnimDownAttackU_joint19[192];
extern u16 dFTKirbyAnimDownAttackU_joint21[14];
extern u16 dFTKirbyAnimDownAttackU_joint22[226];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimDownAttackU_joints[] = {
	(u32)dFTKirbyAnimDownAttackU_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimDownAttackU_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimDownAttackU_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimDownAttackU_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimDownAttackU_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimDownAttackU_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimDownAttackU_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimDownAttackU_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimDownAttackU_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimDownAttackU_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimDownAttackU_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimDownAttackU_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimDownAttackU_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimDownAttackU_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimDownAttackU_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTKirbyAnimDownAttackU_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimDownAttackU_joint1[92] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -818, 0, 576, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 0, 600, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 45), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 420, 4505, 3072, 4505,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 0, -80,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 420, 4505, 3072, 4505,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAY, 5), -804, -241, 840, 336,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 5), -2412, -160, 840, -144,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 10), -3216,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 660, -336,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 420, 4505, 3072, 4505,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 15), -3216,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 420, 4505, 3072, 4505,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 600, 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimDownAttackU_joint2[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, -312, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 10), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 15), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 10), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX, 5), -360, -288,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 0, -17, -360, 192, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ, 10), -268, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ, 15), -268, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimDownAttackU_joint3[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 312,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 357, 17, 0, -26,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 25), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 15), 178,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -17, -536, -53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 357, -11, 0, -17, -536, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 178, -14, -268, -8, 89, 41,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), -120,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 10), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 134, -11, -134, 17, 89, -5,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0, 0,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimDownAttackU_joint5[82] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -318, 48, 79, -180, -120, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 15), 0, 15, 178, 6, 178, -3, -60, 24, 60, 24,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 15), -60,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 0, -17, -120, -48, -120, -48,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ, 5), 0, 178, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 178, -11, -120, -32, -120, 48, 60, -32,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 30), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, -11, -30, 47, 0, -31,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 25), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 10), -180,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), -120, 96, -30, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 5), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimDownAttackU_joint6[204] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2129, -2, -662, -3, 1325, -3,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4095,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2141, 51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -704, 27,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 40), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1228, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1124, -177,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 262, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2041, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1709, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1684, 2, 147, -92,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1891, -54, 62, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -678, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -666, -22,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1953, -126, 97, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2143, -385, 252, 349,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2724, 322, -671, 56, 797, 424,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -378, 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1238, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1497, 574,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1576, -51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1575, -33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -352, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -658, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1237, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1698, 204,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1630, -95,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2454, -91,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -678, -7, 1919, 227,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -664, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 2450, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2536, -143, 2610, 228,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -3110, -77, 3362, 98,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -625, 52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -225, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3138, 2, 3406, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 3220, -6,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -2452, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2422, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2412, 9, -220, 4, 3216, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimDownAttackU_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 49), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimDownAttackU_joint9[82] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -333, 15, -143, 60, -120, 60,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 15), 0, 16, 178, -9, 178, 16, 60, 48, 0, 24,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 15), -60,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -178, -35, 180, 96, -60, -48, 60, 96,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 0, 178,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 30), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -178, 11, 178, -11, 180, -32, -60, 16, 60, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 11, 0, -11, 120, -31, -30, 15, 0, -31,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 120, -64, -30, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ, 5), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimDownAttackU_joint10[184] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2349, -7, 1285, 0, 64, 5,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1339, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 593, -3,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 40), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -2629, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2654, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2788, -50,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1346, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1103, -68,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2861, -196, 579, -40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 300, -274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3182, -482,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3826, -556,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -4525, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1070, -3, -35, -263,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -231, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1068, -28,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4520, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -4807, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -275, -65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1021, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1038, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 991, -46,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4806, -4, -1069, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -5203, -418, -1550, -419,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 934, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1155, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -5722, -372, -2051, -341,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2208, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -5869, 78,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1175, 22, -2131, 87,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1381, 10, -1617, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -5787, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -5628, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5629, -1, 1387, 6, -1608, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimDownAttackU_joint11[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 49), -6, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimDownAttackU_joint13[24] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 211, -408, -1889,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -804, -50, 0, 20, -1072, 40,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -804, 0, -1072,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -804, 0, -1072,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTKirbyAnimDownAttackU_joint14[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 100, 38, -210, -9, -40, -64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -321, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 147, -70, -73, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1, -83, 197, 151,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 244, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -54, -26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -302, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -191, 73,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 264, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 211, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -84, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 3, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 22, 9, -126, 50,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), 1, -20, -226, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 203, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 309, 21,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -25, -33, -265, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 17), -25, 4, -304, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 323, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 239, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, 4, -302, 1, 233, -6,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimDownAttackU_joint16[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 190,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 298, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 43), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimDownAttackU_joint18[134] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1787, -15, -1770, 27, -1133, -47,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4096, 4095,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1437, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1937, 10, -1616, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1920, 4, -1704, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1663, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -2018, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1449, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1287, 73,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1668, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1451, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2020, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1832, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1693, 111,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1570, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1219, 55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -1460, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1393, 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -1690, -2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1612, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1943, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1982, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1921, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1690, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -1704, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1456, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), -1432, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1920, 1, -1431, 0, -1704, 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimDownAttackU_joint19[192] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1476, 0, 1293, -14, -1195, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1526, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1244, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1348, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1323, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1286, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1494, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1342, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1236, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 922, -161,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1285, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1193, -283, -1196, -319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1908, -205, 750, -117, -1923, -205,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 686, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1604, 176, -1608, 185,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1517, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1552, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1520, -51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1514, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1524, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1604, -346, -1608, -360,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2217, -515, 713, -53, -2240, -509,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 124, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2634, -313, -2626, -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -3046, -157, -2772, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3158, -56, -2794, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -3135, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2670, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 107, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 133, 13,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3135, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -3179, -18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2671, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -2899, -59,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 153, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 286, 27,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2954, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3193, -13, 302, 16, -2979, -25,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimDownAttackU_joint21[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 49), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimDownAttackU_joint22[226] = {
	ftAnimSetValAfter(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4095,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -16, 115, -79, 35, 526, -72,
	ftAnimSetValBlock(FT_ANIM_SCAX), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -99, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 171, -8,
	ftAnimSetValT(FT_ANIM_SCAX, 10), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 336, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 309, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 356, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -96, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -107, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 158, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 133, -9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_SCAX, 5), 4096, 409,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 350, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 438, 25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -103, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 92, 225,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_SCAX, 5), 6144, 409,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 99, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 314, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 453, -90, 376, 262,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 804, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 68, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -28, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX, 5), -28, 75, 6144, -409,
	ftAnimSetValRateT(FT_ANIM_SCAX, 5), 4096, -409,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 80, 205, 794, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 478, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1080, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1057, -54, 466, 104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 767, 4,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 542, 17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 393, -67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 221, -99,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 812, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 770, -60,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 15), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 542, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 303, -70,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 683, -101,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 321, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 108, -108,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -99, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 237, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 311, -6, 192, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 308, -3, 176, -16, -99, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
