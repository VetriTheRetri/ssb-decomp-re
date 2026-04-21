/* AnimJoint data for relocData file 1031 (FTSamusAnimCliffQuick) */
/* 1136 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimCliffQuick_joint1[18];
extern u16 dFTSamusAnimCliffQuick_joint2[36];
extern u16 dFTSamusAnimCliffQuick_joint3[26];
extern u16 dFTSamusAnimCliffQuick_joint5[20];
extern u16 dFTSamusAnimCliffQuick_joint6[76];
extern u16 dFTSamusAnimCliffQuick_joint7[32];
extern u16 dFTSamusAnimCliffQuick_joint8[30];
extern u16 dFTSamusAnimCliffQuick_joint9[18];
extern u16 dFTSamusAnimCliffQuick_joint12[8];
extern u16 dFTSamusAnimCliffQuick_joint13[76];
extern u16 dFTSamusAnimCliffQuick_joint15[32];
extern u16 dFTSamusAnimCliffQuick_joint16[24];
extern u16 dFTSamusAnimCliffQuick_joint18[16];
extern u16 dFTSamusAnimCliffQuick_joint20[24];
extern u16 dFTSamusAnimCliffQuick_joint21[30];
extern u16 dFTSamusAnimCliffQuick_joint23[24];
extern u16 dFTSamusAnimCliffQuick_joint24[30];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTSamusAnimCliffQuick_joints[] = {
	(u32)dFTSamusAnimCliffQuick_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimCliffQuick_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimCliffQuick_joint3, /* [2] joint 3 */
	(u32)dFTSamusAnimCliffQuick_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTSamusAnimCliffQuick_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimCliffQuick_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimCliffQuick_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimCliffQuick_joint9, /* [8] joint 9 */
	(u32)dFTSamusAnimCliffQuick_joint12, /* [9] joint 12 */
	0x00000000, /* [10] NULL */
	0x00000000, /* [11] NULL */
	(u32)dFTSamusAnimCliffQuick_joint13, /* [12] joint 13 */
	(u32)dFTSamusAnimCliffQuick_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTSamusAnimCliffQuick_joint16, /* [15] joint 16 */
	(u32)dFTSamusAnimCliffQuick_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTSamusAnimCliffQuick_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTSamusAnimCliffQuick_joint21, /* [20] joint 21 */
	(u32)dFTSamusAnimCliffQuick_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTSamusAnimCliffQuick_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTSamusAnimCliffQuick_joint1[18] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -2907, -303,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -769, 1689, -205, 242,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -795, 35, 0, 136,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimCliffQuick_joint2[36] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, -1166, 1582, 4,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), -526, -5840, 1216, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -215, 511, 1582, 364, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 30), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), -14, 144, 1581, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTSamusAnimCliffQuick_joint3[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -241, 357,
	ftAnimSetValBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 16, 24, -357, -35,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 5), 178,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 178, 0, 0, -1, 0, 29,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimCliffQuick_joint5[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 178, 10, 0, 0, -11, 0, 75, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTSamusAnimCliffQuick_joint6[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2281, 280, -1275, 75, -69, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1103, 257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2561, 368, -93, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3019, -37, -334, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2486, -6, -684, 427, 205, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3007, 351, -248, 262, -37, -156,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 3288, 93, -209, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -160, 59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -64, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3376, 81, -295, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 3513, 50, -361, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3553, 40, -27, 36, -421, -59,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimCliffQuick_joint7[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -13, -196,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -604, -416,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1042, -207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -662, 298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -422, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -196, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -86, 110,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimCliffQuick_joint8[30] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 453, 277, 293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -272, -129, 202, -120, -109, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 63, 70, -83, -25, -18, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 290, 16, 0, 5, 0, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTSamusAnimCliffQuick_joint9[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 67, -17, -1474,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 98, 60, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 69, 0, 0, 1, -1608, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTSamusAnimCliffQuick_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTSamusAnimCliffQuick_joint13[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -434, 362, 461, 104, -70, 411,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -71, 441, 565, -62, 341, 411,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 447, 334, 335, -149, 753, 137,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 359, -187,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 406, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 615, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 614, -50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -172, -185,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 134, -200,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -62, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 318, -108,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 98, -54,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -356, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -26, 35, 80, -17, -447, -91,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimCliffQuick_joint15[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1068, -71,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1007, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -816, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -849, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -718, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -168, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 163,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTSamusAnimCliffQuick_joint16[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1356, 1, -1730, 6, -1675, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1585, 38, -1577, 11, -1798, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1620, 34, -1566, 11, -1780, 18,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTSamusAnimCliffQuick_joint18[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 338, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 178, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 100, -78,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTSamusAnimCliffQuick_joint20[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 6, 9, 48, 0, 259, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -16, -32, 48, 0, 259, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -48, -32,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 48, 259,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTSamusAnimCliffQuick_joint21[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1884, 8, -1782, 1, 1332, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -1619, 11, -1663, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1558, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1537, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1611, 8, -1652, 11, 1482, -55,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTSamusAnimCliffQuick_joint23[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 341, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 194, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 186, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 237, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 338, 100,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTSamusAnimCliffQuick_joint24[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 68, -3, 81, 0, 308, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 59, 26, 82, 0, 328, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 88, 29, 81, 0, 308, -19,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
