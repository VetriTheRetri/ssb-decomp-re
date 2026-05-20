/* AnimJoint data for relocData file 1797 (FTNessAnimExitPipe) */
/* 1344 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimExitPipe_joint1[14];
extern u16 dFTNessAnimExitPipe_joint2[18];
extern u16 dFTNessAnimExitPipe_joint4[12];
extern u16 dFTNessAnimExitPipe_joint5[96];
extern u16 dFTNessAnimExitPipe_joint6[28];
extern u16 dFTNessAnimExitPipe_joint7[12];
extern u16 dFTNessAnimExitPipe_joint8[26];
extern u16 dFTNessAnimExitPipe_joint10[12];
extern u16 dFTNessAnimExitPipe_joint11[76];
extern u16 dFTNessAnimExitPipe_joint12[24];
extern u16 dFTNessAnimExitPipe_joint13[22];
extern u16 dFTNessAnimExitPipe_joint15[12];
extern u16 dFTNessAnimExitPipe_joint16[54];
extern u16 dFTNessAnimExitPipe_joint18[24];
extern u16 dFTNessAnimExitPipe_joint19[56];
extern u16 dFTNessAnimExitPipe_joint21[12];
extern u16 dFTNessAnimExitPipe_joint22[46];
extern u16 dFTNessAnimExitPipe_joint24[24];
extern u16 dFTNessAnimExitPipe_joint25[34];
extern u16 dFTNessAnimExitPipe_joint26[18];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTNessAnimExitPipe_joints[] = {
	(AObjEvent32 *)dFTNessAnimExitPipe_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimExitPipe_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimExitPipe_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTNessAnimExitPipe_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTNessAnimExitPipe_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimExitPipe_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNessAnimExitPipe_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNessAnimExitPipe_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTNessAnimExitPipe_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTNessAnimExitPipe_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimExitPipe_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimExitPipe_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTNessAnimExitPipe_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTNessAnimExitPipe_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTNessAnimExitPipe_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTNessAnimExitPipe_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTNessAnimExitPipe_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTNessAnimExitPipe_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTNessAnimExitPipe_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTNessAnimExitPipe_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimExitPipe_joint1[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAY), -1200, 289,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), -16, -28,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 40), 537,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimExitPipe_joint2[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, 0, 0, -9, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 28, -360, 8,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimExitPipe_joint4[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 40,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimExitPipe_joint5[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1927, 1, -594, 0, 2692, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), 2669, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -594, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 23), -1872, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1895, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2345, -295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2692, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 3042, 255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -618, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -620, 64,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2697, -314, 3347, 262,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -3418, -67, 3696, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -545, 76,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -264, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3479, -56, 3683, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -3620, -12, 3635, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -261, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3627, -6, -261, 0, 3632, -2,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimExitPipe_joint6[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -769, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), -766, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -761, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -501, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -481, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimExitPipe_joint7[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 40,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimExitPipe_joint8[26] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, 0, 0, 9, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -10, 0, 364, -3, -32, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTNessAnimExitPipe_joint10[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 40,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimExitPipe_joint11[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1185, 0, 570, 0, -410, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), -415, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), 621, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 25), -1185, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1177, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -884, 97,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -414, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -195, 46,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 631, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 572, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -780, 102,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -421, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -155, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -118, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -415, 6, 569, -2, -119, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimExitPipe_joint12[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -824, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), -812, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -802, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -563, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimExitPipe_joint13[22] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 357,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 54, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 357, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 715, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), 90,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTNessAnimExitPipe_joint15[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	_FT_ANIM_CMD(11, 0, 1), 40,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimExitPipe_joint16[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -64, 0, -188, 0, -287, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), -243, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 32), -304, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 26), -75, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -92, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -362, -5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -253, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -279, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -304, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -298, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -365, -2, -279, 0, -297, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimExitPipe_joint18[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 469, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 37), 407, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 401, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 397, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimExitPipe_joint19[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -80, 0, 59, 0, -120, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 32), -37, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 36), 18, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 30), -64, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -56, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 4, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -24, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 25, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 15, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 12, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, 1, 12, 0, 26, 1,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimExitPipe_joint21[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -66, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTNessAnimExitPipe_joint22[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -53, 0, 118, 0, -260, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 37), -216, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), 136, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 34), -105, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -111, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -126, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -213, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -211, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -127, 0, 136, 0, -210, 0,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimExitPipe_joint24[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 527, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), 439, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 429, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 408, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimExitPipe_joint25[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 85, 0, 53, 0, -170, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 39), 76, 0, 25, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 37), -200, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -201, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -202, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 76, 0, 25, 0, -202, 0,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimExitPipe_joint26[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -61,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 25), -61, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), 56,
	ftAnimEnd(),
	0x0000,
};
