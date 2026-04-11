/* AnimJoint data for relocData file 1450 (FTPurinAnimAttackAirF) */
/* 3824 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimAttackAirF_joint1[60];
extern u16 dFTPurinAnimAttackAirF_joint2[32];
extern u16 dFTPurinAnimAttackAirF_joint3[76];
extern u16 dFTPurinAnimAttackAirF_joint5[14];
extern u16 dFTPurinAnimAttackAirF_joint6[242];
extern u16 dFTPurinAnimAttackAirF_joint7[38];
extern u16 dFTPurinAnimAttackAirF_joint9[14];
extern u16 dFTPurinAnimAttackAirF_joint10[224];
extern u16 dFTPurinAnimAttackAirF_joint11[46];
extern u16 dFTPurinAnimAttackAirF_joint13[10];
extern u16 dFTPurinAnimAttackAirF_joint14[220];
extern u16 dFTPurinAnimAttackAirF_joint16[78];
extern u16 dFTPurinAnimAttackAirF_joint18[276];
extern u16 dFTPurinAnimAttackAirF_joint19[216];
extern u16 dFTPurinAnimAttackAirF_joint21[322];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTPurinAnimAttackAirF_joints[] = {
	(u32)dFTPurinAnimAttackAirF_joint1, /* [0] joint 1 */
	(u32)dFTPurinAnimAttackAirF_joint2, /* [1] joint 2 */
	(u32)dFTPurinAnimAttackAirF_joint3, /* [2] joint 3 */
	(u32)dFTPurinAnimAttackAirF_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPurinAnimAttackAirF_joint6, /* [5] joint 6 */
	(u32)dFTPurinAnimAttackAirF_joint7, /* [6] joint 7 */
	(u32)dFTPurinAnimAttackAirF_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTPurinAnimAttackAirF_joint10, /* [9] joint 10 */
	(u32)dFTPurinAnimAttackAirF_joint11, /* [10] joint 11 */
	(u32)dFTPurinAnimAttackAirF_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPurinAnimAttackAirF_joint14, /* [13] joint 14 */
	(u32)dFTPurinAnimAttackAirF_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPurinAnimAttackAirF_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTPurinAnimAttackAirF_joint19, /* [18] joint 19 */
	(u32)dFTPurinAnimAttackAirF_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF033A, /* [21] END */
};

