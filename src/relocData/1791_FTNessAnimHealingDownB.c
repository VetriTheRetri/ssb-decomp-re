/* AnimJoint data for relocData file 1791 (FTNessAnimHealingDownB) */
/* 1072 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimHealingDownB_joint1[20];
extern u16 dFTNessAnimHealingDownB_joint2[10];
extern u16 dFTNessAnimHealingDownB_joint4[14];
extern u16 dFTNessAnimHealingDownB_joint5[34];
extern u16 dFTNessAnimHealingDownB_joint6[16];
extern u16 dFTNessAnimHealingDownB_joint7[14];
extern u16 dFTNessAnimHealingDownB_joint8[26];
extern u16 dFTNessAnimHealingDownB_joint10[14];
extern u16 dFTNessAnimHealingDownB_joint11[38];
extern u16 dFTNessAnimHealingDownB_joint12[24];
extern u16 dFTNessAnimHealingDownB_joint13[14];
extern u16 dFTNessAnimHealingDownB_joint15[14];
extern u16 dFTNessAnimHealingDownB_joint16[40];
extern u16 dFTNessAnimHealingDownB_joint18[20];
extern u16 dFTNessAnimHealingDownB_joint19[40];
extern u16 dFTNessAnimHealingDownB_joint21[20];
extern u16 dFTNessAnimHealingDownB_joint22[42];
extern u16 dFTNessAnimHealingDownB_joint24[24];
extern u16 dFTNessAnimHealingDownB_joint25[34];
extern u16 dFTNessAnimHealingDownB_joint26[26];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimHealingDownB_joints[] = {
	(u32)dFTNessAnimHealingDownB_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimHealingDownB_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimHealingDownB_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimHealingDownB_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimHealingDownB_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimHealingDownB_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimHealingDownB_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimHealingDownB_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimHealingDownB_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimHealingDownB_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimHealingDownB_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimHealingDownB_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimHealingDownB_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimHealingDownB_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimHealingDownB_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimHealingDownB_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimHealingDownB_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimHealingDownB_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimHealingDownB_joint25, /* [24] joint 25 */
	(u32)dFTNessAnimHealingDownB_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimHealingDownB_joint1[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY), -23, 400,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), -124,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), -23, 277,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), -23, 400,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimHealingDownB_joint2[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 28, -360, 8,
	_FT_ANIM_CMD(11, 0, 1), 19,
	ftAnimBlock(0, 4),
	ftAnimLoop(0x6800, -18),
};

/* Joint 4 */
u16 dFTNessAnimHealingDownB_joint4[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 4,
	ftAnimBlock(0, 4),
	ftAnimLoop(0x6800, -26),
};

/* Joint 5 */
u16 dFTNessAnimHealingDownB_joint5[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1058, 34, -1332, 0, 744, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1333, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -988, 0, 658, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1023, -34, 700, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1058, -34, -1332, 0, 744, 43,
	ftAnimLoop(0x6800, -64),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimHealingDownB_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 7 */
u16 dFTNessAnimHealingDownB_joint7[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 19,
	ftAnimBlock(0, 4),
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimHealingDownB_joint8[26] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, -8, 363, 0, -30, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -27, 0, 370, 0, -39, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4,
	ftAnimBlock(0, 4),
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNessAnimHealingDownB_joint10[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 19,
	ftAnimBlock(0, 4),
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimHealingDownB_joint11[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1412, 162, 445, 1, 822, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1574, 162, 446, -17, 1002, 188,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1736, 410, 1200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1574, -162, 446, 17, 1002, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1412, -162, 445, -1, 822, -179,
	ftAnimLoop(0x6800, -74),
};

/* Joint 12 */
u16 dFTNessAnimHealingDownB_joint12[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -717, 135,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -581, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -381, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -581, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -717, -135,
	ftAnimLoop(0x6800, -46),
};

/* Joint 13 */
u16 dFTNessAnimHealingDownB_joint13[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -424, 38, 60,
	_FT_ANIM_CMD(11, 0, 1), 4,
	ftAnimBlock(0, 4),
	ftAnimLoop(0x6800, -26),
};

/* Joint 15 */
u16 dFTNessAnimHealingDownB_joint15[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	_FT_ANIM_CMD(11, 0, 1), 19,
	ftAnimBlock(0, 4),
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimHealingDownB_joint16[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -239, 157, -407, -53, -590, -242,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 13, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -460, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -832, -225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1041, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -81, -126, -832, 225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -239, -157, -407, 53, -590, 242,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimHealingDownB_joint18[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 248, 200,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 556, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 448, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 248, -200,
	ftAnimLoop(0x6800, -38),
};

/* Joint 19 */
u16 dFTNessAnimHealingDownB_joint19[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 57, 25, -8, 0, 476, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 458, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -7, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 82, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 158, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 82, -50, 441, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 57, -25, -8, 0, 476, 34,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimHealingDownB_joint21[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -215, -98, 355,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -236, -10, 545,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -215, -98, 355,
	ftAnimLoop(0x6800, -38),
};

/* Joint 22 */
u16 dFTNessAnimHealingDownB_joint22[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1480, -266, 1064, 9, -2164, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1747, -246, 1073, 54, -2421, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1974, 0, 1174, 0, -2606, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1747, 246, 1073, -54, -2421, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1480, 266, 1064, -9, -2164, 257,
	ftAnimLoop(0x6800, -80),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimHealingDownB_joint24[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 942, 147,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1089, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1217, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1089, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 942, -147,
	ftAnimLoop(0x6800, -46),
};

/* Joint 25 */
u16 dFTNessAnimHealingDownB_joint25[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1705, 42, -1599, -8, -1795, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1607, 12, -1817, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1747, 62,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 1830,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1747, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1705, -42, -1599, 8, -1795, 21,
	ftAnimLoop(0x6800, -66),
};

/* Joint 26 */
u16 dFTNessAnimHealingDownB_joint26[26] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -72, 11, -388,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -72, -14, -575,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -72, 11, -388,
	ftAnimLoop(0x6800, -38),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
