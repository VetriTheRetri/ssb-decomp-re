/* AnimJoint data for relocData file 1271 (FTKirbyAnimJump2) */
/* 1632 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimJump2_joint1[22];
extern u16 dFTKirbyAnimJump2_joint2[14];
extern u16 dFTKirbyAnimJump2_joint3[22];
extern u16 dFTKirbyAnimJump2_joint5[38];
extern u16 dFTKirbyAnimJump2_joint6[166];
extern u16 dFTKirbyAnimJump2_joint7[14];
extern u16 dFTKirbyAnimJump2_joint9[38];
extern u16 dFTKirbyAnimJump2_joint10[162];
extern u16 dFTKirbyAnimJump2_joint11[14];
extern u16 dFTKirbyAnimJump2_joint13[10];
extern u16 dFTKirbyAnimJump2_joint14[48];
extern u16 dFTKirbyAnimJump2_joint16[14];
extern u16 dFTKirbyAnimJump2_joint18[72];
extern u16 dFTKirbyAnimJump2_joint19[56];
extern u16 dFTKirbyAnimJump2_joint21[14];
extern u16 dFTKirbyAnimJump2_joint22[68];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimJump2_joints[] = {
	(u32)dFTKirbyAnimJump2_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimJump2_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimJump2_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimJump2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimJump2_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimJump2_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimJump2_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimJump2_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimJump2_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimJump2_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimJump2_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimJump2_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimJump2_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimJump2_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimJump2_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTKirbyAnimJump2_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimJump2_joint1[22] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 6144, 6144, 6144,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 600, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 6144, 6144, 6144,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimJump2_joint2[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, -268, 0, 0, -312, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimJump2_joint3[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -89, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 27), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), 268,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimJump2_joint5[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 89, -180, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -178, -26,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 30), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 3), -180,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -178, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 7), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 20), 89, -180,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 20), 178, -120, -120,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimJump2_joint6[166] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 803, -38, -1161, 3, 0, 41,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 2304, 3072, 3072,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 781, 20, 24, -22,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 2304, 3072, 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -1086, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1016, 69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -862, -30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 808, 74, -4, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 930, 716, -128, -718,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2240, 701, -1441, -702,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2332, 61, -1533, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2363, 25, -890, -27, -1564, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -877, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 2459, 53, -1649, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2534, 352, -1722, -351,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 3868, 392, -3056, -393,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -825, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1200, -35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3949, 53, -3139, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 4020, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -3218, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1221, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1134, 9,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4021, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 4253, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3221, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -3500, -6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1127, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 13), -996, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4252, -1, -999, -2, -3499, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimJump2_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 49), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimJump2_joint9[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), -89, 180, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 178, 26,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 30), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 3), 180,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 178, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 7), 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 20), -89, 180,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 20), -178, 120, -120,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimJump2_joint10[162] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 799, 38, 443, 4, -1608, 41,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 2304, 3072, 3072,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 822, -20, -1584, -22,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 2304, 3072, 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 524, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 588, 67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 746, -32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 795, -73, -1612, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 675, -714, -1735, -716,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -632, -702, -3045, -703,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -729, -64, -3142, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -761, -25, 714, -25, -3174, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 734, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -857, -55, -3259, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -936, -393, -3335, -391,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2271, -351, -4671, -353,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 782, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 410, -33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2347, -50, -4748, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -2418, -2, -4826, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 387, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 461, 8,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 3072, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2421, -4, -4830, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 17), -2646, -5, -5105, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 470, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 14), 608, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2648, -2, 609, 1, -5108, -3,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimJump2_joint11[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 49), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTKirbyAnimJump2_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimJump2_joint14[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 33, 8, -208, 2, 651, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 44), 217, 20, -298, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), 642, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 633, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 240, -6,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 238, 20, -300, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 292, 5, -302, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 297, 4, -300, 1, 233, -6,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimJump2_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 49), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimJump2_joint18[72] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1820, 1, 1735, -12, -1579, 52,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 2457, 2457, 2457,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 2457, 2457, 2457,
	ftAnimSetValRateT(FT_ANIM_ROTX, 47), -1922, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 49), 1767, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1322, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1310, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -1561, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1572, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -1271, 13,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 3686, 3686, 3686,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1927, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1929, -1, -1259, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1930, 0, 1766, 0, -1259, 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimJump2_joint19[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -33, -8, 208, -2, 651, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 39), -105, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 44), 298, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), 645, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 633, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 237, -6,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -127, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -294, -5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -297, -2, 300, 0, 233, -3,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimJump2_joint21[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 49), 7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimJump2_joint22[68] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1820, -1, -1735, 12, -1579, 52,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 2457, 2457, 2457,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 2457, 2457, 2457,
	ftAnimSetValRateT(FT_ANIM_ROTX, 47), 1922, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 49), -1767, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1325, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1310, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -1579, -7,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 3686, 3686, 3686,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1584, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -1262, 6,
	ftAnimBlock(0, 16),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1927, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1929, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1930, 0, -1766, 0, -1259, 3,
	ftAnimEnd(),
};
