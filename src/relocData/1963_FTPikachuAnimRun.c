/* AnimJoint data for relocData file 1963 (FTPikachuAnimRun) */
/* 1952 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimRun_joint1[18];
extern u16 dFTPikachuAnimRun_joint2[40];
extern u16 dFTPikachuAnimRun_joint3[20];
extern u16 dFTPikachuAnimRun_joint5[20];
extern u16 dFTPikachuAnimRun_joint6[66];
extern u16 dFTPikachuAnimRun_joint7[40];
extern u16 dFTPikachuAnimRun_joint8[32];
extern u16 dFTPikachuAnimRun_joint9[12];
extern u16 dFTPikachuAnimRun_joint10[40];
extern u16 dFTPikachuAnimRun_joint11[42];
extern u16 dFTPikachuAnimRun_joint13[32];
extern u16 dFTPikachuAnimRun_joint14[60];
extern u16 dFTPikachuAnimRun_joint16[40];
extern u16 dFTPikachuAnimRun_joint17[98];
extern u16 dFTPikachuAnimRun_joint19[40];
extern u16 dFTPikachuAnimRun_joint21[90];
extern u16 dFTPikachuAnimRun_joint22[90];
extern u16 dFTPikachuAnimRun_joint24[40];
extern u16 dFTPikachuAnimRun_joint25[84];
extern u16 dFTPikachuAnimRun_joint26[20];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimRun_joints[] = {
	(u32)dFTPikachuAnimRun_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimRun_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimRun_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimRun_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimRun_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimRun_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimRun_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimRun_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimRun_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimRun_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimRun_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimRun_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimRun_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimRun_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimRun_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimRun_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimRun_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimRun_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimRun_joint25, /* [24] joint 25 */
	(u32)dFTPikachuAnimRun_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTPikachuAnimRun_joint1[18] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 953, -94,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), -26, 33, -28, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 803, -109,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 953, -94,
	ftAnimLoop(0x6800, -34),
};

/* Joint 2 */
u16 dFTPikachuAnimRun_joint2[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 741, -49, 17,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 783, -25, -44, 0, 9, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 588, -38, -47, -1, 7, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 545, 24, -51, 0, 16, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 741, -49, 17,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimRun_joint3[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -198, 32, 3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 246, 12, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -198, 32, 3,
	ftAnimLoop(0x6800, -38),
};

/* Joint 5 */
u16 dFTPikachuAnimRun_joint5[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 267, 97, 442,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 206, -34, 470,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 267, 97, 442,
	ftAnimLoop(0x6800, -38),
};

/* Joint 6 */
u16 dFTPikachuAnimRun_joint6[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 0, -37, 7, -1107, -56,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 11), 804,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 94, 78, -1171, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 175, -26, -850, 154,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -13, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -862, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1158, -142,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1072, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 58, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -29, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1046, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1072, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 0, -32, -2, -1103, -30,
	ftAnimLoop(0x6800, -130),
};

/* Joint 7 */
u16 dFTPikachuAnimRun_joint7[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -420,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -851, -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -495, 420,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 10,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimRun_joint8[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -326, -6, -41,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -360, 7, -14, 1, -44, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -263, 3, 8, 0, -35, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -326, -6, -41,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimRun_joint9[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 12),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimRun_joint10[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -280, -6, -10,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -280, 80, -6, 1, -10, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 86, 48, 2, 1, 2, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 86, -47, 2, -1, 2, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -280, -6, -10,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimRun_joint11[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -312, -8, -1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -312, 74, -8, 3, -1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 29, 27, 9, 1, 3, 1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 77, -43, 4, -2, 6, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -312, -8, -1,
	ftAnimLoop(0x6800, -80),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimRun_joint13[32] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -302, 83, 399,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -323, 166, 93, -167, 367, 74,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -177, 16, -41, -7, 455, 24,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -302, 83, 399,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimRun_joint14[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 0, 1617, 4, 507, -88,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1672, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 804, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 333, 218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 640, 234,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 801, -129,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1627, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1778, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1680, -71, 663, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1634, -28, 566, -74,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1622, -11, 513, -53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 804,
	ftAnimLoop(0x6800, -118),
};

/* Joint 16 */
u16 dFTPikachuAnimRun_joint16[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -412, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -417, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 10,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimRun_joint17[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1639, -54, -1571, 13, 1437, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1405, 190,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1419, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1393, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 993, -339,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 444, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1176, 151,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1139, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1504, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1399, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 531, 88,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 843, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1415, -17, -1110, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1239, -169,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1400, 106,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1107, 236,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1467, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1452, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1535, 114, -1557, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1629, 94, -1570, -12, 1441, -26,
	ftAnimLoop(0x6800, -192),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimRun_joint19[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 532, 404,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 773, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 703, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 652, -228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 327, -323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -6,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPikachuAnimRun_joint21[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 26, -27, 51, 5, 658, -134,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 183, 151,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 112, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 524, -336,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -14, -337,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 138, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 359, 81,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 150, -45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 178, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 24, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 158, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 339, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 137, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 74, -24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -89, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 70, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 509, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 654, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 32, -37, 53, -20, 658, 3,
	ftAnimLoop(0x6800, -176),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimRun_joint22[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -307, 184, 22, -4, -177, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -152, -87,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 183, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -123, 277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 246, 280,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 296, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -325, -175,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -708, -223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 392, 154,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 361, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 196, -7, -951, -134,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 315, -77, -830, 95,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 384, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 198, -196, 287, -188, -704, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -77, -244, 7, -130, -466, 264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -290, -213, 26, 19, -176, 290,
	ftAnimLoop(0x6800, -176),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimRun_joint24[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 6, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 6, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 375, 373,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 962, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 782, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 633, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 711, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 462, -358,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -462,
	ftAnimLoop(0x6800, -78),
};

/* Joint 25 */
u16 dFTPikachuAnimRun_joint25[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1977, -227, 1464, 92, -1000, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1043, -149,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 2038, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1749, -289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1398, -201,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1618, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1324, -343,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1731, -262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1849, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1541, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1527, -79, 1918, -136,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1690, 204,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1509, -65,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1485, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1235, 206,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1930, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1975, 45, 1466, -43, -1002, 233,
	ftAnimLoop(0x6800, -164),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTPikachuAnimRun_joint26[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -962, -233, -512,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -304, 523, -282,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -962, -233, -512,
	ftAnimLoop(0x6800, -38),
};
