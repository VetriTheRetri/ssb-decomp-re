/* AnimJoint data for relocData file 2030 (FTPikachuAnimAttackAirD) */
/* 4208 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimAttackAirD_joint1[90];
extern u16 dFTPikachuAnimAttackAirD_joint2[104];
extern u16 dFTPikachuAnimAttackAirD_joint3[54];
extern u16 dFTPikachuAnimAttackAirD_joint4[64];
extern u16 dFTPikachuAnimAttackAirD_joint6[46];
extern u16 dFTPikachuAnimAttackAirD_joint7[256];
extern u16 dFTPikachuAnimAttackAirD_joint8[110];
extern u16 dFTPikachuAnimAttackAirD_joint9[70];
extern u16 dFTPikachuAnimAttackAirD_joint10[10];
extern u16 dFTPikachuAnimAttackAirD_joint11[70];
extern u16 dFTPikachuAnimAttackAirD_joint12[80];
extern u16 dFTPikachuAnimAttackAirD_joint14[52];
extern u16 dFTPikachuAnimAttackAirD_joint15[170];
extern u16 dFTPikachuAnimAttackAirD_joint17[62];
extern u16 dFTPikachuAnimAttackAirD_joint18[168];
extern u16 dFTPikachuAnimAttackAirD_joint20[64];
extern u16 dFTPikachuAnimAttackAirD_joint22[146];
extern u16 dFTPikachuAnimAttackAirD_joint23[158];
extern u16 dFTPikachuAnimAttackAirD_joint25[80];
extern u16 dFTPikachuAnimAttackAirD_joint26[196];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTPikachuAnimAttackAirD_joints[] = {
	(u32)dFTPikachuAnimAttackAirD_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimAttackAirD_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimAttackAirD_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimAttackAirD_joint4, /* [3] joint 4 */
	(u32)dFTPikachuAnimAttackAirD_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTPikachuAnimAttackAirD_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimAttackAirD_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimAttackAirD_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimAttackAirD_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimAttackAirD_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimAttackAirD_joint12, /* [11] joint 12 */
	(u32)dFTPikachuAnimAttackAirD_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTPikachuAnimAttackAirD_joint15, /* [14] joint 15 */
	(u32)dFTPikachuAnimAttackAirD_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTPikachuAnimAttackAirD_joint18, /* [17] joint 18 */
	(u32)dFTPikachuAnimAttackAirD_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTPikachuAnimAttackAirD_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTPikachuAnimAttackAirD_joint23, /* [22] joint 23 */
	(u32)dFTPikachuAnimAttackAirD_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTPikachuAnimAttackAirD_joint26, /* [25] joint 26 */
	0xFFFF0401, /* [26] END */
};

