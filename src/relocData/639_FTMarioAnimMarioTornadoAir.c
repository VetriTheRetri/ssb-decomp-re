/* AnimJoint data for relocData file 639 (FTMarioAnimMarioTornadoAir) */
/* 4368 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimMarioTornadoAir_joint1[80];
extern u16 dFTMarioAnimMarioTornadoAir_joint2[118];
extern u16 dFTMarioAnimMarioTornadoAir_joint4[144];
extern u16 dFTMarioAnimMarioTornadoAir_joint5[294];
extern u16 dFTMarioAnimMarioTornadoAir_joint6[62];
extern u16 dFTMarioAnimMarioTornadoAir_joint7[30];
extern u16 dFTMarioAnimMarioTornadoAir_joint8[64];
extern u16 dFTMarioAnimMarioTornadoAir_joint10[70];
extern u16 dFTMarioAnimMarioTornadoAir_joint11[298];
extern u16 dFTMarioAnimMarioTornadoAir_joint12[80];
extern u16 dFTMarioAnimMarioTornadoAir_joint13[8];
extern u16 dFTMarioAnimMarioTornadoAir_joint15[34];
extern u16 dFTMarioAnimMarioTornadoAir_joint16[216];
extern u16 dFTMarioAnimMarioTornadoAir_joint18[86];
extern u16 dFTMarioAnimMarioTornadoAir_joint20[158];
extern u16 dFTMarioAnimMarioTornadoAir_joint21[158];
extern u16 dFTMarioAnimMarioTornadoAir_joint23[236];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimMarioTornadoAir_joints[] = {
	(u32)dFTMarioAnimMarioTornadoAir_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimMarioTornadoAir_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimMarioTornadoAir_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimMarioTornadoAir_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimMarioTornadoAir_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimMarioTornadoAir_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimMarioTornadoAir_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimMarioTornadoAir_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimMarioTornadoAir_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimMarioTornadoAir_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimMarioTornadoAir_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimMarioTornadoAir_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimMarioTornadoAir_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimMarioTornadoAir_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimMarioTornadoAir_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimMarioTornadoAir_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimMarioTornadoAir_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	0xFFFF03ED, /* [23] END */
};

