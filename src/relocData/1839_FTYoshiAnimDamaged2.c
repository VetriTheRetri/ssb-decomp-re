/* AnimJoint data for relocData file 1839 (FTYoshiAnimDamaged2) */
/* 2496 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimDamaged2_joint1[14];
extern u16 dFTYoshiAnimDamaged2_joint2[120];
extern u16 dFTYoshiAnimDamaged2_joint3[80];
extern u16 dFTYoshiAnimDamaged2_joint4[124];
extern u16 dFTYoshiAnimDamaged2_joint6[22];
extern u16 dFTYoshiAnimDamaged2_joint7[92];
extern u16 dFTYoshiAnimDamaged2_joint10[48];
extern u16 dFTYoshiAnimDamaged2_joint11[108];
extern u16 dFTYoshiAnimDamaged2_joint12[32];
extern u16 dFTYoshiAnimDamaged2_joint13[56];
extern u16 dFTYoshiAnimDamaged2_joint14[26];
extern u16 dFTYoshiAnimDamaged2_joint15[48];
extern u16 dFTYoshiAnimDamaged2_joint17[32];
extern u16 dFTYoshiAnimDamaged2_joint18[46];
extern u16 dFTYoshiAnimDamaged2_joint20[40];
extern u16 dFTYoshiAnimDamaged2_joint22[62];
extern u16 dFTYoshiAnimDamaged2_joint23[86];
extern u16 dFTYoshiAnimDamaged2_joint25[40];
extern u16 dFTYoshiAnimDamaged2_joint26[120];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTYoshiAnimDamaged2_joints[] = {
	(AObjEvent32 *)dFTYoshiAnimDamaged2_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTYoshiAnimDamaged2_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTYoshiAnimDamaged2_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTYoshiAnimDamaged2_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTYoshiAnimDamaged2_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTYoshiAnimDamaged2_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTYoshiAnimDamaged2_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTYoshiAnimDamaged2_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTYoshiAnimDamaged2_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTYoshiAnimDamaged2_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTYoshiAnimDamaged2_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTYoshiAnimDamaged2_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTYoshiAnimDamaged2_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTYoshiAnimDamaged2_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTYoshiAnimDamaged2_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTYoshiAnimDamaged2_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTYoshiAnimDamaged2_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTYoshiAnimDamaged2_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTYoshiAnimDamaged2_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimDamaged2_joint1[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 672, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimDamaged2_joint2[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -258, 0, -96, 0, 12, 3, 22, -7, -55, 14, -104, -133,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 58, 6,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -89, -147, -262, -72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -362, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX, 5), -127, -14, -18, -70,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX, 4), -154, 0, -19, 46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 8, -20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 6), -267, 109,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), -110, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -154, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 15), 30, 233,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 4), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -236, 122,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), 15, 209,
	ftAnimSetValRateT(FT_ANIM_TRAX, 11), 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -63, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -30, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -132, 13,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 3), 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 0, 1, 0, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -89, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 3), 20,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimDamaged2_joint3[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 62, -49, -5, -54, 45, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -96, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -74, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -142, -66,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -28, 41,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 76, 23,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 61, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -273, 50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 119, -24,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 31, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 33, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 0, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 16, -2,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTYoshiAnimDamaged2_joint4[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 49, 14, -214, -163, -84, -3, 4096, -1658, 4096, 760, 4096, 764,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 191, 86, -401, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -268, -92,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 2457, 4710, 4710,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4505, 2867, 2867,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 367, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -311, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -375, 1,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 3276, 4300, 4300,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -268, 36,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 331, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 35, 153,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 12), 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 276, -63,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -12, 54,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 122, -55,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 0, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 84, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 0, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTYoshiAnimDamaged2_joint6[22] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 268, 103,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 496, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 464, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 0, -209,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 10), 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimDamaged2_joint7[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1985, 57, -1416, 169, 1500, -172,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1639, 3, 1010, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1210, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1248, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1306, -89,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1646, -21, 1030, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1921, -163, 1370, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2092, -117, 1563, 138,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1796, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2005, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1397, -103,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1597, 25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1803, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1312, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2037, -29, -1549, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -1737, 27, -1466, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1718, 18, -1476, -9, 1256, -56,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTYoshiAnimDamaged2_joint10[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1075, 148,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -755, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -793, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1144, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1090, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1127, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1055, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -904, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -919, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -808, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, 43,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimDamaged2_joint11[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1607, -5, 1606, -64, -2148, -58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 483, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -2059, -158, -2606, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2243, -91, -2785, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2241, -45, -2774, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2333, -82, -2841, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2729, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2929, -251,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 426, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 411, -77,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2768, -110,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3167, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3209, -228,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -3363, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 325, -86,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -53, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3200, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -3380, -53,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3357, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3357, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3361, -4, -103, -49, -3436, -56,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimDamaged2_joint12[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -861, 23,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -974, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1009, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1085, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1039, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -990, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, -11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimDamaged2_joint13[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -21, -16, 227, -78, 37, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 99, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -112, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -49, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 175, 41,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 392, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -86, 25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 274, -54,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, -3, 0, 9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 0, -7,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimDamaged2_joint14[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -536, 65,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, 0, 0, 156, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -376, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -331, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -705, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -536, 47,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimDamaged2_joint15[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 82, 19, 7, -24, -13, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 153, 0, -67, 0, -139, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 8), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 9), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -65, -74,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), -355,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -190, 34,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTYoshiAnimDamaged2_joint17[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 88, 12, 10, -24, -23, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 131, -78, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -54, -58,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -153, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimDamaged2_joint18[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1595, -70, -1623, 48, -1576, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -1358, -12, -1709, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 1418, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1462, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1579, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1379, -26, -1741, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -1584, -32, -1692, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1602, 23, -1613, -29, -1612, 80,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimDamaged2_joint20[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 486, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 459, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 494, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 648, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 716, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 608, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 535, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 430, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 261, -168,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimDamaged2_joint22[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 22, -22, 1697, -46, 1257, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1445, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -35, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1258, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1266, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1351, -93,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1441, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1683, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -59, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -3, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1247, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1262, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6, 9, 1692, 9, 1344, 82,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimDamaged2_joint23[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 11, 0, -2, 0, -279, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 126, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 105, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 47, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 136, 66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 278, 50,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 128, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -18, -38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 154, 18, 334, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 11, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 8, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -193, -160,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -285, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -35, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -8, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 16, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 13, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -13, 0, 8, -154, 131,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimDamaged2_joint25[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 654, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 642, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 612, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 432, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 401, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 638, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 769, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 617, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -238,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTYoshiAnimDamaged2_joint26[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1597, -15, -35, 51, -383, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1828, -66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 472, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -533, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -643, -93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -637, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1867, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1735, 137,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 525, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 448, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1567, 91, -429, 117,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1494, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -350, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -328, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -128, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1461, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1192, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1042, -56, 486, -30, -29, -69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -50, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1305, -211, -268, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1465, -115, -333, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1630, 0, -303, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1607, 22, -89, -39, -228, 74,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
