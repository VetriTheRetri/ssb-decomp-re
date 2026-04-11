/* AnimJoint data for relocData file 1488 (FTPurinAnimBatSmash) */
/* 4528 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimBatSmash_joint1[22];
extern u16 dFTPurinAnimBatSmash_joint2[138];
extern u16 dFTPurinAnimBatSmash_joint3[50];
extern u16 dFTPurinAnimBatSmash_joint4[64];
extern u16 dFTPurinAnimBatSmash_joint6[146];
extern u16 dFTPurinAnimBatSmash_joint7[312];
extern u16 dFTPurinAnimBatSmash_joint8[46];
extern u16 dFTPurinAnimBatSmash_joint10[174];
extern u16 dFTPurinAnimBatSmash_joint11[298];
extern u16 dFTPurinAnimBatSmash_joint12[24];
extern u16 dFTPurinAnimBatSmash_joint14[120];
extern u16 dFTPurinAnimBatSmash_joint15[192];
extern u16 dFTPurinAnimBatSmash_joint17[30];
extern u16 dFTPurinAnimBatSmash_joint19[222];
extern u16 dFTPurinAnimBatSmash_joint20[170];
extern u16 dFTPurinAnimBatSmash_joint22[210];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTPurinAnimBatSmash_joints[] = {
	(u32)dFTPurinAnimBatSmash_joint1, /* [0] joint 1 */
	(u32)dFTPurinAnimBatSmash_joint2, /* [1] joint 2 */
	(u32)dFTPurinAnimBatSmash_joint3, /* [2] joint 3 */
	(u32)dFTPurinAnimBatSmash_joint4, /* [3] joint 4 */
	(u32)dFTPurinAnimBatSmash_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTPurinAnimBatSmash_joint7, /* [6] joint 7 */
	(u32)dFTPurinAnimBatSmash_joint8, /* [7] joint 8 */
	(u32)dFTPurinAnimBatSmash_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTPurinAnimBatSmash_joint11, /* [10] joint 11 */
	(u32)dFTPurinAnimBatSmash_joint12, /* [11] joint 12 */
	(u32)dFTPurinAnimBatSmash_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTPurinAnimBatSmash_joint15, /* [14] joint 15 */
	(u32)dFTPurinAnimBatSmash_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTPurinAnimBatSmash_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPurinAnimBatSmash_joint20, /* [19] joint 20 */
	(u32)dFTPurinAnimBatSmash_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF040E, /* [22] END */
};

