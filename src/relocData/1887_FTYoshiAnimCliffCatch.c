/* AnimJoint data for relocData file 1887 (FTYoshiAnimCliffCatch) */
/* 880 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimCliffCatch_joint1[16];
extern u16 dFTYoshiAnimCliffCatch_joint2[10];
extern u16 dFTYoshiAnimCliffCatch_joint3[16];
extern u16 dFTYoshiAnimCliffCatch_joint4[10];
extern u16 dFTYoshiAnimCliffCatch_joint7[10];
extern u16 dFTYoshiAnimCliffCatch_joint8[60];
extern u16 dFTYoshiAnimCliffCatch_joint11[32];
extern u16 dFTYoshiAnimCliffCatch_joint12[38];
extern u16 dFTYoshiAnimCliffCatch_joint15[14];
extern u16 dFTYoshiAnimCliffCatch_joint16[10];
extern u16 dFTYoshiAnimCliffCatch_joint18[10];
extern u16 dFTYoshiAnimCliffCatch_joint19[30];
extern u16 dFTYoshiAnimCliffCatch_joint21[16];
extern u16 dFTYoshiAnimCliffCatch_joint23[24];
extern u16 dFTYoshiAnimCliffCatch_joint24[38];
extern u16 dFTYoshiAnimCliffCatch_joint26[52];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTYoshiAnimCliffCatch_joints[] = {
	(u32)dFTYoshiAnimCliffCatch_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimCliffCatch_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimCliffCatch_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimCliffCatch_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimCliffCatch_joint7, /* [4] joint 7 */
	0x00000000, /* [5] NULL */
	0x00000000, /* [6] NULL */
	(u32)dFTYoshiAnimCliffCatch_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimCliffCatch_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTYoshiAnimCliffCatch_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimCliffCatch_joint15, /* [12] joint 15 */
	0x00000000, /* [13] NULL */
	0x00000000, /* [14] NULL */
	(u32)dFTYoshiAnimCliffCatch_joint16, /* [15] joint 16 */
	(u32)dFTYoshiAnimCliffCatch_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTYoshiAnimCliffCatch_joint19, /* [18] joint 19 */
	(u32)dFTYoshiAnimCliffCatch_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTYoshiAnimCliffCatch_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTYoshiAnimCliffCatch_joint24, /* [23] joint 24 */
	(u32)dFTYoshiAnimCliffCatch_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	0xFFFF00C9, /* [26] END */
};

/* Joint 1 */
u16 dFTYoshiAnimCliffCatch_joint1[16] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -187, -880,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 11,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -972, -1569, -944, 659,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -1756, -220,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTYoshiAnimCliffCatch_joint2[10] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), -893,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimCliffCatch_joint3[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 72, 17, -481, 0, 30, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -446, 0, 0, -49, 83, 168,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimCliffCatch_joint4[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 15, -4, 138,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -114, -33, 604,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimCliffCatch_joint7[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -149, 87, 263,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, -965, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimCliffCatch_joint8[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1580, 10, -1536, -19, 1085, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1510, -97, -1412, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 994, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1137, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1401, -242, -1172, 181, 1157, 180,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 914, 147,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -935, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1497, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1591, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1320, 278, 1188, -277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1472, 151, -977, -42, 1037, -151,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTYoshiAnimCliffCatch_joint11[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -6, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -312, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTYoshiAnimCliffCatch_joint12[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2037, -17, -1933, -6, 339, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -111, -116,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -2045, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -2505, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2667, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2784, -77, -213, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2822, -37, -2038, 7, -246, -32,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimCliffCatch_joint15[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTYoshiAnimCliffCatch_joint16[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -190, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -108, 112, 20,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimCliffCatch_joint18[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -153, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -123, 245, -25,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTYoshiAnimCliffCatch_joint19[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 154, -23, -161, 11, 0, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 160, 16, 577, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 35, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 56, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 64, 8, 168, 7, 594, 16,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTYoshiAnimCliffCatch_joint21[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTYoshiAnimCliffCatch_joint23[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1355, -1, -225, 0, 323, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1339, 14, -225, 0, 323, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1348, 8, -225, 0, 323, 0,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTYoshiAnimCliffCatch_joint24[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -472, 33, 637, -5, -83, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 8, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 477, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 302, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 125, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 0, -8, 2, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -7, -7, -39, -42, 493, 16,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimCliffCatch_joint26[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -6,
	ftAnimEnd(),
	0x200E, 0x06DC, 0x000D, 0xFFD0, 0x0000, 0x0159, 0x0000, 0x280D, 0x0007, 0xFFD0, 0x0000, 0x0159, 0x0000, 0x2003, 0x0004, 0x07EE, 0x007F, 0x2003, 0x0001, 0x0867, 0xFFEF, 0x2003, 0x0001, 0x07CC, 0xFE28, 0x2003, 0x0001, 0x04B7, 0xFE62, 0x200F, 0x0001, 0x048F, 0xFFD8, 0xFFD0, 0x0000, 0x0159, 0x0000, 0x0000,
};
