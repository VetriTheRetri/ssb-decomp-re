/* AnimJoint data for relocData file 1497 (FTPurinAnimThrownDK) */
/* 2304 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimThrownDK_joint2[56];
extern u16 dFTPurinAnimThrownDK_joint3[20];
extern u16 dFTPurinAnimThrownDK_joint4[48];
extern u16 dFTPurinAnimThrownDK_joint6[20];
extern u16 dFTPurinAnimThrownDK_joint7[132];
extern u16 dFTPurinAnimThrownDK_joint8[24];
extern u16 dFTPurinAnimThrownDK_joint10[20];
extern u16 dFTPurinAnimThrownDK_joint11[144];
extern u16 dFTPurinAnimThrownDK_joint12[24];
extern u16 dFTPurinAnimThrownDK_joint14[12];
extern u16 dFTPurinAnimThrownDK_joint15[138];
extern u16 dFTPurinAnimThrownDK_joint17[14];
extern u16 dFTPurinAnimThrownDK_joint19[150];
extern u16 dFTPurinAnimThrownDK_joint20[144];
extern u16 dFTPurinAnimThrownDK_joint22[160];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTPurinAnimThrownDK_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTPurinAnimThrownDK_joint2, /* [1] joint 2 */
	(u32)dFTPurinAnimThrownDK_joint3, /* [2] joint 3 */
	(u32)dFTPurinAnimThrownDK_joint4, /* [3] joint 4 */
	(u32)dFTPurinAnimThrownDK_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTPurinAnimThrownDK_joint7, /* [6] joint 7 */
	(u32)dFTPurinAnimThrownDK_joint8, /* [7] joint 8 */
	(u32)dFTPurinAnimThrownDK_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTPurinAnimThrownDK_joint11, /* [10] joint 11 */
	(u32)dFTPurinAnimThrownDK_joint12, /* [11] joint 12 */
	(u32)dFTPurinAnimThrownDK_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTPurinAnimThrownDK_joint15, /* [14] joint 15 */
	(u32)dFTPurinAnimThrownDK_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTPurinAnimThrownDK_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPurinAnimThrownDK_joint20, /* [19] joint 20 */
	(u32)dFTPurinAnimThrownDK_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF01F8, /* [22] END */
};

/* Joint 2 */
u16 dFTPurinAnimThrownDK_joint2[56] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, -1, 335, -1, 4096, 10, 4096, 10, 4096, -27,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 1608,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), 275, -1,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 12), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4505, 4505, 3072,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 395, 47, 4096, -32, 4096, -32, 4096, 81,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 18), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 12), 395, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 6), 335,
	ftAnimLoop(0x6800, -110),
};

/* Joint 3 */
u16 dFTPurinAnimThrownDK_joint3[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 0, 0,
	ftAnimLoop(0x6800, -38),
};

/* Joint 4 */
u16 dFTPurinAnimThrownDK_joint4[48] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 89, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 89, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -178, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -178, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), -89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 89,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -89, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), 0,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPurinAnimThrownDK_joint6[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, -160, -94, 62, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 25), 0,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPurinAnimThrownDK_joint7[132] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1713, 170, -669, -11, 2211, -169,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1095, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -542, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1700, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1658, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2115, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1114, -54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1558, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -505, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -253, -49,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1595, -27, 2183, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2236, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1692, -10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -307, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -309, -67,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2282, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2231, -55,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1708, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1665, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -395, -87,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -636, -26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2175, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2204, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1678, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1701, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1702, 0, -670, -33, 2200, -4,
	ftAnimLoop(0x6800, -260),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPurinAnimThrownDK_joint8[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimLoop(0x6800, -46),
};

/* Joint 10 */
u16 dFTPurinAnimThrownDK_joint10[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 100, -106, 59, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 25), 0,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPurinAnimThrownDK_joint11[144] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX), 248, -323, 922, -33, 663, -303, 3072, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_SCAX, 30), 3072, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -379, -234, 933, 57, 65, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -544, -146, 1003, 57, -59, -84,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1153, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 429, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -563, 218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -277, 256,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 318, 51,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1173, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1252, 42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 493, 69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 724, -23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 373, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 327, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1295, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1088, 24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 686, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 637, 48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 282, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 408, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1129, 44, 691, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 976, -54, 657, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 397, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 275, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 236, -39, 921, -55, 651, -6,
	ftAnimLoop(0x6800, -286),
};

/* Joint 12 */
u16 dFTPurinAnimThrownDK_joint12[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimLoop(0x6800, -46),
};

/* Joint 14 */
u16 dFTPurinAnimThrownDK_joint14[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -501, -271, -1055, 106, -21, 16,
	ftAnimBlock(0, 30),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTPurinAnimThrownDK_joint15[138] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 123, -39, -328, 0, -4, 67,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 80, 84,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -327, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 251, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 121, -145,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -448, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 178, 109,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 539, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -326, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -327, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 349, -172, -289, 165,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -49, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 190, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -315, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -312, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -116, -112,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -489, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 333, 161,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 587, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -302, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -302, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 484, -144, -412, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 84, -35, 43, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 78, 0, -302, -3, 53, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 116, 7, -329, -1, 6, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 123, 6, -328, 0, -4, -10,
	ftAnimLoop(0x6800, -272),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPurinAnimThrownDK_joint17[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 29), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimLoop(0x6800, -26),
};

/* Joint 19 */
u16 dFTPurinAnimThrownDK_joint19[150] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1898, 39, 1462, -21, -1062, 33,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -796, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1399, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1656, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1573, 50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -2108, -93,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -801, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1010, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1401, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1663, -76,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2180, -16, -1032, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1934, 62, -1272, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1899, 16, 1566, -105, -1140, 160,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1442, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1977, -110, -874, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2122, -105, -937, -66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2117, 91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1231, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1581, 115,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1456, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2006, 97,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1897, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1270, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1017, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -982, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1059, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1451, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1463, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1898, -1, 1462, 0, -1062, -3,
	ftAnimLoop(0x6800, -296),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTPurinAnimThrownDK_joint20[144] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -123, 53, 328, -1, -4, 90,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -42, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 317, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 301, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 265, -46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -34, -81,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -70, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -373, -174,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -137, -138,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -525, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 326, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 327, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -559, -135,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -538, 154,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -453, 123,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -19, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -335, 181,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -157, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 315, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 299, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -69, -98,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -433, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -278, -135,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -490, 39,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 298, 3, -422, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 328, 2, -70, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -427, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -168, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -123, 45, 328, 0, -4, 66,
	ftAnimLoop(0x6800, -284),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPurinAnimThrownDK_joint22[160] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimLoop(0x6800, -30),
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1318, -47, -1462, 25, 2154, 43,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1462, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1661, -6, 2420, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1650, 18, 2411, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1387, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2292, 30,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1468, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1479, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1324, 89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -983, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2314, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2107, -111,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1613, -113,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1552, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1062, -106,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1328, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1977, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 2077, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1333, 24, -1448, 81, 2269, 138,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1093, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2169, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1421, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1535, -90,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1488, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1101, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1291, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2148, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 2133, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1318, -26, -1462, 25, 2154, 20,
	ftAnimLoop(0x6800, -280),
	ftAnimEnd(),
	0x0000, 0x0000,
};
