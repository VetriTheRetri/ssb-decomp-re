/* AnimJoint data for relocData file 960 (FTSamusAnimRunBrake) */
/* 1552 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimRunBrake_joint1[26];
extern u16 dFTSamusAnimRunBrake_joint2[16];
extern u16 dFTSamusAnimRunBrake_joint4[12];
extern u16 dFTSamusAnimRunBrake_joint5[120];
extern u16 dFTSamusAnimRunBrake_joint6[40];
extern u16 dFTSamusAnimRunBrake_joint7[26];
extern u16 dFTSamusAnimRunBrake_joint8[10];
extern u16 dFTSamusAnimRunBrake_joint11[10];
extern u16 dFTSamusAnimRunBrake_joint12[78];
extern u16 dFTSamusAnimRunBrake_joint14[40];
extern u16 dFTSamusAnimRunBrake_joint15[66];
extern u16 dFTSamusAnimRunBrake_joint17[40];
extern u16 dFTSamusAnimRunBrake_joint19[78];
extern u16 dFTSamusAnimRunBrake_joint20[64];
extern u16 dFTSamusAnimRunBrake_joint22[32];
extern u16 dFTSamusAnimRunBrake_joint23[72];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTSamusAnimRunBrake_joints[] = {
	(AObjEvent32 *)dFTSamusAnimRunBrake_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTSamusAnimRunBrake_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimRunBrake_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTSamusAnimRunBrake_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTSamusAnimRunBrake_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimRunBrake_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimRunBrake_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimRunBrake_joint11, /* [8] joint 11 */
	NULL, /* [9] NULL */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTSamusAnimRunBrake_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTSamusAnimRunBrake_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTSamusAnimRunBrake_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTSamusAnimRunBrake_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTSamusAnimRunBrake_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTSamusAnimRunBrake_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTSamusAnimRunBrake_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTSamusAnimRunBrake_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimRunBrake_joint1[26] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1806, 0,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), 156, 40,
	ftAnimSetValT(FT_ANIM_TRAX, 21), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 1597,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 1616, 75,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 187,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 1600, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimRunBrake_joint2[16] = {
	ftAnimSetVal(FT_ANIM_ROTY | FT_ANIM_ROTZ), -1, -3,
	ftAnimSetValAfter(FT_ANIM_ROTX), 0,
	ftAnimSetValT(FT_ANIM_ROTZ, 21), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 4), -329,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 17), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTSamusAnimRunBrake_joint4[12] = {
	ftAnimSetVal(FT_ANIM_ROTX), -1,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 21), 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimRunBrake_joint5[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1829, 48, -1533, -93, 2253, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1658, 128,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1571, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2234, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1987, -295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1524, 366, 1644, -414,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -925, 265, 1158, -222,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1368, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -993, -117, -1385, 151,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1784, -122,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1417, -50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1584, 189,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2156, 34,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1879, -72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1859, 38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1473, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1526, 70,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2187, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1812, 95, 2186, -177,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1190, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1403, 45, 1832, -294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1642, -90, 1402, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1135, 55, -1715, -73, 1378, -23,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimRunBrake_joint6[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -607, -320,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1099, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -987, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -680, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -895, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1122, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1147, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -814, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -749, 65,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimRunBrake_joint7[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 424, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 21), 0, 0, 424, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), -285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 0, 57,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 701,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimRunBrake_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 21),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimRunBrake_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 480, 0,
	ftAnimBlock(0, 21),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimRunBrake_joint12[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -44, -18, 141, -43, 24, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -231, -55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 183, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 248, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 227, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -210, -52,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -285, -50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -397, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 172, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 105, -31,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -259, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -195, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -309, 114, 55, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -23, 111, -108, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 54, 78, -131, -23, -213, -18,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimRunBrake_joint14[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1008, 27,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -869, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -791, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -933, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -940, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -881, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -863, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -645, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -597, 48,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimRunBrake_joint15[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1599, 58, -1604, 8, 1262, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1556, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1308, -7, 1204, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1337, -23, 1179, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -1488, -47, 1083, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1567, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1569, -8,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1529, -30, 1161, 70,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1514, 0, 1229, -8,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1576, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1518, -3, -1580, -3, 1221, -8,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimRunBrake_joint17[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 308, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 264, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 228, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 384, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 427, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 728, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 627, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 482, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 479, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimRunBrake_joint19[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1582, -46, 1686, -9, -1756, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1759, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1494, -7, -1611, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1491, -10, -1643, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1704, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1617, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1745, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1715, 30,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1741, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1670, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1691, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1705, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1622, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 1644, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1706, -1, 1639, -4, -1654, 16,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimRunBrake_joint20[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 1, 93, 76, -106,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -11, 52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 205, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -247, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -463, -141,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -381, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 72, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 212, 11,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -328, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -48, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 193, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), 158, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 223, 11, 160, 1, -48, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimRunBrake_joint22[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 767, 64,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1062, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1035, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 443, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 423, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 431, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 439, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimRunBrake_joint23[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 15, 20, 83, -3, 26, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 124, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 134, -5, 29, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 152, 2, -1, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -69, -73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 128, 12,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 110, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 165, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -147, -74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -215, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 141, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 164, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 174, 9, 186, 20, -214, 1,
	ftAnimEnd(),
	0x0000, 0x0000,
};
