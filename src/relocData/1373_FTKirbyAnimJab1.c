/* AnimJoint data for relocData file 1373 (FTKirbyAnimJab1) */
/* 1984 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimJab1_joint1[32];
extern u16 dFTKirbyAnimJab1_joint2[10];
extern u16 dFTKirbyAnimJab1_joint3[96];
extern u16 dFTKirbyAnimJab1_joint5[82];
extern u16 dFTKirbyAnimJab1_joint6[118];
extern u16 dFTKirbyAnimJab1_joint7[14];
extern u16 dFTKirbyAnimJab1_joint9[70];
extern u16 dFTKirbyAnimJab1_joint10[124];
extern u16 dFTKirbyAnimJab1_joint11[14];
extern u16 dFTKirbyAnimJab1_joint13[10];
extern u16 dFTKirbyAnimJab1_joint14[72];
extern u16 dFTKirbyAnimJab1_joint16[14];
extern u16 dFTKirbyAnimJab1_joint18[70];
extern u16 dFTKirbyAnimJab1_joint19[82];
extern u16 dFTKirbyAnimJab1_joint21[32];
extern u16 dFTKirbyAnimJab1_joint22[108];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimJab1_joints[] = {
	(u32)dFTKirbyAnimJab1_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimJab1_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimJab1_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimJab1_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimJab1_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimJab1_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimJab1_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimJab1_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimJab1_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimJab1_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimJab1_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimJab1_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimJab1_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimJab1_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimJab1_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTKirbyAnimJab1_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimJab1_joint1[32] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 600, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -240, -959,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -240, 1920,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 240, 479,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 7), 240, -128,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 8), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimJab1_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -268, 0, 0, -312, 0,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimJab1_joint3[96] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 312, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -178, -89, 714, 357,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 3), 312,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), -178, 178, 714, -402, 4096, 204, 4096, -819, 4096, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 178, 11, -89, -44, 4300, 68, 3276, -273, 4300, 68,
	ftAnimSetValRateT(FT_ANIM_TRAY, 7), 312, -52,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4300, -58, 3276, 234, 4300, -58,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, -102, 4096, 409, 4096, -102,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 4), 240,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 102, 4096, -409, 4096, 102,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4300, 3276, 4300,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 312, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimJab1_joint5[82] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 89, 44, -178, -89, -180, -719, -60, -239, 60, 239,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 89, -223, -180, 480, -60, 240, 60, -480,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -357, -5, -178, 11, -60, 119, 0, 59, -60, -119,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -60, 0, -60,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, -96, -60, 96,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 2), -60,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), -60, 79, 0, 79,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), -60,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimJab1_joint6[118] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2412, 1015, -217, -272, 0, 1276,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX, 1), -1397, 507, -489, -136, 1276, 638, 3072, -1023,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX, 1), -1398, -276, -489, 0, 1277, 312, 3072, 3072,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1950, -248, 1901, 276,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -491, 47,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 6144,
	ftAnimSetValRateT(FT_ANIM_SCAX, 5), 3072, -877,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1894, 41, 1829, -50,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -2222, -157, 2162, 159,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3072,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2377, -129, 2320, 135,
	ftAnimSetValRateT(FT_ANIM_SCAX, 2), 3072, 255,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2778, 171,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -2418, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -446, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -233, 29,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2966, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 3191, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2412, 5, -220, 12, 3216, 25,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimJab1_joint7[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 17), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimJab1_joint9[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 357, 178, 120, 479, -120, -479, -120, -479,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 1), 357, -357, -120, 960,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 120, -120,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 8), 120, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 1), -357, -22, 120, 239,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 15), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 7), 120,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 120, -96, -120, 96, 120, -192,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 60, -159, -60, 159, 0, -159,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimJab1_joint10[124] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, -988, 217, 307, 0, 1348,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX, 1), -1793, -496, 524, 153, 1348, 671, 3072, -1023,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1798, 65, 523, 10, 1342, 45,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1519, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 572, -36,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1519, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1545, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1756, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1480, -42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1323, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 530, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1002, 213,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_SCAX, 2), 3072, 255,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1587, 400, 1431, 389,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -954, -259, 2102, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2105, -694, 1499, -266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2343, -146, 1208, 169, 1569, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2399, -34, 1340, 91, 1598, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2412, -13, 1391, 50, 1608, 9,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimJab1_joint11[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTKirbyAnimJab1_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimJab1_joint14[72] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, 427, -302, -165, 237, -505,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -465, 144, -272, 324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 403, 215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 407, -235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -66, -235, -179, 158, 380, 340,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -136, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -64, 1, 408, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -24, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 419, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 239, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -135, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), -298, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, 0, -302, -4, 237, -2,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimJab1_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimJab1_joint18[70] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -309, 781, 3040, -748, -96, -560,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 471, 390, 2292, -374, -656, -281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 471, -336, 2292, 387, -659, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -200, -322, 3067, 408, -251, 208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -173, 20, 3109, 25, -242, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 13), -306, -6, -105, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), 3050, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 3044, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 3041, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -309, -3, 3040, -1, -96, 9,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimJab1_joint19[82] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, -353, 302, -136, 237, -437,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -329, 327, 166, 56, -199, 456,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 325, 336, 279, 50, 712, 469,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 262, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 343, 12, 739, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 349, 3, 752, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 135, -60, 382, -85,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 268, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 305, -5,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 77, -49, 305, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 36, -26, 252, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 23, -12, 302, -3, 237, -14,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimJab1_joint21[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 513,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 513, 256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 513, -253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTKirbyAnimJab1_joint22[108] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1298, -20, -1785, -65, -1704, -108,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1319, -88, -1850, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1812, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1812, 303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1497, -103, -1569, 147, -1205, 319,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1548, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1540, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1174, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1211, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1546, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1695, -88,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1531, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1267, -14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1250, -69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1675, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1788, -79,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1792, 11,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1287, -15, -1698, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1298, -11, -1785, 7, -1704, -5,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
