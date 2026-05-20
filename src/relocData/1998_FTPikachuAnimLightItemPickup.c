/* AnimJoint data for relocData file 1998 (FTPikachuAnimLightItemPickup) */
/* 1616 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimLightItemPickup_joint1[38];
extern u16 dFTPikachuAnimLightItemPickup_joint2[36];
extern u16 dFTPikachuAnimLightItemPickup_joint3[46];
extern u16 dFTPikachuAnimLightItemPickup_joint5[30];
extern u16 dFTPikachuAnimLightItemPickup_joint6[66];
extern u16 dFTPikachuAnimLightItemPickup_joint7[16];
extern u16 dFTPikachuAnimLightItemPickup_joint8[30];
extern u16 dFTPikachuAnimLightItemPickup_joint9[10];
extern u16 dFTPikachuAnimLightItemPickup_joint10[20];
extern u16 dFTPikachuAnimLightItemPickup_joint11[20];
extern u16 dFTPikachuAnimLightItemPickup_joint13[38];
extern u16 dFTPikachuAnimLightItemPickup_joint14[62];
extern u16 dFTPikachuAnimLightItemPickup_joint16[34];
extern u16 dFTPikachuAnimLightItemPickup_joint17[50];
extern u16 dFTPikachuAnimLightItemPickup_joint19[32];
extern u16 dFTPikachuAnimLightItemPickup_joint21[60];
extern u16 dFTPikachuAnimLightItemPickup_joint22[56];
extern u16 dFTPikachuAnimLightItemPickup_joint24[32];
extern u16 dFTPikachuAnimLightItemPickup_joint25[60];
extern u16 dFTPikachuAnimLightItemPickup_joint26[20];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTPikachuAnimLightItemPickup_joints[] = {
	(AObjEvent32 *)dFTPikachuAnimLightItemPickup_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTPikachuAnimLightItemPickup_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTPikachuAnimLightItemPickup_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTPikachuAnimLightItemPickup_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTPikachuAnimLightItemPickup_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTPikachuAnimLightItemPickup_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTPikachuAnimLightItemPickup_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTPikachuAnimLightItemPickup_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTPikachuAnimLightItemPickup_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTPikachuAnimLightItemPickup_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTPikachuAnimLightItemPickup_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTPikachuAnimLightItemPickup_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTPikachuAnimLightItemPickup_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTPikachuAnimLightItemPickup_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTPikachuAnimLightItemPickup_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTPikachuAnimLightItemPickup_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTPikachuAnimLightItemPickup_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTPikachuAnimLightItemPickup_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTPikachuAnimLightItemPickup_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTPikachuAnimLightItemPickup_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTPikachuAnimLightItemPickup_joint1[38] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 675, 108,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), -26, 33, -28, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 759, -45, 228, 566,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 664, -105, 249, -762,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 719, 68, -57, -484,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 698, -87, 7, 331,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 675, 108,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPikachuAnimLightItemPickup_joint2[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 133, 32,
	ftAnimSetValRate(FT_ANIM_ROTX), 23, 328,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 349, 275, 48, -84, 28, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 537, 0, -35, 12, 24, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 23, -228,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 133, 32,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPikachuAnimLightItemPickup_joint3[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -13, 0, -2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 185, 133, 0, 0, -1, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 254, 28, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 269, -29, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 136, -70, 0, 0, -1, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -13, 0, -2,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimLightItemPickup_joint5[30] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 316, -18, -5, 201, 274, -97,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 314, 9, 37, -76, 264, 51,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 324, -62, 313,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimLightItemPickup_joint6[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -13, 236, -270, 3014, -463,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 700, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -562, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2551, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2500, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2321, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 787, 70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 934, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -201, 389,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 810, -107, 216, 241, 2412, 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 719, -3, 282, 10, 2857, 301,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 84, 236, -45, 3014, 157,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimLightItemPickup_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPikachuAnimLightItemPickup_joint8[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, -163, 20,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 107, 35, 0, 40, 0, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 138, -18, 0, -27, 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -2, -163, 20,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimLightItemPickup_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimLightItemPickup_joint10[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -364, 171, 207,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTPikachuAnimLightItemPickup_joint11[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -372, -143, -154,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTPikachuAnimLightItemPickup_joint13[38] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -322, -107, -88, 53, 340, 131,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -350, -130, -49, 197, 346, 7,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -371, 35, -14, -17, 343, -43,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -324, -62, 313,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimLightItemPickup_joint14[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 40, 1707, 22, 1311, -474,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 844, -3, 1729, -287, 837, -273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 797, 90, 1132, -362, 765, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1194, -42, 1033, 90, 1137, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 939, -172, 1186, 233, 996, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 819, -22, 1677, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1027, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1252, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, -15, 1707, 30, 1311, 59,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimLightItemPickup_joint16[34] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -333,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -333, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -10, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimLightItemPickup_joint17[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1666, -172, -1609, 175, 1201, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1343, -9, -1292, 55, 1058, -235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1475, 60, -1322, -43, 689, -268,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1538, -51, 884, 270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1521, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1568, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1613, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1666, 53, -1609, -70, 1201, 316,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimLightItemPickup_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 946, -260,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 686, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 838, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 983, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 914, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 994, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 946, -48,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPikachuAnimLightItemPickup_joint21[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1602, -107, -1736, -137, 1255, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1766, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1932, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1230, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1024, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1572, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1588, 146,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1624, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1871, 55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1817, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1558, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1334, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1602, 22, -1736, 81, 1255, -78,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimLightItemPickup_joint22[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 128, 96, -57, 84, -192, -170,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 300, 70,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 258, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -660, -258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -880, -137,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -479, 278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 392, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 249, -37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 195, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 222, -60, 99, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 128, -93, -57, -156, -192, 287,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimLightItemPickup_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 807, -198,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 608, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 898, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 890, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 919, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 908, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 807, -100,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimLightItemPickup_joint25[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1601, -134, -1893, 230, 1124, 97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1474, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1467, -77, 1221, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1446, -87, 1090, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1155, -24, 1462, 67,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1475, -53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1734, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1243, 103, 1401, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1488, 119, 1169, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1601, 113, -1893, -158, 1124, -45,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTPikachuAnimLightItemPickup_joint26[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -14, 0, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1216, -235, -367,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -14, 0, -3,
	ftAnimEnd(),
	0x0000,
};
