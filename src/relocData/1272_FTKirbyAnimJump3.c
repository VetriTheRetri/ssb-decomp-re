/* AnimJoint data for relocData file 1272 (FTKirbyAnimJump3) */
/* 1648 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimJump3_joint1[22];
extern u16 dFTKirbyAnimJump3_joint2[14];
extern u16 dFTKirbyAnimJump3_joint3[22];
extern u16 dFTKirbyAnimJump3_joint5[38];
extern u16 dFTKirbyAnimJump3_joint6[166];
extern u16 dFTKirbyAnimJump3_joint7[8];
extern u16 dFTKirbyAnimJump3_joint9[38];
extern u16 dFTKirbyAnimJump3_joint10[162];
extern u16 dFTKirbyAnimJump3_joint11[16];
extern u16 dFTKirbyAnimJump3_joint13[10];
extern u16 dFTKirbyAnimJump3_joint14[56];
extern u16 dFTKirbyAnimJump3_joint16[14];
extern u16 dFTKirbyAnimJump3_joint18[74];
extern u16 dFTKirbyAnimJump3_joint19[54];
extern u16 dFTKirbyAnimJump3_joint21[14];
extern u16 dFTKirbyAnimJump3_joint22[72];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimJump3_joints[] = {
	(u32)dFTKirbyAnimJump3_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimJump3_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimJump3_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimJump3_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimJump3_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimJump3_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimJump3_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimJump3_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimJump3_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimJump3_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimJump3_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimJump3_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimJump3_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimJump3_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimJump3_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTKirbyAnimJump3_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimJump3_joint1[22] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 5734, 5734, 5734,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 600, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 5734, 5734, 5734,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimJump3_joint2[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, -268, 0, 0, -312, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimJump3_joint3[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -89, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 27), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), 268,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimJump3_joint5[38] = {
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
u16 dFTKirbyAnimJump3_joint6[166] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 803, -38, -1161, 3, 0, 41,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 2457, 3276, 3276,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 782, 20, 23, -22,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 2457, 3276, 3276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -1086, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1017, 67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -865, -30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 808, 74, -4, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 930, 714, -129, -716,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2237, 703, -1437, -704,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2336, 62, -1537, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2363, 23, -890, -24, -1564, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -877, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 2460, 52, -1649, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2534, 394, -1721, -392,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 3869, 350, -3056, -352,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -825, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1197, -36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3950, 54, -3139, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 4020, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -3218, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1224, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1143, 8,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4021, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 4253, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3221, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -3500, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1137, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 14), -996, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4256, 2, -995, 1, -3504, -3,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimJump3_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimJump3_joint9[38] = {
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
u16 dFTKirbyAnimJump3_joint10[162] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -808, 37, 1165, -3, 0, 41,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 2457, 3276, 3276,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -786, -20, 23, -22,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 2457, 3276, 3276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 1086, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1020, -67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 861, 30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -812, -72, -4, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -932, -714, -126, -716,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2241, -701, -1437, -703,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2336, -63, -1533, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2368, -25, 890, 26, -1564, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 873, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -2465, -56, -1649, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2546, -357, -1728, -355,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -3881, -388, -3063, -389,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 825, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1201, 35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3956, -50, -3140, -52,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -4026, -2, -3218, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1224, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1147, -8,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 3072, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4029, -4, -3221, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 17), -4254, -3, -3496, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1138, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 14), 1000, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4257, -2, 998, -1, -3500, -3,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimJump3_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 49), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimJump3_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimJump3_joint14[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 41, 9, -220, 2, 651, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 39), 111, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 44), -301, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 34), 629, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 616, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 237, -6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 131, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 294, 4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -302, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 295, 0, -302, -1, 237, 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimJump3_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 49), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimJump3_joint18[74] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1832, 0, 1747, -12, -1570, 52,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 2621, 2621, 2621,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 2621, 2621, 2621,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 47), -1923, -4, 1768, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1316, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1304, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 34), -1463, 24,
	ftAnimBlock(0, 24),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 3686, 3686, 3686,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1439, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1262, 6,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1927, -3, 1767, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1929, -1, 1767, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1930, 0, 1766, 0, -1255, 6,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimJump3_joint19[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -39, -9, 220, -2, 655, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 44), -222, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 45), 300, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 34), 633, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 616, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 237, -4,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -242, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -294, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 303, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -295, 0, 302, 1, 237, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimJump3_joint21[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 49), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimJump3_joint22[72] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1832, 0, -1747, 12, -1566, 52,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 2621, 2621, 2621,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 2621, 2621, 2621,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 47), 1923, 4, -1768, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1316, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1308, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -1562, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1570, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -1262, 7,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 3686, 3686, 3686,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1927, 3, -1767, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1929, 1, -1767, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1930, 0, -1766, 0, -1255, 6,
	ftAnimEnd(),
	0x0000, 0x0000,
};
