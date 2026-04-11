/* AnimJoint data for relocData file 1516 (FTCaptainAnimWalkEnd) */
/* 784 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimWalkEnd_joint1[12];
extern u16 dFTCaptainAnimWalkEnd_joint2[14];
extern u16 dFTCaptainAnimWalkEnd_joint4[20];
extern u16 dFTCaptainAnimWalkEnd_joint5[34];
extern u16 dFTCaptainAnimWalkEnd_joint6[24];
extern u16 dFTCaptainAnimWalkEnd_joint7[10];
extern u16 dFTCaptainAnimWalkEnd_joint8[8];
extern u16 dFTCaptainAnimWalkEnd_joint10[10];
extern u16 dFTCaptainAnimWalkEnd_joint11[24];
extern u16 dFTCaptainAnimWalkEnd_joint12[16];
extern u16 dFTCaptainAnimWalkEnd_joint13[14];
extern u16 dFTCaptainAnimWalkEnd_joint14[14];
extern u16 dFTCaptainAnimWalkEnd_joint16[12];
extern u16 dFTCaptainAnimWalkEnd_joint17[24];
extern u16 dFTCaptainAnimWalkEnd_joint19[16];
extern u16 dFTCaptainAnimWalkEnd_joint21[24];
extern u16 dFTCaptainAnimWalkEnd_joint22[24];
extern u16 dFTCaptainAnimWalkEnd_joint24[42];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTCaptainAnimWalkEnd_joints[] = {
	(u32)dFTCaptainAnimWalkEnd_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimWalkEnd_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimWalkEnd_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimWalkEnd_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimWalkEnd_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimWalkEnd_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimWalkEnd_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimWalkEnd_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimWalkEnd_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimWalkEnd_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimWalkEnd_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimWalkEnd_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimWalkEnd_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimWalkEnd_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimWalkEnd_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimWalkEnd_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimWalkEnd_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimWalkEnd_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF00B7, /* [24] END */
};

/* Joint 1 */
u16 dFTCaptainAnimWalkEnd_joint1[12] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1555, 6, 100, 117,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 1600, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimWalkEnd_joint2[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 22, 1, -51, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), -234,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 107, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTCaptainAnimWalkEnd_joint4[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 220, -1, 0, -6, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -46, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 189, 0, 0, 0, -31, 47,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimWalkEnd_joint5[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -163, 5, -1, -31, 248, -66,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 235, 9, -514, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -77, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -37, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -6, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 239, 4, 5, 12, -524, -10,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimWalkEnd_joint6[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1287, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -952, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -874, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -818, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimWalkEnd_joint7[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2729, -60, -161,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 2435, -89, -388,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTCaptainAnimWalkEnd_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTCaptainAnimWalkEnd_joint10[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -16, 199, -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimWalkEnd_joint11[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -93, 21, 255, -5, 210, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -120, -15, 143, 1, 593, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -129, -9, 144, 0, 592, -1,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimWalkEnd_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -910, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1028, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimWalkEnd_joint13[14] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 19, 0, -28, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 270, 275, 62,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimWalkEnd_joint14[14] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 89, 53, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1538, -1003, 119,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 85, 49, 38,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimWalkEnd_joint16[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 0, 18, 0, -3,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimWalkEnd_joint17[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 124, -3, -133, 6, -479, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 191, 0, 65, 8, -475, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, 0, 70, 4, -472, 2,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimWalkEnd_joint19[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 677, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 457, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimWalkEnd_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1800, 7, 1704, 1, -1695, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -1739, 6, 1653, -5, -1536, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1735, 3, 1650, -2, -1528, 7,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimWalkEnd_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 18, 4, 125, -1, -246, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 156, 7, 112, -3, -83, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, 3, 110, -1, -76, 6,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimWalkEnd_joint24[42] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 661, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 547, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, -5,
	ftAnimEnd(),
	0x0000, 0x200E, 0x006B, 0xFFFF, 0x009F, 0x0006, 0xFEEB, 0x0003, 0x200F, 0x0009, 0x00A0, 0x0002, 0x0167, 0x000B, 0xFEE9, 0x0000, 0x200F, 0x0001, 0x00A1, 0x0001, 0x016D, 0x0006, 0xFEE9, 0x0000, 0x0000, 0x0000, 0x0000,
};
