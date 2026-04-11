/* AnimJoint data for relocData file 522 (FTMarioAnimSleep) */
/* 2192 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimSleep_joint1[54];
extern u16 dFTMarioAnimSleep_joint2[98];
extern u16 dFTMarioAnimSleep_joint4[98];
extern u16 dFTMarioAnimSleep_joint5[94];
extern u16 dFTMarioAnimSleep_joint6[38];
extern u16 dFTMarioAnimSleep_joint7[8];
extern u16 dFTMarioAnimSleep_joint8[40];
extern u16 dFTMarioAnimSleep_joint10[10];
extern u16 dFTMarioAnimSleep_joint11[76];
extern u16 dFTMarioAnimSleep_joint12[38];
extern u16 dFTMarioAnimSleep_joint13[24];
extern u16 dFTMarioAnimSleep_joint15[12];
extern u16 dFTMarioAnimSleep_joint16[108];
extern u16 dFTMarioAnimSleep_joint18[40];
extern u16 dFTMarioAnimSleep_joint20[92];
extern u16 dFTMarioAnimSleep_joint21[88];
extern u16 dFTMarioAnimSleep_joint23[130];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimSleep_joints[] = {
	(u32)dFTMarioAnimSleep_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimSleep_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimSleep_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimSleep_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimSleep_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimSleep_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimSleep_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimSleep_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimSleep_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimSleep_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimSleep_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimSleep_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimSleep_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimSleep_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimSleep_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimSleep_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimSleep_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	0xFFFF01F7, /* [23] END */
};

/* Joint 1 */
u16 dFTMarioAnimSleep_joint1[54] = {
	ftAnimSetValRate(FT_ANIM_TRAY), 542, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 804, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 20), 571, 6,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 564, -3,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 563, -4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 554, -4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 552, -8,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 533, -10,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 526, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 11), 535, 6,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 9), 544, 6,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 550, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 542, 5,
	ftAnimLoop(0x6800, -104),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimSleep_joint2[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1117, 69, -794, 0, -1242, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 917, -25, -765, 1, -1030, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 341, -45, -753, 1, -515, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 3, -39, -740, 2, -226, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -443, -25, -696, 3, 175, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -504, -9, -673, -1, 220, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -632, -22, -718, -3, 362, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -964, -23, -735, -1, 700, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -1118, 3, -739, -1, 916, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -903, -1, -764, -2, 773, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -1154, -59, -780, -1, 1048, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -2099, 69, -794, 0, 1974, -69,
	ftAnimLoop(0x6800, -192),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimSleep_joint4[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 428, 0, 35, 2, 52, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 326, -5, 78, 1, -90, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 264, -6, 69, 0, -122, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 190, -5, 95, 1, -117, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 162, -2, 90, -3, -134, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 130, -4, 33, -2, -71, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 73, -1, 32, -2, 3, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 98, 3, -8, -3, 43, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 149, 6, -36, -1, 74, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 224, 9, -35, 2, 82, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 331, 10, 10, 3, 69, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 428, 0, 35, 2, 52, -5,
	ftAnimLoop(0x6800, -192),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimSleep_joint5[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -144, 0, -242, 0, -74, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 32), -213, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 31), -85, -2, -266, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -87, 0, -264, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 37), -103, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 80), -132, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -212, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 47), -183, 0,
	ftAnimBlock(0, 36),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -101, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 34), -153, -2,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -183, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), -192, -7,
	ftAnimBlock(0, 23),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -155, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -83, 8,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -132, -1, -199, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -142, -2, -236, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -144, -2, -242, -5, -74, 8,
	ftAnimLoop(0x6800, -184),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimSleep_joint6[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 48), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 36), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -72),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimSleep_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -89, 0, 0,
	ftAnimBlock(0, 120),
	ftAnimLoop(0x6800, -14),
};

/* Joint 8 */
u16 dFTMarioAnimSleep_joint8[40] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -131,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 60), 215,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 55,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 245,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 60), -159,
	_FT_ANIM_CMD(11, FT_ANIM_ROTZ, 1), 25,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 60), -131,
	ftAnimBlock(0, 30),
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 60), 245,
	ftAnimBlock(0, 30),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 60), 215,
	ftAnimBlock(0, 30),
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 60), -159,
	ftAnimBlock(0, 25),
	ftAnimLoop(0x6800, -78),
};

/* Joint 10 */
u16 dFTMarioAnimSleep_joint10[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 115,
	ftAnimBlock(0, 120),
	ftAnimLoop(0x6800, -18),
};

/* Joint 11 */
u16 dFTMarioAnimSleep_joint11[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 219, 4, 361, -4, -146, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 86), 307, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 92), 345, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 38), -77, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -79, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), -67, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -62, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 39), -63, -9,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 307, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 32), 227, -4,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 344, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), 356, 3,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -70, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -135, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 219, -7, 361, 4, -146, -10,
	ftAnimLoop(0x6800, -148),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimSleep_joint12[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 34), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 45), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 9,
	ftAnimLoop(0x6800, -74),
};

/* Joint 13 */
u16 dFTMarioAnimSleep_joint13[24] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 178, 1,
	ftAnimSetValBlock(FT_ANIM_ROTX), 89,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 63), -29, 358,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 63), 84,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 57), 0, 178,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 57), 89,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimSleep_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 120),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimSleep_joint16[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -34, -4, -141, 0, -50, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 51), -79, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 53), 144, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 40), -42, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -37, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -7, 5,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -74, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 42), -112, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 147, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 31), 100, -3,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 38), -118, 5,
	ftAnimBlock(0, 25),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 96, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), -42, -1,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -114, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), -140, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -113, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -31, -2,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -44, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -53, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -34, -3, -141, 0, -50, 2,
	ftAnimLoop(0x6800, -212),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimSleep_joint18[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 463, -4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 388, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 390, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 38), 430, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 440, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 42), 409, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 416, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 466, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 463, -2,
	ftAnimLoop(0x6800, -78),
};

/* Joint 20 */
u16 dFTMarioAnimSleep_joint20[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -166, 1, -21, 2, -213, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 50), -144, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 60), -194, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 40), 48, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 46, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 35, 1,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -139, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 56), -125, 0,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 44, 8, -199, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 49), -206, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 38), 49, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 46, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -23, 2,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -125, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -166, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -205, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -214, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -166, 0, -21, 2, -213, 1,
	ftAnimLoop(0x6800, -180),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimSleep_joint21[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 103, 0, 180, 0, -56, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 50), 210, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 53), 247, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 39), 189, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 184, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 35), 28, -10,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 215, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 68), 179, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 252, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 31), 18, -8,
	ftAnimBlock(0, 21),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 18, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 34), 42, 4,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 10, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 33), -57, 1,
	ftAnimBlock(0, 24),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 49, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 101, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 103, 2, 180, 1, -56, 1,
	ftAnimLoop(0x6800, -172),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimSleep_joint23[130] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 459, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 239, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 242, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 348, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 353, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 490, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 499, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 48), 460, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 459, -1,
	ftAnimLoop(0x6800, -78),
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 114, 0, -7, -1, -182, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), 62, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 48), 217, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), -154, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -157, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 63), -236, 5,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 72, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 70), 45, -5,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 228, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 41), 237, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 233, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), 113, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -230, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -182, 0,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 36, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 114, 0, -7, -2, -182, 0,
	ftAnimLoop(0x6800, -168),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
