/* AnimJoint data for relocData file 501 (FTMarioAnimWalk2) */
/* 2432 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimWalk2_joint1[56];
extern u16 dFTMarioAnimWalk2_joint2[64];
extern u16 dFTMarioAnimWalk2_joint4[58];
extern u16 dFTMarioAnimWalk2_joint5[92];
extern u16 dFTMarioAnimWalk2_joint7[44];
extern u16 dFTMarioAnimWalk2_joint8[58];
extern u16 dFTMarioAnimWalk2_joint10[58];
extern u16 dFTMarioAnimWalk2_joint11[86];
extern u16 dFTMarioAnimWalk2_joint12[44];
extern u16 dFTMarioAnimWalk2_joint13[8];
extern u16 dFTMarioAnimWalk2_joint15[8];
extern u16 dFTMarioAnimWalk2_joint16[130];
extern u16 dFTMarioAnimWalk2_joint18[64];
extern u16 dFTMarioAnimWalk2_joint20[120];
extern u16 dFTMarioAnimWalk2_joint21[126];
extern u16 dFTMarioAnimWalk2_joint23[56];
extern u16 dFTMarioAnimWalk2_joint24[96];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTMarioAnimWalk2_joints[] = {
	(AObjEvent32 *)dFTMarioAnimWalk2_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTMarioAnimWalk2_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTMarioAnimWalk2_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTMarioAnimWalk2_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTMarioAnimWalk2_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTMarioAnimWalk2_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTMarioAnimWalk2_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTMarioAnimWalk2_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTMarioAnimWalk2_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTMarioAnimWalk2_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTMarioAnimWalk2_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTMarioAnimWalk2_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTMarioAnimWalk2_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTMarioAnimWalk2_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTMarioAnimWalk2_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTMarioAnimWalk2_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTMarioAnimWalk2_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimWalk2_joint1[56] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 636, -1, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 15), -9, -3,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 43), -24,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 15), 508,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 15), 636,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), -8, 6,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), 2, 1,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 15), 508,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 13), -4, -5,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), -8, 1,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 17), 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAY, 15), 636, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 13), 0, 0,
	ftAnimLoop(0x6800, -110),
};

/* Joint 2 */
u16 dFTMarioAnimWalk2_joint2[64] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -72, 5, 17, -1,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -222,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 67, 8, 5, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), -271,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 93, -1, -14, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -279,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 37, -6, 49, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -233,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -54, -7, 26, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 13), -229,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -85, -1, 50, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), -241,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -72, 5, 17, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 13), -222,
	ftAnimLoop(0x6800, -124),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimWalk2_joint4[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 225, 1, 135, -6, 75, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 297, 4, -87, -14, -108, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 319, -3, -158, -3, -161, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 244, -3, -135, 7, -174, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 246, 1, 5, 12, -30, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 265, -1, 83, 7, 3, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 225, 1, 135, -6, 75, -3,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimWalk2_joint5[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -507, -3, -179, 4, 409, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -16, -45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), -53, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 17), -176, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -192, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), -109, 5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -62, -45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -191, 39,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -30, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), -432, -16,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -151, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), 419, -3,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -447, -14, -105, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -506, 0, -175, -6,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 415, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 411, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -507, 0, -179, -3, 409, -1,
	ftAnimLoop(0x6800, -180),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimWalk2_joint7[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -191, -11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -652, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -642, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -182, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -169, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -624, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -642, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -233, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -203, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -191, 11,
	ftAnimLoop(0x6800, -86),
};

/* Joint 8 */
u16 dFTMarioAnimWalk2_joint8[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 187, 0, -68, 0, -32, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 173, 0, -68, 0, -24, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 196, 2, -69, 0, -29, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 204, -1, -69, 0, -54, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 166, -1, -68, 0, -43, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 172, 1, -68, 0, -48, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 187, 0, -68, 0, -32, 0,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimWalk2_joint10[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -181, 1, 4, 2, 39, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -159, 0, 106, 7, 35, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -187, -3, 155, 4, 26, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -210, 0, 167, -3, 25, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -198, 0, 80, -6, 37, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -200, 1, 49, -4, 44, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -181, 1, 4, 2, 39, 0,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimWalk2_joint11[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -33, 9, 263, 0, -292, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), 479, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), 161, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 411, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 418, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 32), -109, -42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 494, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), 197, -33,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 170, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 17), 129, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 146, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 262, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 163, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -17, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -151, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -283, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -33, -15, 263, 1, -292, -8,
	ftAnimLoop(0x6800, -168),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimWalk2_joint12[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -170, -12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -656, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -653, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -203, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -192, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -643, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -653, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -216, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -183, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -170, 12,
	ftAnimLoop(0x6800, -86),
};

/* Joint 13 */
u16 dFTMarioAnimWalk2_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 89, 0, 0,
	ftAnimBlock(0, 60),
	ftAnimLoop(0x6800, -14),
};

/* Joint 15 */
u16 dFTMarioAnimWalk2_joint15[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, -804, 0,
	ftAnimBlock(0, 60),
	ftAnimLoop(0x6800, -14),
};

/* Joint 16 */
u16 dFTMarioAnimWalk2_joint16[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -201, 4, -81, 4, -133, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), -256, -15, 136, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 18), -54, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -66, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -524, -22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -267, -5, 212, 76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 684, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -48, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -41, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -126, -97,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -546, -20, 702, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 562, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -494, 51,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -222, -86,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -473, 71,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 520, -56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -187, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -429, 92,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -42, 11,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -402, 59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -119, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -52, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -186, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -235, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -216, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -201, -14, -81, 37, -133, 82,
	ftAnimLoop(0x6800, -256),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimWalk2_joint18[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 74, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 170, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 333, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 211, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 407, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 559, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 1053, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 992, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 191, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -184,
	ftAnimLoop(0x6800, -126),
};

/* Joint 20 */
u16 dFTMarioAnimWalk2_joint20[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -105, 0, -2, 5, 24, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -106, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), 303, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 13, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -36, -50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -58, 81,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -129, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -239, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -271, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -135, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 322, 0, 26, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 25, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 105, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -132, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 78, 4,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 25, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), 24, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 79, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 42, -30,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 95, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 3, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 10, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -104, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -105, -1, -2, -5, 24, 0,
	ftAnimLoop(0x6800, -236),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimWalk2_joint21[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 89, 12, 102, -5, 629, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 103, -4, 318, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 355, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 321, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -100, -109,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 91, -23, 340, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 136, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), 42, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -203, -88,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -401, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 130, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 96, 8,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -392, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -234, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -244, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 109, 65,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 40, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 100, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 108, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 111, -10,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 174, 64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 612, 29,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 97, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 89, -8, 102, -8, 629, 17,
	ftAnimLoop(0x6800, -248),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimWalk2_joint23[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 91, -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 229, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 371, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 1088, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1015, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 292, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 216, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 599, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 655, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 565, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 496, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 116, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 91, -25,
	ftAnimLoop(0x6800, -110),
};

/* Joint 24 */
u16 dFTMarioAnimWalk2_joint24[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 55, -36, -27, 2, -90, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), 0, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 59), -23, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -162, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -177, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 137, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 104, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 41, 1,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 18, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -187, -18,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 42, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 89, 6,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -206, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -432, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -450, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -141, 49,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 92, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 73, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 55, -17, -27, -3, -90, 50,
	ftAnimLoop(0x6800, -184),
	ftAnimEnd(),
	0x0000, 0x0000,
};
