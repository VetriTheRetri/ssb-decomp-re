/* AnimJoint data for relocData file 1514 (FTCaptainAnimWalk2) */
/* 1920 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimWalk2_joint1[50];
extern u16 dFTCaptainAnimWalk2_joint2[48];
extern u16 dFTCaptainAnimWalk2_joint4[70];
extern u16 dFTCaptainAnimWalk2_joint5[86];
extern u16 dFTCaptainAnimWalk2_joint6[36];
extern u16 dFTCaptainAnimWalk2_joint7[28];
extern u16 dFTCaptainAnimWalk2_joint8[8];
extern u16 dFTCaptainAnimWalk2_joint10[28];
extern u16 dFTCaptainAnimWalk2_joint11[88];
extern u16 dFTCaptainAnimWalk2_joint12[40];
extern u16 dFTCaptainAnimWalk2_joint13[34];
extern u16 dFTCaptainAnimWalk2_joint14[12];
extern u16 dFTCaptainAnimWalk2_joint16[8];
extern u16 dFTCaptainAnimWalk2_joint17[84];
extern u16 dFTCaptainAnimWalk2_joint19[32];
extern u16 dFTCaptainAnimWalk2_joint21[74];
extern u16 dFTCaptainAnimWalk2_joint22[64];
extern u16 dFTCaptainAnimWalk2_joint24[32];
extern u16 dFTCaptainAnimWalk2_joint25[88];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTCaptainAnimWalk2_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimWalk2_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimWalk2_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimWalk2_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTCaptainAnimWalk2_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTCaptainAnimWalk2_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimWalk2_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimWalk2_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTCaptainAnimWalk2_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTCaptainAnimWalk2_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTCaptainAnimWalk2_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimWalk2_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimWalk2_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTCaptainAnimWalk2_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTCaptainAnimWalk2_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTCaptainAnimWalk2_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTCaptainAnimWalk2_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTCaptainAnimWalk2_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTCaptainAnimWalk2_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTCaptainAnimWalk2_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimWalk2_joint1[50] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1555, 6, 100, 117,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 33), 1452, -1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 15), 180, -26,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 15), 2, 19,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), 9, 19,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 1546, 0, 169, -1,
	ftAnimSetValRateT(FT_ANIM_TRAY, 25), 1448, 1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 22), 0, 11,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), 3, 11,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), 1555, -2, 100, 100,
	ftAnimLoop(0x6800, -96),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimWalk2_joint2[48] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 22, 1, -51, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 32, 0, -196, 3, -86, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 38), -44, 0, 104, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 15), -158, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 45), -291, 0,
	ftAnimBlock(0, 23),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 22), 0, 1, 0, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 20), 22, 0, -51, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 20), -234,
	ftAnimLoop(0x6800, -94),
};

/* Joint 4 */
u16 dFTCaptainAnimWalk2_joint4[70] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 220, -1, 0, -6, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -46, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 179, -1, -57, 0, 82, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 248, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -43, 2, 14, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -33, 3, -3, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 205, -2, 54, 3, -115, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), 253, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 85, -1, -38, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 74, -4, -27, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 17), 220, -3, 0, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 17), 0,
	ftAnimLoop(0x6800, -138),
};

/* Joint 5 */
u16 dFTCaptainAnimWalk2_joint5[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -156, -2, -2, -14, 230, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 37), -227, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 39), 48, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 17), -230, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -228, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 55), -54, 0,
	ftAnimBlock(0, 19),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -201, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 42), 564, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 37, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 34), -95, 1,
	ftAnimBlock(0, 33),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -53, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 2, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -94, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -155, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 560, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 246, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -156, 0, -2, -5, 230, -15,
	ftAnimLoop(0x6800, -168),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimWalk2_joint6[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1192, -11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), -906, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -910, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 37), -754, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -744, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -1159, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1174, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1192, -17,
	ftAnimLoop(0x6800, -70),
};

/* Joint 7 */
u16 dFTCaptainAnimWalk2_joint7[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2729, -60, -161,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 2729, 2, -60, 1, -161, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 45), 2891, 33, -273,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 2729, -60, -161,
	ftAnimLoop(0x6800, -54),
};

/* Joint 8 */
u16 dFTCaptainAnimWalk2_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 95),
	ftAnimLoop(0x6800, -14),
};

/* Joint 10 */
u16 dFTCaptainAnimWalk2_joint10[28] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -16, 199, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 0, 0, 143, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 45), 0, 0, 199, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -16, 199, -44,
	ftAnimLoop(0x6800, -52),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimWalk2_joint11[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -122, 17, 217, 0, 147, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 43), -22, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 60), 60, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), 420, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 417, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), 152, -23,
	ftAnimBlock(0, 16),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -31, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 50), -138, 15,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 129, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 29), -193, 18,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 54, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), 151, 15,
	ftAnimBlock(0, 21),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -174, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 118, 28,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 167, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 214, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -122, 16, 217, 3, 147, 28,
	ftAnimLoop(0x6800, -172),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimWalk2_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -801, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), -541, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -538, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -714, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -713, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), -748, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -810, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -801, 9,
	ftAnimLoop(0x6800, -78),
};

/* Joint 13 */
u16 dFTCaptainAnimWalk2_joint13[34] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 19, 0, -28, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 170, 1, 19, 1, -28, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 45), 54, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 45), 121, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 19, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 20), -24, -28,
	ftAnimLoop(0x6800, -64),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimWalk2_joint14[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 89, 53, -1,
	ftAnimBlock(0, 95),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimWalk2_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 95),
	ftAnimLoop(0x6800, -14),
};

/* Joint 17 */
u16 dFTCaptainAnimWalk2_joint17[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 101, -10, -144, 0, -419, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), -72, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), 83, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 24), -119, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -116, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 44), -31, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -64, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 56), -176, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 87, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), -388, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -403, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 37), -426, 6,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -15, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 110, -8,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -173, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -145, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 101, -8, -144, 1, -419, 6,
	ftAnimLoop(0x6800, -164),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimWalk2_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 576, 15,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 36), 526, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 551, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 36), 556, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 549, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 560, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 576, 16,
	ftAnimLoop(0x6800, -62),
};

/* Joint 21 */
u16 dFTCaptainAnimWalk2_joint21[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1793, 9, 1703, 1, -1654, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), -2062, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 67), -1702, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 25), 1631, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1630, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 61), 1670, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2063, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -1872, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1853, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 42), -1629, -24,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1707, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), -1800, 7,
	ftAnimBlock(0, 19),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1676, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 1701, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1793, 7, 1703, 2, -1654, -25,
	ftAnimLoop(0x6800, -144),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimWalk2_joint22[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 38, 1, 113, -3, -202, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 46), 69, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 49), -380, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 37), 41, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 17, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 56), 37, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 77, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 46), 119, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -356, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 44), -187, -14,
	ftAnimBlock(0, 43),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 116, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 38, 0, 113, -2, -202, -15,
	ftAnimLoop(0x6800, -124),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimWalk2_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 566, 13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 610, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 593, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), 639, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 626, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 42), 551, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 566, 15,
	ftAnimLoop(0x6800, -62),
};

/* Joint 25 */
u16 dFTCaptainAnimWalk2_joint25[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 90, -2, 159, 1, -231, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), 106, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 42), 151, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 24), -60, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -70, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), 147, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 121, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 33), -303, -6,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 154, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 45), 131, 7,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 152, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 38), 91, -1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -310, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 33), -233, 2,
	ftAnimBlock(0, 27),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 139, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 160, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 90, 0, 159, -1, -231, 1,
	ftAnimLoop(0x6800, -172),
	ftAnimEnd(),
};
