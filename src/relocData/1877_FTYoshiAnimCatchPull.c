/* AnimJoint data for relocData file 1877 (FTYoshiAnimCatchPull) */
/* 1088 bytes: 112-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimCatchPull_joint1[18];
extern u16 dFTYoshiAnimCatchPull_joint2[28];
extern u16 dFTYoshiAnimCatchPull_joint3[28];
extern u16 dFTYoshiAnimCatchPull_joint4[34];
extern u16 dFTYoshiAnimCatchPull_joint5[36];
extern u16 dFTYoshiAnimCatchPull_joint7[30];
extern u16 dFTYoshiAnimCatchPull_joint8[24];
extern u16 dFTYoshiAnimCatchPull_joint11[16];
extern u16 dFTYoshiAnimCatchPull_joint12[24];
extern u16 dFTYoshiAnimCatchPull_joint13[16];
extern u16 dFTYoshiAnimCatchPull_joint14[12];
extern u16 dFTYoshiAnimCatchPull_joint15[20];
extern u16 dFTYoshiAnimCatchPull_joint16[32];
extern u16 dFTYoshiAnimCatchPull_joint18[16];
extern u16 dFTYoshiAnimCatchPull_joint19[24];
extern u16 dFTYoshiAnimCatchPull_joint21[16];
extern u16 dFTYoshiAnimCatchPull_joint23[24];
extern u16 dFTYoshiAnimCatchPull_joint24[24];
extern u16 dFTYoshiAnimCatchPull_joint26[16];
extern u16 dFTYoshiAnimCatchPull_joint27[50];

/* Joint pointer table (28 entries, 112 bytes) */
u32 dFTYoshiAnimCatchPull_joints[] = {
	(u32)dFTYoshiAnimCatchPull_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimCatchPull_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimCatchPull_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimCatchPull_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimCatchPull_joint5, /* [4] joint 5 */
	(u32)dFTYoshiAnimCatchPull_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTYoshiAnimCatchPull_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimCatchPull_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTYoshiAnimCatchPull_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimCatchPull_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimCatchPull_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimCatchPull_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimCatchPull_joint16, /* [15] joint 16 */
	(u32)dFTYoshiAnimCatchPull_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTYoshiAnimCatchPull_joint19, /* [18] joint 19 */
	(u32)dFTYoshiAnimCatchPull_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTYoshiAnimCatchPull_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTYoshiAnimCatchPull_joint24, /* [23] joint 24 */
	(u32)dFTYoshiAnimCatchPull_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	(u32)dFTYoshiAnimCatchPull_joint27, /* [26] joint 27 */
	0xFFFF0103, /* [27] END */
};

/* Joint 1 */
u16 dFTYoshiAnimCatchPull_joint1[18] = {
	ftAnimSetValBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 525, 180,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 525, 180,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 5,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_TRAX), 0, 0,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTYoshiAnimCatchPull_joint2[28] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 30, 10, 20, 8,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 34, 1, 23, -28,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 15,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -8, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -7, 0, 0, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimCatchPull_joint3[28] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 172,
	ftAnimSetValBlock(FT_ANIM_ROTX), 607,
	ftAnimSetValRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 33, 0, 8,
	ftAnimSetValT(FT_ANIM_ROTX, 8), 607,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 5,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 15, 0, -12,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTYoshiAnimCatchPull_joint4[34] = {
	ftAnimSetValBlock(FT_ANIM_ROTX), -876,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 600, 66, 329, -56,
	ftAnimSetValT(FT_ANIM_ROTX, 8), -876,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 5,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 2, 600, -85, 329, 49,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 5,
	ftAnimSetValAfter(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTYoshiAnimCatchPull_joint5[36] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 48, 120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 619, 68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 619, -119,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 5,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), -337, -47, 5939, 184, 10186, 609, 8556, 446,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimCatchPull_joint7[30] = {
	ftAnimSetValBlock(FT_ANIM_ROTX), 276,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTX, 8), 276,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 5,
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAZ), 0, 56, 0, 20480,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 0, 56, 26, 0, 15,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAZ, 3), 4096,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimCatchPull_joint8[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 11, 30, -1134, 18, 2487, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 56, -3, -1092, 24, 2435, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 34, -22, -1066, 25, 2462, 27,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTYoshiAnimCatchPull_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -651, -15,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -680, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -681, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTYoshiAnimCatchPull_joint12[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -350, -7, 1410, 7, -595, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -372, -19, 1415, -7, -563, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -397, -24, 1402, -13, -558, 4,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimCatchPull_joint13[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -538, -32,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -621, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -681, -60,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimCatchPull_joint14[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 172, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 15,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimCatchPull_joint15[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 156, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -536, -893,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 18), -536, -4, -893, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 15,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTYoshiAnimCatchPull_joint16[32] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), -384, 28,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 260, 4,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -312, -51, 0, 23, 0, -22,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimCatchPull_joint18[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), -418, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 303, -1,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 9,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTYoshiAnimCatchPull_joint19[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, 0, 1608, 0, -1561, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1608, 0, 1608, 0, -1569, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1608, 0, 1608, 0, -1574, -4,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTYoshiAnimCatchPull_joint21[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 525, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 534, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 538, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTYoshiAnimCatchPull_joint23[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1602, -5, -182, 13, -569, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1592, -3, -155, 13, -569, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1590, -2, -143, 12, -570, 0,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTYoshiAnimCatchPull_joint24[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1598, 0, 1576, 0, -2277, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1599, 0, 1576, 0, -2281, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1598, 0, 1576, 0, -2284, -3,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimCatchPull_joint26[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 896, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 895, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 894, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTYoshiAnimCatchPull_joint27[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -7, 0, -1739, 0, 1397, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -14, -9, -1740, 0, 1401, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -26, -12, -1739, 1, 1405, 3,
	ftAnimEnd(),
	0x40E0, 0x0000, 0x003C, 0x0C6C, 0x480E, 0x0000, 0x0648, 0x0000, 0x2861, 0x0004, 0x0000, 0x0000, 0x003C, 0x018C, 0x2081, 0x0002, 0x0686, 0xEF68, 0x2881, 0x0002, 0x041F, 0x0003, 0x0801, 0x0001, 0x0000, 0x0000,
};
