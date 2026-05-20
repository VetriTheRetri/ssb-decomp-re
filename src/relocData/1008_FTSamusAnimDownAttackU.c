/* AnimJoint data for relocData file 1008 (FTSamusAnimDownAttackU) */
/* 3280 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimDownAttackU_joint1[116];
extern u16 dFTSamusAnimDownAttackU_joint2[10];
extern u16 dFTSamusAnimDownAttackU_joint4[86];
extern u16 dFTSamusAnimDownAttackU_joint5[198];
extern u16 dFTSamusAnimDownAttackU_joint6[80];
extern u16 dFTSamusAnimDownAttackU_joint7[58];
extern u16 dFTSamusAnimDownAttackU_joint8[10];
extern u16 dFTSamusAnimDownAttackU_joint11[20];
extern u16 dFTSamusAnimDownAttackU_joint12[186];
extern u16 dFTSamusAnimDownAttackU_joint14[60];
extern u16 dFTSamusAnimDownAttackU_joint15[140];
extern u16 dFTSamusAnimDownAttackU_joint17[70];
extern u16 dFTSamusAnimDownAttackU_joint19[110];
extern u16 dFTSamusAnimDownAttackU_joint20[188];
extern u16 dFTSamusAnimDownAttackU_joint22[88];
extern u16 dFTSamusAnimDownAttackU_joint23[174];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTSamusAnimDownAttackU_joints[] = {
	(AObjEvent32 *)dFTSamusAnimDownAttackU_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTSamusAnimDownAttackU_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimDownAttackU_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTSamusAnimDownAttackU_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTSamusAnimDownAttackU_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimDownAttackU_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimDownAttackU_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimDownAttackU_joint11, /* [8] joint 11 */
	NULL, /* [9] NULL */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTSamusAnimDownAttackU_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTSamusAnimDownAttackU_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTSamusAnimDownAttackU_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTSamusAnimDownAttackU_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTSamusAnimDownAttackU_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTSamusAnimDownAttackU_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTSamusAnimDownAttackU_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTSamusAnimDownAttackU_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimDownAttackU_joint1[116] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAZ), -804, 0, -513, 169, -23, 16,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 17, 288,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 333, -48,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 10), 314, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -1608, 0, 0, -2, 0, 20,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 1), 16, -13,
	ftAnimSetValRateT(FT_ANIM_TRAX, 9), 0, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 257, 211,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 775,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 599, 32,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 545, 43, 1, -290,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 653, 394, -49, -43,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 5), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, -76, 0, 633, 1038, 532, -53, 338,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1633, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -1608,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -768, -107, 1319, -97, 373, 2,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 25), -1608,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 5), 791,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 1608, -1, -1608, -14, 0, -316, 856, 112, -49, -149,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 1608, -1608, 0, 1600, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimDownAttackU_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimDownAttackU_joint4[86] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 6, -457, 156, -72, 0, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 81, 20, 0, -9, 0, -10, -2, -26, -4, -35, 28, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 312, -5, -593, -39, 0, 1, -122, -31, -66, 0, -2, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -1, -20, -593, 0, 27, 1, -61, 22, -3, 39, 0, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -1, 8, -593, 29, 27, -1, -80, 24, 8, -7, -12, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 169, 0, 0, 29, 0, -1, 0, 32, -21, -3, 28, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimDownAttackU_joint5[198] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1989, -419, 1608, 208, -1664, 134,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1896, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1311, -180, -1582, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1209, -84, -1658, -60,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1282, 127, -2141, -196,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1876, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1788, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1404, 67, -2335, -145,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1306, 19, -2483, 32,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1808, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1464, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1346, 63, -2432, 81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2076, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1775, -38,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1481, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1493, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2103, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2437, -95,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1717, -69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1522, 22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2509, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1994, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1501, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1723, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1547, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1385, -52,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1937, 65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1393, -99,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1343, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1951, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1729, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1772, -49,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1509, -104,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1838, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1717, -58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1507, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2004, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 2080, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2084, 4, 1494, -13, -1839, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimDownAttackU_joint6[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -869, -84,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -954, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -781, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -814, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -984, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1240, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1216, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1068, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -963, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -975, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -936, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -928, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -898, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1220, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1206, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -867, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -823, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -751, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, 11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimDownAttackU_joint7[58] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1466, 36, -13, 19, -281, -10,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 542, -102, 299, 15, -154, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 339, -39, 152, -54, -210, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 266, -33, -83, -27, -353, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 41, 14, -94, 2, 109, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 701, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimDownAttackU_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimDownAttackU_joint11[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -134, 268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 102, 6, 0, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 30), 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimDownAttackU_joint12[186] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -73, 10, 158, -2, 127, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -24, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 337, 137, -34, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 477, 123, -41, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 611, -51, 186, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -128, -93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -412, 80,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 565, -36, 169, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 425, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 186, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 59, -114,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 253, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -332, 71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -516, -117,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 297, -100,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -18, -101,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 294, 33, -632, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 325, -40, -903, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -130, -13, 238, -7, -1149, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 15, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 300, -35, -800, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 238, -69, -766, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 87, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -66, -20, -882, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 76, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -728, 154,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 186, 56,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 100, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 8, 32,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 61, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -97, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 227, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -199, -27,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 42, 24, -119, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 15, -128, -8, -215, -15,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimDownAttackU_joint14[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1037, -11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1331, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1333, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1285, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1264, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1129, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1036, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -877, 251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -536, 436,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -251, -241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -666, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -615, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 19,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimDownAttackU_joint15[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -169, 20, -104, -20, -215, -96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 89, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -866, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -901, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -821, 70,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 98, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 104, -65,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -12, -26, -736, 402,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -41, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -25, -88, -15, 598,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -63, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 460, 365,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 824, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 812, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 678, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -70, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 104, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 432, -210,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -780, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -69, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -27, 1,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -874, -86,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -769, 86,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 110, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 85, 3,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -682, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -408, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 87, 2, -27, 0, -389, 18,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimDownAttackU_joint17[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 316, 112,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 653, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 634, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1143, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1204, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 268, -411,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 143, 261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 522, 290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1074, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1105, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 755, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 660, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 505, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -26,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTSamusAnimDownAttackU_joint19[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1691, -19, 1725, -1, 1947, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 1545, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 1504, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 1443, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1444, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 1493, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1525, 105, 1541, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2058, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1704, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1672, -25, 1521, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1671, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), 1530, 26,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2057, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), 1524, 12,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1663, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 1603, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1593, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1532, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1557, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1633, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1536, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1564, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1532, 0, 1637, 4, 1566, 2,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimDownAttackU_joint20[188] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1561, 11, 1667, -14, 1441, -109,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1654, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1491, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1075, -248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 833, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 739, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 708, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 793, 56,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1683, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1607, 22,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1505, 67, 842, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1659, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 764, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1008, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1676, 20, 1612, 2, 898, -96,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1612, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1792, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 816, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 790, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1610, -52, 807, -117,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1504, 17, 458, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1756, -64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1586, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1542, 19, 786, 162,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1307, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 779, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1578, -9, 776, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1280, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1658, 29,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1268, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1405, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1304, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1546, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1690, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1827, 10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1425, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1441, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1833, 5, 1448, 6, 1558, 12,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimDownAttackU_joint22[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 755, 86,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 929, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 753, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1157, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1206, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1229, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1231, -249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 729, -613,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -362,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 600, 493,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 992, 311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1273, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1284, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 736, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 635, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 471, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, -28,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimDownAttackU_joint23[174] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1849, 18, 1621, 1, 1637, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 1519, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 1664, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1801, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1691, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 1791, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1760, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1659, 20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1533, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2111, 37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1732, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1557, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1511, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1457, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1664, 2, 2124, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1870, -63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1565, -33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1423, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1149, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1411, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1557, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1492, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1492, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1603, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1569, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1794, -93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1095, -47,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1653, 83,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1880, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1537, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1415, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1062, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1387, 14,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1862, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1758, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1750, -7, 1414, 0, 1394, 7,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
