/* AnimJoint data for relocData file 544 (FTMarioAnimStunLandU) */
/* 2080 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimStunLandU_joint2[32];
extern u16 dFTMarioAnimStunLandU_joint4[24];
extern u16 dFTMarioAnimStunLandU_joint5[146];
extern u16 dFTMarioAnimStunLandU_joint7[64];
extern u16 dFTMarioAnimStunLandU_joint10[34];
extern u16 dFTMarioAnimStunLandU_joint11[134];
extern u16 dFTMarioAnimStunLandU_joint12[50];
extern u16 dFTMarioAnimStunLandU_joint13[18];
extern u16 dFTMarioAnimStunLandU_joint15[10];
extern u16 dFTMarioAnimStunLandU_joint16[118];
extern u16 dFTMarioAnimStunLandU_joint18[48];
extern u16 dFTMarioAnimStunLandU_joint20[106];
extern u16 dFTMarioAnimStunLandU_joint21[86];
extern u16 dFTMarioAnimStunLandU_joint23[48];
extern u16 dFTMarioAnimStunLandU_joint24[74];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTMarioAnimStunLandU_joints[] = {
	(AObjEvent32 *)dFTMarioAnimStunLandU_joint2, /* [0] joint 2 */
	NULL, /* [1] NULL */
	(AObjEvent32 *)dFTMarioAnimStunLandU_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTMarioAnimStunLandU_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTMarioAnimStunLandU_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTMarioAnimStunLandU_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTMarioAnimStunLandU_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTMarioAnimStunLandU_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTMarioAnimStunLandU_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTMarioAnimStunLandU_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTMarioAnimStunLandU_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTMarioAnimStunLandU_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTMarioAnimStunLandU_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTMarioAnimStunLandU_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTMarioAnimStunLandU_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTMarioAnimStunLandU_joint24, /* [23] joint 24 */
};

/* Joint 2 */
u16 dFTMarioAnimStunLandU_joint2[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAZ), 12, -45,
	ftAnimSetValRate(FT_ANIM_TRAY), 208, 1398,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX), -804, 0, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -71, -20,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 26), -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 1092,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 11), 250, -1447,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAY, 5), -513, 245,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTMarioAnimStunLandU_joint4[24] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 284, 14, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), -45, -18, 44, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -187, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -158, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 6, -457, 156,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimStunLandU_joint5[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1498, -61, -1428, -1, -1745, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1437, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1240, -276, -1574, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 883, -271, -1287, 266,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 673, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -810, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1576, -89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1483, 45,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 647, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 405, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1435, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1545, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -788, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1151, -171,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 411, 62, -1621, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 531, 482, -1796, -41, -1338, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1375, 536, -1704, 120, -1085, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1650, 34, -1516, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1431, -308,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1701, -240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1673, -361, -1422, 458, -1911, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 926, -324, -600, 415, -1618, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1023, 110, -592, 5, -1719, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1411, 96, -567, 12, -2082, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1475, 64, -556, 11, -2159, -76,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimStunLandU_joint7[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1041, -63,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1125, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -908, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -176, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -64, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -539, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -821, -292,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1219, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -998, 260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -443, 344,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTMarioAnimStunLandU_joint10[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 268, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -402, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -268, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 80, 58, 0, 18, 0, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 455, -35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -134,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -134, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimStunLandU_joint11[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1495, 19, 1378, -21, -1739, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1243, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1219, 235, -1320, 335,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -936, 184, -920, 302,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -921, -28, -560, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1402, 126,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1492, 55,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -952, -31, -549, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -687, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -889, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -793, 71, 1554, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -788, -251, 1228, -278,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -762, -293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1247, -546, 945, -77, -1274, -629,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1290, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1881, -397, -2021, -542,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2043, -400, -2358, -625,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2683, -403, 1191, -30, -3272, -534,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1291, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2849, -158, -3427, -126,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -3210, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3526, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -3627, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3244, -33, 1295, 3, -3640, -13,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimStunLandU_joint12[50] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -903, -39,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1118, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1014, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -409, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -296, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -693, -265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -961, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -569, 443,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimStunLandU_joint13[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 714, -1512, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 109, -37, -934, 16, 593, 31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), -268, -1072, 714,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimStunLandU_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimStunLandU_joint16[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -93, 26, -99, -9, -515, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 76, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -139, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -106, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 107, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 26, -12, 299, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 35, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 233, -72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -381, 8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -119, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -90, 37,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -28, -75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -302, 24,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -371, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -338, 180,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -261, 200, -52, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 99, 215, -176, -61, 1, 109,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -293, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 169, 81, -176, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 340, 59, -92, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 381, 40, -90, 1, -397, -13,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimStunLandU_joint18[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 548, 49,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 529, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 298, -260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 111, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 463, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 388, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 167, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 294, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 366, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 294, -72,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimStunLandU_joint20[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 142, -51, -143, -8, -257, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 240, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -73, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -190, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -344, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -384, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -256, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -202, 75,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 250, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 208, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -109, 97,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 519, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -54, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 83, 11,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 510, -135, 217, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 248, -171, 88, -35, 413, 128,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -172, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 168, -129, 474, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -113, -61, 561, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -132, -18, -207, -34, 575, 13,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimStunLandU_joint21[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 52, -14, 37, -1, -759, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 96, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 9, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -622, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -547, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -794, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -817, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -715, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 105, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 202, 8,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 81, -24, -627, -217,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -251, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1150, -259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 176, 55, -1147, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 554, 173, -1152, 25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -138, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 38, 176, 659, 105, -1076, 76,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimStunLandU_joint23[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 667, 44,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 931, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 933, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 343, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 203, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 365,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 934, 471,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 949, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 839, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 669, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 570, -98,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimStunLandU_joint24[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -172, 43, 319, -1, -115, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -171, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -28, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 403, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 370, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 24, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 33, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 71, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 102, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -98, -69, -166, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -68, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -35, -10, -50, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -138, 33, -94, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -52, 86, -54, 13, -101, -7,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
