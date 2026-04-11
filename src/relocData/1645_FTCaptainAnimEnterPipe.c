/* AnimJoint data for relocData file 1645 (FTCaptainAnimEnterPipe) */
/* 1488 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimEnterPipe_joint1[14];
extern u16 dFTCaptainAnimEnterPipe_joint2[10];
extern u16 dFTCaptainAnimEnterPipe_joint4[30];
extern u16 dFTCaptainAnimEnterPipe_joint5[90];
extern u16 dFTCaptainAnimEnterPipe_joint6[40];
extern u16 dFTCaptainAnimEnterPipe_joint7[18];
extern u16 dFTCaptainAnimEnterPipe_joint8[28];
extern u16 dFTCaptainAnimEnterPipe_joint10[10];
extern u16 dFTCaptainAnimEnterPipe_joint11[64];
extern u16 dFTCaptainAnimEnterPipe_joint12[24];
extern u16 dFTCaptainAnimEnterPipe_joint13[28];
extern u16 dFTCaptainAnimEnterPipe_joint14[22];
extern u16 dFTCaptainAnimEnterPipe_joint16[16];
extern u16 dFTCaptainAnimEnterPipe_joint17[64];
extern u16 dFTCaptainAnimEnterPipe_joint19[30];
extern u16 dFTCaptainAnimEnterPipe_joint21[46];
extern u16 dFTCaptainAnimEnterPipe_joint22[54];
extern u16 dFTCaptainAnimEnterPipe_joint24[106];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTCaptainAnimEnterPipe_joints[] = {
	(u32)dFTCaptainAnimEnterPipe_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimEnterPipe_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimEnterPipe_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimEnterPipe_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimEnterPipe_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimEnterPipe_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimEnterPipe_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimEnterPipe_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimEnterPipe_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimEnterPipe_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimEnterPipe_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimEnterPipe_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimEnterPipe_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimEnterPipe_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimEnterPipe_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimEnterPipe_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimEnterPipe_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimEnterPipe_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF014F, /* [24] END */
};

/* Joint 1 */
u16 dFTCaptainAnimEnterPipe_joint1[14] = {
	ftAnimSetValRate(FT_ANIM_TRAY), 1600, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 32), -960, -433,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimEnterPipe_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 107, 0, 4, -76, 9,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTCaptainAnimEnterPipe_joint4[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 189, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -31, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 80, 0, -62, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 24), 80, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 24), -62,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTCaptainAnimEnterPipe_joint5[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 239, 18, 5, -34, -524, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 439, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -113, -91, -362, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -211, -79, -209, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -249, 89, -85, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 519, 49, -94, 70, -160, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 543, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -107, -8, -120, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -112, -2, -107, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -106, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -112, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 543, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 544, 0,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -106, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -106, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 544, 0, -112, 0, -107, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimEnterPipe_joint6[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -797, -38,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -902, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -907, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -506, 388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimEnterPipe_joint7[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2701, -2, -333,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 420, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 32), 2701, 2, -2, 0, -333, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimEnterPipe_joint8[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 360, -108,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -30, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 24), 0, 0, -30, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 24), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTCaptainAnimEnterPipe_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 120, 0,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimEnterPipe_joint11[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -129, -27, 144, 24, 592, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -469, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 279, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 305, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 306, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), 302, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -492, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -502, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 279, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), 279, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -502, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), -500, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -500, 0, 303, 0, 279, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimEnterPipe_joint12[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1024, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -989, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -989, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -991, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -990, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimEnterPipe_joint13[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 275, 62,
	ftAnimSetValRate(FT_ANIM_ROTX), 270, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 388, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 270, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 275, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 178, -14, 275, 0, 62, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimEnterPipe_joint14[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1538, -1003, 119,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 85, 49, 38,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 1538, -1003, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 1538, 0, -1003, 0, 119, 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimEnterPipe_joint16[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -191, -210, -79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 80), 0, 0,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimEnterPipe_joint17[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 191, -10, 70, -9, -472, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -106, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 20, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -224, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -147, 67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -91, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -106, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -106, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 20, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 19, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -91, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -89, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 20, 0, -106, 0, -91, -1,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimEnterPipe_joint19[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 445, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 210, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 96, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 22), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 4,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTCaptainAnimEnterPipe_joint21[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1481, 4, -1566, 0, 1688, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1460, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), -1560, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1774, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1774, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 1774, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1460, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 17), 1459, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1459, 0, -1560, 0, 1774, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimEnterPipe_joint22[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1448, 0, 1498, 1, -1685, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1573, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), -1454, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1606, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1526, 39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1530, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1573, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 1572, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1530, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -1531, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1455, 0, 1572, 0, -1530, 0,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimEnterPipe_joint24[106] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 541, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 297, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 187, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 4, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 0,
	ftAnimEnd(),
	0x0000, 0x200E, 0x00A1, 0xFFFE, 0x016D, 0xFFFD, 0xFEE9, 0x0009, 0x2805, 0x0007, 0x00CE, 0xFFED, 0x2809, 0x0009, 0xFFED, 0x0000, 0x2003, 0x0006, 0x0057, 0xFFE3, 0x2003, 0x0001, 0x0033, 0xFFEF, 0x2803, 0x0006, 0x0033, 0x0000, 0x2005, 0x0001, 0x00C3, 0xFFFB, 0x2805, 0x0015, 0x00C4, 0x0000, 0x0801, 0x0001, 0x2009, 0x0001, 0xFFED, 0x0000, 0x2809, 0x0015, 0xFFED, 0x0000, 0x0801, 0x0003, 0x2003, 0x0001, 0x0034, 0x0000, 0x2803, 0x0011, 0x0033, 0x0000, 0x0801, 0x000F, 0x2005, 0x0001, 0x00C4, 0x0000, 0x2005, 0x0001, 0x00C3, 0x0000, 0x200F, 0x0001, 0x0034, 0x0000, 0x00C3, 0x0000, 0xFFED, 0x0000, 0x0000,
};
