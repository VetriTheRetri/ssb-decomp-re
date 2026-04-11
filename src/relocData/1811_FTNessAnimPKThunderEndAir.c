/* AnimJoint data for relocData file 1811 (FTNessAnimPKThunderEndAir) */
/* 2912 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimPKThunderEndAir_joint1[70];
extern u16 dFTNessAnimPKThunderEndAir_joint2[44];
extern u16 dFTNessAnimPKThunderEndAir_joint4[50];
extern u16 dFTNessAnimPKThunderEndAir_joint5[174];
extern u16 dFTNessAnimPKThunderEndAir_joint6[64];
extern u16 dFTNessAnimPKThunderEndAir_joint7[22];
extern u16 dFTNessAnimPKThunderEndAir_joint8[44];
extern u16 dFTNessAnimPKThunderEndAir_joint10[12];
extern u16 dFTNessAnimPKThunderEndAir_joint11[174];
extern u16 dFTNessAnimPKThunderEndAir_joint12[64];
extern u16 dFTNessAnimPKThunderEndAir_joint13[18];
extern u16 dFTNessAnimPKThunderEndAir_joint15[12];
extern u16 dFTNessAnimPKThunderEndAir_joint16[106];
extern u16 dFTNessAnimPKThunderEndAir_joint18[48];
extern u16 dFTNessAnimPKThunderEndAir_joint19[92];
extern u16 dFTNessAnimPKThunderEndAir_joint21[50];
extern u16 dFTNessAnimPKThunderEndAir_joint22[130];
extern u16 dFTNessAnimPKThunderEndAir_joint24[58];
extern u16 dFTNessAnimPKThunderEndAir_joint25[172];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimPKThunderEndAir_joints[] = {
	(u32)dFTNessAnimPKThunderEndAir_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimPKThunderEndAir_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimPKThunderEndAir_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimPKThunderEndAir_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimPKThunderEndAir_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimPKThunderEndAir_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimPKThunderEndAir_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimPKThunderEndAir_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimPKThunderEndAir_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimPKThunderEndAir_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimPKThunderEndAir_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimPKThunderEndAir_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimPKThunderEndAir_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimPKThunderEndAir_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimPKThunderEndAir_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimPKThunderEndAir_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimPKThunderEndAir_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimPKThunderEndAir_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimPKThunderEndAir_joint25, /* [24] joint 25 */
	0xFFFF02BD, /* [25] END */
};

