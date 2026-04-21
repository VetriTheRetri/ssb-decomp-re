/* AnimJoint data for relocData file 1199 (FTLinkAnimCliffAttackSlow1) */
/* 1008 bytes: 120-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimCliffAttackSlow1_joint1[14];
extern u16 dFTLinkAnimCliffAttackSlow1_joint2[16];
extern u16 dFTLinkAnimCliffAttackSlow1_joint3[16];
extern u16 dFTLinkAnimCliffAttackSlow1_joint5[16];
extern u16 dFTLinkAnimCliffAttackSlow1_joint6[34];
extern u16 dFTLinkAnimCliffAttackSlow1_joint7[20];
extern u16 dFTLinkAnimCliffAttackSlow1_joint10[16];
extern u16 dFTLinkAnimCliffAttackSlow1_joint11[38];
extern u16 dFTLinkAnimCliffAttackSlow1_joint12[36];
extern u16 dFTLinkAnimCliffAttackSlow1_joint13[16];
extern u16 dFTLinkAnimCliffAttackSlow1_joint14[14];
extern u16 dFTLinkAnimCliffAttackSlow1_joint17[16];
extern u16 dFTLinkAnimCliffAttackSlow1_joint18[16];
extern u16 dFTLinkAnimCliffAttackSlow1_joint19[16];
extern u16 dFTLinkAnimCliffAttackSlow1_joint21[16];
extern u16 dFTLinkAnimCliffAttackSlow1_joint22[24];
extern u16 dFTLinkAnimCliffAttackSlow1_joint24[16];
extern u16 dFTLinkAnimCliffAttackSlow1_joint26[24];
extern u16 dFTLinkAnimCliffAttackSlow1_joint27[34];
extern u16 dFTLinkAnimCliffAttackSlow1_joint29[16];
extern u16 dFTLinkAnimCliffAttackSlow1_joint30[30];

/* Joint pointer table (30 entries, 120 bytes) */
u32 dFTLinkAnimCliffAttackSlow1_joints[] = {
	(u32)dFTLinkAnimCliffAttackSlow1_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimCliffAttackSlow1_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimCliffAttackSlow1_joint3, /* [2] joint 3 */
	(u32)dFTLinkAnimCliffAttackSlow1_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTLinkAnimCliffAttackSlow1_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimCliffAttackSlow1_joint7, /* [6] joint 7 */
	(u32)dFTLinkAnimCliffAttackSlow1_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTLinkAnimCliffAttackSlow1_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimCliffAttackSlow1_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimCliffAttackSlow1_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimCliffAttackSlow1_joint14, /* [13] joint 14 */
	(u32)dFTLinkAnimCliffAttackSlow1_joint17, /* [14] joint 17 */
	0x00000000, /* [15] NULL */
	0x00000000, /* [16] NULL */
	(u32)dFTLinkAnimCliffAttackSlow1_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimCliffAttackSlow1_joint19, /* [18] joint 19 */
	(u32)dFTLinkAnimCliffAttackSlow1_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTLinkAnimCliffAttackSlow1_joint22, /* [21] joint 22 */
	(u32)dFTLinkAnimCliffAttackSlow1_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTLinkAnimCliffAttackSlow1_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	(u32)dFTLinkAnimCliffAttackSlow1_joint27, /* [26] joint 27 */
	(u32)dFTLinkAnimCliffAttackSlow1_joint29, /* [27] joint 29 */
	0x00000000, /* [28] NULL */
	(u32)dFTLinkAnimCliffAttackSlow1_joint30, /* [29] joint 30 */
};

/* Joint 1 */
u16 dFTLinkAnimCliffAttackSlow1_joint1[14] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValRate(FT_ANIM_TRAY), -1132, 986,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 453, 0, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimCliffAttackSlow1_joint2[16] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY), -314, -71, 936, -452,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAZ), -214,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -314, 157, 81, -282, -214, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTLinkAnimCliffAttackSlow1_joint3[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 18, -9, -45, 37, -95, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 37, 6, -32, 2, -336, -13,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimCliffAttackSlow1_joint5[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 408, 41, 141, 12, 53, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 679, -6, 209, 23, 307, -19,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimCliffAttackSlow1_joint6[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1111, 112, -1364, -10, -1520, -73,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 1442, -2, -1450, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1787, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1771, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1758, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1440, -1, -1449, 1, -1751, 6,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTLinkAnimCliffAttackSlow1_joint7[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1143, 42,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -994, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1004, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimCliffAttackSlow1_joint10[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 359, 26, 63, -43, -74, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 590, -40, -109, -10, -316, 26,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimCliffAttackSlow1_joint11[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1108, -17, 1582, 138, 548, -95,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1361, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1775, -5, 344, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1769, -45, 331, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1653, -26, 513, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1404, 42, 1632, -21, 582, 69,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLinkAnimCliffAttackSlow1_joint12[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -364, 277,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -274, -207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -414, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -528, -113,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimCliffAttackSlow1_joint13[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -261, -17, 49, 17, 311, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -261, 6, 49, -6, 311, -7,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTLinkAnimCliffAttackSlow1_joint14[14] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 804, 3, -804, 0, 804, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimCliffAttackSlow1_joint17[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1569, 5, -22, 11, -1296, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1780, 3, -360, -12, -1330, 23,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimCliffAttackSlow1_joint18[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -78, 0, -15, -15, 68, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -78, 1, -15, -21, 68, 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTLinkAnimCliffAttackSlow1_joint19[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -122, 0, -137, -25, 95, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -122, 4, -137, 20, 95, -5,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimCliffAttackSlow1_joint21[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -179, -11, -260, -17, 55, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -179, -3, -260, 1, 55, 2,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTLinkAnimCliffAttackSlow1_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 204, -1, -177, -11, -256, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 202, 1, -175, 0, -228, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 204, 1, -177, -2, -256, -27,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTLinkAnimCliffAttackSlow1_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 469, -42,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 417, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 469, 51,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTLinkAnimCliffAttackSlow1_joint26[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 472, -12, 38, 0, 13, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 471, 1, 42, -3, 16, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 472, 0, 38, -4, 13, -2,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTLinkAnimCliffAttackSlow1_joint27[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 230, -100, 437, 34, -654, -128,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -444, -25, 83, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1009, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -959, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -829, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -460, -15, 67, -15, -830, -1,
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTLinkAnimCliffAttackSlow1_joint29[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1140, 16,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 978, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 971, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 30 */
u16 dFTLinkAnimCliffAttackSlow1_joint30[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -876, 7, -102, 0, 354, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -106, 2, 370, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -687, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -659, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -644, 15, -102, 3, 354, -15,
	ftAnimEnd(),
};
