/* AnimJoint data for relocData file 954 (FTSamusAnimWalk1) */
/* 1072 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimWalk1_joint1[36];
extern u16 dFTSamusAnimWalk1_joint2[8];
extern u16 dFTSamusAnimWalk1_joint4[12];
extern u16 dFTSamusAnimWalk1_joint5[36];
extern u16 dFTSamusAnimWalk1_joint6[20];
extern u16 dFTSamusAnimWalk1_joint7[20];
extern u16 dFTSamusAnimWalk1_joint8[12];
extern u16 dFTSamusAnimWalk1_joint11[8];
extern u16 dFTSamusAnimWalk1_joint12[36];
extern u16 dFTSamusAnimWalk1_joint14[24];
extern u16 dFTSamusAnimWalk1_joint15[44];
extern u16 dFTSamusAnimWalk1_joint17[24];
extern u16 dFTSamusAnimWalk1_joint19[32];
extern u16 dFTSamusAnimWalk1_joint20[68];
extern u16 dFTSamusAnimWalk1_joint22[110];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimWalk1_joints[] = {
	(u32)dFTSamusAnimWalk1_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimWalk1_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimWalk1_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimWalk1_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimWalk1_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimWalk1_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimWalk1_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimWalk1_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimWalk1_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimWalk1_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimWalk1_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimWalk1_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimWalk1_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimWalk1_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimWalk1_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF00E5, /* [22] END */
};

/* Joint 1 */
u16 dFTSamusAnimWalk1_joint1[36] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValRate(FT_ANIM_TRAY), 1600, 64,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 23), 1724, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 23), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 22), 1600, -43, 0, 23,
	ftAnimSetValRateT(FT_ANIM_TRAY, 23), 1480, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 23), 134,
	ftAnimSetValRateT(FT_ANIM_TRAY, 22), 1600, 64,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 22), 0,
	ftAnimLoop(0x6800, -70),
};

/* Joint 2 */
u16 dFTSamusAnimWalk1_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 90),
	ftAnimLoop(0x6800, -14),
};

/* Joint 4 */
u16 dFTSamusAnimWalk1_joint4[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 90),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimWalk1_joint5[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1132, 0, -1722, 0, 1377, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 89), -1132, 0, -1722, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 72), 1429, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1425, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 1374, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1132, 0, -1722, 0, 1377, 2,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimWalk1_joint6[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -739, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 88), -735, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -737, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, -2,
	ftAnimLoop(0x6800, -38),
};

/* Joint 7 */
u16 dFTSamusAnimWalk1_joint7[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 701, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 23), 790, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 45), 643, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 22), 701, 3,
	ftAnimLoop(0x6800, -38),
};

/* Joint 8 */
u16 dFTSamusAnimWalk1_joint8[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 90),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimWalk1_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 90),
	ftAnimLoop(0x6800, -14),
};

/* Joint 12 */
u16 dFTSamusAnimWalk1_joint12[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 58, -1, -128, 0, -215, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 89), 59, 0, -128, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 86), -221, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -221, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -218, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, -1, -128, 0, -215, 3,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimWalk1_joint14[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, -4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 67), -604, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -602, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -591, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, -3,
	ftAnimLoop(0x6800, -46),
};

/* Joint 15 */
u16 dFTSamusAnimWalk1_joint15[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 85, -3, -30, -2, -390, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 88), 91, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 89), -28, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 32), -212, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -229, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 56), -401, 10,
	ftAnimBlock(0, 55),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 89, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 85, -3, -30, -1, -390, 10,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimWalk1_joint17[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 475, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), 360, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 375, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 57), 478, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 475, -2,
	ftAnimLoop(0x6800, -46),
};

/* Joint 19 */
u16 dFTSamusAnimWalk1_joint19[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1695, 2, -1587, -1, 1570, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 89), -1697, 2, 1579, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 88), -1586, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1586, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1695, 2, -1587, 0, 1570, -9,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimWalk1_joint20[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 226, 13, 160, 5, -49, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 47), 143, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 63), 161, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 35), 280, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 268, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 49), 174, 7,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 142, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 41), 155, 5,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 170, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), -38, -11,
	ftAnimBlock(0, 21),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 182, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 214, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, 12, 160, 5, -49, -10,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimWalk1_joint22[110] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 442, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), 344, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 356, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 36), 370, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 370, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 440, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, 1,
	ftAnimLoop(0x6800, -62),
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1750, -3, -1802, 2, -1822, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 34), -1766, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 36), -1762, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 33), 1664, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1676, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 55), 1756, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1777, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 44), -1781, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1772, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 47), -1863, 2,
	ftAnimBlock(0, 42),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1785, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1803, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1860, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1833, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1750, -5, -1802, 1, -1822, 11,
	ftAnimLoop(0x6800, -148),
	ftAnimEnd(),
	0x0000, 0x0000,
};
