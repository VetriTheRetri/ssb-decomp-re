/* AnimJoint data for relocData file 1075 (FTSamusAnimFSmash) */
/* 3104 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimFSmash_joint1[36];
extern u16 dFTSamusAnimFSmash_joint2[30];
extern u16 dFTSamusAnimFSmash_joint4[84];
extern u16 dFTSamusAnimFSmash_joint5[158];
extern u16 dFTSamusAnimFSmash_joint6[64];
extern u16 dFTSamusAnimFSmash_joint7[44];
extern u16 dFTSamusAnimFSmash_joint8[10];
extern u16 dFTSamusAnimFSmash_joint11[36];
extern u16 dFTSamusAnimFSmash_joint12[200];
extern u16 dFTSamusAnimFSmash_joint13[72];
extern u16 dFTSamusAnimFSmash_joint14[30];
extern u16 dFTSamusAnimFSmash_joint16[30];
extern u16 dFTSamusAnimFSmash_joint17[142];
extern u16 dFTSamusAnimFSmash_joint19[72];
extern u16 dFTSamusAnimFSmash_joint21[134];
extern u16 dFTSamusAnimFSmash_joint22[148];
extern u16 dFTSamusAnimFSmash_joint24[64];
extern u16 dFTSamusAnimFSmash_joint25[148];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTSamusAnimFSmash_joints[] = {
	(AObjEvent32 *)dFTSamusAnimFSmash_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTSamusAnimFSmash_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimFSmash_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTSamusAnimFSmash_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTSamusAnimFSmash_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimFSmash_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimFSmash_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimFSmash_joint11, /* [8] joint 11 */
	NULL, /* [9] NULL */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTSamusAnimFSmash_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTSamusAnimFSmash_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTSamusAnimFSmash_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTSamusAnimFSmash_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTSamusAnimFSmash_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTSamusAnimFSmash_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTSamusAnimFSmash_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTSamusAnimFSmash_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTSamusAnimFSmash_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTSamusAnimFSmash_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTSamusAnimFSmash_joint1[36] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1600, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 1189, -388, -642, 517,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1017, -343, 776, 2837,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 1017, 776,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 15, -1505,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 1202, 172, -2, -230,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 1600, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimFSmash_joint2[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 11), -402,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 0, 100,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 27), 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimFSmash_joint4[84] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 0, 37, -214, 46, 89, 25, -53, 50, -12, -18, -6, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 446, 111, 562, 194, 303, 53, 75, 259, -27, -29, 25, 64,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 446, 562, 303, 75, -27, 25,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -49, 16, 39,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, -66, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 2, -16, -361, -20, 16, -11,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 26, -85, -11, 28, 65, -15,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -42, -9, 12, 4, 3, -23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimFSmash_joint5[158] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1132, 4, -1722, 5, 1377, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1029, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -738, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -1429, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1407, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1415, -28, 990, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -706, -202, -1463, 248, 943, 400,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1144, -219, -917, 272, 1792, 424,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1144, -917, 1792,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1125, -126,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1144, 1792,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1144, 127, 1792, -278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -890, 42, 1235, -284,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1357, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1059, -223,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1516, -112,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1269, -119, 1407, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1341, 37, 1126, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1562, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1236, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1000, 196, -1317, -1, 971, -118,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -833, -16, 918, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1383, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1405, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1721, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -851, -20, 925, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -1144, 4, 1311, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1138, 6, 1350, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1132, 5, -1722, -1, 1377, 26,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTSamusAnimFSmash_joint6[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -739, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -734, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -771, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1138, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1138, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1145, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1065, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -983, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -869, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -529, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -503, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -408, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -451, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -712, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, -26,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimFSmash_joint7[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 701, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -312, -78, 0, -26,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 18,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 27), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -49, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), 701, 114,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimFSmash_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 42),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimFSmash_joint11[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, -32, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -384, -96, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -384, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -57, 14, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTSamusAnimFSmash_joint12[200] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 58, 2, -127, -20, -215, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -240, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -31, -49, 67, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -77, -27, 186, 105,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 65, -11, 358, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -196, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -79, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 26, 559, -127, 585, 397, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 381, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1184, 579, 1090, 609,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1184, 0, 1090, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1090, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1184, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1178, -546, 375, -290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 90, -660, 917, -58, -199, -398,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -142, -131, 974, 50, -420, -128,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -192, -59, -493, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1019, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 984, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -290, -180, -615, -198,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -765, -151, -1100, -138,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1049, 64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 939, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -855, -71, -1168, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1096, -81, -1067, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1205, -214, -1125, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1524, -362, 904, 2, -1406, -329,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1370, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1929, -267, -1783, -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -2022, 58, -1845, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1950, 78, -1796, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1560, 19, -1817, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1483, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 1734, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1550, 10, 1736, 2, -1823, -6,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTSamusAnimFSmash_joint13[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, -15,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1062, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1095, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1136, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1183, 565,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 589,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -320,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -646, -456,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -913, -225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1153, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1091, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1117, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1063, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -608, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTSamusAnimFSmash_joint14[30] = {
	ftAnimSetVal(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 425, -203, -64,
	ftAnimSetFlags(FT_ANIM_ROTY),
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 425, -203, -64,
	ftAnimSetFlags(0),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 2, 95, 26,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 430, -23, -16,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 45), 425, -203, -64,
	ftAnimBlock(0, 1),
	ftAnimSetFlagsT(FT_ANIM_ROTY, 26),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTSamusAnimFSmash_joint16[30] = {
	ftAnimSetVal(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 423, 203, 64,
	ftAnimSetFlags(FT_ANIM_ROTY),
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 423, 203, 64,
	ftAnimSetFlags(0),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 5, -100, -27,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 434, 15, 12,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 45), 423, 203, 64,
	ftAnimBlock(0, 1),
	ftAnimSetFlagsT(FT_ANIM_ROTY, 26),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimFSmash_joint17[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 87, -4, -27, -4, -389, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -293, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 117, 25, -533, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 140, 20, -558, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 168, -45, -668, -147,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -304, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 66, -51, -76, 113, -898, -114,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 66, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -76, 0, -898, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -47, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -898, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -817, 49,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 41, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 95, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -763, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -854, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -851, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -642, 29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 90, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 75, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -59, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -27, 1,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -610, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -395, 11,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 81, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 86, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 87, 1, -27, 0, -389, 6,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTSamusAnimFSmash_joint19[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 398, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 389, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 469, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 567, 238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 947, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 947, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 947, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 820, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 559, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 426, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 651, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 779, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 913, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 900, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 487, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTSamusAnimFSmash_joint21[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -75, 1, -28, 3, -41, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 132, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 135, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -156, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -198, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -242, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -232, 114, 96, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -14, 106, 129, -2, -19, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 61, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -18, -1, -19, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -28, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -19, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 109, 113,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 300, 93,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -56, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -45, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 394, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 211, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 52, -5, 95, -100,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 34, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -178, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -158, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -44, 4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -52, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -75, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 17, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -26, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, 0, -28, -2, -41, 2,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimFSmash_joint22[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 226, -4, 160, 5, -49, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 368, 32, -368, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 264, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 303, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 179, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 391, 11, -411, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 366, -38, -541, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 62, 31, 313, -143, -596, 560,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 242, 89, 80, -116, 579, 588,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 242, 0, 80, 0, 579, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 80, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 180, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 579, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 579, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 166, 55, 335, -199,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 167, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 131, -43, 179, -140,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -233, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -12, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 156, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 154, 7,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -246, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -54, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -10, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 221, 10,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 160, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 160, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, 4, 160, 0, -49, 4,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTSamusAnimFSmash_joint24[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 442, 12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 924, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 968, -381,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 160, -404,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 160, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 161, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 160, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 551, 278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 718, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 929, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 932, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 617, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 564, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 448, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTSamusAnimFSmash_joint25[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 142, 0, 193, -6, -213, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -30, -50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -273, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -103, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -182, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -144, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -75, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -64, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 9, 11, -38, 17, -287, 286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -42, -25, -108, -34, 300, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -42, 0, -108, 0, 300, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 20, 64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -4, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 300, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -43, -324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 87, 49, -347, -265,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -671, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 114, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 11, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 206, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -657, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -258, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 114, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 141, 0,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 199, -5, -235, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 195, -3, -219, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 142, 0, 193, -1, -213, 5,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
