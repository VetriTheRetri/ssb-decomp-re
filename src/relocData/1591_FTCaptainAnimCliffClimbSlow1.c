/* AnimJoint data for relocData file 1591 (FTCaptainAnimCliffClimbSlow1) */
/* 960 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimCliffClimbSlow1_joint1[14];
extern u16 dFTCaptainAnimCliffClimbSlow1_joint2[40];
extern u16 dFTCaptainAnimCliffClimbSlow1_joint3[18];
extern u16 dFTCaptainAnimCliffClimbSlow1_joint5[24];
extern u16 dFTCaptainAnimCliffClimbSlow1_joint6[24];
extern u16 dFTCaptainAnimCliffClimbSlow1_joint7[24];
extern u16 dFTCaptainAnimCliffClimbSlow1_joint8[32];
extern u16 dFTCaptainAnimCliffClimbSlow1_joint11[12];
extern u16 dFTCaptainAnimCliffClimbSlow1_joint12[24];
extern u16 dFTCaptainAnimCliffClimbSlow1_joint13[16];
extern u16 dFTCaptainAnimCliffClimbSlow1_joint14[26];
extern u16 dFTCaptainAnimCliffClimbSlow1_joint15[10];
extern u16 dFTCaptainAnimCliffClimbSlow1_joint17[28];
extern u16 dFTCaptainAnimCliffClimbSlow1_joint18[24];
extern u16 dFTCaptainAnimCliffClimbSlow1_joint20[24];
extern u16 dFTCaptainAnimCliffClimbSlow1_joint22[24];
extern u16 dFTCaptainAnimCliffClimbSlow1_joint23[24];
extern u16 dFTCaptainAnimCliffClimbSlow1_joint25[16];
extern u16 dFTCaptainAnimCliffClimbSlow1_joint26[24];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTCaptainAnimCliffClimbSlow1_joints[] = {
	(u32)dFTCaptainAnimCliffClimbSlow1_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimCliffClimbSlow1_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimCliffClimbSlow1_joint3, /* [2] joint 3 */
	(u32)dFTCaptainAnimCliffClimbSlow1_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTCaptainAnimCliffClimbSlow1_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimCliffClimbSlow1_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimCliffClimbSlow1_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimCliffClimbSlow1_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTCaptainAnimCliffClimbSlow1_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimCliffClimbSlow1_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimCliffClimbSlow1_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimCliffClimbSlow1_joint15, /* [14] joint 15 */
	(u32)dFTCaptainAnimCliffClimbSlow1_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTCaptainAnimCliffClimbSlow1_joint18, /* [17] joint 18 */
	(u32)dFTCaptainAnimCliffClimbSlow1_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTCaptainAnimCliffClimbSlow1_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTCaptainAnimCliffClimbSlow1_joint23, /* [22] joint 23 */
	(u32)dFTCaptainAnimCliffClimbSlow1_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTCaptainAnimCliffClimbSlow1_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTCaptainAnimCliffClimbSlow1_joint1[14] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -1358, 955, -303, 42,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, 362, 0, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimCliffClimbSlow1_joint2[40] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX), -1, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX, 24), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX, 1), 23,
	ftAnimSetValRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1644, 155, 247, -25,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1513, -1249, 207, -342,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 6), -52, -4,
	ftAnimSetValRateT(FT_ANIM_TRAX, 18), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 728, -258,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -258,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 712, 119,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTCaptainAnimCliffClimbSlow1_joint3[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 87, 71,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 5, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 19), 0,
	ftAnimBlock(0, 7),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimCliffClimbSlow1_joint5[24] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAZ), 134, 3, 54, 12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 134, 2, 0, 0, 0, -13, 54, -2,
	ftAnimBlock(0, 7),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimCliffClimbSlow1_joint6[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1587, -4, -1554, -5, 1491, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -1609, 4, -1576, -1, 1647, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1604, 4, -1577, -1, 1605, -42,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimCliffClimbSlow1_joint7[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -921, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1057, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1137, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -951, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -847, 103,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimCliffClimbSlow1_joint8[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 727, 33, -9, 6, 69, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 726, -26, 0, 15, 32, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 142, 2, 28, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 643, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 575, -56,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimCliffClimbSlow1_joint11[12] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -178, -11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -134, 13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTCaptainAnimCliffClimbSlow1_joint12[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1649, 10, 1582, 9, 1527, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1698, 5, 1632, 1, 1543, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1704, 5, 1632, 0, 1504, -39,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimCliffClimbSlow1_joint13[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -943, -27,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -823, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -727, 95,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimCliffClimbSlow1_joint14[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -176, 1, 135, 10, -49, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 5, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 45, 3, -27, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 173, 12, -119, 5,
	ftAnimBlock(0, 6),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTCaptainAnimCliffClimbSlow1_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 7),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimCliffClimbSlow1_joint17[28] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -78, 27, 6, 0, -13, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 19), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -74, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -320, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 16), 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTCaptainAnimCliffClimbSlow1_joint18[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -125, -12, -50, 6, -8, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -255, -8, -28, 0, 88, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -254, 0, -28, 0, 86, -1,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTCaptainAnimCliffClimbSlow1_joint20[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 166, -62,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTCaptainAnimCliffClimbSlow1_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1581, 0, -1656, 0, 1827, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -1546, 3, -1665, 0, 1877, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1546, 0, -1665, 0, 1878, 1,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTCaptainAnimCliffClimbSlow1_joint23[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 59, -3, 50, 4, 0, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -12, -22, 83, 0, -282, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -36, -24, 80, -2, -372, -89,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTCaptainAnimCliffClimbSlow1_joint25[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 359, 75,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1090, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1208, 117,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTCaptainAnimCliffClimbSlow1_joint26[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1598, -5, 1642, 0, -1514, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1632, 21, 1622, -5, -1757, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1655, 22, 1617, -4, -1796, -39,
	ftAnimEnd(),
};