/* Joint 1 */
u16 dFTPurinAnimBatSmash_joint1[22] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), 600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 15), 600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 20), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPurinAnimBatSmash_joint2[138] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 590, 0,
	ftAnimSetValRate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 35, 4096, -27, 4096, 30,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 300, -290, 4915, 204, 2048, -511, 4915, 204,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 47), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 300, 342, 4915, -234, 2048, 585, 4915, -234,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, -292, 4096, 702, 4096, -292,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), 600,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 5600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 1800, 3891, 4505, 3891,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 600, -5600, 4096, 292, 4096, -702, 4096, 292,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 300, -240, 4915, 163, 2048, -409, 4915, 163,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 300, 184, 4915, -126, 2048, 315, 4915, -126,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 600, 143, 4096, -122, 4096, 245, 4096, -122,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 480, -64, 4300, 27, 3276, -109, 4300, 27,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 480, 44, 4300, -20, 3276, 81, 4300, -20,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 35, 4096, -27, 4096, 30,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 590, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPurinAnimBatSmash_joint3[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValRate(FT_ANIM_ROTX), -46, 13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, -312, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 10), -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 0, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 32), 0,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 20), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), -268,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 20), -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -46, 13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTPurinAnimBatSmash_joint4[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 35), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 178, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 178, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -178, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -357, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -357, 89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), 357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 536, 37, -268, -29, -178, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 536, -37, -268, 29, -178, 22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTPurinAnimBatSmash_joint6[146] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -160, -1, -76, 0, 99, 1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -178, 0, -120, 0, 0, 1, 120, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 12), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), -178,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), -178, 0, -120, 0, 120, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 5), -178, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -268, 0, 0, 125, 0, -4, 0, 0, 0, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 2), 0, 0, 268, 0, -120, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 0, 0, 268, 0, 0, -2, -120, 1, 0, -1,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 3), -201, -22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 893, -268, 178, 252, 41,
	ftAnimSetValRateT(FT_ANIM_TRAX, 15), 190, -61,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 893, -268, 178, -71, -234,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -180, -3, -60, 3, -60, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -180, 1, -60, -1, -60, -1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -120, 0, 0, 0, 0, 139,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -160, -1, -76, 0, 99, 1,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPurinAnimBatSmash_joint7[312] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1994, 146, -1241, 9, 1564, -67,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1296, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2141, 242, 1496, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2479, 231, 1279, -180,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2620, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1133, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1296, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1262, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2616, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2582, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1133, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1175, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2567, -87, -1266, -44, 1253, -336,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1381, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2408, -78, 502, -626,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2410, 2, 0, -251,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2410, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1381, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1381, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2429, 79, -1457, -39, -35, -173,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1503, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2569, 47, -346, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2524, -43, -252, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -261, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 2474, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1504, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1448, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -267, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -308, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2492, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2543, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1448, 42, -306, 80,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 252, 589,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2547, 68, -1363, 260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2680, -176, -926, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2194, -284, -1017, 96, 1031, 456,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2110, -98, -734, 257, 1165, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1998, -23, -502, 118, 1286, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2107, 32, 1183, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -497, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -497, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2127, 14, 1159, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 2033, -32, 1235, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2002, -6, -500, -26, 1282, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -712, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2020, 89, 1293, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2181, 456, 1167, -424,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2932, 544, 443, -517,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3270, 219, -611, 90, 131, -192,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -372, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 3440, 61, 26, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3495, 54, 4, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 3587, 27, -37, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3603, 15, -367, 4, -44, -6,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPurinAnimBatSmash_joint8[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 23), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -363, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTPurinAnimBatSmash_joint10[174] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 151, 1, -96, -3, 120, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 178, 0, 120, -1, 0, 0, 120, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 12), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), 178,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 178, 0, 120, 1, 0, 0, 120, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 178,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 268, 0, 0, -111, 22, -283, -73, -267,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, -268, 0, 0, -3, -120, 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 0, 0, -268, 0, 0, 0, -120, 1, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 893, 268, -178, -285, 2, -263,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 10), -283, 2, -19, -59,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 893, 268, -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), -188,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), -281, 19, -97, -64,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), -234,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 25, 805, -179, 483,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, -178, 0, 178, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), -117,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), -53, 18,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), 215, 122,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ, 10), -178, 0, 178, 0, 121, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 10), 0, 219, -41,
	ftAnimSetValRateT(FT_ANIM_TRAX, 5), 156, -15,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -104, 64,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 151, 0, -96, 13, 120, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPurinAnimBatSmash_joint11[298] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2235, -83, 1241, 4, -1671, -95,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1296, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2319, -134, -1766, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2503, -143, -1981, -158,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2613, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2086, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2085, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2069, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1296, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1246, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2605, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2590, 92,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1236, 53, -2013, -330,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2408, 90, 1353, 70, -2730, -601,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2413, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1378, 12, -3216, -243,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1378, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3216, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2413, 0, -3216, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -2410, -9, -3216, -18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1378, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2430, -78, 1459, 44, -3254, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2566, -50, 1467, 21, -3553, -115,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1502, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2530, 39, -3484, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -2538, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -3490, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3492, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -3545, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2552, -38, 1491, -50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1283, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2615, -208, -3537, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2969, -416, -3631, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3448, -324, 1364, 50, -3552, 64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1333, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -3503, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3618, -110,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -3677, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1329, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1337, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3670, 9, -3500, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -3516, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -3798, -78,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1319, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 946, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3497, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3439, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3876, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3937, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3990, -266, -3449, -245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4470, 134, 838, -140, -3929, 131,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 404, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3720, 338, -3185, 339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3794, -55, -3250, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3832, -24, -3273, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3843, -11, 366, -38, -3279, -6,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTPurinAnimBatSmash_joint12[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 51), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTPurinAnimBatSmash_joint14[120] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -501, -271, -1055, 106, -21, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -804, 0, 0, 0, -1072, -2, 204, 0, -120, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -804, 0, -1072, 204, -120, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 204, -120, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -804, 0, -1072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -804, 0, 0, 0, -1072, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 178, 39,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -446, -804,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 204, 0, -120, 0, 0, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -536, 312, -848,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -446, 22, 178, 0, -804, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -312, 29, 178, 0, -804, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 25), 106, -21, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -272, 32, -61, -223, -1012, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, -268, 0, -1206, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -81, -21, 244, 0, -1208, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -501, -271, -1055,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTPurinAnimBatSmash_joint15[192] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -34, -11, -308, 2, 255, -3,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -57, 32, -302, 0, 237, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, 8, -302, 19, 233, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -215, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -53, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 348, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 350, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 296, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -224, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -395, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -55, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -114, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -152, -21, -395, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -123, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -398, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 301, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 296, -2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -105, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 54, 95,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 296, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -241, -41,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -394, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -290, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 158, 82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 283, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -260, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -174, 50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -287, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -372, -14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 281, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 94, -55,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -113, 65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 257, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -382, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -315, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 39, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -36, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -36, 0, -308, 7, 259, 1,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPurinAnimBatSmash_joint17[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 18), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTPurinAnimBatSmash_joint19[222] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1937, 0, 1758, -4, -1692, -1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -1918, 13, 1763, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1701, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1735, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1918, -56, 1785, -68, -1708, 215,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1981, 184, 1520, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1305, 353,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1000, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1661, 178, 1507, -8, -973, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1666, 97, -970, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1623, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1633, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1892, -294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2280, -308, 1769, 85, -941, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1836, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -954, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -2503, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2444, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -2435, -8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1835, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1858, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -954, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -908, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2444, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -2563, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2541, 76, 1889, 51, -913, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1958, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2410, 203, -986, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2133, 188, -1199, -149,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2055, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1240, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1836, -92,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1761, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2060, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -2068, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1230, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1461, -66,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1762, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), 1729, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2062, 14, 1720, -3, -1526, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1950, 18, 1750, 9, -1679, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1937, 12, 1758, 8, -1689, -9,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTPurinAnimBatSmash_joint20[170] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 36, 6, 308, -1, 259, -12,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 76, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 302, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 233, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 273, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 21, -138, 233, -196,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -360, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 293, -40, -119, -290,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 209, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -348, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -382, -4, -372, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -397, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -321, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 210, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 347, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -410, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -337, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -290, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -290, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 347, 0, -321, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -320, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 366, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -303, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -238, 128,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -320, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 22, 156,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -97, 120, 357, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 70, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 310, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 163, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 275, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 65, -4, 266, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), 37, -1, 260, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 36, 0, 308, -1, 259, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPurinAnimBatSmash_joint22[210] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 24), 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 34), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
	0x0000, 0x280E, 0xFB01, 0x0000, 0xF922, 0x0003, 0x05F7, 0xFFF8, 0x4F00, 0x1000, 0x1000, 0x1000, 0x2803, 0x000B, 0xFABB, 0xFFDF, 0x200D, 0x0009, 0xF93A, 0xFFE1, 0x05E2, 0xFFFF, 0x200D, 0x0001, 0xF907, 0xFF97, 0x05E4, 0x0032, 0x280D, 0x0002, 0xF7F5, 0xFFC0, 0x06D2, 0x004E, 0x0801, 0x0001, 0x2003, 0x0001, 0xFAAB, 0xFFF7, 0x2803, 0x0004, 0xFB02, 0x0075, 0x200D, 0x0001, 0xF7E6, 0xFFFE, 0x06E3, 0xFFFA, 0x200D, 0x0003, 0xF7EB, 0x000A, 0x0740, 0x008C, 0x200F, 0x0001, 0xFB93, 0x0084, 0xF808, 0x003B, 0x07EC, 0x00A0, 0x280B, 0x0004, 0xFBE3, 0xFFB6, 0x08B8, 0xFFEE, 0x2005, 0x0003, 0xF8F5, 0x0021, 0x2005, 0x0001, 0xF909, 0x0012, 0x2805, 0x000D, 0xF8FA, 0xFFF9, 0x200B, 0x0001, 0xFB9C, 0xFFD6, 0x08A9, 0xFFF8, 0x2809, 0x000D, 0x08CE, 0xFFFF, 0x2003, 0x0007, 0xFB91, 0x000A, 0x2003, 0x0001, 0xFB9C, 0x0010, 0x2803, 0x0006, 0xFC47, 0x0020, 0x0801, 0x0004, 0x2005, 0x0001, 0xF8F5, 0xFFEE, 0x2805, 0x0005, 0xF7E2, 0xFFF1, 0x2009, 0x0001, 0x08C5, 0xFFE3, 0x2809, 0x0004, 0x0839, 0x0005, 0x2003, 0x0001, 0xFC73, 0x0033, 0x2803, 0x0005, 0xFD2E, 0x000C, 0x0801, 0x0003, 0x200D, 0x0001, 0xF7DA, 0xFFFB, 0x0843, 0x000A, 0x2805, 0x000B, 0xF7F6, 0x0015, 0x2809, 0x000C, 0x0761, 0xFFA5, 0x0801, 0x0001, 0x2003, 0x0001, 0xFD3A, 0x000A, 0x2803, 0x000A, 0xFC55, 0xFFAC, 0x0801, 0x0009, 0x2005, 0x0001, 0xF812, 0x0024, 0x2805, 0x0006, 0xF91F, 0x000B, 0x200B, 0x0001, 0xFBFF, 0xFFAE, 0x0706, 0xFFA7, 0x200B, 0x0005, 0xFB0B, 0xFFF1, 0x05FE, 0xFFF2, 0x200F, 0x0001, 0xFB01, 0xFFF7, 0xF922, 0x0002, 0x05F7, 0xFFFA, 0x0000, 0x0000, 0x0000,
};
