/* AnimJoint data for relocData file 1439 (FTKirbyAnimEggLayGround) */
/* 3216 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimEggLayGround_joint1[74];
extern u16 dFTKirbyAnimEggLayGround_joint2[18];
extern u16 dFTKirbyAnimEggLayGround_joint3[76];
extern u16 dFTKirbyAnimEggLayGround_joint4[52];
extern u16 dFTKirbyAnimEggLayGround_joint6[110];
extern u16 dFTKirbyAnimEggLayGround_joint7[216];
extern u16 dFTKirbyAnimEggLayGround_joint8[14];
extern u16 dFTKirbyAnimEggLayGround_joint10[110];
extern u16 dFTKirbyAnimEggLayGround_joint11[218];
extern u16 dFTKirbyAnimEggLayGround_joint12[20];
extern u16 dFTKirbyAnimEggLayGround_joint13[10];
extern u16 dFTKirbyAnimEggLayGround_joint14[42];
extern u16 dFTKirbyAnimEggLayGround_joint16[58];
extern u16 dFTKirbyAnimEggLayGround_joint17[108];
extern u16 dFTKirbyAnimEggLayGround_joint19[8];
extern u16 dFTKirbyAnimEggLayGround_joint21[118];
extern u16 dFTKirbyAnimEggLayGround_joint22[128];
extern u16 dFTKirbyAnimEggLayGround_joint24[38];
extern u16 dFTKirbyAnimEggLayGround_joint25[138];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTKirbyAnimEggLayGround_joints[] = {
	(u32)dFTKirbyAnimEggLayGround_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimEggLayGround_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimEggLayGround_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimEggLayGround_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimEggLayGround_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTKirbyAnimEggLayGround_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimEggLayGround_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimEggLayGround_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimEggLayGround_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimEggLayGround_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimEggLayGround_joint13, /* [12] joint 13 */
	(u32)dFTKirbyAnimEggLayGround_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimEggLayGround_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimEggLayGround_joint17, /* [16] joint 17 */
	(u32)dFTKirbyAnimEggLayGround_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimEggLayGround_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTKirbyAnimEggLayGround_joint22, /* [21] joint 22 */
	(u32)dFTKirbyAnimEggLayGround_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTKirbyAnimEggLayGround_joint25, /* [24] joint 25 */
	0xFFFF0319, /* [25] END */
};

