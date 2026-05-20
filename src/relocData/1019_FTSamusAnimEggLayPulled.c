/* AnimJoint data for relocData file 1019 (FTSamusAnimEggLayPulled) */
/* 832 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimEggLayPulled_joint1[10];
extern u16 dFTSamusAnimEggLayPulled_joint2[8];
extern u16 dFTSamusAnimEggLayPulled_joint3[24];
extern u16 dFTSamusAnimEggLayPulled_joint5[34];
extern u16 dFTSamusAnimEggLayPulled_joint6[30];
extern u16 dFTSamusAnimEggLayPulled_joint7[16];
extern u16 dFTSamusAnimEggLayPulled_joint8[30];
extern u16 dFTSamusAnimEggLayPulled_joint9[10];
extern u16 dFTSamusAnimEggLayPulled_joint12[22];
extern u16 dFTSamusAnimEggLayPulled_joint13[30];
extern u16 dFTSamusAnimEggLayPulled_joint15[20];
extern u16 dFTSamusAnimEggLayPulled_joint16[30];
extern u16 dFTSamusAnimEggLayPulled_joint18[16];
extern u16 dFTSamusAnimEggLayPulled_joint20[24];
extern u16 dFTSamusAnimEggLayPulled_joint21[24];
extern u16 dFTSamusAnimEggLayPulled_joint23[16];
extern u16 dFTSamusAnimEggLayPulled_joint24[24];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTSamusAnimEggLayPulled_joints[] = {
	(AObjEvent32 *)dFTSamusAnimEggLayPulled_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTSamusAnimEggLayPulled_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimEggLayPulled_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTSamusAnimEggLayPulled_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTSamusAnimEggLayPulled_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimEggLayPulled_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimEggLayPulled_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimEggLayPulled_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTSamusAnimEggLayPulled_joint12, /* [9] joint 12 */
	NULL, /* [10] NULL */
	NULL, /* [11] NULL */
	(AObjEvent32 *)dFTSamusAnimEggLayPulled_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTSamusAnimEggLayPulled_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTSamusAnimEggLayPulled_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTSamusAnimEggLayPulled_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTSamusAnimEggLayPulled_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTSamusAnimEggLayPulled_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTSamusAnimEggLayPulled_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTSamusAnimEggLayPulled_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTSamusAnimEggLayPulled_joint1[10] = {
	ftAnimSetValRate(FT_ANIM_TRAY), 1888, 594,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 232,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 1939,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimEggLayPulled_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -290, -232,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTSamusAnimEggLayPulled_joint3[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 116, -20, 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 37), -78, 0, 101, 0, -15, 0,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimEggLayPulled_joint5[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -201, 45, 0, 0, 3, -10, -35, 69,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_TRAX, 37), 168, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 37), -4, 0, 32, 0,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimEggLayPulled_joint6[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2084, -2, -1722, 168, 1377, 83,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1923, -224, 1701, 269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1553, 238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1244, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1634, -289, -1148, 96, 1999, 297,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimEggLayPulled_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -739, -179,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1070, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1082, -12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimEggLayPulled_joint8[30] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 424,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 45), 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 5,
	ftAnimSetValRate(FT_ANIM_ROTX), 701, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -491, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 37), 0, 0,
	ftAnimBlock0(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTSamusAnimEggLayPulled_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimEggLayPulled_joint12[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -148, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 37), 0, 0, 0, 0,
	ftAnimBlock0(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTSamusAnimEggLayPulled_joint13[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1550, -81, 1737, -90, -1824, 314,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1588, 40, 1553, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1509, 345,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1133, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1551, 37, 1521, -31, -1168, -35,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimEggLayPulled_joint15[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, -249,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -845, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -690, 301,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -242, 447,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTSamusAnimEggLayPulled_joint16[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 87, -9, -27, 2, -389, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 45, -47, -36, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -355, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -177, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -17, -63, -73, -36, -77, 99,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTSamusAnimEggLayPulled_joint18[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, 123,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 638, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 604, -34,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTSamusAnimEggLayPulled_joint20[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -75, 3, -28, 0, -41, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -71, -9, -28, 0, -42, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -90, -18, -28, 0, -41, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTSamusAnimEggLayPulled_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 226, -107, 160, -34, -49, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 21, -60, 70, -40, -220, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2, -23, 45, -25, -190, 30,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTSamusAnimEggLayPulled_joint23[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 442, 67,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 535, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 351, -183,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTSamusAnimEggLayPulled_joint24[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 142, -22, 193, 0, -213, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 65, -66, 193, 0, -213, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -14, -79, 193, 0, -213, 0,
	ftAnimEnd(),
};
