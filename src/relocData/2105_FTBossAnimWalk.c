/* AnimJoint data for relocData file 2105 (FTBossAnimWalk) */
/* 1312 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTBossAnimWalk_joint1[8];
extern u16 dFTBossAnimWalk_joint3[26];
extern u16 dFTBossAnimWalk_joint4[14];
extern u16 dFTBossAnimWalk_joint5[14];
extern u16 dFTBossAnimWalk_joint7[14];
extern u16 dFTBossAnimWalk_joint8[76];
extern u16 dFTBossAnimWalk_joint10[8];
extern u16 dFTBossAnimWalk_joint11[48];
extern u16 dFTBossAnimWalk_joint12[40];
extern u16 dFTBossAnimWalk_joint14[40];
extern u16 dFTBossAnimWalk_joint15[48];
extern u16 dFTBossAnimWalk_joint16[40];
extern u16 dFTBossAnimWalk_joint17[32];
extern u16 dFTBossAnimWalk_joint19[14];
extern u16 dFTBossAnimWalk_joint20[56];
extern u16 dFTBossAnimWalk_joint21[16];
extern u16 dFTBossAnimWalk_joint23[16];
extern u16 dFTBossAnimWalk_joint24[56];
extern u16 dFTBossAnimWalk_joint25[38];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTBossAnimWalk_joints[] = {
	(u32)dFTBossAnimWalk_joint1, /* [0] joint 1 */
	(u32)dFTBossAnimWalk_joint3, /* [1] joint 3 */
	0x00000000, /* [2] NULL */
	(u32)dFTBossAnimWalk_joint4, /* [3] joint 4 */
	(u32)dFTBossAnimWalk_joint5, /* [4] joint 5 */
	(u32)dFTBossAnimWalk_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTBossAnimWalk_joint8, /* [7] joint 8 */
	(u32)dFTBossAnimWalk_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTBossAnimWalk_joint11, /* [10] joint 11 */
	(u32)dFTBossAnimWalk_joint12, /* [11] joint 12 */
	(u32)dFTBossAnimWalk_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTBossAnimWalk_joint15, /* [14] joint 15 */
	(u32)dFTBossAnimWalk_joint16, /* [15] joint 16 */
	(u32)dFTBossAnimWalk_joint17, /* [16] joint 17 */
	(u32)dFTBossAnimWalk_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTBossAnimWalk_joint20, /* [19] joint 20 */
	(u32)dFTBossAnimWalk_joint21, /* [20] joint 21 */
	(u32)dFTBossAnimWalk_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTBossAnimWalk_joint24, /* [23] joint 24 */
	(u32)dFTBossAnimWalk_joint25, /* [24] joint 25 */
	0xFFFF013D, /* [25] END */
};

/* Joint 1 */
u16 dFTBossAnimWalk_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimLoop(0x6800, -14),
};

/* Joint 3 */
u16 dFTBossAnimWalk_joint3[26] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 5880,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, -600, -1200, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 6120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 5880,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 6120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 5880,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTBossAnimWalk_joint4[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3127, 0, -44, 0, 0, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 40),
	ftAnimLoop(0x6800, -26),
};

/* Joint 5 */
u16 dFTBossAnimWalk_joint5[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -89, 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 40),
	ftAnimLoop(0x6800, -26),
};

/* Joint 7 */
u16 dFTBossAnimWalk_joint7[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 178, 178, 0, 683, -1280, 155, 4096, 4096, 4096,
	ftAnimBlock(0, 40),
	ftAnimLoop(0x6800, -26),
};

/* Joint 8 */
u16 dFTBossAnimWalk_joint8[76] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3276, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -705, -5, -2088, 6, 2082, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), -746, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -2081, -11, 2073, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2088, -3, 2081, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -2023, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 2017, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2011, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 2082, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -742, 6, -2027, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), -705, 0, -2088, 0,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2082, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2082, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -705, 0, -2088, 0, 2082, 0,
	ftAnimLoop(0x6800, -148),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTBossAnimWalk_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimLoop(0x6800, -14),
};

/* Joint 11 */
u16 dFTBossAnimWalk_joint11[48] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4915, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1597, -2, -43, 0, 133, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 39), 1598, -1, -43, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 269, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 237, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -17, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 111, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1597, -1, -43, 0, 133, 21,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTBossAnimWalk_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -133, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -154, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -170, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -323, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -317, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -41, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -129, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -133, -3,
	ftAnimLoop(0x6800, -78),
};

/* Joint 14 */
u16 dFTBossAnimWalk_joint14[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -139, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -123, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -144, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -398, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -415, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -133, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -139, -5,
	ftAnimLoop(0x6800, -78),
};

/* Joint 15 */
u16 dFTBossAnimWalk_joint15[48] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4505, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 20, -2, -1647, -1, -1353, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 39), 21, 0, -1647, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1632, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1617, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -1398, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1368, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -1338, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 20, -1, -1647, 0, -1353, -14,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTBossAnimWalk_joint16[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -304, -20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -270, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -185, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -74, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -103, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -137, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -114, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -289, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -304, -15,
	ftAnimLoop(0x6800, -78),
};

/* Joint 17 */
u16 dFTBossAnimWalk_joint17[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -242, -24,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -200, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -106, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -132, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -112, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -223, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -242, -18,
	ftAnimLoop(0x6800, -62),
};

/* Joint 19 */
u16 dFTBossAnimWalk_joint19[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, -178, 0, -99, -2025, 512, 4096, 4096, 4096,
	ftAnimBlock(0, 40),
	ftAnimLoop(0x6800, -26),
};

/* Joint 20 */
u16 dFTBossAnimWalk_joint20[56] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3276, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1573, 0, 0, 0, 771, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 39), -1573, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 739, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 762, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 761, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 739, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 771, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 771, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 771, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1573, 0, 0, 0, 771, 0,
	ftAnimLoop(0x6800, -108),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTBossAnimWalk_joint21[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -752, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), -752, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -752, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 23 */
u16 dFTBossAnimWalk_joint23[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -864, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), -864, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -864, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 24 */
u16 dFTBossAnimWalk_joint24[56] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3276, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 97, 0, 1640, -1, 2559, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 39), 97, 0, 1640, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 2529, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2552, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 2480, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2471, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 2560, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2560, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 2559, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 97, 0, 1640, 0, 2559, 0,
	ftAnimLoop(0x6800, -108),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTBossAnimWalk_joint25[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -573, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), -573, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -573, 0,
	ftAnimLoop(0x6800, -30),
	ftAnimSetValRate(FT_ANIM_ROTZ), -983, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), -983, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -983, 0,
	ftAnimLoop(0x6800, -30),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
