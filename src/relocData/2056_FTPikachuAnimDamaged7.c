/* AnimJoint data for relocData file 2056 (FTPikachuAnimDamaged7) */
/* 2400 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimDamaged7_joint1[66];
extern u16 dFTPikachuAnimDamaged7_joint2[70];
extern u16 dFTPikachuAnimDamaged7_joint3[60];
extern u16 dFTPikachuAnimDamaged7_joint5[30];
extern u16 dFTPikachuAnimDamaged7_joint6[70];
extern u16 dFTPikachuAnimDamaged7_joint7[14];
extern u16 dFTPikachuAnimDamaged7_joint8[70];
extern u16 dFTPikachuAnimDamaged7_joint9[10];
extern u16 dFTPikachuAnimDamaged7_joint10[62];
extern u16 dFTPikachuAnimDamaged7_joint11[62];
extern u16 dFTPikachuAnimDamaged7_joint13[38];
extern u16 dFTPikachuAnimDamaged7_joint14[86];
extern u16 dFTPikachuAnimDamaged7_joint16[14];
extern u16 dFTPikachuAnimDamaged7_joint17[80];
extern u16 dFTPikachuAnimDamaged7_joint19[48];
extern u16 dFTPikachuAnimDamaged7_joint21[78];
extern u16 dFTPikachuAnimDamaged7_joint22[84];
extern u16 dFTPikachuAnimDamaged7_joint24[44];
extern u16 dFTPikachuAnimDamaged7_joint25[162];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimDamaged7_joints[] = {
	(u32)dFTPikachuAnimDamaged7_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimDamaged7_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimDamaged7_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimDamaged7_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimDamaged7_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimDamaged7_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimDamaged7_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimDamaged7_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimDamaged7_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimDamaged7_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimDamaged7_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimDamaged7_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimDamaged7_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimDamaged7_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimDamaged7_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimDamaged7_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimDamaged7_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimDamaged7_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimDamaged7_joint25, /* [24] joint 25 */
	0xFFFF022A, /* [25] END */
};

