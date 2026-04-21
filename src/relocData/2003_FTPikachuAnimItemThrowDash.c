/* AnimJoint data for relocData file 2003 (FTPikachuAnimItemThrowDash) */
/* 4240 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimItemThrowDash_joint1[24];
extern u16 dFTPikachuAnimItemThrowDash_joint2[60];
extern u16 dFTPikachuAnimItemThrowDash_joint3[82];
extern u16 dFTPikachuAnimItemThrowDash_joint4[98];
extern u16 dFTPikachuAnimItemThrowDash_joint6[46];
extern u16 dFTPikachuAnimItemThrowDash_joint7[184];
extern u16 dFTPikachuAnimItemThrowDash_joint8[92];
extern u16 dFTPikachuAnimItemThrowDash_joint9[88];
extern u16 dFTPikachuAnimItemThrowDash_joint10[10];
extern u16 dFTPikachuAnimItemThrowDash_joint11[46];
extern u16 dFTPikachuAnimItemThrowDash_joint12[46];
extern u16 dFTPikachuAnimItemThrowDash_joint14[46];
extern u16 dFTPikachuAnimItemThrowDash_joint15[114];
extern u16 dFTPikachuAnimItemThrowDash_joint17[40];
extern u16 dFTPikachuAnimItemThrowDash_joint18[216];
extern u16 dFTPikachuAnimItemThrowDash_joint20[102];
extern u16 dFTPikachuAnimItemThrowDash_joint22[240];
extern u16 dFTPikachuAnimItemThrowDash_joint23[172];
extern u16 dFTPikachuAnimItemThrowDash_joint25[80];
extern u16 dFTPikachuAnimItemThrowDash_joint26[196];
extern u16 dFTPikachuAnimItemThrowDash_joint27[84];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTPikachuAnimItemThrowDash_joints[] = {
	(u32)dFTPikachuAnimItemThrowDash_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimItemThrowDash_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimItemThrowDash_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimItemThrowDash_joint4, /* [3] joint 4 */
	(u32)dFTPikachuAnimItemThrowDash_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTPikachuAnimItemThrowDash_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimItemThrowDash_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimItemThrowDash_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimItemThrowDash_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimItemThrowDash_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimItemThrowDash_joint12, /* [11] joint 12 */
	(u32)dFTPikachuAnimItemThrowDash_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTPikachuAnimItemThrowDash_joint15, /* [14] joint 15 */
	(u32)dFTPikachuAnimItemThrowDash_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTPikachuAnimItemThrowDash_joint18, /* [17] joint 18 */
	(u32)dFTPikachuAnimItemThrowDash_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTPikachuAnimItemThrowDash_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTPikachuAnimItemThrowDash_joint23, /* [22] joint 23 */
	(u32)dFTPikachuAnimItemThrowDash_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTPikachuAnimItemThrowDash_joint26, /* [25] joint 26 */
	(u32)dFTPikachuAnimItemThrowDash_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTPikachuAnimItemThrowDash_joint1[24] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 492, 1197,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 30), 3837, 555,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -19,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 9), 3833, 10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPikachuAnimItemThrowDash_joint2[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), -26, 33, 953, -94,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX), -28, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 40), -26, 33,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 945, 64, 55, 234,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 1002, 111, 80, 27,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1071, -68, 86, 10,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 942, -459, 90, 12,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 783, -454, 94, 8,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 658, -96, 95, -137,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 590, 6, -180, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 675, 108,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPikachuAnimItemThrowDash_joint3[82] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 741, -49, 17,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 66, 5, -178, 7, 7, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 763, 153, -20, 57, 28, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 831, 53, 109, 24, -3, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1083, 142, 124, -20, -1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1830, 206, -35, -35, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 2116, 164, -53, 28, -2, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 2652, 45, 107, 14, -25, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 2849, 26, 177, 1, 37, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 133, -4, 32, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 9), 3240,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTPikachuAnimItemThrowDash_joint4[98] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -198, 32, 3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -276, -13, -86, -8, 81, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -252, 65, 0, 68, 0, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 52, 114, 253, 63, -23, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 205, 41, 287, 10, -26, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 219, 0, 297, -57, 5, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 205, -2, 0, -38, 0, -1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 205, 23, 0, -38, 0, 35,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 324, -2, 196, 5, 178, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 162, -6, 93, -7, 61, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 211, -19, 64, -10, 19, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -13, 0, -2,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimItemThrowDash_joint6[46] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 267, 97, 442,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 455, 210, -11, -59, 273, -256,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 425, 35, 52, -22, 250, -74,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 530, 33, -60, -36, 116, -42,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 530, -75, -60, 0, 116, 71,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 324, -62, 313,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimItemThrowDash_joint7[184] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2412, 39, -1575, 282, 501, 364,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1083, 79,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1164, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2451, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2187, -100,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2414, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1024, -120,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 753, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1350, -177,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1488, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2474, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 3047, 318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 716, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 190, -297,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1294, 162,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -997, -31,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3416, 312, -155, -291,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 3942, 32, -627, -33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1028, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -927, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3967, 17, -947, -13, -653, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 3914, -9, -601, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -946, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -927, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3925, -94, -978, -59, -611, 111,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3524, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1047, -313, -378, 543,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1605, -336, 475, 560,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 824, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3797, 195, -1720, -100,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 4189, 559,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1850, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 958, 144,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1353, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 5033, 633,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 5590, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5629, 38, -1849, 0, 1406, 53,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimItemThrowDash_joint8[92] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -388, -237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -246, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -379, -281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -573, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -217, 195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 108,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -217, -378,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -767, -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -596, 383,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 10,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimItemThrowDash_joint9[88] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -326, -6, -41,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -345, 34, -233, 1, 32, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -187, 86, 0, 70, 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 85, 77, 120, 15, 19, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 277, 27, 90, -17, 21, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -18, 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 277, 2, 0, -15, 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 290, 0, -79, -4, -16, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 290, -5, -79, -2, -16, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 203, -32, -117, -9, 29, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -2, -163, 20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTPikachuAnimItemThrowDash_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimItemThrowDash_joint11[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -280, -6, -10,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 120, 6, 310, 64, 327, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -253, -22, 252, -3, 128, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -253, 24, 252, -10, 128, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 358, 11, 0, -11, 337, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTPikachuAnimItemThrowDash_joint12[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -312, -8, -1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -367, 11, -139, -56, -192, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -264, 6, -234, -5, -132, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -264, 26, -234, 12, -132, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 403, 12, 65, 10, -277, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimItemThrowDash_joint14[46] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -302, 83, 399,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -518, -221, 110, -61, -24, -505,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -468, 23, 37, -74, 19, 100,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), -468, 0, -48, -27, 188, 54,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), -468, 52, -48, -5, 188, 45,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), -324, -62, 313,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTPikachuAnimItemThrowDash_joint15[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2413, -106, 1621, -480, -2711, -298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -2940, -617, 905, -112, -3379, -477,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3754, -659, 915, -126, -3965, -438,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 118, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4259, -219, -4255, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4194, 30, -4088, 121,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -3899, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -4155, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 5, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 81, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 105, 25, -3896, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 201, -11, -3885, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4152, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), -4021, 0,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 192, -36, -3888, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -315, -32, -3979, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -282, 54, -3785, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -114, 25, -3533, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4021, 0, -94, 19, -3514, 19,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimItemThrowDash_joint17[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -380, -409,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -829, -272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -925, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTPikachuAnimItemThrowDash_joint18[216] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1577, -494, 1645, 96, -1779, 520,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1883, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2072, -261, -1259, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2100, 49, -1498, -359,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1973, 68, -1977, -391,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1962, 1, 1880, 24, -2282, -190,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1758, 204, 2128, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2443, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2571, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1506, 127, 1989, -133, -2496, 203,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1680, -128,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1818, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2164, 259,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1864, 15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1834, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2000, 184, -1901, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1465, 214, 1817, 113, -2171, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1571, -47, 2045, 114, -1589, 359,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1561, -25, 2045, -14, -1452, 211,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1813, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1934, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1166, 285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -765, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -798, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -996, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1828, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1818, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1941, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 2109, -12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1085, -81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1337, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1790, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1688, 91,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1377, -146,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2183, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1527, 134, 2081, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1481, -96, 1930, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1611, -85, 1957, -15, -2284, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1562, 24, 1625, -40, -2066, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1552, 10, 1607, -18, -2024, 42,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTPikachuAnimItemThrowDash_joint20[102] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 365,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 524, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 599, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 474, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 578, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 866, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 795, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 636, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 448, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 390, 275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1000, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 838, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 818, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -110,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 278, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 361, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 534, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 570, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1221, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1270, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1020, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 949, -70,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimItemThrowDash_joint22[240] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1634, -23, -1660, -367, 2267, -740,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1713, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2027, -214, 1526, -358,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2088, 24, 1549, 132,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1886, 58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2176, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1860, 98,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1989, 31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1862, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1879, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2216, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1993, -222, 2090, -322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1543, -250, -1914, 112, 1571, -333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1491, 12, -1654, 170, 1424, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1760, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1573, -28, 1633, 147,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -2097, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1855, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1967, -11, 2127, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1738, -168, -1920, 96, 1812, -236,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1796, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1630, -156, 1653, -194,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1402, 92,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1219, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1540, 200,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1502, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1608, 162,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1724, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1241, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1249, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1546, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1863, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1699, -55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1394, -29,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1246, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1570, 353,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1921, -71, 1363, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1962, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1457, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2026, 353, 1743, 205,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2227, -118,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1365, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1835, 59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1848, 46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2040, -202,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1676, -102,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1780, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1616, -59, -1737, 43, 1261, -104,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTPikachuAnimItemThrowDash_joint23[172] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1300, 438, 1585, -51, 1430, -365,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1443, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1739, 238, 1065, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1777, 41, 916, -196,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2065, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 587, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 728, 140,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1158, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1498, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1395, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2025, -104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1637, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1453, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1335, -53,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1153, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1316, 33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1840, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1637, 64, 1282, 96, 1321, 410,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1970, 169, 1527, 116, 2136, 364,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1975, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1514, -23, 2050, -105,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 1397, 6, 1534, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1975, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 1996, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1994, -52, 1403, -53, 1515, -111,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1682, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1262, 0, 1156, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1289, 44, 1062, -53,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1610, 68, 1306, 102,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1698, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1734, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1737, 2, 1663, 52, 1407, 100,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTPikachuAnimItemThrowDash_joint25[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 6, 686,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 693, 339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 686, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 601, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 559, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 713, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 678, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 680, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 482, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 345, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 814, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -403,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 373, 307,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 615, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 886, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 814, -72,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTPikachuAnimItemThrowDash_joint26[196] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1239, -364, -1752, 93, -1000, -300,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1688, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1604, -215, -1301, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1670, -77, -1262, 65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1155, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1916, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1782, -61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1586, 167,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1254, -94,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1513, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1945, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1985, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1387, 111,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1288, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1373, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1995, 89, -1290, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1740, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1398, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1262, 28, -1330, 148,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1289, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1932, -71, -1101, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1884, -30, -1501, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1992, -53, -1318, 181,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1924, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -837, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1368, -61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -1779, -60,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1922, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1681, 31,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -841, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -943, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -998, -141,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1380, -149,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1643, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1588, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1524, -144,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2036, -73,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1839, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1881, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1614, -26, -1893, -11, -2089, -53,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTPikachuAnimItemThrowDash_joint27[84] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -962, -233, -512,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -950, 45, 192, -55, -631, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -779, 102, -456, -68, -561, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -27, 76, -420, 16, -714, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 67, 7, -271, 70, -487, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 35, -31, 145, 71, 72, 75,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -121, 155, -32,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 35, 145, 72,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -121, 155, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 35, 8, 145, -12, 72, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -14, 0, -3,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
