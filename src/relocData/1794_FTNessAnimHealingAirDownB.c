/* AnimJoint data for relocData file 1794 (FTNessAnimHealingAirDownB) */
/* 976 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimHealingAirDownB_joint1[18];
extern u16 dFTNessAnimHealingAirDownB_joint2[10];
extern u16 dFTNessAnimHealingAirDownB_joint4[14];
extern u16 dFTNessAnimHealingAirDownB_joint5[40];
extern u16 dFTNessAnimHealingAirDownB_joint6[16];
extern u16 dFTNessAnimHealingAirDownB_joint7[14];
extern u16 dFTNessAnimHealingAirDownB_joint8[26];
extern u16 dFTNessAnimHealingAirDownB_joint10[14];
extern u16 dFTNessAnimHealingAirDownB_joint11[34];
extern u16 dFTNessAnimHealingAirDownB_joint12[24];
extern u16 dFTNessAnimHealingAirDownB_joint13[14];
extern u16 dFTNessAnimHealingAirDownB_joint15[14];
extern u16 dFTNessAnimHealingAirDownB_joint16[26];
extern u16 dFTNessAnimHealingAirDownB_joint18[16];
extern u16 dFTNessAnimHealingAirDownB_joint19[26];
extern u16 dFTNessAnimHealingAirDownB_joint21[30];
extern u16 dFTNessAnimHealingAirDownB_joint22[26];
extern u16 dFTNessAnimHealingAirDownB_joint24[16];
extern u16 dFTNessAnimHealingAirDownB_joint25[26];
extern u16 dFTNessAnimHealingAirDownB_joint26[32];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTNessAnimHealingAirDownB_joints[] = {
	(AObjEvent32 *)dFTNessAnimHealingAirDownB_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimHealingAirDownB_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimHealingAirDownB_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTNessAnimHealingAirDownB_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTNessAnimHealingAirDownB_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimHealingAirDownB_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNessAnimHealingAirDownB_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNessAnimHealingAirDownB_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTNessAnimHealingAirDownB_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTNessAnimHealingAirDownB_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimHealingAirDownB_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimHealingAirDownB_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTNessAnimHealingAirDownB_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTNessAnimHealingAirDownB_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTNessAnimHealingAirDownB_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTNessAnimHealingAirDownB_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTNessAnimHealingAirDownB_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTNessAnimHealingAirDownB_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTNessAnimHealingAirDownB_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTNessAnimHealingAirDownB_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimHealingAirDownB_joint1[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 242,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), 122,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), 242,
	ftAnimLoop(0x6800, -32),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimHealingAirDownB_joint2[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 569, -602, -595,
	_FT_ANIM_CMD(11, 0, 1), 7,
	ftAnimBlock(0, 4),
	ftAnimLoop(0x6800, -18),
};

/* Joint 4 */
u16 dFTNessAnimHealingAirDownB_joint4[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 148, 0, 0, 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 19,
	ftAnimBlock(0, 4),
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimHealingAirDownB_joint5[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 141, 193, -682, -32, 2711, -203,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -712, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 335, 273, 2507, -282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 688, 9, 2146, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 354, -281, 2488, 291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 124, -229, -683, 28, 2728, 240,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimHealingAirDownB_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -9,
	ftAnimLoop(0x6800, -30),
};

/* Joint 7 */
u16 dFTNessAnimHealingAirDownB_joint7[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 268, 143, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 19,
	ftAnimBlock(0, 4),
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimHealingAirDownB_joint8[26] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -466, 4, 688, 0, -403, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -440, 0, 688, 0, -403, 1,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4,
	ftAnimBlock(0, 4),
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNessAnimHealingAirDownB_joint10[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 19,
	ftAnimBlock(0, 4),
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimHealingAirDownB_joint11[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2739, -317, 658, -172, 2113, -295,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 481, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2307, 0, 1740, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2422, 216, 1817, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2739, 317, 658, 177, 2113, 295,
	ftAnimLoop(0x6800, -64),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimHealingAirDownB_joint12[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -336, 327,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -336, -336,
	ftAnimLoop(0x6800, -46),
};

/* Joint 13 */
u16 dFTNessAnimHealingAirDownB_joint13[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -430, 58, -130,
	_FT_ANIM_CMD(11, 0, 1), 7,
	ftAnimBlock(0, 4),
	ftAnimLoop(0x6800, -26),
};

/* Joint 15 */
u16 dFTNessAnimHealingAirDownB_joint15[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	_FT_ANIM_CMD(11, 0, 1), 19,
	ftAnimBlock(0, 4),
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimHealingAirDownB_joint16[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1107, 31, -992, -23, 309, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1075, -28, -1015, 24, 273, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1107, -31, -992, 23, 309, 35,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimHealingAirDownB_joint18[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1197, 27,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1225, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1197, -27,
	ftAnimLoop(0x6800, -30),
};

/* Joint 19 */
u16 dFTNessAnimHealingAirDownB_joint19[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1615, 1, 1634, 1, -1552, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1617, -1, 1636, -1, -1571, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1615, -1, 1634, -1, -1552, 18,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimHealingAirDownB_joint21[30] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -40, 0, 463, 0, 519, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 357, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -214, 496,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 463, 1, 519, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -40,
	ftAnimLoop(0x6800, -58),
};

/* Joint 22 */
u16 dFTNessAnimHealingAirDownB_joint22[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 345, -2, 44, 22, -205, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 342, 2, 70, -19, -233, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 344, 2, 50, -20, -211, 22,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimHealingAirDownB_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 496, 59,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 564, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 511, -53,
	ftAnimLoop(0x6800, -30),
};

/* Joint 25 */
u16 dFTNessAnimHealingAirDownB_joint25[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 99, -17, 143, -16, -69, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 82, 18, 126, 16, -97, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 100, 18, 142, 16, -74, 23,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimHealingAirDownB_joint26[32] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -461, 0, 180, -3,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -142,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -264, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -448, 273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -142, -1, -461, 0, 180, -1,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
	0x0000, 0x0000,
};
