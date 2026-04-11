/* AnimJoint data for relocData file 1427 (FTKirbyAnimInhaleSpit) */
/* 2304 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimInhaleSpit_joint1[24];
extern u16 dFTKirbyAnimInhaleSpit_joint2[58];
extern u16 dFTKirbyAnimInhaleSpit_joint3[20];
extern u16 dFTKirbyAnimInhaleSpit_joint4[54];
extern u16 dFTKirbyAnimInhaleSpit_joint5[50];
extern u16 dFTKirbyAnimInhaleSpit_joint7[60];
extern u16 dFTKirbyAnimInhaleSpit_joint8[166];
extern u16 dFTKirbyAnimInhaleSpit_joint9[16];
extern u16 dFTKirbyAnimInhaleSpit_joint11[60];
extern u16 dFTKirbyAnimInhaleSpit_joint12[166];
extern u16 dFTKirbyAnimInhaleSpit_joint13[16];
extern u16 dFTKirbyAnimInhaleSpit_joint14[10];
extern u16 dFTKirbyAnimInhaleSpit_joint16[76];
extern u16 dFTKirbyAnimInhaleSpit_joint17[62];
extern u16 dFTKirbyAnimInhaleSpit_joint19[16];
extern u16 dFTKirbyAnimInhaleSpit_joint21[84];
extern u16 dFTKirbyAnimInhaleSpit_joint22[62];
extern u16 dFTKirbyAnimInhaleSpit_joint24[14];
extern u16 dFTKirbyAnimInhaleSpit_joint25[86];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTKirbyAnimInhaleSpit_joints[] = {
	(u32)dFTKirbyAnimInhaleSpit_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimInhaleSpit_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimInhaleSpit_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimInhaleSpit_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimInhaleSpit_joint5, /* [4] joint 5 */
	(u32)dFTKirbyAnimInhaleSpit_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTKirbyAnimInhaleSpit_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimInhaleSpit_joint9, /* [8] joint 9 */
	(u32)dFTKirbyAnimInhaleSpit_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTKirbyAnimInhaleSpit_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimInhaleSpit_joint13, /* [12] joint 13 */
	(u32)dFTKirbyAnimInhaleSpit_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimInhaleSpit_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimInhaleSpit_joint17, /* [16] joint 17 */
	(u32)dFTKirbyAnimInhaleSpit_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimInhaleSpit_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTKirbyAnimInhaleSpit_joint22, /* [21] joint 22 */
	(u32)dFTKirbyAnimInhaleSpit_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTKirbyAnimInhaleSpit_joint25, /* [24] joint 25 */
	0xFFFF023A, /* [25] END */
};

