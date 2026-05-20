/* AnimJoint data for relocData file 2093 (FTPikachuAnimDownSpecialStartAir) */
/* 2544 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimDownSpecialStartAir_joint1[38];
extern u16 dFTPikachuAnimDownSpecialStartAir_joint2[46];
extern u16 dFTPikachuAnimDownSpecialStartAir_joint3[46];
extern u16 dFTPikachuAnimDownSpecialStartAir_joint5[42];
extern u16 dFTPikachuAnimDownSpecialStartAir_joint6[110];
extern u16 dFTPikachuAnimDownSpecialStartAir_joint7[56];
extern u16 dFTPikachuAnimDownSpecialStartAir_joint8[36];
extern u16 dFTPikachuAnimDownSpecialStartAir_joint9[10];
extern u16 dFTPikachuAnimDownSpecialStartAir_joint10[44];
extern u16 dFTPikachuAnimDownSpecialStartAir_joint11[44];
extern u16 dFTPikachuAnimDownSpecialStartAir_joint13[42];
extern u16 dFTPikachuAnimDownSpecialStartAir_joint14[106];
extern u16 dFTPikachuAnimDownSpecialStartAir_joint16[46];
extern u16 dFTPikachuAnimDownSpecialStartAir_joint17[96];
extern u16 dFTPikachuAnimDownSpecialStartAir_joint19[48];
extern u16 dFTPikachuAnimDownSpecialStartAir_joint21[88];
extern u16 dFTPikachuAnimDownSpecialStartAir_joint22[98];
extern u16 dFTPikachuAnimDownSpecialStartAir_joint24[56];
extern u16 dFTPikachuAnimDownSpecialStartAir_joint25[96];
extern u16 dFTPikachuAnimDownSpecialStartAir_joint26[72];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTPikachuAnimDownSpecialStartAir_joints[] = {
	(AObjEvent32 *)dFTPikachuAnimDownSpecialStartAir_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTPikachuAnimDownSpecialStartAir_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTPikachuAnimDownSpecialStartAir_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTPikachuAnimDownSpecialStartAir_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTPikachuAnimDownSpecialStartAir_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTPikachuAnimDownSpecialStartAir_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTPikachuAnimDownSpecialStartAir_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTPikachuAnimDownSpecialStartAir_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTPikachuAnimDownSpecialStartAir_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTPikachuAnimDownSpecialStartAir_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTPikachuAnimDownSpecialStartAir_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTPikachuAnimDownSpecialStartAir_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTPikachuAnimDownSpecialStartAir_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTPikachuAnimDownSpecialStartAir_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTPikachuAnimDownSpecialStartAir_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTPikachuAnimDownSpecialStartAir_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTPikachuAnimDownSpecialStartAir_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTPikachuAnimDownSpecialStartAir_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTPikachuAnimDownSpecialStartAir_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTPikachuAnimDownSpecialStartAir_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTPikachuAnimDownSpecialStartAir_joint1[38] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1114, -108,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), -26, 33, -28, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 942, -134, -300, -177,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -12,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), 920, 59, -326, 95,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1084, 262, 106, 1642,
	ftAnimSetValRateBlock(FT_ANIM_TRAZ), 118, 31,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 1084, -200, 118, -5,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimDownSpecialStartAir_joint2[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 999, -124, 300,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -95, -61, 65, 9, 23, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -177, 17, 65, 6, 23, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 218, 92, 175, 90, 35, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6, -52, 245, 17, 43, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 6, 245, 43,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimDownSpecialStartAir_joint3[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -173, 58, -73,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 261, 24, 0, -3, 0, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 296, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 197, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -122, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -122, 0, 0, -23, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTPikachuAnimDownSpecialStartAir_joint5[42] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 199, -70, 479,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 323, 89, -32, 39, 296, -357,
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 223, -14, -59, -5, 380, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), 293, -45, 324,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 518, 493, 78, 230, 175, -342,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 518, 78, 175,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimDownSpecialStartAir_joint6[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1620, 176, -1551, -43, 797, 85,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1730, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1797, 446, 883, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2513, 390, 779, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2578, 20, -1965, -110, 1002, 113,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1941, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2554, -23, 1006, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), 2320, 0, 944, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1931, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), -1782, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1739, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2322, 33, -1557, 269, 941, -83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 511, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2386, 226, -1200, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2775, 231, -1290, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2805, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1312, -10, 517, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1312, 11, 524, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2775, -29, -1290, 21, 511, -12,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimDownSpecialStartAir_joint7[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -758, 18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -740, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -396, 370,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 0, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -329, -320,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -651, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -87, 325,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -87, -77,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPikachuAnimDownSpecialStartAir_joint8[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -478, -335, -28,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 261, 40, 0, 17, 0, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 286, -15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -35, -64,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -35,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimDownSpecialStartAir_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1598, -1559, 4035, 39, 48, 495,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimDownSpecialStartAir_joint10[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -132, 170, 229,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 317, -5, -12, -16, 22, -23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -190, -13, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 317, 25, -12, -16, 22, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 67, -49, -177, -32, 306, 56,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 67, -177, 306,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTPikachuAnimDownSpecialStartAir_joint11[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3, -171, -270,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 204, -33, 15, 16, -23, 27,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -366, 12, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 204, 42, 15, 19, -23, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 59, -28, 211, 39, -316, -58,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 59, 211, -316,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTPikachuAnimDownSpecialStartAir_joint13[42] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -469, 245, 91,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -411, 647, -12, -1092, 273, 816,
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -290, 51, -58, -24, 317, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), -303, -65, 316,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -519, -385, 43, 170, 183, -225,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -519, 43, 183,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimDownSpecialStartAir_joint14[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 803, -46, 1485, 52, 717, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 683, 72, 1704, 149, 783, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 903, 110, 1836, 65, 986, 101,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1820, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 901, -5, 988, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 894, -7, 990, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 904, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 797, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1819, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), 1718, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1674, -117,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1220, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 870, -87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 473, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 838, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 645, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 601, -10, 1208, -3, 442, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 624, 22, 1214, 8, 457, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 646, 22, 1224, 10, 475, 17,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimDownSpecialStartAir_joint16[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -428, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -328, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -164, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 10,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimDownSpecialStartAir_joint17[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1606, -25, 1849, 176, 629, 298,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1630, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2025, 65, 927, 442,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1979, -30, 1514, 319,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 1973, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1567, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1586, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 1430, -27,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1616, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 1498, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1495, 120, 1970, -38, 1407, -254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1739, 81, 1896, 7, 922, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1657, -54, 1984, 42, 1414, 266,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1614, 13, 1980, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1456, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1474, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1657, 43, 1984, 4, 1414, -60,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimDownSpecialStartAir_joint19[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 932, 18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 950, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 682, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 620, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 593, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 611, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 596, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 281, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 224, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 203, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 281, 78,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPikachuAnimDownSpecialStartAir_joint21[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 230, 26, 39, 236, 585, -326,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -9, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 256, -298, 275, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -366, -341, 241, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 244, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -427, -37, -14, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 93, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -441, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -85, 3,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 105, 82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 575, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -101, -74, 205, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 224, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -233, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -237, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -236, -4, 533, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -246, -9, 214, -9, 444, -88,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimDownSpecialStartAir_joint22[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 202, -685, 535, -139, -780, -720,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -483, -10, 395, -28, -1500, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 180, 351, 478, -1, -659, 517,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 348, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 219, 36, -465, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 253, 28, -362, 93,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), -10, -18, -594, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 310, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 13), 356, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -27, -64, 353, 2, -611, -125,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 358, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -138, 128, -845, 266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 230, 207, -79, 425,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 255, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -44, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 199, -56, 387, 28, -132, -88,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimDownSpecialStartAir_joint24[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 601, 573,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1175, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 693, -317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 430, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 331, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 702, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 733, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 766, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 781, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 486, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 383, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 405, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 486, 80,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimDownSpecialStartAir_joint25[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1351, -74, 1685, -15, -1337, 58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1554, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1276, 25, -1278, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1401, 133, -1090, 125,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -871, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1548, -33,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1546, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1624, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -850, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1125, -10,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1513, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1314, -12,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1630, 68, -1135, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1133, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1837, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1846, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1836, -6, -1081, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1309, -5, 1832, -4, -1063, 17,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTPikachuAnimDownSpecialStartAir_joint26[72] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -543, -164, -504,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 19), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 102, 11, 0, 8, -3, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -322, -12, 0, 1, -3, 3,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 78, 156, 78,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -137, 37, 34, 7, 53, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4915, 5734, 4915,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -137, -49, 34, 32, 53, -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096, 4096,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4915, 5734, 4915,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
