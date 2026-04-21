/* AnimJoint data for relocData file 776 (FTFoxAnimExitPipeWalk) */
/* 1696 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimExitPipeWalk_joint1[16];
extern u16 dFTFoxAnimExitPipeWalk_joint2[50];
extern u16 dFTFoxAnimExitPipeWalk_joint4[16];
extern u16 dFTFoxAnimExitPipeWalk_joint5[54];
extern u16 dFTFoxAnimExitPipeWalk_joint7[32];
extern u16 dFTFoxAnimExitPipeWalk_joint8[10];
extern u16 dFTFoxAnimExitPipeWalk_joint10[24];
extern u16 dFTFoxAnimExitPipeWalk_joint11[76];
extern u16 dFTFoxAnimExitPipeWalk_joint13[32];
extern u16 dFTFoxAnimExitPipeWalk_joint15[12];
extern u16 dFTFoxAnimExitPipeWalk_joint16[64];
extern u16 dFTFoxAnimExitPipeWalk_joint18[48];
extern u16 dFTFoxAnimExitPipeWalk_joint20[58];
extern u16 dFTFoxAnimExitPipeWalk_joint21[66];
extern u16 dFTFoxAnimExitPipeWalk_joint23[32];
extern u16 dFTFoxAnimExitPipeWalk_joint24[84];
extern u16 dFTFoxAnimExitPipeWalk_joint25[64];
extern u16 dFTFoxAnimExitPipeWalk_joint26[58];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimExitPipeWalk_joints[] = {
	(u32)dFTFoxAnimExitPipeWalk_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimExitPipeWalk_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimExitPipeWalk_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimExitPipeWalk_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimExitPipeWalk_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTFoxAnimExitPipeWalk_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimExitPipeWalk_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimExitPipeWalk_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimExitPipeWalk_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTFoxAnimExitPipeWalk_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimExitPipeWalk_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimExitPipeWalk_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimExitPipeWalk_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimExitPipeWalk_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimExitPipeWalk_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimExitPipeWalk_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimExitPipeWalk_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimExitPipeWalk_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimExitPipeWalk_joint1[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValBlock(FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -1440, 2048, 2048, 2048,
	ftAnimSetValBlockT(FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 40), 0, 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimExitPipeWalk_joint2[50] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -219, 55,
	ftAnimSetValRateBlock(FT_ANIM_ROTY | FT_ANIM_TRAY), -283, 1, 958, 131,
	ftAnimSetValRateT(FT_ANIM_TRAY, 10), 970, -123,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 5,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 30), -222,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 5,
	ftAnimBlock(0, 5),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -146,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 953, 108,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 149,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 970, -114,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -206,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -283, 1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 910, 78,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 71,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 958, 131,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimExitPipeWalk_joint4[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 408, -163,
	ftAnimSetValRateBlock(FT_ANIM_ROTY), -3, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 20), -170, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 20), -35, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimExitPipeWalk_joint5[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1889, 3, -1432, 13, 1650, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 33), -1860, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 34), -1390, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 1333, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1337, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 1682, 0,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1876, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1914, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1398, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1431, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1904, 10, -1440, -8, 1677, -4,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimExitPipeWalk_joint7[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -976, 29,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -585, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -560, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -730, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -772, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -978, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -970, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTFoxAnimExitPipeWalk_joint8[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -164, 122, -2,
	_FT_ANIM_CMD(11, 0, 1), 5,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTFoxAnimExitPipeWalk_joint10[24] = {
	ftAnimSetValBlock(FT_ANIM_ROTX), -80,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 11,
	ftAnimSetValT(FT_ANIM_ROTX, 20), -38,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 5,
	ftAnimSetValBlock(FT_ANIM_ROTY), 192,
	ftAnimSetValT(FT_ANIM_ROTY, 20), 270,
	ftAnimBlock(0, 15),
	ftAnimSetValBlockT(FT_ANIM_ROTX, 5), -25,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 20), -80, 221,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimExitPipeWalk_joint11[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1275, 4, -1730, 0, 1752, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -1164, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), -1472, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 2210, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2202, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 2039, -47,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1171, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -1214, -12,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1472, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1722, -16,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1992, -45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1869, -40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1226, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1238, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1250, -12, -1738, -16, 1828, -40,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimExitPipeWalk_joint13[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -547, -15,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -903, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -899, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -915, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -924, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -677, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -629, 47,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTFoxAnimExitPipeWalk_joint15[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	_FT_ANIM_CMD(11, 0, 1), 5,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimExitPipeWalk_joint16[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -66, -6, -26, 9, -53, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), -164, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 34), 39, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 96, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 106, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 240, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 218, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -145, -3,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -168, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -106, 10,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 28, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -10, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -95, 10, -17, -6, -146, -1,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimExitPipeWalk_joint18[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 200, -37,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 247, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 266, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 228, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 224, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 169, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 241, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 838, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 825, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 631, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 582, -48,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimExitPipeWalk_joint20[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 29, -1, -166, 5, 13, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 43, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), -145, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -107, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -60, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -32, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 43, 0, -25, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 10, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -208, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -192, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -142, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3, -6, -148, -2, -106, 36,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimExitPipeWalk_joint21[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -20, -8, 87, 6, 131, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 40, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 36), 35, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -235, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -242, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -100, -15,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 44, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 8, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -109, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 166, 18,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 40, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 51, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, 0, 56, 4, 184, 17,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimExitPipeWalk_joint23[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 555, 68,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 651, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 575, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 319, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 371, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 325, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 308, -17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimExitPipeWalk_joint24[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -14, 29, 204, -13, -109, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -66, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 101, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -21, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -46, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -165, -8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -56, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 20, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 88, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 185, 3,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -26, -45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -193, 22,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -172, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -182, 3,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 189, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 201, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -177, 4, 210, 8, -165, 28,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimExitPipeWalk_joint25[64] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -126, -96,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 219,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), -45, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -6, -3,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 129, -6,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -109, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 35, -2,
	ftAnimBlock(0, 10),
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -10, -1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 52, 9,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -83, -11,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 15), 219,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -45, 9,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimExitPipeWalk_joint26[58] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), -125, -11,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 16), 268,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 6,
	ftAnimSetValRateBlock(FT_ANIM_ROTY), 53, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -134, 2,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 5,
	ftAnimBlock(0, 9),
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 134, 6,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 11), -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 268, -1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -125, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 53, -12,
	ftAnimBlock(0, 7),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 16), 268,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
