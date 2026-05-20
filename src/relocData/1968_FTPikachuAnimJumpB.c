/* AnimJoint data for relocData file 1968 (FTPikachuAnimJumpB) */
/* 2016 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimJumpB_joint1[38];
extern u16 dFTPikachuAnimJumpB_joint2[46];
extern u16 dFTPikachuAnimJumpB_joint3[46];
extern u16 dFTPikachuAnimJumpB_joint5[22];
extern u16 dFTPikachuAnimJumpB_joint6[58];
extern u16 dFTPikachuAnimJumpB_joint7[16];
extern u16 dFTPikachuAnimJumpB_joint8[46];
extern u16 dFTPikachuAnimJumpB_joint9[10];
extern u16 dFTPikachuAnimJumpB_joint10[44];
extern u16 dFTPikachuAnimJumpB_joint11[44];
extern u16 dFTPikachuAnimJumpB_joint13[34];
extern u16 dFTPikachuAnimJumpB_joint14[62];
extern u16 dFTPikachuAnimJumpB_joint16[16];
extern u16 dFTPikachuAnimJumpB_joint17[66];
extern u16 dFTPikachuAnimJumpB_joint19[40];
extern u16 dFTPikachuAnimJumpB_joint21[76];
extern u16 dFTPikachuAnimJumpB_joint22[100];
extern u16 dFTPikachuAnimJumpB_joint24[54];
extern u16 dFTPikachuAnimJumpB_joint25[76];
extern u16 dFTPikachuAnimJumpB_joint26[62];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTPikachuAnimJumpB_joints[] = {
	(AObjEvent32 *)dFTPikachuAnimJumpB_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTPikachuAnimJumpB_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTPikachuAnimJumpB_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTPikachuAnimJumpB_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTPikachuAnimJumpB_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTPikachuAnimJumpB_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTPikachuAnimJumpB_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTPikachuAnimJumpB_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTPikachuAnimJumpB_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTPikachuAnimJumpB_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTPikachuAnimJumpB_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTPikachuAnimJumpB_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTPikachuAnimJumpB_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTPikachuAnimJumpB_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTPikachuAnimJumpB_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTPikachuAnimJumpB_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTPikachuAnimJumpB_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTPikachuAnimJumpB_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTPikachuAnimJumpB_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTPikachuAnimJumpB_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTPikachuAnimJumpB_joint1[38] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1094, -120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 62, 37, -22, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 21), 1094, -32, -120, 47,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 998, 117, 23, 314,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1196, 334, 155, 11,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 1291, -38, 33, -124,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 1114, -108,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPikachuAnimJumpB_joint2[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3513, 37, 156,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 3373, -39, 69, -1, 131, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 2599, -197, 11, -15, 70, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1993, -168, -37, -13, 25, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1423, -55, -84, -6, -9, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 1003, -149, 120,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimJumpB_joint3[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 147, 23, 39,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 147, -6, 23, 1, 39, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -3, 0, 55, 3, -45, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 142, 3, 50, 0, -21, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 22, -17, 55, 0, -41, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -173, 58, -73,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimJumpB_joint5[22] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 124, -116, 556,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 155, 5, -47, 12, 495, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 25), 155, -47, 495,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimJumpB_joint6[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -671, 0, -1755, -1, 1153, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), -670, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), -1811, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 929, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 931, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1250, -12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -657, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -760, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1814, 3, 1066, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -1754, 3, 719, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -764, -1, -1745, 3, 703, -5,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimJumpB_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 42), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPikachuAnimJumpB_joint8[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 155, -184, -56,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 47, -25, -183, 3, -54, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -444, -70, -95, 12, 2, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -444, 99, -95, 0, 2, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 154, -1, -99, -4, -8, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -464, -174, -53,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimJumpB_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 40, -29, 2414, 5, 29, 491,
	ftAnimBlock(0, 45),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimJumpB_joint10[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -201, 52, 117,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 163, -28, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -201, 3, 52, 1, 117, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 230, 21, 1, -4, 133, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 213, -20, -34, 2, 110, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -201, 52, 117,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTPikachuAnimJumpB_joint11[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -166, -144, -146,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 217, 11, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -166, -1, -144, 1, -146, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 182, 24, 41, 9, -198, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 295, -16, 45, -8, -199, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -166, -144, -146,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTPikachuAnimJumpB_joint13[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -2, 0, -1, -416, -64, 364,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 45), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), -381, 10, 49, 15, 306, -4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), -377, 4, -10, 60, 349, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), -368, 238, 333,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimJumpB_joint14[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 690, 0, 1437, 1, 1004, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 667, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 42), 1458, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 994, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 968, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 745, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 569, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 542, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 756, 49, 1099, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), 534, -17, 729, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 503, -6, 657, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 494, -2, 1462, 1, 635, -7,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimJumpB_joint16[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 42), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimJumpB_joint17[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -98, 1, 18, 0, -470, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -94, -11, 66, -5, -515, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -151, -31, 25, -34, -429, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -285, -9, -138, -17, -107, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -207, 16, -79, 13, -801, -118,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), -117, -4, -25, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -574, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -508, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -755, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -136, -6, -55, -10, -840, -28,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimJumpB_joint19[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 353, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 553, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 456, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 652, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 662, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 586, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 363, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 639, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 710, 23,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPikachuAnimJumpB_joint21[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 52, -1, 161, -2, 316, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 80, -5, 395, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 18), -79, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -30, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -431, 16, 52, 16, 441, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 71, 86, 176, 18, -42, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 88, 6, 164, -10, 90, 62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 131, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 113, 0, 331, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 43, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 303, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 174, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 59, 5, 133, 0, 151, -7,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimJumpB_joint22[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 288, 1, 140, 0, -368, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 334, 3, 155, 2, -325, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 339, -19, 163, 24, -308, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 215, -24, 301, 14, -540, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 190, -27, 250, 1, -454, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -95, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 311, -14, -215, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 161, -26, -797, -132,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 180, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1009, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 74, 46, -699, 72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 198, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 142, 4, -576, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 268, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -848, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1089, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 262, 21, 302, 11, -1189, -33,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimJumpB_joint24[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 12), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 448, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 394, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 691, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 525, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 704, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 275, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 327, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 514, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 549, 11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimJumpB_joint25[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -66, 0, 17, 0, 625, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), -149, -27, 519, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 18), -143, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -102, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 404, 54, -218, 0, 395, -86,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -164, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 223, -41, -1, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 154, -41, 95, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -26, -34, -162, -1, 556, 81,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -152, -23, -242, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 584, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 347, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -250, -32, -248, -2, 292, -18,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTPikachuAnimJumpB_joint26[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -405, 252, -432,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 326, 24, -153, -13, -1480, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 88, -46, -22, 22, -1368, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -472, -272, 221, 58, -1567, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1002, -18, 209, -30, -1768, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -672, 27, -114, -27, -708, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -672, 22, -114, 30, -708, 23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -405, 252, -432,
	ftAnimEnd(),
};
