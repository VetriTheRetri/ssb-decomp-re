/* AnimJoint data for relocData file 1411 (FTKirbyAnimLaserAir) */
/* 2752 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimLaserAir_joint1[30];
extern u16 dFTKirbyAnimLaserAir_joint2[26];
extern u16 dFTKirbyAnimLaserAir_joint3[116];
extern u16 dFTKirbyAnimLaserAir_joint5[46];
extern u16 dFTKirbyAnimLaserAir_joint6[126];
extern u16 dFTKirbyAnimLaserAir_joint7[14];
extern u16 dFTKirbyAnimLaserAir_joint9[156];
extern u16 dFTKirbyAnimLaserAir_joint10[214];
extern u16 dFTKirbyAnimLaserAir_joint11[16];
extern u16 dFTKirbyAnimLaserAir_joint13[28];
extern u16 dFTKirbyAnimLaserAir_joint14[120];
extern u16 dFTKirbyAnimLaserAir_joint16[14];
extern u16 dFTKirbyAnimLaserAir_joint18[148];
extern u16 dFTKirbyAnimLaserAir_joint19[114];
extern u16 dFTKirbyAnimLaserAir_joint21[24];
extern u16 dFTKirbyAnimLaserAir_joint22[140];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimLaserAir_joints[] = {
	(u32)dFTKirbyAnimLaserAir_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimLaserAir_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimLaserAir_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimLaserAir_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimLaserAir_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimLaserAir_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimLaserAir_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimLaserAir_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimLaserAir_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimLaserAir_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimLaserAir_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimLaserAir_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimLaserAir_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimLaserAir_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimLaserAir_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTKirbyAnimLaserAir_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimLaserAir_joint1[30] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 600, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 14), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), -480, -959,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), -480, 960,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 0, 142,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 25), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimLaserAir_joint2[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), 0, 19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 0, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 25), -268,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimLaserAir_joint3[116] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 268, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 312, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -89, -25,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 3891, 4505, 3891,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4096, 45, 4096, -182, 4096, 91,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -89, -22,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 3686, 4300,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 273, 4096, 546, 4096, -819,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -178, -22,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4505, 4505, 3072,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, -136, 4096, -136, 4096, 318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -178, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -89, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -89, 14,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 3891, 3891, 4505,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 81, 4096, 81, 4096, -122,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 15), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4300, 4300, 3891,
	ftAnimSetValRateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, -175, 4096, 117,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 5), 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4300, 3686, 4300,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimLaserAir_joint5[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 178, -120, -120, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 12), 178, 12, 60, 34,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 2), 178, 60,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 6), 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 178, -6,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 25), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 60, -24,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 15), 0, -24,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimLaserAir_joint6[126] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -568, 1, -612, -4, 1321, -5,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -378, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 1592, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -900, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -988, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1284, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1357, 0, -351, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1217, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), -585, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1607, 57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1728, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1252, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1327, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1647, -67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1758, 33,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1325, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -831, 67,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1791, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1583, -64,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -601, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -603, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -767, 50, 1520, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -598, 44, 1349, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -568, 30, -612, -9, 1321, -28,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimLaserAir_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 44), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimLaserAir_joint9[156] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -178, 120, -120, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), -670, -50, 0, 55, -402, -27, 90, -119, 90, -59,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -402, 111, 446, 104, -402, 81, 0, -90, -120, 120, -60, -210,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 0, 189, 89, 234,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 4), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 160, -120, -80,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 625,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 357, 89, 446, -44, 536, 111,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 13), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 357, 446, 536, 0, -120,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 4), 446,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 357, 536, 0, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 357, -223, 536, -234, 0, -240, -120, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -536, -140, 446, -38, -402, -153, -120, -137, -60, 171,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ, 5), -625, 21, 178, -17, -536, 8, 30, 48,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), -120,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 0, -178,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 24, -120, 96, 0, -24,
	ftAnimSetValRateT(FT_ANIM_TRAX, 5), 30, 95,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 10), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 120, 71, -120, -95,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 120, -120,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimLaserAir_joint10[214] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2644, 75, 609, 2, -1891, 4,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 346, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2307, 342, -1805, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1884, 335, -1598, 180,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1592, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1400, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1331, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1386, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 379, 9, -1650, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 445, 91, -1519, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 547, 64, -1391, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1462, 129,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 634, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1610, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1610, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1394, 198, -1273, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1214, 30, -1130, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1333, -10, 670, 8, -1254, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1234, 247, 651, -76, -1138, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -838, -98, 518, -39, -838, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1431, -347, 572, 9, -1454, -378,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1533, -47, 537, -24, -1595, -84,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -457, 140,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 544, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1490, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1437, 77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -944, 29,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -343, 81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -404, -88,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 511, -30, -929, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 540, 12, -1707, -68,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -517, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1689, -272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1922, -243,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2582, -110,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 565, 27, -1779, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 595, 21, -1853, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2644, -62, 609, 13, -1891, -38,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimLaserAir_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 44), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimLaserAir_joint13[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 804, -178, 204, -120, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 20), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 0, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -1608, -321,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -3216, -107,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), -3216,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTKirbyAnimLaserAir_joint14[120] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 295, -13, -302, -2, 237, 3,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -295, 0, -404, 0, 474, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -287, 58, -404, -35, 470, -75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -477, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -179, 193, 323, -235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 99, 179, 0, -207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 99, -180, 0, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -180, -195, 322, 237,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -245, 16, 465, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -402, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -375, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -230, 17, 464, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 343, 40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 234, 6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -374, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -345, 31,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 382, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 315, -30,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -316, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 295, -20, -302, 13, 237, 3,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimLaserAir_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 44), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimLaserAir_joint18[148] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -322, 4, -158, 9, -2864, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 53, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -92, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -2571, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2522, 40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2489, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 46, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 46, -24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -103, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -301, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2709, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2755, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -148, 99, -2669, 134,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -117, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2486, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 47, 4, -2485, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2759, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -279, -62,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -128, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -393, -21,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2753, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -2711, 7,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -340, -56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -373, 89,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -411, -2, -2711, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -333, 15, -2863, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -273, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -191, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -322, 11, -158, 32, -2864, 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimLaserAir_joint19[114] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -297, 11, 300, 0, 233, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 13), -3,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 17), 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 28, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 33, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -20, 46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -345, -101,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -378,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 77, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 155, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 303, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 33, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -208, -52,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 178, 97,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 252, -11,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 304, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 350, -35,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -256, -50, 246, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -318, 31, 231, 4,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 316, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -297, 21, 300, -15, 233, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTKirbyAnimLaserAir_joint21[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTKirbyAnimLaserAir_joint22[140] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1286, -7, -1766, 7, -1259, 5,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1034, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1614, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -1632, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1650, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1728, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1008, 64,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1601, -906,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1644, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1008, -76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1043, -45,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1717, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1818, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1614, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1294, 35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1098, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1171, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1170, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1131, -59,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1877, -58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1983, 88,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1258, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1273, -16,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1203, -57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1259, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1883, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1800, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1286, -12, -1766, 33, -1259, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
