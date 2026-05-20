/* AnimJoint data for relocData file 648 (FTFoxAnimRun) */
/* 2304 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimRun_joint1[20];
extern u16 dFTFoxAnimRun_joint2[14];
extern u16 dFTFoxAnimRun_joint4[32];
extern u16 dFTFoxAnimRun_joint5[94];
extern u16 dFTFoxAnimRun_joint7[58];
extern u16 dFTFoxAnimRun_joint8[56];
extern u16 dFTFoxAnimRun_joint10[8];
extern u16 dFTFoxAnimRun_joint11[64];
extern u16 dFTFoxAnimRun_joint12[56];
extern u16 dFTFoxAnimRun_joint13[12];
extern u16 dFTFoxAnimRun_joint15[12];
extern u16 dFTFoxAnimRun_joint16[110];
extern u16 dFTFoxAnimRun_joint18[56];
extern u16 dFTFoxAnimRun_joint20[120];
extern u16 dFTFoxAnimRun_joint21[116];
extern u16 dFTFoxAnimRun_joint23[56];
extern u16 dFTFoxAnimRun_joint24[122];
extern u16 dFTFoxAnimRun_joint25[46];
extern u16 dFTFoxAnimRun_joint26[48];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTFoxAnimRun_joints[] = {
	(AObjEvent32 *)dFTFoxAnimRun_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimRun_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimRun_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTFoxAnimRun_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTFoxAnimRun_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTFoxAnimRun_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTFoxAnimRun_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTFoxAnimRun_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTFoxAnimRun_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimRun_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimRun_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTFoxAnimRun_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTFoxAnimRun_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTFoxAnimRun_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTFoxAnimRun_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTFoxAnimRun_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTFoxAnimRun_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTFoxAnimRun_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimRun_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimRun_joint1[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 780,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 660,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 780,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 660,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 780,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimRun_joint2[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 357, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), -268,
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimRun_joint4[32] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 320, 201, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 357, 0, 0, -52, 0, 52,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 320, -201, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 357, 0, 0, 52, 0, -52,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 320, 201, -181,
	ftAnimLoop(0x6800, -62),
};

/* Joint 5 */
u16 dFTFoxAnimRun_joint5[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1327, -17, 1893, -14, -1209, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1893, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1270, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1177, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1209, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1817, -38, -1091, 59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1887, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1270, 1, -1089, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1285, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1121, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1209, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1172, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1888, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1841, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1181, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1133, -40,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1285, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1287, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1327, 39, 1893, 51, -1209, -75,
	ftAnimLoop(0x6800, -184),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimRun_joint7[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -291, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -296, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -208, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -202, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -207, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -180, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 180,
	ftAnimLoop(0x6800, -114),
};

/* Joint 8 */
u16 dFTFoxAnimRun_joint8[56] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -536, -17,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -580, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -536, 17,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -490, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -536, -17,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -580, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -536, 17,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -490, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -536, -17,
	ftAnimLoop(0x6800, -110),
};

/* Joint 10 */
u16 dFTFoxAnimRun_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -14),
};

/* Joint 11 */
u16 dFTFoxAnimRun_joint11[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1305, -4, -1870, -10, 2049, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -1817, 26, 2107, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1817, 0, 2106, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1805, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 2034, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1305, 24, 2049, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1273, -19, 2118, -43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1805, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1820, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1305, -32, -1870, -49, 2049, -69,
	ftAnimLoop(0x6800, -124),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimRun_joint12[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -73, 65,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -73, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -248, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -243, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -230, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -73, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -73, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -323, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -328, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -252, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -73, 179,
	ftAnimLoop(0x6800, -110),
};

/* Joint 13 */
u16 dFTFoxAnimRun_joint13[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 446, 0, 0, 272, 0, 0,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimRun_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimRun_joint16[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -90, -14, -214, 38, -952, 115,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -13, 0, 42, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -773, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -953, -124,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -822, 265,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -8, 46, 55, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -225, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 144, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -481, 331,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -19, -218,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -212, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -57, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 97, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -86, 29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -280, -288,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1038, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 15, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -208, -25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -48, 25, -1084, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -34, -21, -1086, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -90, -55, -214, -6, -952, 134,
	ftAnimLoop(0x6800, -216),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimRun_joint18[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 107, -101,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 5, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 416, 315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 827, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 946, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 800, -288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 368, -300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 420, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 648, 245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1167, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1133, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 513, -334,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 107, -406,
	ftAnimLoop(0x6800, -110),
};

/* Joint 20 */
u16 dFTFoxAnimRun_joint20[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1679, -4, -1508, 39, -1540, 259,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1583, -58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1615, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1147, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1420, -213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1773, -244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2063, -235,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2154, 278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1619, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1483, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1622, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1755, 14, -1688, 430,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1650, -68, -1528, -22, -1292, 190,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1687, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1531, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1307, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1727, -307,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2040, -156,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1947, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1725, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1662, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1503, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1510, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1915, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1746, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1679, 16, -1508, 1, -1540, 206,
	ftAnimLoop(0x6800, -236),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimRun_joint21[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -161, 17, 225, -12, 159, 51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 57, -84,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 86, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -19, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -280, -288,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1038, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -15, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 208, 25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 48, -25, -1084, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -836, 89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 39, -42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 214, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -7, 75,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -773, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -953, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 10, -13, -1022, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -80, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -822, 265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -481, 331,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 44, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -138, -36, 95, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -152, -11, 187, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -161, -8, 225, 37, 159, 114,
	ftAnimLoop(0x6800, -228),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimRun_joint23[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 305, 115,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 911, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1105, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 513, -334,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 107, -253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 416, 315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 636, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 800, -288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 368, -300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 198, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 305, 106,
	ftAnimLoop(0x6800, -110),
};

/* Joint 24 */
u16 dFTFoxAnimRun_joint24[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1535, 34, 1504, 0, 1925, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1505, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1505, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1792, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1490, -307,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1176, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1469, -42, 1176, 46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1302, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1524, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1475, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1436, -23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1352, 84,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1936, 196,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1526, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1580, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1432, 4, 2070, -69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1559, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1797, -213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1642, -177,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1062, 279,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1597, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1430, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1570, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1417, -17, 1530, 431,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1535, 118, 1504, 74, 1925, 394,
	ftAnimLoop(0x6800, -240),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimRun_joint25[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX), -536, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -268, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 2,
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -126, -96,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 11), -268,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -536,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -268, -1,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 9), 268,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -536, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -442, 53,
	ftAnimLoop(0x6800, -88),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimRun_joint26[48] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTY), 53, -29,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -178,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 7), 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -134, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 134, 13,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 268, -1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -178, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 53, -29,
	ftAnimLoop(0x6800, -80),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
