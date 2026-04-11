/* AnimJoint data for relocData file 610 (FTMarioAnimFTiltHigh) */
/* 3552 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimFTiltHigh_joint1[110];
extern u16 dFTMarioAnimFTiltHigh_joint2[78];
extern u16 dFTMarioAnimFTiltHigh_joint4[54];
extern u16 dFTMarioAnimFTiltHigh_joint5[190];
extern u16 dFTMarioAnimFTiltHigh_joint6[78];
extern u16 dFTMarioAnimFTiltHigh_joint7[14];
extern u16 dFTMarioAnimFTiltHigh_joint8[62];
extern u16 dFTMarioAnimFTiltHigh_joint10[56];
extern u16 dFTMarioAnimFTiltHigh_joint11[144];
extern u16 dFTMarioAnimFTiltHigh_joint12[46];
extern u16 dFTMarioAnimFTiltHigh_joint13[8];
extern u16 dFTMarioAnimFTiltHigh_joint15[8];
extern u16 dFTMarioAnimFTiltHigh_joint16[176];
extern u16 dFTMarioAnimFTiltHigh_joint18[46];
extern u16 dFTMarioAnimFTiltHigh_joint20[204];
extern u16 dFTMarioAnimFTiltHigh_joint21[220];
extern u16 dFTMarioAnimFTiltHigh_joint23[234];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimFTiltHigh_joints[] = {
	(u32)dFTMarioAnimFTiltHigh_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimFTiltHigh_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimFTiltHigh_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimFTiltHigh_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimFTiltHigh_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimFTiltHigh_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimFTiltHigh_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimFTiltHigh_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimFTiltHigh_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimFTiltHigh_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimFTiltHigh_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimFTiltHigh_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimFTiltHigh_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimFTiltHigh_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimFTiltHigh_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimFTiltHigh_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimFTiltHigh_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	0xFFFF031F, /* [23] END */
};

