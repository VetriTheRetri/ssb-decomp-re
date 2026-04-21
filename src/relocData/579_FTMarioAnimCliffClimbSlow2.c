/* AnimJoint data for relocData file 579 (FTMarioAnimCliffClimbSlow2) */
/* 1552 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimCliffClimbSlow2_joint1[16];
extern u16 dFTMarioAnimCliffClimbSlow2_joint2[20];
extern u16 dFTMarioAnimCliffClimbSlow2_joint3[24];
extern u16 dFTMarioAnimCliffClimbSlow2_joint5[44];
extern u16 dFTMarioAnimCliffClimbSlow2_joint6[96];
extern u16 dFTMarioAnimCliffClimbSlow2_joint7[24];
extern u16 dFTMarioAnimCliffClimbSlow2_joint8[18];
extern u16 dFTMarioAnimCliffClimbSlow2_joint9[32];
extern u16 dFTMarioAnimCliffClimbSlow2_joint11[42];
extern u16 dFTMarioAnimCliffClimbSlow2_joint12[82];
extern u16 dFTMarioAnimCliffClimbSlow2_joint13[32];
extern u16 dFTMarioAnimCliffClimbSlow2_joint14[20];
extern u16 dFTMarioAnimCliffClimbSlow2_joint16[12];
extern u16 dFTMarioAnimCliffClimbSlow2_joint17[56];
extern u16 dFTMarioAnimCliffClimbSlow2_joint19[24];
extern u16 dFTMarioAnimCliffClimbSlow2_joint21[34];
extern u16 dFTMarioAnimCliffClimbSlow2_joint22[54];
extern u16 dFTMarioAnimCliffClimbSlow2_joint24[32];
extern u16 dFTMarioAnimCliffClimbSlow2_joint25[64];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTMarioAnimCliffClimbSlow2_joints[] = {
	(u32)dFTMarioAnimCliffClimbSlow2_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimCliffClimbSlow2_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimCliffClimbSlow2_joint3, /* [2] joint 3 */
	(u32)dFTMarioAnimCliffClimbSlow2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTMarioAnimCliffClimbSlow2_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimCliffClimbSlow2_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimCliffClimbSlow2_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimCliffClimbSlow2_joint9, /* [8] joint 9 */
	(u32)dFTMarioAnimCliffClimbSlow2_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTMarioAnimCliffClimbSlow2_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimCliffClimbSlow2_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimCliffClimbSlow2_joint14, /* [13] joint 14 */
	(u32)dFTMarioAnimCliffClimbSlow2_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTMarioAnimCliffClimbSlow2_joint17, /* [16] joint 17 */
	(u32)dFTMarioAnimCliffClimbSlow2_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTMarioAnimCliffClimbSlow2_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTMarioAnimCliffClimbSlow2_joint22, /* [21] joint 22 */
	(u32)dFTMarioAnimCliffClimbSlow2_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTMarioAnimCliffClimbSlow2_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTMarioAnimCliffClimbSlow2_joint1[16] = {
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, -9,
	ftAnimSetValBlock(FT_ANIM_TRAY), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 30), 360, 57,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 30), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimCliffClimbSlow2_joint2[20] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY), -536, 15, 0, 0, -300, 108,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY, 30), 223, 15, 0, 0, 540, 134,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTMarioAnimCliffClimbSlow2_joint3[24] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY), 0, -1, 0, -19, 0, -2, 600, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 30), -71, -1, -790, -15, -95, -1, 0, -95,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimCliffClimbSlow2_joint5[44] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 38), 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 28,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 759, 36, 0, 4, 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 958, -18, 90, 8, 38, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 20), 208, -18, 258, 4, 110, 1, 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTMarioAnimCliffClimbSlow2_joint6[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1631, -92, -954, 41, 1294, 102,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -947, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -2191, -370, 1880, 379,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2624, -352, 2322, 361,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -3373, -190, 3149, 199,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -967, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -956, -73,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3643, -427, 3425, 430,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4227, -453, 4009, 452,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4549, -223, 4329, 221,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -4801, -19, 4609, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1034, -72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1281, -23,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4816, -11, 4639, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), -4700, 10, 4578, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4692, 8, -1308, -26, 4553, -25,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimCliffClimbSlow2_joint7[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -640, -39,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -892, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -862, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -260, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 78,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimCliffClimbSlow2_joint8[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -804,
	ftAnimSetValRateT(FT_ANIM_ROTX, 70), -625, 8,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 40,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTMarioAnimCliffClimbSlow2_joint9[32] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAY), 288,
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 53), 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 23,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0, 0, 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 201, 4, -4, 0, 176, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimCliffClimbSlow2_joint11[42] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 54, 0, -18, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 53), 0, 0, 54, 0, -17, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 23,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -368, -19, 309, 8, -239, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -631, 4, 290, -5, -260, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -221, 10, 139, -3, -209, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTMarioAnimCliffClimbSlow2_joint12[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1753, 16, 1749, 22, 918, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 1136, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 1567, -78, 1552, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1496, -55, 1481, -58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1746, 56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 1203, -42,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1221, 86,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 1763, -31,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1805, 60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 2106, -32,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1158, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1049, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1727, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2073, -27, 1693, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2052, -21, 1056, 7, 1674, -18,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimCliffClimbSlow2_joint13[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -478, -69,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -655, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -695, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -899, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -865, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -835, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, 23,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTMarioAnimCliffClimbSlow2_joint14[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 402, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), 1127, 4,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 18,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), 625, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTMarioAnimCliffClimbSlow2_joint16[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	_FT_ANIM_CMD(11, 0, 1), 40,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTMarioAnimCliffClimbSlow2_joint17[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1782, 183, -1014, -10, 1759, -185,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1217, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 1314, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), -1246, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1243, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1367, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1238, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1717, -29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1339, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 1628, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1743, -26, -1377, -10, 1653, 25,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTMarioAnimCliffClimbSlow2_joint19[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 920, 23,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 430, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 417, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 421, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTMarioAnimCliffClimbSlow2_joint21[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -408, -28, -107, -1, 20, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), -13, 2, -153, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -536, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -510, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), -221, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -212, 9, -11, 1, -156, -2,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTMarioAnimCliffClimbSlow2_joint22[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 69, 3, 48, 2, 120, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -60, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), 189, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 147, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 109, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -139, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -176, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 19, 19,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -61, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 184, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 200, 15, 187, -2, 35, 16,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimCliffClimbSlow2_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 7, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 95, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 366, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 508, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 467, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, -28,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTMarioAnimCliffClimbSlow2_joint25[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1894, -6, -1819, -2, 2134, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 1535, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -1669, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 2031, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2095, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 1748, -14,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1490, -43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1386, 5,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1735, -11, -1645, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1714, -2, -1595, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1712, -1, -1588, 6, 1389, 3,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
