/* AnimJoint data for relocData file 1085 (FTSamusAnimLandingAirB) */
/* 2736 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimLandingAirB_joint1[112];
extern u16 dFTSamusAnimLandingAirB_joint2[44];
extern u16 dFTSamusAnimLandingAirB_joint4[110];
extern u16 dFTSamusAnimLandingAirB_joint5[136];
extern u16 dFTSamusAnimLandingAirB_joint6[78];
extern u16 dFTSamusAnimLandingAirB_joint7[44];
extern u16 dFTSamusAnimLandingAirB_joint8[10];
extern u16 dFTSamusAnimLandingAirB_joint9[36];
extern u16 dFTSamusAnimLandingAirB_joint11[10];
extern u16 dFTSamusAnimLandingAirB_joint12[128];
extern u16 dFTSamusAnimLandingAirB_joint14[56];
extern u16 dFTSamusAnimLandingAirB_joint15[146];
extern u16 dFTSamusAnimLandingAirB_joint17[48];
extern u16 dFTSamusAnimLandingAirB_joint19[86];
extern u16 dFTSamusAnimLandingAirB_joint20[116];
extern u16 dFTSamusAnimLandingAirB_joint22[56];
extern u16 dFTSamusAnimLandingAirB_joint23[106];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimLandingAirB_joints[] = {
	(u32)dFTSamusAnimLandingAirB_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimLandingAirB_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimLandingAirB_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimLandingAirB_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimLandingAirB_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimLandingAirB_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimLandingAirB_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimLandingAirB_joint9, /* [8] joint 9 */
	(u32)dFTSamusAnimLandingAirB_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimLandingAirB_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimLandingAirB_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimLandingAirB_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimLandingAirB_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimLandingAirB_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimLandingAirB_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimLandingAirB_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTSamusAnimLandingAirB_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimLandingAirB_joint1[112] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1156, 82, -245, -17, -1619, -115, 421, -673, -1, 0,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1156, -1619,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -245, 0, 421, 18, -1, 1,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 4), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 1156, -12, -245, 1, -1619, 76, 442, 10, 0, 127,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 5), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 429, 62, 94, -218,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1054, -59, -231, 33, -1009, 220,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 1), -1,
	ftAnimSetValT(FT_ANIM_TRAX, 3), -3,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 476, 836, -120, -36,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 721, -55, 0, 12, 0, 52,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY, 12), 908, 202,
	ftAnimSetValT(FT_ANIM_TRAX, 18), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 18), 0, 18,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 0, -14,
	ftAnimBlock(0, 9),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 574,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 6), 1600, 1391,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimLandingAirB_joint2[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 405, 28, 276, 19, 343, 24,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 405, -1, 276, -1, 343, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 396, -4, 262, -5, 332, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, -18, -131, -1, -6, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 0, 0, 0, 2, 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimLandingAirB_joint4[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 811, 57, 70, 5, 408, 29, 48, 27, -210, -120, -4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 811, -75, 70, 9, 408, -55, 48, -5, -210, 171, -4, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 131, -156, 155, 95, -94, -93, 41, 3, -17, 320, 20, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -127, -43, 645, 154, -154, 25, 50, -19, 30, 9, -55, 16,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), 0, -19, 3, -11, 57, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 4, 21, 610, -110, -18, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0, -56, 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 19, -56, -4, 1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 204, 0, -44, 7, 1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, -5, 0, 1, 0, 0, 0, 0, 0, 0, 0, -11,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimLandingAirB_joint5[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1457, 15, -1275, 13, -890, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -970, -76,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1387, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 1356, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1367, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1437, 532, -1079, -533,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2433, 436, -1448, -67, -2037, -449,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1930, -149,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1597, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1978, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1728, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2010, -54, -1867, -72,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1789, 130, -1987, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1395, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1144, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2082, 150, -1375, -252, -2239, -147,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2078, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2166, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1649, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1682, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1737, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2072, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 2084, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2121, 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1844, 7,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1711, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -1718, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2084, 0, -1722, -4, -1839, 4,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimLandingAirB_joint6[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -677, 93,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -958, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1051, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -755, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -689, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -772, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -949, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -897, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -708, 424,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -49, 351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -373, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -480, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -721, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, -17,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimLandingAirB_joint7[44] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 701, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 42, -98,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 205, -26,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 10,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 163, -26, 0, -2, 0, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -178, 26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 701, 21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimLandingAirB_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 31),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimLandingAirB_joint9[36] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -271, -19, -931, -66, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 480, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -271, 27, -931, 93, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 10, 0, 34, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 21), 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimLandingAirB_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 31),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimLandingAirB_joint12[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1609, 14, 407, 35, 1353, -62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 445, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1609, 33, 1353, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1682, 208, 1503, 270,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2608, 585, 2556, 714,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 590, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 612, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3196, 333, 342, -224, 3323, 598,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 74, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 3262, -26, 3758, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3222, -37, 3548, -264,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 3064, -168, 2817, -129,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 57, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 303, 61,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2846, -23, 2703, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3017, 110, 298, -22, 2869, 96,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -98, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3067, 47, 2896, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 13), 3272, 2, 3000, 0,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -111, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -121, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3275, 2, -128, -7, 3001, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimLandingAirB_joint14[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1261, 20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1242, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1257, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1345, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1228, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1059, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -999, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -320, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -606, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -648, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -661, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -601, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimLandingAirB_joint15[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 933, 3, -912, -2, 824, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -917, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1023, 130, 741, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1194, 139, 584, -125,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1238, -192, 562, 194,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -943, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 917, -177, -1194, 21, 879, 323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 884, 270, -899, 31, 1210, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1458, 349, -1130, -224, 588, -346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1582, 98, -1348, -188, 518, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1498, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1656, 61, 526, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1659, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 527, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 467, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 506, 111,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1654, -7, -1479, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1491, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1459, -77,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 600, 91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1063, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1489, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1702, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1552, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1590, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1695, -6, -1581, 9, 1218, 155,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimLandingAirB_joint17[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1145, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1162, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1165, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1081, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1158, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1215, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1194, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 797, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 752, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 661, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -182,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimLandingAirB_joint19[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 388, 10, -9, 0, 10, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), -41, -4, -91, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 280, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 265, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 348, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 79, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -93, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -168, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -3, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 18, -28,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -47, -28, -84, 127,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -44, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 163, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 8, -11, 172, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -103, 21, -70, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, 27, -28, 15, -41, 28,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimLandingAirB_joint20[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -776, -16, 310, 42, -632, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -713, 50, 303, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -696, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -736, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -689, 52,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -647, 312, 308, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -88, 301, 5, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -44, 0, -82, -82, -661, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -933, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 180, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -53, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -30, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 39, 19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -899, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -260, 33,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 211, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 192, -17,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 55, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 129, 68,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -225, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -174, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, 97, 160, -31, -49, 125,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimLandingAirB_joint22[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 466, -81,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 471, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 470, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 431, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 584, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 537, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 669, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1215, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1228, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 978, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 927, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 723, -202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, -281,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimLandingAirB_joint23[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 95, -8, 54, -9, 83, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 85, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -92, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 69, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 47, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -207, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -217, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -14, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 442, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 98, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 380, 136,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -89, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 287, 143,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 498, 77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 222, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 525, 30, 376, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 454, -39, -54, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 392, -87, -147, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 279, -125, -195, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 142, -136, 193, -28, -213, -18,
	ftAnimEnd(),
	0x0000, 0x0000,
};
