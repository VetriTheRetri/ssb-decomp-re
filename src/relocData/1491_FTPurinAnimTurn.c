/* AnimJoint data for relocData file 1491 (FTPurinAnimTurn) */
/* 1520 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimTurn_joint1[38];
extern u16 dFTPurinAnimTurn_joint2[16];
extern u16 dFTPurinAnimTurn_joint3[34];
extern u16 dFTPurinAnimTurn_joint5[42];
extern u16 dFTPurinAnimTurn_joint6[82];
extern u16 dFTPurinAnimTurn_joint7[12];
extern u16 dFTPurinAnimTurn_joint9[42];
extern u16 dFTPurinAnimTurn_joint10[90];
extern u16 dFTPurinAnimTurn_joint11[16];
extern u16 dFTPurinAnimTurn_joint13[10];
extern u16 dFTPurinAnimTurn_joint14[60];
extern u16 dFTPurinAnimTurn_joint16[14];
extern u16 dFTPurinAnimTurn_joint18[100];
extern u16 dFTPurinAnimTurn_joint19[70];
extern u16 dFTPurinAnimTurn_joint21[14];
extern u16 dFTPurinAnimTurn_joint22[76];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTPurinAnimTurn_joints[] = {
	(u32)dFTPurinAnimTurn_joint1, /* [0] joint 1 */
	(u32)dFTPurinAnimTurn_joint2, /* [1] joint 2 */
	(u32)dFTPurinAnimTurn_joint3, /* [2] joint 3 */
	(u32)dFTPurinAnimTurn_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPurinAnimTurn_joint6, /* [5] joint 6 */
	(u32)dFTPurinAnimTurn_joint7, /* [6] joint 7 */
	(u32)dFTPurinAnimTurn_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTPurinAnimTurn_joint10, /* [9] joint 10 */
	(u32)dFTPurinAnimTurn_joint11, /* [10] joint 11 */
	(u32)dFTPurinAnimTurn_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPurinAnimTurn_joint14, /* [13] joint 14 */
	(u32)dFTPurinAnimTurn_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPurinAnimTurn_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTPurinAnimTurn_joint19, /* [18] joint 19 */
	(u32)dFTPurinAnimTurn_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPurinAnimTurn_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTPurinAnimTurn_joint1[38] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 590, 1319, 4096, 35, 4096, -27, 4096, 30,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 12), 4096, 35, 4096, -27, 4096, 30,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 1200, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), 590, -1328,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 6), 0, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPurinAnimTurn_joint2[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValRate(FT_ANIM_ROTX), -46, 13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), -46, -1876,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPurinAnimTurn_joint3[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -178, -14, -268, -29, 178, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -134, 29, -268, 44, 134, -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTPurinAnimTurn_joint5[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -160, -3, -76, 0, 99, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 178, 19,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -57, -389, 99,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 178, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -57, -389, 99,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -160, 0, -76, 0, 99, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPurinAnimTurn_joint6[82] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2830, 453, -367, -146, 3172, -258,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2377, -6, -514, -381, 2914, 272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2843, -118, -1130, -334, 3717, 345,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2613, 135, -1182, -25, 3605, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2572, 30, -1181, 3, 3597, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1128, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -2584, -37, 3621, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2632, -144, 3640, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2872, -676, 3762, 442,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3985, -782, -1110, -57, 4525, 507,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4437, -451, -1243, -132, 4778, 252,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPurinAnimTurn_joint7[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPurinAnimTurn_joint9[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 151, 1, -96, 0, 120, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -178, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 75, -338, 219,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -178, 19,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 75, -338, 219,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 151, 0, -96, 0, 120, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPurinAnimTurn_joint10[90] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 981, -129, 1241, -273, 1545, -138,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 852, 38, 968, -288, 1406, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1059, 11, 664, -166, 1776, 153,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 636, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 875, -108, 1714, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 842, -25, 1711, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 845, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1723, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 633, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 613, 13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 878, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1059, -21, 645, 177, 1783, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 836, -39, 967, 298, 1392, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 981, 144, 1241, 274, 1545, 153,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPurinAnimTurn_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTPurinAnimTurn_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -501, -271, -1055, 106, -21, 16,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPurinAnimTurn_joint14[60] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -34, 9, -308, 0, 255, -17,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -12, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -322, 20, 144, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -304, 7, 152, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -347, 18, 358, -41,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -76, -54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -60, 33,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -320, 19, 297, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -36, 23, -308, 12, 259, -37,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPurinAnimTurn_joint16[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTPurinAnimTurn_joint18[100] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1937, -47, 1758, -42, -1692, 177,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1966, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1715, -91, -1515, 276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1575, -114, -1139, 284,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1563, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1866, 30, -945, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1932, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1039, -157,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1508, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1771, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1886, -2, 1910, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2054, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1835, -109, -1605, -50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1652, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1594, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2017, 44, 1627, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1965, 40, 1713, 65, -1675, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1937, 27, 1758, 45, -1689, -13,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPurinAnimTurn_joint19[70] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 36, 15, 308, 8, 259, 23,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 315, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 90, -34, 338, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 50, -30, 281, -46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 349, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 97, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 305, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 343, -19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 380, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 293, -44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 57, -30, 319, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 36, -20, 308, -10, 259, -33,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPurinAnimTurn_joint21[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPurinAnimTurn_joint22[76] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1279, 11, -1758, 0, 1527, -32,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1653, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -1241, -39, -1760, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1287, -23, -1791, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1237, 65, -1639, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1157, 154, -1471, 125, 1795, 103,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1475, -133, 1779, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -928, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1155, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1236, -61, -1656, -141, 1626, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1279, -43, -1758, -102, 1527, -98,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
