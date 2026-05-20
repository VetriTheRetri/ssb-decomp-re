/* AnimJoint data for relocData file 1903 (FTYoshiAnimLightItemPickup) */
/* 1264 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimLightItemPickup_joint1[10];
extern u16 dFTYoshiAnimLightItemPickup_joint2[42];
extern u16 dFTYoshiAnimLightItemPickup_joint3[26];
extern u16 dFTYoshiAnimLightItemPickup_joint4[26];
extern u16 dFTYoshiAnimLightItemPickup_joint6[10];
extern u16 dFTYoshiAnimLightItemPickup_joint7[64];
extern u16 dFTYoshiAnimLightItemPickup_joint10[32];
extern u16 dFTYoshiAnimLightItemPickup_joint11[68];
extern u16 dFTYoshiAnimLightItemPickup_joint12[28];
extern u16 dFTYoshiAnimLightItemPickup_joint13[10];
extern u16 dFTYoshiAnimLightItemPickup_joint14[32];
extern u16 dFTYoshiAnimLightItemPickup_joint15[20];
extern u16 dFTYoshiAnimLightItemPickup_joint17[20];
extern u16 dFTYoshiAnimLightItemPickup_joint18[42];
extern u16 dFTYoshiAnimLightItemPickup_joint20[32];
extern u16 dFTYoshiAnimLightItemPickup_joint22[30];
extern u16 dFTYoshiAnimLightItemPickup_joint23[34];
extern u16 dFTYoshiAnimLightItemPickup_joint25[24];
extern u16 dFTYoshiAnimLightItemPickup_joint26[30];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTYoshiAnimLightItemPickup_joints[] = {
	(AObjEvent32 *)dFTYoshiAnimLightItemPickup_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTYoshiAnimLightItemPickup_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTYoshiAnimLightItemPickup_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTYoshiAnimLightItemPickup_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTYoshiAnimLightItemPickup_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTYoshiAnimLightItemPickup_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTYoshiAnimLightItemPickup_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTYoshiAnimLightItemPickup_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTYoshiAnimLightItemPickup_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTYoshiAnimLightItemPickup_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTYoshiAnimLightItemPickup_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTYoshiAnimLightItemPickup_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTYoshiAnimLightItemPickup_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTYoshiAnimLightItemPickup_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTYoshiAnimLightItemPickup_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTYoshiAnimLightItemPickup_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTYoshiAnimLightItemPickup_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTYoshiAnimLightItemPickup_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTYoshiAnimLightItemPickup_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimLightItemPickup_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 672, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTYoshiAnimLightItemPickup_joint2[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1, -89, -3, 0, 1, 30, 0, 20, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), -53, -243,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 161, -95, 5, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ, 6), 0, -1, -89, 3, 0, -1, 20, 24,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), -91, 111,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 30, 6,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimLightItemPickup_joint3[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 16, 0, 0, 16, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 172,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 112, 511, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 16, -8, 0, -27, 0, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTYoshiAnimLightItemPickup_joint4[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 78, 30, 0, -1, 0, -5,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 600, 329,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 446, -56, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 78, -13, 0, 3, 0, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTYoshiAnimLightItemPickup_joint6[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 48, 120,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimLightItemPickup_joint7[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1498, -229, -1476, 302, -1960, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1268, 71, -1174, 12, -1910, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1640, 248, -1451, -15, -2430, -313,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2067, 449,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -788, 320, -2501, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -564, 144, -2811, -429,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2685, 505, -500, 211, -3360, -358,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3079, 210, -141, 184, -3528, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3106, 27, -132, 9, -3569, -40,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTYoshiAnimLightItemPickup_joint10[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -764, -360,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1125, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -985, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1022, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1224, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1017, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, 252,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimLightItemPickup_joint11[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1753, -26, -1505, 1, 1389, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1780, 237, -1503, -35, 1427, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1279, 297, -1577, 40, 1739, 215,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1412, -105, 1859, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1184, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1171, -103,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1614, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1633, -96, 1642, -203,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1541, 49, 1400, -31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1708, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1753, -44, -1505, 36, 1389, -11,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimLightItemPickup_joint12[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1002, 993,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -681, -546,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1280, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1110, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, 107,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimLightItemPickup_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 172, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimLightItemPickup_joint14[32] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 156, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -536, -893, 0,
	ftAnimSetFlags(FT_ANIM_ROTY),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1944, -393, -1247, -439, 690, 322,
	ftAnimSetFlags(0),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -641, 131, -1044, 146, 377, -107,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -536, -893, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimLightItemPickup_joint15[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -190, -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -240, 279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 275, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -190, -59,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTYoshiAnimLightItemPickup_joint17[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -153, -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -188, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 104, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -153, -21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimLightItemPickup_joint18[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, -25, 5, 10, -3, -152,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -9, 5, 7, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -156, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -59, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -213, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -197, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -52, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, 3, 5, -2, -3, 48,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimLightItemPickup_joint20[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 262, 332,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 594, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 380, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 556, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 634, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 348, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 262, -86,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimLightItemPickup_joint22[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1614, 18, -83, 16, -263, -175,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 1620, -7, -83, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -409, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -316, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1614, -5, -83, 0, -263, 52,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimLightItemPickup_joint23[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0, 0, -154, -244,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -642, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -677, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -228, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0, 0, -154, 73,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimLightItemPickup_joint25[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 378, 217,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 873, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 780, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 467, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -88,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTYoshiAnimLightItemPickup_joint26[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1609, 14, -89, -3, -228, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1611, -4, -92, 2, -258, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1609, -2, -89, 3, -228, 30,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
