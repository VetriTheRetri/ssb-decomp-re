/* AnimJoint data for relocData file 1032 (FTSamusAnimCliffClimbQuick1) */
/* 784 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimCliffClimbQuick1_joint1[10];
extern u16 dFTSamusAnimCliffClimbQuick1_joint2[24];
extern u16 dFTSamusAnimCliffClimbQuick1_joint3[16];
extern u16 dFTSamusAnimCliffClimbQuick1_joint5[20];
extern u16 dFTSamusAnimCliffClimbQuick1_joint6[24];
extern u16 dFTSamusAnimCliffClimbQuick1_joint7[24];
extern u16 dFTSamusAnimCliffClimbQuick1_joint8[16];
extern u16 dFTSamusAnimCliffClimbQuick1_joint9[20];
extern u16 dFTSamusAnimCliffClimbQuick1_joint12[10];
extern u16 dFTSamusAnimCliffClimbQuick1_joint13[24];
extern u16 dFTSamusAnimCliffClimbQuick1_joint15[24];
extern u16 dFTSamusAnimCliffClimbQuick1_joint16[24];
extern u16 dFTSamusAnimCliffClimbQuick1_joint18[16];
extern u16 dFTSamusAnimCliffClimbQuick1_joint20[24];
extern u16 dFTSamusAnimCliffClimbQuick1_joint21[24];
extern u16 dFTSamusAnimCliffClimbQuick1_joint23[16];
extern u16 dFTSamusAnimCliffClimbQuick1_joint24[28];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTSamusAnimCliffClimbQuick1_joints[] = {
	(u32)dFTSamusAnimCliffClimbQuick1_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimCliffClimbQuick1_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimCliffClimbQuick1_joint3, /* [2] joint 3 */
	(u32)dFTSamusAnimCliffClimbQuick1_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTSamusAnimCliffClimbQuick1_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimCliffClimbQuick1_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimCliffClimbQuick1_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimCliffClimbQuick1_joint9, /* [8] joint 9 */
	(u32)dFTSamusAnimCliffClimbQuick1_joint12, /* [9] joint 12 */
	0x00000000, /* [10] NULL */
	0x00000000, /* [11] NULL */
	(u32)dFTSamusAnimCliffClimbQuick1_joint13, /* [12] joint 13 */
	(u32)dFTSamusAnimCliffClimbQuick1_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTSamusAnimCliffClimbQuick1_joint16, /* [15] joint 16 */
	(u32)dFTSamusAnimCliffClimbQuick1_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTSamusAnimCliffClimbQuick1_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTSamusAnimCliffClimbQuick1_joint21, /* [20] joint 21 */
	(u32)dFTSamusAnimCliffClimbQuick1_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTSamusAnimCliffClimbQuick1_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTSamusAnimCliffClimbQuick1_joint1[10] = {
	ftAnimSetVal(FT_ANIM_TRAY | FT_ANIM_TRAZ), -795, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimCliffClimbQuick1_joint2[24] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 30), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAZ, 1), 5,
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), -14, 128, 1581, 5,
	ftAnimSetValRateT(FT_ANIM_TRAX, 25), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 7), 994, -307,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTSamusAnimCliffClimbQuick1_joint3[16] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 178, 55,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 464, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimCliffClimbQuick1_joint5[20] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAX), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 178, -11, 75,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 7), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 178, -8, 54,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTSamusAnimCliffClimbQuick1_joint6[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 336, -30, -27, -15, -421, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 240, -6, -3, 0, -623, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 235, -5, -4, 0, -639, -15,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimCliffClimbQuick1_joint7[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -86, -65,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -135, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimCliffClimbQuick1_joint8[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 290, 16, 0, 5, 0, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 290, -24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimCliffClimbQuick1_joint9[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 98, 60, -42,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 69, 0, 0, 1, -1608, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 69, 0, 0, 0, -1608, 5,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimCliffClimbQuick1_joint12[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 10,
	ftAnimBlock(0, 7),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTSamusAnimCliffClimbQuick1_joint13[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -26, -3, 80, 0, -447, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -38, 0, 79, 0, -663, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -37, 0, 79, 0, -667, -3,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimCliffClimbQuick1_joint15[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -5, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -5, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTSamusAnimCliffClimbQuick1_joint16[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1620, 9, -1566, -1, -1780, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1692, 34, -1593, -14, -2075, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1740, 47, -1612, -19, -2100, -25,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTSamusAnimCliffClimbQuick1_joint18[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 100, 109,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 374, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 379, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTSamusAnimCliffClimbQuick1_joint20[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -48, 0, 48, 0, 259, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -106, -39, 48, 0, 259, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -160, -53, 48, 0, 259, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTSamusAnimCliffClimbQuick1_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1611, -13, -1652, -2, 1482, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -1675, -1, -1643, 3, 608, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1674, 1, -1641, 2, 496, -112,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTSamusAnimCliffClimbQuick1_joint23[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 338, 245,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1032, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1014, -17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTSamusAnimCliffClimbQuick1_joint24[28] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 88, 41, 81, -3, 308, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 37, 0, 19, -14, -231, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 44, 6, 5, -14, -316, -84,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
