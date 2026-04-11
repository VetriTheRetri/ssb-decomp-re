/* AnimJoint data for relocData file 1592 (FTCaptainAnimCliffClimbSlow2) */
/* 1584 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimCliffClimbSlow2_joint1[20];
extern u16 dFTCaptainAnimCliffClimbSlow2_joint2[56];
extern u16 dFTCaptainAnimCliffClimbSlow2_joint3[26];
extern u16 dFTCaptainAnimCliffClimbSlow2_joint5[32];
extern u16 dFTCaptainAnimCliffClimbSlow2_joint6[50];
extern u16 dFTCaptainAnimCliffClimbSlow2_joint7[32];
extern u16 dFTCaptainAnimCliffClimbSlow2_joint8[38];
extern u16 dFTCaptainAnimCliffClimbSlow2_joint11[10];
extern u16 dFTCaptainAnimCliffClimbSlow2_joint12[54];
extern u16 dFTCaptainAnimCliffClimbSlow2_joint13[32];
extern u16 dFTCaptainAnimCliffClimbSlow2_joint14[30];
extern u16 dFTCaptainAnimCliffClimbSlow2_joint15[10];
extern u16 dFTCaptainAnimCliffClimbSlow2_joint17[28];
extern u16 dFTCaptainAnimCliffClimbSlow2_joint18[54];
extern u16 dFTCaptainAnimCliffClimbSlow2_joint20[40];
extern u16 dFTCaptainAnimCliffClimbSlow2_joint22[44];
extern u16 dFTCaptainAnimCliffClimbSlow2_joint23[80];
extern u16 dFTCaptainAnimCliffClimbSlow2_joint25[104];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTCaptainAnimCliffClimbSlow2_joints[] = {
	(u32)dFTCaptainAnimCliffClimbSlow2_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimCliffClimbSlow2_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimCliffClimbSlow2_joint3, /* [2] joint 3 */
	(u32)dFTCaptainAnimCliffClimbSlow2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTCaptainAnimCliffClimbSlow2_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimCliffClimbSlow2_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimCliffClimbSlow2_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimCliffClimbSlow2_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTCaptainAnimCliffClimbSlow2_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimCliffClimbSlow2_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimCliffClimbSlow2_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimCliffClimbSlow2_joint15, /* [14] joint 15 */
	(u32)dFTCaptainAnimCliffClimbSlow2_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTCaptainAnimCliffClimbSlow2_joint18, /* [17] joint 18 */
	(u32)dFTCaptainAnimCliffClimbSlow2_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTCaptainAnimCliffClimbSlow2_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTCaptainAnimCliffClimbSlow2_joint23, /* [22] joint 23 */
	(u32)dFTCaptainAnimCliffClimbSlow2_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF0168, /* [25] END */
};

/* Joint 1 */
u16 dFTCaptainAnimCliffClimbSlow2_joint1[20] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 12), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), 333, 326,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 66,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 6), 816,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimCliffClimbSlow2_joint2[56] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX, 18), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX, 1), 6,
	ftAnimSetValRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 712, 119, -52, -4,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 6), 7, 14,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 899, -169,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -169,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 855, 315,
	ftAnimBlock(0, 2),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 14,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 6), 0, -3,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 315,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 1034, 1187,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 1520, 576,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 576,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 1600, 171,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTCaptainAnimCliffClimbSlow2_joint3[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 87, 71,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 5, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 19), 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 7,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 107, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimCliffClimbSlow2_joint5[32] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_TRAZ), 134, 3, 54, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 134, 2, 0, 0, 0, -13, 54, -2,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 7,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 189, 0, -31, 47,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimCliffClimbSlow2_joint6[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1604, 15, -1577, -6, 1605, -210,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1466, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1598, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1324, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1224, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1425, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1470, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1200, -95,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1411, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1380, 31, -1619, -21, 1112, -88,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimCliffClimbSlow2_joint7[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -847, 408,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -439, 275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -297, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -91, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -396, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -871, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -806, 64,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimCliffClimbSlow2_joint8[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 15, 32, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 142, 2, 28, -2,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 643, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 575, -56,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 99, -141, 34, -24, 4, -43,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -781, -89, -388,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimCliffClimbSlow2_joint11[10] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -134, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimCliffClimbSlow2_joint12[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1704, 7, 1632, -16, 1504, -142,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1632, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1530, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1311, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1172, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1369, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1520, 140,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2178, 39,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1613, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1505, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1483, -47, 1467, -37, 2199, 20,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimCliffClimbSlow2_joint13[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -727, 298,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -429, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -319, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -318, -279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1026, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimCliffClimbSlow2_joint14[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX), -176, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 5, 23,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 7,
	ftAnimSetValRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 45, 3, -27, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 173, 12, -119, 5,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 270, 275, 62,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTCaptainAnimCliffClimbSlow2_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimCliffClimbSlow2_joint17[28] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 6, 0, -13, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 19), 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), -320, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 16), 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 4,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTCaptainAnimCliffClimbSlow2_joint18[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -254, 24, -28, -15, 86, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 106, 9, 46, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 64, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 121, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 114, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -228, -358,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 120, 24, 107, 30, -603, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 155, 33, 108, -15, -585, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 187, 32, 75, -32, -486, 98,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTCaptainAnimCliffClimbSlow2_joint20[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 4, 69,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 166, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 344, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 442, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 507, 291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1024, 258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1023, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 755, -272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 479, -275,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTCaptainAnimCliffClimbSlow2_joint22[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1546, -2, -1665, 1, 1878, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1625, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1549, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1546, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1434, -98,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1395, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1616, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1712, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1733, -21, -1563, -14, 1655, 259,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTCaptainAnimCliffClimbSlow2_joint23[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -36, -44, 80, -36, -372, -291,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -33, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -56, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -663, -375,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1122, -280,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1165, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 55, 91,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 170, 32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1141, 46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -963, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -108, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 136, 32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -707, 237,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -159, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 187, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 136, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 155, 18, 117, -19, -93, 65,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTCaptainAnimCliffClimbSlow2_joint25[104] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1208, 131,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1313, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1123, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1296, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1298, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 645, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 569, -76,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0677, 0x0002, 0x0651, 0xFFFD, 0xF8FC, 0xFFE4, 0x2805, 0x0005, 0x05F9, 0xFFC9, 0x200B, 0x0002, 0x0683, 0xFFD1, 0xF8CF, 0x003E, 0x200B, 0x0001, 0x061A, 0xFFBC, 0xF95D, 0x001A, 0x2803, 0x0003, 0x069F, 0x0068, 0x2009, 0x0002, 0xF8CF, 0xFFD1, 0x200D, 0x0001, 0x05A3, 0xFFE1, 0xF8A5, 0xFFCC, 0x280D, 0x0004, 0x0548, 0xFFB1, 0xF82F, 0x0032, 0x2003, 0x0001, 0x06EC, 0x0021, 0x2803, 0x0004, 0x06D9, 0x0014, 0x0801, 0x0003, 0x200D, 0x0001, 0x04EF, 0xFFCB, 0xF871, 0x0036, 0x200F, 0x0001, 0x06EF, 0x0016, 0x04DC, 0xFFEE, 0xF89C, 0x002B, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
