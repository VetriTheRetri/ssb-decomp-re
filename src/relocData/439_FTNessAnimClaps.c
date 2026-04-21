/* AnimJoint data for relocData file 439 (FTNessAnimClaps) */
/* 1968 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimClaps_joint1[36];
extern u16 dFTNessAnimClaps_joint2[8];
extern u16 dFTNessAnimClaps_joint4[22];
extern u16 dFTNessAnimClaps_joint5[130];
extern u16 dFTNessAnimClaps_joint6[42];
extern u16 dFTNessAnimClaps_joint7[48];
extern u16 dFTNessAnimClaps_joint8[22];
extern u16 dFTNessAnimClaps_joint10[12];
extern u16 dFTNessAnimClaps_joint11[130];
extern u16 dFTNessAnimClaps_joint12[50];
extern u16 dFTNessAnimClaps_joint13[48];
extern u16 dFTNessAnimClaps_joint15[12];
extern u16 dFTNessAnimClaps_joint16[36];
extern u16 dFTNessAnimClaps_joint18[32];
extern u16 dFTNessAnimClaps_joint19[68];
extern u16 dFTNessAnimClaps_joint21[48];
extern u16 dFTNessAnimClaps_joint22[36];
extern u16 dFTNessAnimClaps_joint24[30];
extern u16 dFTNessAnimClaps_joint25[68];
extern u16 dFTNessAnimClaps_joint26[54];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimClaps_joints[] = {
	(u32)dFTNessAnimClaps_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimClaps_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimClaps_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimClaps_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimClaps_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimClaps_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimClaps_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimClaps_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimClaps_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimClaps_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimClaps_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimClaps_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimClaps_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimClaps_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimClaps_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimClaps_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimClaps_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimClaps_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimClaps_joint25, /* [24] joint 25 */
	(u32)dFTNessAnimClaps_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimClaps_joint1[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 71, 740, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, -87, 6,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 10), 657, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), 2,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 14), 8,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_TRAY, 10), 740, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 71,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimClaps_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -89, 0, 89,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -14),
};

/* Joint 4 */
u16 dFTNessAnimClaps_joint4[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -40, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 18, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 0,
	ftAnimLoop(0x6800, -40),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimClaps_joint5[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 600, -71, -94, 108, -975, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -915, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 528, -216, 14, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 167, -303, 249, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -79, -95, 368, 46, -877, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -919, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -23, 92, 343, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -45, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 406, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 492, 66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 560, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -934, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -937, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -66, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 502, -198, 32, 159,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -129, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 252, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 369, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -74, 112, 346, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 320, 191,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -72, -41,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -949, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -974, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 477, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 590, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 600, 9, -94, -21, -975, -1,
	ftAnimLoop(0x6800, -256),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimClaps_joint6[42] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimLoop(0x6800, -82),
};

/* Joint 7 */
u16 dFTNessAnimClaps_joint7[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -875, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -96, 16, -96, -21, 46, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -742, -116, -172, -16, 3, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -910, 131, -214, 41, -121, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -214, 3, -8, 21, -34, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -875, 0, 0,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimClaps_joint8[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -40,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 20, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -61, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 9), -40,
	ftAnimLoop(0x6800, -40),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNessAnimClaps_joint10[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimClaps_joint11[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -89, -235, -1835, 181, 603, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -324, -215, -1654, 191, 658, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -520, -110, -1452, 160, 722, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -545, -11, -1332, 42, 706, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -543, 17, -1367, -50, 714, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1797, -41, 615, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -339, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -222, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -139, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -110, -84, -1820, 70, 600, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 682, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -309, -183, -1656, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -477, -94, -1468, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -498, -6, -1346, 50, 656, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 621, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -489, 18, -1366, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1810, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -313, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -206, 95, 607, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -123, 58, 600, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -89, 33, -1835, -25, 603, 3,
	ftAnimLoop(0x6800, -256),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimClaps_joint12[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 9,
	ftAnimLoop(0x6800, -98),
};

/* Joint 13 */
u16 dFTNessAnimClaps_joint13[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1786, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 2250, 12, 38, -14, -88, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1888, -39, -112, 16, -29, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1973, 86, 155, 30, 13, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 2236, -18, 10, -15, -135, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 1786, 0, 0,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimClaps_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimClaps_joint16[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -83, 0, 0, 0, 37, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 19), -83, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 112, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 112, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 43, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -83, 0, 0, 0, 37, -5,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimClaps_joint18[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimClaps_joint19[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 47, 1, 72, 0, 452, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 45, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 86, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 343, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 302, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 296, 31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 38, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 46, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 331, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 449, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 82, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 73, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 47, 0, 72, -1, 452, 3,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimClaps_joint21[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 131, 33, -69,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 125, -3, 27, -2, -67, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 99, -7, 19, 0, -64, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 90, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 23, 1, -66, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 28, 1, -68, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 131, 33, -69,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimClaps_joint22[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1602, 0, 1593, 0, -1572, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 19), -1601, 0, 1593, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1491, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1480, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1565, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1601, 0, 1593, 0, -1568, -2,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimClaps_joint24[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimClaps_joint25[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1635, -1, -1561, -3, -1241, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1596, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1630, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1275, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1326, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1443, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1593, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1562, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1435, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1248, 14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1630, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1634, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1635, 0, -1561, 0, -1237, 10,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimClaps_joint26[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 132, -37, 45,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 127, -4, -35, 0, 43, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 98, -3, -32, 0, 41, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 88, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -33, 0, 42, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -35, 0, 44, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 132, -37, 45,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
