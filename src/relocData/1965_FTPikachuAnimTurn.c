/* AnimJoint data for relocData file 1965 (FTPikachuAnimTurn) */
/* 1536 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimTurn_joint1[46];
extern u16 dFTPikachuAnimTurn_joint2[10];
extern u16 dFTPikachuAnimTurn_joint3[28];
extern u16 dFTPikachuAnimTurn_joint5[10];
extern u16 dFTPikachuAnimTurn_joint6[46];
extern u16 dFTPikachuAnimTurn_joint7[16];
extern u16 dFTPikachuAnimTurn_joint8[28];
extern u16 dFTPikachuAnimTurn_joint9[10];
extern u16 dFTPikachuAnimTurn_joint10[20];
extern u16 dFTPikachuAnimTurn_joint11[20];
extern u16 dFTPikachuAnimTurn_joint13[10];
extern u16 dFTPikachuAnimTurn_joint14[44];
extern u16 dFTPikachuAnimTurn_joint16[16];
extern u16 dFTPikachuAnimTurn_joint17[90];
extern u16 dFTPikachuAnimTurn_joint19[40];
extern u16 dFTPikachuAnimTurn_joint21[82];
extern u16 dFTPikachuAnimTurn_joint22[72];
extern u16 dFTPikachuAnimTurn_joint24[32];
extern u16 dFTPikachuAnimTurn_joint25[64];
extern u16 dFTPikachuAnimTurn_joint26[32];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTPikachuAnimTurn_joints[] = {
	(AObjEvent32 *)dFTPikachuAnimTurn_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTPikachuAnimTurn_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTPikachuAnimTurn_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTPikachuAnimTurn_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTPikachuAnimTurn_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTPikachuAnimTurn_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTPikachuAnimTurn_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTPikachuAnimTurn_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTPikachuAnimTurn_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTPikachuAnimTurn_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTPikachuAnimTurn_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTPikachuAnimTurn_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTPikachuAnimTurn_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTPikachuAnimTurn_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTPikachuAnimTurn_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTPikachuAnimTurn_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTPikachuAnimTurn_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTPikachuAnimTurn_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTPikachuAnimTurn_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTPikachuAnimTurn_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTPikachuAnimTurn_joint1[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), -26, 33, -28, 0, 108,
	ftAnimSetValAfterBlock(FT_ANIM_TRAY), 675,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 4), -148,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), -163, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -26, 1, 33, 42, -28, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -21, 0, 245, 160, -2, 5,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 8), 0, -108,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -26, 1641, 28,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPikachuAnimTurn_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 23, 133, 32, 0, -209, -111,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimTurn_joint3[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -13, 0, -2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -13, 4, 0, 68, -2, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 15, 411, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -13, 0, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTPikachuAnimTurn_joint5[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 324, -62, 313,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimTurn_joint6[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 0, 236, -64, -202, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -319, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 804, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -404, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -377, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -299, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -288, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 98, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 0, 200, 101, -295, 4,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimTurn_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPikachuAnimTurn_joint8[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, -163, 20,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 169, 291, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -2, -21, -163, -56, 20, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -2, -163, 20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPikachuAnimTurn_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimTurn_joint10[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -67, -522, 25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTPikachuAnimTurn_joint11[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 889, -165, -463,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTPikachuAnimTurn_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1, 0, 0, -324, -62, 313,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimTurn_joint14[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 0, 1703, 40, 1311, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1564, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 804, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 946, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1028, 93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1288, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1618, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1693, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 0, 1707, 13, 1311, 22,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimTurn_joint16[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -10, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimTurn_joint17[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1674, 53, -1626, -20, 1069, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1359, 350,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1770, -67, -1650, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1593, -122, -1612, -67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1727, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1784, -52, 1782, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1718, 80, 1659, -152,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1605, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1477, -220,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1019, -121,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1884, 37, -1726, -51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1722, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1635, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 975, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1033, 45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1683, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1674, -8, -1626, 8, 1069, 36,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimTurn_joint19[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 975, 26,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 893, -303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 409, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 582, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 775, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 905, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 857, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 976, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 975, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPikachuAnimTurn_joint21[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1654, -92, -1850, 81, 1362, -69,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1392, 308, 1191, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1489, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1517, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1384, -59, -1005, 146, 1278, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1372, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1399, 12, -1099, -116,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1471, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1237, -143,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1839, -32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1573, 69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1452, -59,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1580, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1640, 37, 1393, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1654, 14, -1850, -11, 1362, -30,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimTurn_joint22[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 147, 2, -99, 12, -107, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -93, -58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -514, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -79, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -285, -174,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -315, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -127, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -18, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -501, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -395, 170,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -123, 177,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 119, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -176, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -76, -40, -116, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 147, 28, -99, -23, -107, 9,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimTurn_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 723, 40,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 940, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 868, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 941, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 827, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 750, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 723, -26,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimTurn_joint25[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, -31, 385, -96, -517, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 9, 12, -240, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 62, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 221, 134,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 7, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 31, 6, -170, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -269, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 22, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 161, 103,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 327, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -507, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2, -10, 385, 58, -517, -10,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTPikachuAnimTurn_joint26[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -14, 0, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -14, -37, 0, 4, -3, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -356, 39, 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -14, 0, -3,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
