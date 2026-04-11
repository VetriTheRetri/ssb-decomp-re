/* AnimJoint data for relocData file 1309 (FTKirbyAnimStunStartU) */
/* 2480 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimStunStartU_joint1[86];
extern u16 dFTKirbyAnimStunStartU_joint2[36];
extern u16 dFTKirbyAnimStunStartU_joint3[28];
extern u16 dFTKirbyAnimStunStartU_joint5[54];
extern u16 dFTKirbyAnimStunStartU_joint6[142];
extern u16 dFTKirbyAnimStunStartU_joint7[14];
extern u16 dFTKirbyAnimStunStartU_joint9[56];
extern u16 dFTKirbyAnimStunStartU_joint10[144];
extern u16 dFTKirbyAnimStunStartU_joint11[16];
extern u16 dFTKirbyAnimStunStartU_joint13[24];
extern u16 dFTKirbyAnimStunStartU_joint14[100];
extern u16 dFTKirbyAnimStunStartU_joint16[34];
extern u16 dFTKirbyAnimStunStartU_joint18[158];
extern u16 dFTKirbyAnimStunStartU_joint19[94];
extern u16 dFTKirbyAnimStunStartU_joint21[210];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimStunStartU_joints[] = {
	(u32)dFTKirbyAnimStunStartU_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimStunStartU_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimStunStartU_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimStunStartU_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimStunStartU_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimStunStartU_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimStunStartU_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimStunStartU_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimStunStartU_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimStunStartU_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimStunStartU_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimStunStartU_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimStunStartU_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimStunStartU_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimStunStartU_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF0216, /* [21] END */
};

