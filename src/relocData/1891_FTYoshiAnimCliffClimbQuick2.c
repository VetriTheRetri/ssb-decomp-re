/* AnimJoint data for relocData file 1891 (FTYoshiAnimCliffClimbQuick2) */
/* 2640 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimCliffClimbQuick2_joint1[36];
extern u16 dFTYoshiAnimCliffClimbQuick2_joint2[48];
extern u16 dFTYoshiAnimCliffClimbQuick2_joint3[52];
extern u16 dFTYoshiAnimCliffClimbQuick2_joint4[58];
extern u16 dFTYoshiAnimCliffClimbQuick2_joint5[74];
extern u16 dFTYoshiAnimCliffClimbQuick2_joint7[20];
extern u16 dFTYoshiAnimCliffClimbQuick2_joint8[178];
extern u16 dFTYoshiAnimCliffClimbQuick2_joint9[52];
extern u16 dFTYoshiAnimCliffClimbQuick2_joint11[22];
extern u16 dFTYoshiAnimCliffClimbQuick2_joint12[92];
extern u16 dFTYoshiAnimCliffClimbQuick2_joint13[40];
extern u16 dFTYoshiAnimCliffClimbQuick2_joint14[10];
extern u16 dFTYoshiAnimCliffClimbQuick2_joint15[64];
extern u16 dFTYoshiAnimCliffClimbQuick2_joint16[44];
extern u16 dFTYoshiAnimCliffClimbQuick2_joint18[44];
extern u16 dFTYoshiAnimCliffClimbQuick2_joint19[68];
extern u16 dFTYoshiAnimCliffClimbQuick2_joint21[32];
extern u16 dFTYoshiAnimCliffClimbQuick2_joint23[72];
extern u16 dFTYoshiAnimCliffClimbQuick2_joint24[114];
extern u16 dFTYoshiAnimCliffClimbQuick2_joint26[146];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTYoshiAnimCliffClimbQuick2_joints[] = {
	(u32)dFTYoshiAnimCliffClimbQuick2_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimCliffClimbQuick2_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimCliffClimbQuick2_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimCliffClimbQuick2_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimCliffClimbQuick2_joint5, /* [4] joint 5 */
	(u32)dFTYoshiAnimCliffClimbQuick2_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTYoshiAnimCliffClimbQuick2_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimCliffClimbQuick2_joint9, /* [8] joint 9 */
	(u32)dFTYoshiAnimCliffClimbQuick2_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTYoshiAnimCliffClimbQuick2_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimCliffClimbQuick2_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimCliffClimbQuick2_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimCliffClimbQuick2_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimCliffClimbQuick2_joint16, /* [15] joint 16 */
	(u32)dFTYoshiAnimCliffClimbQuick2_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTYoshiAnimCliffClimbQuick2_joint19, /* [18] joint 19 */
	(u32)dFTYoshiAnimCliffClimbQuick2_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTYoshiAnimCliffClimbQuick2_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTYoshiAnimCliffClimbQuick2_joint24, /* [23] joint 24 */
	(u32)dFTYoshiAnimCliffClimbQuick2_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	0xFFFF026A, /* [26] END */
};

