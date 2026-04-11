/* AnimJoint data for relocData file 568 (FTMarioAnimThrownDK) */
/* 1232 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimThrownDK_joint2[22];
extern u16 dFTMarioAnimThrownDK_joint3[24];
extern u16 dFTMarioAnimThrownDK_joint5[24];
extern u16 dFTMarioAnimThrownDK_joint6[70];
extern u16 dFTMarioAnimThrownDK_joint7[16];
extern u16 dFTMarioAnimThrownDK_joint8[16];
extern u16 dFTMarioAnimThrownDK_joint9[18];
extern u16 dFTMarioAnimThrownDK_joint11[18];
extern u16 dFTMarioAnimThrownDK_joint12[78];
extern u16 dFTMarioAnimThrownDK_joint13[16];
extern u16 dFTMarioAnimThrownDK_joint14[14];
extern u16 dFTMarioAnimThrownDK_joint16[8];
extern u16 dFTMarioAnimThrownDK_joint17[48];
extern u16 dFTMarioAnimThrownDK_joint19[36];
extern u16 dFTMarioAnimThrownDK_joint21[36];
extern u16 dFTMarioAnimThrownDK_joint22[52];
extern u16 dFTMarioAnimThrownDK_joint24[70];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTMarioAnimThrownDK_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTMarioAnimThrownDK_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimThrownDK_joint3, /* [2] joint 3 */
	(u32)dFTMarioAnimThrownDK_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTMarioAnimThrownDK_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimThrownDK_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimThrownDK_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimThrownDK_joint9, /* [8] joint 9 */
	(u32)dFTMarioAnimThrownDK_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTMarioAnimThrownDK_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimThrownDK_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimThrownDK_joint14, /* [13] joint 14 */
	(u32)dFTMarioAnimThrownDK_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTMarioAnimThrownDK_joint17, /* [16] joint 17 */
	(u32)dFTMarioAnimThrownDK_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTMarioAnimThrownDK_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTMarioAnimThrownDK_joint22, /* [21] joint 22 */
	(u32)dFTMarioAnimThrownDK_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF011F, /* [24] END */
};

/* Joint 2 */
u16 dFTMarioAnimThrownDK_joint2[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_TRAX), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1608, -1608, 0, 215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 6), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 6), 0, 0,
	ftAnimLoop(0x6800, -42),
};

/* Joint 3 */
u16 dFTMarioAnimThrownDK_joint3[24] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -17, 0, -53, 2, -89, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 17, 53, 89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -17, -53, -89,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimThrownDK_joint5[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 11, 0, -11, 268, -22,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 268,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimThrownDK_joint6[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2056, 43, -1541, 33, -1833, -83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1292, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 2422, 210, -2354, -286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2629, 150, -2645, -222,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 2622, -172, -2635, 252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1308, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1312, -74,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2378, -232, -2295, 319,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2075, -50, -1868, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1433, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1516, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2056, -18, -1544, -28, -1836, 31,
	ftAnimLoop(0x6800, -136),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimThrownDK_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 9,
	ftAnimLoop(0x6800, -30),
};

/* Joint 8 */
u16 dFTMarioAnimThrownDK_joint8[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), -625, -12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), -625,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTMarioAnimThrownDK_joint9[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 446, 67,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 288, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 446,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 446,
	ftAnimLoop(0x6800, -32),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimThrownDK_joint11[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetValRate(FT_ANIM_ROTY), 0, 14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), 0,
	ftAnimLoop(0x6800, -34),
};

/* Joint 12 */
u16 dFTMarioAnimThrownDK_joint12[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -487, 59, 290, 12, -1016, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -91, 182,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 273, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -810, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -518, 290,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -227, -213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 65, 96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 101, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 203, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 348, -26,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 68, -97,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -447, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -519, -297,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -977, -97,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 303, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -487, -39, 290, -13, -1016, -38,
	ftAnimLoop(0x6800, -152),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimThrownDK_joint13[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -9,
	ftAnimLoop(0x6800, -30),
};

/* Joint 14 */
u16 dFTMarioAnimThrownDK_joint14[14] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 625, -25, 0, -2, 0, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 625, 0, 0,
	ftAnimLoop(0x6800, -26),
};

/* Joint 16 */
u16 dFTMarioAnimThrownDK_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, -804, 0,
	ftAnimBlock(0, 12),
	ftAnimLoop(0x6800, -14),
};

/* Joint 17 */
u16 dFTMarioAnimThrownDK_joint17[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1590, 1, -1446, 3, -2138, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1425, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1628, -62, -1856, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1702, -55, -1676, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1556, -3, -2141, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1575, -17, -1441, -10, -2156, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1590, -15, -1446, -5, -2138, 18,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTMarioAnimThrownDK_joint19[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 363, 33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 548, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 640, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 443, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 517, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 602, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 457, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 363, -93,
	ftAnimLoop(0x6800, -70),
};

/* Joint 21 */
u16 dFTMarioAnimThrownDK_joint21[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -118, 4, -11, -2, -156, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -11, 0, -156, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -146, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -123, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -114, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -118, -3, -11, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -156,
	ftAnimLoop(0x6800, -70),
};

/* Joint 22 */
u16 dFTMarioAnimThrownDK_joint22[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 116, -20, 150, 9, 23, -77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 159, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 72, 32, -585, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 97, 0, -583, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 55, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -415, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -229, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 96, 30, -55, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 116, 20, 150, -9, 23, 79,
	ftAnimLoop(0x6800, -100),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimThrownDK_joint24[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, 83,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 684, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 576, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 651, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 519, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, -80,
	ftAnimLoop(0x6800, -54),
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1672, -8, -1514, 0, 1395, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 11), -1514,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1395, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 1613, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1632, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1663, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1672, 8, 1395, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -1514,
	ftAnimLoop(0x6800, -72),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
