/* AnimJoint data for relocData file 1978 (FTPikachuAnimTeeter) */
/* 3664 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimTeeter_joint1[130];
extern u16 dFTPikachuAnimTeeter_joint2[64];
extern u16 dFTPikachuAnimTeeter_joint3[66];
extern u16 dFTPikachuAnimTeeter_joint5[114];
extern u16 dFTPikachuAnimTeeter_joint6[220];
extern u16 dFTPikachuAnimTeeter_joint7[64];
extern u16 dFTPikachuAnimTeeter_joint8[70];
extern u16 dFTPikachuAnimTeeter_joint9[12];
extern u16 dFTPikachuAnimTeeter_joint10[42];
extern u16 dFTPikachuAnimTeeter_joint11[42];
extern u16 dFTPikachuAnimTeeter_joint13[114];
extern u16 dFTPikachuAnimTeeter_joint14[178];
extern u16 dFTPikachuAnimTeeter_joint16[42];
extern u16 dFTPikachuAnimTeeter_joint17[156];
extern u16 dFTPikachuAnimTeeter_joint19[56];
extern u16 dFTPikachuAnimTeeter_joint21[118];
extern u16 dFTPikachuAnimTeeter_joint22[90];
extern u16 dFTPikachuAnimTeeter_joint24[50];
extern u16 dFTPikachuAnimTeeter_joint25[152];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimTeeter_joints[] = {
	(u32)dFTPikachuAnimTeeter_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimTeeter_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimTeeter_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimTeeter_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimTeeter_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimTeeter_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimTeeter_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimTeeter_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimTeeter_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimTeeter_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimTeeter_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimTeeter_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimTeeter_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimTeeter_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimTeeter_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimTeeter_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimTeeter_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimTeeter_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimTeeter_joint25, /* [24] joint 25 */
	0xFFFF0381, /* [25] END */
};

/* Joint 1 */
u16 dFTPikachuAnimTeeter_joint1[130] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 146, 49, 906, -9, 534, 120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -26, 33, -28,
	ftAnimSetValRateT(FT_ANIM_TRAX, 11), 130, -7,
	ftAnimSetValRateT(FT_ANIM_TRAY, 13), 848, -38,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), 641, 51,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 16), 674, -23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAX, 15), 121, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 13), 781, -30,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 14), 569, -88,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 10), 116, -1, 759, 11,
	ftAnimSetValRateT(FT_ANIM_TRAX, 10), 118, 14,
	ftAnimSetValRateT(FT_ANIM_TRAY, 11), 812, 74,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 9), 442, -154,
	ftAnimBlock(0, 6),
	ftAnimSetValRateT(FT_ANIM_TRAX, 10), 153, 27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY, 9), 928, 96,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 12), 170, -138,
	ftAnimBlock(0, 7),
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 14), 200, 9, 1089, 53,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 24), 260, 169,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 11), 184, -14, 1096, -42,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 13), 157, -15, 961, -79,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 7), 406, 175,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 8), 534, 76,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), 906, -45,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 6), 146,
	ftAnimLoop(0x6800, -258),
};

/* Joint 2 */
u16 dFTPikachuAnimTeeter_joint2[64] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 536, 17, 0, 0, -137, 6,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 919, 2, -13, 0, 212, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -1, 0, -155, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 847, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 338, -16,
	ftAnimBlock(0, 8),
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 20, 0, -638, 0,
	ftAnimBlock(0, 16),
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 204, 5,
	ftAnimBlock(0, 8),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 30), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 30), -137, 9,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), 536, 15,
	ftAnimLoop(0x6800, -126),
};

/* Joint 3 */
u16 dFTPikachuAnimTeeter_joint3[66] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 83, 0, -87, -3, 35, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 103, 0, -152, 1, 27, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), -22, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 34), 72, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), 66, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 177, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 18, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 85, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 74, 0, -21, -4, 61, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 14), 83, 0, -87, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 14), 35,
	ftAnimLoop(0x6800, -130),
};

