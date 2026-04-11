/* AnimJoint data for relocData file 652 (FTFoxAnimJumpF) */
/* 2192 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimJumpF_joint1[74];
extern u16 dFTFoxAnimJumpF_joint2[14];
extern u16 dFTFoxAnimJumpF_joint4[36];
extern u16 dFTFoxAnimJumpF_joint5[172];
extern u16 dFTFoxAnimJumpF_joint7[56];
extern u16 dFTFoxAnimJumpF_joint8[42];
extern u16 dFTFoxAnimJumpF_joint10[10];
extern u16 dFTFoxAnimJumpF_joint11[180];
extern u16 dFTFoxAnimJumpF_joint12[56];
extern u16 dFTFoxAnimJumpF_joint13[28];
extern u16 dFTFoxAnimJumpF_joint15[10];
extern u16 dFTFoxAnimJumpF_joint16[66];
extern u16 dFTFoxAnimJumpF_joint18[56];
extern u16 dFTFoxAnimJumpF_joint20[74];
extern u16 dFTFoxAnimJumpF_joint21[50];
extern u16 dFTFoxAnimJumpF_joint23[32];
extern u16 dFTFoxAnimJumpF_joint24[56];
extern u16 dFTFoxAnimJumpF_joint25[32];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimJumpF_joints[] = {
	(u32)dFTFoxAnimJumpF_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimJumpF_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimJumpF_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimJumpF_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimJumpF_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTFoxAnimJumpF_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimJumpF_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimJumpF_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimJumpF_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimJumpF_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimJumpF_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimJumpF_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimJumpF_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimJumpF_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimJumpF_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimJumpF_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimJumpF_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimJumpF_joint25, /* [24] joint 25 */
	0xFFFF0219, /* [25] END */
};

/* Joint 1 */
u16 dFTFoxAnimJumpF_joint1[74] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 960, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 994, -373,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1255, 678, -237, 761,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1333, -12, 6, 1012,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1249, -615, 268, 778,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1026, -966, 395, 196,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 766, -755, 366, -328,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 648, -201, 231, -521,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 665, 162, 105, -406,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 729, 253, 28, -211,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 791, 233, 0, -37,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 14), 960,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimJumpF_joint2[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 223,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 32), 3216,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimJumpF_joint4[36] = {
	ftAnimSetValAfter(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTX), -178, 57,
	ftAnimSetValBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValT(FT_ANIM_ROTY, 20), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 0, 61,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 402, 79,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), 402,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 20), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 10), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 10), -268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimJumpF_joint5[172] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -26, -88, -200, -80, 477, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 228, -192,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -390, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -189, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -13, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 249, 181, -34, -238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 348, 264, -248, -315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 778, 232, -664, -256,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -800, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 813, 13, -242, 159,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -37, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 795, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -809, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -764, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -11, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), -15, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 797, -7, -33, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 607, -180, -435, -124,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -724, 85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -196, 127,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 373, -222, -522, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -578, -63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 93, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -121, 82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -55, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -630, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -439, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 101, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 29, 47,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -468, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -466, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 112, 182, -212, -244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 394, 222, -543, -259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 557, 163, -338, 128, -731, -187,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimJumpF_joint7[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -119,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -609, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -642, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -757, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -732, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -617, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -631, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -870, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -828, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -621, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -614, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -289, 273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 289,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTFoxAnimJumpF_joint8[42] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -178, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 8), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 22), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 22), 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), -7,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 5), -17,
	ftAnimSetValT(FT_ANIM_ROTX, 10), 178,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 5), 134,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 0, 7,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 5), 268,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimJumpF_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimJumpF_joint11[180] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1635, 110, 1408, -70, 2086, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1860, -195,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1208, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1815, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1639, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1376, -185, 1594, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1269, -272, 1372, -325,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 830, -237, 944, -262,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 807, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 794, -13, 1358, 160,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1563, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 812, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 799, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 790, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1588, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), 1584, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 810, 6, 1561, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 1013, 219, 1146, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 817, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1057, 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1314, 293, 1054, -28, 1351, 270,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1658, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1677, 10, 1041, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1620, -123, 995, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1375, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 987, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1493, -138,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1503, 208,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1406, 113,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2137, 177,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 991, 18, 1770, 229,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1046, -3, 2087, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2265, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2321, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2336, 14, 1040, -5, 2059, -27,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimJumpF_joint12[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -186,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -656, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -771, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -687, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -675, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -632, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -657, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -946, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -852, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -378, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -424, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -401, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -389, 12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimJumpF_joint13[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 8), 1340,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 14), 1340,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 18), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTFoxAnimJumpF_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimJumpF_joint16[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1, 0, -6, 0, 117, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 39), 0, 0, -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 125, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -361, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -526, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -612, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -600, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -320, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -262, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -4, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 45, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 28, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, -6, 0, 25, -3,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimJumpF_joint18[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 5, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 5, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 298, 222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 896, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1010, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 1139, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1098, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 359, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 262, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimJumpF_joint20[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 16, 10, -87, -1, 535, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -22, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), -94, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 4, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -46, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -47, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -15, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -59, -11,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -41, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 464, 13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -49, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 34, 26,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 476, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 493, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 60, 26, -94, 0, 493, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimJumpF_joint21[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -7, 0, 8, 0, -368, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 39), -15, 0, 1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -219, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -271, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -621, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -619, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -692, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -706, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -762, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -15, 0, 1, 0, -763, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimJumpF_joint23[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 952, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1207, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1226, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 1142, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1132, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1015, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1013, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimJumpF_joint24[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1592, -12, 1511, 0, 1434, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), 1512, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), 1486, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 1582, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1606, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), 1502, -1,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1501, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1406, -1,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1509, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1569, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1612, 42, 1486, 0, 1405, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimJumpF_joint25[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -580,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 40), 178,
	ftAnimEnd(),
	0x0000, 0x4002, 0xFF7A, 0x480C, 0x0000, 0x0000, 0x2003, 0x0008, 0xFF7A, 0xFFE8, 0x2003, 0x0004, 0xFE51, 0x000D, 0x3803, 0x001C, 0x0138, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
