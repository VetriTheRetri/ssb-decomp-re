/* AnimJoint data for relocData file 1265 (FTKirbyAnimRun) */
/* 1360 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimRun_joint1[26];
extern u16 dFTKirbyAnimRun_joint2[12];
extern u16 dFTKirbyAnimRun_joint3[44];
extern u16 dFTKirbyAnimRun_joint5[28];
extern u16 dFTKirbyAnimRun_joint6[40];
extern u16 dFTKirbyAnimRun_joint7[16];
extern u16 dFTKirbyAnimRun_joint9[28];
extern u16 dFTKirbyAnimRun_joint10[40];
extern u16 dFTKirbyAnimRun_joint11[16];
extern u16 dFTKirbyAnimRun_joint13[12];
extern u16 dFTKirbyAnimRun_joint14[84];
extern u16 dFTKirbyAnimRun_joint16[16];
extern u16 dFTKirbyAnimRun_joint18[86];
extern u16 dFTKirbyAnimRun_joint19[90];
extern u16 dFTKirbyAnimRun_joint21[98];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimRun_joints[] = {
	(u32)dFTKirbyAnimRun_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimRun_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimRun_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimRun_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimRun_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimRun_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimRun_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimRun_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimRun_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimRun_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimRun_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimRun_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimRun_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimRun_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimRun_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF012B, /* [21] END */
};

/* Joint 1 */
u16 dFTKirbyAnimRun_joint1[26] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 720,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 720,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 720,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimRun_joint2[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, -312, 0,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimRun_joint3[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 89, 4300, 3686, 4300,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 89, 0, 0, 312, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 0, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), -89, 4300, 3686, 4300,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 0, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 89, 4300, 3686, 4300,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimRun_joint5[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -134,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -89, 178, -180, -180, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 0, 26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 0, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), -134,
	ftAnimLoop(0x6800, -52),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimRun_joint6[40] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2432, 3, -435, 0, -1734, -1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -438, 6, -1736, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 2410, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2401, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 2436, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2432, -4, -432, 6, -1734, 2,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimRun_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimLoop(0x6800, -30),
};

/* Joint 9 */
u16 dFTKirbyAnimRun_joint9[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -134,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -89, -178, 180, -180, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 0, 26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 0, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), -134,
	ftAnimLoop(0x6800, -52),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimRun_joint10[40] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 815, -8, 474, 0, -1723, -3,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 474, 0, -1726, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 780, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 784, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 806, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 815, 8, 473, 0, -1723, 2,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimRun_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 13 */
u16 dFTKirbyAnimRun_joint13[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimRun_joint14[84] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4505,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -114, 6, -235, -9, 885, -32,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -257, 24,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 11, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 237, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 69, -197,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -527, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -243, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -302, 8,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4505,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 23, 11, -491, 81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -108, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 237, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -301, 4, 393, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -244, 17, 852, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -114, -6, -235, 9, 885, 32,
	ftAnimLoop(0x6800, -166),
};

/* Joint 16 */
u16 dFTKirbyAnimRun_joint16[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimLoop(0x6800, -30),
};

/* Joint 18 */
u16 dFTKirbyAnimRun_joint18[86] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1852, -7, 1677, 22, -1803, -9,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1542, 100,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1880, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 1754, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1723, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1796, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1440, 83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1546, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1830, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1918, 11,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1641, -79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1812, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1912, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1860, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1787, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1699, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1852, 7, 1677, -22, -1803, 9,
	ftAnimLoop(0x6800, -168),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimRun_joint19[90] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1595, -9, 1365, -13, 1076, 44,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1337, 24,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4505,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1669, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1450, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1673, 195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 2352, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1363, 17, 2461, 70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1841, -162,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1317, 32,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4096,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1643, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1584, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1673, -197,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1117, -79,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1351, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1597, 12, 1365, 13, 1080, -36,
	ftAnimLoop(0x6800, -178),
};

/* Joint 21 */
u16 dFTKirbyAnimRun_joint21[98] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimLoop(0x6800, -30),
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1407, 20, -1678, -8, 1860, -16,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -1748, 44, 1382, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1298, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1304, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1298, 11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1699, 35, 1404, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1571, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -1785, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1281, 5, -1754, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1386, -35, -1686, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1670, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1840, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1407, -20, -1678, 8, 1863, 23,
	ftAnimLoop(0x6800, -148),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
