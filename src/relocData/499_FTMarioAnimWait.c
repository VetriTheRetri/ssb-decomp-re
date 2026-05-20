/* AnimJoint data for relocData file 499 (FTMarioAnimWait) */
/* 1392 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimWait_joint1[60];
extern u16 dFTMarioAnimWait_joint2[20];
extern u16 dFTMarioAnimWait_joint4[20];
extern u16 dFTMarioAnimWait_joint5[66];
extern u16 dFTMarioAnimWait_joint6[32];
extern u16 dFTMarioAnimWait_joint7[12];
extern u16 dFTMarioAnimWait_joint8[20];
extern u16 dFTMarioAnimWait_joint10[20];
extern u16 dFTMarioAnimWait_joint11[86];
extern u16 dFTMarioAnimWait_joint12[40];
extern u16 dFTMarioAnimWait_joint13[22];
extern u16 dFTMarioAnimWait_joint15[8];
extern u16 dFTMarioAnimWait_joint16[44];
extern u16 dFTMarioAnimWait_joint18[32];
extern u16 dFTMarioAnimWait_joint20[26];
extern u16 dFTMarioAnimWait_joint21[48];
extern u16 dFTMarioAnimWait_joint23[32];
extern u16 dFTMarioAnimWait_joint24[60];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTMarioAnimWait_joints[] = {
	(AObjEvent32 *)dFTMarioAnimWait_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTMarioAnimWait_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTMarioAnimWait_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTMarioAnimWait_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTMarioAnimWait_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTMarioAnimWait_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTMarioAnimWait_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTMarioAnimWait_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTMarioAnimWait_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTMarioAnimWait_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTMarioAnimWait_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTMarioAnimWait_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTMarioAnimWait_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTMarioAnimWait_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTMarioAnimWait_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTMarioAnimWait_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTMarioAnimWait_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTMarioAnimWait_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimWait_joint1[60] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 540, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 223, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 13), 575, -2,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 26), 78,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 11), -1, 1,
	ftAnimSetValRateT(FT_ANIM_TRAX, 14), 5, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 12), 534, -2,
	ftAnimSetValRateT(FT_ANIM_TRAX, 11), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 13), 566, 2,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 24), 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateT(FT_ANIM_TRAX, 14), 0, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 12), 540, 2,
	ftAnimLoop(0x6800, -116),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimWait_joint2[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -71, -790, -95,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -116, -657, -65,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -71, -790, -95,
	ftAnimLoop(0x6800, -38),
};

/* Joint 4 */
u16 dFTMarioAnimWait_joint4[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 208, 258, 110,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 177, 154, 47,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 208, 258, 110,
	ftAnimLoop(0x6800, -38),
};

/* Joint 5 */
u16 dFTMarioAnimWait_joint5[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 133, -3, -300, -1, -272, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), -143, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 49), -301, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -149, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -162, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 28), -219, -18,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -143, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 108, 14,
	ftAnimBlock(0, 23),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -238, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -267, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 121, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 130, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 133, 3, -300, 1, -272, -4,
	ftAnimLoop(0x6800, -128),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimWait_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -182, -12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -755, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -777, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), -300, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -257, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -192, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 10,
	ftAnimLoop(0x6800, -62),
};

/* Joint 7 */
u16 dFTMarioAnimWait_joint7[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -625, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 50),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimWait_joint8[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 201, -4, 176,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 239, -1, 63,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 201, -4, 176,
	ftAnimLoop(0x6800, -38),
};

/* Joint 10 */
u16 dFTMarioAnimWait_joint10[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -221, 139, -209,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -333, 239, -150,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -221, 139, -209,
	ftAnimLoop(0x6800, -38),
};

/* Joint 11 */
u16 dFTMarioAnimWait_joint11[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 443, 6, 551, -4, 65, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 30, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 504, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 492, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 457, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), 587, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 28, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 9, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 485, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 374, -28,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 26, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 548, 7,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 345, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 72, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 587, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 449, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 443, -5, 551, 3, 65, -6,
	ftAnimLoop(0x6800, -168),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimWait_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -811, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -846, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -789, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -453, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -509, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -950, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -924, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -815, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, 4,
	ftAnimLoop(0x6800, -78),
};

/* Joint 13 */
u16 dFTMarioAnimWait_joint13[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 625,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), 625, -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 625, 27,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), 625,
	ftAnimLoop(0x6800, -40),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimWait_joint15[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, -804, 0,
	ftAnimBlock(0, 50),
	ftAnimLoop(0x6800, -14),
};

/* Joint 16 */
u16 dFTMarioAnimWait_joint16[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1473, 0, -1377, 0, -1563, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 49), 1472, 1, -1378, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -1616, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1621, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -1556, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1560, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1562, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1473, 0, -1377, 0, -1563, 0,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimWait_joint18[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 400, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 454, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 474, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 371, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 380, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 399, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, 1,
	ftAnimLoop(0x6800, -62),
};

/* Joint 20 */
u16 dFTMarioAnimWait_joint20[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -212, 0, -11, 0, -156, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 49), -211, 0, -11, 0, -156, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -212, 0, -11, 0, -156, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimWait_joint21[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 200, 0, 187, 0, 35, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 40), 196, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 49), 187, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 34), 179, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 162, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 35, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 195, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 200, 0, 187, 0, 35, 0,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimWait_joint23[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 202, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 200, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 444, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 443, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 440, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, -1,
	ftAnimLoop(0x6800, -62),
};

/* Joint 24 */
u16 dFTMarioAnimWait_joint24[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, 0, -1514, 0, 1395, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 40), 1736, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 46), 1401, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 37), -1573, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1566, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1515, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1729, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1698, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1398, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1395, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1697, 0, -1514, 0, 1395, 0,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
	0x0000, 0x0000,
};
