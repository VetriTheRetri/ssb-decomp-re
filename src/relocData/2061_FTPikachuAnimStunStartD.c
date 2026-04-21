/* AnimJoint data for relocData file 2061 (FTPikachuAnimStunStartD) */
/* 2528 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimStunStartD_joint1[48];
extern u16 dFTPikachuAnimStunStartD_joint2[38];
extern u16 dFTPikachuAnimStunStartD_joint3[54];
extern u16 dFTPikachuAnimStunStartD_joint5[38];
extern u16 dFTPikachuAnimStunStartD_joint6[118];
extern u16 dFTPikachuAnimStunStartD_joint7[48];
extern u16 dFTPikachuAnimStunStartD_joint8[54];
extern u16 dFTPikachuAnimStunStartD_joint9[10];
extern u16 dFTPikachuAnimStunStartD_joint10[30];
extern u16 dFTPikachuAnimStunStartD_joint11[30];
extern u16 dFTPikachuAnimStunStartD_joint13[30];
extern u16 dFTPikachuAnimStunStartD_joint14[108];
extern u16 dFTPikachuAnimStunStartD_joint16[64];
extern u16 dFTPikachuAnimStunStartD_joint17[94];
extern u16 dFTPikachuAnimStunStartD_joint19[40];
extern u16 dFTPikachuAnimStunStartD_joint21[94];
extern u16 dFTPikachuAnimStunStartD_joint22[108];
extern u16 dFTPikachuAnimStunStartD_joint24[48];
extern u16 dFTPikachuAnimStunStartD_joint25[126];
extern u16 dFTPikachuAnimStunStartD_joint26[32];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimStunStartD_joints[] = {
	(u32)dFTPikachuAnimStunStartD_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimStunStartD_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimStunStartD_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimStunStartD_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimStunStartD_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimStunStartD_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimStunStartD_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimStunStartD_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimStunStartD_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimStunStartD_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimStunStartD_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimStunStartD_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimStunStartD_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimStunStartD_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimStunStartD_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimStunStartD_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimStunStartD_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimStunStartD_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimStunStartD_joint25, /* [24] joint 25 */
	(u32)dFTPikachuAnimStunStartD_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTPikachuAnimStunStartD_joint1[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ), 0, 0, 0, -58,
	ftAnimSetValRate(FT_ANIM_TRAY), 540, -9,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 0, 1, 0, 0, 540, 52, -58, 41,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -26, 33, -28,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 670, 124, 18, 61,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 773, 1, 55, 46,
	ftAnimSetValRateT(FT_ANIM_TRAY, 10), 673, -100,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), 108,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPikachuAnimStunStartD_joint2[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 580, 34, 68,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 324, -34, 34, -3, 68, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 235, -31, 0, 4, 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -305, -10, 114, 6, 25, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 23, 133, 32,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimStunStartD_joint3[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 170, 175, 199,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 197, 5, 103, -17, 117, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 225, 7, 0, -12, 0, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 273, 0, -16, -1, -19, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 227, 0, -12, 1, -15, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 278, -23, -5, 1, -7, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -13, 0, -2,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimStunStartD_joint5[38] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 324, 0, -62, -34, 313, 85,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 324, -1, -105, -5, 420, 93,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 321, 0, -69, 16, 430, -42,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 324, -62, 313,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimStunStartD_joint6[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 601, 0, -329, 46, 2759, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 563, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 2753, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -86, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -125, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -185, -82,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 576, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 781, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -333, -92, 2816, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 100, 182, 2390, -9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 884, 95,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1106, -31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 303, 114, 2421, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 352, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 2606, 138,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1061, -50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 795, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 360, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 300, -42,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2770, 146,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2977, 55,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 264, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 803, 7, 238, -25, 3011, 34,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimStunStartD_joint7[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -10, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -453, -357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -715, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -440, 344,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPikachuAnimStunStartD_joint8[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 65, 188, 23,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 17, 16, -166, -18, -124, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 230, 15, 0, 10, 0, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 172, 0, -57, -10, 2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 240, 2, -103, -8, 9, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 193, -23, -143, -5, 16, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -2, -163, 20,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimStunStartD_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimStunStartD_joint10[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 111, 367, 335,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -455, 11, 0, -19, 0, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 339, 22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -31, -28,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimStunStartD_joint11[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -454, -43, -274,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -465, 39, 0, 2, 0, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 326, 22, 3, 0, 23, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimStunStartD_joint13[30] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -358, -41, 225,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -358, 24, -41, -77, 225, 159,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -328, 10, -139, -6, 424, 27,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), -324, -62, 313,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimStunStartD_joint14[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -611, -56, 1063, 53, -569, -62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 913, -261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -739, -191, -706, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1050, 206, -1035, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -327, 334, 568, -289, -397, 220,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 263, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -381, -19, -594, -91,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -513, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -562, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -517, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -657, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -562, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -802, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 200, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -231, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -258, -20, -662, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -144, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -407, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -347, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -110, 24, -313, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, -1, -96, 14, -298, 15,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimStunStartD_joint16[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, -261,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -271, -286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -583, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -416, 314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -344, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -375, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -242, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -185, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimStunStartD_joint17[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1363, 1, -1474, -7, 1421, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1477, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1586, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1736, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1663, -76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1436, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1453, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -1572, -4,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1433, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1479, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1599, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1615, 12,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1552, 61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1544, -117,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1629, 14, -1577, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1657, 10, -1598, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1413, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1290, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1665, 8, -1607, -9, 1210, -79,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimStunStartD_joint19[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 507, -22,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 453, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 605, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1117, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1094, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 599, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 578, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 889, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 938, 49,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPikachuAnimStunStartD_joint21[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1359, -16, -1420, 2, 1820, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1792, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1529, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1832, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1802, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1519, -144,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1811, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1446, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1366, -133,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1413, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1564, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1808, 2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1411, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1274, -19,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1804, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1749, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1452, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1577, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1599, -22, -1737, 11, 1258, -16,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimStunStartD_joint22[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 70, 38, 353, -7, 91, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 198, -105, 401, 63, 360, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 65, -118, 455, 34, 183, -160,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 247, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 179, 180, 15, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 371, 158, 147, 125,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 638, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 739, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 124, -98,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 77, -21,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 645, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 433, -172,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 55, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 35, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 749, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 431, -247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 248, -138, 157, -244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 157, -58, -29, -45, -57, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 130, -27, -55, -26, -179, -122,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimStunStartD_joint24[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 161, -59,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 167, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 449, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 299, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 300, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 284, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 747, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 799, 52,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimStunStartD_joint25[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 183, 6, -1, 0, 540, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 346, 26, -143, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 522, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 447, -56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 120, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 379, 64, -169, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 26, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 475, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 721, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 706, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 519, -143, -85, -157,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 201, -211,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -63, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -105, -154,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -560, -21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -59, -182,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 55, 68,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -565, 1, -100, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -501, 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -421, -57,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 114, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 42, -45,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -432, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 199, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -43, 277, 77, -476, -54,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTPikachuAnimStunStartD_joint26[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 31, -169, 1542,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -207, -22, -157, 4, 1430, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -192, 7, -123, 6, 1121, -56,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -14, 0, -3,
	ftAnimEnd(),
	0x0000, 0x0000,
};