/* Joint 1 */
u16 dFTPikachuAnimDamaged7_joint1[66] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 1114, -108, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 62, 37, -22, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 832, -98, 32, 167, 4096, 1228, 4096, 1228, 4096, -1228,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 930, 77, 205, -38,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 5324, -819, 5324, -819, 2867, 1228,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 3276, -1228, 3276, -1228, 5324, 1228,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 60, 4096, 60, 4096, -91,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 26), 4096, 4096, 4096,
	ftAnimBlock(0, 11),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 1114, -108,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPikachuAnimDamaged7_joint2[70] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -149, 120,
	ftAnimSetValBlock(FT_ANIM_ROTX), 1003,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 45, 117, 151, -44,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 255,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -430, 84, 31,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -220, 9, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -185, 41, 64, -3, 95, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -347, -50, 77, -7, 62, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -639, -33, -6, -10, 20, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -786, -91, -62, -7, 5, 5,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -149, 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), -2229,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), -2229,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimDamaged7_joint3[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -173, 58, -73,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -442, -67, 320, 65, -280, -51,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -442, 320, -280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -442, 4, 320, -4, -280, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -389, 82, 269, -34, -240, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 135, 19, 79, -19, 88, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -173, -34, 58, -2, -73, -18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -173, 58, -73,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTPikachuAnimDamaged7_joint5[30] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 155, -47, 495,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 433, -31, 56, -12, 298, -15,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 63, -131, -83, -49, 449, 92,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 155, -47, 495,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimDamaged7_joint6[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2452, 36, -1745, 39, 703, 220,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 2530, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1438, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1365, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1002, -109,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 684, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 2458, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 2537, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1431, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1773, -6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 945, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1091, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 2478, -14, -1764, 3, 808, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 2452, -8, -1749, 4, 704, -34,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimDamaged7_joint7[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 27), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 3,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimDamaged7_joint8[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -464, -174, -53,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -68, -9, -66, 47, 16, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -500, -33, 15, 6, -39, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -500, 0, 15, -3, -39, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -493, -41, -21, -22, -41, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -750, 38, -121, -13, -70, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -184, 40, -126, -7, -42, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -464, -46, -174, -8, -53, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -464, -174, -53,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimDamaged7_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 40, -29, 2414, 5, 29, 491,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimDamaged7_joint10[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -201, 52, 117,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 273, -105, -96, -57, 32, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -412, -30, -62, 8, 45, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -268, 32, 58, 6, 112, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 206, 44, 66, -10, 226, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 42, -74, -15, 0, 140, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -315, -61, 73, 16, 62, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -201, 52, 117,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimDamaged7_joint11[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -166, -144, -146,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 216, 29, -18, 24, -172, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -108, -21, -96, -9, -31, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -161, 12, -183, 3, -132, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 132, 37, -32, 18, -54, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 99, -61, -56, -2, -23, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -295, -66, -47, -21, -3, -30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -166, -144, -146,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimDamaged7_joint13[38] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -368, 238, 333,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -465, -69, -10, -193, 169, -108,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), -481, 42, -76, -45, 156, 67,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -346, 53, -136, 148, 358, 83,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -368, 238, 333,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimDamaged7_joint14[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 495, 160, 1466, -83, 637, 269,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1014, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 978, 23, 1444, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 635, -79, 927, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 499, 7, 1062, 12, 706, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 680, 6, 1092, 43, 962, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 539, -14, 1322, 55, 706, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1582, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 594, 25, 823, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 670, -25, 1015, -45,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1637, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 537, -29, 1513, -29, 750, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 494, -14, 1462, -16, 635, -38,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimDamaged7_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), -10, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimDamaged7_joint17[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1755, -226, -1543, 119, 770, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -2435, -114, -1183, 54, 1351, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -2442, -21, -1215, 9, 1516, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -2599, 74, -1151, -20, 1836, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -2117, 175, -1247, -43, 1533, -126,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 702, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1549, 55, -1409, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1784, -73, -1621, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1992, -59, -1489, 30, 760, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -2143, 39, -1440, -8, 872, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1755, 129, -1543, -34, 770, -34,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimDamaged7_joint19[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 710, -30,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 619, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 412, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 549, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 542, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 496, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 721, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 855, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 737, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 582, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 710, 42,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPikachuAnimDamaged7_joint21[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 80, 167, 133, 87, 151, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 584, 45, 396, 19, 600, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 353, -16, 249, -37, 503, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 42, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 385, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 484, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 480, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 429, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -21, -5, -62, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 46, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 393, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 654, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 588, -95, 193, 14, 310, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 80, -169, 133, -20, 151, -53,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimDamaged7_joint22[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1871, -146, 1305, 26, 419, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1433, -60, 1384, -10, 356, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1511, 62, 1243, -18, 672, 130,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1441, 46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1529, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1807, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1952, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1828, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1419, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1298, -40, 1157, -144,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1321, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1566, -51, 555, -131,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1695, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 367, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 528, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1871, 58, 1305, -5, 419, -36,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimDamaged7_joint24[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 549, 89,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 831, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 642, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 319, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 416, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 576, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 852, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 709, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 281, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 549, 89,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimDamaged7_joint25[162] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -250, 62, -248, 10, 292, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 3, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -62, 18, 397, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -141, -33, 276, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 447, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -302, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -468, -11, 62, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -373, 21, -95, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -339, 28, -153, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -145, -7, -174, -13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 503, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -250, -35, -248, -24, 292, -70,
	ftAnimEnd(),
	0x420E, 0xFE6B, 0x00FC, 0xFE50, 0x1000, 0x4DE0, 0xFFFF, 0xFF4C, 0xFE9E, 0x1000, 0x1000, 0x2A01, 0x0002, 0x1000, 0xFDDE, 0x200F, 0x0001, 0xFF3F, 0x00B2, 0x0165, 0x007F, 0xFEFE, 0x007A, 0x200F, 0x0001, 0xFFD1, 0xFF57, 0x01FA, 0xFF74, 0xFF46, 0xFF6B, 0x280F, 0x0001, 0xFDEC, 0xFF74, 0x004B, 0xFF91, 0xFDD3, 0xFF71, 0x3A01, 0x0001, 0x0CCC, 0x220F, 0x0001, 0xFEB8, 0x0013, 0x011B, 0xFFFF, 0xFE27, 0x000C, 0x1000, 0x003C, 0x4201, 0x001A, 0x1000, 0x200F, 0x000B, 0xFED9, 0x0014, 0x0039, 0xFFF8, 0xFE6B, 0x001D, 0x200F, 0x0008, 0x0043, 0x0015, 0x007D, 0x000F, 0x0059, 0x0019, 0x200F, 0x0004, 0xFFDA, 0xFFBD, 0x00EE, 0x0012, 0xFF9B, 0xFFB6, 0x380F, 0x0003, 0xFE6B, 0x00FC, 0xFE50, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