/* Joint 1 */
u16 dFTKirbyAnimInhaleSpit_joint1[24] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 6), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -800,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), -360, -624,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 6), -540,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), -480,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 8), -480,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimInhaleSpit_joint2[58] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 600, 4096, 4096, 4096,
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 239,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 840, 320, 240, 320,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 840, 240,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -1600,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 8), 840,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 18), 0,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 6), 600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 480, 4505, 3276, 4505,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 600, 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimInhaleSpit_joint3[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 16), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -268, -22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), -268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTKirbyAnimInhaleSpit_joint4[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY), 0, 600,
	ftAnimSetValRate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 6144, 245, 6144, 245, 6144, 245,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 6144, -546, 6144, -409, 6144, -546,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 5), -178, 600,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4505, -455, 4915, -597, 4505, -455,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 1), 0, 312,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_TRAY, 22), 0, 312,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 14), 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimInhaleSpit_joint5[50] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 28, 304, 1925, 122, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 28, -52,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 304, 1925, 122, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), -10, 285, 5455, 5324, 2996,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 12), -10, 285, 5455, 5324, 2996,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 28, 31,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 304, 1925, 122, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 28, 304, 1925, 122, 4096,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimInhaleSpit_joint7[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 89, -120, -60,
	ftAnimSetValRate(FT_ANIM_ROTY), 0, -4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 0, 44,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 6), -120,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 10), 89,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), -60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 1), 268, -120,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 8), -180, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 178, -26, 44, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -12, 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 6), -60, -30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 8), 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTKirbyAnimInhaleSpit_joint8[166] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1051, 9, -1145, -4, -322, 17,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 2457, 3276, 3276,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 2457, 3276, 3276,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 745, -178, -1153, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -27, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 75, -31,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 9), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 512, -99, -1050, 52, -90, -107,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 557, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1011, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -139, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 166, 239,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 548, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 315, -154,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1005, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -948, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 167, -112, 410, 178,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -8, -29, 565, 32,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 14), 4096, 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -25, -288, -875, 46, 613, 345,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1310, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -584, -356, 1255, 427,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -738, -66, 1468, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -716, -14, 1452, 42,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -767, -32, 1554, 70,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -802, -2, 1609, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1350, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1389, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, -1, -1387, 1, 1608, 0,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimInhaleSpit_joint9[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimInhaleSpit_joint11[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), -89, 120, -60,
	ftAnimSetValRate(FT_ANIM_ROTY), 0, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 0, -44,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 6), 120,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 10), -89,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), -60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 1), -268, -120,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 8), 180, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -178, 26, -44, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 12, 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 6), 60, -30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 8), 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTKirbyAnimInhaleSpit_joint12[166] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 556, -7, 463, -7, -1930, 20,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 2457, 3276, 3276,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 2457, 3276, 3276,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 863, 178, 454, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1635, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1533, -31,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 9), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1095, 100, 558, 53, -1699, -105,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1048, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 597, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1744, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1442, 238,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1056, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1292, 154,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 602, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 659, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1440, 112, -1199, 178,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1604, 38, -1055, 41,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 14), 4096, 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1650, 272, 733, 47, -977, 327,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 297, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2148, 343, -399, 413,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2337, 87, -150, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2324, 19, -157, 47,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2376, 33, -54, 70,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 2411, 2, 0, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 257, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 222, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2412, 1, 220, -1, 0, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTKirbyAnimInhaleSpit_joint13[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTKirbyAnimInhaleSpit_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 28),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimInhaleSpit_joint16[76] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 600, 0,
	ftAnimSetValRate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 6144, 409, 6144, 409, 6144, 409,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 6144, -546, 6144, -409, 6144, -546,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -178, 600, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 348, -120, 4505, -455, 4915, -455, 4505, -455,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 1), -277, 108,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 8), 90, -23,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 12), -277,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 312, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 14), 312, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 72, -48,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), 0, -57,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 8), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTKirbyAnimInhaleSpit_joint17[62] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, -16, -302, 11, 237, 31,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 18), -74, 14, -231, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 385, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 385, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 226, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -56, 25, -256, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -22, 1, -302, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 228, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 232, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, 0, -302, 0, 237, 5,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimInhaleSpit_joint19[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTKirbyAnimInhaleSpit_joint21[84] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1918, 3, 1785, -17, -1704, 3,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1633, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -1877, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1463, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1461, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1614, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1633, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1758, 28,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1701, -62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1714, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1885, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1918, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1785, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1784, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1711, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1709, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1918, 0, 1785, 0, -1704, 4,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimInhaleSpit_joint22[62] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 21, 18, 302, -11, 233, 35,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 279, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 17), 91, 2, 385, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 90, -12, 363, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 222, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 22, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 304, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 302, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 226, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 232, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, -1, 302, 0, 233, 1,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTKirbyAnimInhaleSpit_joint24[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), 7, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTKirbyAnimInhaleSpit_joint25[86] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, -3, 176, -17, -99, 7,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 24, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 320, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 145, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 147, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 11, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 25, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 131, 38,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -37, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -100, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 165, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 175, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 309, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 309, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 309, 0, 176, 0, -99, 0,
	ftAnimEnd(),
	0x50EE, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0801, 0x001C, 0x0000, 0x0000, 0x0000,
};
