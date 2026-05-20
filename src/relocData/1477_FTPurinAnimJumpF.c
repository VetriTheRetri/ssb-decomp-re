/* AnimJoint data for relocData file 1477 (FTPurinAnimJumpF) */
/* 1664 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimJumpF_joint1[32];
extern u16 dFTPurinAnimJumpF_joint2[16];
extern u16 dFTPurinAnimJumpF_joint3[38];
extern u16 dFTPurinAnimJumpF_joint5[34];
extern u16 dFTPurinAnimJumpF_joint6[104];
extern u16 dFTPurinAnimJumpF_joint7[22];
extern u16 dFTPurinAnimJumpF_joint9[36];
extern u16 dFTPurinAnimJumpF_joint10[102];
extern u16 dFTPurinAnimJumpF_joint11[14];
extern u16 dFTPurinAnimJumpF_joint13[38];
extern u16 dFTPurinAnimJumpF_joint14[70];
extern u16 dFTPurinAnimJumpF_joint16[24];
extern u16 dFTPurinAnimJumpF_joint18[88];
extern u16 dFTPurinAnimJumpF_joint19[68];
extern u16 dFTPurinAnimJumpF_joint21[14];
extern u16 dFTPurinAnimJumpF_joint22[88];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTPurinAnimJumpF_joints[] = {
	(AObjEvent32 *)dFTPurinAnimJumpF_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTPurinAnimJumpF_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTPurinAnimJumpF_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTPurinAnimJumpF_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTPurinAnimJumpF_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTPurinAnimJumpF_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTPurinAnimJumpF_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTPurinAnimJumpF_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTPurinAnimJumpF_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTPurinAnimJumpF_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTPurinAnimJumpF_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTPurinAnimJumpF_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTPurinAnimJumpF_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTPurinAnimJumpF_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTPurinAnimJumpF_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTPurinAnimJumpF_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTPurinAnimJumpF_joint1[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 600, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 30), -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 25), 0, -1,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 15), 3216,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -268, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPurinAnimJumpF_joint2[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 25), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 15), -268,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPurinAnimJumpF_joint3[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -178, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 312, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), -178, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 25), 4300, 4300, 3686,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 15), 268,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 0, 4096, 0, 4096, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTPurinAnimJumpF_joint5[34] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 18, -369, -65,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 178, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 25), 18, -1, -369, -1, -65, 1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 20, -2, -567, -303, -33, 190,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -144, -737, 238,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTPurinAnimJumpF_joint6[104] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2399, 0, -600, -3, -1572, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), -605, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 25), 2409, 0, -1582, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2412, 7, -1590, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 2519, 44, -1836, -120,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -611, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -696, -51,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2560, 120, -1975, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2760, 476, -759, -6, -2351, -664,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -434, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3512, 417, -3305, -561,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3595, 72, -3474, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3657, 63, -3542, -69,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 3929, 23, -3840, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -292, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -40, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3938, 8, -33, 6, -3847, -7,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPurinAnimJumpF_joint7[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPurinAnimJumpF_joint9[36] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -390, -67,
	ftAnimSetValRate(FT_ANIM_TRAX), -29, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, -178, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 25), -29, -1, -390, -1, -67, -3,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -20, 43, -506, -218, -33, 214,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 69, -722, 238,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTPurinAnimJumpF_joint10[102] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2397, 0, 538, 0, -1558, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 26), -2400, 4, -1558, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 24), 529, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 529, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 715, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2394, 12, -1544, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -2161, 181, -1167, 289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1952, 122, 684, -71, -829, 222,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -726, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -98, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1803, 208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1499, 243,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1190, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -703, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -987, 163, -102, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -804, 38, -100, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -785, 18, -109, -9, -696, 6,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPurinAnimJumpF_joint11[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPurinAnimJumpF_joint13[38] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 25), -804, 0, -1072, 204, -120, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -804, 20, 0, 17, -1072, -23, 204, -51, -120, 52, 0, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -501, 264, -1427, 106, -21, 16,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPurinAnimJumpF_joint14[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1732, -2, -1306, 0, 2020, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 34), 1583, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), -1277, 0, 2119, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1280, -5, 2127, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1475, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 2016, -43,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1567, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1644, 77,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1465, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1350, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1979, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1729, 59, 1961, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1763, 34, -1321, 29, 1961, 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPurinAnimJumpF_joint16[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTPurinAnimJumpF_joint18[88] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -282, 0, -164, 0, -29, 3,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), -85, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 24), -320, -8, 8, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -329, -16, 13, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -436, 43, 246, -17,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -94, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -258, 65,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -377, 67, 209, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -12, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -9, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 45, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -202, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -172, 67, 28, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -123, -2, 118, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -246, -43, -128, -5, 137, 19,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPurinAnimJumpF_joint19[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1484, 0, 1306, 0, 2020, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), 1270, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 25), 1523, 2, 2105, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1525, -5, 2117, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 1182, -54, 1865, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1257, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1138, -2,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1134, -5, 1833, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1361, 64, 1933, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1144, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1260, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1401, 39, 1291, 30, 1940, 6,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPurinAnimJumpF_joint21[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 39), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPurinAnimJumpF_joint22[88] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 5120,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1359, 0, 1764, 0, -1166, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_SCAX, 25), 5120, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), -1398, 10, 1860, -5, -1093, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1387, 22, 1854, -20, -1113, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1575, -39,
	ftAnimSetValRateT(FT_ANIM_SCAX, 10), 3686, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -1205, 4, 1408, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1205, -1, 1344, -60,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -1222, -45, 1346, 115,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1604, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1428, 23,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 3686,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1273, -39, 1469, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1300, -26, 1525, 56, -1415, 12,
	ftAnimEnd(),
};
