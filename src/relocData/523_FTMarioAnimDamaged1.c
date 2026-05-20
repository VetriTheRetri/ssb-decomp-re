/* AnimJoint data for relocData file 523 (FTMarioAnimDamaged1) */
/* 1696 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimDamaged1_joint1[58];
extern u16 dFTMarioAnimDamaged1_joint2[30];
extern u16 dFTMarioAnimDamaged1_joint4[34];
extern u16 dFTMarioAnimDamaged1_joint5[80];
extern u16 dFTMarioAnimDamaged1_joint7[32];
extern u16 dFTMarioAnimDamaged1_joint8[38];
extern u16 dFTMarioAnimDamaged1_joint10[10];
extern u16 dFTMarioAnimDamaged1_joint11[72];
extern u16 dFTMarioAnimDamaged1_joint12[40];
extern u16 dFTMarioAnimDamaged1_joint13[18];
extern u16 dFTMarioAnimDamaged1_joint15[10];
extern u16 dFTMarioAnimDamaged1_joint16[78];
extern u16 dFTMarioAnimDamaged1_joint18[34];
extern u16 dFTMarioAnimDamaged1_joint20[86];
extern u16 dFTMarioAnimDamaged1_joint21[68];
extern u16 dFTMarioAnimDamaged1_joint23[28];
extern u16 dFTMarioAnimDamaged1_joint24[84];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTMarioAnimDamaged1_joints[] = {
	(AObjEvent32 *)dFTMarioAnimDamaged1_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTMarioAnimDamaged1_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTMarioAnimDamaged1_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTMarioAnimDamaged1_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTMarioAnimDamaged1_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTMarioAnimDamaged1_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTMarioAnimDamaged1_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTMarioAnimDamaged1_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTMarioAnimDamaged1_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTMarioAnimDamaged1_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTMarioAnimDamaged1_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTMarioAnimDamaged1_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTMarioAnimDamaged1_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTMarioAnimDamaged1_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTMarioAnimDamaged1_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTMarioAnimDamaged1_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTMarioAnimDamaged1_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimDamaged1_joint1[58] = {
	ftAnimSetVal(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 540, 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 223, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -16, 537, -148,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -1054,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 509, 0, -352, -1,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 2), -16,
	ftAnimSetValT(FT_ANIM_TRAX, 6), -16,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 482, -209, -389, -55,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 465, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -394, 1,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 1), -148, 1471,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 1), -16,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 540, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 2), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimDamaged1_joint2[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -71, -790, -95,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -185, 0, -308, 0, -80, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -236, 0, -273, 0, 14, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -71, -790, -95,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimDamaged1_joint4[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 208, 258, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -212, 0, 199, 58, -140, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -173, 0, 233, 0, -46, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 201, 0, 170, -69, 64, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 208, 258, 110,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimDamaged1_joint5[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3083, -776, -300, 102, 2944, 1165,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -218, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3859, -282, 4109, 635,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3648, 125, 4216, 112,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -3981, -155, 4451, 53,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -261, -83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1220, -123,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4147, -231, 4532, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4445, -24, 4761, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4196, -27, 4412, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4500, -228, 4578, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4653, -95, 4595, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4692, -38, -1308, -87, 4553, -42,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimDamaged1_joint7[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -182, -111,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -599, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -787, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -781, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -618, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -317, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 134,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimDamaged1_joint8[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 201, -4, 176,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 447, 0, 268, 0, 310, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 214, 0, 388, 0, 407, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 209, -3, 62, 0, -11, -37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 201, -4, 176,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimDamaged1_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -221, 139, -209, 0, 54, -18,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimDamaged1_joint11[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 443, -947, 551, -413, 65, -599,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -503, -481, 138, -229, -533, -327,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -519, -16, 92, -21, -588, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -357, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 11, 25, -600, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 64, 168, -545, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -209, 286, 348, 188, -176, 480,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 511, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 442, 38, 415, 297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 424, 54, 418, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 443, -67, 551, 127, 65, -353,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimDamaged1_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -811, 802,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 405,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -442, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -437, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -768, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, -42,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimDamaged1_joint13[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 625,
	ftAnimSetValT(FT_ANIM_ROTX, 60), 625,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 60), -178, -1, 71, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTMarioAnimDamaged1_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimDamaged1_joint16[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -135, -252, -230, -78, 45, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -216, 90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -549, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 40, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -107, -88,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -158, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -127, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -52, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -556, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -564, 52,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -180, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -168, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -38, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -463, 150, -324, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -264, 164, -386, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -135, 129, -230, 156, 45, 213,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimDamaged1_joint18[34] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 400, -312,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 88, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -40,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 647, 313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 626, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -225,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTMarioAnimDamaged1_joint20[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1396, 64, -1597, -178, -1764, 389,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1101, 143,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1914, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1460, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1853, 273,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2052, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1089, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1024, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1912, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1852, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2086, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 2152, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2172, -127, -1836, -80, -1010, -211,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1552, -250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2013, -33, -1448, -357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1904, 208, -1725, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1396, -156, -1597, 307, -1764, -38,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimDamaged1_joint21[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 248, -97, 156, -178, 64, -92,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -46, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -174, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -110, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -79, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 46, 63,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -57, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -96, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -192, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -287, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -328, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -19, 172, 56, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 248, 268, 156, 110, 64, 8,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimDamaged1_joint23[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 392, 35,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 619, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 674, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 709, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 518, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 392, -125,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimDamaged1_joint24[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1540, -147, -1519, -194, 1399, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1666, 127, 1514, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1714, -261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2042, -224,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -2177, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1432, 122, 1698, 98,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1753, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1398, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1366, 34, -2183, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1467, -105,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1774, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1768, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1698, -244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1261, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1584, -36, 1304, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1540, 43, -1519, 254, 1399, 95,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
