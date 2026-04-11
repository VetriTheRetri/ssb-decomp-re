/* AnimJoint data for relocData file 1130 (FTLinkAnimFallAerial) */
/* 720 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimFallAerial_joint1[16];
extern u16 dFTLinkAnimFallAerial_joint2[12];
extern u16 dFTLinkAnimFallAerial_joint4[12];
extern u16 dFTLinkAnimFallAerial_joint5[26];
extern u16 dFTLinkAnimFallAerial_joint6[16];
extern u16 dFTLinkAnimFallAerial_joint9[8];
extern u16 dFTLinkAnimFallAerial_joint10[26];
extern u16 dFTLinkAnimFallAerial_joint11[16];
extern u16 dFTLinkAnimFallAerial_joint12[8];
extern u16 dFTLinkAnimFallAerial_joint13[8];
extern u16 dFTLinkAnimFallAerial_joint16[8];
extern u16 dFTLinkAnimFallAerial_joint17[8];
extern u16 dFTLinkAnimFallAerial_joint18[8];
extern u16 dFTLinkAnimFallAerial_joint20[14];
extern u16 dFTLinkAnimFallAerial_joint21[8];
extern u16 dFTLinkAnimFallAerial_joint23[14];
extern u16 dFTLinkAnimFallAerial_joint25[26];
extern u16 dFTLinkAnimFallAerial_joint26[22];
extern u16 dFTLinkAnimFallAerial_joint28[46];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimFallAerial_joints[] = {
	(u32)dFTLinkAnimFallAerial_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimFallAerial_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimFallAerial_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimFallAerial_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimFallAerial_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimFallAerial_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimFallAerial_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimFallAerial_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimFallAerial_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimFallAerial_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimFallAerial_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimFallAerial_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimFallAerial_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimFallAerial_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimFallAerial_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimFallAerial_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimFallAerial_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimFallAerial_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimFallAerial_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	0xFFFF00A5, /* [28] END */
};

/* Joint 1 */
u16 dFTLinkAnimFallAerial_joint1[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 744, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), 61,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 2 */
u16 dFTLinkAnimFallAerial_joint2[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 32, 274, 83, 0, 0, 0,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimFallAerial_joint4[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 315, 166, 56, 0, 130, 0,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimFallAerial_joint5[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1300, 3, -1347, 9, 1955, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1304, -6, -1338, -14, 1943, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1300, -3, -1347, -9, 1955, 11,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimFallAerial_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -744, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -754, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -744, 10,
	ftAnimLoop(0x6800, -30),
};

/* Joint 9 */
u16 dFTLinkAnimFallAerial_joint9[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 278, 266, 193,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -14),
};

/* Joint 10 */
u16 dFTLinkAnimFallAerial_joint10[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1119, 4, 1548, 2, -1445, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1115, -5, 1550, -2, -1435, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1119, -4, 1548, -2, -1445, -9,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimFallAerial_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -616, 16,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -600, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -616, -16,
	ftAnimLoop(0x6800, -30),
};

/* Joint 12 */
u16 dFTLinkAnimFallAerial_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -14),
};

/* Joint 13 */
u16 dFTLinkAnimFallAerial_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -14),
};

/* Joint 16 */
u16 dFTLinkAnimFallAerial_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1508, 346, -843,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -14),
};

/* Joint 17 */
u16 dFTLinkAnimFallAerial_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -14),
};

/* Joint 18 */
u16 dFTLinkAnimFallAerial_joint18[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -14),
};

/* Joint 20 */
u16 dFTLinkAnimFallAerial_joint20[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 97,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 199,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 97,
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimFallAerial_joint21[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1577, -1748, 825,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -14),
};

/* Joint 23 */
u16 dFTLinkAnimFallAerial_joint23[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 1205,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1205, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 1205,
	ftAnimLoop(0x6800, -26),
};

/* Joint 25 */
u16 dFTLinkAnimFallAerial_joint25[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 473, 0, -183, 0, 70, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 473, 0, -183, 0, 70, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 473, 0, -183, 0, 70, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimFallAerial_joint26[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 301, 0, 318, 0, -270, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 301, 318, -270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 301, 0, 318, 0, -270, 0,
	ftAnimLoop(0x6800, -42),
};

/* Joint 28 */
u16 dFTLinkAnimFallAerial_joint28[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 845, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 845, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 845, 0,
	ftAnimLoop(0x6800, -30),
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -89, 0, 252, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -647,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -647, 0, -89, 0, 252, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -89, 0, 252, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -647,
	ftAnimLoop(0x6800, -50),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
