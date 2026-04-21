/* AnimJoint data for relocData file 656 (FTFoxAnimFall) */
/* 928 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimFall_joint1[12];
extern u16 dFTFoxAnimFall_joint2[8];
extern u16 dFTFoxAnimFall_joint4[36];
extern u16 dFTFoxAnimFall_joint5[34];
extern u16 dFTFoxAnimFall_joint7[16];
extern u16 dFTFoxAnimFall_joint8[40];
extern u16 dFTFoxAnimFall_joint10[12];
extern u16 dFTFoxAnimFall_joint11[40];
extern u16 dFTFoxAnimFall_joint13[24];
extern u16 dFTFoxAnimFall_joint15[12];
extern u16 dFTFoxAnimFall_joint16[26];
extern u16 dFTFoxAnimFall_joint18[16];
extern u16 dFTFoxAnimFall_joint20[26];
extern u16 dFTFoxAnimFall_joint21[26];
extern u16 dFTFoxAnimFall_joint23[16];
extern u16 dFTFoxAnimFall_joint24[36];
extern u16 dFTFoxAnimFall_joint25[18];
extern u16 dFTFoxAnimFall_joint26[14];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimFall_joints[] = {
	(u32)dFTFoxAnimFall_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimFall_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimFall_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimFall_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimFall_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTFoxAnimFall_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimFall_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimFall_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimFall_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTFoxAnimFall_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimFall_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimFall_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimFall_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimFall_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimFall_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimFall_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimFall_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimFall_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimFall_joint1[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 960, 0,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimFall_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -14),
};

/* Joint 4 */
u16 dFTFoxAnimFall_joint4[36] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -268, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 3, 0, -266, -2, 1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 2, 0, -280, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1, 0, -269, 2, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -268, 0,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimFall_joint5[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1051, -49, -1270, -9, 876, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1250, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1159, 57, 989, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1095, 54, 922, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1051, 43, -1270, -19, 876, -45,
	ftAnimLoop(0x6800, -64),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimFall_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 7,
	ftAnimLoop(0x6800, -30),
};

/* Joint 8 */
u16 dFTFoxAnimFall_joint8[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 178, 268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 179, 0, 268, 3, -2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 177, 0, 284, 0, -2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 179, 0, 267, -3, -4, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 178, 268, 0,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimFall_joint10[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimFall_joint11[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2489, -13, 567, -10, 451, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 548, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -2626, -72, 278, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2686, -11, 199, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -2527, 48, 403, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2489, 37, 567, 19, 451, 47,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimFall_joint13[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -389, 18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -383, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -421, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -410, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -389, 20,
	ftAnimLoop(0x6800, -46),
};

/* Joint 15 */
u16 dFTFoxAnimFall_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimFall_joint16[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -6, 0, 25, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0, -14, 7, 25, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, -6, 8, 25, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimFall_joint18[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 5, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 20 */
u16 dFTFoxAnimFall_joint20[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 60, 10, -94, 13, 493, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 63, -3, -67, -28, 496, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 60, -2, -94, -26, 493, -2,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimFall_joint21[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1592, 1, 1607, 0, 845, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1594, -1, 1607, 0, 850, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1592, -1, 1607, 0, 845, -5,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimFall_joint23[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1013, -14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1003, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1013, 10,
	ftAnimLoop(0x6800, -30),
};

/* Joint 24 */
u16 dFTFoxAnimFall_joint24[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3, -4, -3095, 2, -202, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 1, 1, -3098, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -186, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -225, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -217, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3, 2, -3095, 3, -202, 14,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimFall_joint25[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 430,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 178,
	ftAnimLoop(0x6800, -32),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimFall_joint26[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 312,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -133,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 312,
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};
