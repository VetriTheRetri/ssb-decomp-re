/* AnimJoint data for relocData file 1952 (FTYoshiAnimEggLayAirGrabIn) */
/* 3952 bytes: 112-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimEggLayAirGrabIn_joint1[32];
extern u16 dFTYoshiAnimEggLayAirGrabIn_joint2[130];
extern u16 dFTYoshiAnimEggLayAirGrabIn_joint3[168];
extern u16 dFTYoshiAnimEggLayAirGrabIn_joint4[138];
extern u16 dFTYoshiAnimEggLayAirGrabIn_joint5[68];
extern u16 dFTYoshiAnimEggLayAirGrabIn_joint7[104];
extern u16 dFTYoshiAnimEggLayAirGrabIn_joint8[194];
extern u16 dFTYoshiAnimEggLayAirGrabIn_joint9[78];
extern u16 dFTYoshiAnimEggLayAirGrabIn_joint11[10];
extern u16 dFTYoshiAnimEggLayAirGrabIn_joint12[168];
extern u16 dFTYoshiAnimEggLayAirGrabIn_joint13[68];
extern u16 dFTYoshiAnimEggLayAirGrabIn_joint14[20];
extern u16 dFTYoshiAnimEggLayAirGrabIn_joint15[12];
extern u16 dFTYoshiAnimEggLayAirGrabIn_joint16[58];
extern u16 dFTYoshiAnimEggLayAirGrabIn_joint18[42];
extern u16 dFTYoshiAnimEggLayAirGrabIn_joint19[150];
extern u16 dFTYoshiAnimEggLayAirGrabIn_joint21[48];
extern u16 dFTYoshiAnimEggLayAirGrabIn_joint23[108];
extern u16 dFTYoshiAnimEggLayAirGrabIn_joint24[142];
extern u16 dFTYoshiAnimEggLayAirGrabIn_joint26[48];
extern u16 dFTYoshiAnimEggLayAirGrabIn_joint27[106];
extern u16 dFTYoshiAnimEggLayAirGrabIn_joint28[28];

/* Joint pointer table (28 entries, 112 bytes) */
u32 dFTYoshiAnimEggLayAirGrabIn_joints[] = {
	(u32)dFTYoshiAnimEggLayAirGrabIn_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimEggLayAirGrabIn_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimEggLayAirGrabIn_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimEggLayAirGrabIn_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimEggLayAirGrabIn_joint5, /* [4] joint 5 */
	(u32)dFTYoshiAnimEggLayAirGrabIn_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTYoshiAnimEggLayAirGrabIn_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimEggLayAirGrabIn_joint9, /* [8] joint 9 */
	(u32)dFTYoshiAnimEggLayAirGrabIn_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTYoshiAnimEggLayAirGrabIn_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimEggLayAirGrabIn_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimEggLayAirGrabIn_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimEggLayAirGrabIn_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimEggLayAirGrabIn_joint16, /* [15] joint 16 */
	(u32)dFTYoshiAnimEggLayAirGrabIn_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTYoshiAnimEggLayAirGrabIn_joint19, /* [18] joint 19 */
	(u32)dFTYoshiAnimEggLayAirGrabIn_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTYoshiAnimEggLayAirGrabIn_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTYoshiAnimEggLayAirGrabIn_joint24, /* [23] joint 24 */
	(u32)dFTYoshiAnimEggLayAirGrabIn_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	(u32)dFTYoshiAnimEggLayAirGrabIn_joint27, /* [26] joint 27 */
	(u32)dFTYoshiAnimEggLayAirGrabIn_joint28, /* [27] joint 28 */
};

