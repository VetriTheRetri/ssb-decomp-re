/* AnimJoint data for relocData file 534 (FTMarioAnimDamaged7) */
/* 2928 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimDamaged7_joint1[40];
extern u16 dFTMarioAnimDamaged7_joint2[54];
extern u16 dFTMarioAnimDamaged7_joint4[70];
extern u16 dFTMarioAnimDamaged7_joint5[128];
extern u16 dFTMarioAnimDamaged7_joint6[14];
extern u16 dFTMarioAnimDamaged7_joint7[28];
extern u16 dFTMarioAnimDamaged7_joint8[70];
extern u16 dFTMarioAnimDamaged7_joint10[26];
extern u16 dFTMarioAnimDamaged7_joint11[180];
extern u16 dFTMarioAnimDamaged7_joint12[70];
extern u16 dFTMarioAnimDamaged7_joint13[74];
extern u16 dFTMarioAnimDamaged7_joint15[40];
extern u16 dFTMarioAnimDamaged7_joint16[132];
extern u16 dFTMarioAnimDamaged7_joint18[54];
extern u16 dFTMarioAnimDamaged7_joint20[124];
extern u16 dFTMarioAnimDamaged7_joint21[138];
extern u16 dFTMarioAnimDamaged7_joint23[38];
extern u16 dFTMarioAnimDamaged7_joint24[136];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTMarioAnimDamaged7_joints[] = {
	(AObjEvent32 *)dFTMarioAnimDamaged7_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTMarioAnimDamaged7_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTMarioAnimDamaged7_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTMarioAnimDamaged7_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTMarioAnimDamaged7_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTMarioAnimDamaged7_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTMarioAnimDamaged7_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTMarioAnimDamaged7_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTMarioAnimDamaged7_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTMarioAnimDamaged7_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTMarioAnimDamaged7_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTMarioAnimDamaged7_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTMarioAnimDamaged7_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTMarioAnimDamaged7_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTMarioAnimDamaged7_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTMarioAnimDamaged7_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTMarioAnimDamaged7_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTMarioAnimDamaged7_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimDamaged7_joint1[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 600, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 268, 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 536, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 536, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 714, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1161, 273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 2904, 293,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 3216,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimDamaged7_joint2[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 29, -418, -209, -103, -51,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, -418, -103,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 58, -418, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 58, -3, -418, 22, -103, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, -7, 0, 52, 0, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTMarioAnimDamaged7_joint4[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 89, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -14, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 253, 81, -127, -63, -76, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 253, -156, -127, 59, -76, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -60, -156, -7, 59, 69, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -60, -10, -7, -1, 69, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -231, 21, -25, 0, 211, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 357, 73, 0, 3, 0, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 357, -38,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 89, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimDamaged7_joint5[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 364, -75, -915, 345, -125, -420,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 289, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -570, 172, -545, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -570, 31, -545, -505,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -502, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 707, 209, -1555, -505,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 708, 1, -1557, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -1628, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 710, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 752, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 708, -119, -1557, 182,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 321, -115, -913, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -506, 67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -187, 38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 283, -22, -774, 89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 211, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -734, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -167, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -187, -64,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 277, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 705, 438, -294, -207, -761, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1154, 641, -602, -197, -950, -493,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1987, 833, -690, -88, -1748, -798,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimDamaged7_joint6[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimDamaged7_joint7[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -625, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 312, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimDamaged7_joint8[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 127, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 49, -39, 240, 120, -121, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 49, -130, 240, -77, -121, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -212, -130, 84, -77, -65, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -212, -3, 84, -2, -65, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -265, 25, 50, -4, 61, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 268, 66, 0, -6, 0, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 268, -20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 127, 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimDamaged7_joint10[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 53, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 21), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimDamaged7_joint11[180] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -346, 346, 917, 201, -141, -367,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1119, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 0, 173, -509, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 0, -39, -509, -343,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1019, -49, -1195, -343,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1129, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1195, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -923, 116,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 84, 103,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 327, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -810, 57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -795, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 338, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 334, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1142, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1073, -51,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -796, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -873, -197,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 251, -206,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -696, -739,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1019, 22, -1195, -369,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2339, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1118, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1557, -584, 1106, 107,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1862, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1334, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1406, 48, -2345, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1406, -70, -2345, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1842, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1815, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1862, -199,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2746, -674,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1293, -208, -2380, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 990, -187, -2590, -488,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3563, -817, 917, -72, -3358, -767,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimDamaged7_joint12[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, -438,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -447, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -447, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -350, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -338, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -140, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 65,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -85, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -350, -270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -627, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimDamaged7_joint13[74] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 625,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -44, -22, 619, 309,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 95,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 95, -90, -44, 81, 619, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -84, -90, 117, 81, 415, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -84, -1, 117, -21, 415, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -115, 19, -228, -6, 521, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 294, 45, -13, 31, 289, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 251, 47, 22, 1, 292, -41,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 625, 0, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimDamaged7_joint15[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, -804, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 71, 0, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 893, -357, -935, -65, 681, 340,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 893, -935, 681,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 893, -935, 681,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 893, 102, -935, 18, 681, -97,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1608, -804, 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimDamaged7_joint16[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1534, -365, -1612, 460, 1503, -190,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2096, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1152, 105, 1312, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1402, -148, 1663, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2108, 0, -1449, -204, 1696, 154,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -2127, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1811, -184, 1972, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1825, -8, 1979, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1835, -5, 1980, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -1782, 18, 1921, 22,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2105, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1859, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1760, 45, 1963, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1501, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1880, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1754, -113,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1460, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1890, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1912, 60, -1491, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1768, 95, -1335, -2, 1332, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1590, 94, 1505, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1496, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1586, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1533, 56, -1612, -25, 1506, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimDamaged7_joint18[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 891,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 898, 318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 644, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 558, -322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 538, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 232, -269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -116,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTMarioAnimDamaged7_joint20[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -210, 259, -45, 13, 556, -567,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 155, 59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -59, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -11, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 282, 125,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 197, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 167, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 127, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -35, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 1, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 211, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 417, 9,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 103, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -141, 83,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 18, 48, 426, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 159, -54, 334, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -20, 118,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 218, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -10, -62, 613, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 122, -110, 35, 4, 86, -161,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -152, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -31, 291, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -28, -22, 449, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -209, -57, -45, -17, 556, 106,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimDamaged7_joint21[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1585, 468, 1403, -53, 1374, 426,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2060, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1117, -85, 1350, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1756, -358, 1154, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1804, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1257, 33, 1912, -45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1979, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1222, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1210, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1801, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1840, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1990, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 1961, 24,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1809, 82, 1229, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -1211, 35, 1495, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2007, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1917, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1202, 7, 1458, -27, 1776, -125,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1431, -108,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1341, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1666, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1473, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1223, -69, 1547, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1368, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1481, -117, 1413, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1577, -52, 1352, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1585, -8, 1403, 35, 1374, 22,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimDamaged7_joint23[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 932, -925,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -462,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 23), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 460, 302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 605, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 834, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 932, 98,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimDamaged7_joint24[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 148, -140, -170, -328, -183, 359,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 382, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 8, 285, -499, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 719, 145, 22, 274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 299, -144, 48, 27, 390, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 474, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 431, 69, 76, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 180, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 431, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 421, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 214, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 184, -87, 187, -50, 479, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 496, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -284, -24, -139, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -238, 45, -192, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -192, -53, -253, 71, 317, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -345, 67, -49, 37, 633, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -56, 220, -178, -65, 73, -343,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 95, 102, -179, 1, -53, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 147, 26, -175, 4, -132, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 148, 1, -170, 4, -183, -51,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
