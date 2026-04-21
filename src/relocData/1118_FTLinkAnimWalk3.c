/* AnimJoint data for relocData file 1118 (FTLinkAnimWalk3) */
/* 1776 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimWalk3_joint1[30];
extern u16 dFTLinkAnimWalk3_joint2[26];
extern u16 dFTLinkAnimWalk3_joint4[32];
extern u16 dFTLinkAnimWalk3_joint5[66];
extern u16 dFTLinkAnimWalk3_joint6[32];
extern u16 dFTLinkAnimWalk3_joint9[22];
extern u16 dFTLinkAnimWalk3_joint10[60];
extern u16 dFTLinkAnimWalk3_joint11[32];
extern u16 dFTLinkAnimWalk3_joint12[8];
extern u16 dFTLinkAnimWalk3_joint13[8];
extern u16 dFTLinkAnimWalk3_joint16[48];
extern u16 dFTLinkAnimWalk3_joint17[8];
extern u16 dFTLinkAnimWalk3_joint18[22];
extern u16 dFTLinkAnimWalk3_joint20[30];
extern u16 dFTLinkAnimWalk3_joint21[68];
extern u16 dFTLinkAnimWalk3_joint23[40];
extern u16 dFTLinkAnimWalk3_joint25[94];
extern u16 dFTLinkAnimWalk3_joint26[70];
extern u16 dFTLinkAnimWalk3_joint28[36];
extern u16 dFTLinkAnimWalk3_joint29[98];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimWalk3_joints[] = {
	(u32)dFTLinkAnimWalk3_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimWalk3_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimWalk3_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimWalk3_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimWalk3_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimWalk3_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimWalk3_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimWalk3_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimWalk3_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimWalk3_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimWalk3_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimWalk3_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimWalk3_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimWalk3_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimWalk3_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimWalk3_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimWalk3_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimWalk3_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimWalk3_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	(u32)dFTLinkAnimWalk3_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimWalk3_joint1[30] = {
	ftAnimSetValRate(FT_ANIM_TRAY), 804, -22,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 240,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 9), 884, 1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 9), 808, 18,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 929, -1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 7), 804, -22,
	ftAnimSetValRateT(FT_ANIM_TRAY, 9), 884, 1,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimWalk3_joint2[26] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, 70, 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 17, 120, 33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -10, 70, 44,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 17, 120, 33,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -50),
};

/* Joint 4 */
u16 dFTLinkAnimWalk3_joint4[32] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 310, -2, 25, 0, 26, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 361, 219, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 310, 2, 25, 0, 26, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 448, 234, 191,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -62),
};

/* Joint 5 */
u16 dFTLinkAnimWalk3_joint5[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -242, -2, -127, -2, 164, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -309, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -324, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 146, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 140, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 176, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -312, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -244, 3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -305, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -129, 3,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 171, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 167, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, 2, -127, 2, 164, -2,
	ftAnimLoop(0x6800, -128),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimWalk3_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -671, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -264, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -227, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -589, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -612, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -672, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -671, 1,
	ftAnimLoop(0x6800, -62),
};

/* Joint 9 */
u16 dFTLinkAnimWalk3_joint9[22] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 299, 121, 140,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 4, 7, 76,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 299, 121, 140,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -42),
};

/* Joint 10 */
u16 dFTLinkAnimWalk3_joint10[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 114, 6, 94, -2, -412, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 334, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 300, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -266, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -296, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -422, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 311, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 113, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 314, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 100, -8,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -419, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 114, 1, 94, -6, -412, 7,
	ftAnimLoop(0x6800, -116),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimWalk3_joint11[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -487, -15,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), -548, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -494, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -470, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -472, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -478, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -487, -9,
	ftAnimLoop(0x6800, -62),
};

/* Joint 12 */
u16 dFTLinkAnimWalk3_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 35),
	ftAnimLoop(0x6800, -14),
};

/* Joint 13 */
u16 dFTLinkAnimWalk3_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 35),
	ftAnimLoop(0x6800, -14),
};

/* Joint 16 */
u16 dFTLinkAnimWalk3_joint16[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1347, -15, -624, -3, 42, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 1279, 17, -659, 2, 83, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1652, 14, -574, 3, -122, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1532, -16, -600, -2, -209, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1347, 6, -624, 1, 42, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 1695, -570, -204,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimWalk3_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimBlock(0, 35),
	ftAnimLoop(0x6800, -14),
};

/* Joint 18 */
u16 dFTLinkAnimWalk3_joint18[22] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -235, 7, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -253, -186, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -235, 7, -5,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -253, -186, -8,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -42),
};

/* Joint 20 */
u16 dFTLinkAnimWalk3_joint20[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 22, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -66, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 62, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -49, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 22, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 25, -5,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimWalk3_joint21[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 37, 3, -53, 1, 216, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 20, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -15, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -545, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -565, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 25, 55,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 20, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 37, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -22, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -53, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 75, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 221, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 37, 0, -53, 0, 216, -4,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimWalk3_joint23[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 430, 61,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 940, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 931, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 553, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 530, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 307, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 335, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 392, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 430, 38,
	ftAnimLoop(0x6800, -78),
};

/* Joint 25 */
u16 dFTLinkAnimWalk3_joint25[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1106, 0, -1476, -2, -1913, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -995, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1460, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1572, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1470, 88,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1664, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -990, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1143, -7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1454, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1480, 9,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1151, -8, -1674, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1813, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1106, 1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1471, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1473, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1802, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1905, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1106, 0, -1476, -2, -1913, -8,
	ftAnimLoop(0x6800, -184),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimWalk3_joint26[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -19, 14, 212, 2, -493, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 91, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 179, 0, 219, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 184, 9, 222, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 260, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -479, -31,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 41, -45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -30, 10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 248, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 212, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -506, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -511, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -19, 11, 212, 0, -493, 18,
	ftAnimLoop(0x6800, -136),
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimWalk3_joint28[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 676, -23,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 513, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 511, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 719, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 797, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 749, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 708, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 676, -31,
	ftAnimLoop(0x6800, -70),
};

/* Joint 29 */
u16 dFTLinkAnimWalk3_joint29[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -363, 11, 92, 13, -116, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -206, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), -389, -8, -346, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -401, -21, -331, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -628, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 163, 16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -211, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -80, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -577, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -612, 56,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 171, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -109, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -76, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 67, 29,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -543, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -389, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -363, 26, 92, 24, -116, -6,
	ftAnimLoop(0x6800, -180),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
