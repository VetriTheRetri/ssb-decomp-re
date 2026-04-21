/* AnimJoint data for relocData file 1733 (FTNessAnimThrownDK) */
/* 1344 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimThrownDK_joint2[22];
extern u16 dFTNessAnimThrownDK_joint3[24];
extern u16 dFTNessAnimThrownDK_joint5[24];
extern u16 dFTNessAnimThrownDK_joint6[72];
extern u16 dFTNessAnimThrownDK_joint7[16];
extern u16 dFTNessAnimThrownDK_joint8[12];
extern u16 dFTNessAnimThrownDK_joint9[18];
extern u16 dFTNessAnimThrownDK_joint11[18];
extern u16 dFTNessAnimThrownDK_joint12[72];
extern u16 dFTNessAnimThrownDK_joint13[14];
extern u16 dFTNessAnimThrownDK_joint14[18];
extern u16 dFTNessAnimThrownDK_joint16[14];
extern u16 dFTNessAnimThrownDK_joint17[48];
extern u16 dFTNessAnimThrownDK_joint19[36];
extern u16 dFTNessAnimThrownDK_joint20[36];
extern u16 dFTNessAnimThrownDK_joint22[26];
extern u16 dFTNessAnimThrownDK_joint23[52];
extern u16 dFTNessAnimThrownDK_joint25[28];
extern u16 dFTNessAnimThrownDK_joint26[36];
extern u16 dFTNessAnimThrownDK_joint27[32];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTNessAnimThrownDK_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTNessAnimThrownDK_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimThrownDK_joint3, /* [2] joint 3 */
	(u32)dFTNessAnimThrownDK_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTNessAnimThrownDK_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimThrownDK_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimThrownDK_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimThrownDK_joint9, /* [8] joint 9 */
	(u32)dFTNessAnimThrownDK_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTNessAnimThrownDK_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimThrownDK_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimThrownDK_joint14, /* [13] joint 14 */
	(u32)dFTNessAnimThrownDK_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTNessAnimThrownDK_joint17, /* [16] joint 17 */
	(u32)dFTNessAnimThrownDK_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTNessAnimThrownDK_joint20, /* [19] joint 20 */
	(u32)dFTNessAnimThrownDK_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTNessAnimThrownDK_joint23, /* [22] joint 23 */
	(u32)dFTNessAnimThrownDK_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTNessAnimThrownDK_joint26, /* [25] joint 26 */
	(u32)dFTNessAnimThrownDK_joint27, /* [26] joint 27 */
};

/* Joint 2 */
u16 dFTNessAnimThrownDK_joint2[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_TRAX), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1608, -1608, 0, 215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 6), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 6), 0, 0,
	ftAnimLoop(0x6800, -42),
};

/* Joint 3 */
u16 dFTNessAnimThrownDK_joint3[24] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -17, 0, -53, 2, -89, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 17, 53, 89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -17, -53, -89,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimThrownDK_joint5[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 11, 0, -11, 268, -22,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 268,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimThrownDK_joint6[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1160, 42, -1544, 40, 1380, -78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1308, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -794, 210, 862, -285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -588, 150, 573, -222,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -594, -172, 581, 252,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1320, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1312, -76,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -838, -232, 921, 318,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1141, -50, 1348, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1436, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1516, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1160, -18, -1544, -28, 1380, 31,
	ftAnimLoop(0x6800, -140),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimThrownDK_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 9,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimThrownDK_joint8[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -625, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimLoop(0x6800, -22),
};

/* Joint 9 */
u16 dFTNessAnimThrownDK_joint9[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 446, 67,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 288, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 446,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 446,
	ftAnimLoop(0x6800, -32),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimThrownDK_joint11[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetValRate(FT_ANIM_ROTY), 0, 14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), 0,
	ftAnimLoop(0x6800, -34),
};

/* Joint 12 */
u16 dFTNessAnimThrownDK_joint12[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -487, 57, 290, 9, -1016, 52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 273, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -91, 181, -518, 288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 65, 96, -230, 212,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 101, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -519, -299,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 203, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 345, -26,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 68, -97,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -447, -84,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -827, -229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 303, -29, -977, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -488, -40, 287, -16, -1019, -41,
	ftAnimLoop(0x6800, -140),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimThrownDK_joint13[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -26),
};

/* Joint 14 */
u16 dFTNessAnimThrownDK_joint14[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 75, 68, 30,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 625, -25, 0, -2, 0, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 625, 0, 0,
	ftAnimLoop(0x6800, -34),
};

/* Joint 16 */
u16 dFTNessAnimThrownDK_joint16[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	_FT_ANIM_CMD(11, 0, 1), 44,
	ftAnimBlock(0, 12),
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTNessAnimThrownDK_joint17[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 18, 1, -161, -3, -529, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -182, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -19, -62, -248, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -93, -55, -67, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 52, -3, -533, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 33, -17, -166, 10, -548, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 18, -15, -161, 5, -529, 18,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimThrownDK_joint19[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 363, 33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 548, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 640, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 443, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 517, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 602, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 457, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 363, -93,
	ftAnimLoop(0x6800, -70),
};

/* Joint 20 */
u16 dFTNessAnimThrownDK_joint20[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3098, 4, -11, -2, -156, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -11, 0, -156, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 3070, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3093, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3101, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3098, -3, -11, 0, -156, 0,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimThrownDK_joint22[26] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -216, 19, 36, -3, 51, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 258, -8, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -216, -32, 36, 0, 51, -13,
	ftAnimLoop(0x6800, -50),
};

/* Joint 23 */
u16 dFTNessAnimThrownDK_joint23[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 116, -20, 150, 9, 23, -77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 159, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 72, 32, -585, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 97, 0, -583, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 55, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -415, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -229, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 96, 30, -55, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 116, 20, 150, -9, 23, 79,
	ftAnimLoop(0x6800, -100),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimThrownDK_joint25[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, 83,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 684, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 576, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 651, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 519, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, -80,
	ftAnimLoop(0x6800, -54),
};

/* Joint 26 */
u16 dFTNessAnimThrownDK_joint26[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1672, -8, -1514, 0, -1821, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 11), -1514,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1821, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 1613, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1632, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1663, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 1672, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1514, -1821,
	ftAnimLoop(0x6800, -70),
};

/* Joint 27 */
u16 dFTNessAnimThrownDK_joint27[32] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 253, -9, 16, 0, -32, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -237, 17, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 253, 29, 16, -1, -32, 3,
	ftAnimLoop(0x6800, -50),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
