/* AnimJoint data for relocData file 1266 (FTKirbyAnimRunBrake) */
/* 1920 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimRunBrake_joint1[36];
extern u16 dFTKirbyAnimRunBrake_joint2[30];
extern u16 dFTKirbyAnimRunBrake_joint3[56];
extern u16 dFTKirbyAnimRunBrake_joint5[40];
extern u16 dFTKirbyAnimRunBrake_joint6[96];
extern u16 dFTKirbyAnimRunBrake_joint7[14];
extern u16 dFTKirbyAnimRunBrake_joint9[50];
extern u16 dFTKirbyAnimRunBrake_joint10[110];
extern u16 dFTKirbyAnimRunBrake_joint11[14];
extern u16 dFTKirbyAnimRunBrake_joint13[10];
extern u16 dFTKirbyAnimRunBrake_joint14[80];
extern u16 dFTKirbyAnimRunBrake_joint16[30];
extern u16 dFTKirbyAnimRunBrake_joint18[92];
extern u16 dFTKirbyAnimRunBrake_joint19[114];
extern u16 dFTKirbyAnimRunBrake_joint21[144];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimRunBrake_joints[] = {
	(u32)dFTKirbyAnimRunBrake_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimRunBrake_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimRunBrake_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimRunBrake_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimRunBrake_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimRunBrake_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimRunBrake_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimRunBrake_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimRunBrake_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimRunBrake_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimRunBrake_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimRunBrake_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimRunBrake_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimRunBrake_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimRunBrake_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF01B3, /* [21] END */
};

/* Joint 1 */
u16 dFTKirbyAnimRunBrake_joint1[36] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 720, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 600, -62,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 11), 0, 62,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 11), 600,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 8), 600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimRunBrake_joint2[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -357, -23, -223, -14, 178, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -357, 18, -223, -2, 178, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, -268, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimRunBrake_joint3[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 89, 89, 312, 4300, 3686, 4300,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAY, 4), 178, 17, -357, -17, 4505, -53,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAZ, 4), 420, 3891, 3891,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 11), 357, 11, -178, 18, 312, -45, 4300, 21, 3276, -42, 4300, 21,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 312, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 357, -46, -71, 23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimRunBrake_joint5[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), -89, -134, 178, -180, -180,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 5, 0, 8, 0, -11,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 15), -180,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 19), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 8), 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimRunBrake_joint6[96] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -784, -51, -435, 25, -1734, 20,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1664, -9,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 15), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -596, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1094, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1116, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1444, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1674, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1482, 106,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1586, -190, -594, 29, -1326, 221,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -242, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1988, -146, -814, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2118, -132, -663, 173,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -2396, -31, -72, 123,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -221, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -215, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2412, -15, -217, -1, 0, 72,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimRunBrake_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimRunBrake_joint9[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), -89, -134, -178, 180, -180,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 0, 5, 0, 8, 0, 11, 120, -31, 0, 31,
	ftAnimSetValRateT(FT_ANIM_TRAY, 11), -120, -31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 11), 0, 0, 0, 120,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 120, -125, -60, 125,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimRunBrake_joint10[110] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -793, 82, 1134, -29, -114, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 970, 30,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 15), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -501, 371, -36, 284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 32, 301, 455, 295,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 77, -25, 544, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1052, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 980, 24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 49, -34, 525, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 33, 103, 583, 132,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 138, 65, 1034, 74, 726, 97,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1253, 34, 1054, 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 313, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 488, 176,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 772, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1303, 52, 1313, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1359, 43, 1522, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 32, 1391, 31, 1608, 86,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimRunBrake_joint11[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 22), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTKirbyAnimRunBrake_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 23),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimRunBrake_joint14[80] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -114, 21, -235, -93, 884, -28,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -93, 251, -329, -113, 856, -323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 389, 301, -462, 14, 238, -458,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -88, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 416, -56, -212, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 396, -15, -211, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 392, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -298, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -84, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -86, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 333, -73, -52, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -9, -22, 229, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, -13, -302, -4, 237, 8,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimRunBrake_joint16[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 183, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 18), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimRunBrake_joint18[92] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -243, -66, -68, 15, -194, -107,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -67, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -439, -16, -361, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -342, 101, 25, 244,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 132, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -215, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 7, 46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 7, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 134, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -20, -67,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -221, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -304, -5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 19, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -159, -31,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -85, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -106, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -309, -5, -176, -17, -96, 10,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimRunBrake_joint19[114] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1595, 88, 1365, -24, 1076, 105,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1684, 87, 1340, -104, 1182, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1770, 281, 1157, -132, 1238, 411,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2248, 265, 1075, 70, 2005, 511,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2301, 15, 1298, 95, 2262, 128,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 2276, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1244, -18, 2261, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1229, -12, 2260, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1381, 65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 2262, -27,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2288, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 2028, -136,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1429, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1307, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2213, -60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1877, -54,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1882, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1664, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1629, -35, 1305, -1, 1841, -36,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimRunBrake_joint21[144] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 522, 332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 671, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 386, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 452, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 499, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 455, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 386, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 7, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x280E, 0x0711, 0xFFE1, 0xF972, 0x000F, 0xFAB4, 0xFFC9, 0x4F00, 0x1000, 0x1000, 0x1000, 0x2803, 0x0002, 0x06C7, 0x0032, 0x2805, 0x0003, 0xF9F6, 0xFFF5, 0x2009, 0x0001, 0xFA7C, 0xFF24, 0x2009, 0x0001, 0xF8FB, 0xFED3, 0x200B, 0x0001, 0x0757, 0x0065, 0xF821, 0xFFB9, 0x2803, 0x0005, 0x0772, 0xFFFD, 0x200D, 0x0001, 0xF9AC, 0xFFD1, 0xF86D, 0x0013, 0x2809, 0x0005, 0xF806, 0xFFFD, 0x2805, 0x000C, 0xF9A3, 0xFFF8, 0x0801, 0x0004, 0x2003, 0x0001, 0x0770, 0xFFFF, 0x2803, 0x000D, 0x077F, 0xFFFE, 0x2009, 0x0001, 0xF806, 0x0002, 0x2009, 0x0006, 0xF8DB, 0x0073, 0x200D, 0x0001, 0xF99A, 0xFFF1, 0xF954, 0x004B, 0x200D, 0x0005, 0xF90A, 0xFFF9, 0xF958, 0xFFFD, 0x200F, 0x0001, 0x077E, 0x0000, 0xF907, 0xFFFD, 0xF954, 0xFFFD, 0x0000,
};
