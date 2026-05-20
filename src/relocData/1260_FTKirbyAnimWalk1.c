/* AnimJoint data for relocData file 1260 (FTKirbyAnimWalk1) */
/* 1632 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimWalk1_joint1[36];
extern u16 dFTKirbyAnimWalk1_joint2[14];
extern u16 dFTKirbyAnimWalk1_joint3[86];
extern u16 dFTKirbyAnimWalk1_joint5[28];
extern u16 dFTKirbyAnimWalk1_joint6[98];
extern u16 dFTKirbyAnimWalk1_joint7[22];
extern u16 dFTKirbyAnimWalk1_joint9[28];
extern u16 dFTKirbyAnimWalk1_joint10[98];
extern u16 dFTKirbyAnimWalk1_joint11[28];
extern u16 dFTKirbyAnimWalk1_joint13[14];
extern u16 dFTKirbyAnimWalk1_joint14[82];
extern u16 dFTKirbyAnimWalk1_joint16[30];
extern u16 dFTKirbyAnimWalk1_joint18[70];
extern u16 dFTKirbyAnimWalk1_joint19[62];
extern u16 dFTKirbyAnimWalk1_joint21[22];
extern u16 dFTKirbyAnimWalk1_joint22[54];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTKirbyAnimWalk1_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimWalk1_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimWalk1_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimWalk1_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimWalk1_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTKirbyAnimWalk1_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTKirbyAnimWalk1_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimWalk1_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTKirbyAnimWalk1_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTKirbyAnimWalk1_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimWalk1_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTKirbyAnimWalk1_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTKirbyAnimWalk1_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTKirbyAnimWalk1_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTKirbyAnimWalk1_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTKirbyAnimWalk1_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTKirbyAnimWalk1_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimWalk1_joint1[36] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 660,
	ftAnimSetValRate(FT_ANIM_TRAZ), 60, 21,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 600, -7, 120, -7,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 45), 600, 6, 0, -6,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 25), 60, 21,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 25), 660,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimWalk1_joint2[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, -312, 0,
	_FT_ANIM_CMD(11, 0, 1), 25,
	ftAnimBlock(0, 90),
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimWalk1_joint3[86] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -89, 44, 312, 4096, 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTY), -268, -1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 3, -268, 1, 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 312, -28, 4096, 20, 4096, -81, 4096, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 240, 4300, 3276, 4300,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 20), 44, -89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -223, 1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 312, 28, 4096, -20, 4096, 81, 4096, -20,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 312, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 50), 312, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, -2, -178, 0, 0, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -268, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 25), -89, 44,
	ftAnimLoop(0x6800, -168),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimWalk1_joint5[28] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 45), -60,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX, 1), 25,
	ftAnimBlock(0, 20),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 45), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 45), -60,
	ftAnimBlock(0, 25),
	ftAnimLoop(0x6800, -54),
};

/* Joint 6 */
u16 dFTKirbyAnimWalk1_joint6[98] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX), 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 45), 3072,
	_FT_ANIM_CMD(11, FT_ANIM_SCAX, 1), 25,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 663, -5, -461, -4, 290, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 50), 773, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 54), -304, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 486, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 485, -2,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 45), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 232, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 216, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 46), 234, 15,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 778, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 38), 670, -6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -289, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), -429, -9,
	ftAnimBlock(0, 10),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 45), 3072,
	ftAnimBlock(0, 21),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -441, -8, 251, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -452, -6, 277, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 664, -6, -458, -5, 288, 11,
	ftAnimLoop(0x6800, -192),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimWalk1_joint7[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 80), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -42),
};

/* Joint 9 */
u16 dFTKirbyAnimWalk1_joint9[28] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 45), 60,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX, 1), 25,
	ftAnimBlock(0, 20),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 45), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 45), 60,
	ftAnimBlock(0, 25),
	ftAnimLoop(0x6800, -54),
};

/* Joint 10 */
u16 dFTKirbyAnimWalk1_joint10[98] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX), 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 45), 3072,
	_FT_ANIM_CMD(11, FT_ANIM_SCAX, 1), 25,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2277, -5, 571, 2, -241, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), -121, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), 528, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 48), 2406, 0,
	ftAnimBlock(0, 20),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 45), 4096,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -107, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 43), -4, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 509, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 40), 233, 8,
	ftAnimBlock(0, 20),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2407, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 40), 2285, -8,
	ftAnimBlock(0, 16),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 45), 3072,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 247, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 565, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -228, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2279, -6, 568, 2, -239, -10,
	ftAnimLoop(0x6800, -192),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimWalk1_joint11[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 40), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 47), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimLoop(0x6800, -54),
};

/* Joint 13 */
u16 dFTKirbyAnimWalk1_joint13[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	_FT_ANIM_CMD(11, 0, 1), 25,
	ftAnimBlock(0, 90),
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimWalk1_joint14[82] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 323, 4, -300, 0, -277, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 52), 2, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 60), -309, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 46), 119, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 133, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 34), -87, -31,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), 222, 19,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -307, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), -305, 3,
	ftAnimBlock(0, 20),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -121, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -263, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 244, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 313, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 323, 10, -300, 4, -277, -13,
	ftAnimLoop(0x6800, -160),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimWalk1_joint16[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 33), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 52), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimLoop(0x6800, -58),
};

/* Joint 18 */
u16 dFTKirbyAnimWalk1_joint18[70] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2006, -4, 1914, -1, -1400, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 51), -1671, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 89), -2001, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 30), 1781, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1779, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 55), 1905, 4,
	ftAnimBlock(0, 20),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1674, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 35), -1442, 19,
	ftAnimBlock(0, 34),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1909, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1913, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1424, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1409, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2006, -4, 1914, 0, -1400, 9,
	ftAnimLoop(0x6800, -136),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimWalk1_joint19[62] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 131, 4, 235, -3, 468, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 59), 298, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 61), 38, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 56), 347, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 326, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 32), 457, 11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 300, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), 238, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 29, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 27), 126, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 131, 4, 235, -3, 468, 11,
	ftAnimLoop(0x6800, -120),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimWalk1_joint21[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 75), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimLoop(0x6800, -40),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimWalk1_joint22[54] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1317, 0, -1735, 2, -1713, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 89), -1318, 0, -1738, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 37), -1739, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1750, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), -1709, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1708, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -1716, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1317, 0, -1735, 2, -1713, 2,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
