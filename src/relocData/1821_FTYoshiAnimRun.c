/* AnimJoint data for relocData file 1821 (FTYoshiAnimRun) */
/* 2400 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimRun_joint1[26];
extern u16 dFTYoshiAnimRun_joint2[80];
extern u16 dFTYoshiAnimRun_joint3[34];
extern u16 dFTYoshiAnimRun_joint6[42];
extern u16 dFTYoshiAnimRun_joint7[90];
extern u16 dFTYoshiAnimRun_joint10[48];
extern u16 dFTYoshiAnimRun_joint11[72];
extern u16 dFTYoshiAnimRun_joint12[48];
extern u16 dFTYoshiAnimRun_joint13[20];
extern u16 dFTYoshiAnimRun_joint14[10];
extern u16 dFTYoshiAnimRun_joint15[28];
extern u16 dFTYoshiAnimRun_joint17[28];
extern u16 dFTYoshiAnimRun_joint18[138];
extern u16 dFTYoshiAnimRun_joint20[72];
extern u16 dFTYoshiAnimRun_joint22[124];
extern u16 dFTYoshiAnimRun_joint23[112];
extern u16 dFTYoshiAnimRun_joint25[62];
extern u16 dFTYoshiAnimRun_joint26[114];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimRun_joints[] = {
	(u32)dFTYoshiAnimRun_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimRun_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimRun_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimRun_joint6, /* [3] joint 6 */
	0x00000000, /* [4] NULL */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimRun_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimRun_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimRun_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimRun_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimRun_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimRun_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimRun_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimRun_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimRun_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimRun_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimRun_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimRun_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimRun_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTYoshiAnimRun_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimRun_joint1[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAY), 746,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 7), 600,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 6,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 6), 746,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 6), 746,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 7), 600,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTYoshiAnimRun_joint2[80] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), -89,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 13), 89,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX), -44, 30,
	ftAnimSetValRateBlock(FT_ANIM_TRAY), -60, -605,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 7), 240,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 6,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 12), 44, -30,
	_FT_ANIM_CMD(11, FT_ANIM_ROTZ | FT_ANIM_TRAX, 1), 6,
	ftAnimSetValRateBlock(FT_ANIM_TRAZ), 1, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 6), 43,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 11), -89,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), -60, -669,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 7), 240,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 12), -44, 30,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 1, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 7), 43,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 13), 89,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), -60, -605,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 7), 240,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 12), 44, -30,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), 1, 0,
	ftAnimLoop(0x6800, -156),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimRun_joint3[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 446, -76, -64,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 14, 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 223,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 446, 93, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -14, 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 223,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 446, -76, -64,
	ftAnimLoop(0x6800, -66),
};

/* Joint 6 */
u16 dFTYoshiAnimRun_joint6[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -352, 0, 22, -4, 26, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -135, -1, -28, 0, -35, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -365, 0, 23, 4, 29, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -137, 1, 22, 0, 35, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -352, 0, 22, -4, 26, -5,
	ftAnimLoop(0x6800, -80),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimRun_joint7[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1510, 9, 1430, -8, 1158, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1455, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 1303, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1189, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1076, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1122, -43,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1466, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1619, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1062, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 876, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1562, 53, 968, 91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1259, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1503, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1330, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1436, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1258, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1180, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1510, -6, 1430, -6, 1158, -22,
	ftAnimLoop(0x6800, -176),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTYoshiAnimRun_joint10[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -679, 45,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -361, 263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 180,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -8, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -534, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -630, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -677, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -679, -1,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTYoshiAnimRun_joint11[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1537, -22, 1997, -13, 790, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1781, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), -1742, 14, 1274, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1727, 14, 1228, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1183, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1600, 54,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1793, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1995, 7,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1129, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 975, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 881, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1552, 31, 811, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1537, 15, 1997, 1, 790, -21,
	ftAnimLoop(0x6800, -140),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimRun_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -8, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -8, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -457, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -560, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -201, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -8,
	ftAnimLoop(0x6800, -94),
};

/* Joint 13 */
u16 dFTYoshiAnimRun_joint13[20] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 268, -9, 1295, -12, -312, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 89, 1072, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 268, 1295, -312,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimRun_joint14[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1072, 1608, 0,
	_FT_ANIM_CMD(11, 0, 1), 5,
	ftAnimBlock(0, 24),
	ftAnimLoop(0x6800, -18),
};

/* Joint 15 */
u16 dFTYoshiAnimRun_joint15[28] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -268,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), 89,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 1,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -268,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), 89,
	ftAnimBlock(0, 1),
	ftAnimLoop(0x6800, -54),
};

/* Joint 17 */
u16 dFTYoshiAnimRun_joint17[28] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), -178,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 4,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), -178,
	ftAnimBlock(0, 4),
	ftAnimLoop(0x6800, -54),
};

/* Joint 18 */
u16 dFTYoshiAnimRun_joint18[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 1, 23, -5, 415, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 61, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 454, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 528, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 97, -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -76, -165,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -733, -277,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 31, 72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 412, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -999, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 141, 244, -1014, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 550, 165, 567, 16, -633, 171,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -750, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 30, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 472, -170,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 59, -119,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -644, 131,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -234, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -30, -69, -5, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 54, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 0, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -223, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 93, 237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 321, 137,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 395, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 34, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 23, -11, 411, 15,
	ftAnimLoop(0x6800, -272),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimRun_joint20[72] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 477, 351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 709, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 893, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1083, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1192, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1065, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 418, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 368, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 503, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 258, -248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimLoop(0x6800, -140),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTYoshiAnimRun_joint22[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1718, -31, 150, -37, 81, -78,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 1563, -47, -59, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -144, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -399, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -489, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -511, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -264, 161,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1500, -115, -169, -182,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -645, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1332, -270, -103, 255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 958, 17, 246, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1367, 317, -118, -273,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -177, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1594, 127, -334, 260,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 99, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1661, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1681, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1689, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -248, -84,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -205, 125,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 108, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 169, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -35, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1718, 28, 150, -18, 79, 114,
	ftAnimLoop(0x6800, -244),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimRun_joint23[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -443, 264, -417, 242, -686, -97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 9, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 4, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -687, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -497, 204,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 88, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -20, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1, -17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 291, 125,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 406, 13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -37, -21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 415, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 377, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 162, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -467, -279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -34, -74, -783, -277,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -987, 180,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -525, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -55, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -159, -227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -510, -142, -660, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -443, 67, -417, 108, -686, -25,
	ftAnimLoop(0x6800, -220),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimRun_joint25[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 912, -56,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 553, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 236, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -118,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 587, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 707, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1259, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1152, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1018, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 912, -106,
	ftAnimLoop(0x6800, -122),
};

/* Joint 26 */
u16 dFTYoshiAnimRun_joint26[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1798, -173, 617, -307, -160, -151,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1534, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -303, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 19, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -16, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -180, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1538, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1540, -39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -294, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 23, -84,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1501, -5, -155, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 1652, 49, 57, 81,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -108, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -427, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -437, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -394, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1717, 109, 168, 181, -231, 146,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 641, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1871, 204, -100, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2126, -36, 134, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1798, -327, 617, -23, -160, -294,
	ftAnimLoop(0x6800, -224),
	ftAnimEnd(),
};
