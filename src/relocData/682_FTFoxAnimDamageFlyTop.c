/* AnimJoint data for relocData file 682 (FTFoxAnimDamageFlyTop) */
/* 864 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimDamageFlyTop_joint1[12];
extern u16 dFTFoxAnimDamageFlyTop_joint2[14];
extern u16 dFTFoxAnimDamageFlyTop_joint4[12];
extern u16 dFTFoxAnimDamageFlyTop_joint5[22];
extern u16 dFTFoxAnimDamageFlyTop_joint6[16];
extern u16 dFTFoxAnimDamageFlyTop_joint7[12];
extern u16 dFTFoxAnimDamageFlyTop_joint8[12];
extern u16 dFTFoxAnimDamageFlyTop_joint10[12];
extern u16 dFTFoxAnimDamageFlyTop_joint11[26];
extern u16 dFTFoxAnimDamageFlyTop_joint12[14];
extern u16 dFTFoxAnimDamageFlyTop_joint13[12];
extern u16 dFTFoxAnimDamageFlyTop_joint15[12];
extern u16 dFTFoxAnimDamageFlyTop_joint16[26];
extern u16 dFTFoxAnimDamageFlyTop_joint18[16];
extern u16 dFTFoxAnimDamageFlyTop_joint20[26];
extern u16 dFTFoxAnimDamageFlyTop_joint21[28];
extern u16 dFTFoxAnimDamageFlyTop_joint23[16];
extern u16 dFTFoxAnimDamageFlyTop_joint24[28];
extern u16 dFTFoxAnimDamageFlyTop_joint25[64];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimDamageFlyTop_joints[] = {
	(u32)dFTFoxAnimDamageFlyTop_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimDamageFlyTop_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimDamageFlyTop_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimDamageFlyTop_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimDamageFlyTop_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimDamageFlyTop_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimDamageFlyTop_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimDamageFlyTop_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimDamageFlyTop_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimDamageFlyTop_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimDamageFlyTop_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimDamageFlyTop_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimDamageFlyTop_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimDamageFlyTop_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimDamageFlyTop_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimDamageFlyTop_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimDamageFlyTop_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimDamageFlyTop_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimDamageFlyTop_joint25, /* [24] joint 25 */
	0xFFFF00BE, /* [25] END */
};

/* Joint 1 */
u16 dFTFoxAnimDamageFlyTop_joint1[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 720, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimDamageFlyTop_joint2[14] = {
	ftAnimSetVal(FT_ANIM_ROTY), 402,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 134, 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 16), 3619,
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimDamageFlyTop_joint4[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -439, 485, -424, 0, 0, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimDamageFlyTop_joint5[22] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -193, 0, -727, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), -2281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -193, 0, -727, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -193, 0, -727, 0,
	ftAnimLoop(0x6800, -40),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimDamageFlyTop_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -475, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -475, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -475, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 7 */
u16 dFTFoxAnimDamageFlyTop_joint7[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimDamageFlyTop_joint8[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -342, 478, 50, 0, 336, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimDamageFlyTop_joint10[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimDamageFlyTop_joint11[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 280, 0, 193, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 442,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 191, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 282, 446,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 280, -1, 193, 2, 442, -4,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimDamageFlyTop_joint12[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 7,
	ftAnimLoop(0x6800, -26),
};

/* Joint 13 */
u16 dFTFoxAnimDamageFlyTop_joint13[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 272, 0, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimDamageFlyTop_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimDamageFlyTop_joint16[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 94, 0, 105, 0, -296, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 94, 0, 105, 0, -296, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 94, 0, 105, 0, -296, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimDamageFlyTop_joint18[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 282, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 282, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 282, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 20 */
u16 dFTFoxAnimDamageFlyTop_joint20[26] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 159, 0, 794, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 845,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 845, 0, 159, 0, 794, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 845, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 159, 794,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimDamageFlyTop_joint21[28] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 136, 0, 11, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 787,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 136, 0, 11, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), 787,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 787, 0, 11, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 136,
	ftAnimLoop(0x6800, -52),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimDamageFlyTop_joint23[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 763, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 763, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 763, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 24 */
u16 dFTFoxAnimDamageFlyTop_joint24[28] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 72, 0, -431, 0, 215, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 72, 0, -431, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), 215,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 72, 0, 215, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -431,
	ftAnimLoop(0x6800, -52),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimDamageFlyTop_joint25[64] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -254, -482, -73, 0, -126, -96,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
	0x400E, 0xFFFE, 0xFF90, 0xFF6F, 0x48E0, 0x0000, 0x0040, 0xFE3E, 0x200F, 0x0003, 0xFFE0, 0xFFF4, 0xFEF0, 0xFFE6, 0xFF9E, 0x0007, 0x2803, 0x0003, 0xFFB2, 0x0021, 0x380D, 0x0003, 0xFEF0, 0xFF9E, 0x400D, 0x0005, 0xFEF0, 0xFF9E, 0x3803, 0x0003, 0x00A8, 0x2003, 0x0002, 0xFFB2, 0xFFF9, 0x200F, 0x0003, 0x0083, 0x000F, 0xFEF0, 0x0020, 0xFF9E, 0xFFF7, 0x380F, 0x0002, 0xFFFE, 0xFF90, 0xFF6F, 0x6800, 0xFF9E, 0x0000, 0x0000,
};
