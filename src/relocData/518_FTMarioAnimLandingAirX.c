/* AnimJoint data for relocData file 518 (FTMarioAnimLandingAirX) */
/* 848 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimLandingAirX_joint1[26];
extern u16 dFTMarioAnimLandingAirX_joint2[14];
extern u16 dFTMarioAnimLandingAirX_joint4[18];
extern u16 dFTMarioAnimLandingAirX_joint5[38];
extern u16 dFTMarioAnimLandingAirX_joint7[20];
extern u16 dFTMarioAnimLandingAirX_joint8[22];
extern u16 dFTMarioAnimLandingAirX_joint10[8];
extern u16 dFTMarioAnimLandingAirX_joint11[38];
extern u16 dFTMarioAnimLandingAirX_joint12[16];
extern u16 dFTMarioAnimLandingAirX_joint13[12];
extern u16 dFTMarioAnimLandingAirX_joint15[10];
extern u16 dFTMarioAnimLandingAirX_joint16[34];
extern u16 dFTMarioAnimLandingAirX_joint18[24];
extern u16 dFTMarioAnimLandingAirX_joint20[24];
extern u16 dFTMarioAnimLandingAirX_joint21[24];
extern u16 dFTMarioAnimLandingAirX_joint23[24];
extern u16 dFTMarioAnimLandingAirX_joint24[24];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTMarioAnimLandingAirX_joints[] = {
	(AObjEvent32 *)dFTMarioAnimLandingAirX_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTMarioAnimLandingAirX_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTMarioAnimLandingAirX_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTMarioAnimLandingAirX_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTMarioAnimLandingAirX_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTMarioAnimLandingAirX_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTMarioAnimLandingAirX_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTMarioAnimLandingAirX_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTMarioAnimLandingAirX_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTMarioAnimLandingAirX_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTMarioAnimLandingAirX_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTMarioAnimLandingAirX_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTMarioAnimLandingAirX_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTMarioAnimLandingAirX_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTMarioAnimLandingAirX_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTMarioAnimLandingAirX_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTMarioAnimLandingAirX_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimLandingAirX_joint1[26] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 35, 470, -102,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 223, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 35, -40, 424, 80, -102, 116,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, -4, 540, 18, 0, 18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimLandingAirX_joint2[14] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -71, -790, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -71, 0, -790, 1, -95, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTMarioAnimLandingAirX_joint4[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 208, 258, 110,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 613, 258, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 208, -5, 258, -1, 110, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimLandingAirX_joint5[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -626, 0, -493, 0, 338, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -11, -167,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -336, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -283, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -86, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 66, 109, -179, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 133, 66, -300, 36, -272, -92,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimLandingAirX_joint7[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -294, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -451, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -302, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 119,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimLandingAirX_joint8[22] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 651, -4, 176,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 651, -64,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -4, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 201, -5, -4, 0, 176, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTMarioAnimLandingAirX_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -221, 139, -209,
	ftAnimBlock(0, 7),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimLandingAirX_joint11[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -1264, 0, -1678, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 887,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1042, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1099, -12, -1497, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1126, -28, -1516, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1157, -19, -1540, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1164, -7, 1056, 14, -1542, -2,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimLandingAirX_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -238, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -773, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, -37,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimLandingAirX_joint13[12] = {
	ftAnimSetVal(FT_ANIM_ROTX), 625,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), 625,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), 625,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimLandingAirX_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 7),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimLandingAirX_joint16[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1750, 101, -1355, -37, -1804, -75,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -1366, -11, -1598, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1789, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1707, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1499, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1479, -20, -1374, -8, -1572, 26,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimLandingAirX_joint18[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 585, 141,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 707, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 663, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 450, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 417, -33,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimLandingAirX_joint20[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -334, -53, -119, -43, -106, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -220, 12, -18, 12, -168, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -213, 6, -11, 7, -159, 8,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimLandingAirX_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 303, -36, 255, 41, -170, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 190, 0, 200, -9, -7, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 189, -1, 196, -4, 14, 22,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimLandingAirX_joint23[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 765, 138,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 860, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 786, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 513, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 480, -33,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimLandingAirX_joint24[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1550, -4, -1387, 1, 1319, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1690, 10, -1507, -10, 1370, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1697, 6, -1514, -6, 1386, 15,
	ftAnimEnd(),
};
