/* AnimJoint data for relocData file 665 (FTFoxAnimSleep) */
/* 2080 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimSleep_joint1[12];
extern u16 dFTFoxAnimSleep_joint2[102];
extern u16 dFTFoxAnimSleep_joint4[58];
extern u16 dFTFoxAnimSleep_joint5[76];
extern u16 dFTFoxAnimSleep_joint7[8];
extern u16 dFTFoxAnimSleep_joint10[92];
extern u16 dFTFoxAnimSleep_joint11[94];
extern u16 dFTFoxAnimSleep_joint12[54];
extern u16 dFTFoxAnimSleep_joint13[32];
extern u16 dFTFoxAnimSleep_joint15[12];
extern u16 dFTFoxAnimSleep_joint16[58];
extern u16 dFTFoxAnimSleep_joint18[40];
extern u16 dFTFoxAnimSleep_joint20[68];
extern u16 dFTFoxAnimSleep_joint21[64];
extern u16 dFTFoxAnimSleep_joint23[40];
extern u16 dFTFoxAnimSleep_joint24[74];
extern u16 dFTFoxAnimSleep_joint25[104];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimSleep_joints[] = {
	(u32)dFTFoxAnimSleep_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimSleep_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimSleep_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimSleep_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimSleep_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTFoxAnimSleep_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimSleep_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimSleep_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimSleep_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimSleep_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimSleep_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimSleep_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimSleep_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimSleep_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimSleep_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimSleep_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimSleep_joint25, /* [24] joint 25 */
	0xFFFF01FF, /* [25] END */
};

/* Joint 1 */
u16 dFTFoxAnimSleep_joint1[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 48, 912, -20,
	ftAnimBlock(0, 80),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimSleep_joint2[102] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), -101, -11, -291, 2, 49, 3, -42, 17, 31, -37,
	ftAnimSetValAfterBlock(FT_ANIM_TRAY), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 22), -50, 2,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 24), -310,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -164, 5,
	ftAnimSetValRateT(FT_ANIM_TRAX, 30), 24, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 77, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 30), -39, -1,
	ftAnimBlock(0, 9),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 25), 64, 54,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 40), 57, -3,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_ROTY, 41), -314, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAX, 39), -57, 3,
	ftAnimBlock(0, 13),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 37), 49, 3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 8), 135, 32,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 12), 126, -57,
	ftAnimBlock(0, 9),
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -101, -11,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 13), 31, -37,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAX, 11), -42, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -291, 2,
	ftAnimLoop(0x6800, -202),
};

/* Joint 4 */
u16 dFTFoxAnimSleep_joint4[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 205, -3, 202, -2, 82, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), 100, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 183, 0, 118, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 211, 0, -2, -2,
	ftAnimBlock(0, 13),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 19), 64,
	ftAnimBlock(0, 8),
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), 223, 0, -8, 1,
	ftAnimBlock(0, 11),
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 154, 7,
	ftAnimBlock(0, 17),
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 202, -1, 82, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 18), 205, -3,
	ftAnimLoop(0x6800, -114),
};

/* Joint 5 */
u16 dFTFoxAnimSleep_joint5[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1840, -13, -1733, -4, 1412, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 30), 1830, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 34), -1473, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), 1811, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1817, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), 2031, -4,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1833, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 48), 1396, 14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1459, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 44), -1728, -5,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2027, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 28), 1846, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1837, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1838, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1840, 1, -1733, -4, 1412, 15,
	ftAnimLoop(0x6800, -148),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimSleep_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 80),
	ftAnimLoop(0x6800, -14),
};

/* Joint 10 */
u16 dFTFoxAnimSleep_joint10[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 262, 0, 10, -3, 37, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -77, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 28), 35, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), 212, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 123, -11,
	ftAnimBlock(0, 6),
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -138, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -71, -2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -56, -4,
	ftAnimBlock(0, 7),
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -54, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -20, 1,
	ftAnimBlock(0, 8),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -7, 9,
	ftAnimBlock(0, 8),
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 144, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 53, -1,
	ftAnimBlock(0, 7),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 37, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 262, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), 10, -2,
	ftAnimLoop(0x6800, -180),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimSleep_joint11[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1343, -2, -1493, -6, 649, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 36), 1262, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), -1524, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), 344, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 327, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 353, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1266, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 40), 1379, -8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1514, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 36), -1425, -1,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 366, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 413, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 427, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 530, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1427, -12, 532, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1476, -20, 624, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1363, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1350, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1343, -7, -1493, -17, 649, 25,
	ftAnimLoop(0x6800, -184),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimSleep_joint12[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -221, -15,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 37), -272, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -252, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -74, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -70, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -65, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 32,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -168, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -221, -52,
	ftAnimLoop(0x6800, -106),
};

/* Joint 13 */
u16 dFTFoxAnimSleep_joint13[32] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 857, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -121, -273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 26), 766, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 867, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 759, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 747, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 845, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 857, -1,
	ftAnimLoop(0x6800, -62),
};

/* Joint 15 */
u16 dFTFoxAnimSleep_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 80),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimSleep_joint16[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -503, 2, -190, 8, -62, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 59), -521, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 34), -137, -11, 58, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -148, -11, 43, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 43), -206, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 44), -71, 8,
	ftAnimBlock(0, 24),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -525, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -506, 2,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -198, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -503, 2, -190, 8, -62, 8,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimSleep_joint18[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 353, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 49, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 44, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 402, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 413, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), 437, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 417, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 363, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 353, -9,
	ftAnimLoop(0x6800, -78),
};

/* Joint 20 */
u16 dFTFoxAnimSleep_joint20[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 37, 0, 243, -2, -58, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 47), 74, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 69), 267, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), 9, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -168, -7,
	ftAnimBlock(0, 16),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 72, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), 35, 2,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -174, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), -65, 7,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 264, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), 245, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 37, 1, 243, -2, -58, 6,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimSleep_joint21[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 336, -4, 178, 2, 86, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 53), 75, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 67), 357, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 44), 238, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 224, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 33), 69, 10,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 86, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), 177, 0,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 355, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 341, -3,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 78, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 336, -4, 178, 1, 86, 8,
	ftAnimLoop(0x6800, -124),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimSleep_joint23[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 367, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 34), 129, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 126, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 194, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 208, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 425, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 412, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 369, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 368, -1,
	ftAnimLoop(0x6800, -78),
};

/* Joint 24 */
u16 dFTFoxAnimSleep_joint24[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 54, 1, -37, 6, -272, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 47), -178, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 51), -17, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 26), 112, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 116, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), 101, 0,
	ftAnimBlock(0, 20),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 30), -277, 3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -24, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), -43, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 100, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 51, 1,
	ftAnimBlock(0, 23),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -274, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 54, 2, -37, 6, -272, 1,
	ftAnimLoop(0x6800, -144),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimSleep_joint25[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -457, 11, 270, 0, -13, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), -210, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 232, -3, 46, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 115, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 161, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -258, -12,
	ftAnimBlock(0, 7),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 107, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 168, 5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), -600, -9,
	ftAnimBlock(0, 9),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -14, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 14), 266, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 270, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -33, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -613, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -457, 14,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -13, 3,
	ftAnimLoop(0x6800, -168),
	ftAnimEnd(),
	0x4002, 0xFF10, 0x480C, 0x0000, 0x0000, 0x3803, 0x0028, 0x0059, 0x3803, 0x0028, 0xFF10, 0x6800, 0xFFE8, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
