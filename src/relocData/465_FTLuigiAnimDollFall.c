/* AnimJoint data for relocData file 465 (FTLuigiAnimDollFall) */
/* 3280 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLuigiAnimDollFall_joint1[46];
extern u16 dFTLuigiAnimDollFall_joint2[100];
extern u16 dFTLuigiAnimDollFall_joint3[12];
extern u16 dFTLuigiAnimDollFall_joint5[10];
extern u16 dFTLuigiAnimDollFall_joint6[212];
extern u16 dFTLuigiAnimDollFall_joint7[38];
extern u16 dFTLuigiAnimDollFall_joint8[10];
extern u16 dFTLuigiAnimDollFall_joint9[12];
extern u16 dFTLuigiAnimDollFall_joint11[58];
extern u16 dFTLuigiAnimDollFall_joint12[152];
extern u16 dFTLuigiAnimDollFall_joint13[38];
extern u16 dFTLuigiAnimDollFall_joint16[10];
extern u16 dFTLuigiAnimDollFall_joint17[232];
extern u16 dFTLuigiAnimDollFall_joint19[94];
extern u16 dFTLuigiAnimDollFall_joint21[134];
extern u16 dFTLuigiAnimDollFall_joint22[168];
extern u16 dFTLuigiAnimDollFall_joint24[86];
extern u16 dFTLuigiAnimDollFall_joint25[178];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTLuigiAnimDollFall_joints[] = {
	(u32)dFTLuigiAnimDollFall_joint1, /* [0] joint 1 */
	(u32)dFTLuigiAnimDollFall_joint2, /* [1] joint 2 */
	(u32)dFTLuigiAnimDollFall_joint3, /* [2] joint 3 */
	(u32)dFTLuigiAnimDollFall_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTLuigiAnimDollFall_joint6, /* [5] joint 6 */
	(u32)dFTLuigiAnimDollFall_joint7, /* [6] joint 7 */
	(u32)dFTLuigiAnimDollFall_joint8, /* [7] joint 8 */
	(u32)dFTLuigiAnimDollFall_joint9, /* [8] joint 9 */
	(u32)dFTLuigiAnimDollFall_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTLuigiAnimDollFall_joint12, /* [11] joint 12 */
	(u32)dFTLuigiAnimDollFall_joint13, /* [12] joint 13 */
	(u32)dFTLuigiAnimDollFall_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLuigiAnimDollFall_joint17, /* [16] joint 17 */
	(u32)dFTLuigiAnimDollFall_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTLuigiAnimDollFall_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTLuigiAnimDollFall_joint22, /* [21] joint 22 */
	(u32)dFTLuigiAnimDollFall_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTLuigiAnimDollFall_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTLuigiAnimDollFall_joint1[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -182, 116, -907, -17, 264, -144, 161, 95, 7798, 25, -281, 281,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 20), 0, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 0, 2, 0, 12, 0, -3, 270, -64, 6787, -3119,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 69), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 19), 0, -31, 0, -786,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 50), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLuigiAnimDollFall_joint2[100] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 13, 0, 748, 0, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 9, -386, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 51, -13, -152, 2, 76, -16, -46, -22, 629, 14, 5, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), -252, -9, 463, 15, -911, -32, -46, 0, 368, -62, 5, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY), 13, -25, 64, 2463,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 3), -114, 10, 248, -13, -135, 62, 800, 526,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), -46, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 20, 0, 92, 0, 766, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), -46, 0, 1104, -2, 5, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 17), -46, 5,
	ftAnimSetValRateT(FT_ANIM_TRAY, 17), 325, -733,
	ftAnimBlock(0, 10),
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 20, 92, 766,
	ftAnimBlock(0, 7),
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 16), -46, 5,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 16), 325,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTLuigiAnimDollFall_joint3[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimBlock(0, 70),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTLuigiAnimDollFall_joint5[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 70),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLuigiAnimDollFall_joint6[212] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -766, -2, -1381, 1, -1614, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -1657, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -821, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1306, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1176, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -930, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -932, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1084, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1648, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1356, 247,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -817, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -618, 202,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1081, 164, -1419, -320,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1008, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -380, 181, -1725, -188,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -11, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1796, -57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1414, 140,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -996, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -827, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -30, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -594, -28,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1291, 99,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1193, -48,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -600, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -514, 101,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1241, -102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2171, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -358, 229,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 407, 96,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -834, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -945, -24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 426, 15, -2194, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 321, -96, -2161, 5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -972, -101,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1319, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 168, -267, -2167, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -212, -190, -1765, 201,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -211, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1319, -1765,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -209, 0, -1317, 0, -1769, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -209, 0, -1317, 0, -1769, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTLuigiAnimDollFall_joint7[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 52), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -385, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 192,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTLuigiAnimDollFall_joint8[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 100,
	ftAnimBlock(0, 70),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLuigiAnimDollFall_joint9[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 397, 0, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 360, 0,
	ftAnimBlock(0, 70),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTLuigiAnimDollFall_joint11[58] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -263, 6, -56, 0, -383, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 156, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 187, 26, -14, 2, -334, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 187, -158, -14, -28, -334, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -603, -20, -154, -1, -42, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 33), -101, 8, -78, -2, -500, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -283, -10, -255, -10, 147, 38,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -283, -255, 147,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLuigiAnimDollFall_joint12[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 473, -11, 186, 34, -131, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), 543, 60, 394, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 452, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 470, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 357, -43,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 603, 57, 490, 92,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 798, -2, 818, 6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 317, -245,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -553, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 769, -273, 788, -348,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -534, -338,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 250, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 668, 214, -208, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 679, 4, -195, 22, -556, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 31), -149, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 678, -1, -163, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 406, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 415, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 369, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 512, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 402, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 1, -1,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 513, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 511, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -151, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -151, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), 1, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 511, 0, -2, -3, -149, 2,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTLuigiAnimDollFall_joint13[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 19), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -466,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -941, -602,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1205, 466,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 598,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 45), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -9,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTLuigiAnimDollFall_joint16[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 100,
	ftAnimBlock(0, 70),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLuigiAnimDollFall_joint17[232] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1472, 8, -1654, -17, 1562, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1530, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1844, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1664, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1824, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1581, 791, 1837, 262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3113, 754, 2348, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3089, -7, 2286, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 3046, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2344, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 2480, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1857, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1910, 6,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2481, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1896, 42, 2445, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3021, -56, -1825, 781, 2301, 381,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2934, 34, -333, 727, 3208, 333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3090, 62, -369, -11, 2968, -97,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2980, -30, 3144, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -355, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -367, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2999, 23, 3112, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 3334, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 2647, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2604, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 2710, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3354, 16, -370, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -562, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 3342, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3261, -115, 2814, 138,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 2745, -71, 3407, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -578, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -479, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2733, -12, 3418, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 2692, 39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), 3438, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -481, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -464, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -451, 111,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 68, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2773, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3065, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3065, 0, 69, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), 3065, 0, 69, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 69, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3065, 3438,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTLuigiAnimDollFall_joint19[94] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 393, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 252, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 374,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 757, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 485, -232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 291, -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 57, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 455, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 596, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 626, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 471, -202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 7, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLuigiAnimDollFall_joint21[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -332, 1, -256, 0, 709, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 46), 368, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 53), -195, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -368, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -550, -480,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1328, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -152, 642,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -44, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -28, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), -52, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -15, -462,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -978, -228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -471, 317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -342, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -230, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -409, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -460, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -233, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -196, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -185, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 350, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 254, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -200, 77, -185, 107, 242, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -30, 85, 19, 102, 386, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -30, 0, 19, 0, 386, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -30, 0, 19, 0, 386, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -30, 0, 19, 0, 386, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTLuigiAnimDollFall_joint22[168] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1817, -5, 1480, -13, 1494, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1703, -115, 1258, -98, 1512, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1562, -93, 1181, -59, 1388, -67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1028, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 1866, 191, 1893, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2061, 166, 2105, 182,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 2332, -3, 2410, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1148, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 1147, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2327, -392, 1144, -112, 2404, -419,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1548, -507, 921, 43, 1571, -658,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1312, 43, 1231, 221, 1086, -262,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1151, 68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1517, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1635, 247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1807, 99,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1889, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1183, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), 1782, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1543, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 1835, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1899, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 1799, 12,
	ftAnimBlock(0, 23),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1833, -46, 1788, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1637, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 1789, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1825, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 1848, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1639, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), 1639, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1848, 0, 1639, 0, 1789, 0,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTLuigiAnimDollFall_joint24[86] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 577, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 637, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 373, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 246, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 609, 470,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 947, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 591, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 542, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 88, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 56, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTLuigiAnimDollFall_joint25[178] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -731, -3, -24, 0, 675, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), 628, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), 36, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -755, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -791, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -691, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -514, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -489, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -481, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -485, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -488, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -930, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -848, 92,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -456, 193,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 605, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 193, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -250, 152,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -250, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 33, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -402, -22,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -262, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -421, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 181, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 184, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -422, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -487, 2,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -426, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -348, 183,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -484, 112, 178, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 101, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -58, 143, -263, 110,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -58, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -262, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -263, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -58, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -58, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -58, 0, -263, 0, 101, 0,
	ftAnimEnd(),
	0x0000, 0x0000,
};
