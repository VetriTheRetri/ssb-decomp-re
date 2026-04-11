/* AnimJoint data for relocData file 2072 (FTPikachuAnimShieldBreak) */
/* 3280 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimShieldBreak_joint1[66];
extern u16 dFTPikachuAnimShieldBreak_joint2[26];
extern u16 dFTPikachuAnimShieldBreak_joint3[94];
extern u16 dFTPikachuAnimShieldBreak_joint5[96];
extern u16 dFTPikachuAnimShieldBreak_joint6[148];
extern u16 dFTPikachuAnimShieldBreak_joint7[16];
extern u16 dFTPikachuAnimShieldBreak_joint8[78];
extern u16 dFTPikachuAnimShieldBreak_joint9[10];
extern u16 dFTPikachuAnimShieldBreak_joint10[22];
extern u16 dFTPikachuAnimShieldBreak_joint11[22];
extern u16 dFTPikachuAnimShieldBreak_joint13[108];
extern u16 dFTPikachuAnimShieldBreak_joint14[154];
extern u16 dFTPikachuAnimShieldBreak_joint16[16];
extern u16 dFTPikachuAnimShieldBreak_joint17[154];
extern u16 dFTPikachuAnimShieldBreak_joint19[70];
extern u16 dFTPikachuAnimShieldBreak_joint21[102];
extern u16 dFTPikachuAnimShieldBreak_joint22[150];
extern u16 dFTPikachuAnimShieldBreak_joint24[70];
extern u16 dFTPikachuAnimShieldBreak_joint25[186];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimShieldBreak_joints[] = {
	(u32)dFTPikachuAnimShieldBreak_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimShieldBreak_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimShieldBreak_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimShieldBreak_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimShieldBreak_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimShieldBreak_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimShieldBreak_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimShieldBreak_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimShieldBreak_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimShieldBreak_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimShieldBreak_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimShieldBreak_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimShieldBreak_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimShieldBreak_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimShieldBreak_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimShieldBreak_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimShieldBreak_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimShieldBreak_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimShieldBreak_joint25, /* [24] joint 25 */
	0xFFFF030D, /* [25] END */
};

