/* AnimJoint data for relocData file 1453 (FTPurinAnimDashAttack) */
/* 3408 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimDashAttack_joint1[20];
extern u16 dFTPurinAnimDashAttack_joint2[86];
extern u16 dFTPurinAnimDashAttack_joint3[28];
extern u16 dFTPurinAnimDashAttack_joint4[102];
extern u16 dFTPurinAnimDashAttack_joint6[48];
extern u16 dFTPurinAnimDashAttack_joint7[220];
extern u16 dFTPurinAnimDashAttack_joint8[22];
extern u16 dFTPurinAnimDashAttack_joint10[48];
extern u16 dFTPurinAnimDashAttack_joint11[222];
extern u16 dFTPurinAnimDashAttack_joint12[72];
extern u16 dFTPurinAnimDashAttack_joint14[42];
extern u16 dFTPurinAnimDashAttack_joint15[152];
extern u16 dFTPurinAnimDashAttack_joint17[22];
extern u16 dFTPurinAnimDashAttack_joint19[184];
extern u16 dFTPurinAnimDashAttack_joint20[150];
extern u16 dFTPurinAnimDashAttack_joint22[240];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTPurinAnimDashAttack_joints[] = {
	(u32)dFTPurinAnimDashAttack_joint1, /* [0] joint 1 */
	(u32)dFTPurinAnimDashAttack_joint2, /* [1] joint 2 */
	(u32)dFTPurinAnimDashAttack_joint3, /* [2] joint 3 */
	(u32)dFTPurinAnimDashAttack_joint4, /* [3] joint 4 */
	(u32)dFTPurinAnimDashAttack_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTPurinAnimDashAttack_joint7, /* [6] joint 7 */
	(u32)dFTPurinAnimDashAttack_joint8, /* [7] joint 8 */
	(u32)dFTPurinAnimDashAttack_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTPurinAnimDashAttack_joint11, /* [10] joint 11 */
	(u32)dFTPurinAnimDashAttack_joint12, /* [11] joint 12 */
	(u32)dFTPurinAnimDashAttack_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTPurinAnimDashAttack_joint15, /* [14] joint 15 */
	(u32)dFTPurinAnimDashAttack_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTPurinAnimDashAttack_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPurinAnimDashAttack_joint20, /* [19] joint 20 */
	(u32)dFTPurinAnimDashAttack_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF02EB, /* [22] END */
};

