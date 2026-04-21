/* AnimJoint data for relocData file 1228 (FTLinkAnimJabLoopEnd) */
/* 1024 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimJabLoopEnd_joint1[26];
extern u16 dFTLinkAnimJabLoopEnd_joint2[26];
extern u16 dFTLinkAnimJabLoopEnd_joint4[26];
extern u16 dFTLinkAnimJabLoopEnd_joint5[30];
extern u16 dFTLinkAnimJabLoopEnd_joint6[20];
extern u16 dFTLinkAnimJabLoopEnd_joint9[22];
extern u16 dFTLinkAnimJabLoopEnd_joint10[24];
extern u16 dFTLinkAnimJabLoopEnd_joint11[24];
extern u16 dFTLinkAnimJabLoopEnd_joint12[8];
extern u16 dFTLinkAnimJabLoopEnd_joint13[8];
extern u16 dFTLinkAnimJabLoopEnd_joint16[22];
extern u16 dFTLinkAnimJabLoopEnd_joint17[22];
extern u16 dFTLinkAnimJabLoopEnd_joint18[22];
extern u16 dFTLinkAnimJabLoopEnd_joint20[22];
extern u16 dFTLinkAnimJabLoopEnd_joint21[24];
extern u16 dFTLinkAnimJabLoopEnd_joint23[16];
extern u16 dFTLinkAnimJabLoopEnd_joint25[24];
extern u16 dFTLinkAnimJabLoopEnd_joint26[34];
extern u16 dFTLinkAnimJabLoopEnd_joint28[16];
extern u16 dFTLinkAnimJabLoopEnd_joint29[38];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimJabLoopEnd_joints[] = {
	(u32)dFTLinkAnimJabLoopEnd_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimJabLoopEnd_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimJabLoopEnd_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimJabLoopEnd_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimJabLoopEnd_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimJabLoopEnd_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimJabLoopEnd_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimJabLoopEnd_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimJabLoopEnd_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimJabLoopEnd_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimJabLoopEnd_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimJabLoopEnd_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimJabLoopEnd_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimJabLoopEnd_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimJabLoopEnd_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimJabLoopEnd_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimJabLoopEnd_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimJabLoopEnd_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimJabLoopEnd_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	(u32)dFTLinkAnimJabLoopEnd_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimJabLoopEnd_joint1[26] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 117, -42, 761, 166, 57, -78,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 11), 0, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 11), 0, 901,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 117, 0, 761, 0, 30, 0,
	ftAnimBlock0(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLinkAnimJabLoopEnd_joint2[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 73, -9, 138, 16, 5, 1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -107, 276, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 73, 12, 138, -20, 5, -1,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimJabLoopEnd_joint4[26] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 159, -29, 349, 37, 76, 22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 259, 166, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 159, 11, 349, -54, 76, -15,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimJabLoopEnd_joint5[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2186, 87, -1156, -5, 2285, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -1337, 18, 1535, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), -1253, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1273, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1328, 9, -1281, -7, 1522, -13,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimJabLoopEnd_joint6[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -884, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -558, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -516, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimJabLoopEnd_joint9[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -22, 30, -159, -44, -30, -21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 4, 7, 76,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -22, -36, -159, 42, -30, 33,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimJabLoopEnd_joint10[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 937, -29, 174, -8, 256, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 424, -16, 121, 3, -37, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 416, -8, 123, 1, -50, -12,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimJabLoopEnd_joint11[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -494, -14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -666, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -631, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -600, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimJabLoopEnd_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 11),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimJabLoopEnd_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 11),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimJabLoopEnd_joint16[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2187, -27, -586, 2, -850, 28,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 1697, -536, -339,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 2187, 13, -586, -1, -850, -14,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimJabLoopEnd_joint17[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -33, 2, -224, -30, 25, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, -163, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -33, -2, -224, 37, 25, 0,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimJabLoopEnd_joint18[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 43, -2, -292, -13, -15, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, -199, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 43, 2, -292, 16, -15, 0,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimJabLoopEnd_joint20[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, -7, 291, -8, -86, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -62, 9, 291, 11, -86, -5,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimJabLoopEnd_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -170, -4, -218, -4, -125, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -239, -4, -244, 0, 104, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -2, -244, 0, 108, 4,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimJabLoopEnd_joint23[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 643, -32,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 257, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimJabLoopEnd_joint25[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1352, 3, -1284, -18, 1305, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -1283, 7, -1443, -5, 1568, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1279, 4, -1446, -3, 1573, 5,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimJabLoopEnd_joint26[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -309, 258, 167, 91, -541, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 272, -4, -132, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 49, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 100, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 267, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 3, 269, -2, -125, 7,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimJabLoopEnd_joint28[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 358, -16,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 426, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimJabLoopEnd_joint29[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1760, -169, 1451, 185, 1793, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1541, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -1989, -6, 1694, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1998, -11, 1689, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -2028, -11, 1683, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2036, -7, 1682, 0, 1538, -2,
	ftAnimEnd(),
};
