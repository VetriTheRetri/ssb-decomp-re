/* AnimJoint data for relocData file 1573 (FTCaptainAnimRollB) */
/* 4240 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimRollB_joint1[26];
extern u16 dFTCaptainAnimRollB_joint2[84];
extern u16 dFTCaptainAnimRollB_joint3[54];
extern u16 dFTCaptainAnimRollB_joint5[32];
extern u16 dFTCaptainAnimRollB_joint6[228];
extern u16 dFTCaptainAnimRollB_joint7[98];
extern u16 dFTCaptainAnimRollB_joint8[24];
extern u16 dFTCaptainAnimRollB_joint9[30];
extern u16 dFTCaptainAnimRollB_joint11[42];
extern u16 dFTCaptainAnimRollB_joint12[266];
extern u16 dFTCaptainAnimRollB_joint13[98];
extern u16 dFTCaptainAnimRollB_joint14[56];
extern u16 dFTCaptainAnimRollB_joint15[10];
extern u16 dFTCaptainAnimRollB_joint17[20];
extern u16 dFTCaptainAnimRollB_joint18[176];
extern u16 dFTCaptainAnimRollB_joint20[100];
extern u16 dFTCaptainAnimRollB_joint22[194];
extern u16 dFTCaptainAnimRollB_joint23[200];
extern u16 dFTCaptainAnimRollB_joint25[96];
extern u16 dFTCaptainAnimRollB_joint26[234];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTCaptainAnimRollB_joints[] = {
	(u32)dFTCaptainAnimRollB_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimRollB_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimRollB_joint3, /* [2] joint 3 */
	(u32)dFTCaptainAnimRollB_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTCaptainAnimRollB_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimRollB_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimRollB_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimRollB_joint9, /* [8] joint 9 */
	(u32)dFTCaptainAnimRollB_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTCaptainAnimRollB_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimRollB_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimRollB_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimRollB_joint15, /* [14] joint 15 */
	(u32)dFTCaptainAnimRollB_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTCaptainAnimRollB_joint18, /* [17] joint 18 */
	(u32)dFTCaptainAnimRollB_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTCaptainAnimRollB_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTCaptainAnimRollB_joint23, /* [22] joint 23 */
	(u32)dFTCaptainAnimRollB_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTCaptainAnimRollB_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTCaptainAnimRollB_joint1[26] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 0, -74,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), -960, -1288,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 7), -2014, -1389,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 25), -4189, -669,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), -4189,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTCaptainAnimRollB_joint2[84] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1600, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 0, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, -1, 1213, 4, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -195,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1679, -112,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 1571, 2438,
	ftAnimSetValRateT(FT_ANIM_TRAY, 7), 1576, -2436,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 8), 0, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 785, -634,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 1091,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 8), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -3038, -42,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 1638, 2633,
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), 1515, -1840,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), 0, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 1013, -250,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), -3216, 1600, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTCaptainAnimRollB_joint3[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 107, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, -76, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 107, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 61, -11, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 61, 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 64, 0, 39, 8, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 107, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimRollB_joint5[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 189,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -31, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 189, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 66, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 122, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 189, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 201, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), 189,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimRollB_joint6[228] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1848, -11, -1614, -11, 1084, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1856, 95, -1614, 66, 851, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2009, 379, -1513, 19, 678, -632,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2614, 361, -1575, -30, -414, -490,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2732, -198, -1574, 12, -301, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -414, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1541, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2218, -427,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1877, -212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1793, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1732, -51, -354, 65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -160, 249,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1563, -26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1541, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1474, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 215, 290,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 448, -58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1547, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1606, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 303, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1430, -5, 204, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1512, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1603, 34, 386, 63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 2219, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 331, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1543, -18, 317, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1538, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 422, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 403, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 235, -62,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2303, 104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2395, -334,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1581, 52, 200, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1433, 65, 362, 465,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1874, -266, -1450, -26, 1131, 400,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1603, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1862, -10, 1164, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1853, -6, 1189, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1131, -45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1848, 2,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1607, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1614, -3, 1079, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1848, 0, -1614, 0, 1084, 5,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimRollB_joint7[98] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -797, -18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -824, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -766, 409,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 380,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -82, -339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -679, -440,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1090, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1063, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -848, 380,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -301, 421,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -422, -511,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1023, -317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1056, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1080, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -892, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -790, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimRollB_joint8[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 2435,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -89, -388,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 2435,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 2435, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 3029, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 3800, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 27), 2435,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTCaptainAnimRollB_joint9[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -35, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -35, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 24, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimRollB_joint11[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 0, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -158, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -271, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -307, 0, 0, -2, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -259, 18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -28, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimRollB_joint12[266] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1479, 18, 1464, 15, 2200, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1529, -33, 1510, -16, 2166, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1459, -362, 1471, 72, 2252, 290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 803, -390, 1655, 85, 2746, 340,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 677, 9, 1641, -38, 2933, 54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2771, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1446, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 821, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 958, 128,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1325, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2778, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 3084, 254,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1429, -62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1250, -30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1511, 154, 3391, 260,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1638, -17, 3666, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1259, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1331, 31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1601, -18, 3679, 45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3772, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1602, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1492, -130, 1391, 88,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1269, -66, 1560, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3560, -102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 3706, 42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1208, -55, 1568, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 962, -65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1510, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3726, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 3409, 43,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 894, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 949, 101,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1492, -185, 3492, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1097, 131, 1139, -230, 3756, 209,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1460, 336,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1031, -91, 3911, 221,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 964, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4198, 386,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1886, 323, 4683, 425,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2107, -27, 1142, 142, 5048, 432,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1831, -366, 1248, -52, 5549, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1374, -257, 1037, -53, 5504, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1316, -7, 1142, 111, 5470, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1478, 16, 5423, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1259, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1450, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1479, 0, 1464, 14, 5417, -6,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimRollB_joint13[98] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1024, 28,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -902, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -883, 451,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 441,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -730, -313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -955, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1024, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1092, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -792, 469,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -154, 396,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -385,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -776, -499,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1003, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1465, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1361, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1055, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1054, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, 29,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimRollB_joint14[56] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 275, 62,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 270, 275, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 270, -72, 275, -2, 62, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -528, -259, 245, -4, -320, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -766, 46, 255, 4, -291, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 126, 67, 303, -4, 112, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 316, 11, 179, -2, 374, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 270, 275, 62,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTCaptainAnimRollB_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 42),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimRollB_joint17[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 18, 0, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 0, 18, 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 38), 0, 18, 0, -3,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTCaptainAnimRollB_joint18[176] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1799, 0, -1678, -19, 1135, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1737, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1779, -30, 880, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1798, 39, 836, 89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1548, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1347, 262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1586, 188,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1641, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1706, -25, -1520, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1556, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1706, 8,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1556, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1218, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1539, -7, 1080, -195,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1537, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1720, -18, 827, -110,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1520, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 859, 81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1143, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1517, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1555, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1315, 100,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1260, -86,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1521, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1730, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1548, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1609, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1161, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 841, -248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 665, -156,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 488, 36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1657, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1681, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1737, 6, 535, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 1798, 4, 1121, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1799, 1, -1678, 3, 1135, 14,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTCaptainAnimRollB_joint20[100] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 445, 88,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 810, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 858, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 908, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 799, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 598, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 593, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 617, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 585, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1082, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 896, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 414, -340,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 568, 386,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 773, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1005, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 961, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 559, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 461, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTCaptainAnimRollB_joint22[194] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1481, -8, 1650, 0, 1688, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1660, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1415, -28, 1597, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1392, 28, 1598, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1512, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1596, -48, 1516, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1497, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1563, 91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1923, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1544, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1625, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1961, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 2235, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2000, -215,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1765, 30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1632, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1695, 6, 1485, -6, 1865, 133,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1529, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1646, -35, 2032, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1678, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1854, -113,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1948, 225,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1530, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1588, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2256, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2261, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2207, -241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1657, 17, 1585, 13, 1779, -323,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1599, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1713, -5, 1560, -169,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1568, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1646, -54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1480, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1544, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1620, 59,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1608, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1649, 1,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1685, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1481, 0, 1650, 0, 1688, 3,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTCaptainAnimRollB_joint23[200] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1768, -8, 1498, -12, 1531, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1755, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1512, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1417, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1401, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1624, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1790, 28, 1782, 158,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1894, -1, 2199, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1557, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 1536, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1871, -49, 1437, -76, 2071, -160,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1725, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1432, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1704, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1648, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1630, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1727, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1591, -31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1420, 11, 1309, -244,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1477, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1621, 46, 1141, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1717, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1257, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1478, 49, 1238, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1576, 48, 1484, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1576, 0, 1515, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1441, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1554, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1543, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1380, -122,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1186, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1677, -30, 1401, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1727, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1493, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1251, 54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1462, 40,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1742, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1765, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1497, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1516, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1768, 3, 1498, 4, 1531, 15,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTCaptainAnimRollB_joint25[96] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 541, 77,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 763, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 887, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 822, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 604, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 251, 272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 851, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 815, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 837, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1115, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 689, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 662, -342,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 118, 235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 471, 322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1056, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1061, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 709, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 638, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 565, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, -24,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTCaptainAnimRollB_joint26[234] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1447, 16, -1973, -4, -1888, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1895, 49, -2035, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1366, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1372, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1606, -158, -1859, 31, -1876, 308,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1500, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1688, -78, -1418, 297,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1805, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1281, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1126, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1213, -65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1194, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1842, -26, -1485, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1842, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1576, 106,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1037, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1836, 60, -990, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1721, 138, -1387, 92, -1399, -373,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1560, 37, -1392, -11, -1738, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1647, -74, -1410, -45, -1688, 184,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1542, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1708, -18, -1368, 180,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1681, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1327, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1254, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1670, 18, -1552, -19, -1091, 78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1677, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1568, 105, -1155, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1432, 111, -1091, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1406, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1755, -115, -1125, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1908, -28, -1463, -396,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1508, -22, -1811, 76, -1918, -309,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1415, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1893, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2083, -104,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2169, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1379, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1444, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2177, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1896, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1926, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -1973, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1447, -2, -1973, 0, -1888, 8,
	ftAnimEnd(),
	0x0000, 0x0000,
};
