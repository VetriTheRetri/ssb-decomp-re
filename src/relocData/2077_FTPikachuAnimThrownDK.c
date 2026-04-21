/* AnimJoint data for relocData file 2077 (FTPikachuAnimThrownDK) */
/* 2112 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimThrownDK_joint2[28];
extern u16 dFTPikachuAnimThrownDK_joint3[38];
extern u16 dFTPikachuAnimThrownDK_joint4[38];
extern u16 dFTPikachuAnimThrownDK_joint6[34];
extern u16 dFTPikachuAnimThrownDK_joint7[104];
extern u16 dFTPikachuAnimThrownDK_joint8[48];
extern u16 dFTPikachuAnimThrownDK_joint9[26];
extern u16 dFTPikachuAnimThrownDK_joint10[12];
extern u16 dFTPikachuAnimThrownDK_joint11[12];
extern u16 dFTPikachuAnimThrownDK_joint12[12];
extern u16 dFTPikachuAnimThrownDK_joint14[24];
extern u16 dFTPikachuAnimThrownDK_joint15[112];
extern u16 dFTPikachuAnimThrownDK_joint17[48];
extern u16 dFTPikachuAnimThrownDK_joint18[110];
extern u16 dFTPikachuAnimThrownDK_joint20[56];
extern u16 dFTPikachuAnimThrownDK_joint22[66];
extern u16 dFTPikachuAnimThrownDK_joint23[88];
extern u16 dFTPikachuAnimThrownDK_joint25[48];
extern u16 dFTPikachuAnimThrownDK_joint26[72];
extern u16 dFTPikachuAnimThrownDK_joint27[26];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTPikachuAnimThrownDK_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTPikachuAnimThrownDK_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimThrownDK_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimThrownDK_joint4, /* [3] joint 4 */
	(u32)dFTPikachuAnimThrownDK_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTPikachuAnimThrownDK_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimThrownDK_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimThrownDK_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimThrownDK_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimThrownDK_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimThrownDK_joint12, /* [11] joint 12 */
	(u32)dFTPikachuAnimThrownDK_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTPikachuAnimThrownDK_joint15, /* [14] joint 15 */
	(u32)dFTPikachuAnimThrownDK_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTPikachuAnimThrownDK_joint18, /* [17] joint 18 */
	(u32)dFTPikachuAnimThrownDK_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTPikachuAnimThrownDK_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTPikachuAnimThrownDK_joint23, /* [22] joint 23 */
	(u32)dFTPikachuAnimThrownDK_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTPikachuAnimThrownDK_joint26, /* [25] joint 26 */
	(u32)dFTPikachuAnimThrownDK_joint27, /* [26] joint 27 */
};

