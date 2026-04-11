/* AnimJoint data for relocData file 1589 (FTCaptainAnimCliffClimbQuick2) */
/* 1280 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimCliffClimbQuick2_joint1[14];
extern u16 dFTCaptainAnimCliffClimbQuick2_joint2[38];
extern u16 dFTCaptainAnimCliffClimbQuick2_joint3[38];
extern u16 dFTCaptainAnimCliffClimbQuick2_joint5[34];
extern u16 dFTCaptainAnimCliffClimbQuick2_joint6[24];
extern u16 dFTCaptainAnimCliffClimbQuick2_joint7[16];
extern u16 dFTCaptainAnimCliffClimbQuick2_joint8[32];
extern u16 dFTCaptainAnimCliffClimbQuick2_joint11[32];
extern u16 dFTCaptainAnimCliffClimbQuick2_joint12[40];
extern u16 dFTCaptainAnimCliffClimbQuick2_joint13[24];
extern u16 dFTCaptainAnimCliffClimbQuick2_joint14[24];
extern u16 dFTCaptainAnimCliffClimbQuick2_joint15[14];
extern u16 dFTCaptainAnimCliffClimbQuick2_joint17[32];
extern u16 dFTCaptainAnimCliffClimbQuick2_joint18[40];
extern u16 dFTCaptainAnimCliffClimbQuick2_joint20[24];
extern u16 dFTCaptainAnimCliffClimbQuick2_joint22[34];
extern u16 dFTCaptainAnimCliffClimbQuick2_joint23[52];
extern u16 dFTCaptainAnimCliffClimbQuick2_joint25[76];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTCaptainAnimCliffClimbQuick2_joints[] = {
	(u32)dFTCaptainAnimCliffClimbQuick2_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimCliffClimbQuick2_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimCliffClimbQuick2_joint3, /* [2] joint 3 */
	(u32)dFTCaptainAnimCliffClimbQuick2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTCaptainAnimCliffClimbQuick2_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimCliffClimbQuick2_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimCliffClimbQuick2_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimCliffClimbQuick2_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTCaptainAnimCliffClimbQuick2_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimCliffClimbQuick2_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimCliffClimbQuick2_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimCliffClimbQuick2_joint15, /* [14] joint 15 */
	(u32)dFTCaptainAnimCliffClimbQuick2_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTCaptainAnimCliffClimbQuick2_joint18, /* [17] joint 18 */
	(u32)dFTCaptainAnimCliffClimbQuick2_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTCaptainAnimCliffClimbQuick2_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTCaptainAnimCliffClimbQuick2_joint23, /* [22] joint 23 */
	(u32)dFTCaptainAnimCliffClimbQuick2_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF0124, /* [25] END */
};

/* Joint 1 */
u16 dFTCaptainAnimCliffClimbQuick2_joint1[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 460,
	ftAnimSetValAfterBlock(FT_ANIM_TRAY), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 6), 816,
	ftAnimSetValAfterBlockT(FT_ANIM_TRAY, 6), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimCliffClimbQuick2_joint2[38] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 15), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAZ, 1), 9,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX, 11), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX, 1), 5,
	ftAnimSetValRateBlock(FT_ANIM_TRAY), 1116, -559,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 1580, 148,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 148,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 1600, 104,
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 1600, 40, 0, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTCaptainAnimCliffClimbQuick2_joint3[38] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 4,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), -76, 9,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 35), -76, 9,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 29,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 464, 0, 0, 7, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, -62, 107, 14, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1,
	ftAnimBlock(0, 6),
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 107, 0, -76, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTCaptainAnimCliffClimbQuick2_joint5[34] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 15), 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX, 1), 9,
	ftAnimSetValRateBlock(FT_ANIM_TRAZ), 75, -14,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 10), 47,
	_FT_ANIM_CMD(11, FT_ANIM_TRAZ, 1), 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_TRAY), 178, 0, -11, -10,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_TRAY, 7), 189, -31,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_TRAY, 1), 1,
	ftAnimBlock(0, 6),
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTCaptainAnimCliffClimbQuick2_joint6[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1855, 2, -1562, 3, -2129, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1851, -3, -1602, -12, -2116, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1848, -2, -1614, -11, -2132, -15,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimCliffClimbQuick2_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -409, -91,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -759, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, -38,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimCliffClimbQuick2_joint8[32] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 290, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 344, 0, 0, 0, -47,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 2701, -142, -3, -16, -333, -70,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -781, -89, -388,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimCliffClimbQuick2_joint11[32] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -1, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), -134, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -268, 13, 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 0, 48, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimCliffClimbQuick2_joint12[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, -5, 1505, -35, 1368, 135,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1405, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1616, 9, 1820, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1623, -22, 1989, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1570, -71, 1435, 30, 2120, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1480, -89, 1466, 31, 2201, 80,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimCliffClimbQuick2_joint13[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -701, -158,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1059, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1088, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1078, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, 54,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimCliffClimbQuick2_joint14[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -243, 61, 154, 22, -113, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 268, 68, 273, 16, 61, 23,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1,
	ftAnimBlock(0, 6),
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 275, 62,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTCaptainAnimCliffClimbQuick2_joint15[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), -1003,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 1538, 119,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 35), 1538, 119,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 29,
	ftAnimBlock(0, 6),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimCliffClimbQuick2_joint17[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTZ), -2, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTZ, 1), 5,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -522, 0, 24, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 0, 69, 0, -3,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1,
	ftAnimBlock(0, 6),
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0, 0, 6,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTCaptainAnimCliffClimbQuick2_joint18[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 86, 33, -20, 52, -782, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 120, 9, 32, 28, -895, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 105, -9, 37, 10, -862, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 152, 36, 83, -2, -586, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, 38, 70, -13, -472, 113,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTCaptainAnimCliffClimbQuick2_joint20[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 913, 224,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1138, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1102, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 653, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -208,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTCaptainAnimCliffClimbQuick2_joint22[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 55, -8, -59, -10, 290, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -97, -34, -52, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 101, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 45, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 53, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -126, -29, -27, 24, 82, 28,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTCaptainAnimCliffClimbQuick2_joint23[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -24, 66, 91, 74, -1182, 157,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 73, 25, -831, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 166, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 184, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 134, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 93, 20, -612, 213,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 138, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -404, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -199, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, 21, 110, -24, -76, 122,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTCaptainAnimCliffClimbQuick2_joint25[76] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 869, -25,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 683, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 594, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, -52,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0009, 0xFFE2, 0x0047, 0x001E, 0xFFAD, 0xFFB2, 0x2809, 0x0002, 0xFF18, 0xFFD1, 0x2007, 0x0001, 0xFFEC, 0x0000, 0x0066, 0x0032, 0x2007, 0x0001, 0x0008, 0x001A, 0x00AC, 0x0049, 0x2805, 0x0003, 0x0158, 0x0019, 0x200B, 0x0001, 0x0021, 0x0028, 0xFEFF, 0xFFF1, 0x2809, 0x0002, 0xFEF1, 0xFFF8, 0x2003, 0x0001, 0x0059, 0x0031, 0x2003, 0x0001, 0x0084, 0x0025, 0x200F, 0x0001, 0x00A4, 0x0020, 0x016C, 0x0013, 0xFEE9, 0xFFF9, 0x0000, 0x0000, 0x0000,
};
