/* AnimJoint data for relocData file 432 (FTCaptainAnimClaps) */
/* 1760 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimClaps_joint1[20];
extern u16 dFTCaptainAnimClaps_joint2[22];
extern u16 dFTCaptainAnimClaps_joint4[22];
extern u16 dFTCaptainAnimClaps_joint5[46];
extern u16 dFTCaptainAnimClaps_joint6[48];
extern u16 dFTCaptainAnimClaps_joint7[88];
extern u16 dFTCaptainAnimClaps_joint10[14];
extern u16 dFTCaptainAnimClaps_joint11[88];
extern u16 dFTCaptainAnimClaps_joint12[40];
extern u16 dFTCaptainAnimClaps_joint16[104];
extern u16 dFTCaptainAnimClaps_joint17[44];
extern u16 dFTCaptainAnimClaps_joint19[40];
extern u16 dFTCaptainAnimClaps_joint21[44];
extern u16 dFTCaptainAnimClaps_joint22[44];
extern u16 dFTCaptainAnimClaps_joint24[166];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTCaptainAnimClaps_joints[] = {
	(u32)dFTCaptainAnimClaps_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimClaps_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimClaps_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimClaps_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimClaps_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimClaps_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimClaps_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimClaps_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimClaps_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimClaps_joint16, /* [12] joint 16 */
	0x00000000, /* [13] NULL */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimClaps_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimClaps_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimClaps_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimClaps_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimClaps_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF0175, /* [24] END */
};

/* Joint 1 */
u16 dFTCaptainAnimClaps_joint1[20] = {
	ftAnimSetValRate(FT_ANIM_TRAY), 1760, 7,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 145, -115,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 36), 1760,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 12), 145, -117,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 24), 145, -115,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimClaps_joint2[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -15, 332,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 16), -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 12), 332,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 24), 332,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), -15,
	ftAnimLoop(0x6800, -40),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTCaptainAnimClaps_joint4[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 30, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 14), 38,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 12), 9,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 24), 0,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 22), 30,
	ftAnimLoop(0x6800, -40),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimClaps_joint5[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1275, 0, -1603, 0, 1515, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), -1601, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 35), -1275, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), 1510, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1510, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1515, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1600, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -1603, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1275, 0, -1603, 0, 1515, 0,
	ftAnimLoop(0x6800, -88),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimClaps_joint6[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -551, -11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -621, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -612, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -556, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -586, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -548, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -562, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -629, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -626, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -555, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -551, 3,
	ftAnimLoop(0x6800, -94),
};

/* Joint 7 */
u16 dFTCaptainAnimClaps_joint7[88] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -678, 111, 203,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 6144, 4915, 2048,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -678, -16, 111, 35, 203, -30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -743, 255, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -678, 8, 111, -17, 203, 15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -678, 111, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -678, -16, 111, 35, 203, -30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -743, 255, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -678, 8, 111, -17, 203, 15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -678, 111, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -678, -16, 111, 35, 203, -31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -743, 255, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -678, 8, 111, -17, 203, 15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -678, 111, 203,
	ftAnimLoop(0x6800, -174),
};

/* Joint 10 */
u16 dFTCaptainAnimClaps_joint10[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -306, 31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 21), 69,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), 18,
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimClaps_joint11[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -287, 0, 95, -7, -90, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 35), -287, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 54, 4, -28, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 59, 6, -35, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 78, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -80, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -57, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -91, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 62, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 74, -16,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -80, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -29, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 58, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 93, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -35, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -87, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -287, 0, 95, 2, -90, -3,
	ftAnimLoop(0x6800, -172),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimClaps_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -807, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -784, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -791, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -804, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -791, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -800, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -787, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -807, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -807, 0,
	ftAnimLoop(0x6800, -78),
};

/* Joint 16 */
u16 dFTCaptainAnimClaps_joint16[104] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -274, 225, -187,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 6144, 4915, 2048,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -276, -8, 216, -60, -183, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -507, 4, -21, -31, 102, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -245, 28, 4, 30, -62, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -274, -6, 225, 44, -187, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -276, -8, 216, -60, -183, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -507, 4, -21, -28, 102, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -245, 29, 4, 30, -62, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -274, -6, 225, 42, -187, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -276, -8, 216, -61, -183, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -507, 4, -21, -30, 102, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -245, 29, 4, 30, -62, -36,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -274, 225, -187,
	ftAnimLoop(0x6800, -204),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimClaps_joint17[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -80, 0, -77, 1, 20, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 35), -80, 0, -77, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 46, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 43, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 41, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 42, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 20, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -80, 0, -77, 0, 20, 0,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimClaps_joint19[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 62, -12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 53, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 56, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 62, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 62, 0,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTCaptainAnimClaps_joint21[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -105, 0, -86, 0, -9, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 35), -105, 0, -86, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 20, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 20, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 20, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 19, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -105, 0, -86, 0, -9, 0,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimClaps_joint22[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 473, 0, 118, 0, 40, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 34), 473, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 35), 120, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), 34, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 36, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 39, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 473, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 473, 0, 118, -1, 40, 1,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimClaps_joint24[166] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
	0x200E, 0xFFE1, 0x0006, 0x00FA, 0x0000, 0x0013, 0x000C, 0x2803, 0x0007, 0x001A, 0xFFFF, 0x2805, 0x0011, 0x00EE, 0x0003, 0x2009, 0x0006, 0x0099, 0x0006, 0x2009, 0x0001, 0x009C, 0x0001, 0x2809, 0x0007, 0x009C, 0x0001, 0x2003, 0x0001, 0x0018, 0xFFFF, 0x2803, 0x0007, 0x0010, 0xFFF8, 0x0801, 0x0006, 0x2009, 0x0001, 0x009C, 0xFFEE, 0x2809, 0x0003, 0x0015, 0xFFF6, 0x2003, 0x0001, 0x0000, 0xFFEA, 0x2803, 0x0003, 0xFFDB, 0x0009, 0x0801, 0x0001, 0x2005, 0x0001, 0x00EF, 0x0000, 0x2805, 0x0011, 0x00F8, 0x0003, 0x2009, 0x0001, 0x0021, 0x0012, 0x2809, 0x0005, 0x0098, 0x0005, 0x2003, 0x0001, 0xFFE7, 0x000D, 0x2803, 0x0006, 0x0018, 0x0001, 0x0801, 0x0004, 0x2009, 0x0001, 0x009B, 0x0000, 0x2809, 0x0007, 0x0097, 0x0000, 0x0801, 0x0001, 0x2003, 0x0001, 0x0019, 0x0001, 0x2803, 0x0006, 0x001E, 0xFFF9, 0x0801, 0x0005, 0x2009, 0x0001, 0x0099, 0xFFEF, 0x2809, 0x0002, 0x0032, 0xFFD1, 0x2003, 0x0001, 0x000F, 0xFFE9, 0x2003, 0x0001, 0xFFF1, 0xFFE9, 0x200F, 0x0001, 0xFFE1, 0xFFF1, 0x00FA, 0x0001, 0x0013, 0xFFE2, 0x6800, 0xFF04, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
