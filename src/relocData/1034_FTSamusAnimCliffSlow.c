/* AnimJoint data for relocData file 1034 (FTSamusAnimCliffSlow) */
/* 1872 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimCliffSlow_joint1[34];
extern u16 dFTSamusAnimCliffSlow_joint2[56];
extern u16 dFTSamusAnimCliffSlow_joint3[44];
extern u16 dFTSamusAnimCliffSlow_joint5[26];
extern u16 dFTSamusAnimCliffSlow_joint6[108];
extern u16 dFTSamusAnimCliffSlow_joint7[40];
extern u16 dFTSamusAnimCliffSlow_joint8[40];
extern u16 dFTSamusAnimCliffSlow_joint9[10];
extern u16 dFTSamusAnimCliffSlow_joint12[8];
extern u16 dFTSamusAnimCliffSlow_joint13[160];
extern u16 dFTSamusAnimCliffSlow_joint15[40];
extern u16 dFTSamusAnimCliffSlow_joint16[76];
extern u16 dFTSamusAnimCliffSlow_joint18[40];
extern u16 dFTSamusAnimCliffSlow_joint20[34];
extern u16 dFTSamusAnimCliffSlow_joint21[86];
extern u16 dFTSamusAnimCliffSlow_joint23[40];
extern u16 dFTSamusAnimCliffSlow_joint24[46];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTSamusAnimCliffSlow_joints[] = {
	(AObjEvent32 *)dFTSamusAnimCliffSlow_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTSamusAnimCliffSlow_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimCliffSlow_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTSamusAnimCliffSlow_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTSamusAnimCliffSlow_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimCliffSlow_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimCliffSlow_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimCliffSlow_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTSamusAnimCliffSlow_joint12, /* [9] joint 12 */
	NULL, /* [10] NULL */
	NULL, /* [11] NULL */
	(AObjEvent32 *)dFTSamusAnimCliffSlow_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTSamusAnimCliffSlow_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTSamusAnimCliffSlow_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTSamusAnimCliffSlow_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTSamusAnimCliffSlow_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTSamusAnimCliffSlow_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTSamusAnimCliffSlow_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTSamusAnimCliffSlow_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTSamusAnimCliffSlow_joint1[34] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), -303,
	ftAnimSetValRate(FT_ANIM_TRAY), -2907, 437,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 40), -303, 48,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), -2542, -31,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 203,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), -2274, 226,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 639,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 15), -1398, -78,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 159,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), -1358, -44,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimCliffSlow_joint2[56] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 8, 1582, 0, 0, -14,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 20), -42, 4,
	ftAnimSetValRateT(FT_ANIM_TRAY, 40), 1588, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 4), -128, -452,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 4), -340, -31,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 489,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 12), -4, 31,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 31,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 4,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 11), 281, -5,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 8), 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX, 42), 0, 0,
	ftAnimBlock(0, 3),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -5,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 9), 244, -56,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTSamusAnimCliffSlow_joint3[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 357,
	ftAnimSetValRate(FT_ANIM_ROTY), -241, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 24, 0, -17,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 10), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 312, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -8, 0, 8,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 408, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 87, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimCliffSlow_joint5[26] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 20), 0, 10,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 20), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 20), 134, 3, 54, 12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTSamusAnimCliffSlow_joint6[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2544, 304, -332, -86, 1538, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1592, 89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -387, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2240, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2141, 79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2204, -83,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1692, 91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1957, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2278, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -2361, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -314, 63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -368, -22,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2381, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -2840, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2024, 65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 2854, 101,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -385, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -80, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2935, -89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -3210, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2946, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 3101, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3212, -1, -69, 10, 3100, -1,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimCliffSlow_joint7[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -13, -193,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -626, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -571, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -940, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -985, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -1119, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1097, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -975, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -948, 26,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimCliffSlow_joint8[40] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 453, -125, 293, -170,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -111, -232, 292, -85, 3, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -477, -70, -66, -19, 85, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -1095, 36, 14, 1, -14, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 819, 57, -1, 1, 66, 2,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimCliffSlow_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimCliffSlow_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTSamusAnimCliffSlow_joint13[160] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -434, 172, 461, 84, -70, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 424, 171, 460, -79, 635, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 580, 159, 378, -54, 616, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1358, 213,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 493, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 592, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 761, 167,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1129, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1552, 157,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1708, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 453, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 623, 84,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1666, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1522, -127,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1102, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1353, -356, 999, -292,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 393, -271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 688, -6, 516, -417,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 490, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 164, -208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 265, -99, 99, -46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -169, -89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -105, -50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 464, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 48, -12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -246, -50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -128, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -138, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 47, 11,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -111, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -87, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 56, 8, 39, -9, -82, 4,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimCliffSlow_joint15[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1068, -23,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1150, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1094, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1264, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1279, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1204, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1191, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -943, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -936, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTSamusAnimCliffSlow_joint16[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -251, 1, 121, 0, -67, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -279, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 14, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), -126, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -148, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -51, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -329, -61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -316, 39,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 12, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -56, 5,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -53, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -116, -9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -274, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -47, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -125, -8, -50, 5, -8, 38,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTSamusAnimCliffSlow_joint18[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 338, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 582, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 577, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 428, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 460, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 353, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 290, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 226, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 166, -59,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTSamusAnimCliffSlow_joint20[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1602, 0, 1560, 0, 1868, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 39), 1560, 0, 1828, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), -1520, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1532, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 22), -1579, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1580, -1, 1560, 0, 1827, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTSamusAnimCliffSlow_joint21[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1884, 15, 1434, -3, 1332, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1336, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), -1551, 22, 1360, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1531, 0, 1327, -66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 905, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1584, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1333, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1506, 7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 922, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1195, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1576, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -1550, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1512, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1558, 1,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1235, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1589, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1549, 1, 1558, 0, 1608, 18,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTSamusAnimCliffSlow_joint23[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 341, 18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 598, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 662, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 367, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 331, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 402, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 366, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 345, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 359, 13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTSamusAnimCliffSlow_joint24[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 68, -2, 81, 0, 308, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 39), -31, -2, 106, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 17), 102, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 65, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 61, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 54, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -4, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -9, -4, -33, -2, 93, -13,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
