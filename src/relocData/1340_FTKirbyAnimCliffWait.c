/* AnimJoint data for relocData file 1340 (FTKirbyAnimCliffWait) */
/* 992 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimCliffWait_joint1[8];
extern u16 dFTKirbyAnimCliffWait_joint2[42];
extern u16 dFTKirbyAnimCliffWait_joint3[12];
extern u16 dFTKirbyAnimCliffWait_joint4[14];
extern u16 dFTKirbyAnimCliffWait_joint6[14];
extern u16 dFTKirbyAnimCliffWait_joint7[30];
extern u16 dFTKirbyAnimCliffWait_joint8[22];
extern u16 dFTKirbyAnimCliffWait_joint10[14];
extern u16 dFTKirbyAnimCliffWait_joint11[68];
extern u16 dFTKirbyAnimCliffWait_joint12[16];
extern u16 dFTKirbyAnimCliffWait_joint14[12];
extern u16 dFTKirbyAnimCliffWait_joint15[40];
extern u16 dFTKirbyAnimCliffWait_joint17[16];
extern u16 dFTKirbyAnimCliffWait_joint19[40];
extern u16 dFTKirbyAnimCliffWait_joint20[40];
extern u16 dFTKirbyAnimCliffWait_joint22[22];
extern u16 dFTKirbyAnimCliffWait_joint23[40];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTKirbyAnimCliffWait_joints[] = {
	(u32)dFTKirbyAnimCliffWait_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimCliffWait_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimCliffWait_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimCliffWait_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimCliffWait_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTKirbyAnimCliffWait_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimCliffWait_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimCliffWait_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimCliffWait_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimCliffWait_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimCliffWait_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTKirbyAnimCliffWait_joint15, /* [14] joint 15 */
	(u32)dFTKirbyAnimCliffWait_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTKirbyAnimCliffWait_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimCliffWait_joint20, /* [19] joint 20 */
	(u32)dFTKirbyAnimCliffWait_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTKirbyAnimCliffWait_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTKirbyAnimCliffWait_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -1320, -600,
	ftAnimBlock(0, 64),
	ftAnimLoop(0x6800, -14),
};

/* Joint 2 */
u16 dFTKirbyAnimCliffWait_joint2[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), -67, -120, 600,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 0, 4,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 32), 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 16), 570,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAY, 16), 67, 600,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 0, -4,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 32), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 16), 570,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAY, 16), -67, 600,
	ftAnimLoop(0x6800, -80),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimCliffWait_joint3[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 0, 0, -312, 0,
	ftAnimBlock(0, 64),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTKirbyAnimCliffWait_joint4[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -357, 268, 0, 0, 432, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 64),
	ftAnimLoop(0x6800, -26),
};

/* Joint 6 */
u16 dFTKirbyAnimCliffWait_joint6[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 357, -285, 0, -120, -60, -180, 4096, 4096, 4096,
	ftAnimBlock(0, 64),
	ftAnimLoop(0x6800, -26),
};

/* Joint 7 */
u16 dFTKirbyAnimCliffWait_joint7[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 739, 0, -1213, 3, 14, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 63), 739, 0, -1209, 0, 15, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 739, 0, -1210, 0, 15, 0,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTKirbyAnimCliffWait_joint8[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 29), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -42),
};

/* Joint 10 */
u16 dFTKirbyAnimCliffWait_joint10[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 357, 120, 120, 60, 4096, 4096, 4096,
	ftAnimBlock(0, 64),
	ftAnimLoop(0x6800, -26),
};

/* Joint 11 */
u16 dFTKirbyAnimCliffWait_joint11[68] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1590, -5, 1153, -4, -801, -1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 38), 1105, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 40), -744, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 30), 1564, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1567, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), 1601, -5,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1112, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 1157, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -745, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -800, -1,
	ftAnimBlock(0, 21),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1595, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1590, -5, 1153, -3, -801, -1,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTKirbyAnimCliffWait_joint12[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 63), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimCliffWait_joint14[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 64),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimCliffWait_joint15[40] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -87, 3, -401, 0, 263, -4,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 63), -90, 0, -401, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 43), 283, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 281, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 267, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -91, 0, -400, 1, 268, 0,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimCliffWait_joint17[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 63), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimLoop(0x6800, -30),
};

/* Joint 19 */
u16 dFTKirbyAnimCliffWait_joint19[40] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -110, -1, 213, -2, -2661, -2,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3481, 3686, 3891,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 63), -108, -1, 215, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 51), -2626, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2627, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -2658, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -110, -1, 213, -2, -2657, 0,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimCliffWait_joint20[40] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -61, -4, 192, 0, -224, -8,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 63), -59, -2, 191, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 47), -200, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -200, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -223, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -61, -1, 192, 0, -224, 0,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimCliffWait_joint22[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 33), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 29), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimLoop(0x6800, -42),
};

/* Joint 23 */
u16 dFTKirbyAnimCliffWait_joint23[40] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1563, 3, -1488, 0, -810, -7,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3481, 3686, 3891,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 63), -1488, 0, -810, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 47), -1592, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1593, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -1566, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1563, 3, -1488, 0, -810, 0,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};
