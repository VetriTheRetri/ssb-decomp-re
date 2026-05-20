/* AnimJoint data for relocData file 1926 (FTYoshiAnimFTiltLow) */
/* 3792 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimFTiltLow_joint1[72];
extern u16 dFTYoshiAnimFTiltLow_joint2[90];
extern u16 dFTYoshiAnimFTiltLow_joint3[60];
extern u16 dFTYoshiAnimFTiltLow_joint4[90];
extern u16 dFTYoshiAnimFTiltLow_joint6[10];
extern u16 dFTYoshiAnimFTiltLow_joint7[202];
extern u16 dFTYoshiAnimFTiltLow_joint10[70];
extern u16 dFTYoshiAnimFTiltLow_joint11[152];
extern u16 dFTYoshiAnimFTiltLow_joint12[80];
extern u16 dFTYoshiAnimFTiltLow_joint13[10];
extern u16 dFTYoshiAnimFTiltLow_joint14[34];
extern u16 dFTYoshiAnimFTiltLow_joint15[32];
extern u16 dFTYoshiAnimFTiltLow_joint17[38];
extern u16 dFTYoshiAnimFTiltLow_joint18[156];
extern u16 dFTYoshiAnimFTiltLow_joint20[72];
extern u16 dFTYoshiAnimFTiltLow_joint22[162];
extern u16 dFTYoshiAnimFTiltLow_joint23[238];
extern u16 dFTYoshiAnimFTiltLow_joint25[86];
extern u16 dFTYoshiAnimFTiltLow_joint26[190];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTYoshiAnimFTiltLow_joints[] = {
	(AObjEvent32 *)dFTYoshiAnimFTiltLow_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTYoshiAnimFTiltLow_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTYoshiAnimFTiltLow_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTYoshiAnimFTiltLow_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTYoshiAnimFTiltLow_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTYoshiAnimFTiltLow_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTYoshiAnimFTiltLow_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTYoshiAnimFTiltLow_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTYoshiAnimFTiltLow_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTYoshiAnimFTiltLow_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTYoshiAnimFTiltLow_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTYoshiAnimFTiltLow_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTYoshiAnimFTiltLow_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTYoshiAnimFTiltLow_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTYoshiAnimFTiltLow_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTYoshiAnimFTiltLow_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTYoshiAnimFTiltLow_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTYoshiAnimFTiltLow_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTYoshiAnimFTiltLow_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimFTiltLow_joint1[72] = {
	ftAnimSetVal(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 672, 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 804, 175, 530, -230,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 804, 175, 530, -230,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 446, 155, 477, 375,
	ftAnimSetValT(FT_ANIM_TRAY, 4), 477,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 446, 155, 375,
	ftAnimSetValT(FT_ANIM_ROTY, 3), 446,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 155, 375,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 155, 375,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 804, 175, 530, 0,
	ftAnimSetValT(FT_ANIM_TRAY, 2), 530,
	ftAnimSetValT(FT_ANIM_TRAZ, 13), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX, 1), 804, 175,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX, 1), 804, 175,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY, 11), 0, 0, 672,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimFTiltLow_joint2[90] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -10, -89, -3, 0, -3, 30, 8, 20, 6,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 30, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -493, -82, -93, 0, -165, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -493, 98, -93, 18, -165, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 164, 0, 31, -343, -59,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, -343,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 0, -33,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 9), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -343,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -268, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -343, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 114,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -268, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -268, 22, 0, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, 16, -89, -5, 0, 10,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimFTiltLow_joint3[60] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 16, 0, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 172,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 158, -58, 211,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 158, -58, 211,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 286, -481, -337,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 286, -481, -337,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 286, -481, -337,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 16, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTYoshiAnimFTiltLow_joint4[90] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 78, 33, 0, -4, 0, -31,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 600, 329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 534, 76, -164, -27, -403, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 534, -77, -164, -22, -403, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 149, -128, -276, -37, 118, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 149, -7, -276, -3, 118, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 118, 95, -289, -40, 177, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 721, 9, -521, 16, -558, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 164, -185, -207, 104, -217, 113,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 164, -207, -217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 164, -7, -207, 17, -217, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 78, -5, 0, 12, 0, 13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTYoshiAnimFTiltLow_joint6[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 48, 120,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimFTiltLow_joint7[202] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1718, 23, -1476, 42, 1256, -121,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1302, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1590, 187, 852, -333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1320, 128, 467, -190,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1344, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 472, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1309, 3, 477, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1262, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1320, -155, 467, 283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1654, 204, 1043, 251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -911, 371, -902, 179, 970, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -911, 0, -902, 0, 970, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -911, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 970, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -902,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -998, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -911, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -911, 355, 970, -285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -200, 435, 398, -315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -40, -355, -1114, 47, 340, 285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -911, -824, -902, -9, 970, 365,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1689, -423, -1133, 341, 1070, 120,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1213, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1757, -38, -220, 453,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1765, -6, -227, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1961, -406,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -232, -98, 1215, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -425, -169, 1313, 313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2583, -535, -570, -16, 1841, 473,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -3179, -111, 2434, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -457, 106,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -138, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3253, -58, 2561, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -3333, 4, 2866, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3327, 6, -132, 6, 2864, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTYoshiAnimFTiltLow_joint10[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -764, -181,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -934, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -732, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -732, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -732, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1005, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -864, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -864, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -864, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -864, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1113, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -792, 160,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -792,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1085, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1082, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -864, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, 99,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTYoshiAnimFTiltLow_joint11[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1753, 335, 1711, -140, -1827, 214,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -870, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1496, -167, -1572, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1236, -129, -1563, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1236, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1563, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -868, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -870, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1236, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -840, 230, -1469, 492,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -408, 216, -579, 445,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -408, -579,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -408, -80, -579, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1336, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -569, -315, 1153, -196, -590, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1039, -536, 942, -12, -971, -534,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1642, -270, 1129, 43, -1660, -389,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 946, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1581, -124, -1750, -277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1891, -51, -2214, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1683, 142, 1046, 82, -2114, 54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1687, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1607, 70, -2105, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -1708, -44, -1850, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1753, -44, 1711, 24, -1827, 22,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimFTiltLow_joint12[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1002, -166,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1168, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -974, 348,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -471, 251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -471, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -471, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -471, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -904, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1008, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1008, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1071, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -972, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -732, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -831, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -772, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1027, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1040, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1025, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, 23,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimFTiltLow_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 172, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimFTiltLow_joint14[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -893,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -536, 0, 0, 156, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), -893,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -893, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 0, 297,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 0, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -893, -49,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 13), -893,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimFTiltLow_joint15[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -190, -7, 0, 6, 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -252, -3, 297, 15, -146, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -252, 2, 297, -11, -146, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -190, 3, 0, -18, 0, 9,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTYoshiAnimFTiltLow_joint17[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -153, -9, 0, 11, 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -230, -5, 377, -23, -160, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -218, -263, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -230, 3, 377, 13, -160, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -153, 4, 0, -23, 0, 10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimFTiltLow_joint18[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, -61, 5, 22, -3, -197,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -89, 73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 249, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -201, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 117, 382,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 80, 97, 563, 250,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 65, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 617, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 259, 4, 618, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 257, -148, 564, -375,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -38, -334, -131, -244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 251, 92, -411, -186, 75, 103,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 61, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 251, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -411, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -325, 109,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 75, -98,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -255, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 410, 102,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 329, -229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -191, 133,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 0, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -324, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1, -238, -218, 201,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -148, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 211, 105, 77, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 211, -11, 75, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -159, -8, 187, -25, 28, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -9, 8, 6, -3, -92, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, 3, 5, 0, -3, 88,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimFTiltLow_joint20[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 262, 273,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 535, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 312, -264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 469,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 945, 377,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 761, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 767, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 761, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1110, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 895, -334,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 441, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 443, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 393, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 262, -130,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimFTiltLow_joint22[162] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1614, 28, -83, 29, -263, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 20, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1764, 176, -88, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1996, 110, 118, 106,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1967, -10, 124, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 15, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -94, -337,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1964, -258, 117, -332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1449, -416, -539, -402,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1132, -160, -623, -264, -686, -73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1135, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -704, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -623, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -628, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -354, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1143, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1190, 263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -686, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -352, 245,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -134, 232,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 255, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1570, 387,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1966, 194, -59, 146,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -60, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1959, 2, 255, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1628, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -83, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -91, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -275, 2,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1610, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1604, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1614, 10, -83, 0, -263, 11,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimFTiltLow_joint23[238] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, 285, 1608, 22, 1454, -53,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1985, -30,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1630, 138, 1400, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1884, -165, 1063, -199,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1168, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1833, -47, 1298, -322,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1895, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1239, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1423, -20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1834, 48, 1006, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1992, -172, 1627, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 1489, -251, 1280, -175, 8192, 4095, 6144, 2047, 12288, 8191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 1488, -6, 1277, -17, 8192, -2730, 6144, -1365, 12288, -5461,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1475, -15, 1381, -42, 1245, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1615, 149, 1365, 152,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1441, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 19), 4096, 4096, 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1782, 168, 1531, 105,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1824, -274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1406, -221, 1576, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 998, -268, 1303, -326,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1402, -212, 869, -64, 924, -192,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 871, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1398, -4, 919, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1393, 153, 914, 181,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2077, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 812, -16, 1282, 374,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1152, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1664, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1985, -49, 1563, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2033, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1550, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1622, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1856, -119, 1411, -144,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1692, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1251, 102, 1333, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1545, 74, 1380, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1608, -84, 1608, 62, 1454, 73,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTYoshiAnimFTiltLow_joint25[86] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 378, 388,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 767, 288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 956, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1166, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1130, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1135, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1166, -564,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -583,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 231, 460,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 921, 486,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1204, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1205, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 633, -250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 325, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 494, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 561, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 475, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -96,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimFTiltLow_joint26[190] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -189, -1519, 273, 1379, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1678, 284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -189, -74, -1245, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -149, -88, -1558, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -720, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1296, 141, 1998, 189,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2078, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1275, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1287, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -715, -212, -1294, 264, 1996, 367,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1144, -500, -759, 604, 2812, 628,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1716, -285, -85, 337, 3253, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1716, 12, -85, -3, 3251, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1691, 20, -92, 9, 3390, 90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1797, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 105, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 3417, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3393, -102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2902, -304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1804, 90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1476, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 3, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 12, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2604, -148,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2604, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1466, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1394, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -110, -102, 2660, 59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2903, 125,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -189, 79,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1406, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1607, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3053, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 2925, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2911, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 2943, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1607, 0, -89, 100, 2988, 44,
	ftAnimEnd(),
	0x0000, 0x0000,
};
