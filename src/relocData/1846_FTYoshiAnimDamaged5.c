/* AnimJoint data for relocData file 1846 (FTYoshiAnimDamaged5) */
/* 2976 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimDamaged5_joint1[16];
extern u16 dFTYoshiAnimDamaged5_joint2[74];
extern u16 dFTYoshiAnimDamaged5_joint3[82];
extern u16 dFTYoshiAnimDamaged5_joint4[80];
extern u16 dFTYoshiAnimDamaged5_joint6[22];
extern u16 dFTYoshiAnimDamaged5_joint7[136];
extern u16 dFTYoshiAnimDamaged5_joint8[62];
extern u16 dFTYoshiAnimDamaged5_joint10[30];
extern u16 dFTYoshiAnimDamaged5_joint11[136];
extern u16 dFTYoshiAnimDamaged5_joint12[54];
extern u16 dFTYoshiAnimDamaged5_joint13[18];
extern u16 dFTYoshiAnimDamaged5_joint14[16];
extern u16 dFTYoshiAnimDamaged5_joint15[56];
extern u16 dFTYoshiAnimDamaged5_joint17[48];
extern u16 dFTYoshiAnimDamaged5_joint18[138];
extern u16 dFTYoshiAnimDamaged5_joint20[60];
extern u16 dFTYoshiAnimDamaged5_joint22[120];
extern u16 dFTYoshiAnimDamaged5_joint23[128];
extern u16 dFTYoshiAnimDamaged5_joint25[56];
extern u16 dFTYoshiAnimDamaged5_joint26[104];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTYoshiAnimDamaged5_joints[] = {
	(AObjEvent32 *)dFTYoshiAnimDamaged5_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTYoshiAnimDamaged5_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTYoshiAnimDamaged5_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTYoshiAnimDamaged5_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTYoshiAnimDamaged5_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTYoshiAnimDamaged5_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTYoshiAnimDamaged5_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTYoshiAnimDamaged5_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTYoshiAnimDamaged5_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTYoshiAnimDamaged5_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTYoshiAnimDamaged5_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTYoshiAnimDamaged5_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTYoshiAnimDamaged5_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTYoshiAnimDamaged5_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTYoshiAnimDamaged5_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTYoshiAnimDamaged5_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTYoshiAnimDamaged5_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTYoshiAnimDamaged5_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTYoshiAnimDamaged5_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTYoshiAnimDamaged5_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimDamaged5_joint1[16] = {
	ftAnimSetVal(FT_ANIM_TRAY), 672,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 30), 608,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimDamaged5_joint2[74] = {
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 30, 48, 0, -23, 177, 25,
	ftAnimSetValBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 187, -67,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -289, -25, 742, 22,
	ftAnimSetValT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 214, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 178, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 170, -2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -331, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 761, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 259, -81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -576, -99,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 91, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -893, -23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 0, -33,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimDamaged5_joint3[82] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -7, 4, -132, -55,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 78, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -624, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -46, 12,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 16, 67, 75,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 256,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 231,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 347,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 250,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -65, -25,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -673, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -119, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 281, -97,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 878, 107,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -101, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 0, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 1161, 22, 0, 28,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimDamaged5_joint4[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 259, -361, -8, 5, -40, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -18, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -527, -6, -11, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -65, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -510, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -108, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -67, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -98, 2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 23, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -8, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 117, 135,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 0, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 0, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 562, 15,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimDamaged5_joint6[22] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 455, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 647, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 723, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 0, -245,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 8), 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimDamaged5_joint7[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1556, 13, -1505, 29, 1135, -53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1656, 65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1646, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1040, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1148, 112,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1992, 169,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1581, 79,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1020, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1625, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1250, -274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 917, -321,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 607, -226, -936, 73, 2167, 96,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1008, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 464, 218, 2184, -345,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1044, 512, 1477, -632,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1489, 287, 920, -388,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1792, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 700, -235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 449, -317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2068, 170, -1180, -115, 65, -251,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2158, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1412, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -126, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -167, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -218, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2144, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 2091, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2054, -36, -1428, -16, -224, -5,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimDamaged5_joint8[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -680, -131,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -761, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -647, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -639, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -607, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -760, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -900, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -726, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -680, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -429, 301,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 214,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -8, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTYoshiAnimDamaged5_joint10[30] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 16, 11, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 156, -125,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 43, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -22, 0, -18, -625, -376,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTYoshiAnimDamaged5_joint11[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 97, 84, 63, 28, -204, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 660, -60, 512, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 118, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 124, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 539, -331, 670, 104, 22, -316,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 167, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3, -367, -509, -378,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -729, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -195, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 125, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 220, 71, -736, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 204, -93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -408, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 116, -80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -360, 27,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 106, -61,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 285, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -296, 82, -347, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 100, 226, -555, -223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 172, -356, 371, 103, -864, -545,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -427, -347, 308, -50, -1646, -438,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -522, -62, 271, -31, -1740, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -494, 31, 202, -11, -1831, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -461, 33, 191, -10, -1833, -1,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimDamaged5_joint12[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -633, -32,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -994, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -915, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -599, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -687, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -901, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -972, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1035, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -843, 517,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 421,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimDamaged5_joint13[18] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY, 30), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 25), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -625, -332,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimDamaged5_joint14[16] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY), -536, -893,
	ftAnimSetValAfter(FT_ANIM_ROTZ), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 21), -536, -893,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -670, -21, -1608, -109,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimDamaged5_joint15[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 244, 4, 0, -20, 0, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 218, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -103, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -187, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -185, 2,
	ftAnimBlock(0, 8),
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -96, -309,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -44, 84, -14, 71,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -490, 4, 38, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 536, 268, 0, 0, 0, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTYoshiAnimDamaged5_joint17[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 45, 17, 0, -7, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 17), 177, -15, -74, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 10, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 9, -1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -387, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 14, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 0, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 89, 89,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, -1,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimDamaged5_joint18[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -287, 77, 109, -396, -315, 377,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -209, -156, -287, -219, 62, 453,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -600, -268, -329, -115, 591, 304,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -620, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -746, -237, 671, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1076, -344, 840, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1436, -192, -643, -19, 1090, 140,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -204, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1460, 59, 1120, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 638, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -996, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -854, 143,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -137, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 535, -94,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 333, 30,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -167, 55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 38, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -161, -18, 378, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 393, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -64, 68,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 19, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -128, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 436, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 236, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 0, 51, 230, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 38, 38, -151, -22, 271, 41,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimDamaged5_joint20[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 198, 482,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 680, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 183, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 247, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 309, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 385, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 375, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 135, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 476, 317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 641, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 687, 46,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimDamaged5_joint22[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 77, -242, -1436, -144, 2181, -152,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1634, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -164, -66, 2029, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -54, 138, 2068, 44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 2025, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 566, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 606, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 91, 25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1630, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1486, 1,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2004, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1821, 74,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 117, 17, -1504, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 201, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1900, -54,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1933, 134,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2153, -126,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 219, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 122, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1936, -277,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1398, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1916, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1852, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 170, 47, -1772, 79, 1290, -108,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimDamaged5_joint23[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1799, 128, 1669, -129, 1326, 173,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1965, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1210, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 1564, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1678, 110,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1869, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2002, 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1954, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1236, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1386, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1799, -68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1715, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1873, -74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1515, -31,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1401, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1262, 10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1467, -67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1077, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1739, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1476, -31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1276, -78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1740, -79,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1443, -38, 1183, 120,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1413, 30, 1665, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1781, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1715, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1642, 72, 1457, 44, 1894, 229,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimDamaged5_joint25[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 783, -23,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 222, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 29, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 289, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 383, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 597, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 642, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 982, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 860, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 615, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 695, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 749, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 670, -78,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTYoshiAnimDamaged5_joint26[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1404, -212, 80, -126, -108, 324,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 703, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 51, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1616, -428,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2262, -504,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2271, 119,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 708, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 456, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 45, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -84, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2190, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -1721, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1746, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1864, -41,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -43, 48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -88, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 427, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -225, -103,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1884, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1577, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1541, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1764, -223, -161, -73, -321, -95,
	ftAnimEnd(),
	0x0000, 0x0000,
};
