/* AnimJoint data for relocData file 1923 (FTYoshiAnimDashAttack) */
/* 3984 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimDashAttack_joint1[44];
extern u16 dFTYoshiAnimDashAttack_joint2[32];
extern u16 dFTYoshiAnimDashAttack_joint3[128];
extern u16 dFTYoshiAnimDashAttack_joint4[98];
extern u16 dFTYoshiAnimDashAttack_joint7[106];
extern u16 dFTYoshiAnimDashAttack_joint8[176];
extern u16 dFTYoshiAnimDashAttack_joint11[76];
extern u16 dFTYoshiAnimDashAttack_joint12[194];
extern u16 dFTYoshiAnimDashAttack_joint13[78];
extern u16 dFTYoshiAnimDashAttack_joint14[16];
extern u16 dFTYoshiAnimDashAttack_joint15[68];
extern u16 dFTYoshiAnimDashAttack_joint16[36];
extern u16 dFTYoshiAnimDashAttack_joint18[40];
extern u16 dFTYoshiAnimDashAttack_joint19[150];
extern u16 dFTYoshiAnimDashAttack_joint21[96];
extern u16 dFTYoshiAnimDashAttack_joint23[162];
extern u16 dFTYoshiAnimDashAttack_joint24[180];
extern u16 dFTYoshiAnimDashAttack_joint26[86];
extern u16 dFTYoshiAnimDashAttack_joint27[172];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTYoshiAnimDashAttack_joints[] = {
	(AObjEvent32 *)dFTYoshiAnimDashAttack_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTYoshiAnimDashAttack_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTYoshiAnimDashAttack_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTYoshiAnimDashAttack_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTYoshiAnimDashAttack_joint7, /* [4] joint 7 */
	NULL, /* [5] NULL */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTYoshiAnimDashAttack_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTYoshiAnimDashAttack_joint11, /* [8] joint 11 */
	NULL, /* [9] NULL */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTYoshiAnimDashAttack_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTYoshiAnimDashAttack_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTYoshiAnimDashAttack_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTYoshiAnimDashAttack_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTYoshiAnimDashAttack_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTYoshiAnimDashAttack_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTYoshiAnimDashAttack_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTYoshiAnimDashAttack_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTYoshiAnimDashAttack_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTYoshiAnimDashAttack_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTYoshiAnimDashAttack_joint26, /* [24] joint 26 */
	NULL, /* [25] NULL */
	(AObjEvent32 *)dFTYoshiAnimDashAttack_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTYoshiAnimDashAttack_joint1[44] = {
	ftAnimSetVal(FT_ANIM_TRAY | FT_ANIM_TRAZ), -26, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimSetValT(FT_ANIM_TRAZ, 8), 1467,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 2), -26,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -941,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 0, 526,
	ftAnimSetValRateT(FT_ANIM_TRAY, 16), 0, -321,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 2562,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 15), 4200, 832,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 832,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 547, 4800, 184,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 184,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 4800,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTYoshiAnimDashAttack_joint2[32] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAY), 746,
	ftAnimSetValRateT(FT_ANIM_TRAY, 7), 600, -55,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 6,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 14), 600, 58,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 6), 746,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 7), 600, -37,
	ftAnimSetValRateT(FT_ANIM_TRAY, 9), 672, 47,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimDashAttack_joint3[128] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), -89,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 13), 89,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), -44,
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 30, -6, -60, -605,
	ftAnimSetValRateT(FT_ANIM_TRAY, 7), 240, 60,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 6,
	ftAnimSetValRateT(FT_ANIM_TRAX, 11), -49, -40,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX, 1), 6,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 12), 44,
	_FT_ANIM_CMD(11, FT_ANIM_ROTZ, 1), 6,
	ftAnimSetValRateBlock(FT_ANIM_TRAZ), 1, -144,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), -156, 55,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 14), -89,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 22, -480,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -30, 5, -60, -669, 43, 561,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 15), -44,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -45, 32, 168, 240, 195, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), 240, -165,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 11), 30, 5, 43, -91,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 13), 89,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), -60, -605,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 7), 240,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 12), 44, 2, -30, -16,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), 1, 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 6), 43, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -89, -19,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), -60, -669,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, -11, 0, 60, 37, 180, 20, -45,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTYoshiAnimDashAttack_joint4[98] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 446, 61, -76, -1, -64, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 16, 67, 75,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 17, 70, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 900, 8, -15, 9, -7, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 511, -75, 0, 3, 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 523, 15, 4, 2, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), 16, -5, 67, -21, 75, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 619, -9, 17, 0, -1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 417, -14, 0, -7, 0, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 446, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -76, -64,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 0, -13, 0, -53, 172, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 223, -47, 0, 8, 0, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 16, -51,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimDashAttack_joint7[106] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -352, -58, 22, -4, 26, -6,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -4, 421, 255,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -4, 421, 255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -775, -43, -25, -1, -31, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -614, 369, 15, 59, -6, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 333, 258, 153, 59, 85, 37, 0, 9, 600, 358, 329, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 419, -9, 255, 12, 143, -12, 0, 0, 600, 0, 329, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 26), 0, 600, 329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 268, 1, 243, -21, 0, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 430, -51, 22, -18, 35, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -352, -47, 22, -4, 26, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -135, 47, -28, -2, -35, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 77, 53, 0, 7, 0, 8,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimDashAttack_joint8[176] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1701, -134, 1443, -28, 1162, -380,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1113, -153,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1305, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 388, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 269, -98,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 364, 272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 982, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1748, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1172, -91,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1341, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 736, 360,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1086, 218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1780, 1, 1172, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1114, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1868, 96,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1367, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1535, 25,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1151, 117,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1600, 32,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1554, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1099, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1986, 86, 1577, -79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 879, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1917, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1701, -159,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1598, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1221, 138,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1495, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 878, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 816, -25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1595, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1545, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1511, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1723, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 781, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1092, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1119, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1152, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1498, -47, 1740, 17, 1256, 103,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTYoshiAnimDashAttack_joint11[76] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -698, 509,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -188, 345,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -648, -287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -911, -241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1173, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1104, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -384, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -212, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -250, -276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -736, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -766, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTYoshiAnimDashAttack_joint12[194] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1530, 66, -1211, -51, 782, -112,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1356, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1212, 112, 258, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1087, -23, 187, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1258, -280, 357, 386,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1649, -226, -1277, 4, 961, 369,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1732, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1435, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1096, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1188, 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1142, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1714, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1692, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1449, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1665, -66,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1189, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1246, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1554, 251,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1932, 106,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1722, -71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2056, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1749, 39, 1962, -128,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1347, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1675, -231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1499, -126,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1265, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2005, 62, -1288, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1251, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1826, 37,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1205, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1435, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1282, -114,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1648, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1750, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1546, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1523, -27, -1652, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1713, -37, -1490, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1275, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1272, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1753, -39, -1505, -14, 1389, 116,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimDashAttack_joint13[78] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -375, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -531, -422,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -852, -321,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1470, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1372, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -641, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -845, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -965, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1120, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1082, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, 79,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimDashAttack_joint14[16] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 172, 0, 0,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 37), 0, 0, 0,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimDashAttack_joint15[68] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 156, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1188, -91, -893, -236, 0, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -2080, -106, -988, -5, 894, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -2362, 7, -949, 5, 580, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1993, 15, -921, 3, 308, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -2160, 150, -899, 1, 1308, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -790, 235, -905, 0, 136, -227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -748, 25, -902, 1, -58, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -536, 30, -894, 1, 0, 8,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTYoshiAnimDashAttack_joint16[36] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -268,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 89, 32,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 1,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 89, -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 89, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -190, -56,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimDashAttack_joint18[40] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -178, -8,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 4,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 27), 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -178, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -178, -10, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -153, 2, 0, 0,
	ftAnimBlock(0, 7),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTYoshiAnimDashAttack_joint19[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1608, 0, 1590, 3, 2019, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1618, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1549, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1944, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1614, -319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1304, -353,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 908, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1323, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1609, -33, 1213, -224,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1420, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 652, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1529, 28, 625, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1589, -50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1450, 189,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1497, 72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1544, 24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1636, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1605, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1629, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1594, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1717, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1950, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2005, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2070, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1567, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1603, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2131, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1610, -1, 1825, -253,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1620, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1623, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1403, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1614, 6, 1603, 0, 1604, 200,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTYoshiAnimDashAttack_joint21[96] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 288, 457,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 922, 465,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1335, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1174, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1383, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1337, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 540, -254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 255, -266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 6, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 262, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 239, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 292,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 585, 414,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 829, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1019, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 930, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 649, -333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 262, -387,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTYoshiAnimDashAttack_joint23[162] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 102, -33, -1753, 36, -1534, -99,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -20, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1373, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1894, -259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2153, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2188, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2000, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2329, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -53, -22, -2394, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 20, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2140, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2149, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1932, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1290, 52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1565, -39,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 15, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 50, -24,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1599, -30, -1790, 136,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1773, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1674, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1859, -148,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1768, 146,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 29, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 51, -20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1758, 29, -1619, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1551, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1769, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2046, -182,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2141, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 26, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 5, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2176, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2021, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6, 0, -1524, 27, -1872, 149,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTYoshiAnimDashAttack_joint24[180] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -405, 189, -414, 197, -719, -73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 156, -123,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 180, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -785, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -697, 300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -67, -140, -184, 451,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -45, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 87, -71, 205, 367,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 142, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 550, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 535, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 557, 51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -31, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 80, 50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 149, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 193, -48,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 594, -112,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 73, -236,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 139, -43, 99, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 92, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -76, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -141, -250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -818, -372,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1172, -216,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -855, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 104, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 20, -60,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -32, 50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 100, -38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -656, 201,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 0, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -35, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 26, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -87, -99,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -227, 22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 55, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -55, 0, -26, -154, 73,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimDashAttack_joint26[86] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 914, -87,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 965, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1039, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 521, -455,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -257,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 348, 270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 540, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1001, 267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1243, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 967, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 877, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 570, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 432, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 410, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 608, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 602, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -223,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTYoshiAnimDashAttack_joint27[172] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 160, -116, 1011, 235, 1432, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -49, -17, 1764, 38, 1350, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -51, 53, 1771, -22, 1263, -237,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 130, -87, 1754, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 875, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1000, 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1411, 322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1645, 283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1, -84, 1817, 28, 1979, 242,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -51, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1850, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2129, 106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2018, -220,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -64, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 283, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1893, 26, 1724, -262,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1228, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1685, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 208, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -35, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1218, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1234, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1428, 125,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1242, -40,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1684, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1736, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1211, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1192, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -49, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 0, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1097, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1234, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 1697, -38, 1379, 144,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
