/* AnimJoint data for relocData file 1639 (FTCaptainAnimAttackAirF) */
/* 4576 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimAttackAirF_joint1[56];
extern u16 dFTCaptainAnimAttackAirF_joint2[64];
extern u16 dFTCaptainAnimAttackAirF_joint4[100];
extern u16 dFTCaptainAnimAttackAirF_joint5[252];
extern u16 dFTCaptainAnimAttackAirF_joint6[104];
extern u16 dFTCaptainAnimAttackAirF_joint7[18];
extern u16 dFTCaptainAnimAttackAirF_joint10[78];
extern u16 dFTCaptainAnimAttackAirF_joint11[230];
extern u16 dFTCaptainAnimAttackAirF_joint12[96];
extern u16 dFTCaptainAnimAttackAirF_joint13[56];
extern u16 dFTCaptainAnimAttackAirF_joint14[10];
extern u16 dFTCaptainAnimAttackAirF_joint16[8];
extern u16 dFTCaptainAnimAttackAirF_joint17[234];
extern u16 dFTCaptainAnimAttackAirF_joint19[96];
extern u16 dFTCaptainAnimAttackAirF_joint21[268];
extern u16 dFTCaptainAnimAttackAirF_joint22[232];
extern u16 dFTCaptainAnimAttackAirF_joint24[96];
extern u16 dFTCaptainAnimAttackAirF_joint25[240];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTCaptainAnimAttackAirF_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimAttackAirF_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimAttackAirF_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimAttackAirF_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTCaptainAnimAttackAirF_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTCaptainAnimAttackAirF_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimAttackAirF_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimAttackAirF_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTCaptainAnimAttackAirF_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTCaptainAnimAttackAirF_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimAttackAirF_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimAttackAirF_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTCaptainAnimAttackAirF_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTCaptainAnimAttackAirF_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTCaptainAnimAttackAirF_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTCaptainAnimAttackAirF_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTCaptainAnimAttackAirF_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTCaptainAnimAttackAirF_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTCaptainAnimAttackAirF_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimAttackAirF_joint1[56] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAZ), 0, 0, -1,
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAY), 0, 1221,
	ftAnimSetValBlock(FT_ANIM_TRAX), -55,
	ftAnimSetValT(FT_ANIM_TRAX, 40), -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 7), 878, -2, 1534, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 5), 878, -2, 1534, 23,
	ftAnimSetValRateT(FT_ANIM_TRAY, 8), 1573, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 2081, 245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 2577, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 7), 2577, 5, 1573, -4,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 18), 3216,
	ftAnimSetValRateT(FT_ANIM_TRAY, 18), 1221, -189,
	ftAnimBlock(0, 13),
	ftAnimSetValBlockT(FT_ANIM_TRAX, 5), -55,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTCaptainAnimAttackAirF_joint2[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 240, 95, 49,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, -76, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 106, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 220, -322,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 106, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 220, -322,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 131, -19, -125, 41,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -324,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -9, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -113, 466,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -9, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -113, 466,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), 219, 8, 83, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 13), 38,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 240, 95, 49,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTCaptainAnimAttackAirF_joint4[100] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 242, -182, 0, 0, -31, 47,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 7), 145,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 351, 73,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 0, -31, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 58, 65,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 318,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 525, -1, 421, 95,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 833, 202, 340, -133, 890, 326,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 124, 51, 1402, -152,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 1299,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 1107, -117, 546, 48, 970, -310, 94, 35, -50, -74,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), -70,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 366, -6, -152, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 208, 99, -115, 62,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 481, -6, -66, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 333, 99, -115, 62,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 18), 242, -182, 0, 0, -31, 47,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimAttackAirF_joint5[252] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1336, 98, -1476, -175, 1005, 415,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1237, 186, -1651, 193, 1421, 498,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -963, -546, -1088, -42, 2003, 324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2330, -613, -1735, -273, 2069, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2189, 92, -1635, 132, 2193, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2184, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2146, 87, -1469, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2014, 105, -1552, -88,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1953, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1646, -15, 2232, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2114, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1583, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1527, 28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2073, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1931, 31, 2039, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1890, 333, 2012, -430,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1264, 105, -1470, 118, 1178, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1679, -313, -1290, 237, 2055, 443,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1891, -167, -996, 116, 2065, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -2076, 40, -1255, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2021, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1968, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1933, 89, -1452, -172, 1900, 83,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1837, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1580, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2135, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2283, 68,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2271, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1828, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1605, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2279, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2152, -70,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1560, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1485, 40,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2077, -77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1768, -37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1551, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1502, 32,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1444, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1479, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1728, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1088, -56,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1463, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1351, 17,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1040, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1336, 15, -1476, 3, 1005, -34,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimAttackAirF_joint6[104] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1115, -239,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1355, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1173, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1087, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1216, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1121, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1170, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1059, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1063, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1113, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1095, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -791, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1174, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -793, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -814, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -925, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -746, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -749, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -749, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -774, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -873, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1184, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1167, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1111, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1115, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimAttackAirF_joint7[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 191,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -97, -323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), -827, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -827, 40,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 18), 191,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTCaptainAnimAttackAirF_joint10[78] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -153, 113, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -579, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -242, -149, 98, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1196, -2, 1397, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1196, 16, -579, 38, 1397, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -172, 430, -505, 174, 123, -414,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 256, 73, 10, 80, -3, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 195, -27, 79, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 154, -52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -232, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 195, -27, 79, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -178, -19, 141, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -153, 113, -38,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimAttackAirF_joint11[230] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3075, -231, 250, 377, -2583, -1048,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3307, -492, 628, 93, -3632, -792,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4061, -443, 437, -262, -4169, -276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4193, -53, 102, -186, -4186, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4167, 65, 64, 4, -4070, 98,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 450, 102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -3725, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -3868, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3817, 59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3621, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 551, 89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 661, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3466, 82, -3627, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3456, -361, 640, 430, -3680, -324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4189, -266, 1523, 490, -4276, -251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3989, -164, 1621, -81, -4184, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4518, -495, 1359, -203, -4440, -363,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4979, -310, 1214, -93, -4911, -300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5138, -366, 1171, -289, -5042, -448,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5711, -110, 635, -451, -5809, -282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5359, 103, 269, -120, -5606, 127,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -5535, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -5504, -70, 395, 57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 361, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -5500, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -5631, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 334, -27, -5545, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 155, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -5742, -58,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -5631, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -5835, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -5911, -67, 180, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -6237, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 243, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5800, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -5823, 24,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -6247, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -6280, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -6292, -11, 250, 7, -5800, 23,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimAttackAirF_joint12[96] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -619, -316,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -936, -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -998, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -764, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -725, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1011, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -993, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1128, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1166, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1265, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1046, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -969, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1257, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1013, 336,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -584, 230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -551, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -534, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -590, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -567, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -554, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -580, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -614, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -619, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimAttackAirF_joint13[56] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, 167, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -58, 1, 462, 0, 576, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 6, 7, 173, -32, 226, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 6, 52, 173, -9, 226, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 523, -1, 79, 0, -78, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -5, -52, 167, 8, 63, 14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -5, 167, 63,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -5, 167, 63,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimAttackAirF_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 39,
	ftAnimBlock(0, 45),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimAttackAirF_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 255, 0, 0,
	ftAnimBlock(0, 45),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTCaptainAnimAttackAirF_joint17[234] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 53, -6, 83, 2, -571, -45,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 228, 213, 18, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -737, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -688, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -752, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 517, 234, -96, -97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -101, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 696, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 715, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 815, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -779, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -833, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 816, -111, -99, -246, -808, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 591, -171, -593, -242, -454, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 472, -108, -583, 99, -359, 78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -571, -277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 374, -40, -393, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 391, 1, 4, 343,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 378, -107, 294, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 175, 9, 210, -141, -907, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 397, -47, 11, -277, -730, 419,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 80, -173, -344, -182, -69, 337,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 50, -38, -353, -6, -54, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4, -51, -356, -1, -23, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -290, -48, -311, 15, 139, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -336, 39, -295, -51, 139, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -210, 94, -415, -78, -116, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -146, 82, -453, -7, -241, -109,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -656, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 280, 66, -291, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 334, 44, -275, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 182, -97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -3, 57,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -690, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -584, 33,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 82, -89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 9, 44,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 53, 43, -557, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 53, 43, 83, 29, -571, -13,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimAttackAirF_joint19[96] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 260, 85,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 700, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 874, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 991, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 856, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1227, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1196, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 997, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 883, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 560, -439,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 470, 319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 642, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 703, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 691, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 363, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 319, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 232, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 260, 28,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimAttackAirF_joint21[268] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1602, -16, -1606, 43, 2117, -218,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1589, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1646, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1899, -283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1550, -243,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1380, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1678, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1637, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1522, 13, 1298, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1641, 66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1556, 218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1695, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1657, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1546, -34, -1477, 123,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1482, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1727, -172, 1818, 196,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1972, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1891, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1948, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1933, 231, 1989, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1485, 236, -1500, -52, 1572, -304,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1685, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1461, -50, 1380, -179,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1775, -75, 1179, 39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1659, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1736, 148, -1688, 223, 1293, 343,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1478, -17, -1213, 99, 1866, 420,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1772, -33, -1488, -150, 2133, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1546, 123, -1514, -26, 1850, -142,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1741, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1526, 24, 1848, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1698, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1505, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1578, -29, -1750, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1597, -52, -1484, 115,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1827, 46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1486, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1669, -83, -1410, 67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1408, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1797, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1788, 7, 1463, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1524, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1535, 90,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1464, -73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1774, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1579, 83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2101, 54,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1443, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1410, -33, -1725, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1511, -96, -1644, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1602, -91, -1606, 37, 2117, 16,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimAttackAirF_joint22[232] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1621, -159, 1318, 58, -2429, -144,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2503, 257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1781, -267, 1376, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2155, -122, 1487, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2026, 421, 1099, -138, -2059, 490,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1312, 485, 1211, 177, -1523, 348,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1054, 168, 1455, 223, -1362, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -975, -114, 1657, -64, -1407, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1284, -212, 1327, -179, -1407, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1664, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1401, -130, 1299, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1747, -42, 1271, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1755, -159, 1274, 191, -1707, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2066, -155, 1653, 221, -1863, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2066, -64, 1718, 8, -1906, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2420, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1478, -186, -1877, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1298, -93, -2144, -216,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1468, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2432, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2478, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2456, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1484, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1482, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2456, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -2186, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2430, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2527, -20,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1481, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1248, -7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2542, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -2309, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2106, 83,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1605, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1246, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1308, 17,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1604, -2, -2323, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1615, -5, -2384, -40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1320, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1621, -6, 1318, -2, -2429, -45,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimAttackAirF_joint24[96] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 876, 227,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1104, 255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1387, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1366, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1307, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1210, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1158, -603,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -576,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 515,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1034, 573,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1150, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1035, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1051, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1048, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1053, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 857, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 801, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 802, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 809, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 864, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 876, 12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimAttackAirF_joint25[240] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1607, 0, -1548, -120, 1446, 67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1492, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1606, 117, -1669, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1842, 141, -1520, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1888, -110, -1426, -4, 1146, -135,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1392, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1622, -178, -1530, -116,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1982, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1659, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1867, 59, 1353, 623,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1540, 137, 2639, 545,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1592, -76, 2443, -160,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1887, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 2217, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1829, -33, 2147, -324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1914, 45, -1893, -19, 1568, -250,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1888, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1920, 37, 1646, 140,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2167, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1980, -184,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1722, 118,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1681, -65,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2123, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1736, -150, 1681, -249,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1677, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1740, -30, 1624, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1731, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1681, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1666, -11, 1669, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1658, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1410, -24,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1740, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1869, -45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1696, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1543, -30,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1386, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1417, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1574, 165, -1914, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1817, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1814, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1814, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1659, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1508, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1430, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1643, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1607, -52, -1548, 94, 1446, 16,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
