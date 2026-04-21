/* AnimJoint data for relocData file 2001 (FTPikachuAnimItemThrowSmashD) */
/* 2912 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimItemThrowSmashD_joint1[62];
extern u16 dFTPikachuAnimItemThrowSmashD_joint2[70];
extern u16 dFTPikachuAnimItemThrowSmashD_joint3[62];
extern u16 dFTPikachuAnimItemThrowSmashD_joint5[54];
extern u16 dFTPikachuAnimItemThrowSmashD_joint6[122];
extern u16 dFTPikachuAnimItemThrowSmashD_joint7[16];
extern u16 dFTPikachuAnimItemThrowSmashD_joint8[62];
extern u16 dFTPikachuAnimItemThrowSmashD_joint9[10];
extern u16 dFTPikachuAnimItemThrowSmashD_joint10[46];
extern u16 dFTPikachuAnimItemThrowSmashD_joint11[46];
extern u16 dFTPikachuAnimItemThrowSmashD_joint13[54];
extern u16 dFTPikachuAnimItemThrowSmashD_joint14[116];
extern u16 dFTPikachuAnimItemThrowSmashD_joint16[16];
extern u16 dFTPikachuAnimItemThrowSmashD_joint17[104];
extern u16 dFTPikachuAnimItemThrowSmashD_joint19[56];
extern u16 dFTPikachuAnimItemThrowSmashD_joint21[126];
extern u16 dFTPikachuAnimItemThrowSmashD_joint22[122];
extern u16 dFTPikachuAnimItemThrowSmashD_joint24[62];
extern u16 dFTPikachuAnimItemThrowSmashD_joint25[128];
extern u16 dFTPikachuAnimItemThrowSmashD_joint26[70];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimItemThrowSmashD_joints[] = {
	(u32)dFTPikachuAnimItemThrowSmashD_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimItemThrowSmashD_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimItemThrowSmashD_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimItemThrowSmashD_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimItemThrowSmashD_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimItemThrowSmashD_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimItemThrowSmashD_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimItemThrowSmashD_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimItemThrowSmashD_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimItemThrowSmashD_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimItemThrowSmashD_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimItemThrowSmashD_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimItemThrowSmashD_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimItemThrowSmashD_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimItemThrowSmashD_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimItemThrowSmashD_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimItemThrowSmashD_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimItemThrowSmashD_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimItemThrowSmashD_joint25, /* [24] joint 25 */
	(u32)dFTPikachuAnimItemThrowSmashD_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTPikachuAnimItemThrowSmashD_joint1[62] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 675, 108,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -26, 33, -28,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 767, 244, -183, -778,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 767, -87, -183, 113,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, -1122, 734, 658, -141, 1799,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -280, -374, 931, 263, 265, 543,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -280, 172, 931, -290, 265, -34,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -130, 224, 677, -204, 236, -126,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 675, 108,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPikachuAnimItemThrowSmashD_joint2[70] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 133, 32,
	ftAnimSetValBlock(FT_ANIM_ROTX), 23,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 211, 26, 48, 5,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), -181,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -181, 217, 211, -27, 48, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 469, 441, 129, 3, 41, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 701, 38, 219, 15, 83, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 701, -54, 219, -8, 83, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 152, -67, 132, -8, 49, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 23, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 133, 32,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPikachuAnimItemThrowSmashD_joint3[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -13, 0, -2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -106, -31, 136, 45, 49, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -106, -63, 136, -45, 49, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -296, 103, 0, 5, 0, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 100, 66, 147, 24, 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 100, 11, 147, -1, 5, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 214, -11, 128, -14, 44, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -13, 0, -2,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimItemThrowSmashD_joint5[54] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 461, 365, -46, 43, 282, -82,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 461, -25, -46, -20, 282, -259,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 451, 72, -54, -74, 185, -809,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 479, 37, -65, -14, 80, -140,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 479, -82, -65, 1, 80, 124,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 324, -62, 313,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimItemThrowSmashD_joint6[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2412, -331, -1845, 1397, -1810, 372,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2081, -139, -447, 727, -1438, 156,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2134, -390, -1498,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2081, -428, -447, -391, -1438, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1276, -79, -1173, -338, -1118, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1921, 359, -1123, 22, -1546, -230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1996, 32, -1129, -6, -1579, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 2049, 242, -1065, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1546, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1704, -309,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2485, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2407, 258, -1051, -68,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 2300, -293, -1460, -132,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2555, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1898, 110,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1908, -244, -1611, -152,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 2239, 223, -1844, -10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1832, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2412, 172, -1845, 0, -1810, 21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTPikachuAnimItemThrowSmashD_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPikachuAnimItemThrowSmashD_joint8[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, -163, 20,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -207, -68, 105, 89, 48, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -207, 16, 105, -35, 48, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -158, 183, 0, -38, 0, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, 53, 29, 4, 59, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 160, 0, 29, -3, 59, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 164, -16, -2, -19, 39, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -2, -163, 20,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimItemThrowSmashD_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimItemThrowSmashD_joint10[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 295, 98, -116, -38, 188, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 295, -204, -116, 97, 188, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -316, -1, 177, 9, 219, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 280, 20, -26, -11, 43, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimItemThrowSmashD_joint11[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 224, 74, 267, 89, -266, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 224, -162, 267, -159, -266, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -261, 3, -209, -20, -241, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 259, 16, 81, 13, -142, 15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimItemThrowSmashD_joint13[54] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -472, -394, 19, 220, 222, -242,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -472, 125, 19, -197, 222, -15,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -424, 497, -54, -705, 216, 742,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -347, 103, -156, -136, 408, 255,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -347, 12, -156, 50, 408, -50,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -324, -62, 313,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimItemThrowSmashD_joint14[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2412, -821, 1703, -212, -1905, -754,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3234, -434, 1490, -103, -2659, -435,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3282, 1495, -2776,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3234, -158, 1490, -426, -2659, -329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3599, -450, 642, -700, -3436, -525,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3710, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -4134, -281, 90, -288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -4162, -14, 65, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -4226, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -57, -80,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3704, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -3957, -102,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4258, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -3959, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -141, -69, -4042, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -3558, 56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -99, 12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3979, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4007, -21, -3524, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4021, -13, -94, 5, -3514, 10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTPikachuAnimItemThrowSmashD_joint16[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimItemThrowSmashD_joint17[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1666, -251, -1609, -68, 1201, 74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1677, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1415, -104, 1275, 122,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), 1446, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 1457,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1415, -192, 1275, -420,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1071, 286, -1348, 193, 605, -385,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 567, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1987, 455, -1291, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1982, 1, -1207, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 1856, -175, -1254, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 560, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 540, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1637, -132, -1217, 4, 763, 205,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1598, -19, 1207, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1635, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1644, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1664, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1666, 1, -1609, -10, 1201, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTPikachuAnimItemThrowSmashD_joint19[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 946, -497,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 232, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 449, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 696, 295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1039, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 935, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 924, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 950, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 765, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 909, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 924, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 945, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 946, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPikachuAnimItemThrowSmashD_joint21[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1602, 303, 1480, -150, 1255, 496,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1299, 170, 1330, -66, 1752, 295,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1261, 6, 1846, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 1348,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1286, 54, 1330, -95, 1752, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1153, -329, 1157, -116, 1981, -213,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1085, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1946, -442, 1325, -364,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2038, -60, 1252, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1927, 126, 1330, 142,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1087, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1752, 22, 1124, 123, 1546, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1253, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1881, -88, 1334, 170,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1518, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1930, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1611, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1213, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1247, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1522, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1490, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1602, 9, 1480, -9, 1255, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPikachuAnimItemThrowSmashD_joint22[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1737, 64, 1665, -53, -1800, 786,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1801, -48, 1612, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1013, 430,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -939, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1013, -507,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1703, -49, 1513, -6, -1954, -452,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1619, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1838, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1918, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1858, 69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1772, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1638, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1449, -77,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1903, -249,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2547, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1815, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1981, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1402, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1594, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2489, 67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1985, 130,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1963, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1757, -32,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1646, 35, -1861, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1737, -19, 1665, 19, -1801, 59,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimItemThrowSmashD_joint24[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 807, -800,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -400,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 507, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 300, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 165, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -79,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 300, 437,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 874, 371,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 977, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 962, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 849, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 807, -41,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTPikachuAnimItemThrowSmashD_joint25[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -6, 47, 284, -480, -484, 337,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 110, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -196, -242, -147, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -199, 0, -98, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -196, 4, -147, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -190, 271, -459, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 146, 44, 346, 269, 178, 369,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 272, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 347, -15, 279, 94,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 226, 35, 130, -283,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 324, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 210, -239, 311, 11, -248, -289,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -97, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -153, -211, -448, -52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -276, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -353, 122,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -156, -90,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -358, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -23, 35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -25, 103, -283, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 230, 87, -461, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -6, 16, 284, 53, -483, -22,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTPikachuAnimItemThrowSmashD_joint26[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -14, 0, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 113, -14, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 113, -14, 0, 0, -3, -254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -608, 1, 44, 25, -768, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -940, -55, 168, 20, -679, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -940, 7, 168, 16, -679, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -866, 92, 332, -16, -358, 67,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -14, 0, -3,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
