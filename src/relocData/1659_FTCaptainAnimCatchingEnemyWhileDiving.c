/* AnimJoint data for relocData file 1659 (FTCaptainAnimCatchingEnemyWhileDiving) */
/* 736 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimCatchingEnemyWhileDiving_joint1[8];
extern u16 dFTCaptainAnimCatchingEnemyWhileDiving_joint2[8];
extern u16 dFTCaptainAnimCatchingEnemyWhileDiving_joint4[12];
extern u16 dFTCaptainAnimCatchingEnemyWhileDiving_joint5[34];
extern u16 dFTCaptainAnimCatchingEnemyWhileDiving_joint7[24];
extern u16 dFTCaptainAnimCatchingEnemyWhileDiving_joint10[8];
extern u16 dFTCaptainAnimCatchingEnemyWhileDiving_joint11[34];
extern u16 dFTCaptainAnimCatchingEnemyWhileDiving_joint12[24];
extern u16 dFTCaptainAnimCatchingEnemyWhileDiving_joint13[8];
extern u16 dFTCaptainAnimCatchingEnemyWhileDiving_joint16[10];
extern u16 dFTCaptainAnimCatchingEnemyWhileDiving_joint17[24];
extern u16 dFTCaptainAnimCatchingEnemyWhileDiving_joint19[16];
extern u16 dFTCaptainAnimCatchingEnemyWhileDiving_joint21[22];
extern u16 dFTCaptainAnimCatchingEnemyWhileDiving_joint22[24];
extern u16 dFTCaptainAnimCatchingEnemyWhileDiving_joint24[16];
extern u16 dFTCaptainAnimCatchingEnemyWhileDiving_joint25[44];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTCaptainAnimCatchingEnemyWhileDiving_joints[] = {
	(u32)dFTCaptainAnimCatchingEnemyWhileDiving_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimCatchingEnemyWhileDiving_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimCatchingEnemyWhileDiving_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimCatchingEnemyWhileDiving_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimCatchingEnemyWhileDiving_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTCaptainAnimCatchingEnemyWhileDiving_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimCatchingEnemyWhileDiving_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimCatchingEnemyWhileDiving_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimCatchingEnemyWhileDiving_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimCatchingEnemyWhileDiving_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimCatchingEnemyWhileDiving_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimCatchingEnemyWhileDiving_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimCatchingEnemyWhileDiving_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimCatchingEnemyWhileDiving_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimCatchingEnemyWhileDiving_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTCaptainAnimCatchingEnemyWhileDiving_joint25, /* [24] joint 25 */
	0xFFFF00B4, /* [25] END */
};

/* Joint 1 */
u16 dFTCaptainAnimCatchingEnemyWhileDiving_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -7, 884, 36,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTCaptainAnimCatchingEnemyWhileDiving_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 430, 0, 0,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTCaptainAnimCatchingEnemyWhileDiving_joint4[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 46,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 143,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), 46,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimCatchingEnemyWhileDiving_joint5[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 247, 2, -275, -13, -609, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 247, 0, -609, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -347, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -334, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -276, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 247, 0, -275, 1, -609, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimCatchingEnemyWhileDiving_joint7[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -752, -28,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -907, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -894, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -756, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -752, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTCaptainAnimCatchingEnemyWhileDiving_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 148, 0, 0,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimCatchingEnemyWhileDiving_joint11[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -262, -4, 173, 9, -644, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), -263, 0, -644, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), 197, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 189, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 174, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -262, 0, 173, -1, -644, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimCatchingEnemyWhileDiving_joint12[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -674, -24,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -795, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -781, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -677, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -674, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimCatchingEnemyWhileDiving_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -72, 40, -105,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTCaptainAnimCatchingEnemyWhileDiving_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1762, -414, -54, 98, 55, 31,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimCatchingEnemyWhileDiving_joint17[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1737, 10, 2076, -1, 354, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -1736, -2, 2076, 0, 354, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1737, -1, 2076, 0, 354, 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimCatchingEnemyWhileDiving_joint19[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1094, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 1095, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1094, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimCatchingEnemyWhileDiving_joint21[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -1916,
	ftAnimSetValRate(FT_ANIM_ROTX), -1547, -15,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 1423,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -1550, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), -1916,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1547, 2, -1916, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTCaptainAnimCatchingEnemyWhileDiving_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1440, -6, 1244, 1, 423, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -1441, 1, 1244, 0, 424, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1440, 0, 1244, 0, 423, 0,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimCatchingEnemyWhileDiving_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1073, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 1074, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1073, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimCatchingEnemyWhileDiving_joint25[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -103, 14, 227, 0, -424, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 15), -424,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 227, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -44, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -56, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -101, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -103, -1, 227, 0, -424, 0,
	ftAnimEnd(),
	0x0000, 0x50E0, 0x0065, 0xFC8B, 0x01CA, 0x0801, 0x0010, 0x0000, 0x0000,
};
