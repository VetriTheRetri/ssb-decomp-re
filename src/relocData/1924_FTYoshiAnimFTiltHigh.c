/* AnimJoint data for relocData file 1924 (FTYoshiAnimFTiltHigh) */
/* 3824 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimFTiltHigh_joint1[70];
extern u16 dFTYoshiAnimFTiltHigh_joint2[90];
extern u16 dFTYoshiAnimFTiltHigh_joint3[60];
extern u16 dFTYoshiAnimFTiltHigh_joint4[86];
extern u16 dFTYoshiAnimFTiltHigh_joint6[10];
extern u16 dFTYoshiAnimFTiltHigh_joint7[200];
extern u16 dFTYoshiAnimFTiltHigh_joint10[72];
extern u16 dFTYoshiAnimFTiltHigh_joint11[156];
extern u16 dFTYoshiAnimFTiltHigh_joint12[80];
extern u16 dFTYoshiAnimFTiltHigh_joint13[10];
extern u16 dFTYoshiAnimFTiltHigh_joint14[34];
extern u16 dFTYoshiAnimFTiltHigh_joint15[32];
extern u16 dFTYoshiAnimFTiltHigh_joint17[38];
extern u16 dFTYoshiAnimFTiltHigh_joint18[160];
extern u16 dFTYoshiAnimFTiltHigh_joint20[80];
extern u16 dFTYoshiAnimFTiltHigh_joint22[168];
extern u16 dFTYoshiAnimFTiltHigh_joint23[242];
extern u16 dFTYoshiAnimFTiltHigh_joint25[272];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimFTiltHigh_joints[] = {
	(u32)dFTYoshiAnimFTiltHigh_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimFTiltHigh_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimFTiltHigh_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimFTiltHigh_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimFTiltHigh_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimFTiltHigh_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimFTiltHigh_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimFTiltHigh_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimFTiltHigh_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimFTiltHigh_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimFTiltHigh_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimFTiltHigh_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimFTiltHigh_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimFTiltHigh_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimFTiltHigh_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimFTiltHigh_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimFTiltHigh_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimFTiltHigh_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF035F, /* [25] END */
};

