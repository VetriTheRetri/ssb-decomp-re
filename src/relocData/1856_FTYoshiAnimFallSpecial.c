/* AnimJoint data for relocData file 1856 (FTYoshiAnimFallSpecial) */
/* 1440 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimFallSpecial_joint1[16];
extern u16 dFTYoshiAnimFallSpecial_joint2[32];
extern u16 dFTYoshiAnimFallSpecial_joint3[18];
extern u16 dFTYoshiAnimFallSpecial_joint4[20];
extern u16 dFTYoshiAnimFallSpecial_joint6[8];
extern u16 dFTYoshiAnimFallSpecial_joint7[40];
extern u16 dFTYoshiAnimFallSpecial_joint8[16];
extern u16 dFTYoshiAnimFallSpecial_joint10[14];
extern u16 dFTYoshiAnimFallSpecial_joint11[40];
extern u16 dFTYoshiAnimFallSpecial_joint12[16];
extern u16 dFTYoshiAnimFallSpecial_joint13[14];
extern u16 dFTYoshiAnimFallSpecial_joint14[12];
extern u16 dFTYoshiAnimFallSpecial_joint15[20];
extern u16 dFTYoshiAnimFallSpecial_joint17[24];
extern u16 dFTYoshiAnimFallSpecial_joint18[66];
extern u16 dFTYoshiAnimFallSpecial_joint20[36];
extern u16 dFTYoshiAnimFallSpecial_joint22[72];
extern u16 dFTYoshiAnimFallSpecial_joint23[84];
extern u16 dFTYoshiAnimFallSpecial_joint25[40];
extern u16 dFTYoshiAnimFallSpecial_joint26[80];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTYoshiAnimFallSpecial_joints[] = {
	(AObjEvent32 *)dFTYoshiAnimFallSpecial_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTYoshiAnimFallSpecial_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTYoshiAnimFallSpecial_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTYoshiAnimFallSpecial_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTYoshiAnimFallSpecial_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTYoshiAnimFallSpecial_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTYoshiAnimFallSpecial_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTYoshiAnimFallSpecial_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTYoshiAnimFallSpecial_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTYoshiAnimFallSpecial_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTYoshiAnimFallSpecial_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTYoshiAnimFallSpecial_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTYoshiAnimFallSpecial_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTYoshiAnimFallSpecial_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTYoshiAnimFallSpecial_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTYoshiAnimFallSpecial_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTYoshiAnimFallSpecial_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTYoshiAnimFallSpecial_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTYoshiAnimFallSpecial_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTYoshiAnimFallSpecial_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimFallSpecial_joint1[16] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY), -759, -68, 608, -48,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 10), -759, 608,
	ftAnimLoop(0x6800, -30),
};

/* Joint 2 */
u16 dFTYoshiAnimFallSpecial_joint2[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -64, 0, 4, 0, 2, 0, -12, 214, 76, 1, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -1161, 4, 2, 0, 112, 22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -893, 0, 0, 0, 214, 1,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimFallSpecial_joint3[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 1161, 68,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 16, 67, 75,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 1340,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 1161,
	ftAnimLoop(0x6800, -32),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimFallSpecial_joint4[20] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 312, 32, 0, -1, 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 444, -1, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 312, 0, 0,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimFallSpecial_joint6[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 455, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -14),
};

/* Joint 7 */
u16 dFTYoshiAnimFallSpecial_joint7[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1162, -83, -1428, -10, -224, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1336, 98,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1432, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -24, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -114, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1225, 86, -189, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1162, 63, -1428, 3, -224, -35,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimFallSpecial_joint8[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -8, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTYoshiAnimFallSpecial_joint10[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 268, 8, -312, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 268, -312,
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTYoshiAnimFallSpecial_joint11[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -462, 82, 187, -10, -1836, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -287, -100,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 184, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1636, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1724, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -399, -86, -1802, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -461, -61, 191, 6, -1833, -31,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimFallSpecial_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -8,
	ftAnimLoop(0x6800, -30),
};

/* Joint 13 */
u16 dFTYoshiAnimFallSpecial_joint13[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -268, -8, -312, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -268, -312,
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimFallSpecial_joint14[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -670, 1608, 0, 0, 156, 0,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimFallSpecial_joint15[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -536, -34,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -536, 22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -536, -25,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTYoshiAnimFallSpecial_joint17[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -221, 35,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 209, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -26, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -746, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -221, 191,
	ftAnimLoop(0x6800, -46),
};

/* Joint 18 */
u16 dFTYoshiAnimFallSpecial_joint18[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1569, 19, 1759, -6, -1337, -67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1799, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1755, 0, -1157, 380,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1720, 44, -660, 252,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1939, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1965, -177, -652, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2153, 95, -566, -128,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1222, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1774, 275, 1884, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1602, 102, 1795, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1569, 32, 1759, -35, -1337, -114,
	ftAnimLoop(0x6800, -128),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimFallSpecial_joint20[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 687, 26,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 597, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 292, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 551, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 679, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 687, 8,
	ftAnimLoop(0x6800, -70),
};

/* Joint 22 */
u16 dFTYoshiAnimFallSpecial_joint22[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 170, 56, -1772, -20, 1290, 100,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 59, -74, -1892, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1570, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1683, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1578, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1574, -163,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 923, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -48, -164, -2054, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -270, 60, -2131, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 71, 215, -1923, 163, 1134, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 161, 49, -1804, 75, 1227, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 170, 8, -1772, 31, 1290, 62,
	ftAnimLoop(0x6800, -140),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimFallSpecial_joint23[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -34, 84, 150, 84, 286, 227,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 337, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 49, 323, 513, 394,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 612, 304, 1074, 300,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 971, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 658, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 323, -232, 188, -114,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 131, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 192, -154, 954, -262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 14, -141, 446, -432,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -64, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 90, -191,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 183, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 128, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 144, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -34, 30, 150, 5, 286, 102,
	ftAnimLoop(0x6800, -164),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimFallSpecial_joint25[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 670, -25,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 645, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 443, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 199, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 532, 388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 776, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 753, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 670, -82,
	ftAnimLoop(0x6800, -78),
};

/* Joint 26 */
u16 dFTYoshiAnimFallSpecial_joint26[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1452, -297, -161, -86, -321, -60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1042, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -247, -223, -381, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -607, -245, -691, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -739, 80, -625, 282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1329, 266, -447, 232, -125, 293,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -149, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -169, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1576, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1589, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1493, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -102, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -286, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1452, -41, -161, 8, -321, -34,
	ftAnimLoop(0x6800, -148),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
