/* AnimJoint data for relocData file 1807 (FTNessAnimPKThunderStartGround2) */
/* 1984 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimPKThunderStartGround2_joint1[68];
extern u16 dFTNessAnimPKThunderStartGround2_joint2[16];
extern u16 dFTNessAnimPKThunderStartGround2_joint4[22];
extern u16 dFTNessAnimPKThunderStartGround2_joint5[90];
extern u16 dFTNessAnimPKThunderStartGround2_joint6[28];
extern u16 dFTNessAnimPKThunderStartGround2_joint7[30];
extern u16 dFTNessAnimPKThunderStartGround2_joint8[32];
extern u16 dFTNessAnimPKThunderStartGround2_joint10[14];
extern u16 dFTNessAnimPKThunderStartGround2_joint11[90];
extern u16 dFTNessAnimPKThunderStartGround2_joint12[44];
extern u16 dFTNessAnimPKThunderStartGround2_joint13[30];
extern u16 dFTNessAnimPKThunderStartGround2_joint15[14];
extern u16 dFTNessAnimPKThunderStartGround2_joint16[90];
extern u16 dFTNessAnimPKThunderStartGround2_joint18[48];
extern u16 dFTNessAnimPKThunderStartGround2_joint19[62];
extern u16 dFTNessAnimPKThunderStartGround2_joint21[30];
extern u16 dFTNessAnimPKThunderStartGround2_joint22[86];
extern u16 dFTNessAnimPKThunderStartGround2_joint24[48];
extern u16 dFTNessAnimPKThunderStartGround2_joint25[62];
extern u16 dFTNessAnimPKThunderStartGround2_joint26[36];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimPKThunderStartGround2_joints[] = {
	(u32)dFTNessAnimPKThunderStartGround2_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimPKThunderStartGround2_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimPKThunderStartGround2_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimPKThunderStartGround2_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimPKThunderStartGround2_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimPKThunderStartGround2_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimPKThunderStartGround2_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimPKThunderStartGround2_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimPKThunderStartGround2_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimPKThunderStartGround2_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimPKThunderStartGround2_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimPKThunderStartGround2_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimPKThunderStartGround2_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimPKThunderStartGround2_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimPKThunderStartGround2_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimPKThunderStartGround2_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimPKThunderStartGround2_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimPKThunderStartGround2_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimPKThunderStartGround2_joint25, /* [24] joint 25 */
	(u32)dFTNessAnimPKThunderStartGround2_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimPKThunderStartGround2_joint1[68] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAZ), -189, -23,
	ftAnimSetValRate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, -4, -1, 441, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 10), -189, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 10), 0, 0, -3, -2,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 493, -7,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 1), 439,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 1), 386,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 1), 441,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 1), 499,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 1), 439,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 1), 384,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 1), 439,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 1), 499,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 1), 436,
	ftAnimSetValT(FT_ANIM_TRAY, 8), 437,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -189, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 16), 0, -16, -28,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -134),
};

/* Joint 2 */
u16 dFTNessAnimPKThunderStartGround2_joint2[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 186,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -360, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 186,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 185, 0,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimPKThunderStartGround2_joint4[22] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 158, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 158, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 157, 0,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -40),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimPKThunderStartGround2_joint5[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1344, -37, -1077, 33, -1870, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1306, 0, -1043, 0, -1855, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1346, -356, -1078, 115, -1870, 305,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 593, 2, -812, -1, -1244, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1351, 357, -1081, -114, -1873, -306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1308, 0, -1041, 1, -1857, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1350, -120, -1078, 107, -1874, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1067, -2, -827, 2, -1712, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1345, 126, -1073, -112, -1873, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1321, -3, -1052, 2, -1863, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1339, 17, -1069, -17, -1870, -6,
	ftAnimLoop(0x6800, -176),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimPKThunderStartGround2_joint6[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -642, -27,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -637, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -671, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -646, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -664, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -650, 14,
	ftAnimLoop(0x6800, -54),
};

/* Joint 7 */
u16 dFTNessAnimPKThunderStartGround2_joint7[30] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 11, -1, -269, -12,
	ftAnimSetValBlock(FT_ANIM_ROTY), 237,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 11, 0, -269, 10,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 10), 237,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -9,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, 0, 0,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -58),
};

