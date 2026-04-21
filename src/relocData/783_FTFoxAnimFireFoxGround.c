/* AnimJoint data for relocData file 783 (FTFoxAnimFireFoxGround) */
/* 960 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimFireFoxGround_joint1[12];
extern u16 dFTFoxAnimFireFoxGround_joint2[16];
extern u16 dFTFoxAnimFireFoxGround_joint4[20];
extern u16 dFTFoxAnimFireFoxGround_joint5[26];
extern u16 dFTFoxAnimFireFoxGround_joint6[20];
extern u16 dFTFoxAnimFireFoxGround_joint7[18];
extern u16 dFTFoxAnimFireFoxGround_joint8[20];
extern u16 dFTFoxAnimFireFoxGround_joint10[14];
extern u16 dFTFoxAnimFireFoxGround_joint11[32];
extern u16 dFTFoxAnimFireFoxGround_joint12[16];
extern u16 dFTFoxAnimFireFoxGround_joint13[20];
extern u16 dFTFoxAnimFireFoxGround_joint15[14];
extern u16 dFTFoxAnimFireFoxGround_joint16[26];
extern u16 dFTFoxAnimFireFoxGround_joint18[16];
extern u16 dFTFoxAnimFireFoxGround_joint20[26];
extern u16 dFTFoxAnimFireFoxGround_joint21[26];
extern u16 dFTFoxAnimFireFoxGround_joint23[16];
extern u16 dFTFoxAnimFireFoxGround_joint24[26];
extern u16 dFTFoxAnimFireFoxGround_joint25[26];
extern u16 dFTFoxAnimFireFoxGround_joint26[38];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimFireFoxGround_joints[] = {
	(u32)dFTFoxAnimFireFoxGround_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimFireFoxGround_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimFireFoxGround_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimFireFoxGround_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimFireFoxGround_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimFireFoxGround_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimFireFoxGround_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimFireFoxGround_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimFireFoxGround_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimFireFoxGround_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimFireFoxGround_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimFireFoxGround_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimFireFoxGround_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimFireFoxGround_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimFireFoxGround_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimFireFoxGround_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimFireFoxGround_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimFireFoxGround_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimFireFoxGround_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimFireFoxGround_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimFireFoxGround_joint1[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 912, 0,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -22),
};

/* Joint 2 */
u16 dFTFoxAnimFireFoxGround_joint2[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 4 */
u16 dFTFoxAnimFireFoxGround_joint4[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 523, -129, -24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 528, -140, -42,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 523, -129, -24,
	ftAnimLoop(0x6800, -38),
};

/* Joint 5 */
u16 dFTFoxAnimFireFoxGround_joint5[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2515, 0, -267, -6, 2571, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -2516, 0, -273, 9, 2571, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2515, 0, -267, 6, 2571, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimFireFoxGround_joint6[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -783, -11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -820, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -795, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -783, 11,
	ftAnimLoop(0x6800, -38),
};

/* Joint 7 */
u16 dFTFoxAnimFireFoxGround_joint7[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 269, 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY, 65), 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 15,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -34),
};

/* Joint 8 */
u16 dFTFoxAnimFireFoxGround_joint8[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 85, 87, -97,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 88, 101, -78,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 85, 87, -97,
	ftAnimLoop(0x6800, -38),
};

/* Joint 10 */
u16 dFTFoxAnimFireFoxGround_joint10[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 62, -18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 15,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -26),
};

/* Joint 11 */
u16 dFTFoxAnimFireFoxGround_joint11[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1482, 0, 1442, 7, 1704, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 1481, 0, 1699, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 1468, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1450, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1482, 0, 1442, -7, 1704, 5,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimFireFoxGround_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -536, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -530, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -536, -5,
	ftAnimLoop(0x6800, -30),
};

/* Joint 13 */
u16 dFTFoxAnimFireFoxGround_joint13[20] = {
	ftAnimSetValBlock(FT_ANIM_ROTX), 89,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTX, 10), 89,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 5,
	ftAnimBlock(0, 5),
	ftAnimSetValT(FT_ANIM_ROTX, 10), 89,
	ftAnimBlock(0, 5),
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimFireFoxGround_joint15[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	_FT_ANIM_CMD(11, 0, 1), 5,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimFireFoxGround_joint16[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1626, 0, -1587, 0, -1004, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1627, 0, -1587, 0, -1008, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1626, 0, -1587, 0, -1007, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimFireFoxGround_joint18[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 20 */
u16 dFTFoxAnimFireFoxGround_joint20[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -16, 0, 20, 0, 560, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -16, 0, 20, 0, 562, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -16, 0, 20, 0, 556, -5,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimFireFoxGround_joint21[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1720, 6, -1624, 0, -2084, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1726, -10, -1625, 1, -2084, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1720, -6, -1624, 0, -2084, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimFireFoxGround_joint23[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1168, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1171, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1168, -3,
	ftAnimLoop(0x6800, -30),
};

/* Joint 24 */
u16 dFTFoxAnimFireFoxGround_joint24[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -143, -5, 82, 1, -259, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -149, 9, 84, -3, -262, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -143, 5, 82, -1, -259, 2,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimFireFoxGround_joint25[26] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -196, -13, 13, -9, 21, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -196, 13, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -196, 4, 13, 4, 21, 0,
	ftAnimLoop(0x6800, -50),
};

/* Joint 26 */
u16 dFTFoxAnimFireFoxGround_joint26[38] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 64, -450,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 5, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 168, -38,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -194, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 168, 38,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 0, -8, 0, -2,
	ftAnimLoop(0x6800, -72),
	ftAnimEnd(),
};
