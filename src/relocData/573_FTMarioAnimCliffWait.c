/* AnimJoint data for relocData file 573 (FTMarioAnimCliffWait) */
/* 1488 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimCliffWait_joint1[38];
extern u16 dFTMarioAnimCliffWait_joint2[44];
extern u16 dFTMarioAnimCliffWait_joint5[32];
extern u16 dFTMarioAnimCliffWait_joint6[58];
extern u16 dFTMarioAnimCliffWait_joint8[32];
extern u16 dFTMarioAnimCliffWait_joint9[18];
extern u16 dFTMarioAnimCliffWait_joint11[22];
extern u16 dFTMarioAnimCliffWait_joint12[56];
extern u16 dFTMarioAnimCliffWait_joint13[32];
extern u16 dFTMarioAnimCliffWait_joint14[14];
extern u16 dFTMarioAnimCliffWait_joint16[14];
extern u16 dFTMarioAnimCliffWait_joint17[78];
extern u16 dFTMarioAnimCliffWait_joint19[32];
extern u16 dFTMarioAnimCliffWait_joint21[68];
extern u16 dFTMarioAnimCliffWait_joint22[68];
extern u16 dFTMarioAnimCliffWait_joint24[24];
extern u16 dFTMarioAnimCliffWait_joint25[64];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTMarioAnimCliffWait_joints[] = {
	(AObjEvent32 *)dFTMarioAnimCliffWait_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTMarioAnimCliffWait_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTMarioAnimCliffWait_joint5, /* [2] joint 5 */
	NULL, /* [3] NULL */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTMarioAnimCliffWait_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTMarioAnimCliffWait_joint8, /* [6] joint 8 */
	NULL, /* [7] NULL */
	(AObjEvent32 *)dFTMarioAnimCliffWait_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTMarioAnimCliffWait_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTMarioAnimCliffWait_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTMarioAnimCliffWait_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTMarioAnimCliffWait_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTMarioAnimCliffWait_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTMarioAnimCliffWait_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTMarioAnimCliffWait_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTMarioAnimCliffWait_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTMarioAnimCliffWait_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTMarioAnimCliffWait_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTMarioAnimCliffWait_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTMarioAnimCliffWait_joint1[38] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), -120, 14, -1200, 7,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 47), 120, -1200,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 22,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAZ), -240,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 25), -240, -21,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 50), -120,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 100), -1200,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 25), -376,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 25), -240, 21,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 50), 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 25), -240,
	ftAnimLoop(0x6800, -74),
};

/* Joint 2 */
u16 dFTMarioAnimCliffWait_joint2[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTZ), -44, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 47), 44,
	_FT_ANIM_CMD(11, FT_ANIM_ROTZ, 1), 22,
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValRate(FT_ANIM_TRAY), 0, -33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 100), 0, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 25), 0, 1,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 50), -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 25), 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 25), 0, -1,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 50), 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 25), 0,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimCliffWait_joint5[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTY), -134, 1,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 47), 134,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 22,
	ftAnimSetValRate(FT_ANIM_TRAY), 600, 33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 100), 600, -32,
	ftAnimBlock(0, 25),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 50), -134,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 50), 134,
	ftAnimBlock(0, 25),
	ftAnimLoop(0x6800, -62),
};

/* Joint 6 */
u16 dFTMarioAnimCliffWait_joint6[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -952, -9, -1434, -9, 285, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 48), 231, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 82), -1381, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 43), -946, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -933, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 55), -944, -9,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 223, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 50), 278, 6,
	ftAnimBlock(0, 33),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1382, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 16), -1434, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -954, -10, -1435, -1, 286, 7,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimCliffWait_joint8[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 40), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -9,
	ftAnimLoop(0x6800, -62),
};

/* Joint 9 */
u16 dFTMarioAnimCliffWait_joint9[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -357,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 50), -491,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 50), -357,
	ftAnimLoop(0x6800, -32),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimCliffWait_joint11[22] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 44,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 47), -44,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 22,
	ftAnimBlock(0, 25),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 50), 44,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 50), -44,
	ftAnimBlock(0, 25),
	ftAnimLoop(0x6800, -42),
};

/* Joint 12 */
u16 dFTMarioAnimCliffWait_joint12[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2253, -13, -1784, -1, 294, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 62), -2180, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 63), 326, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 58), -1742, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1737, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 40), -1776, -5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2163, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 36), -2252, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 331, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), 293, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2265, -13, -1777, -1, 285, -7,
	ftAnimLoop(0x6800, -108),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimCliffWait_joint13[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 40), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 32), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 9,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTMarioAnimCliffWait_joint14[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 804, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), 1072,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 80), 804,
	ftAnimLoop(0x6800, -26),
};

/* Joint 16 */
u16 dFTMarioAnimCliffWait_joint16[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	_FT_ANIM_CMD(11, 0, 1), 100,
	ftAnimBlock(0, 100),
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTMarioAnimCliffWait_joint17[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 180, 4, 291, -5, -11, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 47), -266, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 62), -15, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 42), 437, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 439, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 38), 255, -12,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -269, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), 22, 29,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -15, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 36), -11, -2,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 52, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), 297, -4,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 243, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 17), 174, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 177, 3, 292, -4, -15, -4,
	ftAnimLoop(0x6800, -152),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTMarioAnimCliffWait_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 32), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 44), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimLoop(0x6800, -62),
};

/* Joint 21 */
u16 dFTMarioAnimCliffWait_joint21[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -176, 3, -364, 7, 565, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 49), -351, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 60), 664, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 46), -613, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -625, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), -548, 20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -359, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 49), -366, 6,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 672, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 38), 576, -9,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -525, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 24), -182, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -178, 4, -359, 6, 567, -9,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTMarioAnimCliffWait_joint22[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -160, 0, 354, 0, -15, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 32), 41, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 99), -15, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 29), 18, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -8, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), 122, 17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 51, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 62), -156, 1,
	ftAnimBlock(0, 36),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 140, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), 355, 0,
	ftAnimBlock(0, 25),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -157, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -160, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -160, 0, 354, 0, -15, 0,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimCliffWait_joint24[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 71), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimLoop(0x6800, -46),
};

/* Joint 25 */
u16 dFTMarioAnimCliffWait_joint25[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 375, 2, 334, 5, 341, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 69), 262, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 70), 207, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 29), 185, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 164, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 39), 203, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 220, 15, 260, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 29), 380, 2, 349, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 204, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 28), 325, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 382, 2, 331, 6, 354, 5,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
