/* AnimJoint data for relocData file 1306 (FTKirbyAnimStunLandD) */
/* 2160 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimStunLandD_joint1[94];
extern u16 dFTKirbyAnimStunLandD_joint2[32];
extern u16 dFTKirbyAnimStunLandD_joint3[14];
extern u16 dFTKirbyAnimStunLandD_joint5[48];
extern u16 dFTKirbyAnimStunLandD_joint6[136];
extern u16 dFTKirbyAnimStunLandD_joint7[16];
extern u16 dFTKirbyAnimStunLandD_joint9[48];
extern u16 dFTKirbyAnimStunLandD_joint10[134];
extern u16 dFTKirbyAnimStunLandD_joint11[16];
extern u16 dFTKirbyAnimStunLandD_joint13[10];
extern u16 dFTKirbyAnimStunLandD_joint14[88];
extern u16 dFTKirbyAnimStunLandD_joint16[14];
extern u16 dFTKirbyAnimStunLandD_joint18[132];
extern u16 dFTKirbyAnimStunLandD_joint19[90];
extern u16 dFTKirbyAnimStunLandD_joint21[14];
extern u16 dFTKirbyAnimStunLandD_joint22[150];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimStunLandD_joints[] = {
	(u32)dFTKirbyAnimStunLandD_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimStunLandD_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimStunLandD_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimStunLandD_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimStunLandD_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimStunLandD_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimStunLandD_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimStunLandD_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimStunLandD_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimStunLandD_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimStunLandD_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimStunLandD_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimStunLandD_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimStunLandD_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimStunLandD_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTKirbyAnimStunLandD_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimStunLandD_joint1[94] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -536, 4096, 4096, 4096,
	ftAnimSetValRate(FT_ANIM_TRAY), 600, 3200,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 8), 1800,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 16), 773,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4300, 4300, 4300,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAY, 8), 576, -3200,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 3891, 3891, 4505,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 2), 4505, 4505,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 1920,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 4), 960,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), 773,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAZ, 1), 3276,
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 5), 4505,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 4), 3891, 3891,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 576, -1920,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4505, 4505, 3276,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 576, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimStunLandD_joint2[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAZ), 804, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, -312, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 23), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 16), 0, -33,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 8), 0,
	ftAnimBlock(0, 7),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 2), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimStunLandD_joint3[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimStunLandD_joint5[48] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 178, -210, -150, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 16), 215, 13, 23, -15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), -30, -180, -60, -120,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 241, -28, -286, -17,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -180, -60, -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), -167,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -14, -20, -116, 15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), -64,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 77, -162, -63,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimStunLandD_joint6[136] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2412, -6, -1062, 0, 0, 5,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1013, 5,
	ftAnimSetValRateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 16), 4095, 0, 4095, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -2809, -82, 50, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2873, -36, -22, -102,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -2542, 47, -755, -62,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1019, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1187, -18,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2498, 34, -800, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2834, -642, -432, 660,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1190, 133,
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4095, 4095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -919, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3759, -460, -1084, -94, 496, 458,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1034, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3754, 8, 484, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3743, 17, 456, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -3557, 79, 227, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3493, -29, -1021, 6, 101, -58,
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4095, 4095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3616, -151, -1020, -1, 110, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3796, -180, -1025, -4, 152, 42,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimStunLandD_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimStunLandD_joint9[48] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -178, 210, -150, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 16), -12, 20, 6, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), -110, 120, -120, 90,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 375, -10, 30, 19,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 120, -120, 90,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), -143,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -99, -43, 164, 15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 28, 157, -44,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimStunLandD_joint10[134] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 10, 545, -2, -1608, 10,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1527, -54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 178, -22,
	ftAnimSetValRateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 16), 4095, 0, 4095, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 1055, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1124, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1494, 559,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2243, 423, -1584, -60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1768, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2342, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2343, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2364, 81,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 164, 26, -1767, 87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1345, 118,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 262, -26,
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4095, 4095,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2487, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2416, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1355, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1465, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 232, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 142, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2365, -68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2202, 28,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4095, 4095,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2252, 50, 154, 11, -1322, 142,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimStunLandD_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimStunLandD_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimStunLandD_joint14[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -88, 1, -394, 1, 125, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -72, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -190, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 278, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 311, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 300, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -66, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 181, 232,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -191, -30, 261, -186,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -352, -149,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -204, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 439, 121,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 359, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -370, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 94, 36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 271, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 51, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 25, -25, -202, 2, 128, 34,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimStunLandD_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimStunLandD_joint18[132] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -217, -5, -481, 3, -3134, 14,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -6, 61, -2300, 92,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 16), 4095,
	ftAnimSetValRateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 16), 4095, 34, 4095, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -244, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -130, 164,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 262, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 45, 42, -2218, 68,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2132, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -11, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 238, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -144, -258,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2158, -194,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2890, -164,
	ftAnimSetValT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4095, 4095,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4095,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -440, -116, -104, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -51, 87,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 103, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2850, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2509, 274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -15, 60, -2179, 247,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 30, -96, -2170, -166,
	ftAnimBlock(0, 2),
	ftAnimSetValT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4095, 4095,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -76, -106, 113, 9, -2359, -188,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimStunLandD_joint19[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1523, -4, 1213, 0, 1729, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1289, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), -1814, -3, 1416, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1816, -3, 1412, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1258, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1856, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1890, -126, 1290, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2371, -127,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1349, -23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1079, -99,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1125, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2364, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1950, -10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1214, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1343, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2032, -77, 1324, -17, 1257, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2106, -73, 1315, -9, 1180, -77,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimStunLandD_joint21[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 25), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTKirbyAnimStunLandD_joint22[150] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1826, 7, -2089, 0, 1687, 20,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1658, 93,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 16), 4096,
	ftAnimSetValRateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 16), 4095, 34, 4095, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 2069, -64, 2353, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1971, -149, 2430, 82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1532, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2735, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1560, 91,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1332, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1528, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1572, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1633, 285, -1331, -66, 2703, -164,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1621, -86, 2160, -109,
	ftAnimSetValT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4095, 4095,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2143, 411,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2456, 132,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2287, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1639, -3, 2188, 54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2595, 179,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1429, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2079, -203,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1824, 179,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2765, 92,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2711, -100,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4095, 4095,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2053, 228, -1449, -20, 2578, -132,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
