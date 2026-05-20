/* AnimJoint data for relocData file 1921 (FTYoshiAnimJab1) */
/* 2992 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimJab1_joint1[56];
extern u16 dFTYoshiAnimJab1_joint2[72];
extern u16 dFTYoshiAnimJab1_joint3[64];
extern u16 dFTYoshiAnimJab1_joint4[46];
extern u16 dFTYoshiAnimJab1_joint6[22];
extern u16 dFTYoshiAnimJab1_joint7[140];
extern u16 dFTYoshiAnimJab1_joint10[50];
extern u16 dFTYoshiAnimJab1_joint11[152];
extern u16 dFTYoshiAnimJab1_joint12[72];
extern u16 dFTYoshiAnimJab1_joint13[10];
extern u16 dFTYoshiAnimJab1_joint14[10];
extern u16 dFTYoshiAnimJab1_joint15[42];
extern u16 dFTYoshiAnimJab1_joint17[38];
extern u16 dFTYoshiAnimJab1_joint18[174];
extern u16 dFTYoshiAnimJab1_joint20[64];
extern u16 dFTYoshiAnimJab1_joint22[128];
extern u16 dFTYoshiAnimJab1_joint23[108];
extern u16 dFTYoshiAnimJab1_joint25[56];
extern u16 dFTYoshiAnimJab1_joint26[140];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTYoshiAnimJab1_joints[] = {
	(AObjEvent32 *)dFTYoshiAnimJab1_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTYoshiAnimJab1_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTYoshiAnimJab1_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTYoshiAnimJab1_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTYoshiAnimJab1_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTYoshiAnimJab1_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTYoshiAnimJab1_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTYoshiAnimJab1_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTYoshiAnimJab1_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTYoshiAnimJab1_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTYoshiAnimJab1_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTYoshiAnimJab1_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTYoshiAnimJab1_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTYoshiAnimJab1_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTYoshiAnimJab1_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTYoshiAnimJab1_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTYoshiAnimJab1_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTYoshiAnimJab1_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTYoshiAnimJab1_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimJab1_joint1[56] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 672, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 681, 61, -171, -167,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 687, 201, -41, 1256,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 757, 186, 299, 911,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 757, 299,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 757, 165, 299, -599,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 840, -126, 0, -151,
	ftAnimSetValRateT(FT_ANIM_TRAY, 13), 504, -89,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 13), -3,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 672, 446, 0, 9,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTYoshiAnimJab1_joint2[72] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 30,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ), 0, 0, -89, 1, 0, 0, 20, 7,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 77, -290, 156, -33,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 21), 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAY, 1), 36, -60,
	ftAnimSetValRateT(FT_ANIM_TRAY, 20), 30, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1161, -309, -223, -95, 0, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1161, -223, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 19), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1161, 72, -223, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 0, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 89, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -89, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, -89, 30, 20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimJab1_joint3[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 16, 0, 0, -8,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 142, 286, -268, -4, 0, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1161, 254, -17, 62, -232, -58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 1161, -201,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -17, -232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 759, -71, -17, 1, -232, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 16, -38, 0, 0, 0, 12,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 16, -46,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTYoshiAnimJab1_joint4[46] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 78, 25, 0, 8, 0, 3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 46, 519, 388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 451, 74, 304, 60, 43, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 451, 304, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 451, -23, 304, -19, 43, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 78, -20, 0, -16, 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 78, 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimJab1_joint6[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 353, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 353, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), 0, -18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimJab1_joint7[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1718, 119, -1476, -159, 1256, -185,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1476, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1774, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1070, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1280, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1550, -52, 1067, -127,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1580, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1707, 33, 1026, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1770, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1033, 237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1426, 32, 1501, 242,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1593, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1518, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1505, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1050, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1585, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1494, -48,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1808, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1553, 125,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1547, -51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1602, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 934, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1030, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 979, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1416, 109, 877, -154,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1346, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1488, 20, 669, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1562, -115, 799, 293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1718, -156, -1476, -129, 1256, 456,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTYoshiAnimJab1_joint10[50] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -764, -48,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -600, 402,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -8, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -450, -300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -609, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -517, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -665, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, -99,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTYoshiAnimJab1_joint11[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -145, 640, -103, 1294, -219, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 495, 72, 1191, 856, -148, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -246, 1609, 195, -755, -253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 89, 43, 1515, -34, -320, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 90, 327, 1513, -193, -322, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 744, 362, 1128, -256, 40, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 814, -111, 1000, -171, 98, -117,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 373, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 521, 65, -193, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 945, 279, 210, 238,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 288, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1175, 22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 285, -62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 328, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 289, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 173, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1186, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 925, -48,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 393, 90,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 670, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 919, 62, 186, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1054, -265, 331, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 517, -527, 541, -335, -166, -253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1, -331, 0, -322, -175, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -145, -143, -103, -102, -219, -44,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimJab1_joint12[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1002, 256,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -746, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -710, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -8, -323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -654, -363,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -735, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -952, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1172, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1162, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -899, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -942, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -905, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -743, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -737, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1108, -213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1163, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, 161,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimJab1_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 172, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimJab1_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -536, -893, 0, 0, 156, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimJab1_joint15[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -190, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -195, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 20, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 384, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 384, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -268, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -535, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -190, 39,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -190, -43,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTYoshiAnimJab1_joint17[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -153, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -158, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -158, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 292, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 292, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -310, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -153, 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -153, -208,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimJab1_joint18[174] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1596, 66, -1595, 128, 1615, 135,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1529, -7, -1466, -7, 1750, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1611, -41, -1610, -78, 1508, 68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1503, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), -1623, 77, 1888, 187, 6144, 6143, 6144, 4095, 6144, 4095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), -1454, 86, 1884, -19, 10240, 2047, 8192, 2047, 8192, 2047,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1543, -153,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1538, -16,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 8192, -3071, 8192, -2047, 8192, -2047,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, -2047, 4096, -2047, 4096, -2047,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1461, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1601, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1411, -64,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1540, -42, 1413, -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1613, 10,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1169, -111,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1564, 135,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1602, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1602, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1653, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1304, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1596, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1589, -4,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1274, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1374, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1596, -6, -1595, 6, 1615, 240,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTYoshiAnimJab1_joint20[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 250, 473,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 834, -359,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -352,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 375,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 751, 479,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 965, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 711, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 660, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 824, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 839, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 667, -294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 250, -416,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimJab1_joint22[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -11, -184, 1686, -218, -1868, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1420, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -196, 14, -1857, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 16, 140, -1909, 89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 58, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1686, 147, -1678, 159,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1624, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1589, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1600, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 48, -13, -1772, -70,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 23, 13, -1689, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1643, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1765, -48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 58, -44, -1793, -96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -113, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1921, -49,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1670, -85,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1692, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -89, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -61, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1947, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -2131, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -37, 19, -2142, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -23, 12, -2057, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -11, 11, 1686, -5, -1868, 188,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimJab1_joint23[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, -133, 1608, 33, 1454, -371,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1565, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1475, -5, 1083, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1597, 91, 1828, 727,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2907, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1657, 636,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2870, 606,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2870, 0, 2910, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2508, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2869, -360,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2149, -613,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1642, -270, 1598, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1608, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1608, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1608, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1609, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2445, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 2185, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2113, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1624, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1445, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1219, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1608, 0, 1608, 0, 1454, 234,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimJab1_joint25[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 378, 405,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 784, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 386, -388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 335, 271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 550, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 895, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 934, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 737, -277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -358,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTYoshiAnimJab1_joint26[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1609, 40, -89, 356, -228, -86,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1619, -148, -309, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 266, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 70, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1352, -215, -132, -778, 29, 51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1164, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1486, -678, -206, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1490, -1, -242, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1161, 454, -1490, 195, -244, -345,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2073, 760, -1099, 8, -934, -506,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1292, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2682, 379, -1474, -220,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1575, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2831, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2993, 160,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 3268, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1612, -35, -1337, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1542, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1666, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3231, -30, -1834, -131,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2051, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 3220, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1518, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1514, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1986, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3217, -2, -1519, -4, -1837, 148,
	ftAnimEnd(),
};
