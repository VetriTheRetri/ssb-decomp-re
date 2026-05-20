/* AnimJoint data for relocData file 1269 (FTKirbyAnimJumpF) */
/* 1712 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimJumpF_joint1[22];
extern u16 dFTKirbyAnimJumpF_joint2[10];
extern u16 dFTKirbyAnimJumpF_joint3[38];
extern u16 dFTKirbyAnimJumpF_joint5[42];
extern u16 dFTKirbyAnimJumpF_joint6[92];
extern u16 dFTKirbyAnimJumpF_joint7[24];
extern u16 dFTKirbyAnimJumpF_joint9[42];
extern u16 dFTKirbyAnimJumpF_joint10[92];
extern u16 dFTKirbyAnimJumpF_joint11[18];
extern u16 dFTKirbyAnimJumpF_joint13[10];
extern u16 dFTKirbyAnimJumpF_joint14[92];
extern u16 dFTKirbyAnimJumpF_joint16[38];
extern u16 dFTKirbyAnimJumpF_joint18[118];
extern u16 dFTKirbyAnimJumpF_joint19[60];
extern u16 dFTKirbyAnimJumpF_joint21[22];
extern u16 dFTKirbyAnimJumpF_joint22[92];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTKirbyAnimJumpF_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimJumpF_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimJumpF_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimJumpF_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimJumpF_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTKirbyAnimJumpF_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTKirbyAnimJumpF_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimJumpF_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTKirbyAnimJumpF_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTKirbyAnimJumpF_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimJumpF_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTKirbyAnimJumpF_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTKirbyAnimJumpF_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTKirbyAnimJumpF_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTKirbyAnimJumpF_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTKirbyAnimJumpF_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTKirbyAnimJumpF_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimJumpF_joint1[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -268, 0, 0, 600, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 0, 148,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 446,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), 3216,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimJumpF_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, -312, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimJumpF_joint3[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -178, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 312, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), -178, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 25), 4300, 4300, 3686,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 15), 268,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, -27, 4096, -27, 4096, 54,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimJumpF_joint5[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 178, -120, -120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 25), 178, 2, -120, 32, -120, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 268, 8, 0, 96, -240, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 268, -8, 0, -95, -240, 95,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 178, -120, -120,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimJumpF_joint6[92] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 0, -978, 4, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 25), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), 0, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), 802, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 24), -953, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -971, -45,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1565, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -242, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 806, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 998, 46,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1586, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1383, 159,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 3072,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1192, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1048, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1036, 38, -998, 50, -283, -40,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimJumpF_joint7[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 34), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimJumpF_joint9[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), -178, 120, -120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 25), -178, -2, 120, -32, -120, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 5), -268, -8, 0, -96, -240, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 5), -268, 8, 0, 95, -240, 95,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 5), -178, 120, -120,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimJumpF_joint10[92] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2412, 0, 629, 4, -1608, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 25), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), -1608, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), -2410, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 24), 654, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 636, -44,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 42, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1605, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -1851, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2414, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -2606, -46,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 24, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 225, 159,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 3072,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 415, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 559, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2644, -38, 609, 50, -1891, -40,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimJumpF_joint11[18] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 38), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTKirbyAnimJumpF_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimJumpF_joint14[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 123, -3, -301, -1, 411, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 103, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -357, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 544, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 542, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 415, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 138, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 160, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 467, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 196, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 212, 67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 423, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -356, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -300, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 195, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 232, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 419, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 299, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 295, -3, -302, -1, 237, 5,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimJumpF_joint16[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 141, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 13), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimJumpF_joint18[118] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1891, -1, 1773, -2, -1637, 4,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 1500, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), -2015, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -1528, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1544, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1478, 25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1502, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 2058, 45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1499, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1647, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2001, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2037, -105,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2071, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1893, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1501, 161,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1112, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2150, -88,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1963, 25,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1889, -4, -1118, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1776, -16, -1250, -16,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1943, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1933, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1930, 2, 1766, -9, -1255, -5,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimJumpF_joint19[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -121, -1, 302, 0, 416, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -48, -9, 369, -14, 585, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -67, -32, 344, -31, 536, -76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -388, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 299, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 154, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 150, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 232, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -393, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -297, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -297, 0, 300, 0, 233, 1,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimJumpF_joint21[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 7, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimJumpF_joint22[92] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 5120,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1359, 0, -1452, 2, -1163, -2,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_SCAX, 25), 5120, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -1472, 8, -1212, -10, -1021, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1461, 25, -1226, -40, -1027, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -1849, -56, -1282, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1275, -25,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_SCAX, 10), 3686, -191,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1917, -67, -1260, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -1778, 19, -1251, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1303, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1287, 2,
	ftAnimBlock(0, 7),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 3686,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1286, 1, -1766, 11, -1259, -7,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
