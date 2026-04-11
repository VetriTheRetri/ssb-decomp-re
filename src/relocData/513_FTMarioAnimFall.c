/* AnimJoint data for relocData file 513 (FTMarioAnimFall) */
/* 848 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimFall_joint4[18];
extern u16 dFTMarioAnimFall_joint5[76];
extern u16 dFTMarioAnimFall_joint6[16];
extern u16 dFTMarioAnimFall_joint7[8];
extern u16 dFTMarioAnimFall_joint10[18];
extern u16 dFTMarioAnimFall_joint11[68];
extern u16 dFTMarioAnimFall_joint12[16];
extern u16 dFTMarioAnimFall_joint13[8];
extern u16 dFTMarioAnimFall_joint15[12];
extern u16 dFTMarioAnimFall_joint16[26];
extern u16 dFTMarioAnimFall_joint18[14];
extern u16 dFTMarioAnimFall_joint20[26];
extern u16 dFTMarioAnimFall_joint21[26];
extern u16 dFTMarioAnimFall_joint23[44];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimFall_joints[] = {
	0x00000000, /* [0] NULL */
	0x00000000, /* [1] NULL */
	(u32)dFTMarioAnimFall_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimFall_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimFall_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimFall_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimFall_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimFall_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimFall_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimFall_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimFall_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimFall_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimFall_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimFall_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimFall_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimFall_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	0xFFFF00C6, /* [23] END */
};

/* Joint 4 */
u16 dFTMarioAnimFall_joint4[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 89, 8, 0, 12, 0, -8,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -14, -92,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 89, 0, 0,
	ftAnimLoop(0x6800, -34),
};

/* Joint 5 */
u16 dFTMarioAnimFall_joint5[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1243, -272, -693, -23, 1482, 289,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -566, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1516, -378, 1772, 397,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2000, -331, 2277, 345,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2179, -276, 2464, 259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2552, -355, 2796, 319,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -3283, -210,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 3734, 289,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -576, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -692, -46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3488, -286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3856, -485, 4095, 482,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4460, -604, -693, 0, 4699, 604,
	ftAnimLoop(0x6800, -148),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimFall_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 9,
	ftAnimLoop(0x6800, -30),
};

/* Joint 7 */
u16 dFTMarioAnimFall_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -625, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -14),
};

/* Joint 10 */
u16 dFTMarioAnimFall_joint10[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 127, 6, 0, -12, 0, 5,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 127, 0, 0,
	ftAnimLoop(0x6800, -34),
};

/* Joint 11 */
u16 dFTMarioAnimFall_joint11[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1261, 429, 690, 33, 1467, 446,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 571, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1690, 505, 1914, 517,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2272, 416, 2502, 411,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2523, 278, 2736, 253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2829, 251, 3009, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 3406, 206, 3617, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3603, 325, 613, 67, 3816, 322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4057, 445, 706, 39, 4262, 441,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4493, 436, 693, -13, 4699, 437,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimFall_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimFall_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 625, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -14),
};

/* Joint 15 */
u16 dFTMarioAnimFall_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimFall_joint16[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 74, 0, 3, 1, -101, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 74, 0, 4, 0, -106, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 74, 0, 3, 0, -101, 5,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimFall_joint18[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimLoop(0x6800, -26),
};

/* Joint 20 */
u16 dFTMarioAnimFall_joint20[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -209, -2, -45, 0, 556, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -210, 0, -45, 0, 553, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -209, 0, -45, 0, 556, 2,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimFall_joint21[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 22, 0, 204, -3, -233, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 22, 0, 204, 0, -232, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 22, 0, 204, 0, -233, -1,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimFall_joint23[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 932, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 931, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 932, 0,
	ftAnimLoop(0x6800, -30),
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 148, 4, -170, -4, -183, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 149, 0, -171, 0, -183, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 148, 0, -170, 0, -183, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
	0x0000, 0x0000,
};
