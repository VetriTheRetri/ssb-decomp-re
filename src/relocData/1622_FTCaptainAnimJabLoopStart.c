/* AnimJoint data for relocData file 1622 (FTCaptainAnimJabLoopStart) */
/* 1264 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimJabLoopStart_joint1[12];
extern u16 dFTCaptainAnimJabLoopStart_joint2[20];
extern u16 dFTCaptainAnimJabLoopStart_joint3[28];
extern u16 dFTCaptainAnimJabLoopStart_joint5[28];
extern u16 dFTCaptainAnimJabLoopStart_joint6[54];
extern u16 dFTCaptainAnimJabLoopStart_joint7[28];
extern u16 dFTCaptainAnimJabLoopStart_joint8[20];
extern u16 dFTCaptainAnimJabLoopStart_joint9[26];
extern u16 dFTCaptainAnimJabLoopStart_joint11[26];
extern u16 dFTCaptainAnimJabLoopStart_joint12[50];
extern u16 dFTCaptainAnimJabLoopStart_joint13[24];
extern u16 dFTCaptainAnimJabLoopStart_joint14[14];
extern u16 dFTCaptainAnimJabLoopStart_joint15[12];
extern u16 dFTCaptainAnimJabLoopStart_joint17[26];
extern u16 dFTCaptainAnimJabLoopStart_joint18[34];
extern u16 dFTCaptainAnimJabLoopStart_joint20[24];
extern u16 dFTCaptainAnimJabLoopStart_joint22[50];
extern u16 dFTCaptainAnimJabLoopStart_joint23[44];
extern u16 dFTCaptainAnimJabLoopStart_joint25[60];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTCaptainAnimJabLoopStart_joints[] = {
	(u32)dFTCaptainAnimJabLoopStart_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimJabLoopStart_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimJabLoopStart_joint3, /* [2] joint 3 */
	(u32)dFTCaptainAnimJabLoopStart_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTCaptainAnimJabLoopStart_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimJabLoopStart_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimJabLoopStart_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimJabLoopStart_joint9, /* [8] joint 9 */
	(u32)dFTCaptainAnimJabLoopStart_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTCaptainAnimJabLoopStart_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimJabLoopStart_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimJabLoopStart_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimJabLoopStart_joint15, /* [14] joint 15 */
	(u32)dFTCaptainAnimJabLoopStart_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTCaptainAnimJabLoopStart_joint18, /* [17] joint 18 */
	(u32)dFTCaptainAnimJabLoopStart_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTCaptainAnimJabLoopStart_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTCaptainAnimJabLoopStart_joint23, /* [22] joint 23 */
	(u32)dFTCaptainAnimJabLoopStart_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF0126, /* [25] END */
};

/* Joint 1 */
u16 dFTCaptainAnimJabLoopStart_joint1[12] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 55), 0,
	ftAnimBlock(0, 6),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimJabLoopStart_joint2[20] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1462, -529, 366, -90,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 36,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1360, -56, 299, 236,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 1419, 52, 544, 428,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTCaptainAnimJabLoopStart_joint3[28] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, -76, 9,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 140, 57, 162, -5, -121, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 140, 38, 162, 73, -121, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 373, 54, 601, 55, 187, 64,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimJabLoopStart_joint5[28] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -31, 47,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 146, -35, -164, -14, 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 204, -17, -416, -24, -99, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 41, -18, -310, 19, -46, 6,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimJabLoopStart_joint6[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 159, -105, -358, -259, -375, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 53, 1, -617, -30, -294, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 161, 34, -418, 250, -381, 46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 300, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 122, -13, -116, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 135, -44, -68, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 33, -102, -147, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -70, -103, -180, -33, 342, 42,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimJabLoopStart_joint7[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -982, -194,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1176, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1203, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1322, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1307, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1272, 35,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimJabLoopStart_joint8[20] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3018, -6, -77, 0, 31, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 85), 2435, -6, -89, 0, -388, -4,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 34,
	ftAnimBlock(0, 6),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTCaptainAnimJabLoopStart_joint9[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 15, 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 360, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 15, 0, 7, -20, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 15, 0, -115, -20, -2, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimJabLoopStart_joint11[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 25, 76, 1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 120, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 25, -28, 76, -40, 1, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -144, -22, -166, -43, 53, 11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTCaptainAnimJabLoopStart_joint12[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1640, 104, 1376, -9, -1245, -153,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1483, 63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1442, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1399, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1342, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1262, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1408, 95,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1148, 135,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1473, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1021, 126, 1426, -47, -1302, -40,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimJabLoopStart_joint13[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -768, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -769, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -884, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1062, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1087, -25,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimJabLoopStart_joint14[14] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 272, 242, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 272, 5, 242, -20, 42, 13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTCaptainAnimJabLoopStart_joint15[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	_FT_ANIM_CMD(11, 0, 1), 45,
	ftAnimBlock(0, 6),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimJabLoopStart_joint17[26] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 663, -18, 8, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 2, -11, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 50), 0, -1, 0, -3,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTCaptainAnimJabLoopStart_joint18[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1858, 35, -1430, -30, -2223, -89,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1586, -44, -2345, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1893, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1849, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1798, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1854, 56, -1633, -47, -2311, 33,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTCaptainAnimJabLoopStart_joint20[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 939, 102,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1042, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1019, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 857, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 817, -40,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTCaptainAnimJabLoopStart_joint22[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1478, -15, 1402, -16, -1549, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1436, 59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1629, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1563, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1518, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1583, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1504, 68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1641, 57,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1732, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1832, -100, 1690, 48, -1593, -10,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTCaptainAnimJabLoopStart_joint23[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -49, 3, -38, 28, -790, -81,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 177, 110,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -802, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -99, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -125, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -75, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 292, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 387, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4, 70, 433, 45, -707, 95,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTCaptainAnimJabLoopStart_joint25[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 684, 55,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 868, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 886, 17,
	ftAnimEnd(),
	0x0000, 0x200E, 0x001F, 0xFFF9, 0x00DB, 0xFFDE, 0x0096, 0x0016, 0x2803, 0x0004, 0x0014, 0xFFF1, 0x2805, 0x0005, 0x0058, 0xFFF8, 0x2009, 0x0002, 0x0084, 0xFFCF, 0x2009, 0x0001, 0x0048, 0xFFC0, 0x2809, 0x0002, 0xFFBF, 0xFFC0, 0x0801, 0x0001, 0x2003, 0x0001, 0x0007, 0xFFFB, 0x200F, 0x0001, 0x000A, 0x0002, 0x005B, 0x0002, 0xFF83, 0xFFC5, 0x0000, 0x0000, 0x0000,
};
