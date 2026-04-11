/* AnimJoint data for relocData file 1785 (FTNessAnimAttackAirB) */
/* 4016 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimAttackAirB_joint1[32];
extern u16 dFTNessAnimAttackAirB_joint2[66];
extern u16 dFTNessAnimAttackAirB_joint4[82];
extern u16 dFTNessAnimAttackAirB_joint5[224];
extern u16 dFTNessAnimAttackAirB_joint6[88];
extern u16 dFTNessAnimAttackAirB_joint7[18];
extern u16 dFTNessAnimAttackAirB_joint8[18];
extern u16 dFTNessAnimAttackAirB_joint10[60];
extern u16 dFTNessAnimAttackAirB_joint11[192];
extern u16 dFTNessAnimAttackAirB_joint12[94];
extern u16 dFTNessAnimAttackAirB_joint13[36];
extern u16 dFTNessAnimAttackAirB_joint15[10];
extern u16 dFTNessAnimAttackAirB_joint16[184];
extern u16 dFTNessAnimAttackAirB_joint18[110];
extern u16 dFTNessAnimAttackAirB_joint19[162];
extern u16 dFTNessAnimAttackAirB_joint21[54];
extern u16 dFTNessAnimAttackAirB_joint22[182];
extern u16 dFTNessAnimAttackAirB_joint24[96];
extern u16 dFTNessAnimAttackAirB_joint25[248];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimAttackAirB_joints[] = {
	(u32)dFTNessAnimAttackAirB_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimAttackAirB_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimAttackAirB_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimAttackAirB_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimAttackAirB_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimAttackAirB_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimAttackAirB_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimAttackAirB_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimAttackAirB_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimAttackAirB_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimAttackAirB_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimAttackAirB_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimAttackAirB_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimAttackAirB_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimAttackAirB_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimAttackAirB_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimAttackAirB_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimAttackAirB_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimAttackAirB_joint25, /* [24] joint 25 */
	0xFFFF03CE, /* [25] END */
};

