/* AnimJoint data for relocData file 1502 (FTPurinAnimPoundGround) */
/* 4384 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimPoundGround_joint1[36];
extern u16 dFTPurinAnimPoundGround_joint2[46];
extern u16 dFTPurinAnimPoundGround_joint3[58];
extern u16 dFTPurinAnimPoundGround_joint4[86];
extern u16 dFTPurinAnimPoundGround_joint6[34];
extern u16 dFTPurinAnimPoundGround_joint7[310];
extern u16 dFTPurinAnimPoundGround_joint8[80];
extern u16 dFTPurinAnimPoundGround_joint10[124];
extern u16 dFTPurinAnimPoundGround_joint11[258];
extern u16 dFTPurinAnimPoundGround_joint12[50];
extern u16 dFTPurinAnimPoundGround_joint14[10];
extern u16 dFTPurinAnimPoundGround_joint15[206];
extern u16 dFTPurinAnimPoundGround_joint17[54];
extern u16 dFTPurinAnimPoundGround_joint19[272];
extern u16 dFTPurinAnimPoundGround_joint20[218];
extern u16 dFTPurinAnimPoundGround_joint22[60];
extern u16 dFTPurinAnimPoundGround_joint23[244];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTPurinAnimPoundGround_joints[] = {
	(u32)dFTPurinAnimPoundGround_joint1, /* [0] joint 1 */
	(u32)dFTPurinAnimPoundGround_joint2, /* [1] joint 2 */
	(u32)dFTPurinAnimPoundGround_joint3, /* [2] joint 3 */
	(u32)dFTPurinAnimPoundGround_joint4, /* [3] joint 4 */
	(u32)dFTPurinAnimPoundGround_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTPurinAnimPoundGround_joint7, /* [6] joint 7 */
	(u32)dFTPurinAnimPoundGround_joint8, /* [7] joint 8 */
	(u32)dFTPurinAnimPoundGround_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTPurinAnimPoundGround_joint11, /* [10] joint 11 */
	(u32)dFTPurinAnimPoundGround_joint12, /* [11] joint 12 */
	(u32)dFTPurinAnimPoundGround_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTPurinAnimPoundGround_joint15, /* [14] joint 15 */
	(u32)dFTPurinAnimPoundGround_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTPurinAnimPoundGround_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPurinAnimPoundGround_joint20, /* [19] joint 20 */
	(u32)dFTPurinAnimPoundGround_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTPurinAnimPoundGround_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTPurinAnimPoundGround_joint1[36] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 10), 0, -6, 0, 194,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 828,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), -11, -2, 714, 803,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 2311,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 40), -11,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 1362, 385,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 20), 1754, 79,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 15), 1826,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPurinAnimPoundGround_joint2[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 600, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -209, -20, 10, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -209, 22, 10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 200, 7, 8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 25), 200, -3, 8, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 15), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 130, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPurinAnimPoundGround_joint3[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -268, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, -641, -37, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0, -641, 37, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 648, 13, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), 621, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 25), 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 15), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 0, 0,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), -268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTPurinAnimPoundGround_joint4[86] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, -1, 4096, -1, 4096, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -35, 309, -1,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 0, -1, 312, -5, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, -1, 4096, -1, 4096, -2,
	ftAnimSetValRateT(FT_ANIM_SCAX, 4), 6454, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 2556, 6407,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, -2510, 4096, 2695, 4096, -2743,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -37, 299, 0,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 3407, -2, 5179, 4, 3418, 1,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4088, 30, 4092, -24, 4100, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 35), 0, 312, 0, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPurinAnimPoundGround_joint6[34] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -115, -283, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -115, -283, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -207, -284, 24,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 25), -207, -284, 24,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPurinAnimPoundGround_joint7[310] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, 645, -1391, 243, -1608, -677,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2253, 506, -1147, 166, -2286, -495,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2621, 181, -1058, 56, -2598, -155,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1013, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2616, -7, -2598, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2606, -13, -2592, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 2593, 21, -2575, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1009, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1053, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2621, -2, -2599, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2588, -245, -1048, 54, -2570, 230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2129, -241, -943, -22, -2138, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2106, 187, -1094, -3, -2145, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2504, -161, -950, 211, -2500, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1783, -350, -670, 136, -1789, 345,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1803, 12, -677, -6, -1809, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1791, -7, -1795, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -683, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -682, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1793, -12, -1797, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1765, -14, -1769, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1764, -10, -1767, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1650, -17, -1651, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1642, -25, -1643, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1600, -23, -1599, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1595, -20, -1595, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1559, -17, -1558, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1560, -4, -1560, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1541, -13, -1539, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1521, -2, -1519, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1536, 2, -1535, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1525, -2, -1523, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 1611, 2, -1611, -2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -682, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -702, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1604, -46, -1604, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1329, -264, -1324, 266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 988, -321, -678, 59, -983, 314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 685, -475, -583, 61, -696, 470,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 37, -314, -556, 144, -42, 297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 55, 27, -294, 208, -101, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 93, 16, -138, 84, -308, -110,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 89, -9, -161, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -322, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -265, 72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -20, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 70, -25, -201, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 8, -20, -224, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1, -10, -223, 1, 4, 25,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPurinAnimPoundGround_joint8[80] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -629, -294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -124, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 62,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPurinAnimPoundGround_joint10[124] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 14), 4096, -2, 4096, 2, 4096, -2,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 200, 90, -332, -265, 98, 78,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 200, 10, -332, 75, 98, -6,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 216, 16, -218, -612, 88, -520,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 1037, 543, -715, -328, -227, -527, 10781, 348, 10707, 1142, 10658, 1155,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 487, -776, -383, 426, -175, 108, 6277, -1079, 6380, -1166, 6406, -1211,
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 12), 4087,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 12), 4087, 7, 4087, 8,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 163, -256, -235, 106, -105, 68,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 102, -13, -223, 3, -72, 4,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 25), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 136, 40, -229, 19, -96, -10,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 178, -72, -187, 122, -92, 51,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTPurinAnimPoundGround_joint11[258] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, 795, 1391, -366, 1608, 796,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2403, 740, 1024, -169, 2404, 732,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3089, 372, 1053, 24, 3073, 366,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1098, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3147, 45, 3137, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3181, 25, 3175, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 3154, -36, 3143, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3113, -138, 1083, -5, 3096, -152,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2563, -287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1087, 89, 2837, -293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1263, 182, 2508, -229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2302, -76, 1451, 85, 2379, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2410, 30, 1434, -457, 2411, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2364, -12, 536, -459, 2370, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2410, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 514, -27, 2388, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 473, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2430, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2434, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 2409, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 470, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 458, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2427, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 2431, 2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2411, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 2440, 1,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2434, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2474, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2440, 0, 455, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 2529, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 463, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 485, 22, 2508, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 524, -35, 2856, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2594, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 2895, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3130, 188, 461, -78, 3107, 222,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3388, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 3245, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 367, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 321, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 329, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3382, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3267, -43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 307, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 231, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3226, -12, 3235, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3220, -3, 3225, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3218, -2, 211, -20, 3221, -4,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTPurinAnimPoundGround_joint12[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTPurinAnimPoundGround_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -95, -633, -1514, 106, -21, 16,
	ftAnimBlock(0, 55),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTPurinAnimPoundGround_joint15[206] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, 36, -302, -25, 237, -63,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 45, 15, -357, -12, 123, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 42, -5, -354, 4, 127, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 31, 11, -345, -11, 144, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 47, 60, -360, -28, 120, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 152, 157, -402, 9, -15, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 362, 82, -342, 134, -288, -208,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 75, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 317, -284, -432, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -206, -344, -439, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -390, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -371, -60, 178, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -326, 30, 161, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -338, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 161, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 236, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -392, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), -406, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -344, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -407, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -400, 8, 226, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), -91, 50, 38, -21,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -405, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -111, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -39, 69, 17, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -250, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 176, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 278, 70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 216, -92,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -322, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -353, 29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 109, -93, 34, 129,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -15, -27, 220, 45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -321, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -24, -9, -308, 13, 237, 16,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPurinAnimPoundGround_joint17[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPurinAnimPoundGround_joint19[272] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -309, -97, -176, -250, -96, 78,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -407, -284, -427, -246, -18, 348,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -879, -307, -670, -125, 600, 391,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1022, -108, -677, -10, 764, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1097, -50, -691, -16, 848, 53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -715, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1089, 79, 824, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -964, 130, 692, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -828, 73, 546, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -818, -29, 535, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -886, -14, -663, 84, 611, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -846, 105, -546, 121, 610, -45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -326, 441,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -419, 172, 520, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -202, 387, 355, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 206, 440, 355, 348, 408, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 554, 141, 494, 78, 639, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 489, -38, 511, 14, 583, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 578, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 547, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 575, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 678, 27,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 608, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 806, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 705, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 845, -6,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 798, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 426, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 835, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 504, -66,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 552, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 485, -31,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 346, -81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 105, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 433, -68,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 189, -64,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 38, -78, 450, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -220, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 370, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 227, -143, 130, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -21, -87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 21, -37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -269, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -316, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -92, -56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -175, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -14, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -88, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -314, 2, -179, -3, -95, -7,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTPurinAnimPoundGround_joint20[218] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, -24, 302, 136, 237, -44,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1, -120, 439, 136, 193, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -216, -134, 575, 76, -42, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -270, -46, 591, 10, -96, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -309, -21, 595, 2, -135, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 570, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -243, 20, -69, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -223, 12, -49, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -219, 82, -45, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -58, 208, 563, -65, 129, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 197, 104, 440, -192, 446, 218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 150, -125, 178, -251, 565, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -53, -137, -62, -169, 562, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -124, -40, -159, -56, 542, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -139, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 520, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -175, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -185, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), -161, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -141, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), -122, 7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 518, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 526, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 528, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 541, 4,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -114, 14, -150, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 19, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 115, 86,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 542, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 439, -63,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 76, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 42, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 198, 70,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 295, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 371, -64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 250, -17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 30, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 23, -6, 294, 0, 238, -12,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPurinAnimPoundGround_joint22[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 12), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTPurinAnimPoundGround_joint23[244] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 43, -3040, -59, -96, 117,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 353, 69, -3099, -20, 21, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 449, 52, -3081, 10, 199, 95,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -3045, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 457, 5, 212, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 459, 0, 206, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 445, 6, 182, 16,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -3044, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -3068, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 455, 131, 205, 99,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 960, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3061, -21, 380, 204,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -3158, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 614, 156,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 702, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 992, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1214, 155, -3133, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -3097, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1303, 44, 708, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 724, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1304, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1305, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), 1306, 3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -3093, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -3111, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 725, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 734, 2,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -3115, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -3094, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 740, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 738, -11,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1310, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1366, 30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3065, 40, 722, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -2937, 73, 594, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1388, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1314, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1077, -296, -2867, 34, 421, -205,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -2939, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 722, -310, 184, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 456, -193, 9, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 334, -76, -3012, -51, -79, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 302, -32, -3042, -29, -109, -30,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
