/* AnimJoint data for relocData file 2044 (FTPikachuAnimCliffClimbSlow2) */
/* 1536 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimCliffClimbSlow2_joint1[20];
extern u16 dFTPikachuAnimCliffClimbSlow2_joint2[44];
extern u16 dFTPikachuAnimCliffClimbSlow2_joint3[62];
extern u16 dFTPikachuAnimCliffClimbSlow2_joint4[26];
extern u16 dFTPikachuAnimCliffClimbSlow2_joint6[30];
extern u16 dFTPikachuAnimCliffClimbSlow2_joint7[44];
extern u16 dFTPikachuAnimCliffClimbSlow2_joint8[8];
extern u16 dFTPikachuAnimCliffClimbSlow2_joint9[34];
extern u16 dFTPikachuAnimCliffClimbSlow2_joint10[10];
extern u16 dFTPikachuAnimCliffClimbSlow2_joint11[34];
extern u16 dFTPikachuAnimCliffClimbSlow2_joint12[34];
extern u16 dFTPikachuAnimCliffClimbSlow2_joint14[30];
extern u16 dFTPikachuAnimCliffClimbSlow2_joint15[44];
extern u16 dFTPikachuAnimCliffClimbSlow2_joint17[16];
extern u16 dFTPikachuAnimCliffClimbSlow2_joint18[54];
extern u16 dFTPikachuAnimCliffClimbSlow2_joint20[34];
extern u16 dFTPikachuAnimCliffClimbSlow2_joint22[40];
extern u16 dFTPikachuAnimCliffClimbSlow2_joint23[36];
extern u16 dFTPikachuAnimCliffClimbSlow2_joint25[26];
extern u16 dFTPikachuAnimCliffClimbSlow2_joint26[50];
extern u16 dFTPikachuAnimCliffClimbSlow2_joint27[38];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTPikachuAnimCliffClimbSlow2_joints[] = {
	(u32)dFTPikachuAnimCliffClimbSlow2_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimCliffClimbSlow2_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimCliffClimbSlow2_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimCliffClimbSlow2_joint4, /* [3] joint 4 */
	(u32)dFTPikachuAnimCliffClimbSlow2_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTPikachuAnimCliffClimbSlow2_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimCliffClimbSlow2_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimCliffClimbSlow2_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimCliffClimbSlow2_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimCliffClimbSlow2_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimCliffClimbSlow2_joint12, /* [11] joint 12 */
	(u32)dFTPikachuAnimCliffClimbSlow2_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTPikachuAnimCliffClimbSlow2_joint15, /* [14] joint 15 */
	(u32)dFTPikachuAnimCliffClimbSlow2_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTPikachuAnimCliffClimbSlow2_joint18, /* [17] joint 18 */
	(u32)dFTPikachuAnimCliffClimbSlow2_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTPikachuAnimCliffClimbSlow2_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTPikachuAnimCliffClimbSlow2_joint23, /* [22] joint 23 */
	(u32)dFTPikachuAnimCliffClimbSlow2_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTPikachuAnimCliffClimbSlow2_joint26, /* [25] joint 26 */
	(u32)dFTPikachuAnimCliffClimbSlow2_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTPikachuAnimCliffClimbSlow2_joint1[20] = {
	ftAnimSetVal(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 7), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 7), 360,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPikachuAnimCliffClimbSlow2_joint2[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -21, 0, 26, 0, -23, 0, 229, -16, 492, -156, -153, 46,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -26, 33, -28,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 196, -131, 800, 124, 80, 315,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 20, -20, 694, -71, 360, 15,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 7), 108, -311,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 7), 9, 675,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPikachuAnimCliffClimbSlow2_joint3[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 137, 12, 5, -1, 163, 1, -57, 35, -219, 5, -111, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 0, 22, -209, 3, -111, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 159, 0, -4, 0, 50, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 137, -13, 5, 13, 67, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 23, -11, 133, 11, 32, 2,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, -209, -111,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 12, 136, 92,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 23, 133, 32,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTPikachuAnimCliffClimbSlow2_joint4[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 210, 0, 0, -2, 19, 2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 187, -11, -15, 0, 36, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -13, 0, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTPikachuAnimCliffClimbSlow2_joint6[30] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 316, 7, -113, 30, 389, -44,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 324, 4, -62, 26, 313, -40,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 324, -62, 313,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 324, -62, 313,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimCliffClimbSlow2_joint7[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 448, 69, 155, -14, -594, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -30, 26, -725, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 835, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 800, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 804, 0, 122, 42, -468, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 804, 0, 226, 34, -243, 75,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 804, 226, -243,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPikachuAnimCliffClimbSlow2_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPikachuAnimCliffClimbSlow2_joint9[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 136, -5, -33, -9, -7, 1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 62, -4, -166, -8, 18, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 62, -9, -166, 0, 18, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -2, -163, 20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTPikachuAnimCliffClimbSlow2_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimCliffClimbSlow2_joint11[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -80, 16, 7, 0, 6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 128, 13, 6, 0, 11, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 128, -18, 6, 0, 11, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTPikachuAnimCliffClimbSlow2_joint12[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -68, 19, -11, 1, 21, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 182, 16, 8, 1, 16, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 182, -26, 8, -1, 16, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTPikachuAnimCliffClimbSlow2_joint14[30] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -325, 0, -80, 15, 357, -23,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), -324, 0, -62, 9, 313, -23,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -324, -62, 313,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -324, -62, 313,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTPikachuAnimCliffClimbSlow2_joint15[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 694, 6, 1517, 20, 878, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 803, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1551, 17, 1018, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1623, 12, 855, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1628, 6, 830, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 803, 0, 1664, 12, 1144, 104,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 803, 1664, 1144,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimCliffClimbSlow2_joint17[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 0, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTPikachuAnimCliffClimbSlow2_joint18[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1684, -5, -1581, -1, 676, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1658, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1564, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 751, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1256, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1327, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1696, 6, 1454, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1700, -3, 1440, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1677, -7, -1598, -11, 1258, -60,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1677, -1598, 1258,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTPikachuAnimCliffClimbSlow2_joint20[34] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1063, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1095, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 535, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 684, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 793, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 851, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 937, 28,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 937,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimCliffClimbSlow2_joint22[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1237, 38, -1791, 0, 1378, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 1613, 6, -1729, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1319, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1198, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1153, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1607, -1, -1733, -1, 1189, 11,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1607, -1733, 1189,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTPikachuAnimCliffClimbSlow2_joint23[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 107, -1, -19, 1, -153, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 174, -2, -49, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -298, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -275, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 150, -8, -65, -5, -206, 23,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 150, -65, -206,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimCliffClimbSlow2_joint25[26] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 425, 63,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 848, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 851, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 872, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 852, -6,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 852,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTPikachuAnimCliffClimbSlow2_joint26[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1623, 35, -1845, -6, 1842, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1856, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1400, -15, 1660, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1610, -35, 1269, -67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1627, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1257, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1161, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1633, -2, -1851, 1, 1096, -21,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1633, -1851, 1096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTPikachuAnimCliffClimbSlow2_joint27[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -497, 4, -186, -4, -747, -1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -477, 2, -219, -9, -763, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 5, -2, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -320, 30, -4, 14, 61, 50,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -14, 0, -3,
	ftAnimEnd(),
	0x0000,
};
