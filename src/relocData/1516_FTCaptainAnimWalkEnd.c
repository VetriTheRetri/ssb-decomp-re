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
extern u16 dFTCaptainAnimWalkEnd_joint24[16];
extern u16 dFTCaptainAnimWalkEnd_joint25[26];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTCaptainAnimWalkEnd_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimWalkEnd_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimWalkEnd_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimWalkEnd_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTCaptainAnimWalkEnd_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTCaptainAnimWalkEnd_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimWalkEnd_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimWalkEnd_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTCaptainAnimWalkEnd_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTCaptainAnimWalkEnd_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTCaptainAnimWalkEnd_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimWalkEnd_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimWalkEnd_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTCaptainAnimWalkEnd_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTCaptainAnimWalkEnd_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTCaptainAnimWalkEnd_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTCaptainAnimWalkEnd_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTCaptainAnimWalkEnd_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTCaptainAnimWalkEnd_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTCaptainAnimWalkEnd_joint25, /* [24] joint 25 */
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
u16 dFTCaptainAnimWalkEnd_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 661, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 547, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimWalkEnd_joint25[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 107, -1, 159, 6, -277, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 160, 2, 359, 11, -279, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 161, 1, 365, 6, -279, 0,
	ftAnimEnd(),
	0x0000, 0x0000,
};
