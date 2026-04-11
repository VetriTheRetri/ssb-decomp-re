/* AnimJoint data for relocData file 1925 (FTYoshiAnimFTilt) */
/* 3728 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimFTilt_joint1[70];
extern u16 dFTYoshiAnimFTilt_joint2[78];
extern u16 dFTYoshiAnimFTilt_joint3[60];
extern u16 dFTYoshiAnimFTilt_joint4[90];
extern u16 dFTYoshiAnimFTilt_joint6[10];
extern u16 dFTYoshiAnimFTilt_joint7[202];
extern u16 dFTYoshiAnimFTilt_joint10[70];
extern u16 dFTYoshiAnimFTilt_joint11[156];
extern u16 dFTYoshiAnimFTilt_joint12[80];
extern u16 dFTYoshiAnimFTilt_joint13[10];
extern u16 dFTYoshiAnimFTilt_joint14[34];
extern u16 dFTYoshiAnimFTilt_joint15[32];
extern u16 dFTYoshiAnimFTilt_joint17[38];
extern u16 dFTYoshiAnimFTilt_joint18[142];
extern u16 dFTYoshiAnimFTilt_joint20[72];
extern u16 dFTYoshiAnimFTilt_joint22[150];
extern u16 dFTYoshiAnimFTilt_joint23[244];
extern u16 dFTYoshiAnimFTilt_joint25[274];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimFTilt_joints[] = {
	(u32)dFTYoshiAnimFTilt_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimFTilt_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimFTilt_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimFTilt_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimFTilt_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimFTilt_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimFTilt_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimFTilt_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimFTilt_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimFTilt_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimFTilt_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimFTilt_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimFTilt_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimFTilt_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimFTilt_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimFTilt_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimFTilt_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimFTilt_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF0346, /* [25] END */
};

