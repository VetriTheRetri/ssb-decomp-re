/* AnimJoint data for relocData file 2052 (FTPikachuAnimCliffEscapeSlow2) */
/* 3760 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimCliffEscapeSlow2_joint1[30];
extern u16 dFTPikachuAnimCliffEscapeSlow2_joint2[92];
extern u16 dFTPikachuAnimCliffEscapeSlow2_joint3[64];
extern u16 dFTPikachuAnimCliffEscapeSlow2_joint4[58];
extern u16 dFTPikachuAnimCliffEscapeSlow2_joint6[84];
extern u16 dFTPikachuAnimCliffEscapeSlow2_joint7[130];
extern u16 dFTPikachuAnimCliffEscapeSlow2_joint8[42];
extern u16 dFTPikachuAnimCliffEscapeSlow2_joint9[70];
extern u16 dFTPikachuAnimCliffEscapeSlow2_joint10[10];
extern u16 dFTPikachuAnimCliffEscapeSlow2_joint11[90];
extern u16 dFTPikachuAnimCliffEscapeSlow2_joint12[90];
extern u16 dFTPikachuAnimCliffEscapeSlow2_joint14[106];
extern u16 dFTPikachuAnimCliffEscapeSlow2_joint15[142];
extern u16 dFTPikachuAnimCliffEscapeSlow2_joint17[50];
extern u16 dFTPikachuAnimCliffEscapeSlow2_joint18[148];
extern u16 dFTPikachuAnimCliffEscapeSlow2_joint20[72];
extern u16 dFTPikachuAnimCliffEscapeSlow2_joint22[130];
extern u16 dFTPikachuAnimCliffEscapeSlow2_joint23[134];
extern u16 dFTPikachuAnimCliffEscapeSlow2_joint25[56];
extern u16 dFTPikachuAnimCliffEscapeSlow2_joint26[138];
extern u16 dFTPikachuAnimCliffEscapeSlow2_joint27[90];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTPikachuAnimCliffEscapeSlow2_joints[] = {
	(AObjEvent32 *)dFTPikachuAnimCliffEscapeSlow2_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTPikachuAnimCliffEscapeSlow2_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTPikachuAnimCliffEscapeSlow2_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTPikachuAnimCliffEscapeSlow2_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTPikachuAnimCliffEscapeSlow2_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTPikachuAnimCliffEscapeSlow2_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTPikachuAnimCliffEscapeSlow2_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTPikachuAnimCliffEscapeSlow2_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTPikachuAnimCliffEscapeSlow2_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTPikachuAnimCliffEscapeSlow2_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTPikachuAnimCliffEscapeSlow2_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTPikachuAnimCliffEscapeSlow2_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTPikachuAnimCliffEscapeSlow2_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTPikachuAnimCliffEscapeSlow2_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTPikachuAnimCliffEscapeSlow2_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTPikachuAnimCliffEscapeSlow2_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTPikachuAnimCliffEscapeSlow2_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTPikachuAnimCliffEscapeSlow2_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTPikachuAnimCliffEscapeSlow2_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTPikachuAnimCliffEscapeSlow2_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTPikachuAnimCliffEscapeSlow2_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTPikachuAnimCliffEscapeSlow2_joint1[30] = {
	ftAnimSetVal(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValT(FT_ANIM_TRAY, 12), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 4), -11,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 2024,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 48), 4815,
	ftAnimBlock(0, 8),
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 42), 0,
	ftAnimBlock(0, 40),
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 2), 4815,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimCliffEscapeSlow2_joint2[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -21, 0, 26, 0, -23, 0, 229, -17, 492, -171, -153, 89,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 6), 203, -43, 856, 265,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 54), -26, 33, -28,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), 101,
	ftAnimSetValT(FT_ANIM_TRAZ, 50), 101,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 111, -236, 790, -117,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 19, -147, 768, -34,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 19, -7, 768, 87,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 13, 834,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 6), 19, 768,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 13, 834,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 19, 0, 768, 34,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 6), 13, -7, 878, 80,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 10, -7, 862, -28,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 9, 0, 860, -127,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 10), 9, 675,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPikachuAnimCliffEscapeSlow2_joint3[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 137, 18, 5, -2, 163, 2, -57, 13, -219, 2, -111, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 54), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 159, 56, -4, -2, 50, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 650, 15, -18, 0, -7, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 27), 650, -5, -18, 1, -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 471, -47, 16, 11, 1, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 23, -38, 133, 9, 32, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 23, 133, 32,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTPikachuAnimCliffEscapeSlow2_joint4[58] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 210, -23, 0, -1, 19, 1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -104, -18, 9, 1, 12, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 10, 1, 12, 0, 3, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -71, 5, 3, 0, 2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 175, 11, 10, 0, 13, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 112, -12, 4, 0, 25, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -13, 0, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTPikachuAnimCliffEscapeSlow2_joint6[84] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 316, 10, -113, -33, 389, -32,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 316, -10, -197, 108, 396, 16,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 301, -13, 36, 61, 412, -33,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 300, -120, 355,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 301, 2, 36, -21, 412, 34,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 303, -150, 402,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 301, 0, 36, 12, 412, 25,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 304, 14, -130, -122, 444, 55,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 320, 15, -122, 53, 484, -104,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 324, 2, -62, 40, 313, -117,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 324, -62, 313,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTPikachuAnimCliffEscapeSlow2_joint7[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 448, -9, 155, -9, -594, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -50, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 610, 95, -598, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 992, 32, -999, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 804, -140, -1108, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 149, -97, -338, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 221, 109, 120, -2, -1042, -130,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -312, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 804, 6, -1122, 45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -500, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 261, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 201, -6, 0, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 300, -5, -93, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1130, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1097, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -937, 72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -461, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 289, 13, -114, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -154, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 763, 28,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -508, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -439, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -167, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -56, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 804, 13, 240, 99, -202, 79,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimCliffEscapeSlow2_joint8[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -102,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -612,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -589, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -662, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 110,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 21), 0,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimCliffEscapeSlow2_joint9[70] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 136, -36, -33, 1, -7, 1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -392, -30, 22, 4, 9, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -257, 27, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -392, 0, 22, 0, 9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -268, -4, 28, 0, 10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -448, 26, 22, -2, 9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 143, 39, -6, -7, 12, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 68, -12, -72, -13, 17, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -2, -163, 20,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimCliffEscapeSlow2_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 54),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimCliffEscapeSlow2_joint11[90] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -80, 25, 7, 0, 6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 149, 32, 5, 0, 11, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 306, -15, 2, 0, 15, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -25, -5, 5, 0, 11, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 223, -3, 4, 0, 15, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -87, -13, 5, 0, 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 16, 50, -1, 1, 9, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 432, 17, 17, 0, 32, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 131, -90, 2, -2, 7, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -110, -26, 5, 0, -5, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTPikachuAnimCliffEscapeSlow2_joint12[90] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -68, 14, -11, 2, 21, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -38, 27, 7, 1, 12, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 265, -4, 5, 0, 18, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -91, -4, 10, 0, 11, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 191, 4, 7, 0, 19, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -17, -17, 12, 0, 13, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -79, 21, 0, 0, 14, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 205, 34, 9, 0, 15, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 151, -52, 5, 0, 12, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -110, -30, 7, -1, -4, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTPikachuAnimCliffEscapeSlow2_joint14[106] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -325, 0, -80, 24, 357, -28,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -324, -31, -72, 64, 340, 47,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -352, 46, -23, 113, 399, 45,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -278, 57, 41, -40, 386, -19,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -295, -5, -64, 42, 379, 126,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -282, 74, 67, -2, 465, 15,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -211, 0, -67, -39, 397, -18,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -282, -3, 13, 61, 439, -2,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -216, 4, 24, -77, 393, 17,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -275, -86, -103, -145, 466, 46,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -303, -48, -120, 40, 439, -152,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -324, -16, -62, 46, 313, -100,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -324, -62, 313,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTPikachuAnimCliffEscapeSlow2_joint15[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -913, 65, 90, -41, -730, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1046, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -92, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -718, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -315, 114,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 26, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1151, 75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -382, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -7, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -155, -25, -109, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -127, -41, -4, 18, -1288, -137,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -45, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -401, -56, -1207, 99,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -216, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -693, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -181, 0, -661, -94,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -14, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1263, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -318, -2, -1375, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -231, -7, -175, -4, -964, 116,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -461, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -362, -50, -43, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -783, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -43, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 229, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -507, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 114, -54, -425, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -804, -6, -99, -71, -297, 42,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimCliffEscapeSlow2_joint17[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -507, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 82,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -149, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTPikachuAnimCliffEscapeSlow2_joint18[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 75, -29, -27, -77, 2284, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -209, -74, -310, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 2348, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 2698, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -460, 0, -121, -28, 3175, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -205, 56, -479, -38, 2707, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -120, -32, -353, 21, 2155, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -401, 6, -353, -27, 2963, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -82, 56, -518, -3, 2577, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -60, -8, -371, 20, 2150, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -134, -69, -393, -11, 2421, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -475, -5, -439, -25, 3087, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -167, 65, -549, 6, 2683, -129,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -181, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -83, -30, 2308, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -349, -35, 2695, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -296, 9, -274, -11, 2614, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2850, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -52, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -290, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -86, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 6, 23, 2859, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 55, 16, -5, 15, 2809, -16,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTPikachuAnimCliffEscapeSlow2_joint20[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1063, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 862, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 105, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 862, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 830, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 563, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 977, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 908, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 854, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 656, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 962, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1024, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 411, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 599, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 618, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 870, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 946, 25,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPikachuAnimCliffEscapeSlow2_joint22[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1971, 110, 1425, 4, 1378, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1614, 139,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1468, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1639, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1607, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1677, 70, 2200, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1186, 27, 1312, -26, 1963, -141,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1257, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1510, -26, 1353, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1345, 48, 1874, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1217, -52, 1882, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1658, -54, 1200, 3, 1396, -69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1274, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1546, 49, 1464, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1363, 62, 1873, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1171, -35, 1914, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1579, -62, 1172, 6, 1351, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1547, 8, 1314, 22, 1437, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1313, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1530, 0, 1309, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -1579, -3, 1451, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1600, -6, 1480, 9, 1255, -19,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTPikachuAnimCliffEscapeSlow2_joint23[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 107, -1, -19, 0, -153, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 227, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -36, -3, -206, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -36, 46, -206, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 239, 30, -916, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 334, 32, 147, -3, -315, 127,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 232, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 422, -21, -149, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 204, -26, -857, -132,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 363, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 195, -20, -946, 108,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 131, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -206, 100,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -779, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 317, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 272, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 166, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 122, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -859, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -636, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -509, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -135, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 337, -17, 262, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 26, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 168, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 125, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 127, 0, -59, -28, -192, -19,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTPikachuAnimCliffEscapeSlow2_joint25[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 425, 75,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 820, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 820, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 957, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 497, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 605, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 956, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 389, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 540, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 743, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 606, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 732, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 807, 24,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTPikachuAnimCliffEscapeSlow2_joint26[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1593, 33, -1845, -8, 1842, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1777, 56, -1893, -3, 1660, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 2033, -7, -1893, 43, 1660, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1449, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1730, -31, 1396, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1843, -98, 1409, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1141, -40, -1468, 7, 1866, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1600, 96, -1405, -33, 1395, -75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1473, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1666, -34, 1414, 83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1479, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1896, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 880, 18, 1869, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1582, 144, 1336, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1749, -6, -1678, 0, 1482, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1340, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1478, 39, 1503, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1226, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1444, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1508, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1695, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1691, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1680, -14, -1718, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1603, -25, -1893, -58, 1124, -33,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTPikachuAnimCliffEscapeSlow2_joint27[90] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -497, 6, -186, -5, -747, -2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -477, 2, -219, -9, -763, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 5, -2, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -509, -3, -224, -7, -849, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -516, -10, -308, 3, -947, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -635, -3, -184, -1, -1016, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -564, 3, -331, 8, -1137, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -586, 17, -72, 23, -796, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -320, 47, -4, 5, 61, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -36, 30, -14, 0, 127, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -14, 0, -3,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
