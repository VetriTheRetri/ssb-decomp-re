/* AnimJoint data for relocData file 1441 (FTKirbyAnimEggThrowAir) */
/* 3408 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimEggThrowAir_joint1[64];
extern u16 dFTKirbyAnimEggThrowAir_joint2[22];
extern u16 dFTKirbyAnimEggThrowAir_joint3[76];
extern u16 dFTKirbyAnimEggThrowAir_joint4[52];
extern u16 dFTKirbyAnimEggThrowAir_joint6[72];
extern u16 dFTKirbyAnimEggThrowAir_joint7[208];
extern u16 dFTKirbyAnimEggThrowAir_joint8[20];
extern u16 dFTKirbyAnimEggThrowAir_joint10[72];
extern u16 dFTKirbyAnimEggThrowAir_joint11[214];
extern u16 dFTKirbyAnimEggThrowAir_joint12[14];
extern u16 dFTKirbyAnimEggThrowAir_joint13[10];
extern u16 dFTKirbyAnimEggThrowAir_joint14[42];
extern u16 dFTKirbyAnimEggThrowAir_joint16[60];
extern u16 dFTKirbyAnimEggThrowAir_joint17[148];
extern u16 dFTKirbyAnimEggThrowAir_joint19[14];
extern u16 dFTKirbyAnimEggThrowAir_joint21[186];
extern u16 dFTKirbyAnimEggThrowAir_joint22[148];
extern u16 dFTKirbyAnimEggThrowAir_joint24[14];
extern u16 dFTKirbyAnimEggThrowAir_joint25[182];
extern u16 dFTKirbyAnimEggThrowAir_joint26[34];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTKirbyAnimEggThrowAir_joints[] = {
	(u32)dFTKirbyAnimEggThrowAir_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimEggThrowAir_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimEggThrowAir_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimEggThrowAir_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimEggThrowAir_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTKirbyAnimEggThrowAir_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimEggThrowAir_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimEggThrowAir_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimEggThrowAir_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimEggThrowAir_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimEggThrowAir_joint13, /* [12] joint 13 */
	(u32)dFTKirbyAnimEggThrowAir_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimEggThrowAir_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimEggThrowAir_joint17, /* [16] joint 17 */
	(u32)dFTKirbyAnimEggThrowAir_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimEggThrowAir_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTKirbyAnimEggThrowAir_joint22, /* [21] joint 22 */
	(u32)dFTKirbyAnimEggThrowAir_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTKirbyAnimEggThrowAir_joint25, /* [24] joint 25 */
	(u32)dFTKirbyAnimEggThrowAir_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTKirbyAnimEggThrowAir_joint1[64] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 600, 0,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 600, 0,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 600, -119, 0, 239,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 3891, 4915, 3891,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 480, 240, 4505, 3276, 4505,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 600, 240, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 600, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), -240, -768,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), -240, 240,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimEggThrowAir_joint2[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 0, 26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 23), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), -268,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimEggThrowAir_joint3[76] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 268, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 312, 0,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 23), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 402,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 268, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 0, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -178, -126,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 0, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 44,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 58, 4096, -234, 4096, 117,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 0, 4300, 3276, 4505,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 89, 33, 4096, -51, 4096, 204, 4096, -102,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 268, 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTKirbyAnimEggThrowAir_joint4[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 28, 304, 1925, 122, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 16), 0, 28, 304, 1925, 122, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), -26, 0, 300, 4915, 4915, 3072,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), -26, 0, 300, 4915, 4915, 3072,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 0, 28, 304, 1925, 122, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 0, 28, 304, 1925, 122, 4096,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimEggThrowAir_joint6[72] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 178, -120, -120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -178, -178,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 6), -120, 48, -60, 96,
	ftAnimSetValRateT(FT_ANIM_TRAX, 4), -60, 59,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 89, 44, 89, 44, -60, -59, -60, -119,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 4), -120, -53, -120, -53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 178, 178,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 178, 178,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), -120, -120,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 15), -120, -120,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -178, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 178,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimEggThrowAir_joint7[208] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2644, 33, -609, 0, -1891, -37,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1833, 209,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -555, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 2816, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2736, -262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2291, -687, -1553, 394,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1360, -592, -483, 105, -1043, 396,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1046, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -359, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -761, 205,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -403, 282,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 988, -181,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 458, 309,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -439, -82, -67, 258,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -665, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 53, -330,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1037, 539, -546, -512,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1292, -329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1537, 336, -466, 121,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -486, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1710, 142,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1802, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1631, -196,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1702, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -492, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -544, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1678, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1639, -57,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1787, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1846, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1870, -184, -545, 85, -1678, 94,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1009, -235, -1190, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -373, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -336, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -612, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1008, 54, -1153, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1620, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1712, 354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2068, 322,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2570, 143,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1817, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2644, 73, -609, 2, -1891, -74,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTKirbyAnimEggThrowAir_joint8[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 36), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimEggThrowAir_joint10[72] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, -178, 120, -120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 178, 178,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 6), 120, -48, -60, 96,
	ftAnimSetValRateT(FT_ANIM_TRAX, 4), 60, -59,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 4), -89, -44, -89, -44, 60, 59, -60, -119,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 120, 53, -120, -53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -178, -178,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -178, -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 120, -120,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 15), 120, -120,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 178, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, -178,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimEggThrowAir_joint11[214] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2644, -27, 609, -4, -1891, -31,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1837, 203,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 558, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -2813, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2739, 252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2308, 682, -1560, 392,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1375, 599, 492, -104, -1053, 398,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1045, 60, 298, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -763, 210,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -402, 281,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -987, 180, 357, 69,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -453, -311, 617, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -68, 260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 58, -332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1037, -544, 665, -75, -547, -518,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1292, -326,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1541, -336, 467, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1710, -140, 421, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 504, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1803, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1631, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1697, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1683, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1571, -48,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 510, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 543, -84,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1852, -36, -1646, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1875, 186, -1685, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1478, 432, 374, -101, -1450, 246,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 404, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1010, 235, -1192, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1008, -54, -1153, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1710, -353,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1616, -195,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 447, 51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 601, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2066, -321,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2563, -147,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1809, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2648, -84, 612, 11, -1895, -85,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTKirbyAnimEggThrowAir_joint12[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 37), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTKirbyAnimEggThrowAir_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 38),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimEggThrowAir_joint14[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_SCAZ), 0, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY), 0, 0, 0, 60, 0, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 17), 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 14), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 4), 0,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 6), 20480,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAZ, 5), 0, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAZ, 10), 0, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTKirbyAnimEggThrowAir_joint16[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAZ), 268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 312,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 14), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 402,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 268, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 0, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -178, -89,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 4), 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -277, 17,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 10), 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -232, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -277,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 2), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 8), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 89, 33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTKirbyAnimEggThrowAir_joint17[148] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 295, 10, -302, -6, 237, -5,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -432, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), 192, -72, -340, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 124, -42, -337, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 204, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -442, 37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -497, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 187, -182, -412, 358,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -160, -77, -330, 108, 219, 533,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -211, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 32, 100, 655, 248,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 42, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 715, 48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 681, -22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 40, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 120, 56,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -215, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -293, -51,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 659, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 430, -329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -329, -13, 0, -253,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -68, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -311, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 171, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 303, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -29, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 219, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 295, -8, -302, 8, 237, 17,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimEggThrowAir_joint19[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 37), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTKirbyAnimEggThrowAir_joint21[186] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -322, -1, -158, -7, -2864, 2,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 58, 4096, 58, 4096, 58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -2734, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -276, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -403, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -472, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -344, 51,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2769, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2878, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -293, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -468, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -319, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -397, 131,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 16), 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -465, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -124, 113, -11, 205, -3030, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -171, -27, -53, -16, -2911, 71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -61, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -179, -5, -2886, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -118, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -2902, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, 6, -2906, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 45, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2985, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2834, 101,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, -102, 4096, -102, 4096, -102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2850, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -135, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -326, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 30, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -155, -10,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 3686, 3686, 3686,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2859, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -322, 4, -158, -2, -2864, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTKirbyAnimEggThrowAir_joint22[148] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -297, -4, 300, 2, 233, -5,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -432, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), -195, 73, 339, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -124, 44, 337, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -204, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 442, -37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -497, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -187, 182, -412, 358,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, 78, 330, -108, 219, 535,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 215, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -30, -100, 659, 246,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -42, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 712, 46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 678, -24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -41, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -120, -57,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 219, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 293, 52,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 655, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 430, -327,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, 12, 0, -255,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -72, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 297, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -173, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -289, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -33, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 216, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -297, -7, 300, 3, 233, 17,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTKirbyAnimEggThrowAir_joint24[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 37), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTKirbyAnimEggThrowAir_joint25[182] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1930, -2, 1450, -5, 1957, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 58, 4096, 58, 4096, 58,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 1331, -11, 2052, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 2019, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2084, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1952, -51,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1314, -25, 2002, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1139, -68,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1947, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1927, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2006, -131,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 16), 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1143, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1733, -113, 1597, 205, 1795, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1780, 27, 1554, -16, 1917, 69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1547, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1787, 5, 1935, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1726, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1919, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1546, 6, 1915, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1654, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1840, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1990, 100,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, -102, 4096, -102, 4096, -102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1961, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1743, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1920, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1639, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1459, -17,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 3686, 3686, 3686,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1956, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1930, 10, 1450, -9, 1957, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTKirbyAnimEggThrowAir_joint26[34] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 1608, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 16), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 60,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 23), 60,
	ftAnimBlock(0, 6),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 7), 2040,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 6), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 9), 0,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 0,
	ftAnimEnd(),
};
