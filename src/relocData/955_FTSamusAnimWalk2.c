/* AnimJoint data for relocData file 955 (FTSamusAnimWalk2) */
/* 1344 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimWalk2_joint1[20];
extern u16 dFTSamusAnimWalk2_joint2[8];
extern u16 dFTSamusAnimWalk2_joint4[16];
extern u16 dFTSamusAnimWalk2_joint5[48];
extern u16 dFTSamusAnimWalk2_joint6[24];
extern u16 dFTSamusAnimWalk2_joint7[16];
extern u16 dFTSamusAnimWalk2_joint8[20];
extern u16 dFTSamusAnimWalk2_joint11[8];
extern u16 dFTSamusAnimWalk2_joint12[68];
extern u16 dFTSamusAnimWalk2_joint14[24];
extern u16 dFTSamusAnimWalk2_joint15[68];
extern u16 dFTSamusAnimWalk2_joint17[40];
extern u16 dFTSamusAnimWalk2_joint19[78];
extern u16 dFTSamusAnimWalk2_joint20[76];
extern u16 dFTSamusAnimWalk2_joint22[32];
extern u16 dFTSamusAnimWalk2_joint23[80];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimWalk2_joints[] = {
	(u32)dFTSamusAnimWalk2_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimWalk2_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimWalk2_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimWalk2_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimWalk2_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimWalk2_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimWalk2_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimWalk2_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimWalk2_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimWalk2_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimWalk2_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimWalk2_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimWalk2_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimWalk2_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimWalk2_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTSamusAnimWalk2_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimWalk2_joint1[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 1600,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 15), 1736,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 15), 1601, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 15), 1736,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 15), 1600,
	ftAnimLoop(0x6800, -38),
};

/* Joint 2 */
u16 dFTSamusAnimWalk2_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 60),
	ftAnimLoop(0x6800, -14),
};

/* Joint 4 */
u16 dFTSamusAnimWalk2_joint4[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 81,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 30), -40,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 30), 81,
	ftAnimLoop(0x6800, -30),
};

/* Joint 5 */
u16 dFTSamusAnimWalk2_joint5[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1332, -1, -1521, 1, 1604, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 57), -1527, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 59), -1332, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 40), 1465, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1476, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 1604, 1,
	ftAnimBlock(0, 16),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1524, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1522, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1332, 0, -1521, 1, 1604, 0,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimWalk2_joint6[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -825, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 55), -812, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -816, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -824, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -825, 0,
	ftAnimLoop(0x6800, -46),
};

/* Joint 7 */
u16 dFTSamusAnimWalk2_joint7[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 570, -197, -128,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 253, -71, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 570, -197, -128,
	ftAnimLoop(0x6800, -30),
};

/* Joint 8 */
u16 dFTSamusAnimWalk2_joint8[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -200, 2191, 1791,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 91, 54, -28,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -538, 2318, 2127,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -200, 2191, 1791,
	ftAnimLoop(0x6800, -38),
};

/* Joint 11 */
u16 dFTSamusAnimWalk2_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 60),
	ftAnimLoop(0x6800, -14),
};

/* Joint 12 */
u16 dFTSamusAnimWalk2_joint12[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -189, 0, 84, -1, -237, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 36), -61, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 41), -104, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 25), 19, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 26, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), 33, 10,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -63, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), -188, -1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -117, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -236, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 43, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 83, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -189, 0, 84, 1, -237, 0,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimWalk2_joint14[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -601, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), -689, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -691, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), -602, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -601, 0,
	ftAnimLoop(0x6800, -46),
};

/* Joint 15 */
u16 dFTSamusAnimWalk2_joint15[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 87, -1, -27, 0, -389, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 36), -49, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 56), -36, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -86, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -79, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -141, -25,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -41, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 86, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -166, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -388, -2,
	ftAnimBlock(0, 16),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -32, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -28, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 87, 1, -27, 0, -389, -1,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimWalk2_joint17[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 324, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 341, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 550, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 574, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 482, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 482, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 479, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, 0,
	ftAnimLoop(0x6800, -78),
};

/* Joint 19 */
u16 dFTSamusAnimWalk2_joint19[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -75, 0, -28, 0, -41, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 35), -79, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 38), -125, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -244, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -262, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -63, 7,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -96, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -29, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -129, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -68, -4,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -54, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -43, 1,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -72, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -74, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, -1, -28, 0, -41, 1,
	ftAnimLoop(0x6800, -152),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimWalk2_joint20[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 226, -6, 160, -1, -49, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 28), -387, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 54), 137, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 18), 28, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 22, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), 157, 12,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -379, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), -50, 0,
	ftAnimBlock(0, 19),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 169, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 226, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -50, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -49, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 143, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 160, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, 0, 160, 0, -49, 0,
	ftAnimLoop(0x6800, -148),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimWalk2_joint22[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 442, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 535, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 519, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 325, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 302, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 440, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, 2,
	ftAnimLoop(0x6800, -62),
};

/* Joint 23 */
u16 dFTSamusAnimWalk2_joint23[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 142, 1, 193, 0, -213, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), 162, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 35), 27, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -83, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -57, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -75, 1,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 160, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), 194, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 28, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), 141, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -73, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -212, -2,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 194, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 193, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 142, 0, 193, 0, -213, -1,
	ftAnimLoop(0x6800, -152),
	ftAnimEnd(),
	0x0000, 0x0000,
};
