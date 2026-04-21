/* AnimJoint data for relocData file 1192 (FTLinkAnimCliffClimbQuick1) */
/* 1296 bytes: 120-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimCliffClimbQuick1_joint1[24];
extern u16 dFTLinkAnimCliffClimbQuick1_joint2[20];
extern u16 dFTLinkAnimCliffClimbQuick1_joint3[28];
extern u16 dFTLinkAnimCliffClimbQuick1_joint5[26];
extern u16 dFTLinkAnimCliffClimbQuick1_joint6[32];
extern u16 dFTLinkAnimCliffClimbQuick1_joint7[24];
extern u16 dFTLinkAnimCliffClimbQuick1_joint10[26];
extern u16 dFTLinkAnimCliffClimbQuick1_joint11[50];
extern u16 dFTLinkAnimCliffClimbQuick1_joint12[28];
extern u16 dFTLinkAnimCliffClimbQuick1_joint13[24];
extern u16 dFTLinkAnimCliffClimbQuick1_joint14[20];
extern u16 dFTLinkAnimCliffClimbQuick1_joint17[26];
extern u16 dFTLinkAnimCliffClimbQuick1_joint18[24];
extern u16 dFTLinkAnimCliffClimbQuick1_joint19[24];
extern u16 dFTLinkAnimCliffClimbQuick1_joint21[26];
extern u16 dFTLinkAnimCliffClimbQuick1_joint22[38];
extern u16 dFTLinkAnimCliffClimbQuick1_joint24[16];
extern u16 dFTLinkAnimCliffClimbQuick1_joint26[34];
extern u16 dFTLinkAnimCliffClimbQuick1_joint27[38];
extern u16 dFTLinkAnimCliffClimbQuick1_joint29[16];
extern u16 dFTLinkAnimCliffClimbQuick1_joint30[44];

/* Joint pointer table (30 entries, 120 bytes) */
u32 dFTLinkAnimCliffClimbQuick1_joints[] = {
	(u32)dFTLinkAnimCliffClimbQuick1_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimCliffClimbQuick1_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimCliffClimbQuick1_joint3, /* [2] joint 3 */
	(u32)dFTLinkAnimCliffClimbQuick1_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTLinkAnimCliffClimbQuick1_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimCliffClimbQuick1_joint7, /* [6] joint 7 */
	(u32)dFTLinkAnimCliffClimbQuick1_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTLinkAnimCliffClimbQuick1_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimCliffClimbQuick1_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimCliffClimbQuick1_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimCliffClimbQuick1_joint14, /* [13] joint 14 */
	(u32)dFTLinkAnimCliffClimbQuick1_joint17, /* [14] joint 17 */
	0x00000000, /* [15] NULL */
	0x00000000, /* [16] NULL */
	(u32)dFTLinkAnimCliffClimbQuick1_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimCliffClimbQuick1_joint19, /* [18] joint 19 */
	(u32)dFTLinkAnimCliffClimbQuick1_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTLinkAnimCliffClimbQuick1_joint22, /* [21] joint 22 */
	(u32)dFTLinkAnimCliffClimbQuick1_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTLinkAnimCliffClimbQuick1_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	(u32)dFTLinkAnimCliffClimbQuick1_joint27, /* [26] joint 27 */
	(u32)dFTLinkAnimCliffClimbQuick1_joint29, /* [27] joint 29 */
	0x00000000, /* [28] NULL */
	(u32)dFTLinkAnimCliffClimbQuick1_joint30, /* [29] joint 30 */
};

/* Joint 1 */
u16 dFTLinkAnimCliffClimbQuick1_joint1[24] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRate(FT_ANIM_TRAY), -532, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -532, 0, 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 426,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 0, 453,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLinkAnimCliffClimbQuick1_joint2[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 480, 0, -600, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 395, -120, -447, 226,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 374, 691, -401, 585,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTLinkAnimCliffClimbQuick1_joint3[28] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -48, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -117, 166, -48, 4, 0, -6,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 5), -61,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 1669, 322, 0, 32,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTLinkAnimCliffClimbQuick1_joint5[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 446, 0, 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 513, -63,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -184, 12, 0, 5, 0, 1,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimCliffClimbQuick1_joint6[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1659, 14, -1586, 5, -2233, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1736, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1547, 12, -1992, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1546, -34, -1935, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1770, 33, -1615, -68, -2244, -308,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTLinkAnimCliffClimbQuick1_joint7[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -538, 32,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -657, -202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -910, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -695, 455,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 695,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimCliffClimbQuick1_joint10[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 690, 49, -126, -14, -32, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 690, -9, -126, 1, -32, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 590, -68, -109, 13, -316, 10,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimCliffClimbQuick1_joint11[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1152, -5, 1643, 107, 630, -52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 759, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1176, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1751, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1668, -82,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1463, -158,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 815, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1295, 297, 1239, -171, 954, 267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1771, 475, 1119, -119, 1351, 397,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLinkAnimCliffClimbQuick1_joint12[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -216, 208,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -189, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -745, -223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -974, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1045, -71,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimCliffClimbQuick1_joint13[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -261, -26, 49, 25, 311, 31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -261, 49, 311,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -261, 26, 49, -25, 311, -31,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTLinkAnimCliffClimbQuick1_joint14[20] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 804, -804, 804,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 804, 13, -804, 0, 804, -13,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimCliffClimbQuick1_joint17[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1569, -12, -22, 51, -1296, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1569, 72, -22, -6, -1296, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 2291, 12, -90, -51, -1120, 95,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimCliffClimbQuick1_joint18[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 8, 0, -21, 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0, -16, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTLinkAnimCliffClimbQuick1_joint19[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 13, 0, -24, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0, -19, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimCliffClimbQuick1_joint21[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -281, 0, 0, 0, 0, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 0, 28,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -26, 0, 0, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTLinkAnimCliffClimbQuick1_joint22[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 191, 26, -156, -13, -1077, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 268, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -227, 50, -1083, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -138, 16, -1178, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -193, -39, -988, 253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 130, -137, -216, -22, -670, 317,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTLinkAnimCliffClimbQuick1_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 788, 38,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1134, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1064, -69,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTLinkAnimCliffClimbQuick1_joint26[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 364, -23, -126, -16, -399, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -89, 20, -261, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 184, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 270, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 290, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 531, 241, -63, 25, -57, 204,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTLinkAnimCliffClimbQuick1_joint27[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1755, 0, -1625, -3, -2653, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1669, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1747, -54, -2608, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1828, -20, -2737, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1788, 54, -2577, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1719, 69, -1690, -21, -2315, 261,
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTLinkAnimCliffClimbQuick1_joint29[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 780, 21,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1142, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1087, -55,
	ftAnimEnd(),
	0x0000,
};

/* Joint 30 */
u16 dFTLinkAnimCliffClimbQuick1_joint30[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -351, 3, 156, 8, -412, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 156, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -284, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -262, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -89, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -126, -97, 154, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -283, -157, 151, -2, -49, 234,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
