/* AnimJoint data for relocData file 1822 (FTYoshiAnimRunBrake) */
/* 3216 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimRunBrake_joint1[12];
extern u16 dFTYoshiAnimRunBrake_joint2[100];
extern u16 dFTYoshiAnimRunBrake_joint3[54];
extern u16 dFTYoshiAnimRunBrake_joint6[38];
extern u16 dFTYoshiAnimRunBrake_joint7[190];
extern u16 dFTYoshiAnimRunBrake_joint10[80];
extern u16 dFTYoshiAnimRunBrake_joint11[170];
extern u16 dFTYoshiAnimRunBrake_joint12[70];
extern u16 dFTYoshiAnimRunBrake_joint13[34];
extern u16 dFTYoshiAnimRunBrake_joint14[10];
extern u16 dFTYoshiAnimRunBrake_joint15[32];
extern u16 dFTYoshiAnimRunBrake_joint17[32];
extern u16 dFTYoshiAnimRunBrake_joint18[166];
extern u16 dFTYoshiAnimRunBrake_joint20[60];
extern u16 dFTYoshiAnimRunBrake_joint22[142];
extern u16 dFTYoshiAnimRunBrake_joint23[158];
extern u16 dFTYoshiAnimRunBrake_joint25[68];
extern u16 dFTYoshiAnimRunBrake_joint26[140];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTYoshiAnimRunBrake_joints[] = {
	(AObjEvent32 *)dFTYoshiAnimRunBrake_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTYoshiAnimRunBrake_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTYoshiAnimRunBrake_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTYoshiAnimRunBrake_joint6, /* [3] joint 6 */
	NULL, /* [4] NULL */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTYoshiAnimRunBrake_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTYoshiAnimRunBrake_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTYoshiAnimRunBrake_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTYoshiAnimRunBrake_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTYoshiAnimRunBrake_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTYoshiAnimRunBrake_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTYoshiAnimRunBrake_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTYoshiAnimRunBrake_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTYoshiAnimRunBrake_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTYoshiAnimRunBrake_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTYoshiAnimRunBrake_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTYoshiAnimRunBrake_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTYoshiAnimRunBrake_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTYoshiAnimRunBrake_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimRunBrake_joint1[12] = {
	ftAnimSetValRate(FT_ANIM_TRAY), 608, -17,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 28), 672, 38,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimRunBrake_joint2[100] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 86, 33, 0, 5, 0, -35, 213, 302, 1, -44,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, -33, 446, 28, 7, -34,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -4, -5, 240, -449, -1, 2,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -2, 0, 0, -523, 2, 27,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 13), -561, -575,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 566, 9,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -4, 1, -247, -133, 23, 214,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 8), 352, 64,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 0, -26, -170, 68,
	ftAnimSetValRateT(FT_ANIM_TRAX, 8), -48, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), -182, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 50, 625, -58, 7, 51, 0, 152, 129, -237,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -89, -61, 0, -2, 0, 35, 30, 152, 20, -96,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimRunBrake_joint3[54] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 446, -6, -76, -13,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -64, 16, 67, 75,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 0, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 160, -24, -134, -1, 0, 15,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 123, -91, 137,
	ftAnimBlock(0, 4),
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 0, 0, 172,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 160, -7, -134, 6, 0, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 16, 24, 0, 19, 0, -1,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimRunBrake_joint6[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -352, 14, 22, -48, 26, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 35, -450, -43, 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 116, -543, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 0, -2, -450, 36, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 78, -31, 0, 40, 0, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimRunBrake_joint7[190] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1497, 127, -1946, 117, 1155, 216,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1511, -427,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1829, 209, 1372, 314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1528, 261, 1785, 391,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 770, -677, -1307, 258, 2154, 492,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 156, -452, -1011, 152, 2771, 464,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1294, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -134, 166, 3084, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 488, 433, 2422, -449,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2102, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 732, 168,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1007, 194,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1280, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1135, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2061, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1970, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1305, 155, -975, 80, 1648, -168,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -912, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1296, -39, 1654, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1241, -114, 1704, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1066, -300, -866, 35, 1875, 297,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -903, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 639, -215, 2300, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1617, 107, 1322, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1591, -369, -888, -36, 1349, 371,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1118, -263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 878, -439, 2065, 431,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 712, -113, 2211, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 651, -11, -1502, -226, 2168, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 689, 478, -1571, -119, 2144, -419,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1607, 459, -1742, -18, 1329, -499,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1608, 0, -1608, 134, 1144, -185,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTYoshiAnimRunBrake_joint10[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -679, -134,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -813, -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1164, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1000, 463,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -237, 496,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -511, -407,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -745, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -459, 368,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -184, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -232, -314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -813, -624,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1482, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1000, 442,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -596, 403,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimRunBrake_joint11[170] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1149, -115, 1996, -63, -2432, 68,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1509, -96, 1805, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2330, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2147, 40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2600, -562,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1565, -368, 1663, -323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2245, -768, 1159, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3103, -497, 1259, 83, -3375, -507,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3673, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1356, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3240, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3257, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -3392, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3661, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -4119, 21,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3409, 4, 1383, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1375, -84,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -3220, 79,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4077, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -3778, -31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1228, -365,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 645, -419,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3152, 33, 388, -152,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 257, -129,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -3223, -53,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3834, -46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3719, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 79, -193,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -197, 112,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3318, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3438, 19, -3473, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3278, 110, -31, 98, -3368, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3216, 61, 0, 31, -3352, 15,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimRunBrake_joint12[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -557, -350,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -701, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -902, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -782, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -867, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -980, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1150, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1230, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -709, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -625, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -496, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -662, -271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1230, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1163, 67,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimRunBrake_joint13[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 769, 1179, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -15, -39, 1692, 13, -696, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -49, 4, 1462, -19, -237, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 45, 6, 1396, -76, 1, 31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 893, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimRunBrake_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1072, 1608, 0, 0, 156, 0,
	ftAnimBlock(0, 28),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimRunBrake_joint15[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -241, 5, 0, -19, 0, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -209, 0, -199, 11, -86, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -220, 1, 255, 10, -110, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -190, -4, 0, -24, 0, 10,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTYoshiAnimRunBrake_joint17[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -132, -11, 0, -11, 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -193, -3, -186, 12, -76, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -213, 2, 305, 11, -125, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -153, 37, 0, -53, 0, 21,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimRunBrake_joint18[166] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, -39, 22, -43, 411, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -40, 63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -139, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 460, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 119, -392,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -710, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 64, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -281, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -90, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -130, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -706, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -675, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -375, -69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -145, 222,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -751, -66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1078, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -197, -67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -168, 122,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 91, 205, -1212, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1032, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 592, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -39, 79,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -192, -135,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1033, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -904, 195,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 494, -162,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -246, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -338, -81,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -85, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -635, 236,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -59, 54,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -306, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -87, 80,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -64, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -25, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, 81, 5, 30, -3, 55,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimRunBrake_joint20[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 594, 534,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1282, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1104, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 909, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 949, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1385, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1311, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 803, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 610, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 328, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 316, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 262, -53,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimRunBrake_joint22[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1722, -246, 174, -205, 78, 102,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -73, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1476, -290, 181, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1141, -112, -76, -213,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1853, 186,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -297, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -95, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -180, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -99, 95,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 180, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1951, 74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1671, -233,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -277, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -262, -76,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1422, -220, 225, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 1087, 146, 360, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -342, -59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -241, 94,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1281, 198, 427, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1669, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 222, -115,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -143, 76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -241, -24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1654, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1594, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 117, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 9, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1614, 20, -83, -93, -263, -22,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimRunBrake_joint23[158] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3, -188, 211, -183, -957, -78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1111, 97,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -236, 236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 28, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 128, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 396, 160, -840, 387,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 139, 188, 449, 32, -337, 254,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -153, -122,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 390, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -330, -71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -716, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -236, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 126, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -660, 100,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -105, 71,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 141, -2, 278, -101,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 4, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 279, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -51, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -7, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 46, -1, 161, 75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 103, -64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -146, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 325, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 170, -191,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 15, -202,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -683, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -330, -71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -16, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -57, -106,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 0, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -444, 264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 16, 0, 0, -154, 289,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimRunBrake_joint25[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 914, 53,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1014, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 734, -336,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 342, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 390, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 773, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 775, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 497, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 531, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 298, -223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1027, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 778, -324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -399,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTYoshiAnimRunBrake_joint26[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1620, 135, -131, 188, -269, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1959, 16, -207, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 57, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -110, -179,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -429, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1937, -13, -91, 44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -319, -54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1976, -61,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -415, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -251, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -375, -62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -659, -22,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1907, -65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1912, 40,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -662, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -341, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -255, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 105, -42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1925, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1916, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -211, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -114, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1877, -107, -88, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1616, -46, -260, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 37, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -37, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1609, -7, -89, -51, -228, 31,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
