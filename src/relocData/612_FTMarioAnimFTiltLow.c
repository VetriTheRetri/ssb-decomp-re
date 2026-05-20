/* AnimJoint data for relocData file 612 (FTMarioAnimFTiltLow) */
/* 3568 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimFTiltLow_joint1[110];
extern u16 dFTMarioAnimFTiltLow_joint2[78];
extern u16 dFTMarioAnimFTiltLow_joint4[54];
extern u16 dFTMarioAnimFTiltLow_joint5[190];
extern u16 dFTMarioAnimFTiltLow_joint6[76];
extern u16 dFTMarioAnimFTiltLow_joint7[14];
extern u16 dFTMarioAnimFTiltLow_joint8[70];
extern u16 dFTMarioAnimFTiltLow_joint10[56];
extern u16 dFTMarioAnimFTiltLow_joint11[144];
extern u16 dFTMarioAnimFTiltLow_joint12[46];
extern u16 dFTMarioAnimFTiltLow_joint13[8];
extern u16 dFTMarioAnimFTiltLow_joint15[8];
extern u16 dFTMarioAnimFTiltLow_joint16[176];
extern u16 dFTMarioAnimFTiltLow_joint18[46];
extern u16 dFTMarioAnimFTiltLow_joint20[204];
extern u16 dFTMarioAnimFTiltLow_joint21[208];
extern u16 dFTMarioAnimFTiltLow_joint23[54];
extern u16 dFTMarioAnimFTiltLow_joint24[194];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTMarioAnimFTiltLow_joints[] = {
	(AObjEvent32 *)dFTMarioAnimFTiltLow_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTMarioAnimFTiltLow_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTMarioAnimFTiltLow_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTMarioAnimFTiltLow_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTMarioAnimFTiltLow_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTMarioAnimFTiltLow_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTMarioAnimFTiltLow_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTMarioAnimFTiltLow_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTMarioAnimFTiltLow_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTMarioAnimFTiltLow_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTMarioAnimFTiltLow_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTMarioAnimFTiltLow_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTMarioAnimFTiltLow_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTMarioAnimFTiltLow_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTMarioAnimFTiltLow_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTMarioAnimFTiltLow_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTMarioAnimFTiltLow_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTMarioAnimFTiltLow_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimFTiltLow_joint1[110] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_TRAY), 223, 18, 540, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAY, 9), -1740, -196, 584, 34,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 12), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 7), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 960, 2559,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -1740, 584, 960,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -1740, 584, 960,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -1740, -96, 0, 4, 584, -26, 960, -670,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAY, 12), -2993, -41, 540, -31,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 13), -213, -255,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 4), -604, -388,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 6), -485, 604,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 2), 0, 1406,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 18), -2993,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 42, 72, 533, -3,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 17), 3, 94,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 27, -39, 539, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 27, 539,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 27, 539,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 27, -18, 539, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 12), -2, -16, 540, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimFTiltLow_joint2[78] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -71, -790, -95,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 0, 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 0, -27, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 0, 0, -44, -94, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 0, 0, -177, -266,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 3), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 16), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 0, -177,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 0, -177,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 0, 0, -177, 109,
	ftAnimSetValRateT(FT_ANIM_TRAX, 13), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 12), 0, 71,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTMarioAnimFTiltLow_joint4[54] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 208, -3, 258, -249, 110, -16,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -7, -21, 234, -2, -856, -96,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -7, 234, -856,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -7, 234, -856,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -7, 42, 234, 1, -856, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 540, 7, 257, 0, 70, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 208, -17, 258, 0, 110, 2,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimFTiltLow_joint5[190] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 133, -17, -300, -22, -272, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -167, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 69, -7, -549, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 60, 60, -544, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 190, 0, -935, -547,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 60, -95, -1638, -413, -242, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -233, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 10, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1763, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1765, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1768, 105,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -233, 81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 94, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 61, -18, -1556, 193,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -130, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1175, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 113, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 250, 56,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -170, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -484, -74,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1158, 90, 316, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -848, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -520, -322, 274, 257,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1755, -313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 832, 579,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -970, -60, 1434, 300,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 5), -970,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1755, 0, 1434, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1517, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1595, 27,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -970, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1271, -33,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1536, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1406, -56,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1568, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1513, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1475, 38, -1308, -36, 1336, -70,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTMarioAnimFTiltLow_joint6[76] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -182, -94,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -662, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -662, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1085, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1064, 237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -610, 227,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -610,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -610, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -610, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -631, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -762, -65,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), -762,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -762, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -338, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 156,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimFTiltLow_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -625,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 43), -625, 14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimFTiltLow_joint8[70] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 201, 0, -4, -11, 176, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 169, -3, -635, -29, 202, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 169, -23, -274, 97, 802, 122,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 51, -149, 816,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 169, 59, -274, -62, 802, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 169, -274, 802,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 169, -23, -274, 45, 802, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -133, 1, 319, 8, -123, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 201, 17, -4, -17, 176, 15,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimFTiltLow_joint10[56] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -221, 4, 139, -5, -209, 1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 47, 26, -156, -29, -100, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 47, -156, -100,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 47, -156, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 47, -15, -156, 17, -100, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -159, -8, 71, 9, -184, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -221, -2, 139, 2, -209, 0,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimFTiltLow_joint11[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1164, 30, 1056, 47, -1542, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1135, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1134, -47, -1499, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1259, -64, -1632, -64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1517, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1174, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1169, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1185, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1498, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1508, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1170, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1182, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1230, -80, 1134, -66, -1575, -105,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1117, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1342, -28, -1719, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1286, 65, -1669, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -774, 34, -1202, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -742, 29, -1178, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), -791, -30, -1215, -26,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 1112,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 993, -34,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -827, -47, -1247, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1044, -102, -1426, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 958, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1106, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1082, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1174, -130, 1044, -37, -1555, -129,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTMarioAnimFTiltLow_joint12[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -811, 99,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -711, 296,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -219, 351,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -508, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -671, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -773, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -828, -55,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimFTiltLow_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 625, 0, 0,
	ftAnimBlock(0, 43),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTMarioAnimFTiltLow_joint15[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, -804, 0,
	ftAnimBlock(0, 43),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTMarioAnimFTiltLow_joint16[176] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1473, -8, -1377, -1, -1563, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1711, -140,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1320, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1501, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1315, 143,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1097, -108,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1857, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1253, 97, -1707, 283, -1301, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1516, 132, -1290, 208, -1201, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 1519, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1290, -1201,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1497, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1337, -115,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -1290,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1261, 53,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1561, 113,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1814, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1451, -70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1248, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1216, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1219, -43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1768, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1693, 114,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1386, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1848, -107, -1284, -8, -1642, -141,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1106, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1478, -78, -1669, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1694, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1691, 182,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1868, 34,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1123, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1354, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1898, 2, -1746, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), 1481, -25, -1589, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1459, -21, -1375, -20, -1556, 32,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTMarioAnimFTiltLow_joint18[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 400, -45,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 229, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 193, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 303, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 438, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -38,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTMarioAnimFTiltLow_joint20[204] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -212, 23, -11, 39, -156, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -46, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -81, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 4, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 41, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -22, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -7, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 15, -195, 0, -106, -102, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -397, -203, -236, -118, 312, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -390, 7, -236, 0, 312, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 312, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -293, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -382, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -366, -40,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 271, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 756, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -445, -199,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1085, -241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -294, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -221, -38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1249, -131, 763, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 477, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1068, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -804, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -754, 128, -272, -38, 410, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -548, 240, -297, 121, 523, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -274, 28, -30, 77, 444, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 315, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -490, -188, -142, -86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -610, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -203, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -110, 19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 233, -73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -164, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -569, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -225, 16,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -89, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -2, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -211, 13, 0, 2, -160, 3,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimFTiltLow_joint21[208] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1808, 43, 1421, 0, 1644, -48,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2264, 223,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1428, -92,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4095, 227, 4096, 455, 4096, 455,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1461, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1617, 89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1647, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2462, 156,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2689, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1353, -59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1345, 134,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1625, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2895, 756, 1432, -256,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX, 1), 4202, 653, 1111, -160, 1555, 105, 5120, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 6144, 6144,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1111, 1, 1555, -1,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 4202,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 4562, 116,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1114, 1, 1553, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1140, 115,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 31), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1917, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4691, 109, 2042, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 4793, -64, 2104, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4651, -43, 1855, -172,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 4828, 14, 1775, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1254, 89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1310, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4734, -94, 1669, -91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1554, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 4753, 35,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1310, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1398, 14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1546, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1607, 21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4789, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 4982, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5018, 35, 1415, 16, 1629, 22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTMarioAnimFTiltLow_joint23[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 303, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 343, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 321, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 687, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 727, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 516, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 467, -48,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimFTiltLow_joint24[194] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 89, -45, -93, -9, -212, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 151, 536,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -68, -161, -139, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -278, -563, -258, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -24, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1194, -587, 935, 481,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1452, -183, 1113, 111,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1650, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1159, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1101, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1943, -773, 75, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3198, -616, 355, 135, 688, -204,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 327, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3176, 29, 693, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -3212, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 704, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 435, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 313, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -123, -16,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3244, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -3324, 59,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 395, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -65, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -132, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 211, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3217, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -2904, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2926, 14, -189, -89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2790, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -289, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 232, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -69, -23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2790, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -3108, -20,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -280, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -228, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3127, -18, -92, -22, -220, 7,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