/* Joint 1 */
u16 dFTYoshiAnimFTilt_joint1[70] = {
	ftAnimSetVal(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 672, 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 804, 175, 530, -230,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 804, 175, 530, -230,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 446, 155, 777, 375,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 446, 155, 777, 375,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_TRAY, 3), 446, 777,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 155, 375,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 155, 375,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 804, 175, 530, 0,
	ftAnimSetValT(FT_ANIM_TRAY, 2), 530,
	ftAnimSetValT(FT_ANIM_TRAZ, 13), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX, 1), 804, 175,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX, 1), 804, 175,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY, 11), 0, 0, 672,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTYoshiAnimFTilt_joint2[78] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -10, -89, -3, 0, -3, 30, 8, 20, 6,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 30, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -493, -82, -93, 0, -165, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -493, 98, -93, 18, -165, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 164, 0, 31, 0, 55,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 9), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 10), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 0, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -268, -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -268, 22, 0, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, 16, -89, -5, 0, 10,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimFTilt_joint3[60] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 16, 0, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 172,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 158, -58, 211,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 158, -58, 211,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -196, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -196, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -196, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 286, -481, -337,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 286, -481, -337,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 286, -481, -337,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 16, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTYoshiAnimFTilt_joint4[90] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 78, 33, 0, -4, 0, -31,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 600, 329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 534, 76, -164, -27, -403, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 534, -70, -164, -8, -403, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 182, -117, -208, -14, 25, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 182, 11, -208, -2, 25, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 227, 89, -218, -52, -48, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 721, -12, -521, 2, -558, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 164, -185, -207, 104, -217, 113,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 164, -207, -217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 164, -7, -207, 17, -217, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 78, -5, 0, 12, 0, 13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTYoshiAnimFTilt_joint6[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 48, 120,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimFTilt_joint7[202] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -110, 23, -132, -42, 2864, -121,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -305, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 18, 187, 2461, -333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 287, 128, 2075, -190,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 263, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2081, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -299, -3, 2085, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -346, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 287, -155, 2075, 283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -46, 204, 2651, 251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 697, 371, -705, -179, 2579, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 697, 0, -705, 0, 2579, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 697, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2579, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -705,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -610, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 697, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 697, 355, 2579, -285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1408, 435, 2007, -315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1567, -355, -493, -47, 1948, 285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 697, -824, -705, 9, 2579, 365,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -80, -423, -474, -341, 2679, 120,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2822, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -148, -38, -1387, -453,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -157, -6, -1380, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -352, -406,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1376, 98, 2823, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1183, 169, 2922, 313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -975, -535, -1038, 16, 3450, 473,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1571, -111, 4043, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1151, -106,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1469, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1645, -58, 4170, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1725, 4, 4475, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1718, 6, -1476, -6, 4473, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTYoshiAnimFTilt_joint10[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -764, -181,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -934, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -732, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -732, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -732, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1005, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -864, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -864, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -864,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -864, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1113, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -792, 160,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -792,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1085, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1082, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -864, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, 99,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimFTilt_joint11[156] = {
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
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -408, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -579,
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
	0x0000,
};

/* Joint 12 */
u16 dFTYoshiAnimFTilt_joint12[80] = {
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
u16 dFTYoshiAnimFTilt_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 172, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimFTilt_joint14[34] = {
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
u16 dFTYoshiAnimFTilt_joint15[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -190, -7, 0, 6, 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -252, -3, 297, 15, -146, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -252, 2, 297, -11, -146, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -190, 3, 0, -18, 0, 9,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTYoshiAnimFTilt_joint17[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -153, -9, 0, 11, 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -230, -5, 377, -23, -160, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -218, -263, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -230, 3, 377, 13, -160, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -153, 4, 0, -23, 0, 10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimFTilt_joint18[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, -61, 5, 22, -3, -197,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -89, 73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 258, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -201, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 117, 382,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 80, 95, 563, 251,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 27, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 237, -11, 619, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 257, -97, 564, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 41, -166, 317, -170,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 220, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -75, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 27, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -104, -50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 208, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 222, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -75, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 211, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 242, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 70, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 42, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -20, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -146, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -9, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 187, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 6, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -68, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -92, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, 3, 5, 0, -3, 88,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimFTilt_joint20[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 262, 273,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 535, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 312, -264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 6, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 111, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 333, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 439, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 480, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 504, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 393, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 262, -130,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimFTilt_joint22[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1614, 28, -83, 29, -263, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 21, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1764, 176, -88, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1996, 110, 118, 105,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1965, -10, 120, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 16, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -63, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1964, -201, 117, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1562, -241, -161, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1480, -42, -386, -161, -39, 61,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1487, 18, -88, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -388, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -389, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 41, 145,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1508, 51, -99, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1745, 187, -164, 67,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 173, 107,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 104, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1966, 106, -59, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -201, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1970, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1901, -66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1604, 6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 63, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -83, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -222, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -275, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1614, 10, -83, 0, -263, 11,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimFTilt_joint23[244] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 285, 0, -22, -154, -53,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 376, -30,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -22, -138, -208, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -276, 165, -545, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 225, -39, 309, 320, -607, 65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 317, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 363, 32, -413, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 375, -26, -383, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, -84, 310, 70, -601, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 148, -340, 517, 80, -336, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), -453, -300, 471, -21, -871, -265, 8192, 4095, 6144, 2047, 12288, 8191,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 533, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), -451, -5, -867, -2, 8192, -2730, 6144, -1365, 12288, -5461,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -464, -12, -876, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -301, 159, -731, 138,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 19), 4096, 4096, 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -90, -132, 604, -39, -542, -180,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 420, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -565, -293, -1093, -323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -677, 180, -1189, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -205, 233, 739, 158, -684, 250,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 737, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -210, -4, -689, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -214, 153, -694, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 96, 342, 796, 16, -326, 374,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 455, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 469, 140, 55, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 376, -49, -44, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 425, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -58, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 13, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 247, -119, -196, -144,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 84, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 357, -102, -275, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 62, -74, -228, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -84, 0, -62, -154, 73,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTYoshiAnimFTilt_joint25[274] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 378, 388,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 767, 288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 956, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1166, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1119, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1113, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1166, -556,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -580,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 352,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 712, 554,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1115, 245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1204, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1205, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 633, -250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 325, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 494, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 561, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 475, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -96,
	ftAnimEnd(),
	0x0000, 0x200E, 0xF9B9, 0xFF3F, 0xFFA7, 0xFEEF, 0xFF1C, 0x0031, 0x2809, 0x0002, 0x0046, 0x011C, 0x2007, 0x0001, 0xF8F7, 0xFFB0, 0xFE96, 0x0013, 0x2007, 0x0001, 0xF918, 0xFFAA, 0xFFCF, 0x0019, 0x2803, 0x0004, 0xF734, 0x00DA, 0x200D, 0x0001, 0xFEC9, 0xFF6D, 0x0185, 0x00BA, 0x2809, 0x0002, 0x01CD, 0xFFE5, 0x2005, 0x0001, 0xFEA7, 0xFFF0, 0x2005, 0x0001, 0xFEA8, 0x000F, 0x200D, 0x0001, 0xFEC7, 0xFEDE, 0x0183, 0x003B, 0x200F, 0x0001, 0xF8C5, 0x0164, 0xFC62, 0xFFC9, 0x0245, 0xFF5F, 0x200F, 0x0001, 0xF9FE, 0x009C, 0xFE58, 0x00FA, 0x0041, 0xFF00, 0x2809, 0x0002, 0x00D8, 0x004D, 0x2007, 0x0001, 0xF9FE, 0xFFCC, 0xFE58, 0x0053, 0x2007, 0x0001, 0xF995, 0xFFDE, 0xFF00, 0x0096, 0x2805, 0x0005, 0xFFA8, 0x0022, 0x200B, 0x0001, 0xF9B9, 0x0022, 0x00DE, 0xFFF7, 0x2803, 0x0006, 0xFA49, 0x001B, 0x2009, 0x0002, 0x00E2, 0x000E, 0x2009, 0x0001, 0x00E2, 0xFF86, 0x2009, 0x0001, 0xFFEE, 0xFF17, 0x200D, 0x0001, 0xFFCF, 0x0031, 0xFF10, 0xFED7, 0x2805, 0x0003, 0x000C, 0xFFC3, 0x2009, 0x0001, 0xFD9C, 0xFF47, 0x200B, 0x0001, 0xFA53, 0x000A, 0xFD9C, 0x0000, 0x2803, 0x0004, 0xFA9C, 0xFFF2, 0x2809, 0x0005, 0xFEC7, 0x007D, 0x0801, 0x0001, 0x2005, 0x0001, 0xFF92, 0xFF9A, 0x2805, 0x0009, 0xFF43, 0x004F, 0x0801, 0x0002, 0x2003, 0x0001, 0xFA8E, 0xFFF7, 0x2803, 0x0006, 0xF9BA, 0xFFF8, 0x2009, 0x0001, 0xFF5D, 0x001F, 0x2009, 0x0002, 0xFEDD, 0xFFE5, 0x2009, 0x0001, 0xFECF, 0xFFFD, 0x2009, 0x0002, 0xFEEF, 0x0023, 0x200F, 0x0001, 0xF9B9, 0x0000, 0xFFA7, 0x0064, 0xFF1C, 0x002C, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