/* Joint 5 */
u16 dFTPikachuAnimTeeter_joint5[114] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 286, 66, -124, -96, 409, -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 374, 56, -225, 23, 395, -17,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 400, 0, -77, 109, 374, 19,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 375, -89, 34, -11, 442, 46,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 210, -22, -100, -110, 473, -42,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 331, 135, -186, 25, 357, -157,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 481, 54, -49, 108, 158, -60,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 434, -84, 17, -57, 244, 118,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 312, -38, -165, -137, 395, 43,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 358, 75, -257, 61, 332, -87,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 463, 45, -41, 121, 219, -36,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 449, -90, -15, -36, 259, 88,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 271, -118, -118, -79, 407, 109,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 286, -124, 409,
	ftAnimLoop(0x6800, -226),
};

/* Joint 6 */
u16 dFTPikachuAnimTeeter_joint6[220] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2077, 14, -1836, 47, -2259, 50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 2118, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -2432, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), -1349, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1207, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1188, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 2323, 71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 2640, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2575, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -2719, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 2164, -57, -1342, -106, -2741, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 2296, 38, -1828, -86, -2190, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 2397, 14, -1859, 28, -2012, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 2161, -62, -1975, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1660, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1533, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1036, 51,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1945, -29, -1912, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 2147, 35, -2263, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -985, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1218, -5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 2200, 14, -2356, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 2233, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2426, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1187, -96, -2453, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 2104, -18, -1799, -89, -1963, 76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 2049, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1726, 33, -1992, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1833, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -1468, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1172, 85,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -914, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1699, -16, -1684, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 2247, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2055, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1022, -33, -2366, -63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2476, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1452, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 2295, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 2091, -25,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2499, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 2039, -17, -1868, -138, -2351, 49,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2039, -1868, -2351,
	ftAnimLoop(0x6800, -438),
};

/* Joint 7 */
u16 dFTPikachuAnimTeeter_joint7[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -815, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -854, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -819, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 24), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 3,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -126),
};

/* Joint 8 */
u16 dFTPikachuAnimTeeter_joint8[70] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 76, 0, 152, -4, 44, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 58, 0, -24, 1, 43, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 89, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 262, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), -28, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), 245, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 272, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 22), 352, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 25), 78, -3, 179, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 54, -6,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 5), 44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 76, 0, 152, -4,
	ftAnimLoop(0x6800, -138),
};

/* Joint 9 */
u16 dFTPikachuAnimTeeter_joint9[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 100),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimTeeter_joint10[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -184, 6, 62, -4, 51, 2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), -136, 1, -76, -5, 83, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -82, -1, -236, 3, 119, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -205, -2, 125, 6, 36, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -184, 62, 51,
	ftAnimLoop(0x6800, -82),
};

/* Joint 11 */
u16 dFTPikachuAnimTeeter_joint11[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -87, 9, -90, 2, -104, -2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), -3, 3, -2, 3, -131, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 93, -2, 98, -2, -162, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -125, -4, -130, -4, -91, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -87, -90, -104,
	ftAnimLoop(0x6800, -82),
};

/* Joint 13 */
u16 dFTPikachuAnimTeeter_joint13[114] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -316, 7, -12, 3, 511, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -213, 88, -47, -40, 424, -35,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), -139, -19, -93, -65, 440, 14,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -259, -140, -202, 0, 458, 4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -437, 21, -93, 109, 449, 24,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), -216, 192, 15, -41, 507, -26,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -28, 69, -180, -143, 393, -2,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), -68, -89, -289, 9, 501, 43,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -206, -50, -160, 74, 479, -53,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -156, 87, -159, 0, 407, -4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), -30, -1, -161, -8, 470, 45,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -159, -130, -176, 55, 504, -15,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -292, -125, -50, 131, 439, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -316, -12, 511,
	ftAnimLoop(0x6800, -226),
};

