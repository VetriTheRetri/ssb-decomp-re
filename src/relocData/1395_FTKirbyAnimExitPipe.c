/* AnimJoint data for relocData file 1395 (FTKirbyAnimExitPipe) */
/* 1632 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimExitPipe_joint1[62];
extern u16 dFTKirbyAnimExitPipe_joint2[24];
extern u16 dFTKirbyAnimExitPipe_joint3[26];
extern u16 dFTKirbyAnimExitPipe_joint5[32];
extern u16 dFTKirbyAnimExitPipe_joint6[112];
extern u16 dFTKirbyAnimExitPipe_joint7[14];
extern u16 dFTKirbyAnimExitPipe_joint9[32];
extern u16 dFTKirbyAnimExitPipe_joint10[116];
extern u16 dFTKirbyAnimExitPipe_joint11[16];
extern u16 dFTKirbyAnimExitPipe_joint13[10];
extern u16 dFTKirbyAnimExitPipe_joint14[68];
extern u16 dFTKirbyAnimExitPipe_joint16[14];
extern u16 dFTKirbyAnimExitPipe_joint18[80];
extern u16 dFTKirbyAnimExitPipe_joint19[66];
extern u16 dFTKirbyAnimExitPipe_joint21[14];
extern u16 dFTKirbyAnimExitPipe_joint22[86];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTKirbyAnimExitPipe_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimExitPipe_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimExitPipe_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimExitPipe_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimExitPipe_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTKirbyAnimExitPipe_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTKirbyAnimExitPipe_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimExitPipe_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTKirbyAnimExitPipe_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTKirbyAnimExitPipe_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimExitPipe_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTKirbyAnimExitPipe_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTKirbyAnimExitPipe_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTKirbyAnimExitPipe_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTKirbyAnimExitPipe_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTKirbyAnimExitPipe_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTKirbyAnimExitPipe_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimExitPipe_joint1[62] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -180, 4915, 2048, 4915,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 4915, -74, 2048, 409, 4915, -74,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 20), -180,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 600, 400, 4096, -409, 4096, 955, 4096, -409,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 720, 3686, 4915, 3686,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 600, -320, 4096, 227, 4096, -546, 4096, 227,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 360, 4710, 2457, 4710,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 600, 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimExitPipe_joint2[24] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), -312,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 20), -312,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 0, 249,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 8), 0, -138,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), -312,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimExitPipe_joint3[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -178, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -178, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimExitPipe_joint5[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 268, -120, -120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 30), 268, -120, -120,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), -60, 96,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 5), -180,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimExitPipe_joint6[112] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_SCAX), 2412, -1608, 3072,
	ftAnimSetValRate(FT_ANIM_ROTY), -125, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -136, -4,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 30), 3072,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 19), 2412, -1608,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2412, -18, -1608, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 2569, -38, -1710, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -135, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -326, -111,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2516, -55, -1683, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 2256, -27, -1503, 14,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -445, -109,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -949, -224,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2210, 64, -1470, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2384, 99, -1625, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2409, 13, -1188, -193, -1608, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2412, 1, -1336, -101, -1608, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2412, 0, -1391, -54, -1608, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimExitPipe_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimExitPipe_joint9[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), -268, 120, -120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 30), -268, 120, -120,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), -60, 96,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 5), 180,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimExitPipe_joint10[116] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_SCAX), -804, 3072,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 1485, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 1471, -4,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 30), 3072,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 19), -804,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -804, 18, 0, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -961, 38, -100, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1473, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1278, -109,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -908, 55, -74, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -651, 26, 101, 13,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1162, -106,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 662, -224,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -602, -62, 138, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -775, -98, -16, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -800, -14, 419, -195, 0, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, -1, 271, -99, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, 0, 220, -51, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimExitPipe_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimExitPipe_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimExitPipe_joint14[68] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -302,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -86, 0, 237, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 19), -91, 4, 237, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 19), -302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -86, 32, -302, 23, 237, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 41, 0, 142, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -198, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -200, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -299, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 39, -3, 142, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), -25, 5, 230, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, 1, -302, -2, 237, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTKirbyAnimExitPipe_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 39), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimExitPipe_joint18[80] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1945, 0, 1723, 0, -1701, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 1723, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 19), -1947, 2, -1701, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1945, 25, -1701, 85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1322, 125,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1887, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1704, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1695, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1278, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -1699, -17,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1892, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1918, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1711, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1777, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1918, 0, 1785, 7, -1704, -5,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimExitPipe_joint19[66] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 302, 237,
	ftAnimSetValRate(FT_ANIM_ROTX), 86, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 91, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 302, 237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 86, -32, 302, -23, 237, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -43, 0, 138, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 197, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 199, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 299, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -41, 3, 138, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), 25, -5, 230, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, -3, 302, 2, 233, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTKirbyAnimExitPipe_joint21[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), 7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTKirbyAnimExitPipe_joint22[86] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1271, 0, -1723, 0, -1701, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -1723, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 19), -1269, -2, -1701, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1271, -25, -1701, 85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1322, 125,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1329, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1704, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1695, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1278, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -1699, -17,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1324, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1298, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1711, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1777, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1298, 0, -1785, -7, -1708, -9,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
