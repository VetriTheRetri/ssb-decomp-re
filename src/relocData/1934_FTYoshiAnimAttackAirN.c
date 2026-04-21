/* AnimJoint data for relocData file 1934 (FTYoshiAnimAttackAirN) */
/* 2672 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimAttackAirN_joint1[20];
extern u16 dFTYoshiAnimAttackAirN_joint2[54];
extern u16 dFTYoshiAnimAttackAirN_joint3[26];
extern u16 dFTYoshiAnimAttackAirN_joint6[36];
extern u16 dFTYoshiAnimAttackAirN_joint7[216];
extern u16 dFTYoshiAnimAttackAirN_joint8[78];
extern u16 dFTYoshiAnimAttackAirN_joint10[18];
extern u16 dFTYoshiAnimAttackAirN_joint11[124];
extern u16 dFTYoshiAnimAttackAirN_joint12[24];
extern u16 dFTYoshiAnimAttackAirN_joint13[8];
extern u16 dFTYoshiAnimAttackAirN_joint14[10];
extern u16 dFTYoshiAnimAttackAirN_joint15[18];
extern u16 dFTYoshiAnimAttackAirN_joint17[18];
extern u16 dFTYoshiAnimAttackAirN_joint18[110];
extern u16 dFTYoshiAnimAttackAirN_joint20[40];
extern u16 dFTYoshiAnimAttackAirN_joint22[140];
extern u16 dFTYoshiAnimAttackAirN_joint23[148];
extern u16 dFTYoshiAnimAttackAirN_joint25[54];
extern u16 dFTYoshiAnimAttackAirN_joint26[142];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimAttackAirN_joints[] = {
	(u32)dFTYoshiAnimAttackAirN_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimAttackAirN_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimAttackAirN_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimAttackAirN_joint6, /* [3] joint 6 */
	0x00000000, /* [4] NULL */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimAttackAirN_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimAttackAirN_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimAttackAirN_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimAttackAirN_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimAttackAirN_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimAttackAirN_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimAttackAirN_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimAttackAirN_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimAttackAirN_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimAttackAirN_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimAttackAirN_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimAttackAirN_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimAttackAirN_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimAttackAirN_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTYoshiAnimAttackAirN_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimAttackAirN_joint1[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY), 0, 0, 608, -55,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 3), 0, 608,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 47), 0, 608,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimAttackAirN_joint2[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -44, 0, 3, 0, 2, 0, -12, 214, 109, 1, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -893, 178, 0, 134, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 214, 1,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 47), 0, 214, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 26, 670, 19, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 32), 0, -19, 670, -14, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -893, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimAttackAirN_joint3[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 1161, 52,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 16, 67, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1161, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 266, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 32), 266, 19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 13), 1161,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTYoshiAnimAttackAirN_joint6[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 562, 35, 0, -1, 0, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 562, -112, 0, -87,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 47), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 0, -16, -435, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 32), 0, 12, -435, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), 562, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimAttackAirN_joint7[216] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 446, -4, -179, 1, -1833, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 444, 51, -179, -15, -1832, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 541, 318, -204, -218, -1866, -202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1080, 309, -615, -199, -2238, -223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1160, 73, -604, 11, -2313, -70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 1898, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -575, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -3027, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3092, -62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -3193, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1957, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1675, -194,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -586, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -590, 22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3050, 171,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2368, 91,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1477, -176,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1107, -33,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -572, 6, -2297, 55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -615, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2257, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1083, 335, -2241, -347,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2537, 452, -3674, -306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -765, 106,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 35, 231,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2683, 149, -3565, 77,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2883, 40, -3598, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 61, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -195, -179,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2918, 215, -3849, -468,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3314, 317, -370, -28, -4535, -531,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3553, 144, -253, 77, -4911, -225,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -5017, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 3650, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -214, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -181, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5037, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3660, 6, -5047, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3663, 2, -179, 2, -5050, -3,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimAttackAirN_joint8[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -8, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -316,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -640, -342,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -685, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -1131, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1116, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -599, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -641, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1176, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1173, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -965, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -912, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -905, 281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -350, 448,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTYoshiAnimAttackAirN_joint10[18] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -625, 20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 32), 0, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 13), -625,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTYoshiAnimAttackAirN_joint11[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1146, 10, 1420, 4, -227, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1248, -258, -216, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1146, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1031, -73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 342, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 903, -174, -177, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -520, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 902, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 911, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), 1097, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -574, -56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -959, -1,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 321, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 208, 15,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -960, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -723, 111,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 235, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 993, 71,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1115, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1413, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -611, 108,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -227, 4,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1057, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1136, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1146, 9, 1420, 7, -227, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimAttackAirN_joint12[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -8, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimAttackAirN_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -625,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimAttackAirN_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -670, 1608, 0, 0, 156, 0,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimAttackAirN_joint15[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 536, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 34, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 41), 114, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 536,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTYoshiAnimAttackAirN_joint17[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 89, -15,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -289, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 41), -157, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 89,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimAttackAirN_joint18[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1647, -9, 1759, 56, -1337, 56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1795, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1627, 15, -1244, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1668, -110, -1368, -397,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1193, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1620, -99, -2039, -315,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1631, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2000, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -2093, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1188, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 32), 1200, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1642, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 33), 1531, -5,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2095, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -1921, 29,
	ftAnimBlock(0, 20),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1214, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1650, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1888, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1362, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1528, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 1744, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1647, -3, 1759, 15, -1337, 25,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimAttackAirN_joint20[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 687, -23,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 776, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 869, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 903, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 908, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), 852, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 845, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 705, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 687, -17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimAttackAirN_joint22[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1778, 42, 164, 26, -318, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1810, -35, 215, 2, -318, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1750, 82, 196, 134, -312, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1975, 15, 484, -214, -14, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1781, -85, -232, -347, -271, -132,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1824, 17, -284, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -210, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -188, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), -232, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1840, 15, -287, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 29), -271, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 28), 1800, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1781, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1492, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -259, -33, -260, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -250, 127,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -124, -74,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1524, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1832, 215, -79, 159,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 161, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1955, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1811, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -202, -67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -314, -5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1791, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1778, -12, 164, 2, -318, -3,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimAttackAirN_joint23[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -34, -21, 150, -26, 286, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -39, 58, 231, 212, 312, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 27, 26, 531, 176, 83, -240,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 605, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -106, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -168, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -173, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -137, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 614, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), 583, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -103, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -110, -3,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -128, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -168, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -101, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 62, 27,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 567, -18, -159, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 156, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 67, -100, -215, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -139, -114, -506, -166,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -255, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -160, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 0, -10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -115, 132,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 255, 44,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -14, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -29, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -34, -4, 150, -5, 286, 30,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimAttackAirN_joint25[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 670, -35,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 707, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 822, -353,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -411,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 31), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 66, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 374, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 724, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 706, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 674, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 670, -4,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimAttackAirN_joint26[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1452, -178, -161, 12, -321, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -134, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -415, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1273, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1143, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1531, 527, -195, 84,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 304, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2199, 277, -574, 440,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2086, -31, 465, 549,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2135, 49, 328, 19, 525, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), 757, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), 2329, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 18), 317, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 321, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 304, -29,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 741, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 399, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2312, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1940, -19,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 264, -58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -151, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 286, -142,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -309, -10,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1915, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1494, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -173, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -165, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1452, -42, -161, 4, -321, -12,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
