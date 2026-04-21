/* AnimJoint data for relocData file 1493 (FTPurinAnimWalk3) */
/* 1552 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimWalk3_joint1[26];
extern u16 dFTPurinAnimWalk3_joint2[34];
extern u16 dFTPurinAnimWalk3_joint3[72];
extern u16 dFTPurinAnimWalk3_joint5[12];
extern u16 dFTPurinAnimWalk3_joint6[76];
extern u16 dFTPurinAnimWalk3_joint7[14];
extern u16 dFTPurinAnimWalk3_joint9[12];
extern u16 dFTPurinAnimWalk3_joint10[60];
extern u16 dFTPurinAnimWalk3_joint11[20];
extern u16 dFTPurinAnimWalk3_joint13[12];
extern u16 dFTPurinAnimWalk3_joint14[78];
extern u16 dFTPurinAnimWalk3_joint16[18];
extern u16 dFTPurinAnimWalk3_joint18[100];
extern u16 dFTPurinAnimWalk3_joint19[90];
extern u16 dFTPurinAnimWalk3_joint21[18];
extern u16 dFTPurinAnimWalk3_joint22[90];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTPurinAnimWalk3_joints[] = {
	(u32)dFTPurinAnimWalk3_joint1, /* [0] joint 1 */
	(u32)dFTPurinAnimWalk3_joint2, /* [1] joint 2 */
	(u32)dFTPurinAnimWalk3_joint3, /* [2] joint 3 */
	(u32)dFTPurinAnimWalk3_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPurinAnimWalk3_joint6, /* [5] joint 6 */
	(u32)dFTPurinAnimWalk3_joint7, /* [6] joint 7 */
	(u32)dFTPurinAnimWalk3_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTPurinAnimWalk3_joint10, /* [9] joint 10 */
	(u32)dFTPurinAnimWalk3_joint11, /* [10] joint 11 */
	(u32)dFTPurinAnimWalk3_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPurinAnimWalk3_joint14, /* [13] joint 14 */
	(u32)dFTPurinAnimWalk3_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPurinAnimWalk3_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTPurinAnimWalk3_joint19, /* [18] joint 19 */
	(u32)dFTPurinAnimWalk3_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPurinAnimWalk3_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTPurinAnimWalk3_joint1[26] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 576, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 660, 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 576, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 660, 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 576, 0,
	ftAnimLoop(0x6800, -50),
};

/* Joint 2 */
u16 dFTPurinAnimWalk3_joint2[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 44, -402, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -446, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 44, 2, -402, 2, 0, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 44, -402, -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 44, -402, 0,
	ftAnimLoop(0x6800, -64),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPurinAnimWalk3_joint3[72] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 44, -178, 4300, 3522, 4300,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -89, 0, 312, 0,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, -70, 4096, 111, 4096, -71,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 0, -134,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 44, -178,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 99, 4096, -123, 4096, 97,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4300, 3522, 4300,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, -72, 4096, 100, 4096, -72,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 0, -134,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 44, -178,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 102, 4096, -136, 4096, 100,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4300, 3522, 4300,
	ftAnimLoop(0x6800, -140),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPurinAnimWalk3_joint5[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -310, -380, 237,
	ftAnimBlock(0, 40),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPurinAnimWalk3_joint6[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 171, -22, -167, 19, -422, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 1, 26, -373, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), 67, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -356, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 107, 31, -422, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -79, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 161, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 87, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 156, 14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -335, 15, -143, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -265, 26, -290, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 174, 5, -176, 29, -414, -41,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 174, -176, -414,
	ftAnimLoop(0x6800, -150),
};

/* Joint 7 */
u16 dFTPurinAnimWalk3_joint7[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 36), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimLoop(0x6800, -26),
};

/* Joint 9 */
u16 dFTPurinAnimWalk3_joint9[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 284, -420, 282,
	ftAnimBlock(0, 40),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPurinAnimWalk3_joint10[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1560, -9, 1674, -11, -1933, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -1628, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -1948, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), 1527, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1573, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 1706, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1588, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -1523, -10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1990, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -1978, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1556, -11, 1677, -9, -1941, 12,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1556, 1677, -1941,
	ftAnimLoop(0x6800, -118),
};

/* Joint 11 */
u16 dFTPurinAnimWalk3_joint11[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 36), -6, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 2,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPurinAnimWalk3_joint13[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -50, -61, -1676, 106, -21, 16,
	ftAnimBlock(0, 40),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPurinAnimWalk3_joint14[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -20, 24, -212, -40, 245, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 217, -19, -413, 23, -91, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 118, -30, -307, 22, -7, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 11, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 622, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -161, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 18, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 10, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 122, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 118, -28,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 577, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 5, -24, 463, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -31, -12, -164, -58, 293, -56,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -31, -164, 293,
	ftAnimLoop(0x6800, -154),
};

/* Joint 16 */
u16 dFTPurinAnimWalk3_joint16[18] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 36), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 7, 2,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimLoop(0x6800, -34),
};

/* Joint 18 */
u16 dFTPurinAnimWalk3_joint18[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1373, -34, -1279, 34, -1731, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -985, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 1070, -91, -1351, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 724, -37, -939, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 1133, 74, -1293, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1076, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1224, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1291, 48, -1259, -8, -1555, -84,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1937, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 1600, 44, -1225, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1691, -6, -1091, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1126, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1560, -15, -1727, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1596, -2, -1804, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1543, -31, -1253, -27, -1841, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1410, -44, -1289, -12, -1766, 24,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1410, -1289, -1766,
	ftAnimLoop(0x6800, -198),
};

/* Joint 19 */
u16 dFTPurinAnimWalk3_joint19[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -53, 19, 321, 28, 103, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 449, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 5, 36, 202, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 163, 45, 393, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 390, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 263, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 153, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -305, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 371, -24, 222, -59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -483, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), 145, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -337, 7, 100, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 246, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -260, 20, -382, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -216, 32, -199, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -65, 50, 318, 24, 83, 94,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -65, 318, 83,
	ftAnimLoop(0x6800, -178),
};

/* Joint 21 */
u16 dFTPurinAnimWalk3_joint21[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 36), 7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 7,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimLoop(0x6800, -32),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPurinAnimWalk3_joint22[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1339, 8, -1731, 16, 1494, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1388, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), 1490, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -1573, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1458, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1691, -24,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1348, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1258, 28,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1744, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1747, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1526, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1686, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1165, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1311, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1731, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1589, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1603, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1333, -7, -1708, -35, 1492, -64,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1333, -1708, 1492,
	ftAnimLoop(0x6800, -178),
};