/* Joint 1 */
u16 dFTYoshiAnimFTiltHigh_joint1[70] = {
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
u16 dFTYoshiAnimFTiltHigh_joint2[90] = {
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
u16 dFTYoshiAnimFTiltHigh_joint3[60] = {
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
u16 dFTYoshiAnimFTiltHigh_joint4[86] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 78, 33, 0, -4, 0, -31,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 600, 329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 534, 76, -164, -27, -403, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 534, -90, -164, -27, -403, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 79, -151, -301, -45, 249, 217,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 79, -301, 249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 79, 106, -301, -36, 249, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 721, 17, -521, 18, -558, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 164, -185, -207, 104, -217, 113,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 164, -207, -217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 164, -7, -207, 17, -217, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 78, -5, 0, 12, 0, 13,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimFTiltHigh_joint6[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 48, 120,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimFTiltHigh_joint7[200] = {
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
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2579, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 697, 0, -705, 0,
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
};

/* Joint 10 */
u16 dFTYoshiAnimFTiltHigh_joint10[72] = {
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
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -792, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1085, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1082, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -864, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, 99,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimFTiltHigh_joint11[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -145, 335, -103, 140, -219, 214,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 738, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 112, 167, 35, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 372, 129, 44, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 371, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 44, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 740, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 738, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 372, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 271, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 767, 230, 138, 492,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1200, 216, 1029, 445,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), 1029, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 1200,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1200, -80, 1029, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 271, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 271, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1039, -315, 454, 196, 1017, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 568, -536, 665, 12, 637, -534,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -33, -270, 479, -43, -51, -389,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 662, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 27, -124, -142, -277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -283, -51, -606, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, 142, 561, -82, -506, 54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -78, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1, 70, -497, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -100, -44, -242, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -145, -44, -103, -24, -219, 22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTYoshiAnimFTiltHigh_joint12[80] = {
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
u16 dFTYoshiAnimFTiltHigh_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 172, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimFTiltHigh_joint14[34] = {
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
u16 dFTYoshiAnimFTiltHigh_joint15[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -190, -7, 0, 6, 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -252, -3, 297, 15, -146, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -252, 2, 297, -11, -146, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -190, 3, 0, -18, 0, 9,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTYoshiAnimFTiltHigh_joint17[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -153, -9, 0, 11, 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -230, -5, 377, -23, -160, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -218, -263, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -230, 3, 377, 13, -160, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -153, 4, 0, -23, 0, 10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimFTiltHigh_joint18[160] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, -61, 5, 22, -3, -197,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -89, 73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 249, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -201, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 117, 382,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 80, 97, 563, 250,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -26, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 617, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 259, 4, 618, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 257, -182, 564, -263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -106, -354, 92, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -451, -172, 435, 171,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 428, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -451, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -298, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -20, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -31, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 421, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 220, 203, 119, -281,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 314, -177,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -130, 140,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -150, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 20, -230, -12, 181,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -159, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 211, 111, 77, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 211, -11, 75, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 187, -25, 28, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 6, -3, -92, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -164, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -9, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, 3, 5, 0, -3, 88,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimFTiltHigh_joint20[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 262, 273,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 535, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 312, -264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 531, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 330, 333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 744, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 441, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 444, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 459, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 393, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 262, -130,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimFTiltHigh_joint22[168] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1614, 28, -83, 29, -263, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 20, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1764, 176, -88, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1996, 110, 118, 106,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1967, -10, 124, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 15, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -107, -340,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1964, -285, 117, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1396, -384, -343, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1195, -102, -628, -260, -112, 115,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -114, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1194, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -628, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -634, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -348, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -117, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1182, -52, -110, -90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1179, 235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -298, -146,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -295, 180,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -137, 227,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 255, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1544, 393,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1966, 207, -59, 117,
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
u16 dFTYoshiAnimFTiltHigh_joint23[242] = {
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
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1223, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1834, -145, 1297, -89, 1006, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1604, -289, 1045, -102, 1104, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 1255, -172, 1092, 22, 857, -121, 8192, 4095, 6144, 2047, 12288, 8191,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1384, 91,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1283, 80, 1155, 83,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 8192, -2730, 6144, -1365, 12288, -5461,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1442, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1624, 160,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 19), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1330, 31, 1195, 96,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1313, -213, 1483, -169,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1800, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1919, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1704, -258, 976, -222, 1179, -279,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 871, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1402, -152, 924, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1398, -4, 919, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1393, 153, 914, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1705, 342, 812, -16, 1282, 374,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1152, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2077, 140, 1664, 140,
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
u16 dFTYoshiAnimFTiltHigh_joint25[272] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 378, 388,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 767, 288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 956, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1166, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1130, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1135, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1166, -567,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -580,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 963, 407,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1203, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1205, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1102, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 633, -250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 325, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 494, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 561, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 475, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -96,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0000, 0xFF43, 0xFA11, 0x0111, 0x0563, 0x0031, 0x2809, 0x0002, 0x068E, 0x011C, 0x2007, 0x0001, 0xFF43, 0xFFB6, 0xFB23, 0xFFED, 0x2007, 0x0001, 0xFF6B, 0xFFA8, 0xF9EA, 0xFFE7, 0x2803, 0x0003, 0xFD30, 0xFFBC, 0x200D, 0x0001, 0xFAF0, 0x008D, 0x07CE, 0x00BD, 0x2809, 0x0002, 0x081E, 0xFFE2, 0x2005, 0x0001, 0xFB05, 0x0004, 0x2805, 0x0002, 0xFAF2, 0x0080, 0x0801, 0x0001, 0x200B, 0x0001, 0xFD35, 0x0268, 0x07CC, 0xFEC7, 0x200F, 0x0001, 0x0200, 0x016C, 0xFBFA, 0xFF41, 0x05AB, 0xFFBE, 0x200F, 0x0001, 0x000D, 0xFF07, 0xF972, 0xFEBD, 0x0746, 0x00CE, 0x2809, 0x0002, 0x071D, 0xFFE2, 0x2007, 0x0001, 0x000D, 0xFFF1, 0xF972, 0xFFF9, 0x2805, 0x0003, 0xF99C, 0xFFE4, 0x2003, 0x0001, 0xFFEE, 0xFFE2, 0x2803, 0x0004, 0xFF4B, 0xFFE6, 0x2009, 0x0001, 0x070B, 0xFFEF, 0x2809, 0x0003, 0x06FD, 0xFF89, 0x0801, 0x0001, 0x2005, 0x0001, 0xF978, 0xFFDD, 0x2805, 0x0004, 0xF9AD, 0xFFF9, 0x0801, 0x0001, 0x200B, 0x0001, 0xFF4C, 0x0059, 0x0622, 0xFF0C, 0x200B, 0x0002, 0x0083, 0x0048, 0x03E4, 0xFF69, 0x200F, 0x0001, 0x008D, 0x000A, 0xF9AC, 0x0000, 0x03E4, 0x0000, 0x2809, 0x0005, 0x050F, 0x007D, 0x2805, 0x0006, 0xFB09, 0x000C, 0x2003, 0x0004, 0x00D5, 0xFFF4, 0x2003, 0x0001, 0x00C9, 0xFFFA, 0x2803, 0x0006, 0x0001, 0xFFF8, 0x2009, 0x0001, 0x05A4, 0x001F, 0x2809, 0x0002, 0x0525, 0xFFE5, 0x2005, 0x0001, 0xFAFC, 0xFFF1, 0x2805, 0x0004, 0xFA76, 0xFFB1, 0x0801, 0x0001, 0x2009, 0x0001, 0x0517, 0xFFFD, 0x2009, 0x0002, 0x0536, 0x0023, 0x200F, 0x0001, 0x0000, 0x0000, 0xFA11, 0xFF9C, 0x0563, 0x002C, 0x0000,
};