/* Joint 1 */
u16 dFTPikachuAnimAttackAirD_joint1[90] = {
	ftAnimSetValAfter(FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 814, 0,
	ftAnimSetValRate(FT_ANIM_ROTY), 0, 8,
	ftAnimSetValBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 1146, 663,
	ftAnimSetValT(FT_ANIM_ROTX, 7), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 7), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 4), 14, -6, 1395, -1375,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -16, -14, 286, -247, 0, -52,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 18), 807, 189, -124, -163,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -675,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -6446, -18,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 13), 10,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1451, 329,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 830, 15, -470, -109,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 2502, 123, 826, -9, -261, 263,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 5), -6441,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 3216, -6433, 814, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimAttackAirD_joint2[104] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -26, 33, -28, 0, 300, -108,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4095, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 3), -31,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -2, 3, 42, 1, 294, 46, 300, 0, 92, 71,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4095, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -2, 0, 42, 0, 294, -7, 0, -118, 300, 278, -46, -80,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4505, 3276, 4505,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -105, -44, 474, 73, 41, 37,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 38), -26, 33, -28,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 3686, 5734, 3686,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -163, 327, -163,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 18), -105, 474, 41,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 22, 4096, -88, 4096, 22,
	ftAnimSetValT(FT_ANIM_SCAY, 33), 4095,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 33), 4096, 4096,
	ftAnimBlock(0, 14),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 22, -37, -32,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), 0, 300, -108,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimAttackAirD_joint3[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 999, -124, 300,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1307, 38, -597, -10, -295, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1268, 26, -201, 105, -451, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1441, 8, -71, 12, -386, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 1430, -9, 36, 0, -87, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1184, -22, -44, -8, -10, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 999, -124, 300,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTPikachuAnimAttackAirD_joint4[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -173, 58, -73,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 250, 76, 0, -8, 0, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 363, -40, 0, 59, 0, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 47, -7, 298, 15, 103, 5,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 211, 298, 103,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 11, -7, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 296, 6, 141, -29, 8, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 276, -30, 0, -5, 0, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -173, 58, -73,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTPikachuAnimAttackAirD_joint6[46] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 199, -70, 479,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 382, 209, -30, 45, 260, -249,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 382, 76, -30, -89, 260, -215,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 430, 20, -86, -23, 126, -56,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 18), 430, -49, -86, 3, 126, 75,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), 199, -70, 479,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimAttackAirD_joint7[256] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1620, -36, -1551, 78, -2419, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1583, 72, -1472, 191, -2408, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1766, 682, -1168, 172, -2422, -232,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1081, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2949, 546, -2873, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2858, -71, -2759, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2672, -204, -2693, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1037, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1005, -47,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2396, 232, -2455, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3136, 272, -1117, -53, -2418, 155,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1233, -238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2942, -302, -2145, 376,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2254, -212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1666, 314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1588, -187, -1515, 86,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1609, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1502, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2107, -93,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1955, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1597, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1298, 39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1507, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1542, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1949, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 2056, 30,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1266, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1237, -72,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2102, 106, -1561, -59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2199, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 2637, 356,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2983, 260,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 3668, 603,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1297, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1244, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2243, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2332, -93,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4490, 506,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4681, 131, -2419, -66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2572, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4753, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 4878, -26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1261, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1526, -34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2610, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4802, -37, -2444, 97,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 4830, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2415, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2416, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4837, 6, -1550, -24, -2419, -3,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimAttackAirD_joint8[110] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -758, -16,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -669, 275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -224, 334,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -437,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -884, -470,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -950, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -732, 470,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 361,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -187, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -181, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -434, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -393, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -265, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -433, -296,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -593, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -738, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -757, -19,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimAttackAirD_joint9[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -478, -335, -28,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 97, 97, -31, 54, -133, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 204, -41, 42, 42, -96, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -112, -32, 179, 9, 1, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -250, 19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 179, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 241, 43, 179, -20, 1, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 143, -7, -8, -17, -23, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 168, -40, 0, -21, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -478, -335, -28,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimAttackAirD_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1598, -1559, 4035, 39, 48, 495,
	ftAnimBlock(0, 45),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimAttackAirD_joint11[70] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -132, 170, 229, 254, 357, 37,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 273, 7, 312, -17, 14, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -347, -49, 170, 2, 229, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -529, -12, 188, 1, 125, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), -529, 22, 188, -1, 125, 5, 273, -4, 312, 9, 14, 4,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -132, -2, 170, -16, 229, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -570, -53, 143,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -132, 170, 229,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTPikachuAnimAttackAirD_joint12[80] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -3, -171, -270, -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -346, -64, -171, 5, -270, 24, -255, -1, 357, -38, 37, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -522, -12, -127, 3, -76, 13, -256, 0, 319, -22, 17, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), -522, 28, -127, -2, -76, -10, -256, 0, 319, 17, 17, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -3, -18, -171, 6, -270, -18, -255, 0, 357, 12, 37, 6,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), -255, 357, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -794, -28, -356,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -3, -171, -270,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTPikachuAnimAttackAirD_joint14[52] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -469, 245, 91,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -488, -21, 79, -189, 114, 27,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -488, -2, 79, -240, 114, 13,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -490, 0, -71, -63, 123, 3,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 18), -490, -71, 123,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -349, -50, 365,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 8, 131, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), -469, 245, 91,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTPikachuAnimAttackAirD_joint15[170] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, -32, 122, 13, -890, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -642, 96,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 263, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -828, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -604, 146,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -805, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -590, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -725, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 258, 757, -730, -410,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -847, -63, 1777, 701, -1546, -402,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1125, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1661, -80, -1535, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1462, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -1822, -16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1470, -277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1910, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2001, -92,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -2759, -76,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1447, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1552, 36,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2835, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2836, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1821, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2189, -88,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2873, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -2432, 16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1583, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1590, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1520, -5, -2288, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2496, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1554, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1538, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1483, -5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2419, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2413, 5, 1481, -2, -2499, -2,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimAttackAirD_joint17[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -227, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -70, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -212, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 101,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTPikachuAnimAttackAirD_joint18[168] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1610, 34, -1367, 101, 629, 64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1262, -77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1531, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 693, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 952, 270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1421, -98, 1234, 152,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1423, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1257, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1049, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1725, -121, -1345, -116, 1114, 377,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1804, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1656, -152, 1804, 343,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1650, 30, 1801, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -1368, 22, 1532, -9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1804, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1730, 30,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1345, 22, 1524, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1287, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1510, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1680, 55, 1427, -105,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 898, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1676, -38,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1322, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1401, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 895, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 842, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1709, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1620, 13,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 787, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 648, -27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1385, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1373, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1610, 9, -1367, 5, 630, -18,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTPikachuAnimAttackAirD_joint20[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 932, 13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 838, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 688, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 887, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 842, -440,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -409,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 22, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 267, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 1038, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1078, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 554, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 604, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 910, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 931, 20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPikachuAnimAttackAirD_joint22[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 230, 42, 39, 10, 585, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 411, -180,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 216, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 272, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -13, -189,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 315, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 187, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 253, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 515, -99, 142, -110, 329, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 117, -202, -5, -73, 678, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 110, -12, -5, -22, 676, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 452, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -103, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -128, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -116, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 249, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 416, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 238, 89,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -100, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -88, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -52, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 137, 26,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 250, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 43, -5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, 87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 580, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 159, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 224, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 230, 6, 39, -3, 585, 5,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTPikachuAnimAttackAirD_joint23[158] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 203, -96, 533, 17, -780, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -108, -221, 490, -176, -878, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -335, -161, 199, -179, -660, 159,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -278, 131, 207, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -655, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -675, 259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -84, 98, 9, -94, -137, 342,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -74, 1, -11, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 8, 103,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 180, 131,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -79, -13, -41, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -28, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -7, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 333, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 162, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 70, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -529, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -597, -88,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -960, 43,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -55, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 220, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 26, 46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 530, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -891, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -666, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -689, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -775, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 213, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 204, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 532, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 203, 0, 533, 0, -779, -4,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTPikachuAnimAttackAirD_joint25[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 595, 59,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 714, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 621, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 597, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 748, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 626, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 526, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 312, -259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 272, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 388, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 673, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 646, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 994, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 981, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 740, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 724, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 608, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 596, -11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTPikachuAnimAttackAirD_joint26[196] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -257, -16, -74, -9, 278, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -166, 1, 397, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -273, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -283, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 132, 332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 382, 137,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 57, -99,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -180, 53, 369, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -50, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 61, 61, 496, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 181, -26, 491, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 365, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 8, -183, -66, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 193, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -153, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -119, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -32, 18,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 200, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -136, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 316, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 36, 42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -18, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -126, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -146, -24, 87, 51,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -256, -1, 272, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -123, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -76, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -257, 0, -74, 2, 277, 5,
	ftAnimEnd(),
	0x400E, 0xFDE1, 0xFF5C, 0xFE08, 0x48E0, 0xFFFF, 0xFF4C, 0xFE9E, 0x380F, 0x0003, 0xFDE1, 0xFF5C, 0xFE08, 0x200F, 0x0004, 0xFDE1, 0xFF8E, 0xFF5C, 0xFFDF, 0xFE08, 0x000F, 0x200F, 0x0001, 0xFBA4, 0x001D, 0xFEB6, 0xFFEA, 0xFE54, 0xFFCD, 0x100F, 0x0012, 0x000F, 0xFDAC, 0xFA32, 0x300E, 0xFFF1, 0x0044, 0xFFDD, 0x200F, 0x000A, 0xF9F1, 0xFFE4, 0x0633, 0x0016, 0xFA72, 0x0032, 0x380F, 0x0009, 0xFDE1, 0xFF5C, 0xFE08, 0x0000, 0x0000, 0x0000,
};