/* Joint 1 */
u16 dFTPikachuAnimShieldBreak_joint1[66] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAY), 0, 654,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 7240, -286, -3190, 145,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 5), 6133, -212, 21, -7, -2639, 104, 942, 38,
	ftAnimSetValT(FT_ANIM_TRAY, 55), 942,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 5113, -186, -72, -2, -2148, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 3329, -160, -12, 3, -1326, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1897, -103, -10, 0, -715, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 228, -63, -6, 0, -73, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 0, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPikachuAnimShieldBreak_joint2[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -731, 17, -65,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -240, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -763, 0, 365, 0, -579, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 55), -317, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 55), -753, 54,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPikachuAnimShieldBreak_joint3[94] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 79, -47, -8,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 272, -70, -112, 22, -20, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -274, -63, 66, -9, -100, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -108, 42, -172, -9, 124, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 149, -25, -33, 33, -34, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -441, -81, 258, -46, -161, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -505, -122, -407, -184, 470, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1051, -144, -664, -107, 832, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1517, -54, -1158, -78, 1455, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -1872, 2, -1843, -23, 1592, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1486, 90, -1506, 85, 1619, -79,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -68, -140, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimShieldBreak_joint5[96] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 303, -128, 443,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 297, -42, -124, 5, 439, 25,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 250, 116, -121, 25, 475, -56,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 442, -14, -92, 18, 369, -26,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 231, -12, -98, -120, 441, -71,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 427, 14, -242, -18, 280, 26,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 250, -38, -121, 4, 475, -22,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 379, -237, 251,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 250, 72, -121, 80, 475, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 469, -137, 242,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 250, -33, -121, -84, 475, 29,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 427, -76, -242, 58, 280, 15,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 155, -47, 495,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimShieldBreak_joint6[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2340, -19, -215, -9, -399, -71,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), -2421, 41, -254, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -833, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -798, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -691, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -2202, 0, -491, 0, -133, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -2425, -38, -248, 54, -706, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -2434, 20, -164, 5, -744, 80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -206, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -2304, 10, -220, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -2370, -23, -514, -93,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2384, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -161, -16, -780, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -378, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -580, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -2309, -9, -387, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -2439, -19, -178, 26, -762, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -370, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -2423, 24, -700, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -2290, 0, -310, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -2423, -24, -226, 34, -699, -75,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -2364, -7, -216, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -765, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -502, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -497, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -2411, -15, -170, 15, -661, -54,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimShieldBreak_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 57), -10, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPikachuAnimShieldBreak_joint8[78] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 147, -20, 25,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -326, -2, -126, -26, -92, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 118, 49, -281, -8, -206, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 218, -14, -219, -9, -56, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -38, 3, -391, 13, -302, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 261, 5, -49, 52, -24, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 32, -2, 344, 0, 198, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 221, 2, -56, -31, 19, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 75, -8, -123, -12, -67, -15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 86, -241, -217,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimShieldBreak_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 40, -29, 2414, 5, 29, 491,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimShieldBreak_joint10[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 169, -156, 218,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 50), 249, -6, 58, 3, 188, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -201, 52, 117,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimShieldBreak_joint11[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 301, 60, -199,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 50), 173, -7, 20, -3, -179, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -166, -144, -146,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimShieldBreak_joint13[108] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -356, -67, 356,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -461, -125, -36, 12, 262, -114,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -513, 51, -51, -34, 213, 35,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -397, 42, -79, -132, 306, -7,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -460, -29, -217, 62, 203, -32,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -423, 214, -24, 353, 278, 235,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -326, -36, 3, -192, 350, -74,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -460, -57, -217, -66, 203, -35,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -397, 89, -79, -21, 306, 98,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -348, -244, 326,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -397, -79, -79, 68, 306, -78,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -448, 13, -158, 42, 228, 4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -381, -7, -26, 98, 312, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -457, -36, 212,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTPikachuAnimShieldBreak_joint14[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1056, -11, 356, 33, -728, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 495, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1077, 53, -729, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -769, 3, -301, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1058, -68, -712, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1178, 21, 326, -29, -963, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -694, -29, -198, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 318, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 207, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1109, -61, 403, 31, -813, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1065, 72, 397, -37, -739, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -676, -4, 176, -11, -177, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1094, -81, 328, 29, -797, -125,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 404, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1167, 77, -932, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -632, 47, -96, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -882, -90, 478, -13, -459, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1176, -18, 323, -17, -959, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -996, 52, 371, 4, -631, 87,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 455, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -863, -21, -432, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1127, -54, -857, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1189, -10, -931, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1192, 0, 611, 51, -856, 24,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimShieldBreak_joint16[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 57), -10, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimShieldBreak_joint17[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1382, 6, -1432, -3, 920, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 1360, -54, -1284, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1008, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1387, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1585, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1075, 59, -1166, 20, 2000, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1717, 37, -1164, -40, 1135, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1302, -84, -1408, -12, 1700, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1207, -42, -1238, 34, 1836, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1044, 13, -1199, -6, 2040, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1317, -63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1501, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1288, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1400, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1341, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1331, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1740, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1370, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1590, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1281, 8, -1393, 69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1136, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1394, 76, 1568, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1739, 53, 1200, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1715, -62, 1168, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1365, -47, -1389, -46, 1542, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1432, 9, -1416, -6, 1227, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1421, -3, -1426, -3, 990, -79,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimShieldBreak_joint19[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 848, -24,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 774, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 6, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 127,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 767,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -127,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 6, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 472, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 652, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 559, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 6, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 319, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 549, 76,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPikachuAnimShieldBreak_joint21[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 277, 10, -14, 18, 196, 75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 538, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 36), 105, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 309, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -81, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -150, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -128, 66, 542, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 36), 434, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 250, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 242, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 213, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 304, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 216, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 331, -10, 106, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 15, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -67, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -53, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 96, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 415, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 249, -25,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -18, -6, -14, -9, 196, -17,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimShieldBreak_joint22[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2415, -20, 863, 152, 1475, 79,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 2254, -78, 1688, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1319, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1460, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1884, -84, 1369, -4, 929, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1860, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1432, 25, 1331, 111,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1611, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1597, 46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1510, 28,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1897, 5, 1596, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 2215, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1759, 18, 1784, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1581, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1708, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1514, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1532, -13, 1678, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1433, -5, 1802, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1496, 30, 1411, -66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1699, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 2292, 0, 1617, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 2216, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1265, -61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1294, -86,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 2284, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 2755, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1487, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 879, -54, 1645, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 3678, 307, 966, 29, 2391, 248,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimShieldBreak_joint24[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1006, -244,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 6, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 368,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 6, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 73,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 442,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 6, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 6, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 686, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 523, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 6, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 648, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 882, 78,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimShieldBreak_joint25[186] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1220, 35, 1950, -9, 1775, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 1447, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 42), 1949, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 1351, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1239, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1543, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1631, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 1592, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1615, 1, 1460, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 1688, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 1669, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1803, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1445, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1410, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1801, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1714, -6, 1959, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1630, 26, 2244, -26,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1777, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1740, -50, 1805, 17, 1988, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1473, -87, 1735, -38, 1859, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1216, -85, 1576, -53, 1882, 7,
	ftAnimEnd(),
	0x400E, 0xFF10, 0x0149, 0xFE9D, 0x48E0, 0xFFFF, 0xFF4C, 0xFE9E, 0x200F, 0x0002, 0x0098, 0x0011, 0x0290, 0x002D, 0xFF60, 0x0001, 0x200F, 0x0003, 0xFF66, 0xFF4E, 0x022B, 0xFF5F, 0xFEA2, 0x000F, 0x200F, 0x0003, 0xFC6D, 0xFFB6, 0xFEC9, 0xFFA2, 0xFFBD, 0x0066, 0x200F, 0x0006, 0xFCCB, 0x0006, 0xFEDC, 0x000C, 0x023A, 0xFFFD, 0x200F, 0x000D, 0xFCEA, 0x001C, 0xFFB3, 0x0002, 0xFF73, 0xFFDE, 0x200F, 0x0002, 0xFE76, 0x005A, 0xFEFF, 0x003A, 0x002E, 0x0000, 0x200F, 0x0007, 0x0015, 0x000D, 0x01BC, 0x0013, 0xFF75, 0x0006, 0x200F, 0x000E, 0xFF95, 0x0000, 0x0092, 0xFFEC, 0x00B2, 0x0006, 0x380F, 0x000A, 0x0000, 0xFFDD, 0x0008, 0x0000,
};
