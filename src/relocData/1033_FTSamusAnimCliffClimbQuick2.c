/* AnimJoint data for relocData file 1033 (FTSamusAnimCliffClimbQuick2) */
/* 1056 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimCliffClimbQuick2_joint1[10];
extern u16 dFTSamusAnimCliffClimbQuick2_joint2[36];
extern u16 dFTSamusAnimCliffClimbQuick2_joint3[10];
extern u16 dFTSamusAnimCliffClimbQuick2_joint5[20];
extern u16 dFTSamusAnimCliffClimbQuick2_joint6[46];
extern u16 dFTSamusAnimCliffClimbQuick2_joint7[32];
extern u16 dFTSamusAnimCliffClimbQuick2_joint8[14];
extern u16 dFTSamusAnimCliffClimbQuick2_joint9[18];
extern u16 dFTSamusAnimCliffClimbQuick2_joint12[10];
extern u16 dFTSamusAnimCliffClimbQuick2_joint13[42];
extern u16 dFTSamusAnimCliffClimbQuick2_joint15[24];
extern u16 dFTSamusAnimCliffClimbQuick2_joint16[34];
extern u16 dFTSamusAnimCliffClimbQuick2_joint18[24];
extern u16 dFTSamusAnimCliffClimbQuick2_joint20[24];
extern u16 dFTSamusAnimCliffClimbQuick2_joint21[58];
extern u16 dFTSamusAnimCliffClimbQuick2_joint23[78];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTSamusAnimCliffClimbQuick2_joints[] = {
	(u32)dFTSamusAnimCliffClimbQuick2_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimCliffClimbQuick2_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimCliffClimbQuick2_joint3, /* [2] joint 3 */
	(u32)dFTSamusAnimCliffClimbQuick2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTSamusAnimCliffClimbQuick2_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimCliffClimbQuick2_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimCliffClimbQuick2_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimCliffClimbQuick2_joint9, /* [8] joint 9 */
	(u32)dFTSamusAnimCliffClimbQuick2_joint12, /* [9] joint 12 */
	0x00000000, /* [10] NULL */
	0x00000000, /* [11] NULL */
	(u32)dFTSamusAnimCliffClimbQuick2_joint13, /* [12] joint 13 */
	(u32)dFTSamusAnimCliffClimbQuick2_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTSamusAnimCliffClimbQuick2_joint16, /* [15] joint 16 */
	(u32)dFTSamusAnimCliffClimbQuick2_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTSamusAnimCliffClimbQuick2_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTSamusAnimCliffClimbQuick2_joint21, /* [20] joint 21 */
	(u32)dFTSamusAnimCliffClimbQuick2_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	0xFFFF00ED, /* [23] END */
};

/* Joint 1 */
u16 dFTSamusAnimCliffClimbQuick2_joint1[10] = {
	ftAnimSetVal(FT_ANIM_TRAY), 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 18), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimCliffClimbQuick2_joint2[36] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 30), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAZ, 1), 12,
	ftAnimSetValRateBlock(FT_ANIM_TRAX), -14, 128,
	ftAnimSetValRateT(FT_ANIM_TRAX, 25), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX, 1), 7,
	ftAnimSetValRateBlock(FT_ANIM_TRAY), 994, -31,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 1101, 307,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 13), 1577, 175,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 175,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 1600, 48,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTSamusAnimCliffClimbQuick2_joint3[10] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 464, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 18), 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimCliffClimbQuick2_joint5[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX), 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 178, -7, -8, 3, 54, -24,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 18), 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTSamusAnimCliffClimbQuick2_joint6[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 235, 6, -4, 0, -639, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -19, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 472, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -555, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -511, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -254, 23,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 28, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 102, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 476, 3, 114, 11, -231, 23,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimCliffClimbQuick2_joint7[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -5, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -5, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -236, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -617, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -664, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -724, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, -14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimCliffClimbQuick2_joint8[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 290, -24,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 0, 23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 13), 701,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimCliffClimbQuick2_joint9[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 98, 60, -42,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 69, 0, 0, 0, -1608, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 67, -17, -1474,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTSamusAnimCliffClimbQuick2_joint12[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 17,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTSamusAnimCliffClimbQuick2_joint13[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -37, 4, 79, 4, -667, 63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 40, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -215, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), 111, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 77, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -115, -24,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 53, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 4, -128, -13, -215, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimCliffClimbQuick2_joint15[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -5, -115,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -594, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -603, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -598, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTSamusAnimCliffClimbQuick2_joint16[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1740, -2, -1612, -22, -2100, -85,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 17), 1705, -8, -1590, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -2165, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2149, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -2045, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1695, -9, -1581, 9, -1998, 47,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTSamusAnimCliffClimbQuick2_joint18[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 379, 214,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 940, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 907, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 590, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -111,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTSamusAnimCliffClimbQuick2_joint20[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -160, 11, 48, 1, 259, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -85, 9, -28, -1, -42, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, 9, -28, 0, -41, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTSamusAnimCliffClimbQuick2_joint21[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1674, 20, -1641, -24, 496, 114,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -1334, 64, -1911, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 941, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1022, 69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1543, 26,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1287, 28, -1916, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1777, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1319, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1355, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1375, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1382, -6, -1769, 7, 1558, 15,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTSamusAnimCliffClimbQuick2_joint23[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1014, -59,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 656, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 621, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 458, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, -16,
	ftAnimEnd(),
	0x0000, 0x200E, 0x002C, 0xFFE2, 0x0005, 0x001E, 0xFEC4, 0xFFD2, 0x2809, 0x000D, 0xFF17, 0x0007, 0x2805, 0x0011, 0x00C0, 0x0002, 0x2003, 0x0006, 0x0090, 0x003F, 0x2003, 0x0001, 0x00CF, 0x0005, 0x2003, 0x0003, 0x0052, 0x0001, 0x2003, 0x0001, 0x0066, 0x0000, 0x2803, 0x0006, 0x008F, 0x0000, 0x0801, 0x0002, 0x2009, 0x0001, 0xFF1E, 0x0006, 0x2009, 0x0003, 0xFF2A, 0x0001, 0x200F, 0x0001, 0x008E, 0x0000, 0x00C1, 0x0001, 0xFF2B, 0x0000, 0x0000,
};