/* Joint 8 */
u16 dFTNessAnimPKThunderStartGround2_joint8[32] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 235, 0, -57, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 235, 0, 35, 0, -57, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 2), 299,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 254, -7, 72, -11,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNessAnimPKThunderStartGround2_joint10[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 24,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimPKThunderStartGround2_joint11[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2936, -6, 512, 77, 2323, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2930, 44, 590, 13, 2328, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3025, -251, 540, -29, 2426, -250,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 532, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2427, -10, 1827, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3004, 231, 2401, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2889, -18, 576, -3, 2283, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 435, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2967, -231, 2359, -229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2425, -13, 1825, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2940, 215, 495, 56, 2323, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2857, -10, 549, 10, 2244, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2919, 62, 515, -33, 2305, 60,
	ftAnimLoop(0x6800, -176),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimPKThunderStartGround2_joint12[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -196, -168,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -364, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -315, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -197, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -283, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -243, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -157, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -247, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -195, 51,
	ftAnimLoop(0x6800, -86),
};

/* Joint 13 */
u16 dFTNessAnimPKThunderStartGround2_joint13[30] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 509, 16, -493, -42,
	ftAnimSetValBlock(FT_ANIM_ROTY), -317,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 509, -16, -493, 23,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 10), -317,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 14,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 90, 54, 126,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -58),
};

/* Joint 15 */
u16 dFTNessAnimPKThunderStartGround2_joint15[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	_FT_ANIM_CMD(11, 0, 1), 8,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimPKThunderStartGround2_joint16[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -203, -114, -418, 63, -621, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -318, -4, -355, 1, -475, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -212, 121, -415, -45, -608, -144,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -412, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -75, -3, -764, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -219, -128, -601, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -332, 4, -343, -1, -456, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -447, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -210, 136, -614, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -60, 3, -785, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -204, -132, -419, 48, -623, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -324, 5, -351, -2, -470, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -192, 132, -423, -71, -637, -166,
	ftAnimLoop(0x6800, -176),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimPKThunderStartGround2_joint18[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 768, -188,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 580, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 758, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 907, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 750, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 550, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 762, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 921, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 770, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 569, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 784, 214,
	ftAnimLoop(0x6800, -94),
};

/* Joint 19 */
u16 dFTNessAnimPKThunderStartGround2_joint19[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -122, 16, -162, 1, -99, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -120, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -160, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -45, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -105, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -104, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -103, 0, -37, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -121, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -136, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -102, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -103, 0, -37, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -122, -19, -162, -2, -104, -66,
	ftAnimLoop(0x6800, -120),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimPKThunderStartGround2_joint21[30] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -296, -7, 269, 6, 141, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -296, -6, 269, -7, 141, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -406, 14, 139, -16, 115, -8,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -58),
};

/* Joint 22 */
u16 dFTNessAnimPKThunderStartGround2_joint22[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 103, 116, 382, -41, -743, 159,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 382, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 219, -2, -584, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 98, -126, -750, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -34, 2, -916, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 103, 132, -744, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 231, -2, 333, 0, -566, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 388, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 99, -135, -750, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -38, 0, -922, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 99, 135, 383, -27, -750, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 232, -4, 333, 0, -565, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 90, -141, 384, 51, -760, -194,
	ftAnimLoop(0x6800, -168),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimPKThunderStartGround2_joint24[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 688, -182,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 505, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 695, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 842, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 688, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 479, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 693, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 845, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 692, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 477, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 702, 225,
	ftAnimLoop(0x6800, -94),
};

/* Joint 25 */
u16 dFTNessAnimPKThunderStartGround2_joint25[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 22, -11, -11, -3, -8, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 21, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -15, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 46, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 9, 0, 57, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 22, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -34, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 9, 0, 58, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 23, 14, -11, 3, -10, -68,
	ftAnimLoop(0x6800, -120),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimPKThunderStartGround2_joint26[36] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -419, 6, -153, -2, -137, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -419, -2, -153, 4, -137, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -466, 29, -67, 9, -68, 8,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -58),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
