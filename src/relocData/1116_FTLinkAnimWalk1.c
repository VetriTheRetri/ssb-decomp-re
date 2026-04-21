/* AnimJoint data for relocData file 1116 (FTLinkAnimWalk1) */
/* 1520 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimWalk1_joint1[20];
extern u16 dFTLinkAnimWalk1_joint2[14];
extern u16 dFTLinkAnimWalk1_joint4[26];
extern u16 dFTLinkAnimWalk1_joint5[74];
extern u16 dFTLinkAnimWalk1_joint6[32];
extern u16 dFTLinkAnimWalk1_joint9[28];
extern u16 dFTLinkAnimWalk1_joint10[26];
extern u16 dFTLinkAnimWalk1_joint11[24];
extern u16 dFTLinkAnimWalk1_joint12[10];
extern u16 dFTLinkAnimWalk1_joint13[10];
extern u16 dFTLinkAnimWalk1_joint16[88];
extern u16 dFTLinkAnimWalk1_joint17[10];
extern u16 dFTLinkAnimWalk1_joint18[22];
extern u16 dFTLinkAnimWalk1_joint20[30];
extern u16 dFTLinkAnimWalk1_joint21[68];
extern u16 dFTLinkAnimWalk1_joint23[32];
extern u16 dFTLinkAnimWalk1_joint25[64];
extern u16 dFTLinkAnimWalk1_joint26[58];
extern u16 dFTLinkAnimWalk1_joint28[24];
extern u16 dFTLinkAnimWalk1_joint29[42];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimWalk1_joints[] = {
	(u32)dFTLinkAnimWalk1_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimWalk1_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimWalk1_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimWalk1_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimWalk1_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimWalk1_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimWalk1_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimWalk1_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimWalk1_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimWalk1_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimWalk1_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimWalk1_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimWalk1_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimWalk1_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimWalk1_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimWalk1_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimWalk1_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimWalk1_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimWalk1_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	(u32)dFTLinkAnimWalk1_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimWalk1_joint1[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 804, 86,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 47), 901, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 33), 804, 86,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 47), 901, 0,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -38),
};

/* Joint 2 */
u16 dFTLinkAnimWalk1_joint2[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -107, 276, 0, 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 33,
	ftAnimBlock(0, 80),
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimWalk1_joint4[26] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 340, 246, 180,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 47), 259, 166, 56,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 33), 340, 246, 180,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 47), 259, 166, 56,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -50),
};

/* Joint 5 */
u16 dFTLinkAnimWalk1_joint5[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -348, -5, -301, 0, 229, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 46), -327, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 57), 166, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), 42, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 27, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 28), 124, 19,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -326, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), -302, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 144, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -339, -9,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 143, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 230, -1,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -302, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -348, -8, -301, 0, 229, -1,
	ftAnimLoop(0x6800, -144),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimWalk1_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -441, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 36), -544, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -538, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), -473, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -463, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -446, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -441, 5,
	ftAnimLoop(0x6800, -62),
};

/* Joint 9 */
u16 dFTLinkAnimWalk1_joint9[28] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 299, 121, 140,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 33,
	ftAnimBlock(0, 7),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 4, 7, 76,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 299, 121, 140,
	ftAnimBlock(0, 33),
	ftAnimLoop(0x6800, -52),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimWalk1_joint10[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 385, 0, 149, -1, -174, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 79), 384, 0, 150, -1, -173, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 385, 0, 149, -1, -174, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimWalk1_joint11[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -597, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 54), -635, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -640, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -606, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -597, 8,
	ftAnimLoop(0x6800, -46),
};

/* Joint 12 */
u16 dFTLinkAnimWalk1_joint12[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	_FT_ANIM_CMD(11, 0, 1), 33,
	ftAnimBlock(0, 80),
	ftAnimLoop(0x6800, -18),
};

/* Joint 13 */
u16 dFTLinkAnimWalk1_joint13[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	_FT_ANIM_CMD(11, 0, 1), 33,
	ftAnimBlock(0, 80),
	ftAnimLoop(0x6800, -18),
};

/* Joint 16 */
u16 dFTLinkAnimWalk1_joint16[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1538, -6, -431, 1, -103, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1464, -5, -441, -2, -124, -1,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1435, 0, -476, -3, -135, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1478, 5, -509, -2, -143, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1551, 6, -536, -1, -153, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1617, 4, -541, 1, -152, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1631, -1, -512, 3, -115, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1596, -4, -468, 4, -85, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1538, -6, -431, 1, -103, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1464, -5, -441, -2, -124, -1,
	ftAnimBlock(0, 3),
	ftAnimLoop(0x6800, -172),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimWalk1_joint17[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	_FT_ANIM_CMD(11, 0, 1), 33,
	ftAnimBlock(0, 80),
	ftAnimLoop(0x6800, -18),
};

/* Joint 18 */
u16 dFTLinkAnimWalk1_joint18[22] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -74, -316, -15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 47), 0, -199, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 33), -74, -316, -15,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 47), 0, -199, 0,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -42),
};

/* Joint 20 */
u16 dFTLinkAnimWalk1_joint20[30] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 25, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -66, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 13,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 40), 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), 25, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -66, 0,
	ftAnimBlock(0, 13),
	ftAnimLoop(0x6800, -58),
};

/* Joint 21 */
u16 dFTLinkAnimWalk1_joint21[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -207, 0, -278, 0, 319, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 73), -294, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 35), -288, -10, -79, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -298, -10, -82, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 38), 225, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 26), -192, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -182, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -205, -3,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -293, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -279, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 247, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 315, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -207, -1, -278, 0, 319, 4,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimWalk1_joint23[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 112, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), 469, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 473, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), 477, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 474, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 119, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 112, -6,
	ftAnimLoop(0x6800, -62),
};

/* Joint 25 */
u16 dFTLinkAnimWalk1_joint25[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 179, 0, -243, 0, 15, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 51), -45, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 61), 359, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 38), -123, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -121, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 39), 5, 8,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -52, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), -243, 0,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 344, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 180, -1,
	ftAnimBlock(0, 16),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 12, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 179, 0, -243, 0, 15, 2,
	ftAnimLoop(0x6800, -124),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimWalk1_joint26[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 156, 0, 347, 0, -339, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 65), 315, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 67), 195, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 62), -188, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -201, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -339, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 319, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 347, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 190, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 156, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 156, 0, 347, 0, -339, 0,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimWalk1_joint28[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 566, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 47), 474, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 474, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), 566, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 566, 0,
	ftAnimLoop(0x6800, -46),
};

/* Joint 29 */
u16 dFTLinkAnimWalk1_joint29[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -433, 0, -78, 0, -18, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 79), -433, 0, -78, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 68), -87, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -78, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -19, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -433, 0, -78, 0, -18, 0,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
