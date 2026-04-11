/* AnimJoint data for relocData file 576 (FTMarioAnimCliffClimbQuick2) */
/* 1584 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimCliffClimbQuick2_joint1[18];
extern u16 dFTMarioAnimCliffClimbQuick2_joint2[54];
extern u16 dFTMarioAnimCliffClimbQuick2_joint3[44];
extern u16 dFTMarioAnimCliffClimbQuick2_joint5[44];
extern u16 dFTMarioAnimCliffClimbQuick2_joint6[100];
extern u16 dFTMarioAnimCliffClimbQuick2_joint7[34];
extern u16 dFTMarioAnimCliffClimbQuick2_joint8[18];
extern u16 dFTMarioAnimCliffClimbQuick2_joint9[38];
extern u16 dFTMarioAnimCliffClimbQuick2_joint11[42];
extern u16 dFTMarioAnimCliffClimbQuick2_joint12[90];
extern u16 dFTMarioAnimCliffClimbQuick2_joint13[24];
extern u16 dFTMarioAnimCliffClimbQuick2_joint14[36];
extern u16 dFTMarioAnimCliffClimbQuick2_joint16[10];
extern u16 dFTMarioAnimCliffClimbQuick2_joint17[42];
extern u16 dFTMarioAnimCliffClimbQuick2_joint19[30];
extern u16 dFTMarioAnimCliffClimbQuick2_joint21[24];
extern u16 dFTMarioAnimCliffClimbQuick2_joint22[46];
extern u16 dFTMarioAnimCliffClimbQuick2_joint24[48];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTMarioAnimCliffClimbQuick2_joints[] = {
	(u32)dFTMarioAnimCliffClimbQuick2_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimCliffClimbQuick2_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimCliffClimbQuick2_joint3, /* [2] joint 3 */
	(u32)dFTMarioAnimCliffClimbQuick2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTMarioAnimCliffClimbQuick2_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimCliffClimbQuick2_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimCliffClimbQuick2_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimCliffClimbQuick2_joint9, /* [8] joint 9 */
	(u32)dFTMarioAnimCliffClimbQuick2_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTMarioAnimCliffClimbQuick2_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimCliffClimbQuick2_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimCliffClimbQuick2_joint14, /* [13] joint 14 */
	(u32)dFTMarioAnimCliffClimbQuick2_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTMarioAnimCliffClimbQuick2_joint17, /* [16] joint 17 */
	(u32)dFTMarioAnimCliffClimbQuick2_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTMarioAnimCliffClimbQuick2_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTMarioAnimCliffClimbQuick2_joint22, /* [21] joint 22 */
	(u32)dFTMarioAnimCliffClimbQuick2_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF0180, /* [24] END */
};

/* Joint 1 */
u16 dFTMarioAnimCliffClimbQuick2_joint1[18] = {
	ftAnimSetValBlock(FT_ANIM_TRAY), 0,
	ftAnimSetValT(FT_ANIM_TRAY, 17), 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 2,
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 621,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 15), 840, 82,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimCliffClimbQuick2_joint2[54] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 91, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 5,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 20), 3216,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 5,
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 767, -33,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAZ), -73,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 0, 0, 540, -121, 0, 39,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 0, 63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 223, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 540, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTMarioAnimCliffClimbQuick2_joint3[44] = {
	ftAnimSetValBlock(FT_ANIM_ROTY), -804,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY), 0, 0, 0, 0, 0, -137,
	ftAnimSetValT(FT_ANIM_ROTY, 11), -804,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), 7, -4, 10, -5,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 17), 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 2,
	ftAnimBlock(0, 9),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -71, -3, -790, 0, -95, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimCliffClimbQuick2_joint5[44] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 27), 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 12,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -253, -31, -9, -2, -4, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -84, 27, -29, 15, -12, 6,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 208, 11, 258, 11, 110, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTMarioAnimCliffClimbQuick2_joint6[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1724, 356, -995, -55, 1597, -359,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1367, 84, -1050, -181, 1237, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1554, -14, -1357, -251, 1848, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1397, 16, -1554, -21, 1673, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1522, -147, -1401, 173, 1739, 40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1684, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1774, 135, -1035, -235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1553, 102, -1489, -239,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1630, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1414, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1325, 79, 1658, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1445, -157,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1286, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1615, 61,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1425, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1296, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1475, -49, -1308, -21, 1336, 39,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimCliffClimbQuick2_joint7[34] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -390,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -790, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 390,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, -182,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimCliffClimbQuick2_joint8[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -804,
	ftAnimSetValRateT(FT_ANIM_ROTX, 35), 0, 14,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 20,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimBlock(0, 15),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTMarioAnimCliffClimbQuick2_joint9[38] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAY), 288,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 35), 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 20,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -448, 33, -2, 0, 86, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -78, 43, -3, 0, 146, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 201, 10, -4, 0, 176, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimCliffClimbQuick2_joint11[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -18,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 35), 0, 0, 54, 0, -17, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 20,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -6, 0, 2, 0, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -182, -10, 113, 6, -172, -9,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -221, -1, 139, 0, -209, -1,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimCliffClimbQuick2_joint12[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -382, 385, 1944, -74, 382, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1541, -151, 232, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 271, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 385, 107,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 654, 236,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1374, -128, 307, 162,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 983, 129,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1593, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 959, 286,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1519, -22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1069, 48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 941, -13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1588, -101,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1103, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1471, 81, 998, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1681, 290, 1307, 337,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2052, 370, 1056, -47, 1674, 366,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimCliffClimbQuick2_joint13[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -731, -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, -79,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTMarioAnimCliffClimbQuick2_joint14[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 580, -62, -294, -9, 178, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 953, 122, -220, 21, 217, -2,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1394, -25, -151, 17, 163, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 625, -9, 0, 5, 0, -5,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimCliffClimbQuick2_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 15),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTMarioAnimCliffClimbQuick2_joint17[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1229, -14, -1547, 1, -1689, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 14), -1698, -45, -1400, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1581, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1553, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1627, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1613, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1578, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1743, -44, -1377, 22, -1563, 15,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTMarioAnimCliffClimbQuick2_joint19[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 198, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 278, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 395, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, 5,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimCliffClimbQuick2_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -399, 43, -266, 11, 522, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -202, -9, -19, 8, -143, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -212, -9, -11, 7, -156, -12,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTMarioAnimCliffClimbQuick2_joint22[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -76, 4, 511, -5, 202, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 211, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 158, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 245, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 244, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 45, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 198, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 190, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 200, 41, 187, -3, 35, -9,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimCliffClimbQuick2_joint24[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 398, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, 39,
	ftAnimEnd(),
	0x0000, 0x200E, 0x07EE, 0xFFE8, 0xF91D, 0x000D, 0x07AE, 0xFFD1, 0x200F, 0x000E, 0x06C3, 0xFFE9, 0xF9C6, 0x0006, 0x057B, 0xFFF1, 0x200F, 0x0001, 0x06B0, 0xFFEE, 0xF9CC, 0x0005, 0x056D, 0xFFF2, 0x0000,
};
