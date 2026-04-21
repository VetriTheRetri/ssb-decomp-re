/* AnimJoint data for relocData file 797 (FTFoxAnimShineAirEnd) */
/* 1072 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimShineAirEnd_joint1[12];
extern u16 dFTFoxAnimShineAirEnd_joint2[10];
extern u16 dFTFoxAnimShineAirEnd_joint4[10];
extern u16 dFTFoxAnimShineAirEnd_joint5[34];
extern u16 dFTFoxAnimShineAirEnd_joint7[32];
extern u16 dFTFoxAnimShineAirEnd_joint8[18];
extern u16 dFTFoxAnimShineAirEnd_joint10[12];
extern u16 dFTFoxAnimShineAirEnd_joint11[88];
extern u16 dFTFoxAnimShineAirEnd_joint12[32];
extern u16 dFTFoxAnimShineAirEnd_joint13[14];
extern u16 dFTFoxAnimShineAirEnd_joint15[10];
extern u16 dFTFoxAnimShineAirEnd_joint16[34];
extern u16 dFTFoxAnimShineAirEnd_joint18[30];
extern u16 dFTFoxAnimShineAirEnd_joint20[34];
extern u16 dFTFoxAnimShineAirEnd_joint21[24];
extern u16 dFTFoxAnimShineAirEnd_joint23[24];
extern u16 dFTFoxAnimShineAirEnd_joint24[34];
extern u16 dFTFoxAnimShineAirEnd_joint25[14];
extern u16 dFTFoxAnimShineAirEnd_joint26[18];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimShineAirEnd_joints[] = {
	(u32)dFTFoxAnimShineAirEnd_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimShineAirEnd_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimShineAirEnd_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimShineAirEnd_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimShineAirEnd_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTFoxAnimShineAirEnd_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimShineAirEnd_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimShineAirEnd_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimShineAirEnd_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimShineAirEnd_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimShineAirEnd_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimShineAirEnd_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimShineAirEnd_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimShineAirEnd_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimShineAirEnd_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimShineAirEnd_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimShineAirEnd_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimShineAirEnd_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimShineAirEnd_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimShineAirEnd_joint1[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 960, 0,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimShineAirEnd_joint2[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 15,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTFoxAnimShineAirEnd_joint4[10] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 18), -268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimShineAirEnd_joint5[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1451, -26, -1801, 5, 1035, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 17), -1330, 3, -1329, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 879, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 909, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1141, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1331, 0, -1323, 5, 1151, 9,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimShineAirEnd_joint7[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -582, 105,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -116, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTFoxAnimShineAirEnd_joint8[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 18), 178, 268,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 18), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTFoxAnimShineAirEnd_joint10[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	_FT_ANIM_CMD(11, 0, 1), 6,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimShineAirEnd_joint11[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1014, -5, 1687, -44, 1197, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1321, 182,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1019, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1571, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1694, 156,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2250, -53,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1530, 177,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1932, 94,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1109, 108,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1285, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2144, -126,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1592, -41,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2018, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1973, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1165, -90,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1094, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1592, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1976, 3, 1090, -3, 1592, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimShineAirEnd_joint12[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -606, -44,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -957, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -902, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -398, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -121, 195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimShineAirEnd_joint13[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 625, -38,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 272, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 18), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTFoxAnimShineAirEnd_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimShineAirEnd_joint16[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -30, 0, -105, 1, 145, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 17), 0, 0, -5, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 152, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 132, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 20, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, -5, 0, 18, -1,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimShineAirEnd_joint18[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 227, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 111, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 5, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 5,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTFoxAnimShineAirEnd_joint20[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 22, 3, 44, 11, 40, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 17), -14, -3, -63, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 365, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 403, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 607, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -16, -2, -64, -1, 610, 2,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimShineAirEnd_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1630, -2, 1501, 0, 1711, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 1599, 1, 1602, 1, 1119, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1600, 0, 1603, 0, 1116, -2,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimShineAirEnd_joint23[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 279, 14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 676, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 671, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 629, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 626, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimShineAirEnd_joint24[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 165, 0, 51, -11, 50, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 17), -10, -6, 123, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -104, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -100, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -93, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -14, -3, 124, 0, -91, 1,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimShineAirEnd_joint25[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 442, -18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -126, -96,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 18), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTFoxAnimShineAirEnd_joint26[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 16,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 64, -450,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 18), 402,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
