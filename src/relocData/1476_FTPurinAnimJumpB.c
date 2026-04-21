/* AnimJoint data for relocData file 1476 (FTPurinAnimJumpB) */
/* 1984 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimJumpB_joint1[22];
extern u16 dFTPurinAnimJumpB_joint2[16];
extern u16 dFTPurinAnimJumpB_joint3[28];
extern u16 dFTPurinAnimJumpB_joint5[50];
extern u16 dFTPurinAnimJumpB_joint6[130];
extern u16 dFTPurinAnimJumpB_joint7[22];
extern u16 dFTPurinAnimJumpB_joint9[50];
extern u16 dFTPurinAnimJumpB_joint10[124];
extern u16 dFTPurinAnimJumpB_joint11[22];
extern u16 dFTPurinAnimJumpB_joint13[30];
extern u16 dFTPurinAnimJumpB_joint14[82];
extern u16 dFTPurinAnimJumpB_joint16[14];
extern u16 dFTPurinAnimJumpB_joint18[108];
extern u16 dFTPurinAnimJumpB_joint19[106];
extern u16 dFTPurinAnimJumpB_joint21[14];
extern u16 dFTPurinAnimJumpB_joint22[130];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTPurinAnimJumpB_joints[] = {
	(u32)dFTPurinAnimJumpB_joint1, /* [0] joint 1 */
	(u32)dFTPurinAnimJumpB_joint2, /* [1] joint 2 */
	(u32)dFTPurinAnimJumpB_joint3, /* [2] joint 3 */
	(u32)dFTPurinAnimJumpB_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPurinAnimJumpB_joint6, /* [5] joint 6 */
	(u32)dFTPurinAnimJumpB_joint7, /* [6] joint 7 */
	(u32)dFTPurinAnimJumpB_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTPurinAnimJumpB_joint10, /* [9] joint 10 */
	(u32)dFTPurinAnimJumpB_joint11, /* [10] joint 11 */
	(u32)dFTPurinAnimJumpB_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPurinAnimJumpB_joint14, /* [13] joint 14 */
	(u32)dFTPurinAnimJumpB_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPurinAnimJumpB_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTPurinAnimJumpB_joint19, /* [18] joint 19 */
	(u32)dFTPurinAnimJumpB_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPurinAnimJumpB_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTPurinAnimJumpB_joint1[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 600, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 25), 0, 0, -268, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), -3216, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPurinAnimJumpB_joint2[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 25), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 15), -268,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPurinAnimJumpB_joint3[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 25), 178, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -536, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -357, 80,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTPurinAnimJumpB_joint5[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 178, -28, -363, -80,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 25), -28, 1, -363, 0, -80, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 25), 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 357, 0, 192, 374, -526, -393, 16, 293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 357, 0, 217, -269, -830, 2, 215, 106,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 178, -144, -737, 238,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTPurinAnimJumpB_joint6[130] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 689, 4, -887, -3, 199, -3,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 685, 6, -889, 0, 210, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 694, -80, -891, 17, 194, 119,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -908, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 524, 40, 448, 545,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 775, 159, 1284, 500,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 819, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1044, -127, 1449, 118,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1151, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1521, 60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1557, -84,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 809, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 954, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1072, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1427, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1426, -126,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1294, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 933, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1006, 303, 1292, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1011, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1540, 546,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2098, 367,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2275, 115, -1530, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2329, 53, -1574, -44, 977, -33,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPurinAnimJumpB_joint7[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 12), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPurinAnimJumpB_joint9[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -178, 10, -317, -47,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 25), 10, 0, -317, 0, -47, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 25), -178,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -198, -3, -537, -502, 17, 316,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), -357,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 10), -178,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 50, 132, -827, 2, 284, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 69, -722, 238,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPurinAnimJumpB_joint10[124] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2623, -7, 708, 2, -1997, -7,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), 708, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 22), -2636, -2, -2020, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2634, 5, -2016, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2164, -253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -2623, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2676, 84, 717, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2269, 83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 307, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2504, -280,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -3236, -160,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2286, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -3056, -289,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3385, -125,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -3786, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 195, -87,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -3, -72,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3360, -289,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -3976, -75,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3887, -69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3920, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -69, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -4005, -13, -104, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4002, 2, -109, -4, -3913, 7,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPurinAnimJumpB_joint11[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 16), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPurinAnimJumpB_joint13[30] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 25), -804, 0, 0, 0, -1072, 0, 204, 0, -120, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), -501, 264, -1427, 106, -21, 16,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPurinAnimJumpB_joint14[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1750, 0, -275, 0, -353, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), -289, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 25), -1750, -4, -353, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1757, -13, -348, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2260, -325,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 90, 149,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -297, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -348, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2643, -317,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -3027, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 246, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 466, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 429, -40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 360, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3048, -16, -305, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3059, -11, -286, 19, 348, -11,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPurinAnimJumpB_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTPurinAnimJumpB_joint18[108] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1675, 0, -313, 0, -2288, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), -318, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 25), 1675, 5, -2288, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1684, 14, -2294, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1780, 74, -2340, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -328, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -411, 20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1883, 190, -2377, -90,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2739, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2162, 333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2550, 285, -348, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2814, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -265, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2837, -74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -3073, -13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2839, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2955, 26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -207, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -152, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2971, 15, -128, 23, -3082, -9,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPurinAnimJumpB_joint19[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 323, 0, 1395, 0, 1491, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), 1491, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), 1391, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 24), 325, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 323, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 485, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1491, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1524, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1384, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1290, 33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 583, 70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 578, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1518, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1902, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 621, 169, 1339, 48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1347, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 917, 363,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1349, 274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1466, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1434, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1411, -16, 1307, -27, 1931, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1401, -9, 1291, -15, 1940, 8,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPurinAnimJumpB_joint21[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPurinAnimJumpB_joint22[130] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 5120,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -276, 0, 1355, 0, -734, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX, 25), 1355, -2, -734, -3, 5120, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 24), -279, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -276, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -456, -109,
	ftAnimSetValRateT(FT_ANIM_SCAX, 10), 3686, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1349, -11, -738, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1057, -61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1283, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -569, -87,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -654, -44,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1118, -68,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1304, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -732, -162, 1307, 109,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1248, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1502, 248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1804, 159, -1320, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1731, -97,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1414, -3,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 3686,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1329, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1306, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1626, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1552, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1300, 6, 1525, -26, -1415, -1,
	ftAnimEnd(),
	0x0000, 0x0000,
};
