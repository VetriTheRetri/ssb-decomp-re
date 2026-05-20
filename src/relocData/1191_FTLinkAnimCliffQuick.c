/* AnimJoint data for relocData file 1191 (FTLinkAnimCliffQuick) */
/* 1456 bytes: 120-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimCliffQuick_joint1[14];
extern u16 dFTLinkAnimCliffQuick_joint2[24];
extern u16 dFTLinkAnimCliffQuick_joint3[22];
extern u16 dFTLinkAnimCliffQuick_joint5[22];
extern u16 dFTLinkAnimCliffQuick_joint6[64];
extern u16 dFTLinkAnimCliffQuick_joint7[34];
extern u16 dFTLinkAnimCliffQuick_joint10[30];
extern u16 dFTLinkAnimCliffQuick_joint11[62];
extern u16 dFTLinkAnimCliffQuick_joint12[32];
extern u16 dFTLinkAnimCliffQuick_joint13[22];
extern u16 dFTLinkAnimCliffQuick_joint14[8];
extern u16 dFTLinkAnimCliffQuick_joint17[22];
extern u16 dFTLinkAnimCliffQuick_joint18[22];
extern u16 dFTLinkAnimCliffQuick_joint19[22];
extern u16 dFTLinkAnimCliffQuick_joint21[22];
extern u16 dFTLinkAnimCliffQuick_joint22[44];
extern u16 dFTLinkAnimCliffQuick_joint24[24];
extern u16 dFTLinkAnimCliffQuick_joint26[38];
extern u16 dFTLinkAnimCliffQuick_joint27[46];
extern u16 dFTLinkAnimCliffQuick_joint29[40];
extern u16 dFTLinkAnimCliffQuick_joint30[54];

/* Joint pointer table (30 entries, 120 bytes) */
AObjEvent32 * dFTLinkAnimCliffQuick_joints[] = {
	(AObjEvent32 *)dFTLinkAnimCliffQuick_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimCliffQuick_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimCliffQuick_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTLinkAnimCliffQuick_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffQuick_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimCliffQuick_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTLinkAnimCliffQuick_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffQuick_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimCliffQuick_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimCliffQuick_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimCliffQuick_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTLinkAnimCliffQuick_joint17, /* [14] joint 17 */
	NULL, /* [15] NULL */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffQuick_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimCliffQuick_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTLinkAnimCliffQuick_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffQuick_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTLinkAnimCliffQuick_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffQuick_joint26, /* [24] joint 26 */
	NULL, /* [25] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffQuick_joint27, /* [26] joint 27 */
	(AObjEvent32 *)dFTLinkAnimCliffQuick_joint29, /* [27] joint 29 */
	NULL, /* [28] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffQuick_joint30, /* [29] joint 30 */
};

/* Joint 1 */
u16 dFTLinkAnimCliffQuick_joint1[14] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), -1850,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), -1850, 1053,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), -532, 1053,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimCliffQuick_joint2[24] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 929, 0, -214, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 929, 0, -214, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), -359, -308,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 480, -359, -600, -308,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTLinkAnimCliffQuick_joint3[22] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 120, -608, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 120, -12, -608, 56, -157, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -17, -48, 54, 0, 41,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTLinkAnimCliffQuick_joint5[22] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 59, 20, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 59, 38, 20, -2, 227, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 446, 38, 0, -2, 0, -22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTLinkAnimCliffQuick_joint6[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -170, -132, -1282, -64, -278, 211,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -168, 194,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1206, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -38, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -29, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -279, -295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 47, 232, -627, -328,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 295, 639, -936, -582,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1325, 657, -1156, -129, -1793, -551,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1610, 166, -1465, -214, -2039, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1659, 48, -1586, -121, -2233, -194,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTLinkAnimCliffQuick_joint7[34] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -360, 352,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1257, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -945, 359,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -538, 406,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimCliffQuick_joint10[30] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 191, 542, 255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 191, 14, 542, -79, 255, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 291, 99, -12, -133, 684, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 690, 49, -126, -14, -32, -89,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTLinkAnimCliffQuick_joint11[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 441, -8, 82, 34, 320, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 30, -36, 447, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 441, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 462, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 666, -177, -25, 188, 507, -540,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 108, -417, 408, 153, -633, -689,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -357, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 280, -132, -872, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 143, -157, -908, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -456, -98, -35, -179, -978, -69,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLinkAnimCliffQuick_joint12[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -244, 144,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -7, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -66, -562,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1131, -255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -577, 385,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -388, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -216, 172,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimCliffQuick_joint13[22] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -26, -209, 25, 0, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -261, -26, 49, 25, 311, 31,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTLinkAnimCliffQuick_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimCliffQuick_joint17[22] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1697, -12, -536, 51, -339, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1569, -12, -22, 51, -1296, -95,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimCliffQuick_joint18[22] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -85, 217, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -85, 8, 217, -21, 30, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 8, 0, -21, 0, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTLinkAnimCliffQuick_joint19[22] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -133, 245, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -133, 13, 245, -24, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 13, 0, -24, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimCliffQuick_joint21[22] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -28, 0, 0, -174, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -281, 0, 0, 0, 0, 17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTLinkAnimCliffQuick_joint22[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 74, -4, -31, 0, -467, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 171, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -118, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -581, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -746, -166,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1031, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 209, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 205, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, -14, -156, -37, -1077, -45,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTLinkAnimCliffQuick_joint24[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 884, -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 950, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 997, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 885, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 788, -96,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTLinkAnimCliffQuick_joint26[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 737, 6, 38, 1, 13, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -217, -104,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -98, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 495, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 340, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 312, 12, -322, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 364, 51, -126, -28, -399, -76,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTLinkAnimCliffQuick_joint27[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1376, -5, -1476, 13, -1667, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -1376, 21, -1476, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1489, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1667, -196,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2606, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1376, -32, -1552, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1689, -93, -1599, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1755, -65, -1625, -26, -2653, -46,
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTLinkAnimCliffQuick_joint29[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 316, -56,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 260, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 51, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 626, 276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 869, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 917, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 780, -136,
	ftAnimEnd(),
	0x0000,
};

/* Joint 30 */
u16 dFTLinkAnimCliffQuick_joint30[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -645, 10, -102, -1, 354, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 146, -182,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 57, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -565, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -645, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -542, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -295, 149, -77, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -244, -27, 127, 49, -292, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -351, -107, 156, 28, -412, -119,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
