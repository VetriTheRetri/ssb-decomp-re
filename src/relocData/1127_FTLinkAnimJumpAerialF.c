/* AnimJoint data for relocData file 1127 (FTLinkAnimJumpAerialF) */
/* 2320 bytes: 120-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimJumpAerialF_joint1[14];
extern u16 dFTLinkAnimJumpAerialF_joint2[14];
extern u16 dFTLinkAnimJumpAerialF_joint3[30];
extern u16 dFTLinkAnimJumpAerialF_joint5[38];
extern u16 dFTLinkAnimJumpAerialF_joint6[124];
extern u16 dFTLinkAnimJumpAerialF_joint7[48];
extern u16 dFTLinkAnimJumpAerialF_joint10[26];
extern u16 dFTLinkAnimJumpAerialF_joint11[124];
extern u16 dFTLinkAnimJumpAerialF_joint12[48];
extern u16 dFTLinkAnimJumpAerialF_joint13[26];
extern u16 dFTLinkAnimJumpAerialF_joint14[26];
extern u16 dFTLinkAnimJumpAerialF_joint17[26];
extern u16 dFTLinkAnimJumpAerialF_joint18[32];
extern u16 dFTLinkAnimJumpAerialF_joint19[32];
extern u16 dFTLinkAnimJumpAerialF_joint21[8];
extern u16 dFTLinkAnimJumpAerialF_joint22[90];
extern u16 dFTLinkAnimJumpAerialF_joint24[48];
extern u16 dFTLinkAnimJumpAerialF_joint26[82];
extern u16 dFTLinkAnimJumpAerialF_joint27[138];
extern u16 dFTLinkAnimJumpAerialF_joint29[60];
extern u16 dFTLinkAnimJumpAerialF_joint30[66];

/* Joint pointer table (30 entries, 120 bytes) */
AObjEvent32 * dFTLinkAnimJumpAerialF_joints[] = {
	(AObjEvent32 *)dFTLinkAnimJumpAerialF_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimJumpAerialF_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimJumpAerialF_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTLinkAnimJumpAerialF_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTLinkAnimJumpAerialF_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimJumpAerialF_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTLinkAnimJumpAerialF_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTLinkAnimJumpAerialF_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimJumpAerialF_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimJumpAerialF_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimJumpAerialF_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTLinkAnimJumpAerialF_joint17, /* [14] joint 17 */
	NULL, /* [15] NULL */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTLinkAnimJumpAerialF_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimJumpAerialF_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTLinkAnimJumpAerialF_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTLinkAnimJumpAerialF_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTLinkAnimJumpAerialF_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTLinkAnimJumpAerialF_joint26, /* [24] joint 26 */
	NULL, /* [25] NULL */
	(AObjEvent32 *)dFTLinkAnimJumpAerialF_joint27, /* [26] joint 27 */
	(AObjEvent32 *)dFTLinkAnimJumpAerialF_joint29, /* [27] joint 29 */
	NULL, /* [28] NULL */
	(AObjEvent32 *)dFTLinkAnimJumpAerialF_joint30, /* [29] joint 30 */
};

