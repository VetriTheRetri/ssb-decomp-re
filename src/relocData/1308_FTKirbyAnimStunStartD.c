/* AnimJoint data for relocData file 1308 (FTKirbyAnimStunStartD) */
/* 1664 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimStunStartD_joint1[46];
extern u16 dFTKirbyAnimStunStartD_joint2[32];
extern u16 dFTKirbyAnimStunStartD_joint3[22];
extern u16 dFTKirbyAnimStunStartD_joint5[58];
extern u16 dFTKirbyAnimStunStartD_joint6[90];
extern u16 dFTKirbyAnimStunStartD_joint7[14];
extern u16 dFTKirbyAnimStunStartD_joint9[40];
extern u16 dFTKirbyAnimStunStartD_joint10[104];
extern u16 dFTKirbyAnimStunStartD_joint11[14];
extern u16 dFTKirbyAnimStunStartD_joint13[10];
extern u16 dFTKirbyAnimStunStartD_joint14[44];
extern u16 dFTKirbyAnimStunStartD_joint16[16];
extern u16 dFTKirbyAnimStunStartD_joint18[114];
extern u16 dFTKirbyAnimStunStartD_joint19[56];
extern u16 dFTKirbyAnimStunStartD_joint21[14];
extern u16 dFTKirbyAnimStunStartD_joint22[114];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTKirbyAnimStunStartD_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimStunStartD_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimStunStartD_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimStunStartD_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimStunStartD_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTKirbyAnimStunStartD_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTKirbyAnimStunStartD_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimStunStartD_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTKirbyAnimStunStartD_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTKirbyAnimStunStartD_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimStunStartD_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTKirbyAnimStunStartD_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTKirbyAnimStunStartD_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTKirbyAnimStunStartD_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTKirbyAnimStunStartD_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTKirbyAnimStunStartD_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTKirbyAnimStunStartD_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimStunStartD_joint1[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY), 773, 576,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 825, -4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 7), 641, 27,
	ftAnimSetValRateT(FT_ANIM_TRAY, 8), 716, 91,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 101, -49,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 749, -84,
	ftAnimSetValRateT(FT_ANIM_TRAY, 10), 600, -111,
	ftAnimBlock(0, 6),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimStunStartD_joint2[32] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, -312, 0, 4096, 4096, 4096,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), 0, 0, -2, -1,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 12), 9,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, -25, 3,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, -268, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimStunStartD_joint3[22] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 30), 0, 4, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 30), 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimStunStartD_joint5[58] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 77, -162, -63, -180, -60, -120,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 9), 43, -2, -205, 5, -16, 2, -180, 68, -120, 85,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 9), -60,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -60, 43, -60, 43, 30, 87,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 6), 0, -72,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 6), -120, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX, 4), -60, 96,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -60, -60,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimStunStartD_joint6[90] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -576, 4, -1022, -1, 149, 6,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4095,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1050, -52,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 24), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), -695, -111, 653, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -805, -91, 782, 109,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -1095, -85, 1322, 138,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1101, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -1037, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -990, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1344, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1191, -85, 1477, 150,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -884, 48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1615, -8,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 4096,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -841, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, 36, -1391, -47, 1608, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimStunStartD_joint7[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 29), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimStunStartD_joint9[40] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 28, 157, -44, 120, -120, 90,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ, 9), 57, 0, 169, -5, 80, 1, 60, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 9), 120, -120,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 120, -45, -120, 45, 60, -22,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimStunStartD_joint10[104] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 643, -5, 1454, 0, 285, -3,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4095,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 433, 66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1314, 3,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 24), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 721, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 753, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 762, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 503, 70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1158, 103,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1309, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 931, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1260, 91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1592, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 970, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1351, 43,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 789, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 804, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1602, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1606, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 0, 1391, 39, 1608, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimStunStartD_joint11[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 29), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTKirbyAnimStunStartD_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimStunStartD_joint14[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 27, 3, -202, 0, 124, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 155, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -301, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -167, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -114, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 216, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 130, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), -11, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, -11, -302, 0, 237, 21,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimStunStartD_joint16[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimStunStartD_joint18[114] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1683, -6, 1494, 1, -751, -15,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4095, 4095,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), -1935, -2, 1581, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1042, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1037, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1179, -38,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1936, -4, 1587, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1761, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2094, -88,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1191, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1060, -32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1710, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2215, -44, 1894, 124,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2163, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1958, 41, -1161, -86,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1546, -55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1799, -19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2126, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1933, 17,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1597, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1675, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1918, 15, 1785, -14, -1704, -29,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimStunStartD_joint19[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -499, 0, 290, 0, -430, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 159, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -50, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -446, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -416, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 17, 6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 153, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 281, 22,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 9, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 228, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, 3, 302, 21, 233, 4,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimStunStartD_joint21[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimStunStartD_joint22[114] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 446, 6, -159, 6, 970, 10,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4095, 4095,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 466, 137,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1184, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 791, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1035, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1356, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1400, 18, 599, 120,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 513, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1394, -164, 1133, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1071, -408, 773, -430,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 577, -289, 273, -283,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 209, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 492, -58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 367, -47,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 213, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -78, -20,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 490, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 205, -29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 318, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 305, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 309, 3, 176, -28, -99, -21,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
