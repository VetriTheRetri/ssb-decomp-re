/* AnimJoint data for relocData file 696 (FTFoxAnimDownAttackD) */
/* 3680 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimDownAttackD_joint1[60];
extern u16 dFTFoxAnimDownAttackD_joint2[46];
extern u16 dFTFoxAnimDownAttackD_joint4[54];
extern u16 dFTFoxAnimDownAttackD_joint5[152];
extern u16 dFTFoxAnimDownAttackD_joint6[48];
extern u16 dFTFoxAnimDownAttackD_joint7[10];
extern u16 dFTFoxAnimDownAttackD_joint8[46];
extern u16 dFTFoxAnimDownAttackD_joint10[10];
extern u16 dFTFoxAnimDownAttackD_joint11[156];
extern u16 dFTFoxAnimDownAttackD_joint12[46];
extern u16 dFTFoxAnimDownAttackD_joint15[50];
extern u16 dFTFoxAnimDownAttackD_joint16[156];
extern u16 dFTFoxAnimDownAttackD_joint18[62];
extern u16 dFTFoxAnimDownAttackD_joint20[148];
extern u16 dFTFoxAnimDownAttackD_joint21[260];
extern u16 dFTFoxAnimDownAttackD_joint23[94];
extern u16 dFTFoxAnimDownAttackD_joint24[230];
extern u16 dFTFoxAnimDownAttackD_joint25[80];
extern u16 dFTFoxAnimDownAttackD_joint26[80];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTFoxAnimDownAttackD_joints[] = {
	(AObjEvent32 *)dFTFoxAnimDownAttackD_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimDownAttackD_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimDownAttackD_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTFoxAnimDownAttackD_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTFoxAnimDownAttackD_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTFoxAnimDownAttackD_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTFoxAnimDownAttackD_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTFoxAnimDownAttackD_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTFoxAnimDownAttackD_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTFoxAnimDownAttackD_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimDownAttackD_joint15, /* [12] joint 15 */
	NULL, /* [13] NULL */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTFoxAnimDownAttackD_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTFoxAnimDownAttackD_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTFoxAnimDownAttackD_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTFoxAnimDownAttackD_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTFoxAnimDownAttackD_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTFoxAnimDownAttackD_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTFoxAnimDownAttackD_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimDownAttackD_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimDownAttackD_joint1[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 804, 0, 9, 189, -13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, -40, 0, 0, 0, -3, 660, 188, -240, -90,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 0, 0, 0, 660, -240,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 5), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 30), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 660, -480, -240, 576,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 360, -184, 120, 221,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 15, 360, 176, 120, -45,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 48, 912, -20,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimDownAttackD_joint2[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 714, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 714, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1072, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1072, -375,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -804, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -804, 26, 0, -13, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -141, -338, -3,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimDownAttackD_joint4[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 6, 0, 156,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 25), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 357, 23, 0, -7,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 15), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 357, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -178, -76,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -178, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 536, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 536, -9, 0, 6, 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 309, 156, 81,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimDownAttackD_joint5[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1029, 58, -1053, -127, -1622, -121,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1448, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1353, -109, -1902, -244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1399, -87, -2232, -308,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1605, -1, -2761, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1591, 83,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1638, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1605, 0, -2780, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -2660, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 41), -1456, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1642, 2,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 12), 1615,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2620, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2500, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -2575,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1610, -25, -2500, 270,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1526, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2034, 460,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1320, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1533, 5, -1258, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 1558, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1334, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1355, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1568, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1569, -8, -1603, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1501, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1453, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1404, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1352, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1446, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1498, -2, -1442, 3, -1349, 2,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimDownAttackD_joint6[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -692, -139,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -834, 281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -411, 417,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 37), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -299, -208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -417, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -551, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimDownAttackD_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimDownAttackD_joint8[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -402, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 25), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -357, -17, 0, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), -357, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -357, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 357, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 357, -18, 0, 5, 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -113, 136, -72,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimDownAttackD_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimDownAttackD_joint11[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1749, 118, 1309, 34, 562, 145,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1507, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1604, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 708, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 908, 74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 503, -122,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1553, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1554, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1603, -1, 469, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 569, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 33), 1587, -10,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1555, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1540, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 597, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 720, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 646, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 716, 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1182, 462,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1896, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1531, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -1649, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1964, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 1813, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1781, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1595, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1575, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1340, -7,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1663, 38, 1578, 101,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1488, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1798, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1880, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1928, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1475, 12, 1336, -3, 1945, 16,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimDownAttackD_joint12[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -728, -133,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -858, 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -461, 425,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 39), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -370, -246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -571, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, -23,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimDownAttackD_joint15[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 163, 0, 3, 0, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 0, -4, 0, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 45), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 0, -4, 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 0, -4, 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 0, -4, 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 0, -4, 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 0, -4, 0, -1,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimDownAttackD_joint16[156] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 106, -476, -86, -136, -162, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -455, -249,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -171, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -369, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -251, 120,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -71, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -774, -254,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -965, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -59, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -42, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -948, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1067, -81,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -73, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -78, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -45, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -56, -4,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1151, -78,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -1310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1277, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -953, 479,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -57, -6, -318, 503,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), -300, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 207, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 231, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 49, -5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -62, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -227, 6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 42, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -28, 2,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -340, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -397, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -405, -8, -223, 4, -26, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTFoxAnimDownAttackD_joint18[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 292, 100,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 778, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 924, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 791, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 761, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 660, -75,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 545,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 660, 277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1099, 271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1052, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 993, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1016, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 988, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 370, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -16,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTFoxAnimDownAttackD_joint20[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -561, 255, -424, 143, 419, -275,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -61, -22, -120, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -350, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -561, -99,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -490, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -118, -35, -43, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -265, -5, -48, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -477, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -430, 29,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -261, 16, -46, 1,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 8), 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), 26, 11,
	ftAnimBlock(0, 7),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -390,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -530, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 24, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 91, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 121, 49, -303, 151,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -169, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 100, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 89, -6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -196, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -117, 31,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 83, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 47, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 36, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 122, 6,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -87, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -64, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 46, 0, 125, 3, -56, 8,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimDownAttackD_joint21[260] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4095,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2631, -323, -1946, -89, 1719, -275,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4095,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1152, -380,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -2081, 192,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2307, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2144, -238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1830, -205, 682, -345,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 403, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1734, -77, -1764, 269,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1514, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1648, 8,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4095,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 422, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 433, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1512, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1559, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1656, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1682, -14,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 6144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 437, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1254, 328,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1475, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1677, 12, 1532, -23,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 6144,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1678, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1428, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1533, 199,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1572, -55, 1826, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1670, 4, 1492, -203,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1711, -6, -1564, 50, 1419, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 6144,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1586, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1683, 25,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 6144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1599, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1632, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1409, 17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1588, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1453, 12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1711, 19,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1714, 56,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1436, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1285, 73,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1456, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1734, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1757, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1834, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1402, 118,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1741, 6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1901, 56, -1743, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1947, 31, -1745, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1963, 16, -1746, 0, 1743, 1,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimDownAttackD_joint23[94] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 915, 79,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1108, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1031, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 872, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 874, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1150, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 808, -437,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 275, -404,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -137,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 307,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 614, 616,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1232, -307,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -616,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 12), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 200, 300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 600, 295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 449, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 376, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 339, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimDownAttackD_joint24[230] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 107, 198, -50, 181, -94, -134,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 179, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 305, 75, -229, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 258, -59, -469, -159,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 126, -75, -564, 69,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 138, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 193, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 34, 0, -409, 92,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 787, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -356, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -364, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -376, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 188, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 210, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 467, -330,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 126, 267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1001, 745,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1617, 743, 190, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2487, 696, 23, -98, -417, 60,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 3140, 0, 146, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -5, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -8, 41,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3129, -70, 21, -419,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2999, 6, 43, 7, -692, -373,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -7, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3143, 65, -725, 411,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3152, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 130, 461,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 197, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 130, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3163, 7, 4, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 3142, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -44, 23,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 123, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 108, -168,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3136, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 3108, 46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 11, 62, -88, -169,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -237, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 9, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -49, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -108, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3144, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 3231, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3233, 1, -102, 5, -226, 10,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimDownAttackD_joint25[80] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -804, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -126, -96,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 5), 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1251, -89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -1251,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 0, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -1251, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -536, 102,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -536, 156,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 89, 387,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 625, 123,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 829, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 625, -48, 0, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 439, -89, 45, 14,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 12), 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 178, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -16, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimDownAttackD_joint26[80] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -404, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 5), -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 357, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 0, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -357, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 10), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -178, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -178, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 536, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 178, -85,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 24, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 178, 6, 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 80, 17, -25, -8,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 12), -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 268, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -357, -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -178,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