/* Joint 1 */
u16 dFTMarioAnimMarioTornadoAir_joint1[80] = {
	ftAnimSetValAfter(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 600,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ), -14, 223, 0, 0,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 43), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY, 50), 223,
	ftAnimSetValT(FT_ANIM_ROTX, 55), -14,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 14), 960, 70,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 27), 960, 10,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 997, 483,
	ftAnimSetValRateT(FT_ANIM_TRAY, 10), 1278, 5,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 0, -3, 0, -8,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 8), -4, -10,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 223, -5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 0, 0, 600, -507, 0, 1,
	ftAnimBlock(0, 2),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -191,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), -3216, -46,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), 103, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 13), 0, 4,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimMarioTornadoAir_joint2[118] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 43), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTZ, 1), 5,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), -189, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -73, 7,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 2,
	ftAnimSetValAfter(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTY), -621, 394,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1608, 414,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 41), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_TRAX, 54), 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), 21, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 35), 24438, 621,
	ftAnimBlock(0, 24),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -68, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 0, 22,
	ftAnimSetValT(FT_ANIM_ROTY, 19), 24690,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 38), 0, 0,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4915, 4915, 4915,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 38), 4096, 4096, 4096,
	ftAnimBlock(0, 9),
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 10), 0,
	ftAnimBlock(0, 3),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 100,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), 28952, -1,
	ftAnimBlock(0, 7),
	ftAnimSetValRateT(FT_ANIM_TRAX, 19), 0, 0,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 0, -3, 0, -5,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimMarioTornadoAir_joint4[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 670, -91, -241, 58, -156, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 111, -5, 430, 17, 39, 5,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimSetVal(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValAfter(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY, 27), 0, 0,
	ftAnimSetValT(FT_ANIM_TRAZ, 41), 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 34), 446, 20, 430, -4, 39, 0,
	ftAnimBlock(0, 25),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 9), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 846, 133, 258, -57, 23, -5, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 846, 258, 23, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 846, -234, 258, -64, 23, -5, 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 0, 0, 0, -2, 0, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -89, -60, 0, -18, 0, -1,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3, 30, -23,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 483, -371,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -138, 5,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 26), -92,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 26), 0, 0, -14, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 134, 11, 0, -20, 0, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 134, 4, 0, 17, 0, 7,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimMarioTornadoAir_joint5[294] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 823, -9, -99, -23, -1311, 17,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1139, 485,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 41), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -122, -335, -1294, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -769, -320, -1643, -506,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1784, 397, -763, 19, -2308, -419,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1925, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -730, 29, -2483, -95,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2462, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -461, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1911, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1168, -29,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2422, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -1718, 16,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1137, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1008, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -446, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -306, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1704, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1613, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1011, -26, -1610, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 955, -203, -1506, 327,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 604, -171, -955, 273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 612, -11, -308, 33, -960, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -311, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 581, 10, -899, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 633, 203, -972, -289,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 6144, 6144, 6144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 987, 193, -532, -48, -1478, -279,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1041, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -409, 59, -1531, -32,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -414, -3, -1544, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -1426, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), -582, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1059, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 1422, 8,
	ftAnimBlock(0, 5),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 33), 4096, 4096, 4096,
	ftAnimBlock(0, 16),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1430, 1, -1407, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1367, -38, -1263, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1322, 107, -603, -41, -1197, -94,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -671, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1582, 222, -1453, -213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1767, 168, -1624, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 2471, 453, -2282, -442,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3010, 390, -2811, -383,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 3404, 40, -3203, -47,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -622, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -522, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3433, 23, -3241, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3452, 15, -3274, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3464, 11, -474, 47, -3305, -31,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimMarioTornadoAir_joint6[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 36), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -365,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -740, -370,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -740, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -464, 366,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -256, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -383, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -439, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, 55,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimMarioTornadoAir_joint7[30] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 64), 0, -1, 0, -1, 0, 2,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimBlock(0, 59),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), -115, 0, -132, 0, 190, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimMarioTornadoAir_joint8[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -16, -29, -60, 0, 43, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -31, 0, -60, 0, 29, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 34), -31, -2, -60, 1, 29, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -134, -4, 0, 2, 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -134, -14, 0, 39, 0, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -360, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 625, -345,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 127, 15, 0, -17, 0, 14,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimMarioTornadoAir_joint10[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -362, 71, 284, 12, 76, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 103, 2, 159, -3, 4, -1,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 34), -249, -2, 159, -3, 4, 0, 0, 0, 0, 5, 0, -1,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 47), 0, 0, 54, 7, -17, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 12, 0, -7, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 0, -5, 0, 3, 0, -5,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimMarioTornadoAir_joint11[298] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 308, 48, 1511, -21, 293, 20,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 223, -364,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 41), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1490, -335, 313, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 840, -323, -52, -480,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -372, -405, 843, 19, -647, -404,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -615, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 879, 30, -862, -121,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -846, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 1152, 15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -595, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 19, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -807, 46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -122, 18,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 39, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 86, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1168, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1325, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -98, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -10, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 83, 32, -5, 65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 321, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 119, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 367, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 303, -11, 362, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 270, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1366, 6, 398, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1201, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 353, -157,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 6144, 6144, 6144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 111, -86, 84, -139,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 58, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 45, -13,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1198, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1195, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 44, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 58, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 34, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -10, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 33), 4096, 4096, 4096,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -6, 49, 1202, 48, 73, 93,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 114, 2, 1396, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 373, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 389, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 674, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 116, 4, 1394, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 341, 49, 1294, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 389, 24, 1259, -67, 697, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1029, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 712, 177, 907, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 907, 187, 1088, 173,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1385, 27, 1515, 20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1061, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1122, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1407, 21, 1146, 24, 1530, 14,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimMarioTornadoAir_joint12[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -512, -256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -512, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -512, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -269, 252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -64, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -295, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -501, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -490, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -414, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, 29,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimMarioTornadoAir_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 625, 0, 0,
	ftAnimBlock(0, 83),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTMarioAnimMarioTornadoAir_joint15[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 2002, 394,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), -804,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1608, -32, 0, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 1608, 10, 0, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 1872, 8, 263, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 17), 1872, -4, 263, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 39), 1608, 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimMarioTornadoAir_joint16[216] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 620, 75, -237, -9, -333, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -325, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -155, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 742, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 507, -296,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 149, -259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -11, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -127, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -148, 0, -312, -68,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -541, -64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -261, -28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -178, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -90, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -590, -40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -146, 110,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -288, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -478, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -36, 108,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 604, 12,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -66, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 206, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -465, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 31, 211,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 617, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 683, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 217, -77, 841, -235,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -452, -332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -122, -125, 142, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -33, 46, -126, -129,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -22, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -116, 17, -453, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -96, -62, -454, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 27, -20, -215, -78, -99, 307,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -51, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -265, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 160, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 156, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 28), -32, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -43, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 37), 114, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -266, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 33), -12, 10,
	ftAnimBlock(0, 23),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -47, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -222, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 109, -4, -3, 9, -247, -25,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimMarioTornadoAir_joint18[86] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 317, 251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 502, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1166, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1148, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 387, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 261, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 307,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 876, 581,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1162, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1213, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1162, -376,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 461, -581,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 34), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 183, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 229, 45,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimMarioTornadoAir_joint20[158] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -128, -51, -207, 3, -3, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -31, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 35), 346, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -116, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 19, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 56, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 56, -11, -26, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), 72, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), 40, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 31, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -175, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -81, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -94, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -183, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -174, 76, 76, -13, 348, -120,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -45, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -30, 5, 105, -380,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -162, -50, -411, -258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -131, 61, -411, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -66, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -44, 0, -448, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 42), -33, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -411, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -263, -78, 6, 340,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 311, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -223, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -224, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 37), -264, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 314, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 363, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 374, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 443, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -260, 4, -33, 0, 436, -7,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimMarioTornadoAir_joint21[158] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 133, -30, -63, -22, 52, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -114, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), 316, 20, -40, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 336, 19, -40, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 588, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -10, 14,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -113, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -94, 21,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 592, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 413, -347, -56, 41, 18, -200,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -17, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -102, -257, -412, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -102, 15, -412, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -412, 300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -71, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), 104, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -10, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 217, 136, 151, 285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 262, 21, 158, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 253, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 160, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), 101, -4,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 251, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 164, -1,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 94, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -199, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 80, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 59, 6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -230, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -339, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 65, 6, 162, -1, -346, -7,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimMarioTornadoAir_joint23[236] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 36), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 510,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1029, 510,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1029, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1082, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1029, -541,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -514,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 352, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 418, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 699, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 716, 17,
	ftAnimEnd(),
	0x200E, 0x00ED, 0x0073, 0xFE7D, 0xFFCD, 0xFED0, 0xFFAC, 0x2805, 0x0008, 0xFE6D, 0x0049, 0x200B, 0x0005, 0x0086, 0xFF5F, 0xFF9D, 0x00AC, 0x200B, 0x0001, 0xFFD4, 0xFF5A, 0x005A, 0x00B3, 0x2803, 0x000A, 0xFDFA, 0xFFEE, 0x2809, 0x000B, 0x028A, 0x000E, 0x0801, 0x0002, 0x2005, 0x0001, 0xFEB7, 0x0045, 0x2805, 0x0010, 0xFFC9, 0x0003, 0x0801, 0x0007, 0x2003, 0x0001, 0xFDE4, 0xFFEC, 0x2803, 0x0012, 0xFC6F, 0xFFF1, 0x2009, 0x0001, 0x0299, 0x000E, 0x2809, 0x0011, 0x0388, 0x000B, 0x0801, 0x0007, 0x2005, 0x0001, 0xFFCC, 0x0002, 0x2805, 0x000D, 0xFFC7, 0xFFF3, 0x0801, 0x0009, 0x200B, 0x0001, 0xFC5E, 0x00B6, 0x0394, 0xFFE3, 0x200B, 0x0001, 0xFDDC, 0x0233, 0x034D, 0xFD57, 0x200B, 0x0001, 0x00C4, 0x0174, 0xFE41, 0xFD7A, 0x200B, 0x0001, 0x00C4, 0xFFF8, 0xFE41, 0xFFDD, 0x280D, 0x0001, 0xFFAB, 0x0000, 0xFDFA, 0x0000, 0x3803, 0x0001, 0x00B3, 0x200F, 0x0001, 0x00C4, 0x0060, 0xFFC7, 0x0079, 0xFE41, 0x0145, 0x200F, 0x0001, 0x0174, 0x005A, 0x009E, 0x007B, 0x0083, 0x0174, 0x2807, 0x0003, 0x0161, 0xFFFA, 0x00C3, 0x0002, 0x2009, 0x0002, 0x0134, 0x0009, 0x2009, 0x0001, 0x013C, 0x0006, 0x2809, 0x0024, 0x00B5, 0xFFF9, 0x2007, 0x0001, 0x015D, 0xFFFC, 0x00C5, 0x0002, 0x2805, 0x0024, 0xFF7F, 0xFFFB, 0x2003, 0x0023, 0x0057, 0xFFF1, 0x200B, 0x0001, 0x0047, 0xFFF2, 0x00AD, 0xFFF8, 0x200F, 0x0001, 0x0039, 0xFFF2, 0xFF7A, 0xFFFC, 0x00A4, 0xFFF8, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
