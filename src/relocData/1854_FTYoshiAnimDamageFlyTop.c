/* AnimJoint data for relocData file 1854 (FTYoshiAnimDamageFlyTop) */
/* 736 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimDamageFlyTop_joint1[14];
extern u16 dFTYoshiAnimDamageFlyTop_joint2[14];
extern u16 dFTYoshiAnimDamageFlyTop_joint3[8];
extern u16 dFTYoshiAnimDamageFlyTop_joint4[8];
extern u16 dFTYoshiAnimDamageFlyTop_joint6[8];
extern u16 dFTYoshiAnimDamageFlyTop_joint7[26];
extern u16 dFTYoshiAnimDamageFlyTop_joint8[16];
extern u16 dFTYoshiAnimDamageFlyTop_joint10[8];
extern u16 dFTYoshiAnimDamageFlyTop_joint11[22];
extern u16 dFTYoshiAnimDamageFlyTop_joint12[16];
extern u16 dFTYoshiAnimDamageFlyTop_joint13[8];
extern u16 dFTYoshiAnimDamageFlyTop_joint14[12];
extern u16 dFTYoshiAnimDamageFlyTop_joint15[8];
extern u16 dFTYoshiAnimDamageFlyTop_joint17[8];
extern u16 dFTYoshiAnimDamageFlyTop_joint18[26];
extern u16 dFTYoshiAnimDamageFlyTop_joint20[16];
extern u16 dFTYoshiAnimDamageFlyTop_joint22[28];
extern u16 dFTYoshiAnimDamageFlyTop_joint23[26];
extern u16 dFTYoshiAnimDamageFlyTop_joint25[44];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimDamageFlyTop_joints[] = {
	(u32)dFTYoshiAnimDamageFlyTop_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimDamageFlyTop_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimDamageFlyTop_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimDamageFlyTop_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimDamageFlyTop_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimDamageFlyTop_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimDamageFlyTop_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimDamageFlyTop_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimDamageFlyTop_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimDamageFlyTop_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimDamageFlyTop_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimDamageFlyTop_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimDamageFlyTop_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimDamageFlyTop_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimDamageFlyTop_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimDamageFlyTop_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimDamageFlyTop_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimDamageFlyTop_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimDamageFlyTop_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF00AA, /* [25] END */
};

/* Joint 1 */
u16 dFTYoshiAnimDamageFlyTop_joint1[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 672, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -26),
};

/* Joint 2 */
u16 dFTYoshiAnimDamageFlyTop_joint2[14] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY), -696, 0,
	ftAnimSetValAfter(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 30, 20,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 16), -696, -3217,
	ftAnimLoop(0x6800, -26),
};

/* Joint 3 */
u16 dFTYoshiAnimDamageFlyTop_joint3[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 430, -45, -219,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
};

/* Joint 4 */
u16 dFTYoshiAnimDamageFlyTop_joint4[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -223, -262, -175,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
};

/* Joint 6 */
u16 dFTYoshiAnimDamageFlyTop_joint6[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 476, 0, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
};

/* Joint 7 */
u16 dFTYoshiAnimDamageFlyTop_joint7[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 1140, 0, -1609, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 2492,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 1140, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -1609, 2492,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1609, 0, 2492, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 1140,
	ftAnimLoop(0x6800, -50),
};

/* Joint 8 */
u16 dFTYoshiAnimDamageFlyTop_joint8[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -720, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -720, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -720, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 10 */
u16 dFTYoshiAnimDamageFlyTop_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 172, 0, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
};

/* Joint 11 */
u16 dFTYoshiAnimDamageFlyTop_joint11[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -1739,
	ftAnimSetValRate(FT_ANIM_ROTZ), 1695, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), -1992,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), -1739, 0, 1695, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1739, 0, 1695, 0,
	ftAnimLoop(0x6800, -40),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimDamageFlyTop_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -684, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), -684,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -684, 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimDamageFlyTop_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 530, -187, -501,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
};

/* Joint 14 */
u16 dFTYoshiAnimDamageFlyTop_joint14[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -536, -893, 0, 0, 156, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimDamageFlyTop_joint15[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -319, 118, -60,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
};

/* Joint 17 */
u16 dFTYoshiAnimDamageFlyTop_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -321, 216, -82,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
};

/* Joint 18 */
u16 dFTYoshiAnimDamageFlyTop_joint18[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -486, 0, -208, 0, 560, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -486, 0, -208, 0, 560, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), -208, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -486, 560,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimDamageFlyTop_joint20[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 613, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 613, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 613, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 22 */
u16 dFTYoshiAnimDamageFlyTop_joint22[28] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1614, 0, 30, 0, 504, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 30, 0, 504, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), -1614,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 30, 0, 504, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -1614,
	ftAnimLoop(0x6800, -52),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimDamageFlyTop_joint23[26] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 43, 0, 369, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 296,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 296, 0, 43, 0, 369, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 296, 0, 43, 0, 369, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimDamageFlyTop_joint25[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 367, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 367, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 367, 0,
	ftAnimLoop(0x6800, -30),
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1418, 0, 103, 0, 504, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -1418, 0, 103, 0, 504, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1418, 0, 103, 0, 504, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
	0x0000, 0x0000,
};
