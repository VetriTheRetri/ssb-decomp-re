/* AnimJoint data for relocData file 717 (FTFoxAnimCliffCatch) */
/* 1008 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimCliffCatch_joint1[14];
extern u16 dFTFoxAnimCliffCatch_joint2[8];
extern u16 dFTFoxAnimCliffCatch_joint3[18];
extern u16 dFTFoxAnimCliffCatch_joint5[8];
extern u16 dFTFoxAnimCliffCatch_joint6[34];
extern u16 dFTFoxAnimCliffCatch_joint7[16];
extern u16 dFTFoxAnimCliffCatch_joint8[12];
extern u16 dFTFoxAnimCliffCatch_joint9[16];
extern u16 dFTFoxAnimCliffCatch_joint11[12];
extern u16 dFTFoxAnimCliffCatch_joint12[42];
extern u16 dFTFoxAnimCliffCatch_joint13[24];
extern u16 dFTFoxAnimCliffCatch_joint14[12];
extern u16 dFTFoxAnimCliffCatch_joint16[12];
extern u16 dFTFoxAnimCliffCatch_joint17[32];
extern u16 dFTFoxAnimCliffCatch_joint19[20];
extern u16 dFTFoxAnimCliffCatch_joint21[40];
extern u16 dFTFoxAnimCliffCatch_joint22[40];
extern u16 dFTFoxAnimCliffCatch_joint24[16];
extern u16 dFTFoxAnimCliffCatch_joint25[34];
extern u16 dFTFoxAnimCliffCatch_joint26[40];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTFoxAnimCliffCatch_joints[] = {
	(u32)dFTFoxAnimCliffCatch_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimCliffCatch_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimCliffCatch_joint3, /* [2] joint 3 */
	(u32)dFTFoxAnimCliffCatch_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTFoxAnimCliffCatch_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimCliffCatch_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimCliffCatch_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimCliffCatch_joint9, /* [8] joint 9 */
	(u32)dFTFoxAnimCliffCatch_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTFoxAnimCliffCatch_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimCliffCatch_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimCliffCatch_joint14, /* [13] joint 14 */
	(u32)dFTFoxAnimCliffCatch_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTFoxAnimCliffCatch_joint17, /* [16] joint 17 */
	(u32)dFTFoxAnimCliffCatch_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTFoxAnimCliffCatch_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTFoxAnimCliffCatch_joint22, /* [21] joint 22 */
	(u32)dFTFoxAnimCliffCatch_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTFoxAnimCliffCatch_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimCliffCatch_joint26, /* [25] joint 26 */
	0xFFFF00EE, /* [26] END */
};

/* Joint 1 */
u16 dFTFoxAnimCliffCatch_joint1[14] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -1680, -640, -600, 1280,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -1800, -240,
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimCliffCatch_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 60, 912, 0,
	ftAnimBlock(0, 4),
	ftAnimLoop(0x6800, -14),
};

/* Joint 3 */
u16 dFTFoxAnimCliffCatch_joint3[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 268, 223, 0, -297, -178, -297,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 804, -625, -804,
	ftAnimLoop(0x6800, -34),
};

/* Joint 5 */
u16 dFTFoxAnimCliffCatch_joint5[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 536,
	ftAnimBlock(0, 4),
	ftAnimLoop(0x6800, -14),
};

/* Joint 6 */
u16 dFTFoxAnimCliffCatch_joint6[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2370, 233, -248, 71, -1511, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1755, 377, -259, -101, -1622, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1380, 237, -379, -84, -1631, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1280, 100, -428, -48, -1658, -27,
	ftAnimLoop(0x6800, -64),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimCliffCatch_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 8 */
u16 dFTFoxAnimCliffCatch_joint8[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTFoxAnimCliffCatch_joint9[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -268, 178, -178,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 446, 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimCliffCatch_joint11[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 4),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimCliffCatch_joint12[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3049, 334, -2166, -769, 2815, -328,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3383, 161, -2935, -471, 2486, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3372, 47, -3108, 48, 2885, 573,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3478, 176, -2839, 105, 3633, 547,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3726, 247, -2898, -58, 3980, 346,
	ftAnimLoop(0x6800, -80),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimCliffCatch_joint13[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -317, -428,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -864, -299,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -915, -50,
	ftAnimLoop(0x6800, -46),
};

/* Joint 14 */
u16 dFTFoxAnimCliffCatch_joint14[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 272, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimCliffCatch_joint16[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 4),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimCliffCatch_joint17[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1901, 13, -1514, 42, 1956, -333,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1748, 48, -1493, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1491, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1670, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1706, 41, -1477, 15, 1660, -9,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimCliffCatch_joint19[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 5, 455,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 500, -227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimLoop(0x6800, -38),
};

/* Joint 21 */
u16 dFTFoxAnimCliffCatch_joint21[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 77, 173, -34, -62, 502, -196,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 252, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 243, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -96, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -31, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -73, -37, 414, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 136, -106, -105, -32, 433, 19,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimCliffCatch_joint22[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1685, 258, 1697, -72, 1287, -222,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1960, -55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1626, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1064, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1117, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1832, -97, 1152, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1765, -66, 1619, -7, 1167, 15,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimCliffCatch_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1054, -14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 860, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 821, -39,
	ftAnimLoop(0x6800, -30),
};

/* Joint 25 */
u16 dFTFoxAnimCliffCatch_joint25[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1767, -246, 1497, -23, -1651, 101,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1618, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1990, 117, -1628, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1778, 155, -1712, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1678, 99, 1644, 26, -1753, -41,
	ftAnimLoop(0x6800, -64),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimCliffCatch_joint26[40] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 219,
	ftAnimSetValAfter(FT_ANIM_ROTZ), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -714, 0,
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
	0x380E, 0x00B2, 0x0000, 0x0000, 0x2803, 0x0002, 0x02CD, 0xFFB2, 0x380D, 0x0002, 0x0034, 0x0115, 0x200F, 0x0002, 0xFF7A, 0xFFE7, 0x0000, 0xFFFF, 0x0000, 0xFFF5, 0x6800, 0xFFD6, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
