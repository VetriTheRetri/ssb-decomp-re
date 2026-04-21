/* AnimJoint data for relocData file 473 (FTPurinAnimDollFall) */
/* 3424 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimDollFall_joint1[48];
extern u16 dFTPurinAnimDollFall_joint2[90];
extern u16 dFTPurinAnimDollFall_joint3[72];
extern u16 dFTPurinAnimDollFall_joint4[12];
extern u16 dFTPurinAnimDollFall_joint6[28];
extern u16 dFTPurinAnimDollFall_joint7[262];
extern u16 dFTPurinAnimDollFall_joint8[110];
extern u16 dFTPurinAnimDollFall_joint10[28];
extern u16 dFTPurinAnimDollFall_joint11[236];
extern u16 dFTPurinAnimDollFall_joint14[92];
extern u16 dFTPurinAnimDollFall_joint15[108];
extern u16 dFTPurinAnimDollFall_joint17[20];
extern u16 dFTPurinAnimDollFall_joint19[172];
extern u16 dFTPurinAnimDollFall_joint20[146];
extern u16 dFTPurinAnimDollFall_joint22[22];
extern u16 dFTPurinAnimDollFall_joint23[220];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTPurinAnimDollFall_joints[] = {
	(u32)dFTPurinAnimDollFall_joint1, /* [0] joint 1 */
	(u32)dFTPurinAnimDollFall_joint2, /* [1] joint 2 */
	(u32)dFTPurinAnimDollFall_joint3, /* [2] joint 3 */
	(u32)dFTPurinAnimDollFall_joint4, /* [3] joint 4 */
	(u32)dFTPurinAnimDollFall_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTPurinAnimDollFall_joint7, /* [6] joint 7 */
	(u32)dFTPurinAnimDollFall_joint8, /* [7] joint 8 */
	(u32)dFTPurinAnimDollFall_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTPurinAnimDollFall_joint11, /* [10] joint 11 */
	(u32)dFTPurinAnimDollFall_joint14, /* [11] joint 14 */
	0x00000000, /* [12] NULL */
	0x00000000, /* [13] NULL */
	(u32)dFTPurinAnimDollFall_joint15, /* [14] joint 15 */
	(u32)dFTPurinAnimDollFall_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTPurinAnimDollFall_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPurinAnimDollFall_joint20, /* [19] joint 20 */
	(u32)dFTPurinAnimDollFall_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTPurinAnimDollFall_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTPurinAnimDollFall_joint1[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 205, -106, -698, 334, -168, 82, 204, 0, 7821, -6389, -345, 241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, -2, 0, 6, 0, 1, 204, -81, 6213, -3128, -345, 138,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 99), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), 0, -16, 0, -3590, 0, 27,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 80), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPurinAnimDollFall_joint2[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 597, -3, -474, -8, -2243, 5, -154, 48, -52, -14, 56, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -47, -31, -2, 22, -1884, 5, -81, 84, 1561, 559, -144, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), -40, 0, -24, 0, -2137, -2, 56, 32, 1346, -260, -19, 29,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 1683,
	ftAnimSetValRateT(FT_ANIM_TRAY, 15), 2516, -30,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 80), -40, -24, -2137,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 15), 56, -19,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 30), 56, -19,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 15), 1232, -2116,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 1897,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 7), 1779, 27,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 8), 1281, -1449,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 56, 1, 1281, 2, -19, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 56, 1281, -19,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPurinAnimDollFall_joint3[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0, -413, 0, 430, 0, -91, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 1, 732, 0, 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -413, 0, 430, 0, -91, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), -529, 0, 148, 0, 596, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 160), -529, 0, 148, 0, 596, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 45), 104, 0, -11, -18, -274, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -274, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 104, -11,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 104, -11, -274,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTPurinAnimDollFall_joint4[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 311, 0,
	ftAnimBlock(0, 100),
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTPurinAnimDollFall_joint6[28] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -84, -714, -129,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -536, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 33, -379, 134, -120, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 0, -379, -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 80), 0, -379, -120,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTPurinAnimDollFall_joint7[262] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1073, -731, -1022, 105, 401, 755,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2304, -266, 1709, 304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -917, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1366, -381,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2337, -57, -1680, -61, 1766, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 1541, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2419, -567, -1489, 78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1528, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3473, -884,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -4908, -102,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1526, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1386, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4986, -63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -5165, -10,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1392, -17, 1562, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 1767, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1614, -12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -5174, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -5777, -43,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1766, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 1701, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1624, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1627, -24,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -5818, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -5890, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -5821, 121,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -5229, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1653, 0, 1738, 44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1674, -138,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1410, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -5102, 120,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -4896, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1494, -167,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1298, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1421, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1478, -16,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1320, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1482, 102,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4913, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -4984, 59,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1577, 76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1528, -119,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1491, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 34), -1475, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4907, 63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -4856, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1401, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1401, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1401, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), 1401, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4856, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 23), -4856, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4855, 0, -1475, 0, 1397, -3,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPurinAnimDollFall_joint8[110] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -399, -321,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -720, -321,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1041, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -725, 517,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 359,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -370, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -413, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -553, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -542, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -579, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -537, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -6, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -363, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -401, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -218, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPurinAnimDollFall_joint10[28] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 234, -683, -137,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 536, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, -93, -379, 121, -120, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 0, -379, -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 80), 0, -379, -120,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTPurinAnimDollFall_joint11[236] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1068, 636, 657, 263, 1245, 618,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1302, 324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -431, 192, 1863, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -683, -81, 1553, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -594, 569, 1569, 68, 1444, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 455, 623, 1440, -36, 1560, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1524, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 652, 106, 1495, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1496, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 668, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 245, -104,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1516, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1443, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1485, -31, 1431, -50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1272, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1465, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 149, -79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -21, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1278, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 1563, 15,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -17, 4, 1466, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 62, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 1515, -11,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1556, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), 1554, -26,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 81, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 646, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1504, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1377, -6,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1522, -42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1281, 15,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 678, -50, 1374, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 544, -54, 1205, 30, 1352, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 569, 14, 1435, 135, 1744, 247,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1477, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 573, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1848, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1848, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1474, -1,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 28), 1474,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1846, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 25), 1846,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 573, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 573, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 574, 0, 1477, 2, 1848, 1,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPurinAnimDollFall_joint14[92] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -305, -294,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -599, -287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -879, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -702, 436,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 348,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -293, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -323, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -143, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -78, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 20), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -387, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 193,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 29), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTPurinAnimDollFall_joint15[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -174, 5, -383, -3, 148, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -415, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 20), 31, -20, -58, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4, -36, -34, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -378, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 541, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -387, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -35, 13,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -381, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 69), -366, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 548, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 299, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -22, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), -66, 8,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 297, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 366, -6,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -55, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 41), -26, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 361, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), 355, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -366, 0, -24, 2, 357, 2,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPurinAnimDollFall_joint17[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 71), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 27), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPurinAnimDollFall_joint19[172] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1489, 17, 1349, 3, -1282, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), 1571, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1431, -39, -1001, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1474, -43, -1003, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -1615, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -1189, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1220, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1677, -20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1524, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 1351, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1581, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1635, 5,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1694, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -1594, 3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1628, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), -1597, -27,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1362, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1742, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1590, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -1424, 21,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1624, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1600, -40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1737, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1007, -52,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1662, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1632, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 980, -13, -1408, 8,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 23), 980,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 28), -1408,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1632, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), -1629, 0,
	ftAnimBlock(0, 19),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 980, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 980, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1632, -3, 980, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -1408,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTPurinAnimDollFall_joint20[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 175, 41, 340, -18, -180, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 159, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), 280, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 38, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 49, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 326, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 156, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 411, 38,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 260, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 72, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 446, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), 235, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 346, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -55, -13,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 75, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 335, 3,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -71, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), -100, -2,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 337, 1, 233, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 356, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 194, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 144, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 115, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 368, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), 369, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -100, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 26), -100,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 115, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 18), 115, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 118, 3, 368, 0, -96, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPurinAnimDollFall_joint22[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 73), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 25), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTPurinAnimDollFall_joint23[220] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 111, 30, 189, -21, 84, 106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 737, 74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -80, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 217, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 131, -250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -284, -295, 771, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 217, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -458, -83,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -410, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -100, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -224, 16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -374, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -30, -5,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 264, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 566, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -37, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -97, -25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -208, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -179, -8,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 570, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 588, 5,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -121, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -166, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 595, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -197, -65, 476, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -503, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -207, -49, 547, 74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -604, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 1105, 3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -529, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -557, 2,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -604, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -594, 90,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -554, 41, 1107, -86,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -348, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -422, 108, 932, -96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -285, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 914, -8,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 28), 924,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -285, 0, -348, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 26), -348,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), -285, 0,
	ftAnimBlock(0, 22),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 924, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 924, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -282, 2, -348, 0, 924, 0,
	ftAnimEnd(),
};
