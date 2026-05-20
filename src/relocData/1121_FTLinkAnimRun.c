/* AnimJoint data for relocData file 1121 (FTLinkAnimRun) */
/* 2016 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimRun_joint1[56];
extern u16 dFTLinkAnimRun_joint2[26];
extern u16 dFTLinkAnimRun_joint4[26];
extern u16 dFTLinkAnimRun_joint5[84];
extern u16 dFTLinkAnimRun_joint6[32];
extern u16 dFTLinkAnimRun_joint9[8];
extern u16 dFTLinkAnimRun_joint10[100];
extern u16 dFTLinkAnimRun_joint11[32];
extern u16 dFTLinkAnimRun_joint12[8];
extern u16 dFTLinkAnimRun_joint13[8];
extern u16 dFTLinkAnimRun_joint16[50];
extern u16 dFTLinkAnimRun_joint17[8];
extern u16 dFTLinkAnimRun_joint18[22];
extern u16 dFTLinkAnimRun_joint20[26];
extern u16 dFTLinkAnimRun_joint21[88];
extern u16 dFTLinkAnimRun_joint23[40];
extern u16 dFTLinkAnimRun_joint25[96];
extern u16 dFTLinkAnimRun_joint26[98];
extern u16 dFTLinkAnimRun_joint28[48];
extern u16 dFTLinkAnimRun_joint29[94];

/* Joint pointer table (29 entries, 116 bytes) */
AObjEvent32 * dFTLinkAnimRun_joints[] = {
	(AObjEvent32 *)dFTLinkAnimRun_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimRun_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimRun_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTLinkAnimRun_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTLinkAnimRun_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimRun_joint9, /* [6] joint 9 */
	NULL, /* [7] NULL */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTLinkAnimRun_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTLinkAnimRun_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimRun_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimRun_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimRun_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTLinkAnimRun_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTLinkAnimRun_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimRun_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTLinkAnimRun_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTLinkAnimRun_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTLinkAnimRun_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTLinkAnimRun_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTLinkAnimRun_joint28, /* [26] joint 28 */
	NULL, /* [27] NULL */
	(AObjEvent32 *)dFTLinkAnimRun_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimRun_joint1[56] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 849, -121, 15, 32,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 804, 66, 55, 28,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 915, 0, 44, -20,
	ftAnimSetValRateT(FT_ANIM_TRAY, 8), 805, -2,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 29, 8,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 50, 50,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 50, -27,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 911, 39, 26, -31,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 849, -121, 15, 32,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 804, 66, 55, 28,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -110),
};

/* Joint 2 */
u16 dFTLinkAnimRun_joint2[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 100, -161, -131,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 117, 260, 50,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 100, -161, -131,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 117, 260, 50,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -50),
};

/* Joint 4 */
u16 dFTLinkAnimRun_joint4[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 780, 464, 599,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 301, -16, 123,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 780, 464, 599,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 301, -16, 123,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -50),
};

/* Joint 5 */
u16 dFTLinkAnimRun_joint5[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 293, -50, -463, -21, -72, 60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 167, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -348, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -37, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -96, -58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -180, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 188, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 224, -76,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -338, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -545, 4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -63, 114,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 33, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 147, -62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 206, 78,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -536, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -501, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 293, 87, -463, 37, -72, -105,
	ftAnimLoop(0x6800, -164),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimRun_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, -92,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -553, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -531, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -433, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -312, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -170, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 163,
	ftAnimLoop(0x6800, -62),
};

/* Joint 9 */
u16 dFTLinkAnimRun_joint9[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, 52, 229,
	ftAnimBlock(0, 25),
	ftAnimLoop(0x6800, -14),
};

/* Joint 10 */
u16 dFTLinkAnimRun_joint10[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 448, -3, 269, 11, 24, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 494, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -202, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 277, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 230, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 304, -35,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 436, -53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 557, 80,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -194, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -277, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 258, -58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 96, 52,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 635, 59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 297, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -254, 64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -5, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 213, 113,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 442, 11,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 16, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 448, 5, 269, -28, 24, 8,
	ftAnimLoop(0x6800, -196),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimRun_joint11[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -884, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -636, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -641, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -602, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -610, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -878, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -884, -5,
	ftAnimLoop(0x6800, -62),
};

/* Joint 12 */
u16 dFTLinkAnimRun_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 25),
	ftAnimLoop(0x6800, -14),
};

/* Joint 13 */
u16 dFTLinkAnimRun_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 25),
	ftAnimLoop(0x6800, -14),
};

/* Joint 16 */
u16 dFTLinkAnimRun_joint16[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, 0, -385, -9, -339, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1783, 19, -319, -13, -496, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1949, 0, -556, 9, -614, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1792, -20, -200, 14, -511, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1697, 0, -385, -9, -339, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1783, 19, -319, -13, -496, -21,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -98),
};

/* Joint 17 */
u16 dFTLinkAnimRun_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimBlock(0, 25),
	ftAnimLoop(0x6800, -14),
};

/* Joint 18 */
u16 dFTLinkAnimRun_joint18[22] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -247, -199, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -237, -83, -32,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -247, -199, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -237, -83, -32,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -42),
};

/* Joint 20 */
u16 dFTLinkAnimRun_joint20[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -21, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -21, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -21, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 7), 134,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -50),
};

/* Joint 21 */
u16 dFTLinkAnimRun_joint21[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 57, -71, -329, 8, -773, 95,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -128, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -62, 7, -597, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 0, 32, -648, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 19, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -198, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -158, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -32, -73,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 49, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -64, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -160, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -335, 8,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -116, -92,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -785, -4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -46, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 62, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 57, -4, -329, 6, -773, 11,
	ftAnimLoop(0x6800, -172),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimRun_joint23[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 604, -196,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 305, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 557, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 385, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 429, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 910, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 994, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 717, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 604, -113,
	ftAnimLoop(0x6800, -78),
};

/* Joint 25 */
u16 dFTLinkAnimRun_joint25[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 423, 30, -281, -28, 259, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 517, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -271, 93, 221, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -122, 116, 10, -198,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 71, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -319, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -302, 74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 71, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 554, 56, 66, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 918, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -44, -72,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 71, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 84, 51,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 935, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 427, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -118, -66, 136, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -272, -14, 238, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 423, -4, -281, -8, 259, 21,
	ftAnimLoop(0x6800, -188),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimRun_joint26[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 13, -12, 163, 2, 45, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -683, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), -15, -19, 229, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -33, -14, 268, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 65, 116,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 147, -75,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -701, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -569, 45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 193, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 160, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -486, 122,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -124, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 184, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 26, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 76, -50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 141, 30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -68, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 54, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 13, -12, 163, 21, 45, -9,
	ftAnimLoop(0x6800, -192),
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimRun_joint28[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 681, 63,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 900, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 876, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 572, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 494, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 685, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 594, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 471, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 522, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 623, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 681, 58,
	ftAnimLoop(0x6800, -94),
};

/* Joint 29 */
u16 dFTLinkAnimRun_joint29[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 594, 57, -1458, 17, 1795, -72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1540, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 1049, 16, 1492, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1061, 12, 1511, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1729, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1151, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1178, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1067, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1106, 41, -1491, 14, 1662, -110,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1013, -183,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1481, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1275, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1317, 88,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1819, 75,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 771, -197,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 579, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1835, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 594, 15, -1458, 22, 1795, -40,
	ftAnimLoop(0x6800, -184),
	ftAnimEnd(),
};
