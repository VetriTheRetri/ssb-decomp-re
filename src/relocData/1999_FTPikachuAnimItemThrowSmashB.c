/* AnimJoint data for relocData file 1999 (FTPikachuAnimItemThrowSmashB) */
/* 3008 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimItemThrowSmashB_joint1[44];
extern u16 dFTPikachuAnimItemThrowSmashB_joint2[60];
extern u16 dFTPikachuAnimItemThrowSmashB_joint3[62];
extern u16 dFTPikachuAnimItemThrowSmashB_joint5[54];
extern u16 dFTPikachuAnimItemThrowSmashB_joint6[162];
extern u16 dFTPikachuAnimItemThrowSmashB_joint7[16];
extern u16 dFTPikachuAnimItemThrowSmashB_joint8[62];
extern u16 dFTPikachuAnimItemThrowSmashB_joint9[10];
extern u16 dFTPikachuAnimItemThrowSmashB_joint10[52];
extern u16 dFTPikachuAnimItemThrowSmashB_joint11[52];
extern u16 dFTPikachuAnimItemThrowSmashB_joint13[54];
extern u16 dFTPikachuAnimItemThrowSmashB_joint14[146];
extern u16 dFTPikachuAnimItemThrowSmashB_joint16[38];
extern u16 dFTPikachuAnimItemThrowSmashB_joint17[118];
extern u16 dFTPikachuAnimItemThrowSmashB_joint19[56];
extern u16 dFTPikachuAnimItemThrowSmashB_joint21[80];
extern u16 dFTPikachuAnimItemThrowSmashB_joint22[140];
extern u16 dFTPikachuAnimItemThrowSmashB_joint24[70];
extern u16 dFTPikachuAnimItemThrowSmashB_joint25[126];
extern u16 dFTPikachuAnimItemThrowSmashB_joint26[50];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimItemThrowSmashB_joints[] = {
	(u32)dFTPikachuAnimItemThrowSmashB_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimItemThrowSmashB_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimItemThrowSmashB_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimItemThrowSmashB_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimItemThrowSmashB_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimItemThrowSmashB_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimItemThrowSmashB_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimItemThrowSmashB_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimItemThrowSmashB_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimItemThrowSmashB_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimItemThrowSmashB_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimItemThrowSmashB_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimItemThrowSmashB_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimItemThrowSmashB_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimItemThrowSmashB_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimItemThrowSmashB_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimItemThrowSmashB_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimItemThrowSmashB_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimItemThrowSmashB_joint25, /* [24] joint 25 */
	(u32)dFTPikachuAnimItemThrowSmashB_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTPikachuAnimItemThrowSmashB_joint1[44] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 675, 108,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), -26, 33, -28, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 767, 104, -183, -333,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 767, -77, -183, 442,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 689, -202, 258, 421,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 615, -85, 132, -144,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 615, 43, 132, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 675, 108,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPikachuAnimItemThrowSmashB_joint2[60] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 133, 32,
	ftAnimSetValBlock(FT_ANIM_ROTX), 23,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 133, 32,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), -196,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -196, 83, 133, -10, 32, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 474, 69, 47, 21, 52, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 221, -36, 264, 31, 55, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 221, -18, 264, -11, 55, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 23, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 133, 32,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPikachuAnimItemThrowSmashB_joint3[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -13, 0, -2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -231, -31, -85, -12, 33, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -231, -8, -85, 10, 33, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -296, 70, 0, 39, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 194, 70, 150, 21, 33, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 194, 2, 150, -2, 33, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 214, -29, 128, -21, 44, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -13, 0, -2,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimItemThrowSmashB_joint5[54] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 461, 156, -46, 18, 282, -35,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 461, -9, -46, -7, 282, -97,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 451, 24, -54, -24, 185, -269,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 479, 31, -65, -12, 80, -120,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 479, -112, -65, 1, 80, 169,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 324, -62, 313,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimItemThrowSmashB_joint6[162] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, -1553, -1845, 81, -1810, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2357, -968, -1763, 340, -1890, -619,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2741, -160, -1164, 283, -3050, -622,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2679, 32, -1197, -26, -3135, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2676, -10, -1217, -10, -3132, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -2741, 53, -1164, 103, -3050, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2619, 363, -1003, 58, -3297, -554,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1173, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2013, 339, -4159, -518,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1940, 102, -4335, -139,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1550, 256, -4604, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1176, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1137, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1295, 152, -4763, -87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -4763, -133,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1114, 316,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1123, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1074, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4989, -422,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -662, 225, -5607, -401,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -898, -373,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1275, -178, -5791, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1432, -216, -5729, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1410, -137, -1708, -198, -5338, 323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1173, 302, -1829, -70, -5083, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, 368, -1849, -19, -5027, 55,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimItemThrowSmashB_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -10, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPikachuAnimItemThrowSmashB_joint8[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, -163, 20,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -219, -30, -203, -5, -3, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -219, 7, -203, 25, -3, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -158, 71, 0, 88, 0, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 212, 53, 329, 47, 79, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 212, -5, 329, -41, 79, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 164, -30, -2, -70, 39, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -2, -163, 20,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimItemThrowSmashB_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimItemThrowSmashB_joint10[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 295, -116, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -76, 0, 36, 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -316, -41, 177, 34, 219, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -248, 66, 204, -22, 283, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 280, 22, -26, -18, 43, -25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTPikachuAnimItemThrowSmashB_joint11[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 224, 267, -266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -60, 0, -59, 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -261, -31, -209, -37, -241, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -191, 57, -226, 32, -315, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 259, 17, 81, 20, -142, 28,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTPikachuAnimItemThrowSmashB_joint13[54] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -472, -169, 19, 94, 222, -103,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -472, 47, 19, -73, 222, -5,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -424, 165, -54, -235, 216, 247,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -347, 88, -156, -117, 408, 219,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -347, 17, -156, 68, 408, -69,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -324, -62, 313,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimItemThrowSmashB_joint14[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 88, -94, 33, -297, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -715, -410, -60, 106, -437, -377,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1625, -484, 117, 97, -1051, -370,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1195, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 117, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1685, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1689, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1608, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1150, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1051, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 258, 263, -1031, -162,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 966, 257, -1827, -279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1709, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1991, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2086, -181, 1161, 220, -1936, -117,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2291, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -2525, -96, 1518, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2546, -7, 1535, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1613, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -2578, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2644, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2513, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1719, 90, -2419, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1720, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2374, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2354, 66, -2073, 218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2379, -29, -1936, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2412, -33, 1703, -17, -1905, 30,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimItemThrowSmashB_joint16[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -457, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 223,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -10,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimItemThrowSmashB_joint17[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1666, -106, -1609, 18, 1201, -75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1489, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1516, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1126, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1239, 96,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1239, -182,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1498, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1499, 26,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1005, -122,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1119, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1531, -28, -1374, 105,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1503, 91,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1554, -30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1065, -106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 838, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1626, 68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1675, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 822, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1188, 24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1683, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1667, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1579, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1605, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1666, 0, -1609, -3, 1201, 13,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimItemThrowSmashB_joint19[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 946, -64,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 882, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 562, -229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 293, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 252, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 562, 264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 895, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 997, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 850, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1076, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1083, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 953, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 946, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPikachuAnimItemThrowSmashB_joint21[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1602, 97, -1736, -63, 1255, 149,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -1498, -97, -1763, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1706, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1763, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1462, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1609, -74, -1745, -4, 1272, -104,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1879, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1686, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1297, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1306, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1254, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1825, 53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1731, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1699, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1609, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1602, 7, -1736, -5, 1255, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimItemThrowSmashB_joint22[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1737, -28, 1665, -73, 1416, 319,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1813, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1579, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1735, 382,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2180, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2223, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2261, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2262, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1801, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1779, -58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1578, -72, 2180, -353,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 769, -578,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1435, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1687, -7, 1507, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1737, -73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1573, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 398, -206,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 501, 47,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1617, -97,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1712, 50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 511, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 884, 191,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1587, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1631, 31,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1746, 19, 1082, 184,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1742, -7, 1371, 81,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1656, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1737, -5, 1665, 8, 1416, 44,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimItemThrowSmashB_joint24[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 807, -256,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 550, -400,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 620, 458,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 922, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 831, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 831, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1015, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1002, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 996, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 913, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 838, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 807, -31,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTPikachuAnimItemThrowSmashB_joint25[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -6, 33, 284, -316, -484, 98,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -265, -132,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 7, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -386, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -165, 127,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -85, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -297, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -265, -33,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -100, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -165, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 39, -34, -332, 21, -378, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -152, 32, -32, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 184, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 223, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 133, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -66, 84, 47, 56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 152, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -20, -46,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 154, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -98, -147,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 187, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 276, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -56, -18, -252, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -15, 14, -476, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -6, 8, 284, 8, -484, -7,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTPikachuAnimItemThrowSmashB_joint26[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -14, 0, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 113, -14, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 113, -14, 0, 0, -3, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -608, 1, 44, 25, -768, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -193, 57, 317, -1, 185, 34,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -14, 0, -3,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
