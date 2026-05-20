/* AnimJoint data for relocData file 686 (FTFoxAnimStunLandD) */
/* 2048 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimStunLandD_joint2[42];
extern u16 dFTFoxAnimStunLandD_joint4[18];
extern u16 dFTFoxAnimStunLandD_joint5[118];
extern u16 dFTFoxAnimStunLandD_joint7[42];
extern u16 dFTFoxAnimStunLandD_joint10[22];
extern u16 dFTFoxAnimStunLandD_joint11[152];
extern u16 dFTFoxAnimStunLandD_joint12[68];
extern u16 dFTFoxAnimStunLandD_joint13[46];
extern u16 dFTFoxAnimStunLandD_joint15[10];
extern u16 dFTFoxAnimStunLandD_joint16[74];
extern u16 dFTFoxAnimStunLandD_joint18[56];
extern u16 dFTFoxAnimStunLandD_joint20[68];
extern u16 dFTFoxAnimStunLandD_joint21[80];
extern u16 dFTFoxAnimStunLandD_joint23[40];
extern u16 dFTFoxAnimStunLandD_joint24[92];
extern u16 dFTFoxAnimStunLandD_joint25[20];
extern u16 dFTFoxAnimStunLandD_joint26[24];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTFoxAnimStunLandD_joints[] = {
	(AObjEvent32 *)dFTFoxAnimStunLandD_joint2, /* [0] joint 2 */
	NULL, /* [1] NULL */
	(AObjEvent32 *)dFTFoxAnimStunLandD_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTFoxAnimStunLandD_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTFoxAnimStunLandD_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTFoxAnimStunLandD_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTFoxAnimStunLandD_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTFoxAnimStunLandD_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimStunLandD_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimStunLandD_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTFoxAnimStunLandD_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTFoxAnimStunLandD_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTFoxAnimStunLandD_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTFoxAnimStunLandD_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTFoxAnimStunLandD_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTFoxAnimStunLandD_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTFoxAnimStunLandD_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimStunLandD_joint26, /* [25] joint 26 */
};

/* Joint 2 */
u16 dFTFoxAnimStunLandD_joint2[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ), 804, 0, -76,
	ftAnimSetValRate(FT_ANIM_TRAY), 600, 1756,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 1340, 24,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 26), 0, -13,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 1800, -16,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -16,
	ftAnimSetValRateT(FT_ANIM_TRAY, 12), 198, -1635,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1340, -69,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 4), 804, 189,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTFoxAnimStunLandD_joint4[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 284, 14, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), -158, -10, -45, 0, 44, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 6, 0, 156,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimStunLandD_joint5[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1718, -55, -1428, 19, 1471, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1977, -249, -1424, -94, 1739, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2273, -291, -1597, -72, 1850, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1748, 317,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1195, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2559, -260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2795, -420,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3399, -353, 2360, 304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3503, -88, -1232, -30, 2357, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -3617, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1275, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2363, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 2364, 10,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3611, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -3614, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1267, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -991, 364,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3630, 78, 2378, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3457, -175, 2251, 377,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3982, -169, -485, 218, 3133, 475,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3795, 186, -555, -69, 3202, 68,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimStunLandD_joint7[42] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1041, -54,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1103, 247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -766, 551,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 379,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -200, -348,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -704, -246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -692, 12,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimStunLandD_joint10[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 22), 0, -40, 0, -15,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 4), -402,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -723,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTFoxAnimStunLandD_joint11[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1721, -8, 1378, -10, 1477, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1150, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1594, -116, 1131, -248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1447, -73, 833, -154,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1448, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 809, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 806, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 714, -42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1449, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1453, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1446, 124, 661, 93,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2026, 252, 1170, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1073, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 960, -99,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2207, 175, 1247, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2376, 488, 1311, 397,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3184, 705, 857, 27, 2041, 644,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1409, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3787, 351, 2601, 323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3888, 61, 2688, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2691, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 4023, 238,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1444, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1458, -156, 2750, 257,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3696, 286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 4408, 334, 1130, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 4692, 138, 1244, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4684, -7, 1309, 65, 3779, 83,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimStunLandD_joint12[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -903, 50,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -434, 349,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -594, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -722, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -491, 253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -154, 241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -654, -389,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -787, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -728, 59,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimStunLandD_joint13[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 268, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 178, -24, 0, -6, 0, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -155, -73, -107, -14, 525, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -329, 14, -102, 28, 516, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -66, 115, 63, 19, 856, -99,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 268, 0, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimStunLandD_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimStunLandD_joint16[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -93, 12, -99, -1, -515, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -63, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -125, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -128, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 9, 130,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 452, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -85, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 100, 23,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -124, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -88, 15,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 448, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 263, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 219, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -145, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 106, 5, -86, 2, -162, -17,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimStunLandD_joint18[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 548, 34,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 720, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 613, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 152, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 167, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 363, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 500, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 463, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 292, -170,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimStunLandD_joint20[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 134, -25, -143, 7, -257, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 376, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 141, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -86, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -74, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -48, -21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 528, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 138, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), 8, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -83, -166, -10, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -382, -239, -172, -207, 498, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -561, -179, -424, -252, 419, -79,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimStunLandD_joint21[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 52, -10, 37, 0, -759, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -12, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 94, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -329, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -198, 121,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 209, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -8, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -64, -3,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 205, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 25, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -66, 37, 87, 1, -7, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 9, 347, 98, 142, -148, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 627, 506, 371, 119, -83, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1022, 395, 337, -33, 110, 193,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimStunLandD_joint23[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 667, 27,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 786, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 683, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 96, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 103, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 413, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 464, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 856, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 915, 58,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimStunLandD_joint24[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -159, 33, 319, -5, -115, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 539, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -51, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 11, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -99, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -211, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -149, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 0, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 561, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 646, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -58, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -81, -6,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -18, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -30, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -274, -510, 633, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1051, 190, -90, 15, 325, -364,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 107, 1158, -50, 39, -94, -420,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimStunLandD_joint25[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -804,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 101, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -18, -53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 11), -804,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimStunLandD_joint26[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 450,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -322, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 407, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 448, -90,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -404,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