/* Joint 1 */
u16 dFTMarioAnimFTiltHigh_joint1[110] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_TRAY), 223, 18, 540, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAY, 9), -1740, -196, 584, 34,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 12), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 7), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 960, 2559,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -1740, 584, 960,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -1740, 584, 960,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -1740, -96, 0, 4, 584, -26, 960, -670,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAY, 12), -2993, -41, 540, -31,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 13), -213, -255,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 4), -604, -388,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 6), -485, 604,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 2), 0, 1406,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 18), -2993,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 42, 72, 533, -3,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 17), 3, 94,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 27, -39, 539, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 27, 539,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 27, 539,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 27, -18, 539, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 12), -2, -16, 540, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimFTiltHigh_joint2[78] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -71, -790, -95,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 0, 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 0, -27, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 0, 0, -44, -94, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 0, 0, -177, -266,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 3), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 16), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 0, -177,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 0, -177,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 0, 0, -177, 109,
	ftAnimSetValRateT(FT_ANIM_TRAX, 13), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 12), 0, 71,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTMarioAnimFTiltHigh_joint4[54] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 208, -3, 258, -249, 110, -16,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -7, -21, 234, -2, -856, -96,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -7, 234, -856,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -7, 234, -856,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -7, 42, 234, 1, -856, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 540, 7, 257, 0, 70, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 208, -17, 258, 0, 110, 2,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimFTiltHigh_joint5[190] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1475, -17, -1308, 22, 1336, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1441, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -1538, -7, -1058, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1548, 60, -1063, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1418, 0, -672, 547,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1547, -95, 30, 413, 1365, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1374, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1598, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 155, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 156, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 160, -105,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1374, 81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1703, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1546, -18, -52, -193,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1739, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -432, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1721, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1858, 56,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1778, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2092, -74,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -450, -90, 1925, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -759, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2128, -322, 1883, 257,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3364, -313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2441, 579,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -638, 60, 3042, 300,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 5), -638,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3364, 0, 3042, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 3126, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -3203, 27,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -638, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -336, 33,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3144, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 3014, -56,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3176, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -3122, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3083, 38, -300, 36, 2944, -70,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTMarioAnimFTiltHigh_joint6[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -182, -94,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -662, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -662, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1085, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1064, 237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -610, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -610, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -610, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -610, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -631, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -762, -65,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), -762,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -762, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -338, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 156,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTMarioAnimFTiltHigh_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -625,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 43), -625, 14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimFTiltHigh_joint8[62] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 201, 0, -4, -11, 176, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 169, -51, -635, -30, 202, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -259, -85, -277, 71, 888, 137,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -259, -277, 888,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -259, -277, 888,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -259, 9, -277, 45, 888, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -133, 15, 319, 9, -123, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 201, 17, -4, -17, 176, 15,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimFTiltHigh_joint10[56] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -221, 4, 139, -5, -209, 1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 47, 26, -156, -29, -100, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 47, -156, -100,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 47, -156, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 47, -15, -156, 17, -100, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -159, -8, 71, 9, -184, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -221, -2, 139, 2, -209, 0,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimFTiltHigh_joint11[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1164, 30, 1056, 47, -1542, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1135, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1134, -47, -1499, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1259, -64, -1632, -64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1517, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1174, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1169, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1185, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1498, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1508, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1170, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1182, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1230, -80, 1134, -66, -1575, -105,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1117, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1342, -28, -1719, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1286, 65, -1669, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -774, 34, -1202, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -742, 29, -1178, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), -791, -30, -1215, -26,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 1112,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 993, -34,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -827, -47, -1247, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1044, -102, -1426, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 958, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1106, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1082, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1174, -130, 1044, -37, -1555, -129,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTMarioAnimFTiltHigh_joint12[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -811, 99,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -711, 296,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -219, 351,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -508, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -671, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -773, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -828, -55,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimFTiltHigh_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 625, 0, 0,
	ftAnimBlock(0, 43),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTMarioAnimFTiltHigh_joint15[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, -804, 0,
	ftAnimBlock(0, 43),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTMarioAnimFTiltHigh_joint16[176] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1473, -8, -1377, -1, -1563, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1711, -140,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1320, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1501, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1315, 143,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1097, -108,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1857, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1253, 97, -1707, 283, -1301, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1516, 132, -1290, 208, -1201, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 1519, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1290, -1201,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1497, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1337, -115,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -1290,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1261, 53,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1561, 113,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1814, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1451, -70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1248, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1216, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1219, -43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1768, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1693, 114,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1386, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1848, -107, -1284, -8, -1642, -141,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1106, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1478, -78, -1669, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1694, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1691, 182,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1868, 34,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1123, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1354, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1898, 2, -1746, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), 1481, -25, -1589, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1459, -21, -1375, -20, -1556, 32,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTMarioAnimFTiltHigh_joint18[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 400, -45,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 229, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 193, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 303, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 438, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -38,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTMarioAnimFTiltHigh_joint20[204] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -212, 23, -11, 39, -156, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -46, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -81, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 4, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 41, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -22, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -7, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 15, -195, 0, -106, -102, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -397, -203, -236, -118, 312, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -390, 7, -236, 0, 312, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 312, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -293, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -382, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -366, -40,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 271, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 756, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -445, -199,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1085, -241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -294, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -221, -38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1249, -131, 763, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 477, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1068, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -804, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -754, 128, -272, -38, 410, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -548, 240, -297, 121, 523, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -274, 28, -30, 77, 444, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 315, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -490, -188, -142, -86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -610, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -203, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -110, 19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 233, -73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -164, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -569, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -225, 16,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -89, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -2, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -211, 13, 0, 2, -160, 3,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimFTiltHigh_joint21[220] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1408, 58, 1421, 20, -1572, -9,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1627, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -621, 94,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4095, 227, 4096, 455, 4096, 455,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1537, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1650, -101,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1870, -59,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1638, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1621, -103,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -527, 221, -1929, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -177, 45, 1431, -143, -2282, -520,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_SCAX, 1), -437, -130, -2970, -345, 5120, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1334, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 6144, 6144,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -437, 0,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2972, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2970, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -3057, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -437, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -531, -56,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 31), 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1295, -50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 885, -38,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -606, -174, -3147, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -880, -442, -3450, -476,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1491, -391, 896, 43, -4100, -435,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1310, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1643, -4, -4432, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1682, 18, -4618, -113,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -4764, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1605, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1699, -94,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1680, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1310, 0, -4840, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1398, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -4887, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4892, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -4826, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1644, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1451, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1415, 35, 1415, 16, -4804, 22,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimFTiltHigh_joint23[234] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, -83,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 247, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 321, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 727, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 727, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 516, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 467, -48,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0059, 0xFFDC, 0xFFA3, 0xFFFA, 0xFF2C, 0x000A, 0x200F, 0x0002, 0xFFEE, 0xFF8A, 0xFF83, 0xFFC1, 0xFF62, 0x0090, 0x200F, 0x0001, 0xFF47, 0xFDA6, 0xFF1E, 0x0000, 0x0056, 0x023B, 0x2805, 0x0002, 0xFFDF, 0x003A, 0x200B, 0x0001, 0xFB3A, 0xFD83, 0x03D9, 0x0211, 0x200B, 0x0001, 0xFA4C, 0xFF5C, 0x047A, 0x005F, 0x2809, 0x0003, 0x03F7, 0xFEEF, 0x2007, 0x0001, 0xF9F0, 0xFFA1, 0xFFF7, 0x0010, 0x2805, 0x0006, 0xFFCB, 0x0001, 0x2003, 0x0001, 0xF98E, 0xFE8A, 0x2003, 0x0001, 0xF703, 0xFDF1, 0x200B, 0x0001, 0xF56F, 0xFF31, 0x0274, 0xFF44, 0x200B, 0x0001, 0xF564, 0xFFFA, 0x027E, 0x000C, 0x200B, 0x0001, 0xF562, 0x0000, 0x028E, 0x000C, 0x2803, 0x0006, 0xF431, 0xFF7C, 0x2809, 0x0009, 0x0197, 0xFFCA, 0x0801, 0x0001, 0x2005, 0x0001, 0xFFCB, 0xFFFB, 0x2805, 0x000A, 0xFFEA, 0x0052, 0x0801, 0x0004, 0x2003, 0x0001, 0xF3AB, 0xFF8A, 0x2803, 0x0004, 0xF364, 0x0087, 0x0801, 0x0002, 0x2009, 0x0001, 0x015A, 0xFFB0, 0x2809, 0x0005, 0xFF0C, 0xFFC4, 0x0801, 0x0001, 0x2003, 0x0001, 0xF411, 0x0092, 0x2803, 0x0003, 0xF4C6, 0x0039, 0x2005, 0x0001, 0x0042, 0x004A, 0x2805, 0x0012, 0xFFBB, 0xFFE9, 0x0801, 0x0002, 0x200B, 0x0001, 0xF505, 0x002A, 0xFECA, 0xFFD7, 0x2803, 0x000E, 0xF3F3, 0xFFE8, 0x2009, 0x000A, 0xFEF2, 0x0009, 0x2009, 0x0001, 0xFEFB, 0x0008, 0x2809, 0x0004, 0xFF1C, 0x0007, 0x0801, 0x0003, 0x2003, 0x0001, 0xF3DC, 0xFFEC, 0x200F, 0x0001, 0xF3C9, 0xFFEE, 0xFFA4, 0xFFEA, 0xFF24, 0x0007, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
