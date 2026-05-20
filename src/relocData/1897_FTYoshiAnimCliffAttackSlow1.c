/* AnimJoint data for relocData file 1897 (FTYoshiAnimCliffAttackSlow1) */
/* 1600 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimCliffAttackSlow1_joint1[30];
extern u16 dFTYoshiAnimCliffAttackSlow1_joint2[20];
extern u16 dFTYoshiAnimCliffAttackSlow1_joint3[56];
extern u16 dFTYoshiAnimCliffAttackSlow1_joint4[26];
extern u16 dFTYoshiAnimCliffAttackSlow1_joint5[54];
extern u16 dFTYoshiAnimCliffAttackSlow1_joint7[14];
extern u16 dFTYoshiAnimCliffAttackSlow1_joint8[70];
extern u16 dFTYoshiAnimCliffAttackSlow1_joint9[32];
extern u16 dFTYoshiAnimCliffAttackSlow1_joint11[14];
extern u16 dFTYoshiAnimCliffAttackSlow1_joint12[72];
extern u16 dFTYoshiAnimCliffAttackSlow1_joint13[30];
extern u16 dFTYoshiAnimCliffAttackSlow1_joint14[14];
extern u16 dFTYoshiAnimCliffAttackSlow1_joint15[18];
extern u16 dFTYoshiAnimCliffAttackSlow1_joint16[20];
extern u16 dFTYoshiAnimCliffAttackSlow1_joint18[20];
extern u16 dFTYoshiAnimCliffAttackSlow1_joint19[24];
extern u16 dFTYoshiAnimCliffAttackSlow1_joint21[14];
extern u16 dFTYoshiAnimCliffAttackSlow1_joint23[30];
extern u16 dFTYoshiAnimCliffAttackSlow1_joint24[72];
extern u16 dFTYoshiAnimCliffAttackSlow1_joint26[32];
extern u16 dFTYoshiAnimCliffAttackSlow1_joint27[84];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTYoshiAnimCliffAttackSlow1_joints[] = {
	(AObjEvent32 *)dFTYoshiAnimCliffAttackSlow1_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackSlow1_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackSlow1_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackSlow1_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackSlow1_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackSlow1_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackSlow1_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackSlow1_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackSlow1_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackSlow1_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackSlow1_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackSlow1_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackSlow1_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackSlow1_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackSlow1_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackSlow1_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackSlow1_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackSlow1_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackSlow1_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackSlow1_joint26, /* [24] joint 26 */
	NULL, /* [25] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackSlow1_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTYoshiAnimCliffAttackSlow1_joint1[30] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), -214, 56,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 13, -519,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 8), 13, -9, -519, 377,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 7), -115, 90,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), 0, 35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 0, -4, 0, 164,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimCliffAttackSlow1_joint2[20] = {
	ftAnimSetValRate(FT_ANIM_ROTY), 0, 17,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 672, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), 268,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), 0, -6,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimCliffAttackSlow1_joint3[56] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -914, 28, 0, -1, -194, 35, -455, -13, -133, 6,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 10), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ, 10), -224, 70, -31, -3, -119, 34, 64, 30,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 8), 67, 156,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), -240, -9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -37, 95, 0, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 136, 24,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 33), -7, 23, 29, -8,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTYoshiAnimCliffAttackSlow1_joint4[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 962, -54, 7, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 745, -39, 0, 35, 6, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 368, -38, 536, 42, 0, 0,
	ftAnimBlock(0, 7),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTYoshiAnimCliffAttackSlow1_joint5[54] = {
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 67), 4096, 27, 4096, 126, 4096, 27,
	_FT_ANIM_CMD(11, FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 40,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 478, 353,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 600, 23, 329, -4,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 82, 12, 1, 0, -18, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, 34, 0, -15, 0, -26,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 39), 0, 600, 329,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimCliffAttackSlow1_joint7[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 0, -4,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 80), 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 30,
	ftAnimBlock(0, 11),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimCliffAttackSlow1_joint8[70] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1590, 39, -1859, -16, 1005, 124,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1797, 128,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1416, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1380, 315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1760, 354,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2213, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1633, 111,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1462, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1490, -65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1690, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2215, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 2004, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1380, 52, 1841, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1736, -45, -1357, 22, 1882, 40,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTYoshiAnimCliffAttackSlow1_joint9[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -943, -113,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1319, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1203, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -923, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -772, 271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimCliffAttackSlow1_joint11[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -804, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1525, 16,
	ftAnimBlock(0, 11),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTYoshiAnimCliffAttackSlow1_joint12[72] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 103, 48, 347, -36, 2611, 86,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 504, 211, 209, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 2883, 225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3148, 207,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 3332, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 701, 160, -6, -144,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 812, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 159, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 103, -33, 3307, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 97, 38, 3196, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 610, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 460, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 428, -31, 168, 71, 3125, -70,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimCliffAttackSlow1_joint13[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -854, -63,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -855, 355,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -400, 427,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 200,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -8, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimCliffAttackSlow1_joint14[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -804, 27,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), -625, 16,
	ftAnimBlock(0, 11),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTYoshiAnimCliffAttackSlow1_joint15[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -870, -8, -429, -6, 314, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -1072, 12, -893, -17, 0, -12,
	ftAnimBlock(0, 11),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTYoshiAnimCliffAttackSlow1_joint16[20] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -354, -2, 56, -2, 10, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 31, 12, 7, -1, 1, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5,
	ftAnimBlock(0, 11),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimCliffAttackSlow1_joint18[20] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -589, 2, 122, -5, -12, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 186, 25, 16, -3, -1, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5,
	ftAnimBlock(0, 11),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTYoshiAnimCliffAttackSlow1_joint19[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1748, -6, -1744, -2, -786, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1608, 4, -1570, 41, -1211, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1617, 8, -1528, 41, -1261, -49,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTYoshiAnimCliffAttackSlow1_joint21[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimCliffAttackSlow1_joint23[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -83, 13, -1372, -10, -1272, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), -31, -27, -1334, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1407, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1319, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -44, -12, -1310, 24, -1265, 53,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTYoshiAnimCliffAttackSlow1_joint24[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -623, -114, 173, -277, -339, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -737, -245, -104, -294, -415, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1113, -287, -415, -40, -164, 134,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1046, 276, -463, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -185, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -67, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 122, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -710, 317, 355, 134, -341, 181,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -162, 36, 242, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 33, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 82, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -172, -10, 180, -62, -4, -86,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimCliffAttackSlow1_joint26[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1239, 118,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1356, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1133, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1111, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1174, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 721, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 698, -22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTYoshiAnimCliffAttackSlow1_joint27[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1483, -33, -85, -87, 361, 229,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1738, -330,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -173, -153, 591, 390,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -392, -157, 1142, 494,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -493, -40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1403, -542,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2177, -318,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2262, 367,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -568, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1640, 449, -525, 211, 595, -594,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -18, -164,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1676, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -146, 351,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 447, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -221, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1791, -114, 369, -77, -372, -151,
	ftAnimEnd(),
};
