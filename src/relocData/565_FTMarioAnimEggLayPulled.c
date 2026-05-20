/* AnimJoint data for relocData file 565 (FTMarioAnimEggLayPulled) */
/* 816 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimEggLayPulled_joint1[8];
extern u16 dFTMarioAnimEggLayPulled_joint2[30];
extern u16 dFTMarioAnimEggLayPulled_joint3[14];
extern u16 dFTMarioAnimEggLayPulled_joint5[20];
extern u16 dFTMarioAnimEggLayPulled_joint6[24];
extern u16 dFTMarioAnimEggLayPulled_joint8[18];
extern u16 dFTMarioAnimEggLayPulled_joint9[20];
extern u16 dFTMarioAnimEggLayPulled_joint11[16];
extern u16 dFTMarioAnimEggLayPulled_joint12[32];
extern u16 dFTMarioAnimEggLayPulled_joint13[20];
extern u16 dFTMarioAnimEggLayPulled_joint14[10];
extern u16 dFTMarioAnimEggLayPulled_joint16[16];
extern u16 dFTMarioAnimEggLayPulled_joint17[24];
extern u16 dFTMarioAnimEggLayPulled_joint19[16];
extern u16 dFTMarioAnimEggLayPulled_joint21[24];
extern u16 dFTMarioAnimEggLayPulled_joint22[24];
extern u16 dFTMarioAnimEggLayPulled_joint24[16];
extern u16 dFTMarioAnimEggLayPulled_joint25[26];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTMarioAnimEggLayPulled_joints[] = {
	(AObjEvent32 *)dFTMarioAnimEggLayPulled_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTMarioAnimEggLayPulled_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTMarioAnimEggLayPulled_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTMarioAnimEggLayPulled_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTMarioAnimEggLayPulled_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTMarioAnimEggLayPulled_joint8, /* [6] joint 8 */
	NULL, /* [7] NULL */
	(AObjEvent32 *)dFTMarioAnimEggLayPulled_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTMarioAnimEggLayPulled_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTMarioAnimEggLayPulled_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTMarioAnimEggLayPulled_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTMarioAnimEggLayPulled_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTMarioAnimEggLayPulled_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTMarioAnimEggLayPulled_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTMarioAnimEggLayPulled_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTMarioAnimEggLayPulled_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTMarioAnimEggLayPulled_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTMarioAnimEggLayPulled_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTMarioAnimEggLayPulled_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTMarioAnimEggLayPulled_joint1[8] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 228,
	ftAnimSetValAfterBlock(FT_ANIM_TRAY), 840,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 3), 60,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimEggLayPulled_joint2[30] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 8), 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTZ, 1), 5,
	ftAnimSetValRateBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 223, -27, 0, -120, -299, 59, -300, 299,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -240, 479, 0, 184,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX, 3), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTMarioAnimEggLayPulled_joint3[14] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -71, 8, -790, 98, -95, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimEggLayPulled_joint5[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 208, -42, 258, -32, 110, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -134, 32, 0, -30, 0, -13,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimEggLayPulled_joint6[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 133, -188, -300, 41, -272, 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -168, -69, -154, 61, 341, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -194, -25, -136, 17, 414, 72,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimEggLayPulled_joint8[18] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -182, 182,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 86,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 9,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTMarioAnimEggLayPulled_joint9[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 201, -64, -4, 0, 176, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -312, -39, 0, 0, 0, -13,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimEggLayPulled_joint11[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -221, 27, 139, -17, -209, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 17, 0, -10, 0, 16,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimEggLayPulled_joint12[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2052, 265, 1056, 414, 1674, 297,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2473, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1471, 185, 1972, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1427, 2, 2006, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2578, 104, 1475, 48, 2021, 14,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimEggLayPulled_joint13[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -811, 109,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -702, 401,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTMarioAnimEggLayPulled_joint14[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 625, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 5,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTMarioAnimEggLayPulled_joint16[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), -804,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 1608, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 1608, 23, 0, 23,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 5,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTMarioAnimEggLayPulled_joint17[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1473, 3, -1377, 1, -1563, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1480, -1, -1375, 0, -1558, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1473, -7, -1377, -2, -1563, -4,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTMarioAnimEggLayPulled_joint19[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 400, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 416, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTMarioAnimEggLayPulled_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -212, -3, -11, -5, -156, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -217, 4, -22, 2, -170, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -206, 10, -11, 10, -156, 14,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTMarioAnimEggLayPulled_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 200, -2, 187, 0, 35, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 194, 1, 188, 0, 39, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 200, 5, 187, -1, 35, -3,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimEggLayPulled_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 456, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, -17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTMarioAnimEggLayPulled_joint25[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, 2, -1514, -2, 1395, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1702, 0, -1519, 1, 1378, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1698, -4, -1514, 5, 1395, 16,
	ftAnimEnd(),
	0x0000, 0x0000,
};
