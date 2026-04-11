/* AnimJoint data for relocData file 956 (FTSamusAnimWalk3) */
/* 1296 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimWalk3_joint1[20];
extern u16 dFTSamusAnimWalk3_joint2[8];
extern u16 dFTSamusAnimWalk3_joint4[20];
extern u16 dFTSamusAnimWalk3_joint5[68];
extern u16 dFTSamusAnimWalk3_joint6[32];
extern u16 dFTSamusAnimWalk3_joint7[46];
extern u16 dFTSamusAnimWalk3_joint8[12];
extern u16 dFTSamusAnimWalk3_joint11[8];
extern u16 dFTSamusAnimWalk3_joint12[68];
extern u16 dFTSamusAnimWalk3_joint14[32];
extern u16 dFTSamusAnimWalk3_joint15[64];
extern u16 dFTSamusAnimWalk3_joint17[40];
extern u16 dFTSamusAnimWalk3_joint19[52];
extern u16 dFTSamusAnimWalk3_joint20[44];
extern u16 dFTSamusAnimWalk3_joint22[88];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimWalk3_joints[] = {
	(u32)dFTSamusAnimWalk3_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimWalk3_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimWalk3_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimWalk3_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimWalk3_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimWalk3_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimWalk3_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimWalk3_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimWalk3_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimWalk3_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimWalk3_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimWalk3_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimWalk3_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimWalk3_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimWalk3_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF012C, /* [22] END */
};

/* Joint 1 */
u16 dFTSamusAnimWalk3_joint1[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 1730,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 1770,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 1730, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 1771,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 1730,
	ftAnimLoop(0x6800, -38),
};

/* Joint 2 */
u16 dFTSamusAnimWalk3_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimLoop(0x6800, -14),
};

/* Joint 4 */
u16 dFTSamusAnimWalk3_joint4[20] = {
	ftAnimSetValRate(FT_ANIM_ROTY), 0, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -103, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 20), 103, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 0, -7,
	ftAnimLoop(0x6800, -38),
};

/* Joint 5 */
u16 dFTSamusAnimWalk3_joint5[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1447, 23, -1388, -17, 1616, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 1610, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -1607, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 15), -1504, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1478, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -1357, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1667, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), 1688, -72,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1630, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -1480, 34,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1358, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1373, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1447, 33, -1388, -14, 1616, -71,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimWalk3_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -917, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -848, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -883, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -952, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -965, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -947, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -917, 29,
	ftAnimLoop(0x6800, -62),
};

/* Joint 7 */
u16 dFTSamusAnimWalk3_joint7[46] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, 5, 92, 1, -77, -8,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 194, 0, 83, -6, -136, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -61, -3, 0, 0, -40, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -112, -3, 0, 0, -40, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -62, 5, 92, 1, -77, -6,
	ftAnimLoop(0x6800, -88),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimWalk3_joint8[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 40),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimWalk3_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimLoop(0x6800, -14),
};

/* Joint 12 */
u16 dFTSamusAnimWalk3_joint12[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -8, 9, 162, 13, 92, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -170, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -126, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 19), 243, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 227, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 159, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -196, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -282, 70,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -174, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -165, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -209, 71, -102, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -33, 34, 52, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -8, 24, 162, 2, 92, 39,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimWalk3_joint14[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -928, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -919, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -923, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -831, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -857, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -921, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -928, -6,
	ftAnimLoop(0x6800, -62),
};

/* Joint 15 */
u16 dFTSamusAnimWalk3_joint15[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -27, 3, -38, 0, -176, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), 31, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), -38, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 78, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 51, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -486, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -571, -74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -324, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 27, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -32, 3,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -300, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -209, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -27, 4, -38, 0, -176, 33,
	ftAnimLoop(0x6800, -124),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimWalk3_joint17[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 286, 13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 451, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 516, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 767, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 654, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 194, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 216, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 272, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 286, 14,
	ftAnimLoop(0x6800, -78),
};

/* Joint 19 */
u16 dFTSamusAnimWalk3_joint19[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -60, 2, 43, -2, -64, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 38), -57, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), 43, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 53, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 114, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 96, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 87, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -63, -1,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -59, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -60, -1, 43, 0, -64, 0,
	ftAnimLoop(0x6800, -100),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimWalk3_joint20[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -39, -4, 22, -4, -304, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 39), -35, -4, 25, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -595, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -544, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -6, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 25, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -259, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -39, -3, 22, -2, -304, -45,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimWalk3_joint22[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 944, 20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 647, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 521, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 226, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 404, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 440, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 917, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 944, 26,
	ftAnimLoop(0x6800, -78),
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 27, 2, 9, 1, 18, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), 57, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), 10, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), -98, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -95, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 16, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 55, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 27, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 27, 0, 9, 0, 18, 1,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};
