/* AnimJoint data for relocData file 1404 (FTKirbyAnimChargePunchAirFull) */
/* 3696 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimChargePunchAirFull_joint1[32];
extern u16 dFTKirbyAnimChargePunchAirFull_joint2[24];
extern u16 dFTKirbyAnimChargePunchAirFull_joint3[106];
extern u16 dFTKirbyAnimChargePunchAirFull_joint5[108];
extern u16 dFTKirbyAnimChargePunchAirFull_joint6[274];
extern u16 dFTKirbyAnimChargePunchAirFull_joint7[24];
extern u16 dFTKirbyAnimChargePunchAirFull_joint9[134];
extern u16 dFTKirbyAnimChargePunchAirFull_joint10[286];
extern u16 dFTKirbyAnimChargePunchAirFull_joint11[46];
extern u16 dFTKirbyAnimChargePunchAirFull_joint13[10];
extern u16 dFTKirbyAnimChargePunchAirFull_joint14[136];
extern u16 dFTKirbyAnimChargePunchAirFull_joint16[22];
extern u16 dFTKirbyAnimChargePunchAirFull_joint18[184];
extern u16 dFTKirbyAnimChargePunchAirFull_joint19[176];
extern u16 dFTKirbyAnimChargePunchAirFull_joint21[242];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimChargePunchAirFull_joints[] = {
	(u32)dFTKirbyAnimChargePunchAirFull_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimChargePunchAirFull_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimChargePunchAirFull_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimChargePunchAirFull_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimChargePunchAirFull_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimChargePunchAirFull_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimChargePunchAirFull_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimChargePunchAirFull_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimChargePunchAirFull_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimChargePunchAirFull_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimChargePunchAirFull_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimChargePunchAirFull_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimChargePunchAirFull_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimChargePunchAirFull_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimChargePunchAirFull_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF032F, /* [21] END */
};

