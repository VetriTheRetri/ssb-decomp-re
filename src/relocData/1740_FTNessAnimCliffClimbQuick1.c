/* AnimJoint data for relocData file 1740 (FTNessAnimCliffClimbQuick1) */
/* 1360 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimCliffClimbQuick1_joint1[38];
extern u16 dFTNessAnimCliffClimbQuick1_joint2[44];
extern u16 dFTNessAnimCliffClimbQuick1_joint3[42];
extern u16 dFTNessAnimCliffClimbQuick1_joint5[40];
extern u16 dFTNessAnimCliffClimbQuick1_joint6[48];
extern u16 dFTNessAnimCliffClimbQuick1_joint7[16];
extern u16 dFTNessAnimCliffClimbQuick1_joint8[18];
extern u16 dFTNessAnimCliffClimbQuick1_joint9[38];
extern u16 dFTNessAnimCliffClimbQuick1_joint11[36];
extern u16 dFTNessAnimCliffClimbQuick1_joint12[48];
extern u16 dFTNessAnimCliffClimbQuick1_joint13[14];
extern u16 dFTNessAnimCliffClimbQuick1_joint14[42];
extern u16 dFTNessAnimCliffClimbQuick1_joint16[12];
extern u16 dFTNessAnimCliffClimbQuick1_joint17[24];
extern u16 dFTNessAnimCliffClimbQuick1_joint19[16];
extern u16 dFTNessAnimCliffClimbQuick1_joint20[24];
extern u16 dFTNessAnimCliffClimbQuick1_joint22[20];
extern u16 dFTNessAnimCliffClimbQuick1_joint23[38];
extern u16 dFTNessAnimCliffClimbQuick1_joint25[14];
extern u16 dFTNessAnimCliffClimbQuick1_joint26[30];
extern u16 dFTNessAnimCliffClimbQuick1_joint27[24];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTNessAnimCliffClimbQuick1_joints[] = {
	(AObjEvent32 *)dFTNessAnimCliffClimbQuick1_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimCliffClimbQuick1_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimCliffClimbQuick1_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTNessAnimCliffClimbQuick1_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTNessAnimCliffClimbQuick1_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimCliffClimbQuick1_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNessAnimCliffClimbQuick1_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNessAnimCliffClimbQuick1_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTNessAnimCliffClimbQuick1_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTNessAnimCliffClimbQuick1_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimCliffClimbQuick1_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimCliffClimbQuick1_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTNessAnimCliffClimbQuick1_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTNessAnimCliffClimbQuick1_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTNessAnimCliffClimbQuick1_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTNessAnimCliffClimbQuick1_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTNessAnimCliffClimbQuick1_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTNessAnimCliffClimbQuick1_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTNessAnimCliffClimbQuick1_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTNessAnimCliffClimbQuick1_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTNessAnimCliffClimbQuick1_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTNessAnimCliffClimbQuick1_joint1[38] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), -931, 506, -182, -488,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -254, 1500, -545, -820,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 2,
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -181, 1019, -592, 260,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 80, -480, 879,
	ftAnimSetValT(FT_ANIM_TRAY, 17), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 0, 621,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimCliffClimbQuick1_joint2[44] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAZ), -77,
	ftAnimSetValRateBlock(FT_ANIM_TRAY), 218, 679,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 600, 732, 0, 5,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX), 0, 91, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 20), 3216,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 3), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 0, 0, 767, -33,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), -73,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTNessAnimCliffClimbQuick1_joint3[42] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAY), 600, -218,
	ftAnimSetValRateT(FT_ANIM_TRAY, 18), 0, -137,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 15,
	ftAnimSetValRate(FT_ANIM_ROTY), 0, -44,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, -804, -57, 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY, 11), -804,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), 7, 1, 10, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 17), 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimCliffClimbQuick1_joint5[40] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 27), 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 7,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 357, -39, 0, -1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -253, -31, -9, -2, -4, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -84, 14, -29, 0, -12, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTNessAnimCliffClimbQuick1_joint6[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2379, -362, -179, -182, 2046, 465,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -562, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2742, -512, 2512, 612,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3404, -586, 3272, 567,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3915, -129, -524, -17, 3647, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3663, 268, -597, -60, 3452, -241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3378, 284, -645, -48, 3164, -287,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimCliffClimbQuick1_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTNessAnimCliffClimbQuick1_joint8[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -804,
	ftAnimSetValRateT(FT_ANIM_ROTX, 35), 0, 14,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 15,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTNessAnimCliffClimbQuick1_joint9[38] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 35), 300,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 15,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 35), 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 15,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -626, -25, 0, -1, 0, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -448, 34, -2, 0, 86, 9,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTNessAnimCliffClimbQuick1_joint11[36] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -18,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 35), 0, 0, 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 15,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -6, 0, 2, 0, -5,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 16), -182, -172,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 113, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 2,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimCliffClimbQuick1_joint12[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 399, 83, 1415, 184, -107, 260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 482, -13, 1599, 195, 152, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 372, 17, 1806, 35, 203, 57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 338, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 518, 68, 1669, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 510, -43, 1758, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 431, -78, 1874, 116, 392, 53,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimCliffClimbQuick1_joint13[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -9,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTNessAnimCliffClimbQuick1_joint14[42] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1429, 8, 0, -10, 0, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1337, -141, -162, -49, 98, 29,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 580, -63, -294, -9, 178, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 953, 116, -220, 20, 217, -2,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimCliffClimbQuick1_joint16[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	_FT_ANIM_CMD(11, 0, 1), 15,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTNessAnimCliffClimbQuick1_joint17[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 224, -27, -58, 4, -81, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 84, -42, -52, 0, -141, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 40, -44, -52, 0, -155, -13,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimCliffClimbQuick1_joint19[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTNessAnimCliffClimbQuick1_joint20[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2128, 67, 1899, -9, 2350, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1831, 69, 1847, -18, 2169, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1766, 64, 1828, -19, 2115, -53,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimCliffClimbQuick1_joint22[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 96, -48, 32, 0, 46, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -130, -13, 26, 1, -19, 2,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTNessAnimCliffClimbQuick1_joint23[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -47, -58, 48, 191, -81, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 513, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 184, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -50, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 28, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 45, 11, 516, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 51, 6, 516, 0, 186, 1,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimCliffClimbQuick1_joint25[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTNessAnimCliffClimbQuick1_joint26[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1807, 127, -1819, 10, 2134, -53,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1768, 16, 1881, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1969, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1933, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1907, -25, -1751, 16, 1812, -68,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTNessAnimCliffClimbQuick1_joint27[24] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 52, -14, 15, 21, -30, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 268, -10, 223, 0, -340, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
