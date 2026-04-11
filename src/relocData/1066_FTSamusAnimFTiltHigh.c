/* AnimJoint data for relocData file 1066 (FTSamusAnimFTiltHigh) */
/* 2096 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimFTiltHigh_joint1[48];
extern u16 dFTSamusAnimFTiltHigh_joint2[34];
extern u16 dFTSamusAnimFTiltHigh_joint4[32];
extern u16 dFTSamusAnimFTiltHigh_joint5[120];
extern u16 dFTSamusAnimFTiltHigh_joint6[52];
extern u16 dFTSamusAnimFTiltHigh_joint7[32];
extern u16 dFTSamusAnimFTiltHigh_joint8[16];
extern u16 dFTSamusAnimFTiltHigh_joint11[10];
extern u16 dFTSamusAnimFTiltHigh_joint12[116];
extern u16 dFTSamusAnimFTiltHigh_joint14[52];
extern u16 dFTSamusAnimFTiltHigh_joint15[108];
extern u16 dFTSamusAnimFTiltHigh_joint17[44];
extern u16 dFTSamusAnimFTiltHigh_joint19[100];
extern u16 dFTSamusAnimFTiltHigh_joint20[86];
extern u16 dFTSamusAnimFTiltHigh_joint22[152];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimFTiltHigh_joints[] = {
	(u32)dFTSamusAnimFTiltHigh_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimFTiltHigh_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimFTiltHigh_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimFTiltHigh_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimFTiltHigh_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimFTiltHigh_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimFTiltHigh_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimFTiltHigh_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimFTiltHigh_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimFTiltHigh_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimFTiltHigh_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimFTiltHigh_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimFTiltHigh_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimFTiltHigh_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimFTiltHigh_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF01DD, /* [22] END */
};

/* Joint 1 */
u16 dFTSamusAnimFTiltHigh_joint1[48] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY), 0, 0, 1600,
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1072, -273,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY, 32), 0, 0, 1600,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), 247, 46,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -367,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -2309, -150,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 185, 54,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 487, 122,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 24), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 17), -3401,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -3216, 56,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimFTiltHigh_joint2[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterT(FT_ANIM_ROTY, 32), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 147, 0, -688, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 0, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -583, 28,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 111,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 18), 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimFTiltHigh_joint4[32] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 223, -491, 0, -88, -53, -7,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 285, -362, -71, -61, -11, 49,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimFTiltHigh_joint5[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1132, 62, -1722, 34, 1377, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -995, -222, -1458, 35, 1225, 230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1317, -296, -1475, -52, 1549, 274,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1821, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1584, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1944, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1954, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1864, -141,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1799, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1409, 286,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1516, 101, 1636, -328,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1335, -20, 796, -263,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1067, 216,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1032, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1422, -82, 680, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 941, 83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1724, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1072, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1138, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1026, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1348, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1132, 6, -1722, 1, 1377, 28,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimFTiltHigh_joint6[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -739, 14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 32), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -906, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1079, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1159, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1164, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1101, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -812, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -577, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -608, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -719, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, -20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimFTiltHigh_joint7[32] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 701, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 347, -48, 59,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -419, -127, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, -28, 0, 250, 0, -47,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 10, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 701, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimFTiltHigh_joint8[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 32), 67, -17, -1474, 98, 60, -42,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimFTiltHigh_joint11[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 32), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimFTiltHigh_joint12[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 180, -82, -195, 66, -232, 178,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2, -74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 341, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 341, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 254, -108,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -38, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -84, -84,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -176, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -42, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -39, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 340, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -33, -67,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -172, 63, -38, 85,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 201, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 379, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 420, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 44, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 172, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 136, 42,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -170, -59,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -99, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -155, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 180, 43, -195, -40, -232, -61,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimFTiltHigh_joint14[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, -181,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 32), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -915, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -877, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1045, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1029, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1036, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -997, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -798, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -840, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -675, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 79,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimFTiltHigh_joint15[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 87, -76, -27, -36, -389, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -262, -76,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -273, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -133, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -96, 141,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 528, 239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -406, -114,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -585, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -449, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 627, 48, -607, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 659, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -559, 46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -266, 93,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 665, -40, -589, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 276, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -430, 36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -187, 68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 15, -15,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 251, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 139, -43,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 87, -51, -27, -24, -389, 40,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimFTiltHigh_joint17[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, 30,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 32), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 580, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 573, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 356, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 377, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 439, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 437, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 464, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, 14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimFTiltHigh_joint19[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1684, 61, -1579, 12, -1650, -40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1810, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1601, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1644, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1534, 77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1667, -43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1794, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -1644, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1627, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1589, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1712, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1823, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1759, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1643, -47,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1638, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1646, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1590, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1581, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1692, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1710, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1684, 26, -1579, 1, -1650, -4,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimFTiltHigh_joint20[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 226, -60, 160, 13, -49, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -156, 57, 196, 59, -362, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -63, 108, 255, 32, -201, 205,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 172, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 234, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 48, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 109, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 260, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 188, 11, 161, -82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -88, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 163, -5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 261, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 228, -4,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -93, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -54, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, -2, 160, -2, -49, 4,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimFTiltHigh_joint22[152] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 442, 122,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 32), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 894, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 686, -255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 383, -343,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -189,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 436, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 585, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 457, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, -15,
	ftAnimEnd(),
	0x200E, 0x008E, 0xFFC3, 0x00C1, 0xFFCC, 0xFF2C, 0x0016, 0x2803, 0x0003, 0xFF8B, 0x001A, 0x2809, 0x0005, 0x0045, 0x0004, 0x2005, 0x0002, 0xFFF6, 0xFF66, 0x2005, 0x0001, 0xFF59, 0x002A, 0x2007, 0x0001, 0xFFE9, 0x0030, 0x004A, 0x007E, 0x2803, 0x0004, 0xFFEC, 0x0019, 0x2005, 0x0001, 0x0054, 0xFFFA, 0x2805, 0x0007, 0x0027, 0x000C, 0x2009, 0x0001, 0x0045, 0xFFFE, 0x2809, 0x0019, 0xFF2C, 0xFFFF, 0x0801, 0x0002, 0x2003, 0x0001, 0x0006, 0x000C, 0x2803, 0x000C, 0xFFF0, 0x0001, 0x0801, 0x0003, 0x2005, 0x0001, 0x0034, 0x000C, 0x2805, 0x0012, 0x00C1, 0x0000, 0x0801, 0x0008, 0x2003, 0x0001, 0xFFEA, 0xFFF8, 0x2003, 0x0009, 0x0089, 0x000A, 0x200F, 0x0001, 0x008E, 0x0005, 0x00C1, 0x0000, 0xFF2C, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