/* Joint 1 */
u16 dFTYoshiAnimEggLayAirGrabIn_joint1[32] = {
	ftAnimSetValBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 525, 145,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 525, 145,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 5,
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimBlock(0, 5),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 33, -58,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 608, 22, 0, -38,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 608, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimEggLayAirGrabIn_joint2[130] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), -8, 0, 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 39, -2, 25, -5,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -7, -9,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 14), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 27), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 31), 0, 0, 30, 39, 20, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetValT(FT_ANIM_ROTX, 10), -149,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 0, -3,
	ftAnimBlock(0, 9),
	ftAnimSetValRateT(FT_ANIM_SCAY, 3), 4096, 585,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 6), 8192, 1023, 8192, 1023,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 0, 81,
	ftAnimSetVal0RateT(FT_ANIM_SCAY, 4), 6144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 258, 13,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 2), 8192, -819, 8192, -819,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 139, -23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_SCAY, 3), 4096, -455,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 8), 4096, 4096,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAY, 6), 4096,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 4), -89,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 0, -129, 0, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), 1, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 4), -893, 0, 0, 0, 214,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimEggLayAirGrabIn_joint3[168] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 16, -3, 67, -14, 75, 20,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 35), 0, -1, 0, -14, 172, 46,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 21,
	ftAnimSetValAfter(FT_ANIM_SCAY), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 607, 1, 0, 0, 0, 0,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 7), 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 615, 1, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 612, -1, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 607, -283, 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -237, -40,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -237, 10,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 7), 8192, 910, 8192, 910,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAZ, 2), 10, 17, -1, -2, 289, 581, 8192, -1843, 8192, -2048,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 4), 2662, -1843, 2048, -2047,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 6, -23, -1, 105, 390, -98,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -1, -10, 51, 1, 240, -204,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), 212, -48,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAZ, 2), 0, 1, 0, -48, 2662, 286, 2048, 409,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 8), 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 0, 27,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, 12, 0, 28, 172, -99,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 16, 155,
	ftAnimBlock(0, 4),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 5), 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1161, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 16, 67, 75,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTYoshiAnimEggLayAirGrabIn_joint4[138] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_SCAY), 0, 4096,
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1014, -3, -5, 7, 833, 32, 441, -30,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -10, -6, 864, 85, 465, 29,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 7), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 26), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1033, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1060, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -1084, 2, -7, 20, 865, -205, 452, -118,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -2, 2, 787, -75, 420, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1055, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1014, 479,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 26), 0, 0, 600, -49, 329, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 383, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAZ, 7), 161, -56, 2048, -455, 2048, -455,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -123, 18,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 2), 2048, 2048,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 383, 13,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 1), 2048, 1024, 2048, 1024,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 3), 4096, 819, 4096, 819,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 2), 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 13), 4096, 4096,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 78, 19, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 562, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 600, 329,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTYoshiAnimEggLayAirGrabIn_joint5[68] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 48, 120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 893, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 619, -111,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 5,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), -337, -95, 5939, 368, 10186, 1218, 8556, 892,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 9), -337, 5939, 10186, 8556,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -368, -1218, -892,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 0, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 19), 4096, 4096, 4096,
	ftAnimBlock(0, 15),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimEggLayAirGrabIn_joint7[104] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAZ), 20480,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 415, 2, 0, 0, 0, 0, 0, 0, 65, 46, 5, 27,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 5), 4096,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 105, 126, 29, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 426, 17, 0, 0, 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 449, 20, -1, 0, -2, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 467, 5, -2, 0, -3, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 461, -26, -2, 1, -2, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 414, -153, 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, -19, 0, 0, 175, 26, 72, 16,
	ftAnimSetValT(FT_ANIM_SCAZ, 30), 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), 0, 0, 175, 72,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 0, 0, 175, 72,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTYoshiAnimEggLayAirGrabIn_joint8[194] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1367, -107, 240, -54, 1977, -67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1582, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 155, 6, 1803, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 167, 692, 1791, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1700, -34, 1541, 703, 1550, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1647, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1574, 12, 1786, 141,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1920, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1396, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1641, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1372, 90,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1955, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 2130, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1273, 45, 1388, -8, 2186, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1424, 69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1575, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1812, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1734, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1307, 54, 1953, 120,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1357, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1975, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2150, 150,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1616, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1419, -205, 1682, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1767, -696, 1396, 225, 2332, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2811, -953, 2132, 237, 2191, 433,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3675, -398, 1870, -149, 3198, 470,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1810, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3609, 46, 3132, -52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3688, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3092, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 3010, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1805, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1791, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4027, -311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4310, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4379, -68, 1788, -3, 2992, -17,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTYoshiAnimEggLayAirGrabIn_joint9[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -646, -39,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -863, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -941, 335,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -192, 470,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -523, -273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -555, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -936, -324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1336, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1168, 668,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 580,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -8,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTYoshiAnimEggLayAirGrabIn_joint11[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -625,
	_FT_ANIM_CMD(11, 0, 1), 23,
	ftAnimBlock(0, 35),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTYoshiAnimEggLayAirGrabIn_joint12[168] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -365, -417, 456, 108, 2868, -323,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 603, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1209, -16, 2212, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1134, 315, 2303, 325,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -60, 272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 645, -278, 2864, 487,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 47, -305, 3279, 342,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 3654, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -33, 13, 34, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -360, -97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -57, 63,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3685, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 3819, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -470, -46, 3869, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -329, -73, 3525, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -428, -39, 51, 59, 3654, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -372, 18, 77, 45, 3695, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -369, -639, 151, -50, 3744, -262,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -137, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1651, -770, 3169, -225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1911, -107, 3293, 345,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1866, 362, 332, 182, 3860, 752,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1187, 355, 228, -76, 4798, 476,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1154, 23, 179, -31, 4812, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 192, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1140, 83, 4791, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -490, 101, 4636, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -462, 28, 187, -5, 4597, -38,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimEggLayAirGrabIn_joint13[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -919, -37,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1076, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1109, 538,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 554,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 13), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -364, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -387, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -818, -293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1144, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1051, 572,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 525,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -8, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimEggLayAirGrabIn_joint14[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 172, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), -625,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 54), 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTZ, 1), 23,
	ftAnimBlock(0, 31),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), -625,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTYoshiAnimEggLayAirGrabIn_joint15[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -536, -893, 0, 0, 156, 0,
	_FT_ANIM_CMD(11, 0, 1), 23,
	ftAnimBlock(0, 35),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTYoshiAnimEggLayAirGrabIn_joint16[58] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 536, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 260, -9,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 23,
	ftAnimSetVal(FT_ANIM_SCAX | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValAfter(FT_ANIM_SCAY), 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 15), 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 223, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -373, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 278, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 7), 2662, 2662,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -190, 19,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 8), 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 5), 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 536, 20,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimEggLayAirGrabIn_joint18[42] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 89, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 27), 303, -6, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 23,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -150, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 286, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -153, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 89, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTYoshiAnimEggLayAirGrabIn_joint19[150] = {
	ftAnimSetValAfter(FT_ANIM_SCAY), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1792, 2, 1633, 1, 1003, -14,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 1693, -3, 1097, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 1703, -24,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 14), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 6), 2662, -358, 2662, -358,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1681, -28, 1116, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1660, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 531, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1675, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1410, 43,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1707, 18,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 2), 2662, 286, 2662, 286,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1611, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 565, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 881, -36,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 8), 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1464, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1877, 48,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1617, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1616, 117,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 830, -45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 966, 273,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 5), 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1911, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1673, -66,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1748, 79, 1340, 376,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1775, 5, 1720, 269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1647, -25, 1759, -15, 1879, 159,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTYoshiAnimEggLayAirGrabIn_joint21[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1027, 13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 869, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 830, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1073, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1048, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 689, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 726, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1133, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 983, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 779, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 687, -91,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTYoshiAnimEggLayAirGrabIn_joint23[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1792, -6, -18, 3, -621, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 76, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -1615, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -448, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -429, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -395, 42,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 84, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 242, -32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1580, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1756, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -356, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -354, 14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 202, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -106, -83,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -340, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -381, 81,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1785, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1798, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -180, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 154, 42,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1633, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1438, 195, 164, 9, -318, 63,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTYoshiAnimEggLayAirGrabIn_joint24[142] = {
	ftAnimSetValAfter(FT_ANIM_SCAY), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1421, -2, -1642, -1, 1015, -13,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -1705, 1, 1120, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 1539, 37,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 14), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 6), 2662, -358, 2662, -358,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1696, 25, 1139, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1677, -50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 552, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1589, 61,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1795, -44,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1726, -20,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 2), 2662, 286, 2662, 286,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1608, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 584, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 793, -99,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 8), 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1740, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1483, 48,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1612, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1556, -102,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 686, -85,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 5), 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 826, 338,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1680, -96, 1299, 448,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1549, 45, -1750, -39, 1724, 297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1574, 24, -1759, -9, 1894, 169,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTYoshiAnimEggLayAirGrabIn_joint26[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1008, 13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 855, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 815, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1054, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1014, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 770, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 900, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1091, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 955, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 752, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 670, -82,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTYoshiAnimEggLayAirGrabIn_joint27[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 192, 5, -1623, 2, -2234, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1540, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 14, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -2069, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2050, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2042, 37,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1530, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1364, -39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -19, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 130, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2007, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1938, 15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1412, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1518, 58,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 168, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 71, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1923, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1981, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1468, 36, -2030, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -34, -114, -1444, 10, -1975, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -156, -122, -1447, -2, -1929, 46,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTYoshiAnimEggLayAirGrabIn_joint28[28] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 23, -10, 3180, -114,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 1608, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 1073,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 0, 0, 1073,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
