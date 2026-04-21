/* AnimJoint data for relocData file 1599 (FTCaptainAnimCliffEscapeSlow1) */
/* 1520 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimCliffEscapeSlow1_joint1[20];
extern u16 dFTCaptainAnimCliffEscapeSlow1_joint2[42];
extern u16 dFTCaptainAnimCliffEscapeSlow1_joint3[26];
extern u16 dFTCaptainAnimCliffEscapeSlow1_joint5[26];
extern u16 dFTCaptainAnimCliffEscapeSlow1_joint6[84];
extern u16 dFTCaptainAnimCliffEscapeSlow1_joint7[52];
extern u16 dFTCaptainAnimCliffEscapeSlow1_joint8[30];
extern u16 dFTCaptainAnimCliffEscapeSlow1_joint11[18];
extern u16 dFTCaptainAnimCliffEscapeSlow1_joint12[54];
extern u16 dFTCaptainAnimCliffEscapeSlow1_joint13[36];
extern u16 dFTCaptainAnimCliffEscapeSlow1_joint14[24];
extern u16 dFTCaptainAnimCliffEscapeSlow1_joint15[10];
extern u16 dFTCaptainAnimCliffEscapeSlow1_joint17[26];
extern u16 dFTCaptainAnimCliffEscapeSlow1_joint18[60];
extern u16 dFTCaptainAnimCliffEscapeSlow1_joint20[24];
extern u16 dFTCaptainAnimCliffEscapeSlow1_joint22[42];
extern u16 dFTCaptainAnimCliffEscapeSlow1_joint23[54];
extern u16 dFTCaptainAnimCliffEscapeSlow1_joint25[32];
extern u16 dFTCaptainAnimCliffEscapeSlow1_joint26[48];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTCaptainAnimCliffEscapeSlow1_joints[] = {
	(u32)dFTCaptainAnimCliffEscapeSlow1_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimCliffEscapeSlow1_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimCliffEscapeSlow1_joint3, /* [2] joint 3 */
	(u32)dFTCaptainAnimCliffEscapeSlow1_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTCaptainAnimCliffEscapeSlow1_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimCliffEscapeSlow1_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimCliffEscapeSlow1_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimCliffEscapeSlow1_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTCaptainAnimCliffEscapeSlow1_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimCliffEscapeSlow1_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimCliffEscapeSlow1_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimCliffEscapeSlow1_joint15, /* [14] joint 15 */
	(u32)dFTCaptainAnimCliffEscapeSlow1_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTCaptainAnimCliffEscapeSlow1_joint18, /* [17] joint 18 */
	(u32)dFTCaptainAnimCliffEscapeSlow1_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTCaptainAnimCliffEscapeSlow1_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTCaptainAnimCliffEscapeSlow1_joint23, /* [22] joint 23 */
	(u32)dFTCaptainAnimCliffEscapeSlow1_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTCaptainAnimCliffEscapeSlow1_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTCaptainAnimCliffEscapeSlow1_joint1[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRate(FT_ANIM_TRAY), -1358, 552,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAZ), -303,
	ftAnimSetValRateT(FT_ANIM_TRAY, 12), 0, 543,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 8), -303, 202,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 0, 224,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimCliffEscapeSlow1_joint2[42] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 32, 1665, -409, 242, 43,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 7), 327, -63,
	ftAnimSetValRateT(FT_ANIM_TRAX, 41), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 6), 1351, -479,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -479,
	ftAnimSetValRateT(FT_ANIM_TRAY, 7), 953, -88,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -63,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 261, -549,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -549,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), -72, -353,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTCaptainAnimCliffEscapeSlow1_joint3[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 87, 71, 0, 3, 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 277, 12, 148, 16, 60, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 268, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 196, 11, 80, 5,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimCliffEscapeSlow1_joint5[26] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ), 134, 9, 0, 2, 54, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 384, 47, 100, 5, 0, 0, 0, -6, 54, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTCaptainAnimCliffEscapeSlow1_joint6[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 21, 12, -53, 2, -117, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 75, 29, -32, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -196, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -251, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 111, 27, 18, 39, -371, -91,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 144, -5, 78, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -435, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -503, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 118, 16, 167, 32, -704, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 177, 53, 143, -25, -589, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 225, 46, 116, -28, -513, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 314, 43, 47, -40, -395, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 357, 43, 5, -42, -348, 47,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimCliffEscapeSlow1_joint7[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -921, -41,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -963, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -941, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -893, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -732, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -624, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -499, 260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -103, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -315, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -570, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -675, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -770, -95,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimCliffEscapeSlow1_joint8[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 727, 33, -9, 6, 69, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 726, -21, 0, 12, 32, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 142, -2, 28, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 643, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 575, -38,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimCliffEscapeSlow1_joint11[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -178, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -134, 13,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -134, 44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTCaptainAnimCliffEscapeSlow1_joint12[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 40, 0, 26, 2, -80, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 227, 27, -216, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 77, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 61, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -61, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 252, 8, -236, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 227, 0, -239, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -119, -57, 243, 18, -277, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -176, -57, 264, 21, -300, -23,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimCliffEscapeSlow1_joint13[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -943, -27,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -971, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -938, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -583, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -484, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -335, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -258, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -237, 21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimCliffEscapeSlow1_joint14[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -176, 1, 135, 9, -49, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 5, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 45, 3, -27, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 173, 2, -119, -8,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTCaptainAnimCliffEscapeSlow1_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimCliffEscapeSlow1_joint17[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -78, 23, 6, -2, -13, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -44, 0, -101, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -74, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -320, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -291, 2,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTCaptainAnimCliffEscapeSlow1_joint18[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1485, -1, -1558, 12, 1599, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 1460, -4, -1443, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1455, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1443, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1359, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1457, 5, -1423, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1579, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1469, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1544, -70, 1291, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1609, -53, 1212, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1581, 1, -1651, -41, 1124, -88,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTCaptainAnimCliffEscapeSlow1_joint20[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 166, 87,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 675, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 757, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1050, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1092, 41,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTCaptainAnimCliffEscapeSlow1_joint22[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1580, 7, -1656, 0, 1827, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -1627, 1, 1696, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1489, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1460, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1476, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1543, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1608, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1656, -48, -1626, 0, 1687, -8,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTCaptainAnimCliffEscapeSlow1_joint23[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1667, 7, -1658, -5, -1608, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1774, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -1792, -37, -1599, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1830, -35, -1602, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1756, -109,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1890, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1784, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1688, -44,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1883, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1646, -41, -1868, 22, -2028, -144,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTCaptainAnimCliffEscapeSlow1_joint25[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 359, 15,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 423, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 485, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 727, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 779, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1039, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1122, 83,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTCaptainAnimCliffEscapeSlow1_joint26[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1598, -1, 1642, 0, -1514, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1608, 2, -1818, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1673, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1715, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1739, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1675, -151, 1612, 50, -1841, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1436, -238, 1709, 97, -1840, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