/* Joint 1 */
u16 dFTYoshiAnimCliffClimbQuick2_joint1[36] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 2106, 0, 154,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 616, 537,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 23), 360,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 3), 11,
	ftAnimSetValRateT(FT_ANIM_TRAX, 13), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 7), 653, -99,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 6), 0, -390,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 7), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 7), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTYoshiAnimCliffClimbQuick2_joint2[48] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAY), 672,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 31), 672,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), -893,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -893, -116,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -3216, -339,
	ftAnimBlock(0, 8),
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 672, -218,
	ftAnimBlock(0, 2),
	ftAnimSetValBlockT(FT_ANIM_ROTY, 3), -3216,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 7), -3216,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 453,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 672,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimCliffClimbQuick2_joint3[52] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -446, 0, -49, 83, 168,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -446, 24, 0, -4, -49, 21, 83, -23, 168, -65,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 34, -89, -6, 0, 30, 30, -33, 20, -91,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, -89, 0, 30, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, -89, 0, 30, 20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTYoshiAnimCliffClimbQuick2_joint4[58] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 172,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -114, 8, -33, 2, 604, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 0, 35, 0, -40, 0, -67,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 310, -34,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -516, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -312, -26, 0, 46, 0, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 16, 69,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 313,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 16,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTYoshiAnimCliffClimbQuick2_joint5[74] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 600, 329,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 25), -6, 531, 332,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 20,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -965, 141, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -3, 59, 1012, 34, 0, -1,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 717, 69, -553, -112, -15, 0,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 18), -6, 531, 332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 625, -58, 0, 50, 0, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 78, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 528,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 78,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimCliffClimbQuick2_joint7[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 460,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), 0, -12,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 20,
	ftAnimBlock(0, 11),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimCliffClimbQuick2_joint8[178] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_SCAX), 4096, -386,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 13), 4096,
	_FT_ANIM_CMD(11, FT_ANIM_SCAX, 1), 2,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1656, 62, -53, -36, 518, -84,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1509, -460, 68, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 433, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 393, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 798, -732, 310, 14, 85, -445,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 43, -405, 96, -303, -496, -388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -12, -3, -295, -152, -691, -155,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -2, -10, 33, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -807, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -512, 104,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 14, 22, 93, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 16, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 3, -55,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -425, 328,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -31, 154, 143, 312,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 12), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 325, 0, -83, -2, 200, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -144, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -31, -239, -1, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -248, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -56, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -72, -42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -55, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -200, 45, 18, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -112, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -125, -158,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -386, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -114, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -134, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -351, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -110, 2, -132, 2, -352, -1,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTYoshiAnimCliffClimbQuick2_joint9[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -496,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1000, -578,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1165, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1033, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1249, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -961, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -885, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -793, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -800, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, 35,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimCliffClimbQuick2_joint11[22] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTZ), -625, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 0, 27,
	_FT_ANIM_CMD(11, FT_ANIM_ROTZ, 1), 7,
	ftAnimBlock(0, 11),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTYoshiAnimCliffClimbQuick2_joint12[92] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -64, -524, 948, 115, -779, -546,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1677, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -589, -337, -1325, -346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -740, -124, -1472, -102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1464, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1251, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1418, -151, 1644, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1726, -7,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 11), -1752,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1529, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1867, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1872, 5,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 9), -1827,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1716, -6,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 7), 1712,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -1752,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -1752,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1752, 0, -1827, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 1712,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimCliffClimbQuick2_joint13[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -336, -332,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1016, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -957, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -871, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -975, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -999, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1002, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimCliffClimbQuick2_joint14[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 20,
	ftAnimBlock(0, 23),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTYoshiAnimCliffClimbQuick2_joint15[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -536, -9, -893, -1, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -694, 11, -913, -1, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -349, 141, -917, 3, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 155, 0, -893, 42, 0, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -351, -138, -747, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -536, -95, -893, 54, 0, 41,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1019, -368, 294,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -536, -893, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTYoshiAnimCliffClimbQuick2_joint16[44] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -108, 112, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -108, -4, 112, -6, 20, -1,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -190, 34, 0, -8, 0, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 336, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -310, -75,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -190,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimCliffClimbQuick2_joint18[44] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -123, 245, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -123, -1, 245, -13, -25, 1,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -153, 38, 0, -18, 0, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 378, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -271, -76,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -153,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTYoshiAnimCliffClimbQuick2_joint19[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 63, 0, 178, -1, 581, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -5, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 5, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 673, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 608, -88,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3, -307,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -5, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1, 0, -306, -279,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 2, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -661, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -541, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -144, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, 0, 5, 2, -3, 140,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTYoshiAnimCliffClimbQuick2_joint21[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1147, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1041, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 490, -269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 262, -228,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTYoshiAnimCliffClimbQuick2_joint23[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1880, 1, -226, 0, 347, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -83, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -1657, 50, 4, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1613, 34, -101, -99,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -246, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1608, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -69, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -82, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -263, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -499, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1614, -2, -413, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1614, 2, -313, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1608, 6, -83, -1, -263, 49,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTYoshiAnimCliffClimbQuick2_joint24[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -8, 0, -38, 0, 517, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 37, 4, 53, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 489, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 462, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 116, -316,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -169, -288,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -921, 10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 51, 58, 83, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 154, -22, 208, -37, -866, 45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -502, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 6, -77, 7, -104,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 0, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -286, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, -154, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 0, 0, -278, -148,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -502, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -395, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -250, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0, 0, -154, 95,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimCliffClimbQuick2_joint26[146] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 491, 393,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 793, 249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 916, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 807, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 655, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 495, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 632, 288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1101, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1019, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 548, -217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -169,
	ftAnimEnd(),
	0x200E, 0x0447, 0x0007, 0xFFD3, 0x0000, 0x0170, 0xFFFE, 0x2809, 0x0009, 0xFFC4, 0xFF9B, 0x2805, 0x0016, 0xFFA9, 0xFFFD, 0x2003, 0x0002, 0x0463, 0x001A, 0x2003, 0x0001, 0x0483, 0x008F, 0x2003, 0x0001, 0x0581, 0x005A, 0x2003, 0x0001, 0x0538, 0xFFDC, 0x2803, 0x0005, 0x063D, 0x0002, 0x0801, 0x0004, 0x2009, 0x0001, 0xFF63, 0xFFAC, 0x2809, 0x0007, 0xFEB4, 0xFF8C, 0x2003, 0x0001, 0x0629, 0x001B, 0x2003, 0x0002, 0x0661, 0xFFED, 0x2003, 0x0001, 0x064B, 0xFFF1, 0x2803, 0x0008, 0x0640, 0x0000, 0x0801, 0x0003, 0x2009, 0x0001, 0xFE33, 0xFFA5, 0x2009, 0x0004, 0xFEE7, 0x004F, 0x200F, 0x0001, 0x0643, 0x0003, 0xFFA7, 0xFFFF, 0xFF1C, 0x0034, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
