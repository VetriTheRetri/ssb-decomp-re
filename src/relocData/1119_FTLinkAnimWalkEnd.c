/* AnimJoint data for relocData file 1119 (FTLinkAnimWalkEnd) */
/* 800 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimWalkEnd_joint1[12];
extern u16 dFTLinkAnimWalkEnd_joint2[8];
extern u16 dFTLinkAnimWalkEnd_joint4[12];
extern u16 dFTLinkAnimWalkEnd_joint5[26];
extern u16 dFTLinkAnimWalkEnd_joint6[16];
extern u16 dFTLinkAnimWalkEnd_joint9[12];
extern u16 dFTLinkAnimWalkEnd_joint10[26];
extern u16 dFTLinkAnimWalkEnd_joint11[16];
extern u16 dFTLinkAnimWalkEnd_joint12[12];
extern u16 dFTLinkAnimWalkEnd_joint13[12];
extern u16 dFTLinkAnimWalkEnd_joint16[12];
extern u16 dFTLinkAnimWalkEnd_joint17[12];
extern u16 dFTLinkAnimWalkEnd_joint18[12];
extern u16 dFTLinkAnimWalkEnd_joint20[12];
extern u16 dFTLinkAnimWalkEnd_joint21[32];
extern u16 dFTLinkAnimWalkEnd_joint23[16];
extern u16 dFTLinkAnimWalkEnd_joint25[26];
extern u16 dFTLinkAnimWalkEnd_joint26[26];
extern u16 dFTLinkAnimWalkEnd_joint28[42];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimWalkEnd_joints[] = {
	(u32)dFTLinkAnimWalkEnd_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimWalkEnd_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimWalkEnd_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimWalkEnd_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimWalkEnd_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimWalkEnd_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimWalkEnd_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimWalkEnd_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimWalkEnd_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimWalkEnd_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimWalkEnd_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimWalkEnd_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimWalkEnd_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimWalkEnd_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimWalkEnd_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimWalkEnd_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimWalkEnd_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimWalkEnd_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimWalkEnd_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	0xFFFF00BB, /* [28] END */
};

/* Joint 1 */
u16 dFTLinkAnimWalkEnd_joint1[12] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 804, 86,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 901, 0,
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimWalkEnd_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, 276, 0,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -14),
};

/* Joint 4 */
u16 dFTLinkAnimWalkEnd_joint4[12] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 340, 246, 180,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 259, 166, 56,
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimWalkEnd_joint5[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 69, 7, -66, -13, -112, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 272, 14, -320, -12, -85, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 280, 7, -326, -6, -86, -1,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimWalkEnd_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -606, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -510, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 9,
	ftAnimLoop(0x6800, -30),
};

/* Joint 9 */
u16 dFTLinkAnimWalkEnd_joint9[12] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 288, 116, 138,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 4, 7, 76,
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimWalkEnd_joint10[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 350, 3, 192, -3, -164, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 413, 4, 126, -5, -55, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 416, 2, 123, -2, -50, 4,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimWalkEnd_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -502, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -585, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, -2,
	ftAnimLoop(0x6800, -30),
};

/* Joint 12 */
u16 dFTLinkAnimWalkEnd_joint12[12] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, -209, 0,
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTLinkAnimWalkEnd_joint13[12] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 937, -804, 670,
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTLinkAnimWalkEnd_joint16[12] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1527, -413, -211,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 1697, -536, -339,
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimWalkEnd_joint17[12] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, -163, 0,
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimWalkEnd_joint18[12] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -74, -316, -15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, -199, 0,
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimWalkEnd_joint20[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -66, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 0, 0,
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimWalkEnd_joint21[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 122, -6, -218, 0, 172, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -243, -2, 106, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -147, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -214, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -27, -244, 0, 108, 2,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimWalkEnd_joint23[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 316, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 257, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -8,
	ftAnimLoop(0x6800, -30),
};

/* Joint 25 */
u16 dFTLinkAnimWalkEnd_joint25[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 150, 6, -504, 7, -28, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 321, 14, -185, 40, -37, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, 7, -161, 23, -34, 2,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimWalkEnd_joint26[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 156, 4, 347, -2, -339, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 266, 8, 274, -8, -134, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 4, 269, -4, -125, 9,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimWalkEnd_joint28[42] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 566, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 434, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -9,
	ftAnimLoop(0x6800, -30),
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -461, 0, -78, 0, -18, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -430, 4, -74, 0, -69, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -427, 3, -74, 0, -69, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};
