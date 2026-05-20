/* AnimJoint data for relocData file 446 (FTYoshiAnimUnknown1) */
/* 1232 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimUnknown1_joint1[16];
extern u16 dFTYoshiAnimUnknown1_joint2[16];
extern u16 dFTYoshiAnimUnknown1_joint3[16];
extern u16 dFTYoshiAnimUnknown1_joint4[22];
extern u16 dFTYoshiAnimUnknown1_joint6[8];
extern u16 dFTYoshiAnimUnknown1_joint7[56];
extern u16 dFTYoshiAnimUnknown1_joint8[14];
extern u16 dFTYoshiAnimUnknown1_joint10[58];
extern u16 dFTYoshiAnimUnknown1_joint11[64];
extern u16 dFTYoshiAnimUnknown1_joint12[24];
extern u16 dFTYoshiAnimUnknown1_joint14[58];
extern u16 dFTYoshiAnimUnknown1_joint15[26];
extern u16 dFTYoshiAnimUnknown1_joint17[26];
extern u16 dFTYoshiAnimUnknown1_joint18[26];
extern u16 dFTYoshiAnimUnknown1_joint20[28];
extern u16 dFTYoshiAnimUnknown1_joint22[26];
extern u16 dFTYoshiAnimUnknown1_joint23[26];
extern u16 dFTYoshiAnimUnknown1_joint25[28];
extern u16 dFTYoshiAnimUnknown1_joint26[26];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTYoshiAnimUnknown1_joints[] = {
	(AObjEvent32 *)dFTYoshiAnimUnknown1_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTYoshiAnimUnknown1_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTYoshiAnimUnknown1_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTYoshiAnimUnknown1_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTYoshiAnimUnknown1_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTYoshiAnimUnknown1_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTYoshiAnimUnknown1_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTYoshiAnimUnknown1_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTYoshiAnimUnknown1_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTYoshiAnimUnknown1_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTYoshiAnimUnknown1_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTYoshiAnimUnknown1_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTYoshiAnimUnknown1_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTYoshiAnimUnknown1_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTYoshiAnimUnknown1_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTYoshiAnimUnknown1_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTYoshiAnimUnknown1_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTYoshiAnimUnknown1_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTYoshiAnimUnknown1_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimUnknown1_joint1[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 0, 4096, 4096, 4096,
	_FT_ANIM_CMD(11, 0, 1), 3,
	ftAnimBlock(0, 40),
	ftAnimLoop(0x6800, -30),
};

/* Joint 2 */
u16 dFTYoshiAnimUnknown1_joint2[16] = {
	ftAnimSetVal(FT_ANIM_TRAY), 592,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), -536, 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 20), 539,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 20), 592,
	ftAnimLoop(0x6800, -30),
};

/* Joint 3 */
u16 dFTYoshiAnimUnknown1_joint3[16] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 210, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), 277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), 210, 6,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimUnknown1_joint4[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 508,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 533, 393,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), 571, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 571, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), 508,
	ftAnimLoop(0x6800, -40),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimUnknown1_joint6[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 357, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimLoop(0x6800, -14),
};

/* Joint 7 */
u16 dFTYoshiAnimUnknown1_joint7[56] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 69, 15, -558, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 2412,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 39), -558, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 215, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 150, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), 215, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 154, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), 211, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 150, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), 215, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 154, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 94, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 69, -24, -558, 0,
	ftAnimLoop(0x6800, -108),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimUnknown1_joint8[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -26),
};

/* Joint 10 */
u16 dFTYoshiAnimUnknown1_joint10[58] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -990, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 172, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1251, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -982, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -990, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1251, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -982, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -990, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1251, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -982, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -990, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1251, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -982, 32,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), -990,
	ftAnimLoop(0x6800, -114),
};

/* Joint 11 */
u16 dFTYoshiAnimUnknown1_joint11[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 1050,
	ftAnimSetValRate(FT_ANIM_ROTY), 1678, 20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 2412,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 39), 1050, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 1824, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1758, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 1865, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1869, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 1733, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1787, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 1762, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1706, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 1819, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1758, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1706, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 1678, -28,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 1050,
	ftAnimLoop(0x6800, -126),
};

/* Joint 12 */
u16 dFTYoshiAnimUnknown1_joint12[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 8,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimUnknown1_joint14[58] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -990, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 172, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1251, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -982, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -990, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1251, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -982, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -990, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1251, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -982, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -990, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1251, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -982, 32,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), -990,
	ftAnimLoop(0x6800, -114),
};

/* Joint 15 */
u16 dFTYoshiAnimUnknown1_joint15[26] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 215, -240,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -223,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 20), 268,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 10,
	ftAnimBlock(0, 10),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), -223,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 20), 268,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -50),
};

/* Joint 17 */
u16 dFTYoshiAnimUnknown1_joint17[26] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 48, -263,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -268,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 20), 178,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 5,
	ftAnimBlock(0, 15),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), -268,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 20), 178,
	ftAnimBlock(0, 5),
	ftAnimLoop(0x6800, -50),
};

/* Joint 18 */
u16 dFTYoshiAnimUnknown1_joint18[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2010, 1, -1559, 16, -997, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 39), -2008, -1, -1543, -14, -1012, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2010, -1, -1559, -16, -997, 15,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimUnknown1_joint20[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 115, 37,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 457, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 469, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 183, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 153, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 115, -37,
	ftAnimLoop(0x6800, -54),
};

/* Joint 22 */
u16 dFTYoshiAnimUnknown1_joint22[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3091, 0, 1219, 0, 1383, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 39), 3090, 0, 1219, 0, 1367, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3091, 0, 1219, 0, 1383, 15,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimUnknown1_joint23[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 402, -1, 48, 16, 611, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 39), 400, 1, 65, -14, 595, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 402, 1, 48, -16, 611, 15,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimUnknown1_joint25[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 115, 37,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 457, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 469, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 183, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 153, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 115, -37,
	ftAnimLoop(0x6800, -54),
};

/* Joint 26 */
u16 dFTYoshiAnimUnknown1_joint26[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 125, 0, 1997, 0, 1383, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 39), 126, 0, 1997, 0, 1367, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 125, 0, 1997, 0, 1383, 15,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};
