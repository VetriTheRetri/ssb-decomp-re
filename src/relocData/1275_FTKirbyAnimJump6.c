/* AnimJoint data for relocData file 1275 (FTKirbyAnimJump6) */
/* 1728 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimJump6_joint1[22];
extern u16 dFTKirbyAnimJump6_joint2[14];
extern u16 dFTKirbyAnimJump6_joint3[22];
extern u16 dFTKirbyAnimJump6_joint5[38];
extern u16 dFTKirbyAnimJump6_joint6[162];
extern u16 dFTKirbyAnimJump6_joint7[22];
extern u16 dFTKirbyAnimJump6_joint9[38];
extern u16 dFTKirbyAnimJump6_joint10[166];
extern u16 dFTKirbyAnimJump6_joint11[14];
extern u16 dFTKirbyAnimJump6_joint13[10];
extern u16 dFTKirbyAnimJump6_joint14[56];
extern u16 dFTKirbyAnimJump6_joint16[16];
extern u16 dFTKirbyAnimJump6_joint18[74];
extern u16 dFTKirbyAnimJump6_joint19[56];
extern u16 dFTKirbyAnimJump6_joint21[110];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimJump6_joints[] = {
	(u32)dFTKirbyAnimJump6_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimJump6_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimJump6_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimJump6_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimJump6_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimJump6_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimJump6_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimJump6_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimJump6_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimJump6_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimJump6_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimJump6_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimJump6_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimJump6_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimJump6_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF0185, /* [21] END */
};

/* Joint 1 */
u16 dFTKirbyAnimJump6_joint1[22] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4505, 4505, 4505,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 600, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 4505, 4505, 4505,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimJump6_joint2[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, -268, 0, 0, -312, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimJump6_joint3[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -89, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 27), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), 268,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimJump6_joint5[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 89, -180, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -178, -26,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 30), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 3), -180,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -178, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 7), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 20), 89, -180,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 20), 178, -120, -120,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimJump6_joint6[162] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2413, -34, -1161, 0, 0, 41,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 2918, 3891, 3891,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -2434, 19, 24, -22,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 2918, 3891, 3891,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -1086, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1019, 69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -861, -30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2408, 72, -4, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2290, 725, -126, -727,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -958, 701, -1460, -702,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -887, 52, -1532, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -853, 26, -893, -26, -1565, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -873, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -754, 57, -1649, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -671, 360, -1728, -358,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 662, 385, -3062, -386,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -825, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1197, -33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 737, 50, -3139, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 804, 2, -3218, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1221, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1146, 8,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 3072, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 807, 3, -3221, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 17), 1036, 5, -3500, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1134, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 14), -996, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1035, 0, -998, -1, -3500, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimJump6_joint7[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 36), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimJump6_joint9[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), -89, 180, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 178, 26,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 30), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 3), 180,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 178, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 7), 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 20), -89, 180,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 20), -178, 120, -120,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimJump6_joint10[166] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2408, 34, 1165, -3, 0, 41,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 2918, 3891, 3891,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 2429, -19, 23, -22,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 2918, 3891, 3891,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 1086, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1017, -67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 862, 30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2404, -80, -4, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2267, -713, -144, -716,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 977, -692, -1436, -694,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 881, -63, -1533, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 850, -25, 889, 25, -1564, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 874, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 747, -57, -1651, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 667, -358, -1728, -355,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -662, -386, -3057, -388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 825, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1201, 35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -742, -52, -3139, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -808, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -3218, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1224, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1147, -8,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -809, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -1037, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3221, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -3496, -8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1138, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 14), 1000, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1044, -7, 995, -4, -3504, -7,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimJump6_joint11[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 49), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTKirbyAnimJump6_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimJump6_joint14[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 62, 10, -255, 3, 650, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 34), -280, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 42), 107, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), 645, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 629, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -207, -9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -293, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -428, -1,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 129, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 242, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 242, 0, -430, -2, -209, -1,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimJump6_joint16[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 49), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimJump6_joint18[74] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1868, -2, 1782, -14, -1538, 50,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3112, 3112, 3112,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 3112, 3112, 3112,
	ftAnimSetValRateT(FT_ANIM_ROTX, 38), -1877, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), 1834, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1302, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1292, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 32), -1466, 18,
	ftAnimBlock(0, 24),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 3686, 3686, 3686,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1886, -10, -1447, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -2114, -8, -1226, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1842, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), 1977, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2118, -4, 1980, 2, -1218, 7,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimJump6_joint19[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -61, -12, 255, -3, 655, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 33), 270, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 36), -79, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), 649, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 633, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -203, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 280, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 430, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -80, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -238, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -246, -7, 428, -1, -214, -11,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimJump6_joint21[110] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000, 0x280E, 0x074C, 0x0002, 0xF90A, 0x000E, 0xFA02, 0x002E, 0x3F00, 0x0C28, 0x0C28, 0x0C28, 0x4701, 0x001E, 0x0C28, 0x0C28, 0x0C28, 0x2803, 0x0026, 0x0755, 0x0006, 0x2805, 0x0027, 0xF8D6, 0xFFF9, 0x2009, 0x0005, 0xFAEA, 0x0009, 0x2009, 0x0001, 0xFAF4, 0x0008, 0x2009, 0x0017, 0xFA01, 0xFFFC, 0x2009, 0x0001, 0xF9FE, 0x0001, 0x2809, 0x0012, 0xFB2E, 0x0010, 0x4701, 0x0014, 0x0E66, 0x0E66, 0x0E66, 0x0801, 0x0008, 0x2003, 0x0001, 0x075E, 0x000A, 0x2803, 0x000A, 0x0842, 0x0008, 0x2005, 0x0001, 0xF8CE, 0xFFF7, 0x2805, 0x0009, 0xF847, 0xFFFB, 0x0801, 0x0008, 0x2009, 0x0001, 0xFB39, 0x0006, 0x200F, 0x0001, 0x0846, 0x0004, 0xF844, 0xFFFE, 0xFB3A, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
