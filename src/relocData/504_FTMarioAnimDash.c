/* AnimJoint data for relocData file 504 (FTMarioAnimDash) */
/* 2480 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimDash_joint1[40];
extern u16 dFTMarioAnimDash_joint2[68];
extern u16 dFTMarioAnimDash_joint4[30];
extern u16 dFTMarioAnimDash_joint5[98];
extern u16 dFTMarioAnimDash_joint6[54];
extern u16 dFTMarioAnimDash_joint7[16];
extern u16 dFTMarioAnimDash_joint8[30];
extern u16 dFTMarioAnimDash_joint10[34];
extern u16 dFTMarioAnimDash_joint11[144];
extern u16 dFTMarioAnimDash_joint12[62];
extern u16 dFTMarioAnimDash_joint13[16];
extern u16 dFTMarioAnimDash_joint15[10];
extern u16 dFTMarioAnimDash_joint16[134];
extern u16 dFTMarioAnimDash_joint18[64];
extern u16 dFTMarioAnimDash_joint20[110];
extern u16 dFTMarioAnimDash_joint21[116];
extern u16 dFTMarioAnimDash_joint23[48];
extern u16 dFTMarioAnimDash_joint24[118];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimDash_joints[] = {
	(u32)dFTMarioAnimDash_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimDash_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimDash_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimDash_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimDash_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimDash_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimDash_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimDash_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimDash_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimDash_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimDash_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimDash_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimDash_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimDash_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimDash_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimDash_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimDash_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTMarioAnimDash_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimDash_joint1[40] = {
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 755,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 3, 540,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 4,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_TRAZ), 223, -32,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 1), 223, 39,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ, 12), 0, 0, -67,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 6), 360,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 6), 755,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY, 10), 223, 3, 540,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 5), -59,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 5), 39,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimDash_joint2[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX), -124, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -88, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 19,
	ftAnimSetValRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 37, 0, -7, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -790, -8, -95, 4,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4,
	ftAnimSetVal(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValAfter(FT_ANIM_TRAY), 0,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), -124, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -113, 0,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), -16, 124,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -88, 0, -790, 8, -95, 4,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 10), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTMarioAnimDash_joint4[30] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 408, -176, -136,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 208, 258, 110,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4,
	ftAnimBlock(0, 1),
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 749, 401, 79,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 407, 234, 78,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 208, 258, 110,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimDash_joint5[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 235, -132, -233, 1, -302, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -339, 63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -437, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -44, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -13, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -367, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -215, 99,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 254, -41,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -406, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -317, 6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -374, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -31, 76,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 204, -57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -206, -42,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 16, 41, -301, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 93, 13, -248, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -244, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -277, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 103, 9, -232, 15, -302, -24,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimDash_joint6[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -108, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -401, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -614, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -602, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -408, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -247, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -294, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -272, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -213, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -33, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -9,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimDash_joint7[16] = {
	ftAnimSetVal(FT_ANIM_ROTX), -625,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), -625,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -625,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimDash_joint8[30] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 188, -36,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 20), 201, 176,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 19,
	ftAnimSetValBlock(FT_ANIM_ROTY), -66,
	ftAnimSetValT(FT_ANIM_ROTY, 5), -4,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 4,
	ftAnimBlock(0, 1),
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 188, -68, -36,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 201, -4, 176,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTMarioAnimDash_joint10[34] = {
	ftAnimSetValBlock(FT_ANIM_ROTX), -190,
	ftAnimSetValT(FT_ANIM_ROTX, 20), -221,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 19,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 150, 28,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 139, -209,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4,
	ftAnimBlock(0, 1),
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -491, 81, -136,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -190, -42, 97,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -221, 139, -209,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimDash_joint11[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 434, 9, 476, 75, -95, 161,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 363, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 443, 113, 551, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 662, 148, 350, -165,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 273, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 949, 83,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 382, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 371, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 328, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 276, 61,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1039, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 720, -86,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 350, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 318, 128,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 643, -123, 342, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 474, -430, 520, 142, 169, -450,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 666, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -218, -325, -559, -333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -176, 47, -497, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -124, 59, -424, 79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -7, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 403, 43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 681, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 575, -24,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 20, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 44, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 443, 40, 551, -23, 65, 21,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimDash_joint12[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -811,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -715, 277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -303, 357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -450, -363,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -735, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -745, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -489, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -573, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -610, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -787, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, -23,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimDash_joint13[16] = {
	ftAnimSetVal(FT_ANIM_ROTX), 625,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 625,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), 804,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 625, -11,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimDash_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 23),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimDash_joint16[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 94, -247, 172, -475, 931, -895,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -153, -111, -302, -277, 36, -487,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -127, 42, -383, -55, -42, -90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 176, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -61, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -526, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -645, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -636, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 120, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 147, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -698, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -610, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 178, -44, -103, -25, -384, 74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3, -53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -272, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -460, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -420, 78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -156, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -48, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -139, -44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -222, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 65, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -313, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -327, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -186, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -196, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -153, 43, -302, 24, 36, -29,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimDash_joint18[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 144, 376,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 521, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 540, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 917, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1068, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 986, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 908, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 494, -314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 112, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 263, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 307, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 159, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 414, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 396, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 521, 125,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimDash_joint20[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 590, -910, -12, 0, -150, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -157, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -82, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -320, -476,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -361, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -320, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -282, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -185, -60,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -190, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 207, -59,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -280, -45, -160, -73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -268, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -176, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -233, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -25, 30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 150, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -120, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -22, -29, -223, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -36, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -149, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -79, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -260, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -320, -59, -12, 23, -150, -29,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimDash_joint21[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1716, 236, 1972, -528, -1682, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1857, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1479, 114, 1444, -273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1488, -4, 1425, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1442, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 1367, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1174, -20, -1765, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1521, -32, 1326, 123, -1503, 339,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1615, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1421, 59, -1086, 306,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -855, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1468, 21,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1654, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1739, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -838, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1501, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1476, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1436, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1759, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1545, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1681, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1689, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1479, 65, 1444, 7, -1692, -3,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimDash_joint23[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 540, 87,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1053, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1087, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 751, -440,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 206, -375,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 284, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 350, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1015, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 843, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 659, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 628, -31,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimDash_joint24[118] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -551, 579, -20, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), -219,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -106, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -380, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 27, 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 72, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -19, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 131, 44, -129, 98,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 34, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 90, 136, -460, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 143, 61, -433, 181,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 190, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 80, 1, -98, 256,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -151, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 133, 61,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 130, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 31, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -149, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -204, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 204, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 248, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 145, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 73, -59, 5, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 27, -46, -20, -25, -219, -15,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