/* Joint 1 */
u16 dFTNessAnimPKThunderEndAir_joint1[70] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -406, 0, 0, 0, 0, 5, 242, 0, 0, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 14), 17, 12, 421, -75,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 31), -209, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), -1, -5,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), 129, 210,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 27, 24, 266, -247, 288, 173,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 38, 31, 146, -203, 277, -176,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 54, 28, 92, 5, 138, -289,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 62, 12, 150, 175, 30, -64,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 65, 242, 24,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimPKThunderEndAir_joint2[44] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 41), 14,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 34,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -20, 0, 0, -1,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 7), -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 88, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 717, 69,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 0, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 1623, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 2458, 80,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), 2715,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTNessAnimPKThunderEndAir_joint4[50] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 250, 0, 0, -26, 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 81, -48, -467, -59, -83, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -280, -2, -649, -23, 269, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 58, 32, -711, 10, 0, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 163, 6, -510, 52,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 148, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimPKThunderEndAir_joint5[174] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 755, 368, -680, -72, -1188, -352,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1168, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1123, -186, -1541, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 383, -297, -777, 327,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 528, 122, -887, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 627, 92, -924, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 859, 109, -913, -47,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1229, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1249, 44,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 991, 103, -973, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1078, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1206, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1421, 102,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1082, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1229, -12, -1122, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1268, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1071, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1038, 1, -1110, -42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1407, -124,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1452, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1218, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1121, -15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1496, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1496, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1378, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1335, -53,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1552, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1466, -31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1296, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1346, -45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1521, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1417, 49,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1280, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1256, -24, -1133, -11, -1389, 27,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimPKThunderEndAir_joint6[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -405, -79,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1020, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -960, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -883, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -736, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -668, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -829, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1059, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -858, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -776, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -670, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -631, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -724, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -686, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -682, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimPKThunderEndAir_joint7[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -577, 5, 123, -8, -261, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -476, 18, -18, -3, 293, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 0, 0, 268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTNessAnimPKThunderEndAir_joint8[44] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 236, 0, 0, 24, 0, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 11), 229, 9, 499, 35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 402, -8, 621, -16, 0, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 118, -9, 271, -45,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 271, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTNessAnimPKThunderEndAir_joint10[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 34,
	ftAnimBlock(0, 31),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimPKThunderEndAir_joint11[174] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2001, 65, 602, -29, -2466, 88,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -2579, -146,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 725, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -2280, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2260, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2375, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2746, 182, -2518, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2215, 196, 879, 83, -1966, 218,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 682, -230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2353, 32, -2082, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2149, 79, -1878, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2194, -54, 431, -137, -1968, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -2408, -60, 520, 94, -2069, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2473, -440, 647, 118, -2122, -432,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 653, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3289, -572, -2934, -572,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3618, -256, -3266, -260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3801, -73, -3456, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3764, -12, 554, -63, -3434, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 667, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -4105, -319, -3781, -325,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4464, -246, -4156, -273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4598, 22, 745, 105, -4327, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1183, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4420, 97, -4218, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -4307, 83, -4313, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4236, 33, -4362, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4239, -22, 1173, -8, -4447, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4282, -42, 1166, -6, -4513, -66,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimPKThunderEndAir_joint12[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -650, -49,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -891, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -769, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -485, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -778, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -843, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -653, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -246, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -568, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -590, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -590, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -583, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimPKThunderEndAir_joint13[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 574, 0, -137, 17, -268, 30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 573, 161, 264,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 573, 161, 264,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimPKThunderEndAir_joint15[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	_FT_ANIM_CMD(11, 0, 1), 34,
	ftAnimBlock(0, 31),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimPKThunderEndAir_joint16[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, 1, -407, 1, -649, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -290, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -368, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -881, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -900, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -805, -74,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -243, 71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -85, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -419, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -168, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -168, -71, -940, -106,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -234, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -995, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -997, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -977, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -235, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -256, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -173, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -77, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1008, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -883, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -90, -12, -261, -5, -808, 74,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimPKThunderEndAir_joint18[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1013, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 547, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 477, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 219, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 451, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 771, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 778, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 343, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 395, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 511, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 464, -47,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimPKThunderEndAir_joint19[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 163, 2, 238, -4, 59, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -39, -47, 457, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 351, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 387, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 617, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -96, -78, 476, 57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -229, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 692, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 609, -98,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 292, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 653, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 341, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -124, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 169, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 112, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -31, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 351, 6, 324, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 244, -40, 155, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 219, -25, -21, 9, 120, -34,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimPKThunderEndAir_joint21[50] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -336, 0, 129, -6, 76, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -496, -22, 103, -5, 61, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -581, -7, 68, -10, 178, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -590, -21, -29, 4, 27, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -870, 11, 134, 7, 56, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -439, 74, 35,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTNessAnimPKThunderEndAir_joint22[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1091, 2, 1112, 5, 1432, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1383, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1327, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 914, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 838, -65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 762, -29,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1395, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1326, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1319, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1629, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 689, -128,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 309, 28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1252, -63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1299, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1786, -88,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1330, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 394, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 767, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1418, 63, 924, 59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 802, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1284, -16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1335, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1354, -68,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 789, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1480, -91, 637, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1538, -33, 666, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1547, -9, 1276, -8, 705, 38,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimPKThunderEndAir_joint24[58] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1098, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 491, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 497, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 725, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 636, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 549, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 357, -271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 375, 254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 509, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 543, 34,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimPKThunderEndAir_joint25[172] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1937, 18, 1886, -32, 1607, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1544, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1821, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 2024, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2047, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1861, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1549, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1553, 89,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1867, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1793, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1680, 119,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1684, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1815, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1653, 120,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1795, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -2028, -26,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1847, 146,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2215, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1688, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1790, 24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2299, -57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1926, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2034, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1997, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1948, 49, 1799, 9, 1832, -93,
	ftAnimEnd(),
	0x48E0, 0xFF82, 0xFFAE, 0xFFF4, 0x200E, 0xFF31, 0x0006, 0xFF52, 0x0008, 0xFF6A, 0x0001, 0x200F, 0x0004, 0xFEAE, 0xFFCA, 0xFFCE, 0x0002, 0xFF84, 0xFFF2, 0x200F, 0x0007, 0xFCE0, 0x0012, 0xFF6E, 0xFFEA, 0xFECB, 0xFFD0, 0x200F, 0x0007, 0xFFA5, 0x000B, 0xFE9C, 0xFFFA, 0xFCEA, 0xFFF8, 0x200F, 0x0006, 0xFD80, 0xFFE6, 0xFF19, 0x0011, 0xFE51, 0x0030, 0x380F, 0x0007, 0xFE36, 0xFF88, 0xFF85, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