/* Joint 1 */
u16 dFTKirbyAnimChargePunchAirFull_joint1[32] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), -240,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 600, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), -240, 384,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 240, 132,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 25), 240, -30,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 38), 0, -42,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 7), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimChargePunchAirFull_joint2[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 40), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 0, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 23), -268, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 7), -268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimChargePunchAirFull_joint3[106] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -178, -178, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), -178, 44, -178, 53, 4096, 163, 4096, -81, 4096, -81,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 268, 32, 357, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4915, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 25), 4096, -54, 4096, 27, 4096, 27,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 446, 536,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 268, -29, 357, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAY, 5), 0, -11, 134, -41, 4096, 81,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 5), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 89, 6, -268, -4,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, -40, 4505, 81, 4096, -40,
	ftAnimSetValRateT(FT_ANIM_SCAY, 5), 4505, -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 5), 3891, 3891,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 23), 223, 5, 0, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 23), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 268, 0, 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimChargePunchAirFull_joint5[108] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -357, 223, -30, -90, -150,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 6), -357, 71, 223, -22, -30, -96, -150, 240,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 6), -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 357, 24, 0, -7, -150, -12, -90, -12, 150, 113,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 25), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), 357, -15,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), -60, -120, 120,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -150, -48, -90, 16, 150, -48,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 15), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -268, -7,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -150, -23, -90, 23, 30, -95,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), -180, 24, 30, -96,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), -60,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -120, 17, -90, -17, -90, -8,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 23), -120, -7, 0, 23,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 0, 178,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 23), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -120, -120, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimChargePunchAirFull_joint6[274] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -334, 21, -1042, 17, 79, -25,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -242, -73, -955, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -64, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -96, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 75, -131,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -328, 15, -1040, -182,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1498, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 52, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -189, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1241, 230, -369, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1000, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -15, -73, -281, 85,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -226, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -34, -31,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1013, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1080, 31,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -179, 51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -3, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -70, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -164, 6,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -45, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -157, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1048, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1093, -34,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -157, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 7, -57,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -161, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 771, 208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1117, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -996, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -65, -89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -420, 87,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 956, 129,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 909, -279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -982, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -996, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -233, 348,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 472, -296, 276, 360,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 364, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 488, 116,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 317, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1027, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1087, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 426, 68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 959, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 228, -90,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -158, 6,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1087, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -995, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 955, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 1022, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -153, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -264, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1035, 6, -281, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1036, 1, -998, -3, -283, -2,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimChargePunchAirFull_joint7[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 32), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 46), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimChargePunchAirFull_joint9[134] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -268, -268,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 3216, 134, 60, 30, -120, -60, 150, -30,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -268, 53, -268, 53, 60, 120, -120, 30, 150, -90,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 3216,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 268, 18, 268, 18,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 74), 3216,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 180, 120, -90, 180, 60, -480,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 120, -34, -30, 102, -90, -171,
	ftAnimSetValRateT(FT_ANIM_TRAX, 5), 150, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 268, -13, 268, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, -90,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 10), 30, -23, -90, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), -30,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 90, 80, 0, -16, -120, 64,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -60, -47, 30, 143,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -268, -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 5), 180,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 90, -144, -60, -24, 60, 24,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 8, -90, -17, 60, -17,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 0, -178,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 23), 120, 31, -120, -7, 0, -15,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 120, -120, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimChargePunchAirFull_joint10[286] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1029, 1, 496, -6, -1809, -27,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1084, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 496, -17,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1641, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1669, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1029, 24, -1809, -92,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1536, 371,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 512, -48, -1853, -79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1780, 379,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 302, 3,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 7168, 5120, 5120,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1985, 230, -1209, 282,
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_SCAX, 5), 4096, -546,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1997, 5, 313, 12, -1215, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 330, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1995, -2, -1231, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 2278, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1299, 14,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 65), 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1217, 55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1013, -9,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2326, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1997, -37,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 55), 3072,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1026, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1261, -33,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 345, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 454, 22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1957, -84, -1299, -85,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1295, -195, -1973, -162,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 448, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 305, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1141, -168, -2061, -64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 99, -179,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2475, -142,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 317, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 545, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -72, -166,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -671, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2626, -136,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2947, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 542, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 705, -12,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2961, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2522, 163,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -669, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -153, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 51, 165, -2327, 155,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 13), 574, -4, -1887, -7,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 692, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 611, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 572, -2, 609, -1, -1891, -4,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimChargePunchAirFull_joint11[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -490, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 48), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTKirbyAnimChargePunchAirFull_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 80),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimChargePunchAirFull_joint14[136] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 927, 9, -244, 1, -666, -5,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -666, 62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -304, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 971, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 927, -107,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 147, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -569, 152,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -51, 53,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -294, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -199, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 54, -54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 13, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -37, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), 173, 36,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 17, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 18), -70, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -80, -9, 209, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 262, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 222, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -186, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 33), -395, 15,
	ftAnimBlock(0, 16),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 245, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), 237, -1,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 254, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 297, -3,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -379, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -304, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 297, 0, -300, 4, 233, -3,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimChargePunchAirFull_joint16[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 75), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimChargePunchAirFull_joint18[184] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1854, -16, -512, 4, -1951, 16,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -512, -3,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1785, 41, -1884, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1854, 238, -1951, -236,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2721, 354, -2679, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -498, 208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -95, 287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2971, 169, 76, 102, -2725, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 3099, 7, 120, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -2760, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 25), 4096, -11, 4096, -11, 4096, -11,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3105, 4, 121, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), 3297, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 38), 155, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2756, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -2853, 9,
	ftAnimBlock(0, 12),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 45), 3686, 3686, 3686,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2839, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -2930, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3332, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 3242, -46,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 153, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -355, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3196, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), 2893, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2948, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -2850, -5,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -342, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -162, 7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2857, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -2864, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2894, 1, -158, 3, -2867, -3,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimChargePunchAirFull_joint19[176] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -2, 0, -1, 368, -2,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 34, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 72, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 368, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 455, 140,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 920, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 72, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 103, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 117, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 932, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 896, -25,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -19, -24,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 120, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 249, 28,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -52, -41, 863, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 115, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -273, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -456, -345,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1620, -491,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1948, -292,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -2847, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 289, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 344, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 102, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), 181, 3,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2852, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -3342, -50,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 340, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 301, -1,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 184, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 231, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3391, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -3513, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3514, 0, 300, 0, 233, 2,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimChargePunchAirFull_joint21[242] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 74), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000, 0x280E, 0x020D, 0xFFFD, 0x00D2, 0xFFFE, 0x0112, 0xFFFE, 0x3F00, 0x1000, 0x1000, 0x1000, 0x2809, 0x0007, 0x0106, 0x000B, 0x2805, 0x0008, 0x0107, 0x0014, 0x4701, 0x000A, 0x1000, 0x1000, 0x1000, 0x2003, 0x0006, 0x020D, 0x0022, 0x2003, 0x0001, 0x0242, 0xFFF4, 0x200B, 0x0001, 0x01F5, 0xFF44, 0x012A, 0x005C, 0x2809, 0x0002, 0x01FB, 0x0022, 0x2007, 0x0001, 0x00CA, 0xFF68, 0x0111, 0xFFF7, 0x2803, 0x0002, 0x00CF, 0x000A, 0x2805, 0x0017, 0x0108, 0x000B, 0x0801, 0x0001, 0x2F01, 0x0019, 0x1000, 0xFFF5, 0x1000, 0xFFF5, 0x1000, 0xFFF5, 0x2009, 0x0001, 0x0204, 0x0009, 0x2809, 0x0013, 0x0207, 0xFFF4, 0x2003, 0x0001, 0x00D9, 0x000A, 0x2003, 0x0012, 0x014D, 0xFFFE, 0x200B, 0x0001, 0x0143, 0xFFEC, 0x01EF, 0xFFD7, 0x280B, 0x0004, 0x0129, 0x005F, 0x013A, 0x0031, 0x0801, 0x0001, 0x2005, 0x0001, 0x0115, 0x0011, 0x2805, 0x0003, 0x01CD, 0x004F, 0x0801, 0x0002, 0x4701, 0x002D, 0x0E66, 0x0E66, 0x0E66, 0x200B, 0x0001, 0x01BD, 0x021E, 0x0196, 0x01CC, 0x200F, 0x0001, 0x0567, 0x0282, 0x01F9, 0xFEEB, 0x04D3, 0x0220, 0x200F, 0x0001, 0x06C1, 0x00B8, 0xFFA3, 0xFE22, 0x05D8, 0x00A2, 0x200F, 0x0001, 0x06D8, 0xFF9D, 0xFE3D, 0xFEB8, 0x0618, 0x009B, 0x2805, 0x0007, 0xF8C6, 0xFFD9, 0x200B, 0x0001, 0x05FA, 0x0042, 0x070F, 0xFFD1, 0x200B, 0x0001, 0x075E, 0x00A8, 0x05B9, 0xFF5B, 0x200B, 0x0001, 0x074B, 0xFFEE, 0x05C4, 0x0004, 0x2803, 0x0015, 0x0618, 0xFFFC, 0x2809, 0x0016, 0x071D, 0x0018, 0x0801, 0x0004, 0x2005, 0x0001, 0xF8AA, 0xFFEC, 0x2805, 0x0018, 0xF99F, 0xFFEA, 0x0801, 0x0010, 0x2003, 0x0001, 0x0616, 0x0002, 0x2803, 0x000F, 0x0789, 0x0002, 0x2009, 0x0001, 0x0734, 0x0015, 0x2809, 0x000E, 0x07A5, 0x0000, 0x0801, 0x0006, 0x2005, 0x0001, 0xF987, 0xFFE8, 0x2005, 0x0007, 0xF91B, 0xFFFE, 0x200F, 0x0001, 0x078A, 0x0000, 0xF91A, 0xFFFF, 0x07A5, 0x0000, 0x0000,
};
