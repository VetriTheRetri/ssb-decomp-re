/* AnimJoint data for relocData file 1665 (FTNessAnimWalk1) */
/* 2416 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimWalk1_joint1[52];
extern u16 dFTNessAnimWalk1_joint2[64];
extern u16 dFTNessAnimWalk1_joint4[58];
extern u16 dFTNessAnimWalk1_joint5[92];
extern u16 dFTNessAnimWalk1_joint7[40];
extern u16 dFTNessAnimWalk1_joint8[58];
extern u16 dFTNessAnimWalk1_joint10[58];
extern u16 dFTNessAnimWalk1_joint11[102];
extern u16 dFTNessAnimWalk1_joint12[40];
extern u16 dFTNessAnimWalk1_joint13[10];
extern u16 dFTNessAnimWalk1_joint15[12];
extern u16 dFTNessAnimWalk1_joint16[100];
extern u16 dFTNessAnimWalk1_joint18[48];
extern u16 dFTNessAnimWalk1_joint19[106];
extern u16 dFTNessAnimWalk1_joint21[30];
extern u16 dFTNessAnimWalk1_joint22[106];
extern u16 dFTNessAnimWalk1_joint24[48];
extern u16 dFTNessAnimWalk1_joint25[96];
extern u16 dFTNessAnimWalk1_joint26[36];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTNessAnimWalk1_joints[] = {
	(AObjEvent32 *)dFTNessAnimWalk1_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimWalk1_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimWalk1_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTNessAnimWalk1_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTNessAnimWalk1_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTNessAnimWalk1_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNessAnimWalk1_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTNessAnimWalk1_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTNessAnimWalk1_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimWalk1_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimWalk1_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTNessAnimWalk1_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTNessAnimWalk1_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTNessAnimWalk1_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTNessAnimWalk1_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTNessAnimWalk1_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTNessAnimWalk1_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTNessAnimWalk1_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTNessAnimWalk1_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimWalk1_joint1[52] = {
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
u16 dFTNessAnimWalk1_joint2[64] = {
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
u16 dFTNessAnimWalk1_joint4[58] = {
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
u16 dFTNessAnimWalk1_joint5[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 137, -1, -528, 0, 148, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), -146, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), -541, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 393, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 385, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), 165, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -134, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 119, -8,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -537, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 44), -546, 4,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 109, -10, 173, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 29), -68, 24, 324, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -43, 25, 304, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 134, 5, 151, -4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -542, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -529, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 137, 2, -528, 0, 148, -2,
	ftAnimLoop(0x6800, -180),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimWalk1_joint7[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -370, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -574, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -570, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), -394, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -404, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), -489, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -472, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -372, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -370, 2,
	ftAnimLoop(0x6800, -78),
};

/* Joint 8 */
u16 dFTNessAnimWalk1_joint8[58] = {
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
u16 dFTNessAnimWalk1_joint10[58] = {
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
u16 dFTNessAnimWalk1_joint11[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -95, 1, 516, 0, 154, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), 167, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 40), 524, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 382, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 375, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), 178, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 156, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), -78, 8,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 521, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 44), 528, -3,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -69, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), 95, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 188, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 29), 301, -19,
	ftAnimBlock(0, 28),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 72, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -93, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 281, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 157, -4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 524, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 517, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -95, -2, 516, 0, 154, -2,
	ftAnimLoop(0x6800, -200),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimWalk1_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -370, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -574, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -570, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), -395, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -404, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), -489, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -472, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -372, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -370, 2,
	ftAnimLoop(0x6800, -78),
};

/* Joint 13 */
u16 dFTNessAnimWalk1_joint13[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 625, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 160,
	ftAnimBlock(0, 90),
	ftAnimLoop(0x6800, -18),
};

/* Joint 15 */
u16 dFTNessAnimWalk1_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 90),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimWalk1_joint16[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -232, 4, -26, -1, 87, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), -90, -3, 136, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 28), -90, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -90, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -232, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -93, -2, 145, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -58, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 276, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -229, 3, 261, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), -183, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), -147, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -63, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 35), -46, 7,
	ftAnimBlock(0, 22),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -187, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -232, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -145, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 78, 11,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -39, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -28, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -232, 0, -26, 2, 87, 8,
	ftAnimLoop(0x6800, -196),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimWalk1_joint18[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 290, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), 535, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 523, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 361, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 385, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 823, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 804, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 360, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 327, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 302, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 290, -12,
	ftAnimLoop(0x6800, -94),
};

/* Joint 19 */
u16 dFTNessAnimWalk1_joint19[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 28, -1, 58, 5, -88, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 39), -13, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 44), 234, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), -160, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -158, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -221, 0,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -17, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), 10, -2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 237, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 62, -4,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -221, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -159, 8,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 7, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 67, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 62, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 58, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -150, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -92, 4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 65, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 30, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 28, -2, 58, 0, -88, 4,
	ftAnimLoop(0x6800, -208),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimWalk1_joint21[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 107, 1, 5, 0, -25, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 32), 232, -1, 5, 0, -26, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 48), 20, -2, 5, 0, -25, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 107, 5, -25,
	ftAnimLoop(0x6800, -58),
};

/* Joint 22 */
u16 dFTNessAnimWalk1_joint22[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 37, 0, 52, 0, 264, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -219, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 45), 101, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 22), 72, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 71, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 74, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -228, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), 22, 5,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 77, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), 71, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 99, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), 47, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 27, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 33), 200, 13,
	ftAnimBlock(0, 25),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 75, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 54, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 45, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 39, -1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 213, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 267, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 37, -2, 52, -2, 264, -2,
	ftAnimLoop(0x6800, -208),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimWalk1_joint24[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 412, 30,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 952, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 944, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 683, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 654, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 442, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 536, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 530, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 402, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 412, 9,
	ftAnimLoop(0x6800, -94),
};

/* Joint 25 */
u16 dFTNessAnimWalk1_joint25[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -33, -3, 11, 0, -278, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), 49, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 30), -127, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 24), -133, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -134, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 38), -116, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 54, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 36), -89, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -129, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 43), -199, 1,
	ftAnimBlock(0, 32),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -117, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -18, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -94, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 6, 4,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -197, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -272, -5,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -19, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -30, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -33, -3, 11, 4, -278, -5,
	ftAnimLoop(0x6800, -188),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimWalk1_joint26[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 306, 0, -17, 0, 25, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 87, -5, -18, 0, 26, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 113, 3, -53, 0, 63, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 54), 306, -17, 25,
	ftAnimLoop(0x6800, -58),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
