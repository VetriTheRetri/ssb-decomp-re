/* AnimJoint data for relocData file 1489 (FTPurinAnimBatDash) */
/* 2960 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimBatDash_joint1[18];
extern u16 dFTPurinAnimBatDash_joint2[118];
extern u16 dFTPurinAnimBatDash_joint3[42];
extern u16 dFTPurinAnimBatDash_joint4[52];
extern u16 dFTPurinAnimBatDash_joint6[60];
extern u16 dFTPurinAnimBatDash_joint7[170];
extern u16 dFTPurinAnimBatDash_joint8[14];
extern u16 dFTPurinAnimBatDash_joint10[66];
extern u16 dFTPurinAnimBatDash_joint11[180];
extern u16 dFTPurinAnimBatDash_joint12[16];
extern u16 dFTPurinAnimBatDash_joint14[52];
extern u16 dFTPurinAnimBatDash_joint15[144];
extern u16 dFTPurinAnimBatDash_joint17[54];
extern u16 dFTPurinAnimBatDash_joint19[136];
extern u16 dFTPurinAnimBatDash_joint20[130];
extern u16 dFTPurinAnimBatDash_joint22[24];
extern u16 dFTPurinAnimBatDash_joint23[158];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTPurinAnimBatDash_joints[] = {
	(u32)dFTPurinAnimBatDash_joint1, /* [0] joint 1 */
	(u32)dFTPurinAnimBatDash_joint2, /* [1] joint 2 */
	(u32)dFTPurinAnimBatDash_joint3, /* [2] joint 3 */
	(u32)dFTPurinAnimBatDash_joint4, /* [3] joint 4 */
	(u32)dFTPurinAnimBatDash_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTPurinAnimBatDash_joint7, /* [6] joint 7 */
	(u32)dFTPurinAnimBatDash_joint8, /* [7] joint 8 */
	(u32)dFTPurinAnimBatDash_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTPurinAnimBatDash_joint11, /* [10] joint 11 */
	(u32)dFTPurinAnimBatDash_joint12, /* [11] joint 12 */
	(u32)dFTPurinAnimBatDash_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTPurinAnimBatDash_joint15, /* [14] joint 15 */
	(u32)dFTPurinAnimBatDash_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTPurinAnimBatDash_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPurinAnimBatDash_joint20, /* [19] joint 20 */
	(u32)dFTPurinAnimBatDash_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTPurinAnimBatDash_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTPurinAnimBatDash_joint1[18] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 2400,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 1200, 1920,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 26), 3600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 16), 3600,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPurinAnimBatDash_joint2[118] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 303, 62, -47, 18, 1035, 381, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 0, -10, 0, -2, 0, 1, 0, -4, 4096, 68, 4096, -273, 4096, 68,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 600, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 26), 0, 0, 0, 0, 240,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 480, 4300, 3276, 4300,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 9), 600, 40, 4096, -17, 4096, 68, 4096, -17,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 4096, -21, 4096, 86, 4096, -21,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 15), 600,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 780, -120, -120, -240, 3891, 51, 4915, -204, 3891, 51,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 0, 0, 480, -126, 0, 120, 4300, 34, 3276, -136, 4300, 34,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 8), 0, 590,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4096, 35, 4096, -27, 4096, 30,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPurinAnimBatDash_joint3[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -12, -636, 15,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0, 21, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 26), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 16), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 0, -2, -134, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -46, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), -268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTPurinAnimBatDash_joint4[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3889, 0, 4236, 0, 3889, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 178, 8, 357, 14, 4096, 13, 4096, -9, 4096, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 26), 268, 446, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 89, -27,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 16), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), -89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTPurinAnimBatDash_joint6[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -157, -440, 92,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 178, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -106, -345, 177,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 26), 0, 178, 0, -106, -345, 177,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 178, 0, -103, 91, -17, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 16), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 8), -80,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -160, -114, -76, -3, 99, 133,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTPurinAnimBatDash_joint7[170] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1590, -542, -1592, -328, 1174, 126,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -2471, -192, -1862, 300,
	ftAnimSetValRateT(FT_ANIM_SCAX, 4), 4096, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1300, 544,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2262, 619,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2517, -58, -1321, 338, 2538, 230,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1183, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -2640, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2723, 111,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2823, 12,
	ftAnimSetValRateT(FT_ANIM_SCAX, 26), 4096, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1187, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -1086, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2833, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 2673, -6,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2642, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -2602, 17,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2666, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 3268, 382,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 16), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2572, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2558, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1086, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1101, -74,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2805, -196, 3683, 327,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 4314, 97,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -3652, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1189, -67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1238, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4408, 88,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 4757, 34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3882, -229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -4393, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4439, -46, -1241, -2, 4781, 24,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPurinAnimBatDash_joint8[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 45), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPurinAnimBatDash_joint10[66] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 247, -547, 197,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 357, 0, 178, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 78, -68, -189,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 357, 0, 178, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 26), 0, 78, -68, -189,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 8), 178, -28, 0, 0, 147, 21, -75, 209,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 16), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 8), -315,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 151, 1, -96, -1, 120, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTPurinAnimBatDash_joint11[180] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1739, 171, 1754, -171, 1226, -116,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_SCAX, 4), 4096, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1080, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1910, 93, 1110, -233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1927, -713, 759, -304,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 274, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 482, -801,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 323, -93,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 200, -30,
	ftAnimSetValRateT(FT_ANIM_SCAX, 26), 4096, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1066, -14, 233, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), 62, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 1126, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 173, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 30, -2,
	ftAnimBlock(0, 19),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 70, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 88, -3,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 16), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 30, -15, 1108, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -467, -520,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 975, 112,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 80, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -170, -397,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1129, -415, -713, -308,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1369, -67, -776, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1125, 108,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1060, 44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1433, -79, -777, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1888, -205, -1172, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2087, -149, -1405, -186,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -2235, -5, -1661, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1118, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1227, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2235, 0, 1241, 14, -1671, -9,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTPurinAnimBatDash_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 45), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTPurinAnimBatDash_joint14[52] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -58, -637, -1530, 106, -21, 16,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 204, 25, -120, -26, 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -17, -15, -785,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 26), -17, -15, -785, 204, -120, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -804, 0, -15, 0, -1056, 0, 204, 0, -120, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -501, -271, -1055, 106, -21, 16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTPurinAnimBatDash_joint15[144] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 523, -557, -260, 130, -461, 739,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -128, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -33, -289, 278, 361,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -55, 14, 261, -153,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -329, -147,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 97, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -247, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -186, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -322, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -208, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 97, -2, -184, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 55, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), -258, -1,
	ftAnimBlock(0, 16),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -197, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -293, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 64, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 64, -22,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -218, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -74, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 62, -13, -258, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -170, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -310, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 62, 126,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 264, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -158, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -44, 15,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 259, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -36, 7, -308, 1, 259, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPurinAnimBatDash_joint17[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1033, -1026,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -513,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 266, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 301, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 201, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPurinAnimBatDash_joint19[136] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2288, 404, 1556, 239, -1785, 226,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1809, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1884, 257, -1559, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1773, 13, -1704, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1857, -7, 1693, -104, -1585, 227,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1536, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1788, 46, -1248, 167,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -1779, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1249, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1247, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -1400, -24,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1525, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), 1664, 15,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1789, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1839, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1435, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1610, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1523, 119,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1368, -64,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1847, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1940, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1468, -105,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1689, -1,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1681, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1746, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1937, 3, 1758, 12, -1689, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTPurinAnimBatDash_joint20[130] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -415, 417, 179, 234, -448, 591,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 588, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 413, 73, 143, 405,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 327, -89, 362, 155,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 501, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 143, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 627, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 610, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 508, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), 566, -8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 138, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 200, 13,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 608, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 633, 15,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 547, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 364, 22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 205, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 307, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 404, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 271, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 645, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 210, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 116, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 57, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 36, -20, 308, 1, 259, -11,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPurinAnimBatDash_joint22[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 688, -681,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -340,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 43), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTPurinAnimBatDash_joint23[158] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1752, 18, -1605, -65, 2089, 200,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1557, 254,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1779, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2289, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2207, -62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 2155, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1224, 201,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1228, -8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1766, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -1706, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1215, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -1120, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2158, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), 2182, -13,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1125, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1224, -53,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1706, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1818, 34,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2160, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2099, -77,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1260, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1133, 62,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1782, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1761, 20,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1077, 24, 1982, -154,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1554, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1262, -30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1750, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1752, -4, 1531, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1279, -17, -1758, -6, 1527, -3,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
