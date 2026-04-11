/* AnimJoint data for relocData file 1494 (FTPurinAnimWalk2) */
/* 1584 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimWalk2_joint1[26];
extern u16 dFTPurinAnimWalk2_joint2[46];
extern u16 dFTPurinAnimWalk2_joint3[66];
extern u16 dFTPurinAnimWalk2_joint5[12];
extern u16 dFTPurinAnimWalk2_joint6[64];
extern u16 dFTPurinAnimWalk2_joint7[16];
extern u16 dFTPurinAnimWalk2_joint9[12];
extern u16 dFTPurinAnimWalk2_joint10[50];
extern u16 dFTPurinAnimWalk2_joint11[16];
extern u16 dFTPurinAnimWalk2_joint13[12];
extern u16 dFTPurinAnimWalk2_joint14[94];
extern u16 dFTPurinAnimWalk2_joint16[8];
extern u16 dFTPurinAnimWalk2_joint18[90];
extern u16 dFTPurinAnimWalk2_joint19[96];
extern u16 dFTPurinAnimWalk2_joint21[140];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTPurinAnimWalk2_joints[] = {
	(u32)dFTPurinAnimWalk2_joint1, /* [0] joint 1 */
	(u32)dFTPurinAnimWalk2_joint2, /* [1] joint 2 */
	(u32)dFTPurinAnimWalk2_joint3, /* [2] joint 3 */
	(u32)dFTPurinAnimWalk2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPurinAnimWalk2_joint6, /* [5] joint 6 */
	(u32)dFTPurinAnimWalk2_joint7, /* [6] joint 7 */
	(u32)dFTPurinAnimWalk2_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTPurinAnimWalk2_joint10, /* [9] joint 10 */
	(u32)dFTPurinAnimWalk2_joint11, /* [10] joint 11 */
	(u32)dFTPurinAnimWalk2_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPurinAnimWalk2_joint14, /* [13] joint 14 */
	(u32)dFTPurinAnimWalk2_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPurinAnimWalk2_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTPurinAnimWalk2_joint19, /* [18] joint 19 */
	(u32)dFTPurinAnimWalk2_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF0154, /* [21] END */
};

/* Joint 1 */
u16 dFTPurinAnimWalk2_joint1[26] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 600, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 630, 90,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 600, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 630, 90,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 600, 0,
	ftAnimLoop(0x6800, -50),
};

/* Joint 2 */
u16 dFTPurinAnimWalk2_joint2[46] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 44, -357, 0, 2, -343, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), -89, -446, 89, 0, -312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 44, 2, -357, 4, 0, -5, 2, 0, -343, -5, -1, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 2, -343, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, -312, -89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 44, -357, 0,
	ftAnimLoop(0x6800, -90),
};

/* Joint 3 */
u16 dFTPurinAnimWalk2_joint3[66] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -44, 4259, 3768, 4259,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -4, 311, 0,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 4096, -38, 4096, 50, 4096, -38,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -44, 0,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 4096, 56, 4096, -90, 4096, 58,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4259, 3768, 4259,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 30), -44,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 4096, -36, 4096, 62, 4096, -36,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 4096, 59, 4096, -79, 4096, 59,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4259, 3768, 4259,
	ftAnimLoop(0x6800, -128),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPurinAnimWalk2_joint5[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -310, -380, 237,
	ftAnimBlock(0, 60),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPurinAnimWalk2_joint6[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -96, -7, 82, 5, -444, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 36), -424, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 27), -117, 5, 97, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -96, 9, 82, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 18), 88, -11, -79, 9,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -425, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -432, -3,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 41, -16, -38, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -58, -14, 52, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -96, -12, 82, 10, -444, -3,
	ftAnimLoop(0x6800, -124),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPurinAnimWalk2_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 57), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -6, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 9 */
