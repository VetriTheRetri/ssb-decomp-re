/* AnimJoint data for relocData file 570 (FTMarioAnimThrown1) */
/* 1312 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimThrown1_joint2[16];
extern u16 dFTMarioAnimThrown1_joint3[10];
extern u16 dFTMarioAnimThrown1_joint5[32];
extern u16 dFTMarioAnimThrown1_joint6[70];
extern u16 dFTMarioAnimThrown1_joint7[16];
extern u16 dFTMarioAnimThrown1_joint8[8];
extern u16 dFTMarioAnimThrown1_joint9[18];
extern u16 dFTMarioAnimThrown1_joint11[22];
extern u16 dFTMarioAnimThrown1_joint12[76];
extern u16 dFTMarioAnimThrown1_joint13[16];
extern u16 dFTMarioAnimThrown1_joint14[8];
extern u16 dFTMarioAnimThrown1_joint16[12];
extern u16 dFTMarioAnimThrown1_joint17[66];
extern u16 dFTMarioAnimThrown1_joint19[14];
extern u16 dFTMarioAnimThrown1_joint21[64];
extern u16 dFTMarioAnimThrown1_joint22[60];
extern u16 dFTMarioAnimThrown1_joint24[16];
extern u16 dFTMarioAnimThrown1_joint25[82];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTMarioAnimThrown1_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTMarioAnimThrown1_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimThrown1_joint3, /* [2] joint 3 */
	(u32)dFTMarioAnimThrown1_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTMarioAnimThrown1_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimThrown1_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimThrown1_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimThrown1_joint9, /* [8] joint 9 */
	(u32)dFTMarioAnimThrown1_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTMarioAnimThrown1_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimThrown1_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimThrown1_joint14, /* [13] joint 14 */
	(u32)dFTMarioAnimThrown1_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTMarioAnimThrown1_joint17, /* [16] joint 17 */
	(u32)dFTMarioAnimThrown1_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTMarioAnimThrown1_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTMarioAnimThrown1_joint22, /* [21] joint 22 */
	(u32)dFTMarioAnimThrown1_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTMarioAnimThrown1_joint25, /* [24] joint 25 */
};

/* Joint 2 */
u16 dFTMarioAnimThrown1_joint2[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal(FT_ANIM_TRAY), 480,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 20), 480,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 20), 480,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTMarioAnimThrown1_joint3[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 10,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimThrown1_joint5[32] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 168, -20, 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 20), 0, -4, 0, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 20), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 20), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 0, -8,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimThrown1_joint6[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 168, -2, -1379, -10, -172, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 17), 108, 17, -1421, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 75, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 41, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -492, -23,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 128, 18, -1407, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 403, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -1362, -17,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -511, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -202, 35,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 356, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 190, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 168, -22, -1379, -17, -172, 29,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimThrown1_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimThrown1_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTMarioAnimThrown1_joint9[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 30,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), -312, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), -312,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimThrown1_joint11[22] = {
	ftAnimSetValRate(FT_ANIM_ROTY), 0, -13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 0, 26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 0, -26,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTMarioAnimThrown1_joint12[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 167, -31, 1344, 1, -172, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 257, 57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 1251, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -364, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -313, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 258, 52,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 321, 72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 703, -46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1229, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1328, 21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 302, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -122, -50,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 646, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 206, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 167, -38, 1344, 16, -172, -50,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimThrown1_joint13[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTMarioAnimThrown1_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 625, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTMarioAnimThrown1_joint16[12] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 2028, 0, 419, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), -804,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 40), 2028, 419,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTMarioAnimThrown1_joint17[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1094, -40, -1509, -2, -1646, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -1688, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), -1512, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), 799, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 843, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 1310, -6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1667, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -1493, -31,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1303, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1136, -42,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1523, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1619, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1094, -41, -1513, 0, -1644, -24,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTMarioAnimThrown1_joint19[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 39), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTMarioAnimThrown1_joint21[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 44, 13, 164, 28, 95, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 197, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 9, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 13), 471, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 433, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 31, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 172, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), 89, 5,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -8, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 26, 17,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 36, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 141, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 43, 17, 164, 23, 95, 5,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTMarioAnimThrown1_joint22[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 498, -20, 97, 0, -38, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 174, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), 93, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 281, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 288, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 887, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 146, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), -81, 22,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 905, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 545, -50,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -58, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 498, -47, 97, 3, -38, 19,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimThrown1_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTMarioAnimThrown1_joint25[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1573, 8, -1443, -14, 1703, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 1648, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 28), 1825, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 15), -1576, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1548, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1117, 43,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1641, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1449, -23,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1080, 25, 1854, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1714, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1421, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1436, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 1676, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1685, 6, 1708, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1688, 3, -1443, -22, 1703, -4,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