/* Joint 1 */
u16 dFTPurinAnimDashAttack_joint1[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 1200, 1524,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 13), 3240, 1200,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 7), 4200,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 16), 4200,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPurinAnimDashAttack_joint2[86] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 720, 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 32), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 36), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 4), 804, 75, 1200, -56,
	ftAnimSetValRateT(FT_ANIM_TRAY, 13), 600, -240,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 9), 982,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 982,
	ftAnimSetValRateT(FT_ANIM_TRAY, 7), 600, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1161, 63,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 1429,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 780, 359,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 1429,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 8), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 960, -179,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 600,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 35, 4096, -27, 4096, 30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 590, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPurinAnimDashAttack_joint3[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 28), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), -268,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -46, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), -268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTPurinAnimDashAttack_joint4[102] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 89, 89, 312, 4300, 3686, 4300,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 28), 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 0, -3, 0, -3, 4505, -31, 4505, 63, 3276, -31,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 20), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 9), 4096, -63, 4096, -63, 4096, 126,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 163, 4096, 163, 4096, -327,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4505, 117, 4505, -234, 3276, 117,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4505, -163, 3276, 81, 4505, 81,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 16), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 0, 14, 3686, -102, 4915, 204, 3686, -102,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 8), 178,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 312, -71, 4096, 153, 4096, -409, 4096, 153,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 240, 4300, 3276, 4300,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 0, 312, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPurinAnimDashAttack_joint6[48] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -89, -134, 178, -30, -30, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 5, 0, 7, 0, -10, -160, 0, -76, 1, 99, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), -160, 0, -76, 0, 99, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 23), -160, 0, -76, 0, 99, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPurinAnimDashAttack_joint7[220] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 2048,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 814, -83, -1214, 73, -114, 61,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 363, -659, 251, 596,
	ftAnimSetValRateT(FT_ANIM_SCAX, 4), 4096, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1140, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -952, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -588, -608, -926, 20, 1139, 577,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -854, -80, -911, -5, 1406, 74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -925, 10,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 13), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -749, 59, 1287, -66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1270, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -753, -21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -915, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -908, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1279, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1441, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -780, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -988, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -966, 52,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 23), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -883, 35, 1433, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1453, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -895, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -996, 28,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -912, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -989, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -960, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1071, -200,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1477, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1598, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1340, -246, 1841, 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1685, -15, 2152, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1595, 160, -965, -17, 2038, -195,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1233, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1364, 138, 1761, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1318, 10, 1640, -75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1580, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1343, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1309, 41, -1243, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1229, 18, -1243, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1562, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1559, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1222, 6, -1241, 2, 1564, 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPurinAnimDashAttack_joint8[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 17), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPurinAnimDashAttack_joint10[48] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -89, -134, -178, 30, -30, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 5, 0, 7, 0, 10, 151, 0, -96, 0, 120, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 151, 0, -96, 0, 120, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 23), 151, 0, -96, 0, 120, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPurinAnimDashAttack_joint11[222] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 2048,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2357, -3, 1188, -38, 3011, -3,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2364, 54,
	ftAnimSetValRateT(FT_ANIM_SCAX, 4), 4096, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2974, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1150, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1030, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2463, 44, 1211, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2452, 7, 1058, -31,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 13), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2477, 7, 1148, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 2457, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1163, 9, 2968, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 2941, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1042, 8,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2461, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 2447, -2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2946, 36,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 23), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1048, 3, 3013, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1047, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2993, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2874, 33,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2443, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2338, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1019, -64, 2916, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 918, -62, 2896, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2150, -79, 893, -10, 2751, -60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 851, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2180, 121, 2776, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2393, 15, 2942, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2210, 70, 772, -66, 2725, 55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 642, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2534, 268, 3052, 293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2748, 119, 3311, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2772, -8, 524, -100, 3377, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 2614, -29, 402, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 3268, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3213, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3155, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2594, -12, 377, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2590, -4, 366, -10, 3154, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTPurinAnimDashAttack_joint12[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -360,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -727, -264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -536, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -775, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -770, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -500, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -504, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -535, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -535, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -395, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -127, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTPurinAnimDashAttack_joint14[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 20, 0, -271, 0, -1055, 0, 106, 0, -21, 0, 16, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 20, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), -271, -1055, 106, -21, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), -501, -271, -1055, 106, -21, 16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTPurinAnimDashAttack_joint15[152] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -115, 3, -234, -31, 888, -55,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -335, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 3, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 832, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 639, -231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 369, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -302, 22, 237, -81,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -302, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 188, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 8, 5, 177, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 237, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -21, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -302, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -297, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 233, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 237, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -23, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -82, -32,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 247, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 366, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -293, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -371, 26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -114, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -21, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 307, -58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 260, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -327, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -308, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -24, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -36, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -34, 2, -308, 0, 255, -4,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPurinAnimDashAttack_joint17[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 27), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTPurinAnimDashAttack_joint19[184] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1852, -32, 1677, -17, -1799, 88,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1884, -23, 1659, -63, -1711, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1899, 94, 1550, -89, -1439, 352,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1695, 148, 1481, -5, -1005, 319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1602, 45, 1539, 38, -801, 123,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1567, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1609, -4, -733, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1613, -3, -723, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -801, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1530, 28,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1560, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1591, 9,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -763, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -425, -14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1502, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1522, -48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1598, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1655, 92,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, -85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -736, -102,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1575, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1756, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -801, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1002, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1912, -129, 1763, 81, -1193, -211,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1785, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2004, 34, -1596, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1945, 43, -1683, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1937, -3, -1688, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1778, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1758, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1937, 0, 1758, 0, -1692, -4,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTPurinAnimDashAttack_joint20[150] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -12, -5, 243, 0, -531, 14,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -51, 4, 270, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -410, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -333, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -347, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -48, 0, 265, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -15, 39, 326, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -323, 162,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 241, 131,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 25, 20, 298, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 25, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 302, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 240, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 17), 237,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 21, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 23, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 302, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 307, 0,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 237, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 166, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 13, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 36, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 303, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 227, 37,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 193, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 260, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 276, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 308, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 34, -2, 308, 0, 255, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPurinAnimDashAttack_joint22[240] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 20), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x280E, 0xFA81, 0xFFF6, 0xF972, 0x0012, 0x0744, 0x0064, 0x4F00, 0x1000, 0x1000, 0x1000, 0x2807, 0x0002, 0xFA28, 0xFFB2, 0xF9C7, 0x004A, 0x2009, 0x0001, 0x07A8, 0x009D, 0x2009, 0x0001, 0x087F, 0x00AF, 0x2809, 0x0005, 0x0919, 0x0005, 0x2007, 0x0001, 0xF9DB, 0xFFD8, 0xFA1A, 0x003B, 0x2805, 0x0004, 0xFA40, 0xFFF3, 0x2003, 0x0003, 0xF9D0, 0x0001, 0x2003, 0x0001, 0xF9D8, 0xFFFF, 0x2803, 0x0003, 0xF9B3, 0x0002, 0x200D, 0x0001, 0xFA27, 0xFFDD, 0x092E, 0x0026, 0x2805, 0x0002, 0xF9F9, 0x0001, 0x2009, 0x0001, 0x0966, 0x001A, 0x2009, 0x0001, 0x0964, 0xFFFC, 0x2809, 0x0009, 0x09DE, 0x0048, 0x2007, 0x0001, 0xF9B6, 0x0003, 0xF9FB, 0x0001, 0x2803, 0x0009, 0xF968, 0xFFE4, 0x2805, 0x000B, 0xF9C9, 0xFFF8, 0x0801, 0x0008, 0x2009, 0x0001, 0x0A2C, 0x004A, 0x2809, 0x0004, 0x0AE7, 0xFFF1, 0x2003, 0x0001, 0xF94C, 0xFFE8, 0x2803, 0x0005, 0xF962, 0x0030, 0x0801, 0x0001, 0x2005, 0x0001, 0xF9C2, 0xFFFC, 0x2805, 0x0006, 0xF9F6, 0xFFF7, 0x0801, 0x0001, 0x2009, 0x0001, 0x0AB7, 0xFFAB, 0x2809, 0x0002, 0x09B0, 0xFF9A, 0x0801, 0x0001, 0x2003, 0x0001, 0xF997, 0x0028, 0x2803, 0x0003, 0xF9E6, 0x002F, 0x2009, 0x0001, 0x096F, 0xFFD6, 0x2809, 0x0003, 0x08A4, 0xFF58, 0x0801, 0x0001, 0x2005, 0x0001, 0xF9E9, 0xFFF5, 0x2805, 0x0003, 0xF995, 0xFFBD, 0x2003, 0x0001, 0xFA1F, 0x0036, 0x2803, 0x0006, 0xFAF2, 0x0006, 0x2009, 0x0001, 0x07D2, 0xFF24, 0x2809, 0x0002, 0x0654, 0xFF8A, 0x0801, 0x0001, 0x2005, 0x0001, 0xF948, 0xFFC1, 0x2805, 0x0005, 0xF922, 0x0004, 0x2009, 0x0001, 0x05FE, 0xFFCB, 0x2809, 0x0004, 0x05F8, 0x0000, 0x0801, 0x0002, 0x2003, 0x0001, 0xFAFA, 0x0007, 0x2003, 0x0001, 0xFB01, 0x0003, 0x200F, 0x0001, 0xFB01, 0x0000, 0xF922, 0x0000, 0x05F4, 0xFFFD, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
