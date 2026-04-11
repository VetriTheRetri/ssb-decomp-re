/* AnimJoint data for relocData file 1709 (FTNessAnimStunLandU) */
/* 2528 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimStunLandU_joint2[32];
extern u16 dFTNessAnimStunLandU_joint4[24];
extern u16 dFTNessAnimStunLandU_joint5[146];
extern u16 dFTNessAnimStunLandU_joint7[64];
extern u16 dFTNessAnimStunLandU_joint10[38];
extern u16 dFTNessAnimStunLandU_joint11[144];
extern u16 dFTNessAnimStunLandU_joint12[54];
extern u16 dFTNessAnimStunLandU_joint13[22];
extern u16 dFTNessAnimStunLandU_joint15[10];
extern u16 dFTNessAnimStunLandU_joint16[118];
extern u16 dFTNessAnimStunLandU_joint18[48];
extern u16 dFTNessAnimStunLandU_joint19[106];
extern u16 dFTNessAnimStunLandU_joint21[86];
extern u16 dFTNessAnimStunLandU_joint22[86];
extern u16 dFTNessAnimStunLandU_joint24[48];
extern u16 dFTNessAnimStunLandU_joint25[186];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimStunLandU_joints[] = {
	(u32)dFTNessAnimStunLandU_joint2, /* [0] joint 2 */
	0x00000000, /* [1] NULL */
	(u32)dFTNessAnimStunLandU_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimStunLandU_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimStunLandU_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTNessAnimStunLandU_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimStunLandU_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimStunLandU_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimStunLandU_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimStunLandU_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimStunLandU_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimStunLandU_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimStunLandU_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimStunLandU_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimStunLandU_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimStunLandU_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimStunLandU_joint25, /* [24] joint 25 */
	0xFFFF023E, /* [25] END */
};

/* Joint 2 */
u16 dFTNessAnimStunLandU_joint2[32] = {
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
u16 dFTNessAnimStunLandU_joint4[24] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 284, 14, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), -45, -18, 44, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -187, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -158, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 6, -457, 156,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimStunLandU_joint5[146] = {
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
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1023, 107, -592, 6, -1719, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1411, 92, -567, 13, -2082, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1475, 64, -556, 11, -2159, -76,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimStunLandU_joint7[64] = {
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
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTNessAnimStunLandU_joint10[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 268, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -402, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -268, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 80, 58, 0, 18, 0, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 455, -35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -134,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -134, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimStunLandU_joint11[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -33, 34, 325, 24, -620, 96,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 234, 329, 3, 496,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 426, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 562, 51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 148, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 716, 292, 650, 440,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 713, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 972, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 83, -41, 1027, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 115, -55, 1021, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 663, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 719, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 815, 71, 54, -5, 982, -50,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 819, -251, 380, 278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 920, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 846, -293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 360, -546, 662, 77, 334, -629,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 317, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -273, -397, -412, -542,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -434, -400, -750, -625,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1074, -403, 417, 30, -1663, -534,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 317, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1241, -158, -1819, -126,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1602, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1917, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2018, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1635, -33, 313, -3, -2031, -13,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimStunLandU_joint12[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -212, -156,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1039, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -994, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -406, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -293, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -693, -265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -961, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -569, 443,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimStunLandU_joint13[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 714, -1512, -100,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 109, -37, -934, 16, 593, 31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), -268, -1072, 714,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimStunLandU_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 75, 68, 30,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimStunLandU_joint16[118] = {
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
u16 dFTNessAnimStunLandU_joint18[48] = {
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

/* Joint 19 */
u16 dFTNessAnimStunLandU_joint19[106] = {
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
u16 dFTNessAnimStunLandU_joint21[86] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -186, -74, 67,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -29, 107, -106, -15, 51, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 135, 64, -121, -5, 34, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 420, -16, -142, -13, -105, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 6, -93, -229, 5, 88, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -416, -42, -88, 18, 0, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -419, 72, -47, 26, -73, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -128, 144, 17, 61, 35, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -130, -76, 75, 75, 42, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -281, -85, 168, -22, -71, -36,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -385, 9, -67,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimStunLandU_joint22[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1661, -14, 1571, 1, 848, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1511, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 1618, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 985, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1060, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 814, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 791, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 893, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1503, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1406, -8,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1689, -24, 981, -217,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1357, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 458, -259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1431, -55, 461, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1054, -173, 456, 25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1470, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1646, 176, 948, -105, 532, 76,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimStunLandU_joint24[48] = {
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

/* Joint 25 */
u16 dFTNessAnimStunLandU_joint25[186] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1436, 43, -1927, 1, -1723, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -1436, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -1637, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 2011, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1979, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 1632, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1641, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1679, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1711, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1510, -69, -1441, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1540, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1572, -10, -1659, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1469, 33, -1702, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1555, 86, -1553, -13, -1710, -7,
	ftAnimEnd(),
	0x400E, 0xFE74, 0xFF98, 0x0109, 0x48E0, 0xFF82, 0xFFAE, 0xFFF4, 0x200F, 0x0003, 0xFE2E, 0x0020, 0xFFA8, 0x0000, 0x00ED, 0xFFDF, 0x200F, 0x0002, 0xFF19, 0x003D, 0xFF99, 0x0006, 0x0060, 0xFFD0, 0x2805, 0x0004, 0xFFCD, 0x0003, 0x200B, 0x0002, 0xFF23, 0xFFED, 0x002B, 0xFFED, 0x200B, 0x0002, 0xFECB, 0xFFCE, 0x0010, 0x0006, 0x200F, 0x0003, 0xFE26, 0xFFD2, 0xFFB2, 0xFFFB, 0x004B, 0x0014, 0x200F, 0x0003, 0xFDB3, 0xFFC0, 0xFFAE, 0x0006, 0x00B7, 0x0020, 0x200F, 0x0001, 0xFD25, 0xFFBF, 0xFFCD, 0x0028, 0x00CC, 0x000E, 0x200F, 0x0002, 0xFCEE, 0x0005, 0x0005, 0xFFEF, 0x00E2, 0x0003, 0x200F, 0x0003, 0xFD41, 0xFFED, 0xFF75, 0xFFF9, 0x00DF, 0x0004, 0x200F, 0x0001, 0xFCA1, 0x000B, 0xFF92, 0xFFD2, 0x00F3, 0xFFEE, 0x200F, 0x0002, 0xFD63, 0x007D, 0xFEE9, 0xFFA1, 0xFFB6, 0xFF5B, 0x200F, 0x0001, 0xFE19, 0x009A, 0xFE72, 0xFFC6, 0xFF03, 0xFF95, 0x380F, 0x0001, 0xFE99, 0xFE73, 0xFEDF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
