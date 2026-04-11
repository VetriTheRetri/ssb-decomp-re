/* AnimJoint data for relocData file 1918 (FTYoshiAnimHammerIdle) */
/* 2032 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimHammerIdle_joint1[12];
extern u16 dFTYoshiAnimHammerIdle_joint2[22];
extern u16 dFTYoshiAnimHammerIdle_joint3[34];
extern u16 dFTYoshiAnimHammerIdle_joint4[16];
extern u16 dFTYoshiAnimHammerIdle_joint6[12];
extern u16 dFTYoshiAnimHammerIdle_joint7[84];
extern u16 dFTYoshiAnimHammerIdle_joint10[16];
extern u16 dFTYoshiAnimHammerIdle_joint11[92];
extern u16 dFTYoshiAnimHammerIdle_joint12[44];
extern u16 dFTYoshiAnimHammerIdle_joint13[46];
extern u16 dFTYoshiAnimHammerIdle_joint14[104];
extern u16 dFTYoshiAnimHammerIdle_joint15[22];
extern u16 dFTYoshiAnimHammerIdle_joint17[22];
extern u16 dFTYoshiAnimHammerIdle_joint18[78];
extern u16 dFTYoshiAnimHammerIdle_joint20[44];
extern u16 dFTYoshiAnimHammerIdle_joint22[76];
extern u16 dFTYoshiAnimHammerIdle_joint23[98];
extern u16 dFTYoshiAnimHammerIdle_joint25[142];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimHammerIdle_joints[] = {
	(u32)dFTYoshiAnimHammerIdle_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimHammerIdle_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimHammerIdle_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimHammerIdle_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimHammerIdle_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimHammerIdle_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimHammerIdle_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimHammerIdle_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimHammerIdle_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimHammerIdle_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimHammerIdle_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimHammerIdle_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimHammerIdle_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimHammerIdle_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimHammerIdle_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimHammerIdle_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimHammerIdle_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimHammerIdle_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF01CB, /* [25] END */
};

/* Joint 1 */
u16 dFTYoshiAnimHammerIdle_joint1[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 672, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTYoshiAnimHammerIdle_joint2[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 30, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 184, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 184, -45,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), -178,
	ftAnimLoop(0x6800, -40),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimHammerIdle_joint3[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -94, 42, 0, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 337, 54,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 337, -42, 0, -22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 0, -178,
	ftAnimLoop(0x6800, -64),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimHammerIdle_joint4[16] = {
	ftAnimSetVal(FT_ANIM_ROTX), -643,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 600, 329,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 12), -643,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), -643,
	ftAnimLoop(0x6800, -30),
};

/* Joint 6 */
u16 dFTYoshiAnimHammerIdle_joint6[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 48, 120,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimHammerIdle_joint7[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1235, 32, -2032, 24, 442, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1775, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1365, -41, 430, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1280, -47, 313, -70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 375, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1270, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1449, 114, -1718, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 978, -306,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1942, -80,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 292, -81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 154, 150,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 676, -139,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1134, 163,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2014, -46, 340, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1238, 104, -2035, -20, 446, 106,
	ftAnimLoop(0x6800, -164),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTYoshiAnimHammerIdle_joint10[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -8, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 11 */
u16 dFTYoshiAnimHammerIdle_joint11[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -36, 36, -31, 32, -281, -154,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 104, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -98, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -436, -328,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -939, -296,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1029, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1124, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1300, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 140, 30, -1212, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 459, 127,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1467, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -117, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -48, 46,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 591, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 35, -212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1417, 305,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -857, 490,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -29, -35, -436, 287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -36, -6, -31, 16, -281, 155,
	ftAnimLoop(0x6800, -180),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimHammerIdle_joint12[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -900, 146,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -754, 450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 372,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -348,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -696, -454,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -909, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -900, 8,
	ftAnimLoop(0x6800, -86),
};

/* Joint 13 */
u16 dFTYoshiAnimHammerIdle_joint13[46] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -625,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 172, 0, 0,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 0, -625,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 6), 194,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 1), -127,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 1), -203,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -234, -625,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -113, -144, -597,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -246, 43, -664,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, -625,
	ftAnimLoop(0x6800, -90),
};

/* Joint 14 */
u16 dFTYoshiAnimHammerIdle_joint14[104] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 622, 983, 324,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 8, 163, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 855, 1531, 937, -49, 294, 1189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3686, 1143, 884, -33, 2704, 852,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3142, -265, 871, 17, 1999, -458,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3156, -1482, 919, 17, 1787, -1512,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 177, -2020, 906, 31, -1025, -1785,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -884, -650, 982, 33, -1783, -352,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1773, -266, 1007, 14, -2082, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1949, -28, 1042, 39, -2215, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1858, 88, 1126, -17, -2132, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1773, 621, 1007, -55, -2082, 623,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 625, 599, 904, -6, 360, 601,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 622, 983, 324,
	ftAnimLoop(0x6800, -204),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimHammerIdle_joint15[22] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 357,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), -312,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 4,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 357,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), -312,
	ftAnimBlock(0, 4),
	ftAnimLoop(0x6800, -42),
};

/* Joint 17 */
u16 dFTYoshiAnimHammerIdle_joint17[22] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 327,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), -357,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 2,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 327,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), -357,
	ftAnimBlock(0, 2),
	ftAnimLoop(0x6800, -42),
};

/* Joint 18 */
u16 dFTYoshiAnimHammerIdle_joint18[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -84, 8, -52, 31, -684, 78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -70, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -75, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -245, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -862, -350,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -81, -7, -1204, -247,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -983, 268,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -78, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -153, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 8, 23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -707, 193,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -615, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 15, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -19, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -84, -5, -49, -30, -673, -58,
	ftAnimLoop(0x6800, -152),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimHammerIdle_joint20[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1245, -130,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 809, -345,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 423, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1044, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1174, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 843, -250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 563, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1014, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1155, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1237, 82,
	ftAnimLoop(0x6800, -86),
};

/* Joint 22 */
u16 dFTYoshiAnimHammerIdle_joint22[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 25, -13, 1674, 2, -1626, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1705, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 132, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1670, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1853, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1364, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1737, 2, -1190, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1650, -151,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1655, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 117, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 30, -10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1776, -102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1709, 81,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1669, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 24, -5, 1673, 3, -1634, 75,
	ftAnimLoop(0x6800, -148),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimHammerIdle_joint23[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1591, 9, 1642, 0, 1768, -184,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1496, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1630, -42, 990, -322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1561, -10, 661, -189,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1688, 7, 979, 173,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1572, -73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1488, -58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1696, 9, 1118, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1581, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 638, -274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 346, -240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1490, 27, 157, 64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1694, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 476, 395,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1423, 361,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1584, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1622, 0, 1658, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1584, 37, 1639, -19, 1672, 248,
	ftAnimLoop(0x6800, -192),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimHammerIdle_joint25[142] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 245, 284,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1201, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1360, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 918, -342,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 550, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1154, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1359, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 884, -434,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 384, -295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 292, -91,
	ftAnimLoop(0x6800, -86),
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1589, -3, 24, 10, -203, -61,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1579, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 153, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -211, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -42, 133,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -21, -171,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1614, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1549, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 117, -12, -292, -130,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -16, 187,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 109, -60,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1546, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1508, 41,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 175, 61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 22, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1603, 63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1602, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -27, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1590, -11, 29, -79, -158, -130,
	ftAnimLoop(0x6800, -192),
	ftAnimEnd(),
};
