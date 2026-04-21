/* AnimJoint data for relocData file 1138 (FTLinkAnimSleep) */
/* 1488 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimSleep_joint1[16];
extern u16 dFTLinkAnimSleep_joint2[12];
extern u16 dFTLinkAnimSleep_joint4[44];
extern u16 dFTLinkAnimSleep_joint5[100];
extern u16 dFTLinkAnimSleep_joint6[44];
extern u16 dFTLinkAnimSleep_joint9[8];
extern u16 dFTLinkAnimSleep_joint10[68];
extern u16 dFTLinkAnimSleep_joint11[32];
extern u16 dFTLinkAnimSleep_joint12[8];
extern u16 dFTLinkAnimSleep_joint13[8];
extern u16 dFTLinkAnimSleep_joint16[8];
extern u16 dFTLinkAnimSleep_joint17[8];
extern u16 dFTLinkAnimSleep_joint18[16];
extern u16 dFTLinkAnimSleep_joint20[28];
extern u16 dFTLinkAnimSleep_joint21[48];
extern u16 dFTLinkAnimSleep_joint23[32];
extern u16 dFTLinkAnimSleep_joint25[48];
extern u16 dFTLinkAnimSleep_joint26[66];
extern u16 dFTLinkAnimSleep_joint28[24];
extern u16 dFTLinkAnimSleep_joint29[68];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimSleep_joints[] = {
	(u32)dFTLinkAnimSleep_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimSleep_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimSleep_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimSleep_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimSleep_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimSleep_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimSleep_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimSleep_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimSleep_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimSleep_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimSleep_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimSleep_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimSleep_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimSleep_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimSleep_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimSleep_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimSleep_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimSleep_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimSleep_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	(u32)dFTLinkAnimSleep_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimSleep_joint1[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 858, 91,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 60), -101, 841, -145,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 60), 0, 858, 91,
	ftAnimLoop(0x6800, -30),
};

/* Joint 2 */
u16 dFTLinkAnimSleep_joint2[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -81, 276, 0, 0, 0, 0,
	ftAnimBlock(0, 120),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimSleep_joint4[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 227, -17,
	ftAnimSetValRate(FT_ANIM_ROTX), 359, 10,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 561, 2, 166, -1, 56, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 459, -8, 166, 0, 56, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 33), 125, -1, 152, 0, 119, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 38), 359, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 38), 227, -17,
	ftAnimLoop(0x6800, -86),
};

/* Joint 5 */
u16 dFTLinkAnimSleep_joint5[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1334, 0, -1423, 0, 1450, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 40), -1573, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 63), 1610, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 35), -1631, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1649, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 32), -1572, 3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1575, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 44), -1514, 6,
	ftAnimBlock(0, 22),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1624, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), 1735, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1568, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 49), -1336, 1,
	ftAnimBlock(0, 16),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1506, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), -1417, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1731, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 29), 1452, -2,
	ftAnimBlock(0, 27),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1420, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1334, 0, -1422, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1334, 0, -1423, 0, 1450, -1,
	ftAnimLoop(0x6800, -196),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimSleep_joint6[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -165, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 53), -163, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -150, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -136, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -124, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), -148, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -138, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -168, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -165, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -165, 0,
	ftAnimLoop(0x6800, -86),
};

/* Joint 9 */
u16 dFTLinkAnimSleep_joint9[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 8, 2, 394,
	ftAnimBlock(0, 120),
	ftAnimLoop(0x6800, -14),
};

/* Joint 10 */
u16 dFTLinkAnimSleep_joint10[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 399, 0, 34, 0, -93, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 77), 290, 5, 27, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 74), 158, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 167, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 38), -24, -16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 295, 5, 23, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 40), 31, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 41), 399, 0,
	ftAnimBlock(0, 35),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -40, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -91, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 33, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 399, 0, 34, 0, -93, -1,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimSleep_joint11[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -263, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 69), -284, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -290, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), -311, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -329, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -265, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -263, 2,
	ftAnimLoop(0x6800, -62),
};

/* Joint 12 */
u16 dFTLinkAnimSleep_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 120),
	ftAnimLoop(0x6800, -14),
};

/* Joint 13 */
u16 dFTLinkAnimSleep_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 120),
	ftAnimLoop(0x6800, -14),
};

/* Joint 16 */
u16 dFTLinkAnimSleep_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1392, -127, -301,
	ftAnimBlock(0, 120),
	ftAnimLoop(0x6800, -14),
};

/* Joint 17 */
u16 dFTLinkAnimSleep_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -15, 0,
	ftAnimBlock(0, 120),
	ftAnimLoop(0x6800, -14),
};

/* Joint 18 */
u16 dFTLinkAnimSleep_joint18[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 92, -138, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 81), -24, -146, 52,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 39), 92, -138, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 20 */
u16 dFTLinkAnimSleep_joint20[28] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -153, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 39), -200, 1, 185, -1, -74, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 42), 1, 0, -116, -2, -60, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 39), -153, 0, 0,
	ftAnimLoop(0x6800, -52),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimSleep_joint21[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 188, 0, -177, 0, 133, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 90), 202, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 119), -177, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 74), -170, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -164, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 44), 132, 0,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 203, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 28), 188, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 188, 0, -177, 0, 133, 0,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimSleep_joint23[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 256, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 54), 507, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 507, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 60), 268, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 264, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 257, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 256, 0,
	ftAnimLoop(0x6800, -62),
};

/* Joint 25 */
u16 dFTLinkAnimSleep_joint25[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 128, 0, -584, 0, 55, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 83), -494, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 119), 55, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 62), 211, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 210, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 56), 128, 0,
	ftAnimBlock(0, 20),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -498, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 35), -584, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 128, 0, -584, 0, 55, 0,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimSleep_joint26[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -247, 0, -13, 0, -168, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 82), -322, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 83), 54, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 57), -54, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -52, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 48), -238, -1,
	ftAnimBlock(0, 24),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -317, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 36), -168, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 51, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 35), -13, 0,
	ftAnimBlock(0, 22),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -239, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -247, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -247, 0, -13, 0, -168, 0,
	ftAnimLoop(0x6800, -128),
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimSleep_joint28[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 588, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 86), 563, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 566, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 32), 589, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 588, 0,
	ftAnimLoop(0x6800, -46),
};

/* Joint 29 */
u16 dFTLinkAnimSleep_joint29[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1316, 0, -2062, 0, 1439, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 59), -1806, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 82), 1596, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 58), 1296, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1295, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 55), 1320, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1806, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 59), -2062, 0,
	ftAnimBlock(0, 22),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1591, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 36), 1440, 0,
	ftAnimBlock(0, 31),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1318, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1316, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1316, 0, -2062, 0, 1439, 0,
	ftAnimLoop(0x6800, -128),
	ftAnimEnd(),
	0x0000, 0x0000,
};
