/* AnimJoint data for relocData file 1448 (FTPurinAnimAttackAirB) */
/* 2784 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimAttackAirB_joint1[54];
extern u16 dFTPurinAnimAttackAirB_joint2[56];
extern u16 dFTPurinAnimAttackAirB_joint3[14];
extern u16 dFTPurinAnimAttackAirB_joint5[14];
extern u16 dFTPurinAnimAttackAirB_joint6[144];
extern u16 dFTPurinAnimAttackAirB_joint7[38];
extern u16 dFTPurinAnimAttackAirB_joint9[14];
extern u16 dFTPurinAnimAttackAirB_joint10[146];
extern u16 dFTPurinAnimAttackAirB_joint11[30];
extern u16 dFTPurinAnimAttackAirB_joint13[10];
extern u16 dFTPurinAnimAttackAirB_joint14[164];
extern u16 dFTPurinAnimAttackAirB_joint16[54];
extern u16 dFTPurinAnimAttackAirB_joint18[180];
extern u16 dFTPurinAnimAttackAirB_joint19[162];
extern u16 dFTPurinAnimAttackAirB_joint21[40];
extern u16 dFTPurinAnimAttackAirB_joint22[228];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTPurinAnimAttackAirB_joints[] = {
	(AObjEvent32 *)dFTPurinAnimAttackAirB_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTPurinAnimAttackAirB_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTPurinAnimAttackAirB_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTPurinAnimAttackAirB_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTPurinAnimAttackAirB_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTPurinAnimAttackAirB_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTPurinAnimAttackAirB_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTPurinAnimAttackAirB_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTPurinAnimAttackAirB_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTPurinAnimAttackAirB_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTPurinAnimAttackAirB_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTPurinAnimAttackAirB_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTPurinAnimAttackAirB_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTPurinAnimAttackAirB_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTPurinAnimAttackAirB_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTPurinAnimAttackAirB_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTPurinAnimAttackAirB_joint1[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY), 0, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAZ), 0, 0, 0, 600, 0, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY, 6), 0, 0, 4096, 0, 4096, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY, 2), -893, 0, 4300, 423, 3481, -664,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -1429, -72,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 2), 4915, 0, 2867, 1,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 6), 4096, -1, 4096, -1,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 24), 4096, 4096,
	ftAnimBlock(0, 9),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 15), -3216,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPurinAnimAttackAirB_joint2[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -312, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -89, -44, -178, 67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -178,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -178, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -357, 0, -268, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -357, 0, 0, 0, -268, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, -268, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPurinAnimAttackAirB_joint3[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 268, 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTPurinAnimAttackAirB_joint5[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 178, -144, -737, 238, 4096, 4096, 4096,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTPurinAnimAttackAirB_joint6[144] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 721, -1, -37, 43, -630, -6,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 681, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -648, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 76, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 143, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 175, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 658, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 658, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 658, -149, -649, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -415, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 359, -199, 200, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 191, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 259, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 316, 48, -401, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -460, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 357, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 287, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 194, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 112, -9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 290, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 416, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -462, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -548, -13,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 432, 17, 103, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), 718, 5, -36, -2,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -561, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -628, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 721, 2, -37, -1, -630, -2,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPurinAnimAttackAirB_joint7[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPurinAnimAttackAirB_joint9[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, -178, 69, -722, 238, 4096, 4096, 4096,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTPurinAnimAttackAirB_joint10[146] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -785, 19, -113, -29, -696, 5,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -714, 95,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -673, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -142, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -208, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -270, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -575, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -447, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -447, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -448, 224, -270, -19, -673, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -347, -22, -494, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2, 253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 57, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 34, -20, -353, -4, -490, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -301, 6, -505, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -7, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -21, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -254, -28,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -294, 6, -506, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -589, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -141, 10,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -284, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -780, -11,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -610, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -694, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -131, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -111, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -785, -5, -109, 1, -696, -2,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPurinAnimAttackAirB_joint11[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 12), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -6, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTPurinAnimAttackAirB_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -501, 264, -1427, 106, -21, 16,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPurinAnimAttackAirB_joint14[164] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1763, 171, -1321, 29, 1961, -125,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1286, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1935, 295, 1836, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2355, 366, 1631, -166,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1461, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2668, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2766, 49, -1297, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2767, 0, -1295, 0, 1459, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2766, -507, -1298, -53, 1461, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1753, -636, -1402, -181, 1823, 396,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1493, -116, -1661, -129, 2255, 215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1520, 22, -1661, 0, 2255, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 2255, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1538, 5, -1662, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1660, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 1462, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1462, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1466, 4,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1658, 4, 2252, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1463, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 2048, -29,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1473, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1650, 43,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1425, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1327, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2020, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1962, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1692, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1756, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1763, 7, -1321, 5, 1961, 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPurinAnimAttackAirB_joint16[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTPurinAnimAttackAirB_joint18[180] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1854, -52, -1479, 79, -1470, 107,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1906, -159, -1399, 110, -1362, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2173, -374, -1257, 32, -1022, 328,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2655, -391, -1334, -73, -706, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2956, -149, -1404, -34, -626, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2955, 0, -1403, 0, -623, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2956, 509, -1404, 71, -626, -326,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1937, 782, -1260, 27, -1275, -565,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1390, 283, -1350, -28, -1756, -235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1369, 17, -1316, 27, -1746, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1355, 6, -1294, 6, -1738, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -1398, 0, -1776, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -1383, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1389, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1437, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1398, 0, -1780, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1394, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1778, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1773, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1476, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1400, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1588, -64,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1453, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1486, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1654, -65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1844, -18,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1481, 3, -1475, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1854, -9, -1479, 1, -1470, 5,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPurinAnimAttackAirB_joint19[162] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1399, -230, 1293, -20, 1936, -157,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1294, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1168, -449, 1778, -225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 500, -491, 1484, -223,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1289, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 185, -186, 1349, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1366, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 126, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 126, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 126, 200, 1366, -50, 1289, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 527, 446, 1264, -80, 1477, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1019, 266, 1205, -31, 1695, 110,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1204, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1060, 32, 1698, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1084, 6, 1695, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 975, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 1693, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1205, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 1195, -2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 969, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 958, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 957, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1156, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1695, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1911, 25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1191, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1285, 10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1225, 68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1388, 24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1933, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1399, 10, 1293, 7, 1936, 2,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPurinAnimAttackAirB_joint21[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPurinAnimAttackAirB_joint22[228] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 308, 163, 82, 93, 189, 72,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 3686, 0, 3686, -1, 3686, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 471, 346, 176, 212, 261, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1000, 575, 508, 144, 645, 538,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1621, 360, 465, -65, 1338, 410,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1721, 49, 378, -43, 1466, 64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 378, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1721, 0, 1466, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1721, -441, 1466, -212,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 2737,
	ftAnimSetValRateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 6242, -1, 5642, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 838, -606, 228, -146, 1042, -294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 508, -192, 84, -66, 876, -94,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 6485, 3893, 3689,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 452, -47, 95, 11, 853, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 81, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 413, -11, 822, -10,
	ftAnimSetValRateT(FT_ANIM_SCAY, 2), 5898, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 870, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 546, 31,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 2), 4730, 5320,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), -844, -695,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 13), 3686, 1, 3686, 1, 3686, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 889, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 899, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 571, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 581, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 81, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 132, 13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 581, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 403, -34,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 902, -1,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 3686, 3686, 3686,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 612, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 145, 9, 534, -78,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 87, -9, 201, -16,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 367, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 316, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 308, -7, 82, -5, 189, -11,
	ftAnimEnd(),
	0x0000, 0x0000,
};