/* Joint 1 */
u16 dFTNessAnimAttackAirB_joint1[32] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAZ), 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY), 0, 0, 0, 0, 242, 0, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_SCAZ, 7), 2621, -1281,
	ftAnimSetValRateBlockT(FT_ANIM_SCAZ, 2), 2621, 753,
	ftAnimSetValRateBlockT(FT_ANIM_SCAZ, 3), 4505, 421,
	ftAnimSetValRateBlockT(FT_ANIM_SCAZ, 4), 4096, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAZ, 24), 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimAttackAirB_joint2[66] = {
	ftAnimSetValAfter(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -209,
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 20,
	ftAnimSetValBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValT(FT_ANIM_TRAZ, 9), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 562, 134, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1608, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 7), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), -570, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 4), 1608, 0, -570, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 24), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 14), 3216, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 3216, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), -209,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTNessAnimAttackAirB_joint4[82] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 148, -3, 0, 0, 0, 0, 0, 16, 0, -5,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 40, 36, -111, -99,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 5, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -268, -112,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 7), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 40, -321, -111, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 31), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -1202, 0, 0, 0, -160, -76, -111, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 18), 0, 0, -160, 45, -111, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -324, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 148, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 0, 0, 89, 0, 11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimAttackAirB_joint5[224] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -325, -71, -643, 27, -19, 77,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -531, 36, -303, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 250, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 306, 63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 516, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -465, 100, -174, 113,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -185, 158, -79, -42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 723, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -11, -11, -162, 2, 707, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -208, -230, -75, -204, 668, -250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -472, -332, -571, -556, 207, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -873, -190, -1187, -264, 483, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -853, 5, -1100, 57, 463, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -891, -24, -1126, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 472, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 497, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -922, -321, -1163, 100, 526, 337,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2086, -251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -925, 0, 1173, 641,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1164, -268, 1810, 409,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2037, 121, -1462, -202, 1991, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1843, 148, -1568, -42, 2169, 114,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2221, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1741, 51, -1546, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1738, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1546, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1557, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1738, 0, 2222, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2207, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1741, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1774, -60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2141, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1576, -3, 2170, -52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1918, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1009, 59,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2172, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2066, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1876, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1729, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1934, 132, -964, 45, 1588, -140,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimAttackAirB_joint6[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -539, -63,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -745, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -907, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1125, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1147, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1287, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1295, 218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -850, 647,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -309, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -359, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -158, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -593, -510,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1029, -306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1146, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1148, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1171, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1181, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -653, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -539, 113,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimAttackAirB_joint7[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0, 0, 268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 0, 0, 268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTNessAnimAttackAirB_joint8[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 194, 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 194, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTNessAnimAttackAirB_joint10[60] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 0, 0, 53, 14, -18, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 189, 34, 64, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 189, -102, 64, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -322, 4, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 18), 276, 11, 0, 0, 0, 0, 53, -15, -18, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimAttackAirB_joint11[192] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2182, -6, 968, 36, 1786, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1703, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 1973, -99, 1306, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1867, -104, 1415, 94,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1538, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1653, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1704, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1588, 0, 1669, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1670, -58, 1536, -217, 1627, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1536, -458, 1153, -174, 1313, -543,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 753, -423, 1188, 29, 540, -423,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 689, -13, 1212, 11, 465, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1218, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 726, 47, 473, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1007, 165, 633, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1203, 339, 761, 349,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1686, 280, 1240, 103, 1333, 380,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1763, 28, 1424, 148, 1522, 140,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1730, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1643, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1536, 72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1570, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1733, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1740, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1572, 1, 1643, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1568, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 1757, 25,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1753, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 2182, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1536, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 993, -42,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1779, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1788, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2182, 0, 968, -25, 1786, -1,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimAttackAirB_joint12[94] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -433, -67,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -640, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -897, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -852, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -754, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -604, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -606, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -443, 303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 221,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -321,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -651, -406,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -813, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -816, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -816, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -816, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -833, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -878, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -806, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -483, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -433, 50,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimAttackAirB_joint13[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -63, 267,
	ftAnimSetValRate(FT_ANIM_ROTX), -170, 71,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 804, 69, -279, 2, 0, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 7, 0, 9,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 15), 804,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -63, 267,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 12), -170,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTNessAnimAttackAirB_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimAttackAirB_joint16[184] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -32, 23, -360, 2, -700, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -215, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 31, -33, -887, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -15, -50, -883, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -115, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -141, 60, -916, -77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -24, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1038, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -194, -13, -1040, 104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 103, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 136, 53, -829, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 82, -29, -1092, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 77, -27, -1042, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 143, 15, 27, -17, -889, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -27, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 42, -2, -963, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -29, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -837, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -727, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -734, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -29, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -26, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -736, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -701, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -57, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -235, 5,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -36, -31, -694, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -801, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -222, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -220, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -24, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -823, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -742, 39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -257, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -343, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -32, -8, -360, -17, -700, 41,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimAttackAirB_joint18[110] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), 439, 77,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 516, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 681, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1119, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1222, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1454, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1404, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1236, -334,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4915, 4915, 4915,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 734, -452,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 331, -146,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 441, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 352, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 213, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -106,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 24), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 166, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 282, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 430, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 439, 8,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimAttackAirB_joint19[162] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -12, 8, 34, -8, -7, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -152, -52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -90, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 19, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 29, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 343, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -199, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -211, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -114, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -230, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 463, -249, -234, -5, -217, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -174, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -155, -312, -218, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -161, -93, -195, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -342, -74, -179, -1, 187, 192,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -186, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -309, 40, 190, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 164, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -159, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -168, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -304, -21,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 164, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 98, -29,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -327, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -199, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -176, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 15, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -35, 137,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 12, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 69, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -5, -4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 27, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -12, -24, 34, 7, -7, -2,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimAttackAirB_joint21[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -476, 178, 112,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -377, 0, 111, -31, 108, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -554, 36, -41, -47, -32, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -233, 23, -80, -5, -67, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -482, -179, -57, 26, -13, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -770, 6, 0, 7, 100, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), -476, 178, 112,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimAttackAirB_joint22[182] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -59, -19, 442, -21, -799, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -264, -47, 10, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -927, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -922, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -320, -82, -183, -64, -941, 57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 57, 222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -430, -11, -807, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -344, 165, -795, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -98, 395, 325, 171, -1211, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 447, 338, 401, -67, -897, 210,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 577, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 189, -78, -789, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 244, 0, -829, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 595, 16, 191, -62, -804, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -728, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 602, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 119, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 13, -53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 15, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -730, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -701, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 10, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 26, 9,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 594, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 214, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 41, 75, -692, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -770, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 177, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 257, 71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 434, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -802, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -843, 36,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 112, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -28, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -59, -31, 442, 8, -799, 44,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimAttackAirB_joint24[96] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), 614, 88,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1350, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1446, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1393, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1228, -323,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 326, -151,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4915, 4915, 4915,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 352, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 213, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -106,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 24), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 253, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 373, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 600, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 614, 13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimAttackAirB_joint25[248] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 7, -31, -104, 0, -32, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -134, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -27, 35, -43, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 26, 113, -68, -74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -468, -306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 198, 207, -132, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 441, 152, 33, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 503, -90, 359, 141, -806, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 259, -266, 316, -447, -782, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -29, -366, -536, -432, -352, 491,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -472, -233, -548, 37, 201, 397,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -495, -38, -460, 50, 442, 116,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -555, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -549, -1, 433, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -375, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 403, -55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 255, -31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -214, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -220, -7, -556, 0, 260, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -554, 1, 229, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -228, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -169, 17,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -552, 11, 218, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 6, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -202, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -145, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -233, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -262, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -46, 56,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -31, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -164, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -116, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, 53, -104, 12, -32, -1,
	ftAnimEnd(),
	0x400E, 0xFEAD, 0xFF00, 0xFF2D, 0x48E0, 0xFF82, 0xFFAE, 0xFFF4, 0x200F, 0x0004, 0xFE89, 0xFFE9, 0xFF00, 0x0000, 0xFF2D, 0x0000, 0x200F, 0x0002, 0xFE1F, 0xFFE7, 0xFFA3, 0x0000, 0xFF9E, 0x000E, 0x280D, 0x0005, 0xFF91, 0x000C, 0xFF92, 0x000C, 0x2003, 0x0002, 0xFE22, 0x003E, 0x2003, 0x0001, 0xFEDA, 0xFFDF, 0x2003, 0x0002, 0xFDBD, 0xFFE6, 0x200F, 0x000D, 0xFD46, 0x0008, 0x005C, 0xFFFB, 0x001A, 0xFFFD, 0x380F, 0x0010, 0xFEAD, 0xFF00, 0xFF2D, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
