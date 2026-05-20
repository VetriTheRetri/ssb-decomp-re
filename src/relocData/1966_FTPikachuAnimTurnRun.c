/* AnimJoint data for relocData file 1966 (FTPikachuAnimTurnRun) */
/* 3264 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimTurnRun_joint1[18];
extern u16 dFTPikachuAnimTurnRun_joint2[122];
extern u16 dFTPikachuAnimTurnRun_joint3[30];
extern u16 dFTPikachuAnimTurnRun_joint4[68];
extern u16 dFTPikachuAnimTurnRun_joint6[46];
extern u16 dFTPikachuAnimTurnRun_joint7[124];
extern u16 dFTPikachuAnimTurnRun_joint8[38];
extern u16 dFTPikachuAnimTurnRun_joint9[62];
extern u16 dFTPikachuAnimTurnRun_joint10[10];
extern u16 dFTPikachuAnimTurnRun_joint11[54];
extern u16 dFTPikachuAnimTurnRun_joint12[56];
extern u16 dFTPikachuAnimTurnRun_joint14[54];
extern u16 dFTPikachuAnimTurnRun_joint15[116];
extern u16 dFTPikachuAnimTurnRun_joint17[52];
extern u16 dFTPikachuAnimTurnRun_joint18[148];
extern u16 dFTPikachuAnimTurnRun_joint20[70];
extern u16 dFTPikachuAnimTurnRun_joint22[128];
extern u16 dFTPikachuAnimTurnRun_joint23[132];
extern u16 dFTPikachuAnimTurnRun_joint25[44];
extern u16 dFTPikachuAnimTurnRun_joint26[142];
extern u16 dFTPikachuAnimTurnRun_joint27[64];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTPikachuAnimTurnRun_joints[] = {
	(AObjEvent32 *)dFTPikachuAnimTurnRun_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTPikachuAnimTurnRun_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTPikachuAnimTurnRun_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTPikachuAnimTurnRun_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTPikachuAnimTurnRun_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTPikachuAnimTurnRun_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTPikachuAnimTurnRun_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTPikachuAnimTurnRun_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTPikachuAnimTurnRun_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTPikachuAnimTurnRun_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTPikachuAnimTurnRun_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTPikachuAnimTurnRun_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTPikachuAnimTurnRun_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTPikachuAnimTurnRun_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTPikachuAnimTurnRun_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTPikachuAnimTurnRun_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTPikachuAnimTurnRun_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTPikachuAnimTurnRun_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTPikachuAnimTurnRun_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTPikachuAnimTurnRun_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTPikachuAnimTurnRun_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTPikachuAnimTurnRun_joint1[18] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 8), 768, 636,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 792, -624,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 8), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPikachuAnimTurnRun_joint2[122] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -26, 33, -28, 0, 953, -94,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, -508, 721, -454, 125, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 98, -38, 58, 198, -14, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -203, 12, 941, 121, -40, 45,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -290, -463, 693, -50, -61, -297,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 310, -10, -311, 0, 687, 0, -73, 177,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 186, 931,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -203, 4, 941, 140, -96, -22, -290, 240, 693, 107, 57, 131,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -149, 311, 759, 301, 14, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 204, 30, 1560, 98, 208, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -14, -61, 1556, 9, 76, -37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -46, 267, 930, 347, 69, 143,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 953, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -69, -6, 1600, 47, 42, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -26, 1641, 28,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimTurnRun_joint3[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 741, -49, 17,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 566, -22, -54, 6, -4, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 435, 11, 39, 0, 110, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 741, -49, 17,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTPikachuAnimTurnRun_joint4[68] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -198, 32, 3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 228, 105, 53, -2, 32, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 282, 5, 20, -11, 16, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 246, -4, 12, -2, 12, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 265, 11, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 246, -45, 12, 3, 12, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 59, -51, 26, -2, 17, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 62, -48, 2, 1, 8, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -198, 32, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTPikachuAnimTurnRun_joint6[46] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 267, 97, 442,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 205, -5, -82, -22, 474, -3,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 258, 42, 62, 27, 437, -48,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 258, 0, -48, -247, 414, -50,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 258, 20, -48, 326, 414, 62,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 267, 97, 442,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimTurnRun_joint7[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 0, -1571, 71, 501, -222,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -562, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1499, 20, 278, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1530, 76, 363, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1345, 38, 678, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1453, -265, 663, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1876, -242, 713, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1939, -29, 919, 96,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -2122, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 908, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1048, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -582, -78, -2120, 105, 1254, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -719, -110, -1912, 318, 1241, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, -170, -1483, 177, 1253, 165,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1264, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1556, -59, 1572, 196,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1476, -462,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1602, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1530, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1480, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1206, 338, 721, -487,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, 401, -1575, -44, 501, -220,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimTurnRun_joint8[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -10, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -225, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -291, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPikachuAnimTurnRun_joint9[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -326, -6, -41,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -319, 0, 82, 11, -13, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -319, 24, 89, 10, -11, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -187, 60, 141, -27, 134, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -156, -56, 14, -16, 47, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -339, -1, 97, -1, -19, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -166, 2, 7, -19, -40, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -326, -6, -41,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimTurnRun_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimTurnRun_joint11[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -280, -6, -10,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -280, 80, -6, 1, -10, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 86, 45, 2, 1, 2, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 86, -63, 2, 25, 2, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -313, -102, 163, -2, 97, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -280, 4, -6, -23, -10, -15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -280, -6, -10,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTPikachuAnimTurnRun_joint12[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -312, -8, -1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -312, 74, -8, 3, -1, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 29, 27, 9, 1, 3, 1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 77, -50, 4, 16, 6, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -285, -108, 110, -3, 78, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -312, -3, -8, -16, -1, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -312, -8, -1,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimTurnRun_joint14[54] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -302, 83, 399,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -321, 152, 109, -209, 385, 105,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -181, 21, -83, -12, 483, 42,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -292, -115, 92, 93, 442, 65,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -284, -76, 0, -535, 542, -122,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -313, 15, -37, 246, 370, -36,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -302, 83, 399,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTPikachuAnimTurnRun_joint15[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 803, 0, 1617, 57, 505, -264,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1510, -152,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 706, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 346, 333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 907, 240,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 663, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1307, -132,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1180, -71,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 858, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 812, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1075, -91, 863, 119,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1186, 330,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 674, 1, 1052, 231,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 884, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1325, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 905, 255,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1643, 239,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1488, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1541, 326,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1185, -467,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 993, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1154, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 923, -175, 1644, 66, 623, -340,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 803, -119, 1621, -23, 505, -117,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimTurnRun_joint17[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -10, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -322, -309,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -628, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 309,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -546, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTPikachuAnimTurnRun_joint18[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 30, -200, -37, 57, -170, -114,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -422, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -170, -52, 19, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -73, 109, -161, -216,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -527, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 49, 82, -591, -324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 91, -252, -1071, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -455, -282, -305, 154, -683, 215,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -672, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 9, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -473, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -434, 42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -731, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -496, 344,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -372, 192, 305, 277,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 505, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -48, 357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 343, -119, -61, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -288, -318, 171, -349, -416, -262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -294, -39, -194, -121, -586, 110,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -289, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -72, 76, -195, 251,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -4, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -83, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -96, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -164, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -57, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 30, 88, -37, -32, -174, -78,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTPikachuAnimTurnRun_joint20[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 595, 462,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 925, 274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1144, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 963, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 926, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 635, -299,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 257, -317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 463, 305,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 610, -228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPikachuAnimTurnRun_joint22[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 26, 135, 51, 49, 658, -132,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 234, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 161, -62, 526, -429,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -99, -254, -199, -519,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -346, 34, -512, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -30, 250, 382, -33, -231, 80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 283, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 167, -115, -350, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 151, -34, -425, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -183, -176,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -132, 147,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 422, 132,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 568, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -350, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -310, 256, 6, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 301, -270, 162, 280, -299, -175,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -218, -75, -75, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -345, 79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 540, 183,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -272, 115, -92, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 13, 149, -6, 72, 631, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 26, 13, 51, 58, 655, 24,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTPikachuAnimTurnRun_joint23[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1300, 18, 1583, -68, 1433, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1584, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1318, 266, 1374, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1834, 407, 1569, 166,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2306, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1633, -227, 1708, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1129, -330, 1572, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1652, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 972, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2346, -28, 1071, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2012, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1087, -5, 1511, -106,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1003, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1358, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1833, -52, 1368, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1907, -157, 1333, 224, 1947, 186,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1576, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1517, -278, 1741, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1349, 158, 1503, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1834, 249, 1627, 0, 1571, 96,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1550, 27, 1610, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1730, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1506, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1300, -205, 1583, 32, 1433, -176,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTPikachuAnimTurnRun_joint25[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 693, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 588, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 455, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 520, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 605, -325,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -302,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTPikachuAnimTurnRun_joint26[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 366, -51, 145, -59, 607, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -144, -236,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 120, -410,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 315, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -73, -131,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 399, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -386, -126,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -337, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -390, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 501, 32, -187, 153,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 299, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -82, 83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -46, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -296, 55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -142, 111,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 316, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 376, -87, -4, -14, -43, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 140, -200, -171, 13, -182, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -24, 16, 23, 187, 84, 243,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 636, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 173, -132, 204, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -289, -272, -117, -165,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -94, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -370, 79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 161, 248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 612, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 17, 120, 589, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 366, 205, 145, 128, 607, 17,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTPikachuAnimTurnRun_joint27[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -962, -233, -512,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -418, 29, -128, 24, 83, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -643, -54, 29, -1, -274, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -809, -126, -137, -66, -450, -231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1097, -84, -206, 10, -1101, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1111, 29, -101, 27, -961, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1018, 82, -132, -73, -698, 250,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -962, -233, -512,
	ftAnimEnd(),
	0x0000, 0x0000,
};