/* Joint 1 */
u16 dFTLinkAnimJumpAerialF_joint1[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -3216, 76,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 744, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 55), 0, 25,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimJumpAerialF_joint2[14] = {
	ftAnimSetValRate(FT_ANIM_ROTY), -9650, 151,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 55), 0, 83,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTLinkAnimJumpAerialF_joint3[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 32, 274, 83,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0, -7, 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 0, 0, 0, 5, 0, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 32, 274, 83,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimJumpAerialF_joint5[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 259, 166, 56,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 259, -42, 166, 36, 56, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 5, -7, 385, 6, -28, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 5, 6, 385, -4, -28, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 315, 166, 56,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimJumpAerialF_joint6[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1905, -8, -1228, -42, 1864, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1570, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1666, 213, 1801, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1428, 189, 1574, -207,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1240, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1299, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1634, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1648, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1242, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), -1237, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1301, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), 1300, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1650, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), -1470, 26,
	ftAnimBlock(0, 19),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1294, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 1948, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1241, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1907, -9,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1444, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1349, 3,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1953, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1955, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1914, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1916, -2, -1347, 1, 1955, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTLinkAnimJumpAerialF_joint7[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -430, -145,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -817, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -974, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -682, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -682, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), -682, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -682, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -981, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -952, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -751, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -744, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimJumpAerialF_joint10[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 406, 11, 202, 5, 254, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 406, -2, 202, 1, 254, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 278, 266, 193,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimJumpAerialF_joint11[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 702, -22, 464, -76, 433, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 44, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 46, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 402, -247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 98, -288,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -296, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 88, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 81, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -50, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -53, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -296, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), -296, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -53, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -50, 11,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 81, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -50, -19,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -296, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 408, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -26, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 165, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -66, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 56, 6,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 435, 23, 164, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 486, 4, 163, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 488, 2, 60, 3, 163, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLinkAnimJumpAerialF_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -444, -148,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -842, -208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1010, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -737, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -736, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), -737, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -752, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -687, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -660, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -622, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -616, 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimJumpAerialF_joint13[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, -209, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 0, 0, -209, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 0, -209, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTLinkAnimJumpAerialF_joint14[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1209, -804, 398,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1179, -11, -804, 0, 429, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 814, -7, -804, 0, 793, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 804, -804, 804,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimJumpAerialF_joint17[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1508, 346, -843,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1582, 2, 101, -6, -481, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 1582, -1, 101, 4, -481, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 1508, 346, -843,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimJumpAerialF_joint18[32] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 204, 61, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 204, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 0, 0, 204, -7, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 0, -163, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTLinkAnimJumpAerialF_joint19[32] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 174, 62, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 174, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 0, 0, 174, -7, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 0, -199, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimJumpAerialF_joint21[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 97, 0, 0,
	ftAnimBlock(0, 55),
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTLinkAnimJumpAerialF_joint22[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 18, 12, 163, 7, -712, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 187, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -13, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -412, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -396, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -83, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 185, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 33), 184, 13,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -81, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 30), -757, -22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -23, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), -57, 40,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 197, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 38, -15,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -16, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 134, 10,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -776, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 30, -8, 139, 5, -782, -6,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTLinkAnimJumpAerialF_joint24[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1036, 14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1015, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 955, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 267, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 223, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 502, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 524, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 961, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1017, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1202, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1205, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTLinkAnimJumpAerialF_joint26[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1152, -4, -1425, 0, -1538, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 34), -1270, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 46), -1439, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -986, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -950, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -964, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -940, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 17), -884, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -863, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1059, -54,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1281, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -1537, -2,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1113, -50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1137, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1436, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -1425, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1135, 2, -1425, 0, -1538, -1,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTLinkAnimJumpAerialF_joint27[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1253, 3, 1361, 9, -1763, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1471, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), -1657, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1591, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1609, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -2084, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1457, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 1191, -13,
	ftAnimBlock(0, 20),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1678, -16, -2088, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1846, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1609, -76,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1179, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1365, 80,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1877, -69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2496, -23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1695, -58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1474, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1438, 56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1394, -71,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2491, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2265, 170,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1450, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1316, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1321, -55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1283, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2077, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1933, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1306, 10, 1289, 6, -1878, 54,
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTLinkAnimJumpAerialF_joint29[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 551, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 454, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 508, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 1256, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1235, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 592, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 590, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 812, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 717, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 602, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 751, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 938, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 878, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 845, -33,
	ftAnimEnd(),
	0x0000,
};

/* Joint 30 */
u16 dFTLinkAnimJumpAerialF_joint30[66] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 1192, -12, -1518, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 1861,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 54), -1518, 1861,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 868, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 796, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 779, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 819, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 1536, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1564, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 1436, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1377, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1065, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 980, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 955, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 961, 5, 1861, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -1518,
	ftAnimEnd(),
	0x0000,
};