/* Joint 1 */
u16 dFTKirbyAnimEggLayGround_joint1[74] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 600, 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 540, 48, 0, -192,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4505, 3276, 4505,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 660, 419,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), -240, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), -60, 479,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 960, 3891, 4915, 3891,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 480, 240, 4505, 3276, 4505,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 600, 240, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 600, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), -240, -768,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), -240, 240,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimEggLayGround_joint2[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 27), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), -268,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimEggLayGround_joint3[76] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 312, 0,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 23), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 0, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -178, -126,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 0, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 44,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 58, 4096, -234, 4096, 117,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 0, 4300, 3276, 4505,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, -51, 4096, 204, 4096, -102,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 0, 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTKirbyAnimEggLayGround_joint4[52] = {
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
u16 dFTKirbyAnimEggLayGround_joint6[110] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAX, 6), -90, -72,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 30), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 6), -178, -178, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 4), -90, 29, 0, -59,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -178, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 89, 44, 89, 44, -60, -29, -60, -119,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 4), -120, -53, -120, -53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 178, 178,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 178, 178,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), -120, -120,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), -120, 34, -120, 68,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 0, -51, -90, 48, -60, 192,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), -178,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 5), -178,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -89, 22,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -90, 48, 0, 96, 0, 48,
	ftAnimSetValRateT(FT_ANIM_TRAX, 2), -60, 143,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimEggLayGround_joint7[216] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 9, -220, -14, 0, -21,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1090, 100,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -491, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -311, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -507, -162,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -662, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1164, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1051, -42,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 27), 3072,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -430, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -445, -75,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -637, 127,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 58, -327,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 992, -187,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 453, 305,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -528, -86,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -665, 74,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1025, 543, -537, -518,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1291, -328,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1539, 340, -469, 121,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -484, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1707, 142,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1797, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1635, -197,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1692, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -493, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -543, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1680, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1638, -60,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1782, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1747, -222,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -543, 83, -1684, 90,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -328, 12, -1181, 225,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1430, -197,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1262, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -351, -37, -1004, 193,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -402, 90,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -47, 80,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1110, -164,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 736, 56,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 4096,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -278, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 67, -217, 60, 0, 47,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTKirbyAnimEggLayGround_joint8[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 37), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimEggLayGround_joint10[110] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAX, 6), 90, 72,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 30), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 6), 178, 178, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 90, -29, 0, -59,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 178, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 4), -89, -44, -89, -44, 60, 29, -60, -119,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 120, 53, -120, -53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -178, -178,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -178, -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 120, -120,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 120, -34, -120, 68,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 0, 51, 90, -48, -60, 192,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 178,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 5), 178,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 89, -22,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 90, -48, 0, 96, 0, 48,
	ftAnimSetValRateT(FT_ANIM_TRAX, 2), 60, -143,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimEggLayGround_joint11[218] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -9, 1391, -22, 1608, -21,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 517, -100,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1113, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1296, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1100, -162,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 943, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 443, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 555, 43,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 27), 3072,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1178, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1162, -75,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 968, 128,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1667, -328,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 616, 188,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1155, -305,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1079, -86,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 942, 74,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 582, -543, 1070, -519,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 313, -328,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 68, -342, 1138, 121,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1122, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -102, -142,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -194, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -27, -193,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -84, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1114, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1066, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -72, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 38, -48,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -178, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -142, 222,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -35, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1064, 83, -76, 91,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1280, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 147, 251,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1561, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 177, 198,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 346, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1255, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1235, 84,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 498, 163,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 871, -58,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 4096,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1339, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, -67, 1391, 51, 1608, 47,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTKirbyAnimEggLayGround_joint12[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 36), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimEggLayGround_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 38),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimEggLayGround_joint14[42] = {
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
u16 dFTKirbyAnimEggLayGround_joint16[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 312,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 14), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 268,
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
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTKirbyAnimEggLayGround_joint17[108] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, -2, -302, 3, 237, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 92, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -239, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 101, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 28, -52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 363, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 114, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -99, -44,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -230, 2,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 13), -249,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -127, -13, 398, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), -102, 1, 402, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -101, 33, -249, -24, 402, -72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 158, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -311, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -4, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -56, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 221, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 145, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -15, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, -8, -302, 9, 237, 15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimEggLayGround_joint19[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 38),
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTKirbyAnimEggLayGround_joint21[118] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1918, 1, 1785, -3, -1704, 1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1449, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -1950, -5, 1767, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1946, 12, 1763, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -1876, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 1786, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1416, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1581, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1694, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1776, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1777, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1716, 120,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1876, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1978, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1536, 112,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1606, -42,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1970, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1927, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1788, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1787, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1650, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1688, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1918, 8, 1785, -1, -1704, -15,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimEggLayGround_joint22[128] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, 0, 302, 0, 237, -3,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 312, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -38, -51, 101, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -92, -37, 28, -52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 363, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 124, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 300, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 250, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 398, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 398, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 121, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 99, -23,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 250, 25, 398, -53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 340, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -104, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 54, -85,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -129, 35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 263, -62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 290, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -94, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 247, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -90, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 23, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 238, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, -2, 302, 11, 233, -5,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTKirbyAnimEggLayGround_joint24[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 312, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 409, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 225, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 7, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTKirbyAnimEggLayGround_joint25[138] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 0, 176, -2, -96, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 158, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 342, 5, 158, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 337, -12, 154, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 18), 267, 3, 189, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 192, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 27, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -85, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -171, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -172, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -119, 113,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 274, 19, 183, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 328, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 303, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 54, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -141, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -183, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -94, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 282, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 192, -27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -100, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 309, 6, 176, -15, -99, 0,
	ftAnimEnd(),
	0x4080, 0x0000, 0x486E, 0x0000, 0x0648, 0x0000, 0x0000, 0x003C, 0x3881, 0x0010, 0x0000, 0x3881, 0x0007, 0x07F8, 0x3881, 0x0006, 0x0000, 0x3881, 0x0009, 0x0000, 0x0000, 0x0000,
};
