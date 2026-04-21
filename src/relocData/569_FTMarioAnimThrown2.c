/* AnimJoint data for relocData file 569 (FTMarioAnimThrown2) */
/* 1360 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimThrown2_joint2[12];
extern u16 dFTMarioAnimThrown2_joint3[8];
extern u16 dFTMarioAnimThrown2_joint5[26];
extern u16 dFTMarioAnimThrown2_joint6[50];
extern u16 dFTMarioAnimThrown2_joint7[16];
extern u16 dFTMarioAnimThrown2_joint8[8];
extern u16 dFTMarioAnimThrown2_joint9[22];
extern u16 dFTMarioAnimThrown2_joint11[26];
extern u16 dFTMarioAnimThrown2_joint12[54];
extern u16 dFTMarioAnimThrown2_joint13[16];
extern u16 dFTMarioAnimThrown2_joint14[10];
extern u16 dFTMarioAnimThrown2_joint16[8];
extern u16 dFTMarioAnimThrown2_joint17[84];
extern u16 dFTMarioAnimThrown2_joint19[48];
extern u16 dFTMarioAnimThrown2_joint21[58];
extern u16 dFTMarioAnimThrown2_joint22[80];
extern u16 dFTMarioAnimThrown2_joint24[48];
extern u16 dFTMarioAnimThrown2_joint25[56];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTMarioAnimThrown2_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTMarioAnimThrown2_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimThrown2_joint3, /* [2] joint 3 */
	(u32)dFTMarioAnimThrown2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTMarioAnimThrown2_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimThrown2_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimThrown2_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimThrown2_joint9, /* [8] joint 9 */
	(u32)dFTMarioAnimThrown2_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTMarioAnimThrown2_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimThrown2_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimThrown2_joint14, /* [13] joint 14 */
	(u32)dFTMarioAnimThrown2_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTMarioAnimThrown2_joint17, /* [16] joint 17 */
	(u32)dFTMarioAnimThrown2_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTMarioAnimThrown2_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTMarioAnimThrown2_joint22, /* [21] joint 22 */
	(u32)dFTMarioAnimThrown2_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTMarioAnimThrown2_joint25, /* [24] joint 25 */
};

/* Joint 2 */
u16 dFTMarioAnimThrown2_joint2[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, -240, 0,
	ftAnimBlock(0, 24),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTMarioAnimThrown2_joint3[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimLoop(0x6800, -14),
};

/* Joint 5 */
u16 dFTMarioAnimThrown2_joint5[26] = {
	ftAnimSetValRate(FT_ANIM_ROTY), 0, 22,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -134, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 0, -22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 0, 22,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimThrown2_joint6[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -139, -27, -135, -6, 418, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 548, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -134, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -332, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -267, 60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -118, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 504, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 327, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 377, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -138, -19, -136, -2, 414, 36,
	ftAnimLoop(0x6800, -96),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimThrown2_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 23), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 9,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimThrown2_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimLoop(0x6800, -14),
};

/* Joint 9 */
u16 dFTMarioAnimThrown2_joint9[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -312,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 288, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -312,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -312,
	ftAnimLoop(0x6800, -42),
};

/* Joint 11 */
u16 dFTMarioAnimThrown2_joint11[26] = {
	ftAnimSetValRate(FT_ANIM_ROTY), 0, -29,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 0, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 0, -29,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimThrown2_joint12[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3077, -13, 135, 6, 418, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -2944, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 137, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 296, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 342, 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 492, -41,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2910, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -3058, -25,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 448, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3077, -18, 135, -2, 418, -30,
	ftAnimLoop(0x6800, -104),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimThrown2_joint13[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -9,
	ftAnimLoop(0x6800, -30),
};

/* Joint 14 */
u16 dFTMarioAnimThrown2_joint14[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 625, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 14,
	ftAnimBlock(0, 24),
	ftAnimLoop(0x6800, -18),
};

/* Joint 16 */
u16 dFTMarioAnimThrown2_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, -804, 0,
	ftAnimBlock(0, 24),
	ftAnimLoop(0x6800, -14),
};

/* Joint 17 */
u16 dFTMarioAnimThrown2_joint17[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1753, -44, -1373, -1, -1561, 95,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1835, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1465, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), -1345, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1365, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1446, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1798, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1599, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1561, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -2119, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2109, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1904, 166,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -1616,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1686, -68,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1433, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1368, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1718, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1753, -67, -1373, -5, -1561, 156,
	ftAnimLoop(0x6800, -166),
};

/* Joint 19 */
u16 dFTMarioAnimThrown2_joint19[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 400, -55,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 395, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 365, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 513, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 601, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 337, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 227, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 599, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 601, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 513, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -112,
	ftAnimLoop(0x6800, -94),
};

/* Joint 21 */
u16 dFTMarioAnimThrown2_joint21[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -141, -21, -11, 5, -156, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -13, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -267, 39, 28, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -226, 38, -26, -55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -167, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -14, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 65, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -49, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -72, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -120, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -141, -21, -11, 2, -156, 11,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTMarioAnimThrown2_joint22[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 116, -29, 150, 6, 23, -136,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 158, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 132, 38, -478, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 160, -448,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 87, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -422, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -282, 154,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 142, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 157, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 167, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 116, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 131, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 179, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 96, -59,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 153, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 116, -14, 150, -2, 23, -73,
	ftAnimLoop(0x6800, -156),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimThrown2_joint24[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, 90,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 498, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 336, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 336, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 498, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 528, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 601, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 590, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 423, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, 15,
	ftAnimLoop(0x6800, -94),
};

/* Joint 25 */
u16 dFTMarioAnimThrown2_joint25[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1744, -19, -1514, -2, 1395, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 1531, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -1508, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1623, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1539, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1658, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1668, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1747, 7,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1556, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1420, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1744, -3, -1514, -5, 1395, -25,
	ftAnimLoop(0x6800, -108),
	ftAnimEnd(),
};