u16 dFTPurinAnimWalk2_joint9[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 284, -420, 282,
	ftAnimBlock(0, 60),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPurinAnimWalk2_joint10[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1480, -2, 1493, -5, 1171, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 39), 1525, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 27), 1470, 8, 1197, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1494, 7, 1168, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 27), 1509, -5, 1157, 3,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1535, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 1491, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1480, -3, 1494, -5, 1168, 3,
	ftAnimLoop(0x6800, -96),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPurinAnimWalk2_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 57), -6, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 2,
	ftAnimLoop(0x6800, -30),
};

/* Joint 13 */
u16 dFTPurinAnimWalk2_joint13[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -50, -61, -1676, 106, -21, 16,
	ftAnimBlock(0, 60),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPurinAnimWalk2_joint14[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -16, 12, -301, -5, 224, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -297, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 108, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -15, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -18, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 224, 49,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -318, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -203, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 63, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -61, 11,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 384, 48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), 486, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -85, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -97, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -9, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -11, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -61, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -61, 7, -222, -34, 338, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -16, 15, -301, -26, 224, -37,
	ftAnimLoop(0x6800, -184),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPurinAnimWalk2_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 60),
	ftAnimLoop(0x6800, -14),
};

/* Joint 18 */
u16 dFTPurinAnimWalk2_joint18[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1971, 9, 1906, 14, -1647, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -1874, -27, 2025, -30, -1495, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1960, -19, 1901, -28, -1385, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), -1881, 33, -1813, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), 1906, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1880, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 1869, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1771, 28, -1911, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), -1754, 1, -1671, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1721, 7, -1763, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1785, -32, -1893, 20,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1865, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1902, -30, 1886, 6, -1767, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1971, -22, 1906, 6, -1647, 39,
	ftAnimLoop(0x6800, -176),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPurinAnimWalk2_joint19[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1585, 13, 1290, -2, -1374, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 1165, 5, -931, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -1325, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1215, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -1585, -30,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1189, 9, -1002, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1541, -56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 1471, 10,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1677, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -1823, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1713, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -1924, 9,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1496, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1388, -27,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1874, 6, -1895, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1784, 47, 1295, -16, -1699, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1588, 65, 1289, -1, -1378, 106,
	ftAnimLoop(0x6800, -188),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPurinAnimWalk2_joint21[140] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 48), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 7, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 127, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 293, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 7, -95,
	ftAnimLoop(0x6800, -52),
	ftAnimEnd(),
	0x200E, 0xFAEE, 0xFFFB, 0xF8E9, 0x0009, 0x05B9, 0xFFFA, 0x2803, 0x000C, 0xFAB3, 0xFFF1, 0x2809, 0x0018, 0x05DD, 0xFFFC, 0x2005, 0x0009, 0xF9D7, 0x002D, 0x2005, 0x0003, 0xFA6D, 0x0023, 0x2805, 0x0012, 0xF8E9, 0xFFEA, 0x2003, 0x0003, 0xFA8C, 0xFFFD, 0x2803, 0x000C, 0xFB03, 0xFFFF, 0x0801, 0x0009, 0x2009, 0x0003, 0x05CD, 0xFFFA, 0x2809, 0x000F, 0x065C, 0x0018, 0x2003, 0x0003, 0xFAEE, 0xFFFA, 0x2803, 0x000F, 0xFAE4, 0x0005, 0x2005, 0x0003, 0xF8B9, 0xFFF4, 0x2805, 0x000F, 0xF95F, 0x0014, 0x0801, 0x0009, 0x2009, 0x0003, 0x06AA, 0x0028, 0x2809, 0x0006, 0x0781, 0xFFE9, 0x2003, 0x0003, 0xFAF4, 0x0001, 0x2803, 0x0006, 0xFB20, 0x000B, 0x2005, 0x0003, 0xF987, 0x0001, 0x2805, 0x0006, 0xF92B, 0xFFEB, 0x2009, 0x0003, 0x06C6, 0xFFAA, 0x200B, 0x0003, 0xFB34, 0xFFF8, 0x057A, 0xFFD3, 0x200F, 0x0003, 0xFAEE, 0xFFE9, 0xF8E9, 0xFFEA, 0x05B5, 0x0013, 0x6800, 0xFF2C, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
