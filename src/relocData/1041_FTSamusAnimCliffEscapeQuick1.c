/* AnimJoint data for relocData file 1041 (FTSamusAnimCliffEscapeQuick1) */
/* 784 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimCliffEscapeQuick1_joint1[18];
extern u16 dFTSamusAnimCliffEscapeQuick1_joint2[16];
extern u16 dFTSamusAnimCliffEscapeQuick1_joint3[12];
extern u16 dFTSamusAnimCliffEscapeQuick1_joint5[30];
extern u16 dFTSamusAnimCliffEscapeQuick1_joint6[24];
extern u16 dFTSamusAnimCliffEscapeQuick1_joint7[16];
extern u16 dFTSamusAnimCliffEscapeQuick1_joint8[16];
extern u16 dFTSamusAnimCliffEscapeQuick1_joint9[16];
extern u16 dFTSamusAnimCliffEscapeQuick1_joint12[22];
extern u16 dFTSamusAnimCliffEscapeQuick1_joint13[24];
extern u16 dFTSamusAnimCliffEscapeQuick1_joint15[16];
extern u16 dFTSamusAnimCliffEscapeQuick1_joint16[24];
extern u16 dFTSamusAnimCliffEscapeQuick1_joint18[20];
extern u16 dFTSamusAnimCliffEscapeQuick1_joint20[24];
extern u16 dFTSamusAnimCliffEscapeQuick1_joint21[24];
extern u16 dFTSamusAnimCliffEscapeQuick1_joint23[16];
extern u16 dFTSamusAnimCliffEscapeQuick1_joint24[26];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTSamusAnimCliffEscapeQuick1_joints[] = {
	(AObjEvent32 *)dFTSamusAnimCliffEscapeQuick1_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTSamusAnimCliffEscapeQuick1_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimCliffEscapeQuick1_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTSamusAnimCliffEscapeQuick1_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTSamusAnimCliffEscapeQuick1_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimCliffEscapeQuick1_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimCliffEscapeQuick1_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimCliffEscapeQuick1_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTSamusAnimCliffEscapeQuick1_joint12, /* [9] joint 12 */
	NULL, /* [10] NULL */
	NULL, /* [11] NULL */
	(AObjEvent32 *)dFTSamusAnimCliffEscapeQuick1_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTSamusAnimCliffEscapeQuick1_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTSamusAnimCliffEscapeQuick1_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTSamusAnimCliffEscapeQuick1_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTSamusAnimCliffEscapeQuick1_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTSamusAnimCliffEscapeQuick1_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTSamusAnimCliffEscapeQuick1_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTSamusAnimCliffEscapeQuick1_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTSamusAnimCliffEscapeQuick1_joint1[18] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX), 0,
	ftAnimSetValRate(FT_ANIM_TRAY), -786, 483,
	ftAnimSetValBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 0, 0, 0, 20,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 3), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimCliffEscapeQuick1_joint2[16] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 24, 1582, -241, 0, 205,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 28, 101, 966, -174, 263, 258,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTSamusAnimCliffEscapeQuick1_joint3[12] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 178, 75,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 766, 196,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimCliffEscapeQuick1_joint5[30] = {
	ftAnimSetValBlock(FT_ANIM_SCAX), 4095,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX, 85), 4096,
	_FT_ANIM_CMD(11, FT_ANIM_SCAX, 1), 80,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAX), 0, 1,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 178, -11, 75,
	ftAnimSetValRateT(FT_ANIM_TRAX, 3), 7, 6,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 413, -131, 86,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimCliffEscapeQuick1_joint6[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1270, 21, -1603, 140, -2058, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1284, -58, -1400, 33, -2129, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1365, -81, -1397, 2, -2324, -195,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimCliffEscapeQuick1_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -5, -462,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -742, -262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -993, -251,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimCliffEscapeQuick1_joint8[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 290, -12, 0, -2, 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -21, 0, 32, 0, 52,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimCliffEscapeQuick1_joint9[16] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 69, 0, -1608,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 98, 60, -42,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 69, 0, -1608,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimCliffEscapeQuick1_joint12[22] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 479, 0,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -2, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 6), -231,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 0, 0,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTSamusAnimCliffEscapeQuick1_joint13[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1634, 33, -1688, -18, 1161, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1576, 26, -1735, -37, 1127, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1548, 27, -1782, -47, 957, -169,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimCliffEscapeQuick1_joint15[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -5, -412,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -690, -239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -896, -206,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTSamusAnimCliffEscapeQuick1_joint16[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 11, 43, -41, 23, -171, -245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 106, 15, 57, 24, -401, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 85, -20, 31, -26, -213, 187,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTSamusAnimCliffEscapeQuick1_joint18[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 100, 628,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 728, 450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1001, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1126, 124,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTSamusAnimCliffEscapeQuick1_joint20[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -48, -9, 48, 6, 259, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -139, -23, 59, 2, 13, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -106, 32, 59, 0, -138, -151,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTSamusAnimCliffEscapeQuick1_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1605, -10, -1652, -14, 1482, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1578, -23, -1687, -20, 1196, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1547, -30, -1707, -20, 1088, -108,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTSamusAnimCliffEscapeQuick1_joint23[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 338, 308,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 857, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1033, 175,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTSamusAnimCliffEscapeQuick1_joint24[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -55, 1526, 71, 1917, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1594, -10, 1684, 81, 1620, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1620, 25, 1760, 75, 1458, -162,
	ftAnimEnd(),
	0x0000, 0x0000,
};
