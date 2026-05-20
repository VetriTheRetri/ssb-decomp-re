/* AnimJoint data for relocData file 771 (FTFoxAnimAttackAirD) */
/* 2352 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimAttackAirD_joint1[18];
extern u16 dFTFoxAnimAttackAirD_joint2[24];
extern u16 dFTFoxAnimAttackAirD_joint4[16];
extern u16 dFTFoxAnimAttackAirD_joint5[130];
extern u16 dFTFoxAnimAttackAirD_joint7[52];
extern u16 dFTFoxAnimAttackAirD_joint8[32];
extern u16 dFTFoxAnimAttackAirD_joint10[10];
extern u16 dFTFoxAnimAttackAirD_joint11[122];
extern u16 dFTFoxAnimAttackAirD_joint12[56];
extern u16 dFTFoxAnimAttackAirD_joint13[20];
extern u16 dFTFoxAnimAttackAirD_joint15[10];
extern u16 dFTFoxAnimAttackAirD_joint16[138];
extern u16 dFTFoxAnimAttackAirD_joint18[62];
extern u16 dFTFoxAnimAttackAirD_joint20[114];
extern u16 dFTFoxAnimAttackAirD_joint21[76];
extern u16 dFTFoxAnimAttackAirD_joint23[38];
extern u16 dFTFoxAnimAttackAirD_joint24[102];
extern u16 dFTFoxAnimAttackAirD_joint25[46];
extern u16 dFTFoxAnimAttackAirD_joint26[58];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTFoxAnimAttackAirD_joints[] = {
	(AObjEvent32 *)dFTFoxAnimAttackAirD_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimAttackAirD_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimAttackAirD_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTFoxAnimAttackAirD_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTFoxAnimAttackAirD_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTFoxAnimAttackAirD_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTFoxAnimAttackAirD_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTFoxAnimAttackAirD_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTFoxAnimAttackAirD_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimAttackAirD_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimAttackAirD_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTFoxAnimAttackAirD_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTFoxAnimAttackAirD_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTFoxAnimAttackAirD_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTFoxAnimAttackAirD_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTFoxAnimAttackAirD_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTFoxAnimAttackAirD_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTFoxAnimAttackAirD_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimAttackAirD_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimAttackAirD_joint1[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 960, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 36), -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimAttackAirD_joint2[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -804, -402,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -4021, -475,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -7238, -256,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 20), -10455,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), -9650,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimAttackAirD_joint4[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), -804,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 36), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), -268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimAttackAirD_joint5[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 279, 686, -282, -1125, -461, -80,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -542, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 965, 343, -1407, -562,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), -1407, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 965,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 965, -59, -1407, 673, -542, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 846, -59, -59, 673, -771, -114,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 846, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -59, 0, -771, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 34), -771, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -59, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 33), -59, 0,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 846,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), 846, -7,
	ftAnimBlock(0, 29),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -59, -57, -771, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -390, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -348, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 830, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 365, -17,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -394, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -319, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 378, -20, -213, 34, -494, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 325, -50, -249, -35, -478, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 277, -47, -284, -34, -457, 21,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimAttackAirD_joint7[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -589,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -589, -294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -589, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -658, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -658, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 32), -658, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -658, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -541, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -365, 266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTFoxAnimAttackAirD_joint8[32] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 178, 268,
	ftAnimSetValBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValT(FT_ANIM_ROTZ, 40), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 0, -4, -804, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 36), 0, 3, 536, 23,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 178, 268,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 10), 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimAttackAirD_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimAttackAirD_joint11[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1976, 400, 1090, 264, 1592, 1114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2376, 200, 1355, 132, 2706, 557,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2376, 0, 1355, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 2706,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 37), 2409,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1355, -731, 2706, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -108, -731, 2493, -106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2493, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -108, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -108, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 33), -108, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 2493,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 32), 2493, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2409, 10, -108, 109, 2493, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 2673, 299, 474, 88, 2923, 352,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3088, 335, 482, -99, 3380, 335,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 3689, 36, 3442, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 109, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 96, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 345, 167,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3691, -52, 3356, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3584, -106, 517, 171, 3200, -155,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTFoxAnimAttackAirD_joint12[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, -661,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -668, -330,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -668, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -668, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -465, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -465, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -465, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 32), -465, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -465, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -733, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -914, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -358, 332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 351,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimAttackAirD_joint13[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 272, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 893, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 36), 893, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimAttackAirD_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimAttackAirD_joint16[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, 24, -1603, 86, -1589, -969,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1632, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1516, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2559, -484,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2559, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1632, -175, -2559, 485,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1281, -175, -1690, -87, -1588, 486,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 3), -1690,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1281, 0, -1586, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 34), 1281, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1586, -1,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 33), -1586,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1692, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 31), -1692,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1281, 51, -1692, 82, -1586, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1383, 175, -1528, 87, -1949, -486,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1632, 110, -1516, 5, -2559, -209,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1585, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1601, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2367, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2222, 135,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1811, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1570, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1581, 22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1618, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1599, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1608, 26, -1603, -2, -1589, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTFoxAnimAttackAirD_joint18[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 5, 1291,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1297, 645,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1297, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1297, -645,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -648,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 33), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 350,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1297, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1194, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 386, -337,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 5,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTFoxAnimAttackAirD_joint20[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -16, 236, -64, 68, 610, -820,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 219, 129, -210, -444,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 242, 0, -279, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -16, 100,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 77, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 3, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 286, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 293, 6, -10, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 34), 293, -6, -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 78, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 33), 77, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 76, 133, 286, -71, -16, -65,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 3, -91, -210, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 344, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 219, -77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 88, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -31, -33, -123, 116,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -67, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 560, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 26, -52, 597, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -16, -43, -64, 2, 610, 12,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimAttackAirD_joint21[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1600, -5, -1613, 10, 1116, -481,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 32), -1608,
	ftAnimSetValRateT(FT_ANIM_ROTX, 42), 1594, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 634, -240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 634, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 24), 680,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 680, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 653, -22,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -1608,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1613, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 634, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1000, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1595, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1600, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1056, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1600, 0, -1613, 0, 1116, 59,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTFoxAnimAttackAirD_joint23[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 626, 574,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1200, 287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1200, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1271, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 1271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 32), 1271, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1271, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 726, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 626, -99,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimAttackAirD_joint24[102] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -1622, -3, 1516, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), -1732,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1732, 79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1695, -37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 1479,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1516, 274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1580, 77, 2029, 261,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1568, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1700, -4, 2039, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 34), -1700, 4, 2039, -9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1566, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 30), -1577, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1695, 49, -1580, -40, 2029, -123,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1739, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1626, -13, 1516, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1629, -1, 1482, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1616, -3, 1511, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1742, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -1733, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1622, -6, -1732, 1, 1516, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTFoxAnimAttackAirD_joint25[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -358, 61, 0, 71, 0, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 427, 12, 498, 1, 192, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 59, -10, 56, -25, 21, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 33, -4, -423, -4, -18, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimAttackAirD_joint26[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 402, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 64, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 719, 11, 0, 8, 0, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 481, -7, 62, 7, 385, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 480, -11, 259, -11, 343, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 96, -36, -332, -70, -300, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 116, 38, -450, 41, -394, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 402, 0, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