/* Joint 1 */
u16 dFTPurinAnimAttackAirF_joint1[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 600, 0,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4505, 397, 2457, -546, 4505, 447,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -804,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 13), -804,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4505, -415, 2457, 546, 4505, -403,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, -420, 4096, 416, 4096, -386,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 25), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -803,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -217,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), -3216,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPurinAnimAttackAirF_joint2[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -357, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -536, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 20), -536,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), -268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPurinAnimAttackAirF_joint3[76] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 268, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 312, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_SCAZ, 2), 536, 44, 3686, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 2), 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 536, -44, 4096, 0, 4096, 0, 3686, 0,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 3891, 0, 4505, 0, 3891, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 268,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 32), 268,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 3891, 0, 4505, 0, 3891, 0,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 132, 4096, -275, 4096, 132,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4300, 0, 3276, 0, 4300, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTPurinAnimAttackAirF_joint5[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 178, -144, -737, 238, 4096, 4096, 4096,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTPurinAnimAttackAirF_joint6[242] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -887, 166, -1571, 65, -2238, -161,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -721, 129, -1505, 91, -2400, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -628, 66, -1389, 20, -2569, -110,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2622, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -592, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1464, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1508, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1550, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2590, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -609, -48, -2540, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -688, -83, -1597, -39, -2403, 120,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1627, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -777, -24, -2299, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -738, 27, -2308, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -2306, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -722, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -777, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1624, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1598, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -775, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -739, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2311, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -2336, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -744, -151, -1594, -95, -2338, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1042, -475, -1788, -178, -2233, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1695, -331, -1951, -133, -2099, 163,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -2069, 18, -1701, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1706, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1556, 126,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1421, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2017, 64, -1599, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1869, 61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1930, -214,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1416, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1384, 138, -1817, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1139, 312, -1757, 85, -2165, -208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -759, 224, -1646, 111, -2346, -126,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1485, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -690, 18, -2417, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -858, -48, -2260, 39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1505, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1553, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -887, -29, -1571, -18, -2238, 21,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPurinAnimAttackAirF_joint7[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPurinAnimAttackAirF_joint9[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, -178, 69, -722, 238, 4096, 4096, 4096,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTPurinAnimAttackAirF_joint10[224] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -785, -294, -109, 50, -696, -238,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1105, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1080, -167, -58, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1121, 12, -49, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1056, 50, 35, 61, -1081, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1003, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1020, 29, 73, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -971, 52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 57, -21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -948, 98,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -696, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -893, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -816, 26, 42, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 53, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -840, -16, -699, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -818, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -701, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 50, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 37, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -820, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -795, 12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -700, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -693, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -781, 83, 33, 54, -687, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -628, 144, 145, 94, -539, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -493, 133, 221, 49, -348, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -292, 30, 182, -88, 92, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -300, -14, 66, -126, 201, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -264, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -299, 46, 138, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -228, 50, -39, -207,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -681, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -199, -58, -243, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -346, -246, -184, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -692, -272, -152, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -119, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -891, -99, -754, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -822, 52, -714, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -785, 36, -109, 9, -696, 17,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPurinAnimAttackAirF_joint11[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPurinAnimAttackAirF_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -501, 264, -1427, 106, -21, 16,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPurinAnimAttackAirF_joint14[220] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 155, -171, -287, 114, 352, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -16, -115, -172, 47, 132, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -76, -25, -191, -24, 178, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -61, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -231, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 140, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 121, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 125, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -59, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -46, 77, -231, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -237, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 95, 425, 60, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 804, 360, 0, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 815, 7, -2, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -2, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 812, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 816, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 809, -10,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 795, -495, -234, 75, 1, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -181, -523, -86, 111, 113, 112,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 327, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -252, -7, -11, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -134, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -195, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -120, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -27, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 143, 349, -201, -27, 217, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 670, 608, -190, 42, 17, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1361, 412, -116, 22, 18, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -177, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1496, 46, -144, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1453, -134, -189, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1227, -287, -262, -18, -142, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 878, -330, -225, 12, -14, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 565, -327, -238, -52, 57, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 222, -204, -330, -23, 331, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 157, -65, -286, 44, 348, 17,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPurinAnimAttackAirF_joint16[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 242,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 242, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -117,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 89, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 453, 287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 665, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 829, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 840, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 533, -420,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTPurinAnimAttackAirF_joint18[276] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3686,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1362, 129, -1479, -189, -1470, -24,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3686,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1493, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1491, -55, -1668, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1250, 2, -1533, -8,
	ftAnimSetValRateT(FT_ANIM_SCAX, 4), 3686, 819,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1497, 244, -1685, -95, -1378, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1738, 77, -1725, -14, -1370, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1652, -175, -1714, 42, -1377, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1388, -72, -1639, -27, -1490, 112,
	ftAnimSetValRateT(FT_ANIM_SCAX, 2), 6144, 546,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1507, -279, -1770, 44, -1152, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 828, -343, -1551, 113, -1124, 9,
	ftAnimSetValRateT(FT_ANIM_SCAX, 7), 6144, -350,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 819, -6, -1543, 5, -1132, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -1088, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 816, -1, -1541, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 818, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1606, -6,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_SCAX, 15), 3686, -253,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 814, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 820, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1613, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1639, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1075, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1058, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 831, 526, -1648, -79, -1046, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1873, 588, -1797, -48, -675, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2008, 57, -1745, 37, -642, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1688, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1851, -180, -653, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1627, -219, -665, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -833, -269,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 3686,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1412, -343, -1702, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 939, -583, -1777, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 245, -404, -1659, 103, -1219, -270,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1478, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 130, -37, -1374, -142,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 354, 270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1504, -105,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1636, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1322, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 710, 375, -1181, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1105, 295, -1249, -115, -1675, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1300, 128, -1412, -115, -1474, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1362, 61, -1479, -67, -1474, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTPurinAnimAttackAirF_joint19[216] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -209, -74, 315, 137, 327, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -283, 107, 452, -30, 124, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4, 164, 255, -105, 53, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 45, 28, 241, -11, 100, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 60, 6, 232, -4, 120, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 121, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 233, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 58, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 44, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -95, -424, 62, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -804, -349, 0, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -793, 7, 2, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -2, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -789, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -816, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 233, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), 233, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, 134, 236, 76, 0, 69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 658, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -547, 236, 386, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -331, 216, 451, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 76, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -114, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 19, 93,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 105, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 675, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 625, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 154, 57, -14, -13, 519, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 219, 18, 49, 85, 179, -298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, -195, 156, -9, -76, -246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -171, -429, 31, -178, -312, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -667, -162, -200, -46, -85, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -496, 143, -61, 175, -128, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -380, 131, 149, 185, 27, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -233, 86, 309, 83, 296, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -207, 26, 316, 7, 331, 35,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPurinAnimAttackAirF_joint21[322] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 10, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 435, 318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 646, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 797, -223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 447, -395,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
	0x4100, 0x0E66, 0x280E, 0x0134, 0x00AA, 0x0052, 0xFF9D, 0x00BD, 0x001E, 0x4E00, 0x0E66, 0x0E66, 0x4101, 0x0002, 0x0E66, 0x200F, 0x0001, 0x01DE, 0xFF91, 0xFFF0, 0xFF93, 0x00DC, 0xFFDD, 0x200F, 0x0001, 0x0056, 0xFEB4, 0xFF78, 0xFFC3, 0x0076, 0x0008, 0x2805, 0x0002, 0xFF8B, 0x0010, 0x2901, 0x0004, 0x0E66, 0x0333, 0x200B, 0x0001, 0xFF46, 0xFF92, 0x00EC, 0x003C, 0x200B, 0x0001, 0xFF7A, 0x0046, 0x00EE, 0xFFFE, 0x200F, 0x0001, 0xFFD3, 0x00B1, 0xFF96, 0x002B, 0x00E7, 0xFFC2, 0x200F, 0x0001, 0x00DB, 0x0046, 0xFFE2, 0xFFE1, 0x0072, 0x0074, 0x2901, 0x0002, 0x1800, 0x0222, 0x200F, 0x0001, 0x0060, 0x0117, 0xFF57, 0x0032, 0x01D0, 0x00B8, 0x200F, 0x0001, 0x030B, 0x0150, 0x0045, 0x0076, 0x01E2, 0x0007, 0x2809, 0x0005, 0x01D3, 0x0000, 0x2901, 0x0007, 0x1800, 0xFEA5, 0x2007, 0x0001, 0x0300, 0xFFF9, 0x0043, 0xFFFD, 0x2805, 0x000B, 0x0023, 0x0000, 0x2003, 0x0001, 0x02FC, 0xFFFE, 0x2803, 0x000E, 0x031C, 0xFFF9, 0x0801, 0x0003, 0x2009, 0x0001, 0x01D4, 0x0000, 0x2809, 0x000E, 0x0282, 0x0010, 0x0801, 0x0001, 0x2901, 0x000F, 0x0E66, 0xFF08, 0x0801, 0x0005, 0x2005, 0x0001, 0x0023, 0x0000, 0x2005, 0x0003, 0x001F, 0xFFFE, 0x2007, 0x0001, 0x0313, 0xFF9D, 0x001C, 0xFFD4, 0x2007, 0x0001, 0x0256, 0xFF7A, 0xFFC8, 0xFFC7, 0x2007, 0x0001, 0x0206, 0xFFB3, 0xFFAB, 0xFFED, 0x2803, 0x0002, 0x0153, 0xFF7A, 0x2805, 0x0005, 0xFFC2, 0xFFF8, 0x0801, 0x0001, 0x2009, 0x0001, 0x0290, 0x0008, 0x2809, 0x0002, 0x028E, 0xFFF3, 0x2003, 0x0001, 0x00AD, 0xFF4A, 0x2803, 0x0002, 0xFF54, 0xFF99, 0x4101, 0x000A, 0x0E66, 0x0801, 0x0001, 0x2009, 0x0001, 0x0277, 0xFF81, 0x200F, 0x0001, 0xFF17, 0xFFED, 0xFFB3, 0xFFEB, 0x0190, 0xFF48, 0x200F, 0x0001, 0xFF2D, 0x00B3, 0xFF98, 0x002D, 0x0106, 0xFF6A, 0x200F, 0x0001, 0x007D, 0x01A4, 0x000E, 0x00E1, 0x0063, 0xFFB2, 0x200F, 0x0001, 0x0275, 0x0094, 0x015A, 0x0085, 0x006A, 0xFF99, 0x200F, 0x0001, 0x01A7, 0xFF80, 0x0119, 0xFFA6, 0xFF95, 0xFFB3, 0x200F, 0x0001, 0x0174, 0xFFD3, 0x00A5, 0xFFA8, 0xFFCF, 0x008B, 0x200F, 0x0001, 0x014D, 0xFFE0, 0x0068, 0xFFD7, 0x00AB, 0x0079, 0x200F, 0x0001, 0x0134, 0xFFE7, 0x0052, 0xFFEB, 0x00C0, 0x0015, 0x0000, 0x0000, 0x0000, 0x0000,
};
