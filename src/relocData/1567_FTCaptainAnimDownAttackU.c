/* AnimJoint data for relocData file 1567 (FTCaptainAnimDownAttackU) */
/* 3632 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimDownAttackU_joint1[146];
extern u16 dFTCaptainAnimDownAttackU_joint2[16];
extern u16 dFTCaptainAnimDownAttackU_joint4[90];
extern u16 dFTCaptainAnimDownAttackU_joint5[200];
extern u16 dFTCaptainAnimDownAttackU_joint6[64];
extern u16 dFTCaptainAnimDownAttackU_joint7[42];
extern u16 dFTCaptainAnimDownAttackU_joint8[30];
extern u16 dFTCaptainAnimDownAttackU_joint10[10];
extern u16 dFTCaptainAnimDownAttackU_joint11[222];
extern u16 dFTCaptainAnimDownAttackU_joint12[64];
extern u16 dFTCaptainAnimDownAttackU_joint13[50];
extern u16 dFTCaptainAnimDownAttackU_joint14[14];
extern u16 dFTCaptainAnimDownAttackU_joint16[14];
extern u16 dFTCaptainAnimDownAttackU_joint17[172];
extern u16 dFTCaptainAnimDownAttackU_joint19[72];
extern u16 dFTCaptainAnimDownAttackU_joint21[138];
extern u16 dFTCaptainAnimDownAttackU_joint22[174];
extern u16 dFTCaptainAnimDownAttackU_joint24[88];
extern u16 dFTCaptainAnimDownAttackU_joint25[160];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTCaptainAnimDownAttackU_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimDownAttackU_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimDownAttackU_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimDownAttackU_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTCaptainAnimDownAttackU_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTCaptainAnimDownAttackU_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimDownAttackU_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimDownAttackU_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTCaptainAnimDownAttackU_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTCaptainAnimDownAttackU_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTCaptainAnimDownAttackU_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimDownAttackU_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimDownAttackU_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTCaptainAnimDownAttackU_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTCaptainAnimDownAttackU_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTCaptainAnimDownAttackU_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTCaptainAnimDownAttackU_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTCaptainAnimDownAttackU_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTCaptainAnimDownAttackU_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTCaptainAnimDownAttackU_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimDownAttackU_joint1[146] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 268, 36,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, 17, 420, -23,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 333, -260,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -930, -44, 2, 1, 22, -15,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 10), 314, -55,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 1), 16, -13,
	ftAnimSetValRateT(FT_ANIM_TRAX, 9), 0, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 257, 211,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 775,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -1383, -54, 16, 0, 63, -1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 599, 32,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 545, 35, 1, -290,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1526, -32, 6, -2, 2, -9,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 5), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 643, 366, -49, -43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1608, 0, 0, -2, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, -76, 0, 633, 1003, 540, -53, 338,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1633, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -1608,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -768, -107, 1319, -48, 373, 2,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 25), -1608,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 5), 791,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -1608, -14, 0, -316, 911, 112, -49, -149,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 1608,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 1600, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1608, -1608,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimDownAttackU_joint2[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 50), 107, 0, 4, -76, 9,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTCaptainAnimDownAttackU_joint4[90] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 205, 5, 39, -1,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -72, 0, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 81, 7, 0, -39, 0, -2, -2, -26, -4, -35, 28, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 312, -5, -593, -39, 0, 1, -122, -31, -66, 0, -2, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -1, -20, -593, 0, 27, 1, -61, 22, -3, 39, 0, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -1, 8, -593, 29, 27, -1, -80, 24, 8, -7, -12, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 169, 9, 0, 29, 0, -1, 0, 32, -21, -16, 28, 24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 189, 0, 0, 0, -31, 47,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTCaptainAnimDownAttackU_joint5[200] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1605, -79, -1752, 28, 2088, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1433, 152,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1649, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1888, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2070, -133,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1870, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1304, 95,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1474, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1472, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1124, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 920, -176,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 712, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1770, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1864, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1509, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1517, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1632, -109, 771, 89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1117, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1774, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1769, 112,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1434, -33,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1091, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 780, -91,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1486, -64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1685, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1779, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1488, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 710, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1222, 63,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1663, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1784, -21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1281, 68,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1817, -113,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1794, 5, -1478, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1464, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1393, 21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1687, -122,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1093, -18,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1505, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1604, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1377, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1368, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1368, 0, -1614, -9, 1084, -9,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimDownAttackU_joint6[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1129, -37,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1090, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -917, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1280, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1278, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1053, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -945, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -970, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -934, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -928, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -898, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1219, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1207, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -805, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimDownAttackU_joint7[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 406, 18, 68, 8, 69, -11,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 339, -7, 152, -7, -210, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 266, -33, -83, -27, -353, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 41, -34, -94, 0, 109, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -781, -89, -388,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimDownAttackU_joint8[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -178, 60,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -134, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 102, 8, 0, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 0, -2, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTCaptainAnimDownAttackU_joint10[10] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -357, 104,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 50), 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimDownAttackU_joint11[222] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -518, 5, 283, 6, -273, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -159, 232, -43, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 358, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 336, -87,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 53, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 120, 287, 10, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -239, -82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 715, -39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 108, 70,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 258, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -288, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -477, -31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 599, -88, 169, -75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 579, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 81, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 177, -17, -509, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -63, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -256, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 532, -92,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 128, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -41, 89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 197, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -343, -109,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -646, -74,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 96, -20, 227, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -31, -89, 303, -51,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -740, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -912, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -129, -12, 198, -9, -1150, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 10, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 286, -28, -802, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 227, -68, -759, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 82, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -71, -20, -882, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 45, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -721, 150,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 410, 51,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 60, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -126, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 62, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 141, 5,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 459, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 588, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -129, -3, 144, 2, 592, 4,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimDownAttackU_joint12[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1185, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1378, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1342, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1301, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1249, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1142, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1046, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -556, 443,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -267, -236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -477, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -1036, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1030, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1026, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimDownAttackU_joint13[50] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 449, 44, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1272, 44, 263, 54, -235, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 851, -209, 533, 23, -273, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 643, -31, 333, -22, -299, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 354, -15, 167, -6, 36, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 333, -3, 194, 4, 43, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 270, 275, 62,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimDownAttackU_joint14[14] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 85, 49, 38,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1538, -1003, 119,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 50), 85, 49, 38,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimDownAttackU_joint16[14] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 151, 62, -195,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 50), 0, 5, 0, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 50), 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimDownAttackU_joint17[172] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -765, 24, 9, -119, 88, -61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -273, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -600, 211, -197, -301,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -318, 245, -577, -303,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -911, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 120, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -169, 83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 3, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -924, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -821, 69,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 127, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 108, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -20, 34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 104, -67, -736, 403,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -73, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -15, 598,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 460, 366,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 827, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -76, 5, 6, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -149, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 78, 21,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 810, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 678, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 432, -210,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -870, -92,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -173, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -48, 66,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -955, -72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -488, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 95, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 189, 3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 16, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 73, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, 1, 70, -3, -472, 16,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimDownAttackU_joint19[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 111, 228,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 741, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 689, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1142, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1204, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 268, -413,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 143, 258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 522, 290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1073, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1103, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 906, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 817, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 472, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -26,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimDownAttackU_joint21[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1648, 5, -1530, -3, -1290, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1686, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -1660, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1685, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1782, -74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1730, 41,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1689, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1492, 143,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1691, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1515, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1546, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1533, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1331, 143,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1210, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1633, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -1769, 3,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1235, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -1651, 28,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1542, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1415, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1477, -64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1757, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1764, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1570, 8,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1621, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1533, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1750, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1737, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1735, 2, -1566, 4, -1528, 4,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimDownAttackU_joint22[174] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -193, -22, -87, -34, -457, -61,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -64, -14, 26, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -844, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -851, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -874, 57,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -83, -19, 6, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -102, 66, -2, 31,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -813, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -766, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 18, 76, 40, 1, -844, 83,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 144, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -3, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -600, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -709, -97,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -820, 14,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 165, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -15, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3, 52, -798, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 104, -17, -1150, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 65, -19, -821, 162,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -829, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 153, 47,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -22, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -27, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -832, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -355, 35,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 216, 80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 266, -31,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -5, 24, -321, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 157, 5, -85, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 238, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 115, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, 2, 110, -4, -76, 8,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimDownAttackU_joint24[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 964, 15,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 864, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 707, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1095, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1163, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1229, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1231, -250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 729, -613,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -362,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 600, 496,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 992, 311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1273, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1284, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 781, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 696, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 563, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, -21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimDownAttackU_joint25[160] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 244, 12, 196, -2, 260, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -74, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -67, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 145, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 164, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 57, 32,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -19, 95,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 503, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 149, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -49, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -98, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -151, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -55, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 19, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 516, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 261, -64,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -185, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -460, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -196, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -50, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -115, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -115, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -58, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 184, -93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -502, -50,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 16, 76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 298, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 49, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 361, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -540, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -288, 15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 283, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 165, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 161, -4, 365, 3, -279, 8,
	ftAnimEnd(),
	0x0000, 0x0000,
};