/* Joint 2 */
u16 dFTPikachuAnimThrownDK_joint2[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, 31, 0, 0, 27, -86, 272, 38,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 20), 1608,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 27, 305,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 27, 272,
	ftAnimLoop(0x6800, -52),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimThrownDK_joint3[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 143, 16, 0, 20, 0, 6,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 216, 0, 60, -3, 27, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 62, -5, -198, 2, -23, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 143, 13, 0, 26, 0, 5,
	ftAnimLoop(0x6800, -72),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTPikachuAnimThrownDK_joint4[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -168, -3, 0, 11, 0, -46,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -202, -6, 48, 0, -210, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -253, 0, -114, -3, 252, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -168, 20, 0, 19, 0, -35,
	ftAnimLoop(0x6800, -72),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimThrownDK_joint6[34] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 511, -21, 5, 29, 59, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 427, 0, 122, 16, 98, 35,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 513, 48, 32, -66, 117, -22,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 511, 5, 59,
	ftAnimLoop(0x6800, -66),
};

/* Joint 7 */
u16 dFTPikachuAnimThrownDK_joint7[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1594, 5, -679, -9, -1590, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1802, 350, -728, 58, -1929, -409,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2327, 316, -589, 138, -2514, -362,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -492, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2532, 143, -2751, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2722, 301, -2928, -298,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3611, 265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -541, 72, -3348, -486,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -348, 133, -3901, -296,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3666, 52, -273, 54, -3941, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 4109, 177, -539, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3960, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -4173, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4341, 277, -641, -69, -4378, -250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4664, 234, -678, -18, -4674, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4811, 147, -679, 0, -4807, -133,
	ftAnimLoop(0x6800, -204),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimThrownDK_joint8[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -695, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -832, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -671, 417,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 335,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimLoop(0x6800, -94),
};

/* Joint 9 */
u16 dFTPikachuAnimThrownDK_joint9[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -491, 77, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -41, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -491, -16, 0, 0, 0, 0,
	ftAnimLoop(0x6800, -50),
};

/* Joint 10 */
u16 dFTPikachuAnimThrownDK_joint10[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimThrownDK_joint11[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -424, 0, 0, 254, 357, 37,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTPikachuAnimThrownDK_joint12[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -409, 0, 0, -255, 357, 37,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimThrownDK_joint14[24] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -503, 17, 36, -23, 163, -33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -432, -57, 30,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), -503, 36, 163,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTPikachuAnimThrownDK_joint15[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2103, 58, 589, -30, 2297, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 2499, 31, 316, 17, 2531, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2522, 76, 358, 156, 2552, 89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1068, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2653, -224, 2709, -202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2072, -163, 2147, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2325, 147, 2409, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2366, 23, 1129, -7, 2451, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 2411, 55, 2511, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1053, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1087, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 852, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2498, 380, 2608, 394,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3172, 577, 3300, 599,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3654, 270, 925, 72, 3808, 297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3714, 29, 996, 46, 3895, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3712, -1, 1018, 21, 3905, 10,
	ftAnimLoop(0x6800, -220),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimThrownDK_joint17[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -456, -321,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -653, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -410, 313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 205,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -10,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTPikachuAnimThrownDK_joint18[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1442, 153, -1293, 20, 1577, -317,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 809, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1434, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1690, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1647, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1678, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 866, 57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1117, 191,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1424, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1355, -48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1653, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1328, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1345, 242,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1841, 134,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1434, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1307, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1872, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1769, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1318, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1419, 27,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1677, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1612, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1442, 22, -1293, 14, 1577, -35,
	ftAnimLoop(0x6800, -216),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTPikachuAnimThrownDK_joint20[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 555, 222,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 818, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 659, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 338, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 408, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 549, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 323, -271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 6, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 240, 195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 499, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 555, 56,
	ftAnimLoop(0x6800, -110),
};

/* Joint 22 */
u16 dFTPikachuAnimThrownDK_joint22[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1571, 33, -1945, 1, 1805, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 2131, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -1924, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -1702, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1633, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1535, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1591, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1572, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2083, -58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1823, -32,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1937, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1944, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1571, 1, -1945, -1, 1805, -17,
	ftAnimLoop(0x6800, -128),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTPikachuAnimThrownDK_joint23[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -76, 68, 267, 20, -384, 96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 270, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 226, -37, 166, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 195, 12, 215, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 272, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -587, -110,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 140, -125,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 35, 41,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 224, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 238, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -632, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -459, -29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 71, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -121, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -618, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -565, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -76, 44, 267, 29, -384, 180,
	ftAnimLoop(0x6800, -172),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTPikachuAnimThrownDK_joint25[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 956, -98,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 274, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 172, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 675, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 657, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 228, -249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 282, 261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 523, 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1002, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 956, -46,
	ftAnimLoop(0x6800, -94),
};

/* Joint 26 */
u16 dFTPikachuAnimThrownDK_joint26[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1656, -6, -1606, 5, 1584, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1618, 127,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1520, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1851, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1934, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1863, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1647, -172, 1768, 152,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1980, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1536, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1526, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1614, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1543, -24, 1862, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1602, -8, 1603, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1656, 42, -1606, -4, 1584, -18,
	ftAnimLoop(0x6800, -140),
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTPikachuAnimThrownDK_joint27[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1712, 0, 7, 0, -382, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -2014, -18, -795,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -1712, 1, 7, 1, -382, 0,
	ftAnimLoop(0x6800, -50),
};
