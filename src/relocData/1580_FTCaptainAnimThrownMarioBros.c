/* AnimJoint data for relocData file 1580 (FTCaptainAnimThrownMarioBros) */
/* 928 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimThrownMarioBros_joint2[16];
extern u16 dFTCaptainAnimThrownMarioBros_joint3[16];
extern u16 dFTCaptainAnimThrownMarioBros_joint5[28];
extern u16 dFTCaptainAnimThrownMarioBros_joint6[48];
extern u16 dFTCaptainAnimThrownMarioBros_joint7[16];
extern u16 dFTCaptainAnimThrownMarioBros_joint8[10];
extern u16 dFTCaptainAnimThrownMarioBros_joint11[16];
extern u16 dFTCaptainAnimThrownMarioBros_joint12[44];
extern u16 dFTCaptainAnimThrownMarioBros_joint13[24];
extern u16 dFTCaptainAnimThrownMarioBros_joint14[10];
extern u16 dFTCaptainAnimThrownMarioBros_joint15[12];
extern u16 dFTCaptainAnimThrownMarioBros_joint17[14];
extern u16 dFTCaptainAnimThrownMarioBros_joint18[34];
extern u16 dFTCaptainAnimThrownMarioBros_joint20[24];
extern u16 dFTCaptainAnimThrownMarioBros_joint22[24];
extern u16 dFTCaptainAnimThrownMarioBros_joint23[24];
extern u16 dFTCaptainAnimThrownMarioBros_joint25[20];
extern u16 dFTCaptainAnimThrownMarioBros_joint26[32];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTCaptainAnimThrownMarioBros_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTCaptainAnimThrownMarioBros_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimThrownMarioBros_joint3, /* [2] joint 3 */
	(u32)dFTCaptainAnimThrownMarioBros_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTCaptainAnimThrownMarioBros_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimThrownMarioBros_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimThrownMarioBros_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimThrownMarioBros_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTCaptainAnimThrownMarioBros_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimThrownMarioBros_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimThrownMarioBros_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimThrownMarioBros_joint15, /* [14] joint 15 */
	(u32)dFTCaptainAnimThrownMarioBros_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTCaptainAnimThrownMarioBros_joint18, /* [17] joint 18 */
	(u32)dFTCaptainAnimThrownMarioBros_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTCaptainAnimThrownMarioBros_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTCaptainAnimThrownMarioBros_joint23, /* [22] joint 23 */
	(u32)dFTCaptainAnimThrownMarioBros_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTCaptainAnimThrownMarioBros_joint26, /* [25] joint 26 */
};

/* Joint 2 */
u16 dFTCaptainAnimThrownMarioBros_joint2[16] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -64, 815, -295, 144,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 0, 1544, 0, 92, 10,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTCaptainAnimThrownMarioBros_joint3[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 363, -6, 107, 7, 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -78, 0, 101, 0, -15, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimThrownMarioBros_joint5[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -157, 12, 0, 0, -31, -2, 47, 19,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, 33,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -4, 0, 32, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX, 10), 168, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTCaptainAnimThrownMarioBros_joint6[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1805, -49, -1490, 40, -1706, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1079, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 1658, 73, -1795, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1772, 221, -1860, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2101, 438, -981, 47, -2065, -295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2649, 368, -983, -25, -2452, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2837, 188, -1033, -50, -2552, -100,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimThrownMarioBros_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -757, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -575, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -537, 37,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimThrownMarioBros_joint8[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2435, -89, -388,
	_FT_ANIM_CMD(11, 0, 1), 3,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimThrownMarioBros_joint11[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -30,
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTCaptainAnimThrownMarioBros_joint12[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -119, 149, 121, 1, 636, 79,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 82, 76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1125, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 905, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 945, 62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1341, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 176, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 330, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1122, -3, 332, 1, 1341, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimThrownMarioBros_joint13[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -302, -60,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -888, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -808, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -601, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -560, 41,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimThrownMarioBros_joint14[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 275, 62,
	_FT_ANIM_CMD(11, 0, 1), 3,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTCaptainAnimThrownMarioBros_joint15[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	_FT_ANIM_CMD(11, 0, 1), 3,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimThrownMarioBros_joint17[14] = {
	ftAnimSetValBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTZ, 13), 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTZ, 1), 3,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTCaptainAnimThrownMarioBros_joint18[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3, 0, -6, 0, -1101, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 5, 0, -43, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -680, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -502, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -83, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, 0, -42, 0, -29, 54,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTCaptainAnimThrownMarioBros_joint20[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 801, 62,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 843, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 693, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 358, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 273, -85,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTCaptainAnimThrownMarioBros_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1679, 3, 1595, -4, -1594, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -1642, 18, 1585, 0, -1627, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1626, 15, 1585, 0, -1628, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTCaptainAnimThrownMarioBros_joint23[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 42, -1, 196, -12, -599, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 12, -6, 50, -5, -78, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 8, -3, 47, -2, -56, 22,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTCaptainAnimThrownMarioBros_joint25[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 924, -17,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 411, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 331, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 295, -35,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTCaptainAnimThrownMarioBros_joint26[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 243, 17, 365, -12, -257, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 37, -16, -72, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 167, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 79, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 18, -60, 28, -8, -68, 3,
	ftAnimEnd(),
	0x0000, 0x0000,
};
