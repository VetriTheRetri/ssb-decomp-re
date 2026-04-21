/* AnimJoint data for relocData file 1444 (FTKirbyAnimFireFlowerShootAir) */
/* 2976 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimFireFlowerShootAir_joint1[72];
extern u16 dFTKirbyAnimFireFlowerShootAir_joint2[44];
extern u16 dFTKirbyAnimFireFlowerShootAir_joint3[72];
extern u16 dFTKirbyAnimFireFlowerShootAir_joint5[66];
extern u16 dFTKirbyAnimFireFlowerShootAir_joint6[170];
extern u16 dFTKirbyAnimFireFlowerShootAir_joint7[14];
extern u16 dFTKirbyAnimFireFlowerShootAir_joint9[68];
extern u16 dFTKirbyAnimFireFlowerShootAir_joint10[204];
extern u16 dFTKirbyAnimFireFlowerShootAir_joint11[14];
extern u16 dFTKirbyAnimFireFlowerShootAir_joint13[78];
extern u16 dFTKirbyAnimFireFlowerShootAir_joint14[90];
extern u16 dFTKirbyAnimFireFlowerShootAir_joint16[14];
extern u16 dFTKirbyAnimFireFlowerShootAir_joint18[152];
extern u16 dFTKirbyAnimFireFlowerShootAir_joint19[130];
extern u16 dFTKirbyAnimFireFlowerShootAir_joint21[52];
extern u16 dFTKirbyAnimFireFlowerShootAir_joint22[204];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimFireFlowerShootAir_joints[] = {
	(u32)dFTKirbyAnimFireFlowerShootAir_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimFireFlowerShootAir_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimFireFlowerShootAir_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimFireFlowerShootAir_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimFireFlowerShootAir_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimFireFlowerShootAir_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimFireFlowerShootAir_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimFireFlowerShootAir_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimFireFlowerShootAir_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimFireFlowerShootAir_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimFireFlowerShootAir_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimFireFlowerShootAir_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimFireFlowerShootAir_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimFireFlowerShootAir_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimFireFlowerShootAir_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTKirbyAnimFireFlowerShootAir_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimFireFlowerShootAir_joint1[72] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 600, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 480, -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4300, 3276, 4300,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 480, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), 480,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 600, 359,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 660, 79, 4505, 136, 4505, 136, 3276, -273,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 660, -59, 4505, -102, 4505, -102, 3276, 204,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 600, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 600, 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimFireFlowerShootAir_joint2[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAZ), -268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, -312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 2), 0, 33, 240, 240,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 6), 0, 240,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 6), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), 240,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 240, -1199,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), -360, -799,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 4), 0, -16, -360, 180,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 12), -268, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimFireFlowerShootAir_joint3[72] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 268, 0, 0, 312, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 22), 312, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 89, 357, 89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 89, 357, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 89, -111, 178, -89, 89, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -357, -89, 0, -29, -89, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -446, 39, -134, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 268, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 240, 4300, 3276, 4300,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 312, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimFireFlowerShootAir_joint5[66] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 178, -120, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, -120, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 268, 33, 0, -22,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -60, 60,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -60, 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 268, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 268, 0,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -120, 120,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 268, -16, 0, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -120, 120,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), 60, -80,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 178,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), -60,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -120, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimFireFlowerShootAir_joint6[170] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1036, -640, -998, -126, -283, 347,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 348, 149,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1221, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 395, -645,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -253, -336,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -276, -15, 363, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 424, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -284, -7, -1211, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -294, 0, -1201, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -291, -141, -1199, 100, 420, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -576, -732, -999, 103, 553, 612,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1757, -733, -992, -35, 1645, 705,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1048, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2044, -309, 1963, 331,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2375, -234, 2308, 246,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -2671, 6, 2638, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1039, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -969, -27,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2610, 122, 2601, -82,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1739, 133, 1967, -73,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1023, -78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1314, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1621, 145, 1923, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1132, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1799, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1806, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1283, -449, -1008, 180, 2020, 489,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2032, -446, -952, 6, 2786, 454,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2177, -144, -996, -43, 2929, 143,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimFireFlowerShootAir_joint7[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimFireFlowerShootAir_joint9[68] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -178, 120, -120, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 625, 357, 0, 0, -180,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 16), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 625, 357, 0, -180,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -120, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 446, -111, -178, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 178, -44, -357, -29,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 8), -60,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 16), -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 178, -11, -357, 11,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 4), 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 8), 120, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimFireFlowerShootAir_joint10[204] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1040, 399, 995, 423, -287, 198,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -478, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1419, 80, -89, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1157, -153, -86, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1126, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -100, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -451, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -516, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1159, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1203, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -515, 209, 1201, 98, -98, 87,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1610, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -98, 354, 74, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 194, 175, -113, -181,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -470, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 251, 87, 1550, -115,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1334, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 368, 79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 334, -46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1381, 66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1437, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -491, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -424, 107,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 282, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 77, -284, 1251, -180,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 918, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -287, -229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -380, -33, -310, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -354, 631, -241, 631,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 881, 739, 865, 54, 952, 686,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1085, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1123, 89, 1130, 73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 6, -773,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1100, -71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 621, -562,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1027, -87,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 939, 44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -864, -521, -138, -452,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1036, -171, 999, 59, -283, -145,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimFireFlowerShootAir_joint11[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTKirbyAnimFireFlowerShootAir_joint13[78] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 0, -1072,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 204, -120, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -749, 24, -837,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -736, 49, -886,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -736, 49, -886,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -789, -26, 9, -25, -834, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -790, 6, 0, 55, -806, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -776, 5, 120, 0, -766, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -778, 4, 0, -64, -832, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -764, 0, -74, -1, -874, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -774, -2, -4, 5, -864, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -804, 0, -1072,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTKirbyAnimFireFlowerShootAir_joint14[90] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 295, -248, -302, -4, 237, -254,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -248, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1, -23, -237, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 0, 3, -219, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 25, -244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 18, -50, -237, 78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -257, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 108, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 79, -55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 230, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -267, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 122, 86,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -249, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -301, 2,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 200, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 287, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 295, 7, -302, 0, 237, 7,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimFireFlowerShootAir_joint16[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 29), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimFireFlowerShootAir_joint18[152] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1930, 232, 1766, -320, -1255, 167,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), -1492, 87, -898, 86, 4096, 102, 4096, 102, 4096, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1446, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1435, -19,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1404, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1522, -24, -914, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -977, -54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1444, 14,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, 4096, 4096,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1014, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -745, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1422, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1413, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, -51, 4096, -51, 4096, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1426, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1758, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -740, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -806, -17,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 12), 3686, 3686, 3686,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -853, -52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1256, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1406, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1754, 23,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1831, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1926, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1930, -4, 1766, 12, -1255, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimFireFlowerShootAir_joint19[130] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -297, 652, 300, -96, 233, 142,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 66, -5, 489, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 681, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 672, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 511, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 66, 0, 490, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 69, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 524, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 577, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 96, 131, 561, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 332, 157, 381, -121,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 381, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 477, -8, 412, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 423, -45, 299, -23,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 349, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 310, -24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 378, -38, 272, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -99, -112,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 297, 6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 287, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 237, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -201, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -272, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -295, -22, 302, 5, 237, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimFireFlowerShootAir_joint21[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 443, 297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 602, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 443, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 422, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 174, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -87,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimFireFlowerShootAir_joint22[204] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1930, -628, -1766, 400, -1259, 72,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 773, -281, 4096, 102, 4096, 102, 4096, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1366, 194, -1186, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1377, -9, -974, 122,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -974, -20,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1411, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 739, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 852, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -995, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1015, -23,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 852, 50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1248, 146,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1387, 54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1255, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1052, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1393, 42, -1229, -61,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1323, -12,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, -51, 4096, -51, 4096, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1335, -39, -1176, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1137, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1255, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1308, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1393, 22, -1229, -14,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 12), 3686, 3686, 3686,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1353, 5, -1320, -26, -1167, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1629, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1442, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1212, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1211, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1693, 65, -1243, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1917, 25, -1263, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1525, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1748, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1930, 13, -1766, -18, -1255, 8,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
