/* AnimJoint data for relocData file 1055 (FTSamusAnimHeavyItemThrowSmashB) */
/* 2352 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimHeavyItemThrowSmashB_joint1[40];
extern u16 dFTSamusAnimHeavyItemThrowSmashB_joint2[44];
extern u16 dFTSamusAnimHeavyItemThrowSmashB_joint4[56];
extern u16 dFTSamusAnimHeavyItemThrowSmashB_joint5[144];
extern u16 dFTSamusAnimHeavyItemThrowSmashB_joint6[64];
extern u16 dFTSamusAnimHeavyItemThrowSmashB_joint7[22];
extern u16 dFTSamusAnimHeavyItemThrowSmashB_joint8[10];
extern u16 dFTSamusAnimHeavyItemThrowSmashB_joint11[8];
extern u16 dFTSamusAnimHeavyItemThrowSmashB_joint12[150];
extern u16 dFTSamusAnimHeavyItemThrowSmashB_joint14[62];
extern u16 dFTSamusAnimHeavyItemThrowSmashB_joint15[98];
extern u16 dFTSamusAnimHeavyItemThrowSmashB_joint17[44];
extern u16 dFTSamusAnimHeavyItemThrowSmashB_joint19[76];
extern u16 dFTSamusAnimHeavyItemThrowSmashB_joint20[100];
extern u16 dFTSamusAnimHeavyItemThrowSmashB_joint22[40];
extern u16 dFTSamusAnimHeavyItemThrowSmashB_joint23[104];
extern u16 dFTSamusAnimHeavyItemThrowSmashB_joint24[66];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTSamusAnimHeavyItemThrowSmashB_joints[] = {
	(u32)dFTSamusAnimHeavyItemThrowSmashB_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimHeavyItemThrowSmashB_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimHeavyItemThrowSmashB_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimHeavyItemThrowSmashB_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimHeavyItemThrowSmashB_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimHeavyItemThrowSmashB_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimHeavyItemThrowSmashB_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimHeavyItemThrowSmashB_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimHeavyItemThrowSmashB_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimHeavyItemThrowSmashB_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimHeavyItemThrowSmashB_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimHeavyItemThrowSmashB_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimHeavyItemThrowSmashB_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimHeavyItemThrowSmashB_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimHeavyItemThrowSmashB_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTSamusAnimHeavyItemThrowSmashB_joint23, /* [22] joint 23 */
	(u32)dFTSamusAnimHeavyItemThrowSmashB_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTSamusAnimHeavyItemThrowSmashB_joint1[40] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 905, 228, 0, 6,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 20), 1523, 128,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), 12, -118,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), -296, 150,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 1306, -173, 294, 473,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 1306, 156, 294, -157,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 10), 0, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 1600,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimHeavyItemThrowSmashB_joint2[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 160, 2, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 194, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 0, -19, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 0, 15, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 153, 15, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 153, -10, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTSamusAnimHeavyItemThrowSmashB_joint4[56] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX), 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 76, -14, 2, 18, 40, -44,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 25), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), -225, -15, 51, 19, -75, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -225, 33, 51, -22, -75, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 111, 58, 23, -117, 70, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 358, -7, 0, 0, -95, -12, 143, -37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimHeavyItemThrowSmashB_joint5[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1796, 13, -1124, 10, 260, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 570, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -974, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), -1949, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1976, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1891, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 592, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 370, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -961, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -974, -86,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1798, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1822, -100, 397, 111,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 917, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1999, -149,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2030, 297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1106, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1210, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1526, 419, -1177, -29, 748, -96,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 859, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -937, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1269, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1298, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1352, 42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 878, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1343, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -954, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1097, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1253, 57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1690, -28,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1360, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1104, -6, -1708, -17, 1356, -4,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimHeavyItemThrowSmashB_joint6[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -578, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -718, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -710, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -718, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -768, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -652, 304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -158, 323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -53, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -381, -233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -625, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -709, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -720, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, -18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimHeavyItemThrowSmashB_joint7[22] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -241, -19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -643, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -781, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 0, 64,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), 701,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimHeavyItemThrowSmashB_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimHeavyItemThrowSmashB_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTSamusAnimHeavyItemThrowSmashB_joint12[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 261, -11, 497, 8, -1216, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 648, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), 387, 20, -991, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 407, -4, -968, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 271, -108, -1126, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 664, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 648, -84,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 160, -37, -1247, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 196, 123, -1209, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 407, 167, -968, 248,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 296, -475,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 519, -70, -711, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 506, -62, -501, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -420, -351, 394, -93, -926, -175,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 282, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -405, 35, -852, 68,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -714, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -348, 50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -247, 52,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 261, -1, -724, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 222, -48, -408, 69,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -184, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 0, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 167, -57, -343, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -88, -14, -192, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, 6, -98, -9, -213, -21,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimHeavyItemThrowSmashB_joint14[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -643, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -718, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -707, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -718, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -776, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -648, 388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 321,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -366, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -608, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 13,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimHeavyItemThrowSmashB_joint15[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1495, -6, 1649, 4, -2717, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -1581, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 1663, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -2307, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2245, 54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2085, -13,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1577, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1463, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1656, -12, -2120, -50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1590, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -2268, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2268, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -2058, 32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1455, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1519, -3,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1603, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1634, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2028, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2006, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1521, -1, 1635, 1, -1998, 8,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimHeavyItemThrowSmashB_joint17[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1087, -20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 684, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 639, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 396, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 451, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 803, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 851, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 520, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 490, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimHeavyItemThrowSmashB_joint19[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1702, 5, -1693, 2, 1505, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 20), -1655, -7, -1644, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 1664, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1695, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1589, -101,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1667, -16, -1631, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1535, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -1685, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1483, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1398, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1428, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1560, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1547, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1578, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1684, 1, -1579, -1, 1566, 6,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimHeavyItemThrowSmashB_joint20[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1704, 12, 1428, -2, 1064, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -1525, -4, 1387, 15, 1209, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1527, 1, 1400, 8, 1250, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1388, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1371, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1406, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1398, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1470, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1406, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1431, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1402, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1459, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1466, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1386, 2,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1478, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1548, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1438, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1443, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1385, 0, 1445, 2, 1554, 5,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimHeavyItemThrowSmashB_joint22[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1236, -21,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 838, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 814, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 722, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 732, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 686, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 682, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 461, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 453, -8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimHeavyItemThrowSmashB_joint23[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 14, 3, 178, 6, -276, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -128, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 15, 22, 164, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 51, 52, 170, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 188, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 276, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 254, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 144, 20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -127, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -350, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 164, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 237, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 168, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 135, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -359, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -219, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 232, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 193, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 136, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 144, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 145, 0, 193, 0, -214, 4,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTSamusAnimHeavyItemThrowSmashB_joint24[66] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, 754, 65, 169, -256,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -1161, -17,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 753, -144, -248, -421,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 483, -216, -621, -298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -1161, 67, 483, 235, -621, 803,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -690, 208, 689, -5, 81, 3355,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -120, 18, 479, -621, 1475, 1239,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAY, 15), 0, -1, -708, -1033,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 15), 2869,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
