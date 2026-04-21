/* AnimJoint data for relocData file 2100 (FTBossAnimShoo) */
/* 2192 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTBossAnimShoo_joint1[20];
extern u16 dFTBossAnimShoo_joint3[48];
extern u16 dFTBossAnimShoo_joint4[48];
extern u16 dFTBossAnimShoo_joint5[48];
extern u16 dFTBossAnimShoo_joint7[38];
extern u16 dFTBossAnimShoo_joint8[22];
extern u16 dFTBossAnimShoo_joint10[16];
extern u16 dFTBossAnimShoo_joint11[106];
extern u16 dFTBossAnimShoo_joint12[48];
extern u16 dFTBossAnimShoo_joint14[48];
extern u16 dFTBossAnimShoo_joint15[78];
extern u16 dFTBossAnimShoo_joint16[48];
extern u16 dFTBossAnimShoo_joint17[52];
extern u16 dFTBossAnimShoo_joint19[14];
extern u16 dFTBossAnimShoo_joint20[82];
extern u16 dFTBossAnimShoo_joint21[48];
extern u16 dFTBossAnimShoo_joint23[56];
extern u16 dFTBossAnimShoo_joint24[126];
extern u16 dFTBossAnimShoo_joint25[48];
extern u16 dFTBossAnimShoo_joint26[50];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTBossAnimShoo_joints[] = {
	(u32)dFTBossAnimShoo_joint1, /* [0] joint 1 */
	(u32)dFTBossAnimShoo_joint3, /* [1] joint 3 */
	0x00000000, /* [2] NULL */
	(u32)dFTBossAnimShoo_joint4, /* [3] joint 4 */
	(u32)dFTBossAnimShoo_joint5, /* [4] joint 5 */
	(u32)dFTBossAnimShoo_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTBossAnimShoo_joint8, /* [7] joint 8 */
	(u32)dFTBossAnimShoo_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTBossAnimShoo_joint11, /* [10] joint 11 */
	(u32)dFTBossAnimShoo_joint12, /* [11] joint 12 */
	(u32)dFTBossAnimShoo_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTBossAnimShoo_joint15, /* [14] joint 15 */
	(u32)dFTBossAnimShoo_joint16, /* [15] joint 16 */
	(u32)dFTBossAnimShoo_joint17, /* [16] joint 17 */
	(u32)dFTBossAnimShoo_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTBossAnimShoo_joint20, /* [19] joint 20 */
	(u32)dFTBossAnimShoo_joint21, /* [20] joint 21 */
	(u32)dFTBossAnimShoo_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTBossAnimShoo_joint24, /* [23] joint 24 */
	(u32)dFTBossAnimShoo_joint25, /* [24] joint 25 */
	(u32)dFTBossAnimShoo_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTBossAnimShoo_joint1[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 25), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 0, 4800,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), 6000,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 25), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTBossAnimShoo_joint3[48] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 600,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, -1200, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 10), -1200, -720, 4200, 1680,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 10), -1800, 4800,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 10), -1800, 4800,
	ftAnimSetValRateT(FT_ANIM_TRAX, 5), -1800, 480,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 4800, -1920,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 3600,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 25), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 4800, -959,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 15), 600,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTBossAnimShoo_joint4[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -982, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -536, 31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 357,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 25), 357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -357, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -178, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -178, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -893, -47,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 25), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -893, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), -982,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTBossAnimShoo_joint5[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -178, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 30), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 0, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 536, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 714, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 714, -89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -178, -59,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 268,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 25), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), -178,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTBossAnimShoo_joint7[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 683, -1280, 155, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -178, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 178, 23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 178, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -357, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -357, 14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 15), 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTBossAnimShoo_joint8[22] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -1177, 0, -1273, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 2520,
	ftAnimSetValRateT(FT_ANIM_ROTY, 59), -1177, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 59), -1273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1177, 0, -1273, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTBossAnimShoo_joint10[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -178, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 59), -178, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -178, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTBossAnimShoo_joint11[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1549, 0, -67, -3, 370, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 16), 1597, -9, -128, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -96, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -71, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 231, 6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1589, -7, -115, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -165, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 1656, 14,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 239, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 13, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -64, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 102, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -175, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), -68, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1669, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 1548, 0,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 135, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 366, 7,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1549, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1549, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1549, 0, -67, 1, 370, 3,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTBossAnimShoo_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -187, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -44, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -58, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -205, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -177, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -21, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -41, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -62, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -79, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -186, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -187, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTBossAnimShoo_joint14[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -215, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -41, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -66, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -258, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -240, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -2, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -20, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -85, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -107, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -212, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -215, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTBossAnimShoo_joint15[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -9, 0, -1583, 1, -1426, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -1590, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 39), 26, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -1643, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1605, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -1227, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1587, 4, -1258, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -1582, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1698, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1759, -52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1592, 9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 24, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -9, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1578, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -1428, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -9, 0, -1583, 0, -1426, 1,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTBossAnimShoo_joint16[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -390, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 0, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -400, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -379, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -41, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -70, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -36, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -386, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -390, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTBossAnimShoo_joint17[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -348, 11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -335, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -348, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -180, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -85, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -7, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -332, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -344, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -348, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTBossAnimShoo_joint19[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, -44, 0, -99, -2025, 512, 4096, 4096, 4096,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTBossAnimShoo_joint20[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 1581, -1, 1616, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), 1596, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 37), -28, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 1654, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1705, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 2148, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2139, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1518, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1593, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), 1581, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1435, -68,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1605, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -31, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 0, 0,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1606, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1616, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 1581, 0, 1616, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTBossAnimShoo_joint21[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -421, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 0, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -525, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -497, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -53, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -39, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -417, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -421, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTBossAnimShoo_joint23[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -384, 12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 9, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -465, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -486, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -268, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -133, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -22, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -14, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -214, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -252, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -380, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTBossAnimShoo_joint24[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1574, 0, 82, 2, 199, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1586, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 100, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -75, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -42, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 702, 31,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1570, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1516, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 82, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 17, 20,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 733, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 562, -166,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 47, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 146, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1526, -22, 370, -196,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1686, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -269, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -222, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 17, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1667, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -1574, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 33, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 197, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 137, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 83, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1574, 0, 82, 0, 199, 1,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTBossAnimShoo_joint25[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -196, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -65, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -98, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -503, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -479, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -48, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -43, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -58, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -194, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -196, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTBossAnimShoo_joint26[50] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -227, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -82, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -135, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -819, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -805, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -20, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -65, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -88, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -225, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -227, -2,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
