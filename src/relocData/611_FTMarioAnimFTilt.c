/* AnimJoint data for relocData file 611 (FTMarioAnimFTilt) */
/* 3504 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimFTilt_joint1[110];
extern u16 dFTMarioAnimFTilt_joint2[78];
extern u16 dFTMarioAnimFTilt_joint4[54];
extern u16 dFTMarioAnimFTilt_joint5[190];
extern u16 dFTMarioAnimFTilt_joint6[78];
extern u16 dFTMarioAnimFTilt_joint7[14];
extern u16 dFTMarioAnimFTilt_joint8[62];
extern u16 dFTMarioAnimFTilt_joint10[56];
extern u16 dFTMarioAnimFTilt_joint11[138];
extern u16 dFTMarioAnimFTilt_joint12[46];
extern u16 dFTMarioAnimFTilt_joint13[8];
extern u16 dFTMarioAnimFTilt_joint15[8];
extern u16 dFTMarioAnimFTilt_joint16[176];
extern u16 dFTMarioAnimFTilt_joint18[46];
extern u16 dFTMarioAnimFTilt_joint20[204];
extern u16 dFTMarioAnimFTilt_joint21[204];
extern u16 dFTMarioAnimFTilt_joint23[54];
extern u16 dFTMarioAnimFTilt_joint24[178];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimFTilt_joints[] = {
	(u32)dFTMarioAnimFTilt_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimFTilt_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimFTilt_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimFTilt_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimFTilt_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimFTilt_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimFTilt_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimFTilt_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimFTilt_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimFTilt_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimFTilt_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimFTilt_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimFTilt_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimFTilt_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimFTilt_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimFTilt_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimFTilt_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTMarioAnimFTilt_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimFTilt_joint1[110] = {
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
u16 dFTMarioAnimFTilt_joint2[78] = {
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
u16 dFTMarioAnimFTilt_joint4[54] = {
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
u16 dFTMarioAnimFTilt_joint5[190] = {
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
u16 dFTMarioAnimFTilt_joint6[78] = {
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
u16 dFTMarioAnimFTilt_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -625,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 43), -625, 14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimFTilt_joint8[62] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 201, 0, -4, -11, 176, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 169, -16, -635, -16, 202, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 51, -23, -149, 97, 816, 122,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 51, -149, 816,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 51, -149, 816,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 51, -14, -149, 36, 816, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -133, 5, 319, 4, -123, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 201, 17, -4, -17, 176, 15,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimFTilt_joint10[56] = {
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
u16 dFTMarioAnimFTilt_joint11[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1164, 30, 1056, 47, -1542, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1135, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1134, -47, -1499, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1259, -67, -1632, -68,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1185, 16, -1517, 28,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1169, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1185, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1174, 7, -1498, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -1182, -23, -1508, -33,
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
u16 dFTMarioAnimFTilt_joint12[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -811, 99,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -711, 296,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -219, 355,
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
u16 dFTMarioAnimFTilt_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 625, 0, 0,
	ftAnimBlock(0, 43),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTMarioAnimFTilt_joint15[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, -804, 0,
	ftAnimBlock(0, 43),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTMarioAnimFTilt_joint16[176] = {
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
u16 dFTMarioAnimFTilt_joint18[46] = {
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
u16 dFTMarioAnimFTilt_joint20[204] = {
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
u16 dFTMarioAnimFTilt_joint21[204] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 200, 51, 187, -9, 35, -31,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 927, 100, -46, -1,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4095, 227, 4096, 455, 4096, 455,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -52, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -153, -87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -320, -67,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1009, 76, -36, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 216, 318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1080, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1493, 249, -414, -283,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX, 1), 623, 203, -888, -231, 5120, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1590, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 6144, 6144,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 623, 0, -877, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -828, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1590, 0, 623, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1675, 58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 686, -48,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 31), 4096, 4096, 4096,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1731, 156, -795, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1988, 508, -561, 484,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2748, 526, 173, 500,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 3160, 24, 503, -12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 635, -58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 297, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3171, -15, 469, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 3116, 44, 170, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3219, 4, 167, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 3004, -13, -29, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 298, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 209, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3004, 0, -29, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 13), 3374, 36, -1, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3409, 35, 193, -16, 21, 22,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimFTilt_joint23[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, -34,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 403, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 69, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 310, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 321, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 687, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 727, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 516, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 467, -48,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimFTilt_joint24[178] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 89, -42, -93, -6, -212, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -35, -130, -127, -67, -160, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -213, -607, -235, -3, 77, 580,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -36, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1250, -625, 999, 537,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1464, -154, 1153, 89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1650, -326,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 997, -287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -10, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -34, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2211, -649,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2949, -372, 598, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2956, -9, 607, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -3181, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 623, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 406, -53,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -47, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -22, 82,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3243, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -3220, 151,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 346, -80,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -244, -60,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3023, 151,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2874, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 65, 74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -69, -23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2811, 42, -310, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -3085, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -270, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -261, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -228, 7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3108, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3127, -18, -92, -22, -220, 7,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
