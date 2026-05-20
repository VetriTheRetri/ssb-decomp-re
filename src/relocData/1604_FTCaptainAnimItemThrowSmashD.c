/* AnimJoint data for relocData file 1604 (FTCaptainAnimItemThrowSmashD) */
/* 1808 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimItemThrowSmashD_joint1[32];
extern u16 dFTCaptainAnimItemThrowSmashD_joint2[30];
extern u16 dFTCaptainAnimItemThrowSmashD_joint4[44];
extern u16 dFTCaptainAnimItemThrowSmashD_joint5[100];
extern u16 dFTCaptainAnimItemThrowSmashD_joint6[40];
extern u16 dFTCaptainAnimItemThrowSmashD_joint7[26];
extern u16 dFTCaptainAnimItemThrowSmashD_joint8[34];
extern u16 dFTCaptainAnimItemThrowSmashD_joint10[8];
extern u16 dFTCaptainAnimItemThrowSmashD_joint11[100];
extern u16 dFTCaptainAnimItemThrowSmashD_joint12[54];
extern u16 dFTCaptainAnimItemThrowSmashD_joint13[26];
extern u16 dFTCaptainAnimItemThrowSmashD_joint16[10];
extern u16 dFTCaptainAnimItemThrowSmashD_joint17[78];
extern u16 dFTCaptainAnimItemThrowSmashD_joint19[24];
extern u16 dFTCaptainAnimItemThrowSmashD_joint21[74];
extern u16 dFTCaptainAnimItemThrowSmashD_joint22[78];
extern u16 dFTCaptainAnimItemThrowSmashD_joint24[24];
extern u16 dFTCaptainAnimItemThrowSmashD_joint25[72];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTCaptainAnimItemThrowSmashD_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimItemThrowSmashD_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimItemThrowSmashD_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimItemThrowSmashD_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTCaptainAnimItemThrowSmashD_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTCaptainAnimItemThrowSmashD_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimItemThrowSmashD_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimItemThrowSmashD_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTCaptainAnimItemThrowSmashD_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTCaptainAnimItemThrowSmashD_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTCaptainAnimItemThrowSmashD_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimItemThrowSmashD_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimItemThrowSmashD_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTCaptainAnimItemThrowSmashD_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTCaptainAnimItemThrowSmashD_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTCaptainAnimItemThrowSmashD_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTCaptainAnimItemThrowSmashD_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTCaptainAnimItemThrowSmashD_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTCaptainAnimItemThrowSmashD_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimItemThrowSmashD_joint1[32] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1600, 0,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1405, -688, -194, -339,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 2), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -48, 1256, -169,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), -650, 86,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 0, 1600, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimItemThrowSmashD_joint2[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 107, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, -76, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 268, 64, 0, -26, -89, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 259, -14, 0, 5, 80, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, 107, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTCaptainAnimItemThrowSmashD_joint4[44] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 189, 0, 0, 0, -31, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 29, -134, 67, -137, 38, -46, -53, -2, -21, 10, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 309, 10, 268, 7, 152, 7, -26, 20, -42, -13, 80, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 189, 0, 0, 0, -31, 47,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimItemThrowSmashD_joint5[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1368, 53, -1614, 213, 1084, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1309, 6, -1232, 51, 1162, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1302, -246, -1296, 58, 1304, 386,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1802, -215, -1114, 93, 1936, 319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1734, 105, -1110, 2, 1943, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1288, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1260, 51, 1558, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1225, 27, 1510, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1327, -102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1419, -26,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1306, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1600, -23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1425, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1374, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1370, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1116, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1368, 5, -1614, -13, 1084, -32,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimItemThrowSmashD_joint6[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -797, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -808, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -732, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1247, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1234, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -832, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -847, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -814, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimItemThrowSmashD_joint7[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -781, -89, -388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -487, 200, -258, 67, -90, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 19, -16, 179, 9, 83, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -781, -89, -388,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTCaptainAnimItemThrowSmashD_joint8[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -9, 31, 101, -36, -47, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 124, -18, -144, -26, -275, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -195, -7, -163, 9, -112, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTCaptainAnimItemThrowSmashD_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimItemThrowSmashD_joint11[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3087, 827, 144, -244, 592, 120,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 844, 237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3915, 673, -100, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 4433, 405, 319, 631,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 4729, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1162, 598, 1188, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1515, 181, 1131, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1530, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1155, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1250, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4722, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 4700, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1532, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1462, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1339, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1998, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2087, 76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2188, 24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1463, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4696, -4, 1464, 0, 2200, 12,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimItemThrowSmashD_joint12[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1024, -77,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1102, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -610, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -996, 302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 495,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -237, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -969, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1026, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1031, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, 6,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimItemThrowSmashD_joint13[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 275, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 370, -7, -154, -28, 206, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 216, -5, 74, 23, -53, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 270, 275, 62,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimItemThrowSmashD_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimItemThrowSmashD_joint17[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 191, 58, 70, -43, -472, -170,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -84, 10, -938, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 190, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 29, -109,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -25, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -45, 22, -956, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 21, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -602, 54,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -31, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 187, 7,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 45, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 71, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -551, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -482, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, 3, 70, -1, -472, 10,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimItemThrowSmashD_joint19[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 445, 48,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 843, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 830, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 457, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimItemThrowSmashD_joint21[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1735, -75, 1650, 20, -1528, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1547, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -1571, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1810, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1675, 113,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1678, 11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1549, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1634, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1660, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1734, -1,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1557, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1532, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1643, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1648, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1735, 0, 1650, 1, -1528, 4,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimItemThrowSmashD_joint22[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1768, -2, 1498, 13, -1685, -255,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1606, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1726, -116, -2247, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1532, -122, -2322, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1485, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -1753, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1517, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1416, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1501, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1766, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1415, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1494, 6,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1718, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1694, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1768, 2, 1498, 3, -1685, 8,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimItemThrowSmashD_joint24[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 541, 122,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1039, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 999, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 555, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, -13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimItemThrowSmashD_joint25[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 161, -107, 365, -138, -279, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -446, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 9, 13, 90, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 81, 26, 241, 59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 119, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 211, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 217, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 363, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -467, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -285, 11,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 126, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 160, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 161, 0, 365, 1, -279, 6,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
