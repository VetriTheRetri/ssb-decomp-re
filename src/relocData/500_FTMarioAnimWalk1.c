/* AnimJoint data for relocData file 500 (FTMarioAnimWalk1) */
/* 2112 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimWalk1_joint1[52];
extern u16 dFTMarioAnimWalk1_joint2[64];
extern u16 dFTMarioAnimWalk1_joint4[58];
extern u16 dFTMarioAnimWalk1_joint5[84];
extern u16 dFTMarioAnimWalk1_joint7[40];
extern u16 dFTMarioAnimWalk1_joint8[58];
extern u16 dFTMarioAnimWalk1_joint10[58];
extern u16 dFTMarioAnimWalk1_joint11[92];
extern u16 dFTMarioAnimWalk1_joint12[40];
extern u16 dFTMarioAnimWalk1_joint13[10];
extern u16 dFTMarioAnimWalk1_joint15[8];
extern u16 dFTMarioAnimWalk1_joint16[98];
extern u16 dFTMarioAnimWalk1_joint18[40];
extern u16 dFTMarioAnimWalk1_joint20[74];
extern u16 dFTMarioAnimWalk1_joint21[94];
extern u16 dFTMarioAnimWalk1_joint23[40];
extern u16 dFTMarioAnimWalk1_joint24[98];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimWalk1_joints[] = {
	(u32)dFTMarioAnimWalk1_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimWalk1_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimWalk1_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimWalk1_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimWalk1_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTMarioAnimWalk1_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimWalk1_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimWalk1_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimWalk1_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimWalk1_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimWalk1_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimWalk1_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimWalk1_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimWalk1_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimWalk1_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimWalk1_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTMarioAnimWalk1_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimWalk1_joint1[52] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 612, -27, 6, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 67), -24,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 22), 538, -18, -2, -2,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 543, 25, -1, 4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 612, -2, 10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 22), 529, -17, 2, -2,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 23), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 544, 28, 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 612, -1, 6, 0,
	ftAnimLoop(0x6800, -100),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimWalk1_joint2[64] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -72, 4, 17, -1,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -222,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 67, 5, 5, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 22), -271,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 93, -1, -14, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), -279,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 37, -3, 49, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), -233,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), -54, -4, 26, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 22), -229,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -85, 0, 50, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), -241,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -72, 4, 17, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), -222,
	ftAnimLoop(0x6800, -124),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimWalk1_joint4[58] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 135, -4, 75, -3,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 375,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), -87, -9, -108, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 22), 268,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 23), 375,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -158, -2, -161, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -135, 4, -174, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 5, 7, -30, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 22), 268,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 23), 375,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 83, 5, 3, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 135, -4, 75, -3,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimWalk1_joint5[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 137, -1, -528, 0, 148, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 49), -533, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 29), -103, 16, 352, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -86, 18, 338, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 25), 41, -16, 233, 13,
	ftAnimBlock(0, 19),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -535, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), -529, 1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 25, -16, 247, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), 240, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 25), -17, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 8, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 134, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 219, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 151, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 137, 2, -528, 0, 148, -2,
	ftAnimLoop(0x6800, -164),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimWalk1_joint7[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -370, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), -531, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -520, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -448, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -460, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), -420, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -404, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -372, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -370, 2,
	ftAnimLoop(0x6800, -78),
};

/* Joint 8 */
u16 dFTMarioAnimWalk1_joint8[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 187, 0, -68, 0, -32, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 173, 0, -68, 0, -24, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 196, 1, -69, 4, -29, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 204, 0, 26, 0, -86, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 166, -1, -68, -3, -43, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 172, 0, -68, 0, -48, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 187, 0, -68, 0, -32, 0,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimWalk1_joint10[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -181, 1, 4, 1, 39, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), -159, 0, 106, 5, 35, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -187, -2, 155, 2, 26, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -210, 0, 167, -1, 25, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), -198, 0, 80, -3, 37, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -200, 0, 49, -3, 44, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -181, 1, 4, 1, 39, 0,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimWalk1_joint11[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -95, 1, 516, 0, 154, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 30), 332, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 80), 543, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 29), 128, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 112, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), -5, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 318, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), 248, 13,
	ftAnimBlock(0, 24),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 9, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), 25, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 261, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), 241, -19,
	ftAnimBlock(0, 23),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 541, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 517, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -93, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 222, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 157, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -95, -2, 516, 0, 154, -2,
	ftAnimLoop(0x6800, -180),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimWalk1_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -370, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), -531, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -520, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -449, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -460, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), -420, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -404, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -372, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -370, 2,
	ftAnimLoop(0x6800, -78),
};

/* Joint 13 */
u16 dFTMarioAnimWalk1_joint13[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 625, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 160,
	ftAnimBlock(0, 90),
	ftAnimLoop(0x6800, -18),
};

/* Joint 15 */
u16 dFTMarioAnimWalk1_joint15[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, -804, 0,
	ftAnimBlock(0, 90),
	ftAnimLoop(0x6800, -14),
};

/* Joint 16 */
u16 dFTMarioAnimWalk1_joint16[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -227, 5, -152, -3, -28, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 35), 223, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 29), -121, -12, -345, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -136, -17, -355, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -256, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), -208, 17,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 242, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), 45, -33,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -261, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 37), -152, 1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -190, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), -170, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 12, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -217, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -194, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -34, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -181, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -226, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -227, 0, -152, 0, -28, 6,
	ftAnimLoop(0x6800, -192),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimWalk1_joint18[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 551, 16,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 37), 717, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 693, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 829, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 861, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 847, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 803, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 555, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 551, -4,
	ftAnimLoop(0x6800, -78),
};

/* Joint 20 */
u16 dFTMarioAnimWalk1_joint20[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -96, 0, 58, 8, -88, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), -312, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 45), 317, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), -142, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -149, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 58), -92, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -327, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -321, -3,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 310, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 43), 60, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -322, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), -157, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -141, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 19), -93, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -96, -3, 58, -1, -88, 4,
	ftAnimLoop(0x6800, -144),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimWalk1_joint21[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 91, -1, 174, 1, 275, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 32), 23, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 45), 159, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -379, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -110, 12,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 28, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 44), 142, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -98, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 32), 159, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 158, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 27), 298, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 306, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 181, -7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 172, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 273, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 141, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 95, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 91, -4, 174, -6, 275, 2,
	ftAnimLoop(0x6800, -184),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimWalk1_joint23[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 590, 28,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), 1109, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1088, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 672, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 680, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), 728, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 708, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 590, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 590, 0,
	ftAnimLoop(0x6800, -78),
};

/* Joint 24 */
u16 dFTMarioAnimWalk1_joint24[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 265, 3, 11, 0, -278, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 47), -173, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 67), -94, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 31), -17, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -18, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), 77, 10,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -175, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), -165, 0,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 88, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 303, -8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -106, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -72, 13,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -172, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -270, -7,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 294, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 266, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -58, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -2, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 265, -1, 11, 13, -278, -7,
	ftAnimLoop(0x6800, -188),
	ftAnimEnd(),
	0x0000, 0x0000,
};
