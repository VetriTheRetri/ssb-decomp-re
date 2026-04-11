/* AnimJoint data for relocData file 479 (FTPikachuAnimClaps) */
/* 1968 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimClaps_joint1[18];
extern u16 dFTPikachuAnimClaps_joint2[20];
extern u16 dFTPikachuAnimClaps_joint3[20];
extern u16 dFTPikachuAnimClaps_joint5[50];
extern u16 dFTPikachuAnimClaps_joint6[192];
extern u16 dFTPikachuAnimClaps_joint7[16];
extern u16 dFTPikachuAnimClaps_joint8[72];
extern u16 dFTPikachuAnimClaps_joint9[12];
extern u16 dFTPikachuAnimClaps_joint10[36];
extern u16 dFTPikachuAnimClaps_joint11[36];
extern u16 dFTPikachuAnimClaps_joint13[50];
extern u16 dFTPikachuAnimClaps_joint14[182];
extern u16 dFTPikachuAnimClaps_joint16[16];
extern u16 dFTPikachuAnimClaps_joint17[32];
extern u16 dFTPikachuAnimClaps_joint19[24];
extern u16 dFTPikachuAnimClaps_joint21[44];
extern u16 dFTPikachuAnimClaps_joint22[26];
extern u16 dFTPikachuAnimClaps_joint24[24];
extern u16 dFTPikachuAnimClaps_joint25[62];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimClaps_joints[] = {
	(u32)dFTPikachuAnimClaps_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimClaps_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimClaps_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimClaps_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimClaps_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimClaps_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimClaps_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimClaps_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimClaps_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimClaps_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimClaps_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimClaps_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimClaps_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimClaps_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimClaps_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimClaps_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimClaps_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimClaps_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimClaps_joint25, /* [24] joint 25 */
	0xFFFF01DF, /* [25] END */
};

/* Joint 1 */
u16 dFTPikachuAnimClaps_joint1[18] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 675,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ), -29, 29, -23, -15,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 36), 8, 815,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 36), 0, 675,
	ftAnimLoop(0x6800, -34),
};

/* Joint 2 */
u16 dFTPikachuAnimClaps_joint2[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 24, -39, 22,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), 68, -39, 22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), 24, -39, 22,
	ftAnimLoop(0x6800, -38),
};

/* Joint 3 */
u16 dFTPikachuAnimClaps_joint3[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -13, 7, -2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), -239, 4, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), -13, 7, -2,
	ftAnimLoop(0x6800, -38),
};

/* Joint 5 */
u16 dFTPikachuAnimClaps_joint5[50] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 365, -39, 402,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 126, -77, 438,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 365, -39, 402,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 126, -77, 438,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 365, -39, 402,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 126, -77, 438,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 365, -39, 402,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 126, -77, 438,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 365, -39, 402,
	ftAnimLoop(0x6800, -98),
};

/* Joint 6 */
u16 dFTPikachuAnimClaps_joint6[192] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1232, 14, 1954, -36, -2561, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1213, -19, -2408, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1845, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1351, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1308, 27, 1084, 0, -2273, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2525, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1050, 62, 1354, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -931, 22, 1849, 99,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -999, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1954, 0, -2561, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2407, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1845, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1354, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1194, 3, 1085, 0, -2274, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2526, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -979, 49, 1355, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -898, 15, 1849, 100,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -946, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1958, 0, -2560, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2407, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1849, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1355, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1099, 0, 1085, -9, -2276, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2510, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -944, 37, 1300, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -873, 13, 1789, 108,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -915, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1949, 18, -2557, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2429, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1897, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1426, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1086, -15, -2278, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2520, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -834, 17, 1331, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -810, 4, 1826, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -804, 2, 1952, 42, -2560, -13,
	ftAnimLoop(0x6800, -380),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimClaps_joint7[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 69), -10, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 3,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimClaps_joint8[72] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -7, 8,
	ftAnimSetValRate(FT_ANIM_ROTX), -4, -25,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -33, 6, -7, 0, 8, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 79, -7, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -33, 1, -7, 0, 8, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 107, -7, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -33, -1, -7, 0, 8, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 79, -7, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -33, -7, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 79, 1, -7, 0, 8, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -4, -25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -7, 8,
	ftAnimLoop(0x6800, -142),
};

/* Joint 9 */
u16 dFTPikachuAnimClaps_joint9[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 72),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimClaps_joint10[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), 0, -1, 0, 1, 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -73, 58, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 2, 0, -2, 0, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 0, 0, 0,
	ftAnimLoop(0x6800, -70),
};

/* Joint 11 */
u16 dFTPikachuAnimClaps_joint11[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), 0, 1, 0, 0, 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 84, -22, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -3, 0, 0, 0, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 0, 0, 0,
	ftAnimLoop(0x6800, -70),
};

/* Joint 13 */
u16 dFTPikachuAnimClaps_joint13[50] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -361, -70, 396,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), -169, -81, 436,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), -361, -70, 396,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), -169, -81, 436,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), -361, -70, 396,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), -169, -81, 436,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -361, -70, 396,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -169, -81, 436,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), -361, -70, 396,
	ftAnimLoop(0x6800, -98),
};

/* Joint 14 */
u16 dFTPikachuAnimClaps_joint14[182] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1192, -11, 1206, 41, 688, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 1234, 32, 850, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1331, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1887, 133,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1890, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1356, -21, 962, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 685, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1106, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 955, -27, 1334, -114,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1330, 113,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1055, 49,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 726, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 961, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1887, 133,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1890, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1244, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1037, -50, 846, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 848, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 939, -16, 1330, -114,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1000, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1205, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1330, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1886, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1112, 0, 2132, 9, 960, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 944, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 689, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1943, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1406, -121,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1270, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 973, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 995, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 708, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 957, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1811, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 2131, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1913, -128, 853, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1358, -117, 733, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1077, 27, 1207, -50, 687, -15,
	ftAnimLoop(0x6800, -360),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimClaps_joint16[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 69), -10, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 17 */
u16 dFTPikachuAnimClaps_joint17[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1653, 0, -1601, 0, 1256, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 69), 1653, 0, -1601, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 66), 1249, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1254, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1653, 0, -1601, 0, 1256, 0,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimClaps_joint19[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 926, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 57), 899, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 908, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 924, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 926, 0,
	ftAnimLoop(0x6800, -46),
};

/* Joint 21 */
u16 dFTPikachuAnimClaps_joint21[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1782, 0, -1367, 0, 1305, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 66), -1797, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 69), -1366, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 48), 1532, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1497, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 1315, -5,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1786, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1782, 1, -1367, 0, 1305, -3,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimClaps_joint22[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -30, 0, 8, 0, -369, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 69), -30, 0, 8, 0, -370, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -30, 0, 8, 0, -369, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimClaps_joint24[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 923, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 60), 909, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 915, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 922, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 923, 0,
	ftAnimLoop(0x6800, -46),
};

/* Joint 25 */
u16 dFTPikachuAnimClaps_joint25[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1784, 1, -1862, 0, 1342, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 69), 1790, -2, -1861, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 48), 1552, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1522, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 1354, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1784, -1, -1862, 0, 1343, -3,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
	0x400E, 0xFFF2, 0x0000, 0xFFFD, 0x48E0, 0xFFFF, 0xFF4C, 0xFE9E, 0x380F, 0x002B, 0xFEBF, 0x0014, 0x005B, 0x380F, 0x001D, 0xFFF2, 0x0000, 0xFFFD, 0x6800, 0xFFDA, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
