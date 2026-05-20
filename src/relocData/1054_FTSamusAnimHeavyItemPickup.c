/* AnimJoint data for relocData file 1054 (FTSamusAnimHeavyItemPickup) */
/* 2688 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimHeavyItemPickup_joint1[60];
extern u16 dFTSamusAnimHeavyItemPickup_joint2[34];
extern u16 dFTSamusAnimHeavyItemPickup_joint4[64];
extern u16 dFTSamusAnimHeavyItemPickup_joint5[138];
extern u16 dFTSamusAnimHeavyItemPickup_joint6[72];
extern u16 dFTSamusAnimHeavyItemPickup_joint7[22];
extern u16 dFTSamusAnimHeavyItemPickup_joint8[10];
extern u16 dFTSamusAnimHeavyItemPickup_joint11[8];
extern u16 dFTSamusAnimHeavyItemPickup_joint12[154];
extern u16 dFTSamusAnimHeavyItemPickup_joint14[72];
extern u16 dFTSamusAnimHeavyItemPickup_joint15[124];
extern u16 dFTSamusAnimHeavyItemPickup_joint17[56];
extern u16 dFTSamusAnimHeavyItemPickup_joint19[106];
extern u16 dFTSamusAnimHeavyItemPickup_joint20[128];
extern u16 dFTSamusAnimHeavyItemPickup_joint22[56];
extern u16 dFTSamusAnimHeavyItemPickup_joint23[106];
extern u16 dFTSamusAnimHeavyItemPickup_joint24[86];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTSamusAnimHeavyItemPickup_joints[] = {
	(AObjEvent32 *)dFTSamusAnimHeavyItemPickup_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTSamusAnimHeavyItemPickup_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimHeavyItemPickup_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTSamusAnimHeavyItemPickup_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTSamusAnimHeavyItemPickup_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimHeavyItemPickup_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimHeavyItemPickup_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimHeavyItemPickup_joint11, /* [8] joint 11 */
	NULL, /* [9] NULL */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTSamusAnimHeavyItemPickup_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTSamusAnimHeavyItemPickup_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTSamusAnimHeavyItemPickup_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTSamusAnimHeavyItemPickup_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTSamusAnimHeavyItemPickup_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTSamusAnimHeavyItemPickup_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTSamusAnimHeavyItemPickup_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTSamusAnimHeavyItemPickup_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTSamusAnimHeavyItemPickup_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTSamusAnimHeavyItemPickup_joint1[60] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1600, 0,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 982, -470, 499, -56,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 4), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 1012, 90, -70, -412,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 6), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 1162, 174, -326, 35,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 10), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 1427, -217, 15, 186,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 9), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 782, -380, 0, -11,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 5), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 905, 228, 0, 6,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 6), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimHeavyItemPickup_joint2[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 384, -39, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -72, -8, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 19), 160, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 160, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 160, 2, 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimHeavyItemPickup_joint4[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 250, 56, 0, 0, -47, -110, 86, 94,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 562, 13, -138, 15, 118, -27,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 6), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), 0, 47, 0, -25,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 30), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 473, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -163, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 76, 21, 2, 2, 40, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 76, -14, 2, 18, 40, -44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimHeavyItemPickup_joint5[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1104, -541, -1708, 623, 1356, 240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1645, -174, -1084, 359, 1596, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1452, 152, -988, 67, 1201, -285,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1042, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1337, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 900, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 823, -43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 896, 10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1062, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1250, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1389, -62, 906, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -1870, -32, 813, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1897, -22, 772, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), -1879, 23, 400, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1260, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1145, 25,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1847, 43, 349, -64,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1755, -126, 208, 139,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1118, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1124, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1931, -141, 398, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1985, 84, 452, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1868, 94, 329, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1796, 71, -1124, 0, 260, -69,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimHeavyItemPickup_joint6[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -739, -36,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -776, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -343, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -423, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -519, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -448, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -423, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -435, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -452, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -360, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -390, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -447, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -451, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -740, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -711, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -632, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -578, 54,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimHeavyItemPickup_joint7[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 701,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -486, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 25), -241, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -241, -19,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimHeavyItemPickup_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimHeavyItemPickup_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTSamusAnimHeavyItemPickup_joint12[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 5, -242, -98, 502, -213, -207,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -423, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 404, 288, -420, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 479, 107, -667, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -317, 49, 619, 88, -625, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -362, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 656, 11, -691, -75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 509, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -780, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -314, 48, -750, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 53, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -841, -38,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 501, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 344, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 102, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 280, -14,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -879, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1128, -28,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 346, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 489, 25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 259, -30, -1165, -50,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 224, 141, -1262, 143,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 509, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 491, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 411, 144, -1072, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 461, -86, -1023, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 338, -99, -1141, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 261, -77, 497, 5, -1216, -74,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimHeavyItemPickup_joint14[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, 386,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -209, 297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -367, -259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -519, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -469, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -448, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -435, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -448, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -380, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -423, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -529, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -540, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -776, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -754, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -689, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -643, 46,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimHeavyItemPickup_joint15[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1521, 7, 1635, -9, -1998, -123,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1524, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1688, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2121, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2346, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -2484, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2436, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2428, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1531, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1620, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1687, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1708, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2431, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -2295, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2289, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2610, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1617, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1429, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1704, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1533, 29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2738, -99,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2746, 31,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1449, -19, 1576, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1485, -12, 1638, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1495, -10, 1649, 11, -2717, 29,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimHeavyItemPickup_joint17[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, 123,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 805, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 970, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1013, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 980, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 604, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 594, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 727, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 870, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1174, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1172, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1110, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1087, -22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimHeavyItemPickup_joint19[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1684, -7, -1579, 0, 1566, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1667, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1711, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1213, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1246, 46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1548, 31,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1652, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -1630, -7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1708, 2, 1578, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -1697, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 1522, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1641, -18, 1490, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1806, -64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1546, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1687, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1693, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1851, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1714, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1537, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1513, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1702, 12, -1693, 0, 1505, -8,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimHeavyItemPickup_joint20[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1385, -26, 1445, -16, 1554, -90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1587, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1484, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1306, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1210, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1347, 37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1601, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -1498, 24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1476, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1434, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1378, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1117, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1090, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1209, 35,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1426, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1345, -45,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1475, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1571, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1241, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1165, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1300, -37, 1093, -60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1332, 64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1066, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1664, -85,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1715, 14,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1400, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1704, 11, 1428, 28, 1064, -2,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimHeavyItemPickup_joint22[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 453, 91,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 751, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 796, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1065, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1074, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 744, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 689, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 737, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 908, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1321, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1323, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1261, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1236, -24,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimHeavyItemPickup_joint23[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 145, -48, 193, -19, -214, -64,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 90, 4, -681, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -18, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 8, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 94, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 91, 0, -709, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 157, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -533, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -506, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -308, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 99, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 87, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 158, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 79, -49,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -313, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -326, 27,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 67, -38, 25, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -49, 28, 75, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -8, 31, 144, 51, -297, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 14, 23, 178, 33, -276, 20,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTSamusAnimHeavyItemPickup_joint24[86] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -698, 1188,
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, -83, 469, 689, -233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 0, -111, 150, 896, 12,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), -431, -42, 254, 422, 717, -232,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -804, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 734, 645, 430, -627,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 819, 85, 169, -310,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -804, 0, 819, -26, 169, -20,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -804, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 646, -86, 169, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 754, 65, 169, -256,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
