/* AnimJoint data for relocData file 691 (FTFoxAnimTechB) */
/* 3296 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimTechB_joint1[18];
extern u16 dFTFoxAnimTechB_joint2[144];
extern u16 dFTFoxAnimTechB_joint3[48];
extern u16 dFTFoxAnimTechB_joint5[52];
extern u16 dFTFoxAnimTechB_joint6[168];
extern u16 dFTFoxAnimTechB_joint7[70];
extern u16 dFTFoxAnimTechB_joint8[20];
extern u16 dFTFoxAnimTechB_joint9[52];
extern u16 dFTFoxAnimTechB_joint11[10];
extern u16 dFTFoxAnimTechB_joint12[162];
extern u16 dFTFoxAnimTechB_joint13[78];
extern u16 dFTFoxAnimTechB_joint14[44];
extern u16 dFTFoxAnimTechB_joint16[34];
extern u16 dFTFoxAnimTechB_joint17[142];
extern u16 dFTFoxAnimTechB_joint19[56];
extern u16 dFTFoxAnimTechB_joint21[104];
extern u16 dFTFoxAnimTechB_joint22[132];
extern u16 dFTFoxAnimTechB_joint24[52];
extern u16 dFTFoxAnimTechB_joint25[112];
extern u16 dFTFoxAnimTechB_joint26[52];
extern u16 dFTFoxAnimTechB_joint27[44];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTFoxAnimTechB_joints[] = {
	(u32)dFTFoxAnimTechB_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimTechB_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimTechB_joint3, /* [2] joint 3 */
	(u32)dFTFoxAnimTechB_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTFoxAnimTechB_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimTechB_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimTechB_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimTechB_joint9, /* [8] joint 9 */
	(u32)dFTFoxAnimTechB_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTFoxAnimTechB_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimTechB_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimTechB_joint14, /* [13] joint 14 */
	(u32)dFTFoxAnimTechB_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTFoxAnimTechB_joint17, /* [16] joint 17 */
	(u32)dFTFoxAnimTechB_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTFoxAnimTechB_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTFoxAnimTechB_joint22, /* [21] joint 22 */
	(u32)dFTFoxAnimTechB_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTFoxAnimTechB_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimTechB_joint26, /* [25] joint 26 */
	(u32)dFTFoxAnimTechB_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTFoxAnimTechB_joint1[18] = {
	ftAnimSetVal(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 6), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -3200,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 24), -4800,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), -4800,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimTechB_joint2[144] = {
	ftAnimSetValAfter(FT_ANIM_ROTY), 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY), 8042, 48, 840,
	ftAnimSetValBlock(FT_ANIM_ROTZ | FT_ANIM_TRAZ), 0, -20,
	ftAnimSetValT(FT_ANIM_ROTZ | FT_ANIM_TRAZ, 6), 0, -20,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), 8042,
	ftAnimSetValRateT(FT_ANIM_TRAX, 6), 48, -31,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 780,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 840,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 5227, -861, 9, -62, 360, 96,
	ftAnimSetValBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAZ, 4), 0, -13,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 11,
	ftAnimSetValRateT(FT_ANIM_TRAY, 1), 900, 480,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2010, -714,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 9, -13,
	ftAnimSetValRateT(FT_ANIM_TRAY, 1), 480, -2640,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 11), 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), -13,
	ftAnimSetValRateT(FT_ANIM_TRAY, 1), 240, -479,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), -13,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 360, 2639, -13, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 1), 900, -159,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1206, -321, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), -13,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 7), -13,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 300, -1080,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 360, 960,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -2814, -95, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 900, 640,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 840, -548,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 9, -1, -13, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 9, -13,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 9, 21, 420, 38, -13, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), -3216, 0, 48, 912, -20,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTFoxAnimTechB_joint3[48] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -141, -338,
	ftAnimSetValBlock(FT_ANIM_ROTZ), -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -141, 14, -338, 33,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 6), -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 0, 17, 0, 42,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -5, 0, -13, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), -141, -338, -3,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimTechB_joint5[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 156, 81,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 309, -12, 156, -15, 81, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 187, -15, 0, -19, 0, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 187, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 187, 14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 402, 5, 0, 7, 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 309, 156, 81,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTFoxAnimTechB_joint6[168] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -964, 3, -1548, 1, -166, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -964, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1541, -2, -191, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1544, 186, -165, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1031, -143, -1169, 223, 99, 418,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1252, -57, -1097, -49, 671, 434,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1600, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 960, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1147, 84,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1080, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1583, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1503, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 979, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 618, -107,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1079, 0, -1516, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -899, 73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1133, -3,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 511, -96,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 483, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -828, 66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -849, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1138, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1115, -69,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 739, 241,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1309, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -984, -117,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1473, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1178, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1435, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1548, 204,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1857, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1614, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1710, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1718, -7, -1442, -6, 1867, 9,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimTechB_joint7[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -358,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -717, -523,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1054, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -316, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -349, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -537, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -516, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -688, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -635, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -559, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -640, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -579, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -642, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -587, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 29,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimTechB_joint8[20] = {
	ftAnimSetVal(FT_ANIM_ROTY), 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 269, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 14), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 21), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTFoxAnimTechB_joint9[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -616, 136, -72,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -616, 101, 136, -13, -72, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 402, 127, 0, -17, 0, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 402, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 402, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 187, -24, 0, 6, 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -113, 136, -72,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTFoxAnimTechB_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimTechB_joint12[162] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1211, -3, 1633, -4, -143, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1211, -15, 1633, 15, -143, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1163, 6, 1657, -155, -68, 337,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1176, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1322, -161, 531, 505,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1334, 84, 942, 245,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1596, 45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1002, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1140, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1114, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1581, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1396, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1019, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1067, 17,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1140, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1341, -17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1081, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1101, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1375, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1368, 74,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1094, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1307, 0, 1490, 62, 964, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 1399, 15, 1468, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1029, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1173, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1416, 67, 1437, -59, 1236, 179,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1717, 46, 1331, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1760, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1898, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1741, 23, 1336, 4, 1945, 47,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimTechB_joint13[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -432,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -865, -445,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -891, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -342, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -374, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -562, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -477, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -378, 235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -341, -253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -514, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -579, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, -15,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTFoxAnimTechB_joint14[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 272, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 0, 272, 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 3, 104, 272, 0, 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 272, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 625,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), 536, -22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 14), 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimTechB_joint16[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, -178, 2412,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 60, -60, 12,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 8), -804,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 30), 2412,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -1072, -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 18), -1072, -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -804, 1608,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimTechB_joint17[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -409, -1, -108, 12, 135, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -386, 56, -17, -213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -27, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -108, -103,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -269, 137,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -297, 178, -291, -404,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 131, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -826, -430,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -79, 113, -1151, -193,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1175, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -79, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 154, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 174, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1151, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -1303, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -76, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -265, -21,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 183, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -40, -144,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -288, -54, -1310, 66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -505, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -360, 147,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -191, -126,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -402, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -461, 52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -240, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -240, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -44, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -405, -3, -223, 16, -26, 17,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimTechB_joint19[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 432, -35,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 165, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 197, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 432, 289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1301, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1242, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1244, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1244, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 1170, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1134, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 396, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -42,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTFoxAnimTechB_joint21[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1557, -3, 1482, 0, -1664, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), 1436, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -1527, 17, -1843, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1504, -75, -1947, -83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2017, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1678, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1734, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1678, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1678, 0, -2020, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1486, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -1765, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1434, -14, -1744, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1866, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1439, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1482, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1560, -2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1831, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1684, 33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1462, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1477, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1561, -1, 1482, 5, -1664, 20,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimTechB_joint22[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1805, 9, 1296, 5, 1824, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1193, -112,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1583, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1824, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1632, -304,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 673, -378,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1070, 48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1529, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1436, -52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1493, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 456, -126,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 456, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1570, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1531, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1491, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1687, 44,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 452, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 831, 88,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1531, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1560, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1730, 40, 919, 86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1940, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 1727, 26,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1557, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 1415, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1437, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1957, 11, 1459, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1963, 6, 1470, 10, 1743, 15,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimTechB_joint24[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 584, -26,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 584, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 876, 308,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1346, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1242, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1231, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1225, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 1260, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1225, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 474, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 375, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -43,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTFoxAnimTechB_joint25[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 46, 0, -102, 0, -226, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -317, -53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), 52, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 73, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 97, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -34, -22, -369, -42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -497, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 52, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 62, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 68, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -197, -2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -541, -46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -770, 72,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 89, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 82, -43,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -197, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 40, -38, -693, 78,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -98, -7, -251, 40,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 10, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 16, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16, 0, -102, -4, -226, 24,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimTechB_joint26[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -178, 223,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 27), 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 241, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 241, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 758, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 394, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 742, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 210, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 543, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 82, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -460, -6, 223, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 0, 219,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTFoxAnimTechB_joint27[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -404, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 34), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 261, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 520, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 19), 520,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 520, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 207, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -447, -64, 0, -20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -178, -122,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
