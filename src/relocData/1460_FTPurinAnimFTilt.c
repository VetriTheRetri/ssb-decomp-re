/* AnimJoint data for relocData file 1460 (FTPurinAnimFTilt) */
/* 3008 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimFTilt_joint1[44];
extern u16 dFTPurinAnimFTilt_joint2[32];
extern u16 dFTPurinAnimFTilt_joint3[68];
extern u16 dFTPurinAnimFTilt_joint5[32];
extern u16 dFTPurinAnimFTilt_joint6[244];
extern u16 dFTPurinAnimFTilt_joint7[28];
extern u16 dFTPurinAnimFTilt_joint9[40];
extern u16 dFTPurinAnimFTilt_joint10[250];
extern u16 dFTPurinAnimFTilt_joint11[32];
extern u16 dFTPurinAnimFTilt_joint13[10];
extern u16 dFTPurinAnimFTilt_joint14[166];
extern u16 dFTPurinAnimFTilt_joint16[28];
extern u16 dFTPurinAnimFTilt_joint18[182];
extern u16 dFTPurinAnimFTilt_joint19[122];
extern u16 dFTPurinAnimFTilt_joint21[28];
extern u16 dFTPurinAnimFTilt_joint22[154];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTPurinAnimFTilt_joints[] = {
	(AObjEvent32 *)dFTPurinAnimFTilt_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTPurinAnimFTilt_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTPurinAnimFTilt_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTPurinAnimFTilt_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTPurinAnimFTilt_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTPurinAnimFTilt_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTPurinAnimFTilt_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTPurinAnimFTilt_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTPurinAnimFTilt_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTPurinAnimFTilt_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTPurinAnimFTilt_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTPurinAnimFTilt_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTPurinAnimFTilt_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTPurinAnimFTilt_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTPurinAnimFTilt_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTPurinAnimFTilt_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTPurinAnimFTilt_joint1[44] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 600, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 600, 239, -120, 239,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 840, 53, 240, 360,
	ftAnimSetValRateT(FT_ANIM_TRAY, 14), 720, -120,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 240, -137,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), 0, -160,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 600, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 600, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPurinAnimFTilt_joint2[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 0, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -804, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1072, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -3485, -201,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), -3485,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), -3485,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPurinAnimFTilt_joint3[68] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 312, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 8), 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 178, 67, 3891, 51, 4505, -102, 3891, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 536, 33, 4300, 22, 3686, -45, 4300, 22,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 14), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_SCAY, 14), 312, -35, 4096, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 446, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 0, -37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 0, 240, 4300, 3276, 4300,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 0, 312, 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTPurinAnimFTilt_joint5[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -178, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 89, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 14), 178, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 0, -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTPurinAnimFTilt_joint6[244] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2412, 19, -1391, 15, -1608, -44,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2503, 98,
	ftAnimSetValRateT(FT_ANIM_SCAX, 4), 3072, -511,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1375, 43, -1652, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1304, 78, -1804, -193,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2224, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2629, 107, -1218, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2718, 34, -1229, 34,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 2048,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2698, 0, -1150, 118, -2173, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2717, -4, -991, 11, -2108, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2689, -52, -1128, -124, -2518, -296,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2612, 28, -1240, -66, -2700, -71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1265, -4,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 14), 2048,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2746, 139, -2662, 64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2406, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2892, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2953, 40, -1268, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1188, 76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 3021, 35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2382, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2391, -35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1093, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3074, 264, -968, 126, -2449, -267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3549, 697, -840, 14, -2925, -695,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4469, 504, -938, -111, -3840, -496,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4559, 69, -1062, -111, -3918, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1262, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4609, 51, -3955, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4663, 54, -4002, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4718, 310, -4054, -264,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5283, 455, -1238, -51, -4531, -385,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5629, 177, -1365, -77, -4825, -145,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5639, 4, -1394, -17, -4822, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1395, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 5637, -3, -4822, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 5632, -4, -4824, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5629, -3, -1391, 4, -4825, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTPurinAnimFTilt_joint7[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPurinAnimFTilt_joint9[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -178, 22, 0, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 178, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 0, -11, 0, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTPurinAnimFTilt_joint10[250] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 11, 1391, -29, 1608, 35,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1748, 138,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 941, 120,
	ftAnimSetValRateT(FT_ANIM_SCAX, 4), 3072, -511,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1361, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1271, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1162, -56, 1921, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1094, 258, 1158, 0, 2149, 288,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1243, 142,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 2048,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1458, 597, 2498, 364,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2289, 531, 2879, 317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2521, 139, 1449, 98, 3132, 257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2569, 44, 1439, -61, 3393, 117,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 14), 2048,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2611, -9, 1326, -156, 3367, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2550, -324, 1126, -134, 3137, -430,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1962, -435, 1057, -3, 2506, -434,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2207, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1679, -179, 1120, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1602, -65, 1120, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1012, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1548, -65, 2170, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1471, -131, 2119, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1285, -480, 919, -73, 1975, -429,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 509, -631, 865, 20, 1260, -565,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 23, -305, 960, 100, 843, -237,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1215, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -100, -93, 785, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -162, -44, 777, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -190, -9, 792, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -181, 297, 1252, -7, 833, 244,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 404, 492, 1199, 56, 1280, 387,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 201, 1365, 100, 1608, 161,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 808, 1, 1401, 19, 1604, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 807, -1, 1404, -3, 1604, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 805, -1, 1394, -8, 1607, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, -1, 1387, -7, 1608, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTPurinAnimFTilt_joint11[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTPurinAnimFTilt_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 28),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPurinAnimFTilt_joint14[166] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -21, -54, -302, 5, 233, 97,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -272, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -75, -72, 330, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -166, -79, 495, 140,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -340, -43, 665, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -249, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -327, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -372, 56, -483, -168, 621, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -227, 292, -664, -117, 430, -320,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 212, 283, -718, -23, -19, -289,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -702, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 338, 87, -147, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 387, 39, -197, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 349, -86, -162, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -690, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -587, 45,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 233, -129, -45, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -127, -72, 333, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -182, -38, -538, 49, 402, 52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -378, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -192, 14, 453, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -176, 55, 445, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -81, 77, -356, 37, 320, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, 30, -302, 27, 233, -43,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 2), -21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -302, 233,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -302, 233,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -21,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPurinAnimFTilt_joint16[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTPurinAnimFTilt_joint18[182] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1918, -50, -1431, 115, -1708, 48,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_SCAX, 4), 4096, 511,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1968, -143, -1315, 105, -1660, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2205, -29, -1220, -117, -1287, 325,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1772, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1551, -239, -1008, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1698, -31, -941, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -991, 39,
	ftAnimSetValRateT(FT_ANIM_SCAX, 4), 6144, 256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1722, 45, -1613, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1680, 1, -1502, 72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1467, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1719, -55, -897, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1790, -56, -821, 51,
	ftAnimSetValRateT(FT_ANIM_SCAX, 4), 5120, -409,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1833, -39, -1463, -2, -793, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -2096, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -1551, 23, -645, -35,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_SCAX, 6), 4096, -204,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2165, -81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2496, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1521, 37, -687, -52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -925, -108,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1311, 42,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2581, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2591, 195, -1044, -262,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2191, 336, -1276, -60, -1451, -332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1918, 136, -1431, -77, -1708, -128,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1918, -1431, -1708,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1918, -1431, -1708,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTPurinAnimFTilt_joint19[122] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 21, 13, 302, -17, 233, 26,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 38, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 239, -50, 308, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 184, -42, 341, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 169, 23, 311, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 19, -19, 200, 26, 246, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 230, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -34, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 159, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 163, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 60, -22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 238, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 318, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -49, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -100, -7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 37, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 24, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -104, 29, 19, 50,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 21, 31, 233, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 325, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 302, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, 302, 233,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 21, 302, 233,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPurinAnimFTilt_joint21[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPurinAnimFTilt_joint22[154] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1298, 3, -1785, -34, -1708, -9,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1304, -5, -1758, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1819, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1896, -77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -2006, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1305, 11, -1736, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1281, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1456, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1951, 83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1734, 75,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1317, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1346, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1688, 23, -1420, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1412, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1685, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1684, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1591, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1418, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1523, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1355, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1423, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1564, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1512, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1415, 42, -1513, -68, -1541, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1785, -67, -1708, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1338, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1298, 19,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 3), -1298,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1785, -1708,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1785, -1708,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -1298,
	ftAnimEnd(),
	0x0000, 0x0000,
};
