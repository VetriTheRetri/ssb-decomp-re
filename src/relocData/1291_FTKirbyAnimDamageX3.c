/* AnimJoint data for relocData file 1291 (FTKirbyAnimDamageX3) */
/* 2656 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimDamageX3_joint1[136];
extern u16 dFTKirbyAnimDamageX3_joint2[10];
extern u16 dFTKirbyAnimDamageX3_joint3[60];
extern u16 dFTKirbyAnimDamageX3_joint5[70];
extern u16 dFTKirbyAnimDamageX3_joint6[168];
extern u16 dFTKirbyAnimDamageX3_joint7[14];
extern u16 dFTKirbyAnimDamageX3_joint9[70];
extern u16 dFTKirbyAnimDamageX3_joint10[166];
extern u16 dFTKirbyAnimDamageX3_joint11[14];
extern u16 dFTKirbyAnimDamageX3_joint13[10];
extern u16 dFTKirbyAnimDamageX3_joint14[114];
extern u16 dFTKirbyAnimDamageX3_joint16[16];
extern u16 dFTKirbyAnimDamageX3_joint18[92];
extern u16 dFTKirbyAnimDamageX3_joint19[132];
extern u16 dFTKirbyAnimDamageX3_joint21[52];
extern u16 dFTKirbyAnimDamageX3_joint22[160];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimDamageX3_joints[] = {
	(u32)dFTKirbyAnimDamageX3_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimDamageX3_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimDamageX3_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimDamageX3_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimDamageX3_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimDamageX3_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimDamageX3_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimDamageX3_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimDamageX3_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimDamageX3_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimDamageX3_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimDamageX3_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimDamageX3_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimDamageX3_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimDamageX3_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTKirbyAnimDamageX3_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimDamageX3_joint1[136] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 600, 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 660, 239, -360, -959,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 2), 4915, 4915,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 720, 87, -480, -101,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAZ, 1), 2048,
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 6144,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 3276, 3276,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY, 8), 780, -29,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 16), -600,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 2867,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 4505, 4505,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 4915,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 3686, 3686,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 3686,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 4300, 4300,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 8), 660,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 4505,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 3891, 3891,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 3891,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 4198, 4198,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 5), 4505,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 450, -48, -480, 480,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 4), 4505, 3072,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 600, 0, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimDamageX3_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -268, 0, 0, -312, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimDamageX3_joint3[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 312, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), 0, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 22, -223, -67, 0, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 89, 9, -268, -7, -89, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 178, 4, -357, 4, -89, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 16), -120,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 10), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 178, -17, -178, 35, 0, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimDamageX3_joint5[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -178, -44, 0, 44, -120, -239, -59, -239, -60, -119,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 3), -178, 9, 178, 14, -120, -25,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), -120, -60,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 0, 8, 268, -4, -120, 22, -60, 34,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 16), -120,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 89, -26, -120, 96, -60, 96, 30, 48,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimDamageX3_joint6[168] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 1019, -217, -256, 0, -1541,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1823, 532, -1541, -803,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -538, 91,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 24), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1868, 83, -1606, -93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1810, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2103, -63,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -377, 130,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -425, -105,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1793, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1564, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2008, -93,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1782, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -523, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -360, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -392, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -333, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1714, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1736, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1542, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1576, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1732, 53, -1581, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 2512, 141, -2335, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -364, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -515, 9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2642, 197, -2466, -169,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3159, -107,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2906, 432,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3508, 500, -464, 88,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 4003, 56, -249, 59,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3207, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4021, 17, -220, 28, -3216, -9,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimDamageX3_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimDamageX3_joint9[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 178, 44, 0, -22, 150, 239, -60, -179,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 178, -4, 120, -12, -90, -25, 0, -25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -89,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAY, 16), 89, -8, -120, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 16), 0, 120, -60,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, -8, 120, -96, -60, 96, 0, 48,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), -89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimDamageX3_joint10[166] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 1235, 1391, -1124, 1608, 445,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2039, 394, 266, -555, 2053, 106,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 24), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1593, -203, 279, 35, 1820, -221,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 437, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1790, 118, 1584, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1870, 30, 1634, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1696, -214, 1524, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1422, -123, 508, 44, 1348, -93,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 498, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1814, 73, 1610, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1827, -39, 1625, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1687, 81, 1544, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 562, 57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 599, 32,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1811, 97, 1673, 104,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1971, 44, 1933, 82,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 630, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 505, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1993, 24, 1991, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 2400, 242, 2319, 320,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 524, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 254, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2663, 110, 2730, 351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2469, -104, 3168, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2412, -56, 217, -36, 3216, 48,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimDamageX3_joint11[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTKirbyAnimDamageX3_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimDamageX3_joint14[114] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, 819, -302, -108, 237, -840,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -367, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 795, 534, -603, -482,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1044, 131, -726, -78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -791, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 996, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1012, 33, -366, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1287, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -518, -28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -801, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -973, 36,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1299, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 637, -243,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -922, 66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -270, 247,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -541, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -327, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 375, -243,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -13, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -27, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 211, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, -7, -302, 25, 233, 21,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimDamageX3_joint16[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimDamageX3_joint18[92] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -309, -625, -176, -43, -96, 771,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -228, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -935, -358, 674, 465,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1027, 21, 834, 93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 846, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -791, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -764, 9, -232, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -911, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -222, -32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 874, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 799, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 777, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -79, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -869, 65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -328, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -254, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -183, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -309, 18, -176, 7, -99, -20,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimDamageX3_joint19[132] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 21, -158, 302, -127, 233, -388,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -62, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -136, 98, -155, -248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 218, 224, -263, -112,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -394, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 313, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 59, -201,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 133, 235,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -63, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 39, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 397, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 14, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 12, 37, -392, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -378, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 151, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 75, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 11, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -33, -51, -373, -58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -453, 152,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -175, 82,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 88, 78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 299, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -232, 286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -29, 92, 118, 218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 8, 25, 204, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, 12, 302, 2, 233, 28,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimDamageX3_joint21[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 135,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 143, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -67,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 499, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 555, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -196,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimDamageX3_joint22[160] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, -115, 176, -66, -99, 147,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 194, -222, 110, -158, 47, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -136, -247, -141, -76, 385, 252,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 117, 102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 530, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -299, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -127, 136,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -165, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 163, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 97, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -364, -70, -25, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -59, 53, 153, 27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 524, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 520, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -45, -20, 151, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 101, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -148, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -80, 63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -15, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 127, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 93, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 519, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 458, -109,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 22, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 308, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 94, 0, 269, -175,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 166, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -147, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -65, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -95, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 309, 1, 176, 10, -99, -4,
	ftAnimEnd(),
};