/* Joint 14 */
u16 dFTPikachuAnimTeeter_joint14[178] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2183, 29, 284, -28, -729, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -974, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 42), 2420, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 15), -424, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -477, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -29, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -872, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -855, 9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 36, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), 56, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -100, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -237, 57,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 2289, -58, -803, 39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -203, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 1822, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1846, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 2087, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -243, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -619, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 8, 70,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 84, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 2210, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 2544, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -674, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -928, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -86, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -324, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 2558, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 2515, -53,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -872, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 2253, -61, -363, 24, -484, 71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 2160, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -177, 47, -443, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -663, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -77, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 223, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 2175, 5, 291, 22, -726, -21,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2175, 291, -726,
	ftAnimLoop(0x6800, -354),
};

/* Joint 16 */
u16 dFTPikachuAnimTeeter_joint16[42] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 75), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -451, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -10, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), -10,
	ftAnimLoop(0x6800, -82),
};

/* Joint 17 */
u16 dFTPikachuAnimTeeter_joint17[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1605, -52, -966, -8, 705, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), 951, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), 1219, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 21), -1543, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1599, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), -1022, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 933, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 786, -23,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1226, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1563, 79,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 678, -57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 133, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1864, 99,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 2414, 28,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1098, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -975, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 125, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 70, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 2488, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 2660, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 2752, -4, -42, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 2387, -19, 139, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -961, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1054, 11,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 2348, -11, 141, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), 2061, -62, 327, 51,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1007, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -944, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1836, -65, 515, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1665, -56, -959, -4, 652, 45,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1665, -959, 652,
	ftAnimLoop(0x6800, -310),
};

/* Joint 19 */
u16 dFTPikachuAnimTeeter_joint19[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 983, -11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 334, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 241, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 761, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 849, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 429, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 204, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 126, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 925, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 964, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 990, 8,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), 990,
	ftAnimLoop(0x6800, -108),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPikachuAnimTeeter_joint21[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1958, 13, 1224, 0, 1756, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 36), 1731, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), 1146, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), 1549, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1453, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), 1562, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1752, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 1515, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1156, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 1083, -7,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1414, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1424, 51,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1703, 61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 2374, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1050, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 1193, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1631, 72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 2007, 3,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 2315, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 1824, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 2003, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1964, -2,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1214, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1959, -1, 1228, 4, 1770, -17,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1959, 1228, 1770,
	ftAnimLoop(0x6800, -234),
};

/* Joint 22 */
u16 dFTPikachuAnimTeeter_joint22[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 75, -12, 258, 3, -752, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 163, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 18), 479, 19, 92, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 513, 1, 96, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 67, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), -214, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 70, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 18), -17, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 62, 2, -66, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 30), 509, -15, -281, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -250, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), -545, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 450, -16, -205, 32, -539, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 164, -23, 243, 8, -793, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 82, -27, 257, 4, -763, 10,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 82, 257, -763,
	ftAnimLoop(0x6800, -178),
};

/* Joint 24 */
u16 dFTPikachuAnimTeeter_joint24[50] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 790, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 501, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 239, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 6, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 6, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 48), 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 442, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 548, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 697, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 782, 28,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), 782,
	ftAnimLoop(0x6800, -98),
};

/* Joint 25 */
u16 dFTPikachuAnimTeeter_joint25[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -80, 7, -19, -7, 246, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), 606, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 33), -113, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -48, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 111, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -36, 20,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 600, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 43, -20,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 58, 40, -134, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 325, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 60), -17, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 21, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), 362, -22,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 243, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 18), -368, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -362, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -230, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 276, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), 226, 8,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -179, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -137, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -86, 17, -18, 0, 244, 6,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -86, -18, 244,
	ftAnimLoop(0x6800, -226),
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -794, -10, 136, -2, -821, -11,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), -982, 0, 317, 0, -941, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 46), -757, 3, 100, -3, -797, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -794, 136, -821,
	ftAnimLoop(0x6800, -66),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
