/* AnimJoint data for relocData file 1669 (FTNessAnimDash) */
/* 2464 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimDash_joint1[48];
extern u16 dFTNessAnimDash_joint2[28];
extern u16 dFTNessAnimDash_joint4[20];
extern u16 dFTNessAnimDash_joint5[102];
extern u16 dFTNessAnimDash_joint6[42];
extern u16 dFTNessAnimDash_joint7[10];
extern u16 dFTNessAnimDash_joint8[58];
extern u16 dFTNessAnimDash_joint10[10];
extern u16 dFTNessAnimDash_joint11[116];
extern u16 dFTNessAnimDash_joint12[42];
extern u16 dFTNessAnimDash_joint13[38];
extern u16 dFTNessAnimDash_joint15[10];
extern u16 dFTNessAnimDash_joint16[94];
extern u16 dFTNessAnimDash_joint18[48];
extern u16 dFTNessAnimDash_joint19[112];
extern u16 dFTNessAnimDash_joint21[56];
extern u16 dFTNessAnimDash_joint22[108];
extern u16 dFTNessAnimDash_joint24[62];
extern u16 dFTNessAnimDash_joint25[134];
extern u16 dFTNessAnimDash_joint26[42];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTNessAnimDash_joints[] = {
	(AObjEvent32 *)dFTNessAnimDash_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimDash_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimDash_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTNessAnimDash_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTNessAnimDash_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimDash_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNessAnimDash_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNessAnimDash_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTNessAnimDash_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTNessAnimDash_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimDash_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimDash_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTNessAnimDash_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTNessAnimDash_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTNessAnimDash_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTNessAnimDash_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTNessAnimDash_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTNessAnimDash_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTNessAnimDash_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTNessAnimDash_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimDash_joint1[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 537, -26,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX), 0, 0, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 418, 78,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 13), 78,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 534, 203,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAY, 14), 0, 0, 534, -216,
	ftAnimBlock(0, 12),
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 8), -26,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 6), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 1), 418,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 537, 722,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimDash_joint2[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 28,
	ftAnimSetValRate(FT_ANIM_ROTY), -360, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 397, 3, -91, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 386, -5, -89, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 28, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), -360,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTNessAnimDash_joint4[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -158,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimDash_joint5[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1892, 8, -1252, -84, 1955, 75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1363, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1883, 20, 2030, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1851, 250, 1995, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1381, 228, -1219, 71, 2237, 127,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1225, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1394, -9, 2250, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), -1420, -7, 2271, 15,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1228, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1175, 12,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1448, -44, 2313, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1640, -11, 2564, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1653, -578, 2555, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2797, -317, -1172, -81, 2256, -235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2288, 452, -1338, -39, 2085, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1892, 396, -1252, 85, 1955, -129,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimDash_joint6[42] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -476, -123,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -461, 300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 226,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -288, -346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -693, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -476, 216,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimDash_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 23),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimDash_joint8[58] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, 0, 364, 0, -32, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 39, 1, -34, 0, -33, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 13), 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -36, 0, -33, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 89, 32, -32, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 202, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 152, -41, 201, 56, -32, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -10, 0, 364, 0, -32, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTNessAnimDash_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 23),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimDash_joint11[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2805, 203, 571, 28, 3103, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3009, 439, 600, -55, 3245, 368,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3684, -77, 461, -113, 3841, 380,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 4027, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 339, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2853, -406,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2871, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 2885, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4036, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 4043, 15,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 337, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 407, 38,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2910, 39, 4082, 57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 4419, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 3061, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3150, 252, 483, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3566, 559, 590, 38, 4602, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4269, 92, 560, 70, 4455, -316,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3751, 72, 732, 238, 3969, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4414, 662, 1036, 304, 4712, 742,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimDash_joint12[42] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, -115,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -673, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -717, 336,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 354,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -577, -380,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -760, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 202,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimDash_joint13[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 90, 54, 126,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 263, 396, 335,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 396, 335,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 1374,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), 1356,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1220, -136, 225, -56, 231, -34,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 90, 54, 126,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTNessAnimDash_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 23),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimDash_joint16[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -365, 178, -280, 29, -297, -420,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 131, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -250, 137, -718, -409,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4, 84, -1115, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -81, -38, -946, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 134, 2, -81, 1, -930, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -45, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 61, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -834, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -769, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -669, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -17, -17, -984, -131,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -370, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 23, -61, -933, 65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -244, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -854, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -524, 208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -365, -121, -280, 90, -297, 227,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimDash_joint18[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 399, 260,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 660, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 783, -326,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -391,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 347,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 694, 373,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 754, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 680, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 399, -280,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimDash_joint19[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1613, 105, 1596, 1, 1631, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1752, 142, 1687, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1719, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1458, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1567, 68, 1882, 65, 1812, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1671, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1870, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1596, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1594, -35,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1643, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1520, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1862, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1794, -10,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1561, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1632, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1442, -65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1537, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1556, -16, 1768, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1596, 16, 1590, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1521, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1535, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1613, 17, 1596, 5, 1631, 95,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimDash_joint21[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), -66, -196,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -891, -323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1038, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), -1023,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 8, 0, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1038, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -676, 154,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -241, 118,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 54, 104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -66, 284,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimDash_joint22[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1735, 14, 1470, -63, -1816, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1508, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1720, 111, -1818, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1513, 125, -1423, 288,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1477, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1249, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1510, 1, -1252, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1345, -63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1426, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1479, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1612, -65,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1391, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1544, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1403, -53, -1704, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1681, -86, 1319, 11, -1777, -172,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1785, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1426, 78, -2048, -142,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1483, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2036, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1969, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1735, 50, 1470, -13, -1816, 153,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimDash_joint24[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 404, 64,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 468, -202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 263, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 339, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 741, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 920, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 771, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 770, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 679, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 404, -275,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimDash_joint25[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 77, 130, 25, 93, -202, -118,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 253, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 119, -2, -321, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 20, -111, -66, 260,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -84, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -67, -162, 198, 144,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -77, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 222, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 244, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -63, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 84, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -84, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -59, 21,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 205, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 66, -31,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -45, -2, 30, -84,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -52, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -83, -133, 42, -118,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -405, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -237, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 96, 47, 105, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 41, -1, 164, 1, -445, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 51, -41, -352, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 93, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 101, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 77, -23, 25, -26, -202, 149,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimDash_joint26[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 56, -24,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 0, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 458, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 471, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 434, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 458, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 195, -62,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 56,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
