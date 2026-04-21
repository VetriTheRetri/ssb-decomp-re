/* AnimJoint data for relocData file 748 (FTFoxAnimHammerIdle) */
/* 1360 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimHammerIdle_joint1[8];
extern u16 dFTFoxAnimHammerIdle_joint2[24];
extern u16 dFTFoxAnimHammerIdle_joint4[24];
extern u16 dFTFoxAnimHammerIdle_joint5[48];
extern u16 dFTFoxAnimHammerIdle_joint6[14];
extern u16 dFTFoxAnimHammerIdle_joint7[12];
extern u16 dFTFoxAnimHammerIdle_joint8[16];
extern u16 dFTFoxAnimHammerIdle_joint10[12];
extern u16 dFTFoxAnimHammerIdle_joint11[44];
extern u16 dFTFoxAnimHammerIdle_joint12[16];
extern u16 dFTFoxAnimHammerIdle_joint13[38];
extern u16 dFTFoxAnimHammerIdle_joint15[12];
extern u16 dFTFoxAnimHammerIdle_joint16[64];
extern u16 dFTFoxAnimHammerIdle_joint18[48];
extern u16 dFTFoxAnimHammerIdle_joint20[62];
extern u16 dFTFoxAnimHammerIdle_joint21[44];
extern u16 dFTFoxAnimHammerIdle_joint23[40];
extern u16 dFTFoxAnimHammerIdle_joint24[52];
extern u16 dFTFoxAnimHammerIdle_joint25[20];
extern u16 dFTFoxAnimHammerIdle_joint26[30];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimHammerIdle_joints[] = {
	(u32)dFTFoxAnimHammerIdle_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimHammerIdle_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimHammerIdle_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimHammerIdle_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimHammerIdle_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimHammerIdle_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimHammerIdle_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimHammerIdle_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimHammerIdle_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimHammerIdle_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimHammerIdle_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimHammerIdle_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimHammerIdle_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimHammerIdle_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimHammerIdle_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimHammerIdle_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimHammerIdle_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimHammerIdle_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimHammerIdle_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimHammerIdle_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimHammerIdle_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 960, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
};

/* Joint 2 */
u16 dFTFoxAnimHammerIdle_joint2[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, -31,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -134, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 178, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 0, -31,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimHammerIdle_joint4[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, -62,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -268, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 357, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 0, -62,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimHammerIdle_joint5[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1489, 7, 1270, 0, 883, -74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1514, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1271, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 532, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 588, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 935, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 930, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1498, 12, 913, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1489, 9, 1270, 0, 883, -30,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimHammerIdle_joint6[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -26),
};

/* Joint 7 */
u16 dFTFoxAnimHammerIdle_joint7[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimHammerIdle_joint8[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 336, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), -357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 10 */
u16 dFTFoxAnimHammerIdle_joint10[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimHammerIdle_joint11[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1627, -5, 1942, 0, -2528, -86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1587, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1942, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -2884, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2823, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -2486, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1609, -19, -2503, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1627, -18, 1942, 0, -2528, -25,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimHammerIdle_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -7,
	ftAnimLoop(0x6800, -30),
};

/* Joint 13 */
u16 dFTFoxAnimHammerIdle_joint13[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 89, -16, 321, 6, 160, -36,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 62, 13, 321, -6, 160, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 223, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 259, 527,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 89, -16, 321, 6, 160, -36,
	ftAnimLoop(0x6800, -72),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimHammerIdle_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimHammerIdle_joint16[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1651, -10, -1582, 0, 1417, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 11), 1740, 16, -1668, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1620, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1854, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1876, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1602, -238,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1116, 143,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1746, -8, -1670, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1668, -20, -1591, 15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1280, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1651, -16, -1582, 9, 1417, 137,
	ftAnimLoop(0x6800, -124),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimHammerIdle_joint18[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 133, 102,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 234, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 439, 322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 651, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 847, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 739, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 300, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 133, -167,
	ftAnimLoop(0x6800, -94),
};

/* Joint 20 */
u16 dFTFoxAnimHammerIdle_joint20[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1607, 0, 1689, -9, 1691, -112,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1778, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 1606, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1481, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1518, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1485, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1307, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1226, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1228, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1605, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1784, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1700, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1607, 1, 1689, -11, 1691, 86,
	ftAnimLoop(0x6800, -120),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimHammerIdle_joint21[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1651, -2, -1627, 0, 1351, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), -1647, -4, -1628, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1291, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1309, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1264, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1365, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1387, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1651, -4, -1627, 1, 1351, -35,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimHammerIdle_joint23[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 755, 60,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 547, -217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 300, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 125, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 253, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 295, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 211, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 654, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 755, 101,
	ftAnimLoop(0x6800, -78),
};

/* Joint 24 */
u16 dFTFoxAnimHammerIdle_joint24[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 3, 87, 0, -370, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), -7, 11, 90, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -180, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 106, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -208, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -248, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -348, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1, 9, 87, -2, -370, -22,
	ftAnimLoop(0x6800, -100),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimHammerIdle_joint25[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 89, -64,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -343, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 240, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 89, -64,
	ftAnimLoop(0x6800, -38),
};

/* Joint 26 */
u16 dFTFoxAnimHammerIdle_joint26[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 504, -84,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 0, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -547, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -250, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 506, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 504, -84,
	ftAnimLoop(0x6800, -54),
	ftAnimEnd(),
	0x0000,
};