/* Joint 1 */
u16 dFTKirbyAnimStunStartU_joint1[86] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -818, 576, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -893, 2,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 480, -192, 4505, 204, 4505, 204, 3276, -409,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 480, 192, 4505, -204, 4505, -204, 3276, 409,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), -804, 44, 4096, -45, 4096, -45, 4096, 91,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), 576,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 800,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 16), 4096, 45, 4096, -113, 4096, 45,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 18), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 9), 960,
	ftAnimSetValRateT(FT_ANIM_TRAY, 9), 420, -1280,
	ftAnimBlock(0, 7),
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4505, 3072, 4505,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 0, 600, 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimStunStartU_joint2[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, -312, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 0, -13,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 18), -268,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 18), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -268, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimStunStartU_joint3[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 312, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 0, 14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 268,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimStunStartU_joint5[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), -318, 48, 79, -180, -120,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 18), -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 6), 0, 17, 0, -2, 178, 5, -120, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 12), 0, -4, 178, -9, -120, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 6), 0, -14, -150, 80, -120, 80,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 12), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), -89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 6), 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimStunStartU_joint6[142] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -515, -142, -943, 9, -288, 151,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4095, 4095,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1007, 22,
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 18), 4095, 4095,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 24), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -657, -212, -136, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -940, -216, 180, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1028, 177, 212, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, 123, -999, 4, 0, -117,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -851, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -778, -6, -41, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -789, -12, -41, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -17, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -809, 53,
	ftAnimSetValRateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4095, 0, 4095, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -729, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -270, 247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -50, 759, -40, -632,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1248, 782, -812, -4, -1283, -747,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1329, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1514, 173, -1536, -134,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, 4095, 4095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1769, 220, -1585, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2036, 262, -1591, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2411, 59, -1603, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2412, 1, -1391, -61, -1608, -4,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimStunStartU_joint7[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 29), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimStunStartU_joint9[56] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -333, 15, -143, 60, -120, 60,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 18), -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 6), 0, 18, 0, 0, -178, -1, 120, 26, 0, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 12), 0, 4, -178, 9, 120, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 12), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 6), 0, 14, 150, -80, -120, 80,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 12), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), 89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 6), 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimStunStartU_joint10[144] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2349, 29, 1285, -9, 64, 27,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 18), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 24), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -2263, -109, 1057, -86, 131, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2412, -85, 996, -33, 0, -75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 979, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -2426, 12, -38, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2413, 12, -33, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -4, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -2418, -51,
	ftAnimSetValRateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, 0, 4096, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2496, -131,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2933, -240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 945, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 934, 90,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3163, -768, -37, -641,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4469, -767, -1287, -733,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4699, -171, -1503, -135,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -5189, -239,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1604, -5,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, 4095, 4095,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1041, 112,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1341, 63,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -5436, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -5583, -96, -1607, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5629, -45, 1391, 49, -1608, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimStunStartU_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimStunStartU_joint13[24] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 211, -408, -1889,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 211, -408, -1889,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 211, -42, -408, 17, -1889, 34,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -804, 0, -1072,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTKirbyAnimStunStartU_joint14[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 100, 48, -210, -11, -40, -55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -142, 188,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), -302, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 366, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 206, -158,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 37, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 90, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 108, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 109, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 120, 22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 39, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -70, -53,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 149, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 298, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -337, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -307, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -127, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -29, 11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 276, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 242, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, 5, -302, 4, 237, -5,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimStunStartU_joint16[34] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 132, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 163, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 186, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 141, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimStunStartU_joint18[158] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1787, -66, 1446, 46, -1133, 1,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4096, 4095,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1999, 175,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4095, 0, 4096, 0, 4095, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1763, 120, -1204, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1853, 0, -1197, 117,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1625, -77, -785, 99,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1777, 114,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1787, -16,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 14), 4095, 0, 4095, 0, 4095, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1607, -10, -770, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1619, -4, -1319, -46,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1805, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -2037, -52,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1616, -1, -1364, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1716, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1613, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2073, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2022, -65,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4095, 4095, 4095,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1700, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1793, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2084, -23, -1713, -50,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1928, 18, -1705, 1,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4095, 4095, 4095,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1792, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1786, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1918, 10, 1785, 0, -1704, 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimStunStartU_joint19[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 131, -63, 315, 22, 413, -83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 215, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -104, 83, 0, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -20, 40, 144, 67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 110, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -52, -5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 221, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 371, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 102, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 233, 64,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -57, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 70, 53,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 277, 45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 242, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 127, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 29, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 366, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 307, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, -8, 302, -4, 233, -9,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimStunStartU_joint21[210] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 112, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 153, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 192, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 143, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x4600, 0x0FFF, 0x0FFF, 0x280E, 0xF9A8, 0x004B, 0xFA07, 0xFFE6, 0xFBC6, 0xFFCE, 0x1100, 0x1000, 0x2807, 0x0005, 0xFAA7, 0xFF67, 0xF9AE, 0x0044, 0x1901, 0x0006, 0x1000, 0x2E01, 0x0006, 0x0FFF, 0x0000, 0x0FFF, 0x0000, 0x2009, 0x0003, 0xFB12, 0xFFCE, 0x2009, 0x0001, 0xFAF7, 0x009C, 0x2809, 0x0002, 0xFD64, 0x0088, 0x0801, 0x0001, 0x2007, 0x0001, 0xF9C9, 0xFF93, 0xF9F9, 0x0025, 0x2803, 0x0002, 0xF9DE, 0x0016, 0x2805, 0x0008, 0xF9A5, 0x0000, 0x1901, 0x000E, 0x1000, 0x2E01, 0x000E, 0x0FFF, 0x0000, 0x0FFF, 0x0000, 0x2009, 0x0001, 0xFD5D, 0xFFE4, 0x2809, 0x0006, 0xFB5C, 0xFFC6, 0x0801, 0x0001, 0x2003, 0x0001, 0xF9FA, 0x001C, 0x2803, 0x0008, 0xFB22, 0x0035, 0x0801, 0x0004, 0x2009, 0x0001, 0xFB24, 0xFFCB, 0x2809, 0x0008, 0xF9C0, 0xFFEB, 0x2005, 0x0001, 0xF9A6, 0x0001, 0x2805, 0x0009, 0xF8FF, 0xFFDB, 0x0801, 0x0002, 0x2003, 0x0001, 0xFB52, 0x001B, 0x2803, 0x0004, 0xFB07, 0x001D, 0x0801, 0x0002, 0x3100, 0x0000, 0x4701, 0x0004, 0x1000, 0x0FFF, 0x0FFF, 0x0801, 0x0002, 0x200B, 0x0001, 0xFB63, 0x0045, 0xF9BC, 0xFFC6, 0x2809, 0x0002, 0xF94C, 0x0000, 0x2803, 0x0006, 0xFAF6, 0xFFEF, 0x0801, 0x0001, 0x4701, 0x0006, 0x1000, 0x0FFF, 0x0FFF, 0x2005, 0x0001, 0xF8FF, 0x0000, 0x2805, 0x0004, 0xF907, 0x0001, 0x2009, 0x0001, 0xF94D, 0x0001, 0x2009, 0x0003, 0xF953, 0x0001, 0x200F, 0x0001, 0xFAEE, 0xFFF8, 0xF907, 0x0000, 0xF954, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
