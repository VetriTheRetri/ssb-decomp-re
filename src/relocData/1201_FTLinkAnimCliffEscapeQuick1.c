/* AnimJoint data for relocData file 1201 (FTLinkAnimCliffEscapeQuick1) */
/* 1248 bytes: 120-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimCliffEscapeQuick1_joint1[24];
extern u16 dFTLinkAnimCliffEscapeQuick1_joint2[22];
extern u16 dFTLinkAnimCliffEscapeQuick1_joint3[32];
extern u16 dFTLinkAnimCliffEscapeQuick1_joint5[28];
extern u16 dFTLinkAnimCliffEscapeQuick1_joint6[34];
extern u16 dFTLinkAnimCliffEscapeQuick1_joint7[24];
extern u16 dFTLinkAnimCliffEscapeQuick1_joint10[26];
extern u16 dFTLinkAnimCliffEscapeQuick1_joint11[24];
extern u16 dFTLinkAnimCliffEscapeQuick1_joint12[32];
extern u16 dFTLinkAnimCliffEscapeQuick1_joint13[26];
extern u16 dFTLinkAnimCliffEscapeQuick1_joint14[20];
extern u16 dFTLinkAnimCliffEscapeQuick1_joint17[26];
extern u16 dFTLinkAnimCliffEscapeQuick1_joint18[26];
extern u16 dFTLinkAnimCliffEscapeQuick1_joint19[24];
extern u16 dFTLinkAnimCliffEscapeQuick1_joint21[26];
extern u16 dFTLinkAnimCliffEscapeQuick1_joint22[30];
extern u16 dFTLinkAnimCliffEscapeQuick1_joint24[16];
extern u16 dFTLinkAnimCliffEscapeQuick1_joint26[24];
extern u16 dFTLinkAnimCliffEscapeQuick1_joint27[34];
extern u16 dFTLinkAnimCliffEscapeQuick1_joint29[66];

/* Joint pointer table (30 entries, 120 bytes) */
u32 dFTLinkAnimCliffEscapeQuick1_joints[] = {
	(u32)dFTLinkAnimCliffEscapeQuick1_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimCliffEscapeQuick1_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimCliffEscapeQuick1_joint3, /* [2] joint 3 */
	(u32)dFTLinkAnimCliffEscapeQuick1_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTLinkAnimCliffEscapeQuick1_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimCliffEscapeQuick1_joint7, /* [6] joint 7 */
	(u32)dFTLinkAnimCliffEscapeQuick1_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTLinkAnimCliffEscapeQuick1_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimCliffEscapeQuick1_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimCliffEscapeQuick1_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimCliffEscapeQuick1_joint14, /* [13] joint 14 */
	(u32)dFTLinkAnimCliffEscapeQuick1_joint17, /* [14] joint 17 */
	0x00000000, /* [15] NULL */
	0x00000000, /* [16] NULL */
	(u32)dFTLinkAnimCliffEscapeQuick1_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimCliffEscapeQuick1_joint19, /* [18] joint 19 */
	(u32)dFTLinkAnimCliffEscapeQuick1_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTLinkAnimCliffEscapeQuick1_joint22, /* [21] joint 22 */
	(u32)dFTLinkAnimCliffEscapeQuick1_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTLinkAnimCliffEscapeQuick1_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	(u32)dFTLinkAnimCliffEscapeQuick1_joint27, /* [26] joint 27 */
	(u32)dFTLinkAnimCliffEscapeQuick1_joint29, /* [27] joint 29 */
	0x00000000, /* [28] NULL */
	0xFFFF0123, /* [29] END */
};

/* Joint 1 */
u16 dFTLinkAnimCliffEscapeQuick1_joint1[24] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 17), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAZ, 1), 10,
	ftAnimSetValRate(FT_ANIM_TRAY), -532, 1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), -532, -2,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 608,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 0, 453,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimCliffEscapeQuick1_joint2[22] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 480, -427, -600, -185,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 395, 117, -447, 582,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 597, 310, -17, 321,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTLinkAnimCliffEscapeQuick1_joint3[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -23, -48, 56, 0, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -117, 0, -48, 0, 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 178, 4, -6,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 3), -42,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 495, 184, -38, 9,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTLinkAnimCliffEscapeQuick1_joint5[28] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 446, 45, 0, -2, 0, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 513, 0, 0, 0, 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -69,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -4, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 483, -127,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimCliffEscapeQuick1_joint6[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1598, 1, -1621, -44, -2231, -63,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 1618, -1, -1603, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -2135, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1979, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1937, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1619, 0, -1602, 1, -2192, -255,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTLinkAnimCliffEscapeQuick1_joint7[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -539, -23,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -790, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -914, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -427, 457,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 427,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimCliffEscapeQuick1_joint10[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 690, 49, -126, -14, -32, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 690, -28, -126, 0, -32, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 119, -33, -107, 6, 319, 5,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimCliffEscapeQuick1_joint11[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -457, -15, -20, -61, -968, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -422, 11, 163, 14, -823, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -408, 14, 173, 10, -859, -35,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLinkAnimCliffEscapeQuick1_joint12[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -257, 80,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -176, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -266, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -336, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -573, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -747, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -728, 18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimCliffEscapeQuick1_joint13[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -261, -26, 49, 25, 311, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -261, 14, 49, -7, 311, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 62, 8, -130, -8, 158, -10,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTLinkAnimCliffEscapeQuick1_joint14[20] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 804, 3, -804, 0, 804, -3,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 937, -804, 670,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimCliffEscapeQuick1_joint17[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1569, -12, -22, 51, -1296, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1569, 2, -22, 46, -1296, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 1605, 4, 588, -17, -1015, 31,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimCliffEscapeQuick1_joint18[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 8, 0, -21, 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0, -2, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 27), 0, 0, -83, -5, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTLinkAnimCliffEscapeQuick1_joint19[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 13, 0, -24, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0, -5, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 0, -199, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimCliffEscapeQuick1_joint21[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -281, 0, 0, 0, 0, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 7, 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -202, -8, 0, 0, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTLinkAnimCliffEscapeQuick1_joint22[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1416, -3, -1452, 13, -2685, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -1343, -88, -1438, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -2786, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2656, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1452, -108, -1369, 69, -2441, 215,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTLinkAnimCliffEscapeQuick1_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 788, 31,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1048, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1014, -33,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTLinkAnimCliffEscapeQuick1_joint26[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 364, 12, -126, -16, -399, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 316, 56, -90, 13, -318, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 384, 68, -77, 13, -289, 28,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTLinkAnimCliffEscapeQuick1_joint27[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -146, 1, 17, 3, -1044, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -138, 68, 43, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1117, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1129, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1008, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -82, 55, 88, 45, -866, 142,
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTLinkAnimCliffEscapeQuick1_joint29[66] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 780, 33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1056, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1103, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 850, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 885, 35,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFEA1, 0x000F, 0x009C, 0x0008, 0xFE64, 0xFFF5, 0x280D, 0x0005, 0x009C, 0xFFDC, 0xFE64, 0x0049, 0x2003, 0x0004, 0xFEE0, 0x0076, 0x2003, 0x0001, 0xFFA7, 0x000D, 0x200F, 0x0001, 0xFEFB, 0xFFB6, 0x008D, 0xFFF1, 0xFEA7, 0x003E, 0x200F, 0x0001, 0xFF13, 0x0018, 0x007D, 0xFFF1, 0xFEE2, 0x003A, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
