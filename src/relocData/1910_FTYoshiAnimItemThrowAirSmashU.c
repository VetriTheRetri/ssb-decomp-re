/* AnimJoint data for relocData file 1910 (FTYoshiAnimItemThrowAirSmashU) */
/* 2800 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimItemThrowAirSmashU_joint1[22];
extern u16 dFTYoshiAnimItemThrowAirSmashU_joint2[54];
extern u16 dFTYoshiAnimItemThrowAirSmashU_joint3[44];
extern u16 dFTYoshiAnimItemThrowAirSmashU_joint4[44];
extern u16 dFTYoshiAnimItemThrowAirSmashU_joint6[16];
extern u16 dFTYoshiAnimItemThrowAirSmashU_joint7[138];
extern u16 dFTYoshiAnimItemThrowAirSmashU_joint8[14];
extern u16 dFTYoshiAnimItemThrowAirSmashU_joint10[8];
extern u16 dFTYoshiAnimItemThrowAirSmashU_joint11[148];
extern u16 dFTYoshiAnimItemThrowAirSmashU_joint12[16];
extern u16 dFTYoshiAnimItemThrowAirSmashU_joint13[10];
extern u16 dFTYoshiAnimItemThrowAirSmashU_joint14[44];
extern u16 dFTYoshiAnimItemThrowAirSmashU_joint15[32];
extern u16 dFTYoshiAnimItemThrowAirSmashU_joint17[32];
extern u16 dFTYoshiAnimItemThrowAirSmashU_joint18[150];
extern u16 dFTYoshiAnimItemThrowAirSmashU_joint20[72];
extern u16 dFTYoshiAnimItemThrowAirSmashU_joint22[164];
extern u16 dFTYoshiAnimItemThrowAirSmashU_joint23[142];
extern u16 dFTYoshiAnimItemThrowAirSmashU_joint25[70];
extern u16 dFTYoshiAnimItemThrowAirSmashU_joint26[128];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimItemThrowAirSmashU_joints[] = {
	(u32)dFTYoshiAnimItemThrowAirSmashU_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimItemThrowAirSmashU_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimItemThrowAirSmashU_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimItemThrowAirSmashU_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimItemThrowAirSmashU_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimItemThrowAirSmashU_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimItemThrowAirSmashU_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimItemThrowAirSmashU_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimItemThrowAirSmashU_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimItemThrowAirSmashU_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimItemThrowAirSmashU_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimItemThrowAirSmashU_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimItemThrowAirSmashU_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimItemThrowAirSmashU_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimItemThrowAirSmashU_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimItemThrowAirSmashU_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimItemThrowAirSmashU_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimItemThrowAirSmashU_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimItemThrowAirSmashU_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTYoshiAnimItemThrowAirSmashU_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimItemThrowAirSmashU_joint1[22] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 608,
	ftAnimSetFlags(0),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 512, 222,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 7), 941, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 12), 608,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimItemThrowAirSmashU_joint2[54] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -11, 0, -8, 0, 0, 214, 27, 1, 4,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 0, 0, 214, -48, 1, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -559, 72, -357, -21, 0, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -386, 15, -153, 71, 138, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -450, -29, 145, 9, -192, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -893, 13, 0, -1, 0, 5,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimItemThrowAirSmashU_joint3[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1161, 24, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 16, 67, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1031, -96, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -45, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 436, 96, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1161, -5, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimItemThrowAirSmashU_joint4[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 562, 10, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 600, 329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 291, -89, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -516, -59, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -367, 89, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 562, 14, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimItemThrowAirSmashU_joint6[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 48, 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), 496,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimItemThrowAirSmashU_joint7[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2990, 31, -1432, -20, -227, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1133, 382,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 2986, -128, -149, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2792, -133, -76, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2719, -184, -167, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2422, -162, -651, 389, 79, 133,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -117, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2394, -318, 100, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1785, -373, 440, 314,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1565, -92, 1057, 376,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -131, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 48, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1461, -842, 1483, 377,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2101, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -120, -772,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -82, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 108, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 50, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -171, -8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2066, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1582, -159,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 223, 241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 590, 455,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1134, 371,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1333, 123, 1439, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1381, 48, -176, -4, 1380, -58,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimItemThrowAirSmashU_joint8[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 23), -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTYoshiAnimItemThrowAirSmashU_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -625,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimItemThrowAirSmashU_joint11[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1369, -30, 187, 6, 1380, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 349, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1456, -3, 1169, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1444, 118, 1140, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1219, -185, 532, 322, 1319, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1816, -154, 995, 301, 671, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1528, 147, 1135, 180, 992, 200,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1601, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1521, -39, 1071, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1616, 0, 1006, -34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1643, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1569, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1607, -25, 939, -265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1667, -61, 476, -348,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1729, -238, 243, -184,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 34, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2144, -501, 1578, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1390, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2731, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2587, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2494, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -2348, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2535, -210,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2921, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -81, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1407, 15, -183, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2977, -55, 1420, 12, -227, -44,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimItemThrowAirSmashU_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -8, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimItemThrowAirSmashU_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -625, 172, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimItemThrowAirSmashU_joint14[44] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 156, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -536, -893, 0,
	ftAnimSetFlags(0),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -12, 0, -49, 0, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -638, 99, -1287, -145, 175, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 693, 6, -1017, 24, -1242, -10,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -536, -893, 0,
	ftAnimBlock(0, 1),
	ftAnimSetFlagsT(FT_ANIM_ROTY, 11),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTYoshiAnimItemThrowAirSmashU_joint15[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 536, -11, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -500, -14, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 282, 74, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 536, -4, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTYoshiAnimItemThrowAirSmashU_joint17[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 89, -12, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -453, 10, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 279, 49, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 89, -3, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimItemThrowAirSmashU_joint18[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1647, 32, -1457, 19, 1879, -76,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1332, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1412, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1927, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2049, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2076, -120, -1308, -74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1619, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1808, -240, 1480, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1596, -104, 1584, 225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1599, 6, -1663, 3, 1930, 232,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1420, -153, -1479, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 2228, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2520, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1261, -21, -1474, 89, 2655, -73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1259, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1809, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2373, -357,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1611, -270,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1386, -129,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1571, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1820, -15, 1399, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1779, 88, 1354, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1997, 193, 1244, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1711, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2166, 39, -1457, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1391, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2077, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1744, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1647, -96, -1457, -65, 1879, 168,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimItemThrowAirSmashU_joint20[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 687, 48,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 973, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 926, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 778, -309,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 355, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 357, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 267, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 6, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 427, 411,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1077, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 937, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 930, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 673, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 782, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 840, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 802, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 687, -114,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimItemThrowAirSmashU_joint22[164] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1438, -150, 164, -23, -318, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -343, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -181, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1588, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1907, -283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -2309, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2352, 155, -302, -60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1673, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -239, 35, -465, -64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -44, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -431, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1601, 16, -225, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1641, -357, -14, 24, -174, 63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 52, 118,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 271, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2316, -592,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2826, -265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2848, -66, 138, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2960, 656, -259, -328,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1534, 717, -518, -163,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -112, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1524, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1512, -119, 276, -127,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2308, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 15, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 6, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 135, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 102, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -114, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2249, 64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1791, 306,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -213, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -288, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1438, 353, 164, 29, -318, -29,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimItemThrowAirSmashU_joint23[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1642, 42, -1759, -32, -1322, 93,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1163, 273, -1046, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -2028, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2159, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -861, 95, -2078, -5, -848, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -971, -59, -2169, -2, -1076, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -980, -1, -2083, 228, -1169, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1191, -134, -1287, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1712, 238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1521, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1314, -77, -1483, 14, -1379, -91,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1709, -175,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -908, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1387, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1296, 61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1157, 124,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1891, -168,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -2231, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1014, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1007, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1044, -301, -1046, -208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1510, -314, -1425, -229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1673, -95, -2103, 132, -1505, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1683, 30, -1849, 103, -1405, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1642, 40, -1759, 90, -1322, 83,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimItemThrowAirSmashU_joint25[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 670, 18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 617, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 324, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 536, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 450, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -225,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 464, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 608, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 590, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 366, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 552, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 664, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 728, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 670, -57,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimItemThrowAirSmashU_joint26[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -156, 112, 1769, -6, 1287, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 212, 222, 1984, 122, 1002, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 493, 265, 2084, 63, 861, -67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 850, 52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 2054, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 743, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 707, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 639, -174, 974, 245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 358, -247, 2128, 16, 1341, 258,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1727, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 116, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1490, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1745, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1726, 24, 1643, -96,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 2011, -8, 1324, 145,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 273, 160,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 400, -217,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1985, -42, 1497, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1762, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1328, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1288, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 138, -278, 1273, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -156, -294, 1769, 7, 1287, 14,
	ftAnimEnd(),
	0x0000, 0x0000,
};
