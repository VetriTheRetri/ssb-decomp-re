/* AnimJoint data for relocData file 2041 (FTPikachuAnimCliffClimbQuick2) */
/* 1664 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimCliffClimbQuick2_joint1[28];
extern u16 dFTPikachuAnimCliffClimbQuick2_joint2[66];
extern u16 dFTPikachuAnimCliffClimbQuick2_joint3[48];
extern u16 dFTPikachuAnimCliffClimbQuick2_joint4[50];
extern u16 dFTPikachuAnimCliffClimbQuick2_joint6[18];
extern u16 dFTPikachuAnimCliffClimbQuick2_joint7[46];
extern u16 dFTPikachuAnimCliffClimbQuick2_joint8[8];
extern u16 dFTPikachuAnimCliffClimbQuick2_joint9[26];
extern u16 dFTPikachuAnimCliffClimbQuick2_joint10[10];
extern u16 dFTPikachuAnimCliffClimbQuick2_joint11[42];
extern u16 dFTPikachuAnimCliffClimbQuick2_joint12[42];
extern u16 dFTPikachuAnimCliffClimbQuick2_joint14[26];
extern u16 dFTPikachuAnimCliffClimbQuick2_joint15[50];
extern u16 dFTPikachuAnimCliffClimbQuick2_joint17[14];
extern u16 dFTPikachuAnimCliffClimbQuick2_joint18[54];
extern u16 dFTPikachuAnimCliffClimbQuick2_joint20[32];
extern u16 dFTPikachuAnimCliffClimbQuick2_joint22[50];
extern u16 dFTPikachuAnimCliffClimbQuick2_joint23[46];
extern u16 dFTPikachuAnimCliffClimbQuick2_joint25[32];
extern u16 dFTPikachuAnimCliffClimbQuick2_joint26[54];
extern u16 dFTPikachuAnimCliffClimbQuick2_joint27[36];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTPikachuAnimCliffClimbQuick2_joints[] = {
	(AObjEvent32 *)dFTPikachuAnimCliffClimbQuick2_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTPikachuAnimCliffClimbQuick2_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTPikachuAnimCliffClimbQuick2_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTPikachuAnimCliffClimbQuick2_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTPikachuAnimCliffClimbQuick2_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTPikachuAnimCliffClimbQuick2_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTPikachuAnimCliffClimbQuick2_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTPikachuAnimCliffClimbQuick2_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTPikachuAnimCliffClimbQuick2_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTPikachuAnimCliffClimbQuick2_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTPikachuAnimCliffClimbQuick2_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTPikachuAnimCliffClimbQuick2_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTPikachuAnimCliffClimbQuick2_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTPikachuAnimCliffClimbQuick2_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTPikachuAnimCliffClimbQuick2_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTPikachuAnimCliffClimbQuick2_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTPikachuAnimCliffClimbQuick2_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTPikachuAnimCliffClimbQuick2_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTPikachuAnimCliffClimbQuick2_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTPikachuAnimCliffClimbQuick2_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTPikachuAnimCliffClimbQuick2_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTPikachuAnimCliffClimbQuick2_joint1[28] = {
	ftAnimSetVal(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 931, 960,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -60, -32, 960, 512,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 10), -60,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 10), 960,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimCliffClimbQuick2_joint2[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -12, 0, 15, 1, -13, 0, 64, -61, 743, 1821, -643, -545,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -26, 33, -28,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 40, -62, 1665, 2113, -527, 453,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 33, -59, 1800, 291, -417, 1799,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 25, -46, 1737, -1980, -77, 1050,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 9, -24, 810, -1338, 108, 275,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 733, -59, 129, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 3), 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 9, 735, 108,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPikachuAnimCliffClimbQuick2_joint3[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 602, 210, -37, -116, 476, 129, -127, 60, -230, 10, -111, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 18), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 983, 309, -525, -84, 482, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 2149, 425, -461, 126, -489, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 3109, 83, 105, 45, -15, 40,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 3240, 133, 32,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTPikachuAnimCliffClimbQuick2_joint4[50] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -66, 10, 23, 29, 13, 11,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -6, 11, 266, 48, 116, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -6, -8, 266, 6, 116, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -54, 21, 305, -9, 95, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 141, 4, 201, -30, 227, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -13, 0, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTPikachuAnimCliffClimbQuick2_joint6[18] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 366, -19, -94, 15, 288, 11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 18), 324, -62, 313,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTPikachuAnimCliffClimbQuick2_joint7[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3, 387, 207, -160, -296, -270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1160, 171, -272, -73, -1106, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1024, -82, -231, 34, -987, 68,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 223, 16, -243, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 488, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 691, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 804, 37, 240, 5, -202, 13,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimCliffClimbQuick2_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPikachuAnimCliffClimbQuick2_joint9[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 53, 24, -91, -9, -5, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 114, -3, -177, -4, 50, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -2, -163, 20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTPikachuAnimCliffClimbQuick2_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimCliffClimbQuick2_joint11[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -162, 14, 4, -6, 0, 22,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -73, 14, -64, -7, 243, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -47, 27, -55, -11, 210, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 173, 4, -170, 5, -239, -21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTPikachuAnimCliffClimbQuick2_joint12[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -177, 3, -17, 7, 14, -36,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -210, 1, 55, 8, -371, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -164, 21, 49, 24, -322, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -20, 16, 271, -4, 175, 32,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTPikachuAnimCliffClimbQuick2_joint14[26] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -318, 31, 85, -8, 340, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -386, -2, -46, -65, 319, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), -324, -62, 313,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTPikachuAnimCliffClimbQuick2_joint15[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 803, 0, 1587, -122, 538, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 457, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 803, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1221, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1280, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1296, -31, 576, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1089, 23, 615, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1440, 122, 1295, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 804, 0, 1822, 127, 1607, 103,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimCliffClimbQuick2_joint17[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, -3,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTPikachuAnimCliffClimbQuick2_joint18[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1362, 1, -1484, 75, 1508, 126,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1477, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1258, 13, 1887, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1403, -35, 1693, -121,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1583, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1606, 25, 1160, -87,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1653, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1171, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1193, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1663, 3, -1603, -6, 1205, 3,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTPikachuAnimCliffClimbQuick2_joint20[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 337, -110,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 6, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 184, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1016, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 996, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 958, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 938, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPikachuAnimCliffClimbQuick2_joint22[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1518, -107, -1658, 8, 2085, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1620, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1841, -35, 2268, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1730, 33, 1878, -163,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1599, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1289, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1188, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1682, -19, 1209, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1604, -1, -1736, -18, 1255, 15,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTPikachuAnimCliffClimbQuick2_joint23[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -4, -7, 169, 5, -497, 89,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 77, 36, 85, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -227, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -183, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -184, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 193, 16, -35, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 147, -8, -59, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 128, -6, -57, 0, -192, -2,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTPikachuAnimCliffClimbQuick2_joint25[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 751, -156,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 282, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 401, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 808, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 826, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 818, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 807, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTPikachuAnimCliffClimbQuick2_joint26[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1623, 10, -1818, 54, 1967, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1657, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1653, 7, 1957, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1771, -34, 1902, -135,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1889, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1591, 12, 1145, -145,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1601, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1031, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1056, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1615, -4, -1893, -1, 1124, 22,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTPikachuAnimCliffClimbQuick2_joint27[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -987, -373, -81,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -501, 72, -461, 17, -24, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 29, 48, -122, 46, 20, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -14, 0, -3,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
