/* AnimJoint data for relocData file 1682 (FTNessAnimCrouchEnd) */
/* 976 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimCrouchEnd_joint1[20];
extern u16 dFTNessAnimCrouchEnd_joint2[10];
extern u16 dFTNessAnimCrouchEnd_joint4[16];
extern u16 dFTNessAnimCrouchEnd_joint5[34];
extern u16 dFTNessAnimCrouchEnd_joint6[16];
extern u16 dFTNessAnimCrouchEnd_joint7[10];
extern u16 dFTNessAnimCrouchEnd_joint10[26];
extern u16 dFTNessAnimCrouchEnd_joint11[50];
extern u16 dFTNessAnimCrouchEnd_joint12[16];
extern u16 dFTNessAnimCrouchEnd_joint13[10];
extern u16 dFTNessAnimCrouchEnd_joint15[10];
extern u16 dFTNessAnimCrouchEnd_joint16[30];
extern u16 dFTNessAnimCrouchEnd_joint18[24];
extern u16 dFTNessAnimCrouchEnd_joint19[24];
extern u16 dFTNessAnimCrouchEnd_joint21[14];
extern u16 dFTNessAnimCrouchEnd_joint22[62];
extern u16 dFTNessAnimCrouchEnd_joint24[16];
extern u16 dFTNessAnimCrouchEnd_joint25[34];
extern u16 dFTNessAnimCrouchEnd_joint26[14];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTNessAnimCrouchEnd_joints[] = {
	(AObjEvent32 *)dFTNessAnimCrouchEnd_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimCrouchEnd_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimCrouchEnd_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTNessAnimCrouchEnd_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTNessAnimCrouchEnd_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimCrouchEnd_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNessAnimCrouchEnd_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTNessAnimCrouchEnd_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTNessAnimCrouchEnd_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimCrouchEnd_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimCrouchEnd_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTNessAnimCrouchEnd_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTNessAnimCrouchEnd_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTNessAnimCrouchEnd_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTNessAnimCrouchEnd_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTNessAnimCrouchEnd_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTNessAnimCrouchEnd_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTNessAnimCrouchEnd_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTNessAnimCrouchEnd_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimCrouchEnd_joint1[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -24, 304, -88,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 8), -16, -28,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 444, 233,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 537,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimCrouchEnd_joint2[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 21, -78, 23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 28, -360, 8,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimCrouchEnd_joint4[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 368,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 170, -46,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimCrouchEnd_joint5[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 878, 50, -1381, 12, -1117, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1346, 0, -1192, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1169, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1187, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1195, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1198, 2, -1347, 0, -1192, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimCrouchEnd_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -708, -15,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -488, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, 14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimCrouchEnd_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNessAnimCrouchEnd_joint10[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 107, -22, 41,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 17, -14, 102, 48, 14, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -10, 0, 364, -3, -32, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTNessAnimCrouchEnd_joint11[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2379, -169, 718, 10, -2524, -116,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 577, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2548, -386, -2641, -309,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3151, -449, -3143, -358,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -3573, -48, -3359, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3610, -26, -3351, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3627, -11, -3340, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3632, -5, 569, -7, -3336, 4,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimCrouchEnd_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -263, -64,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -563, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimCrouchEnd_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 90, 54, 126, 143, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimCrouchEnd_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimCrouchEnd_joint16[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 75, -23, -95, -21, -942, 70,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -346, -35, -281, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -370, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -317, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -365, -19, -279, 1, -297, 19,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimCrouchEnd_joint18[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 966, -54,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 527, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 463, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 415, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, -19,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimCrouchEnd_joint19[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -32, 6, -7, -1, -12, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 2, 5, 12, 0, 20, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, 3, 12, 0, 26, 5,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimCrouchEnd_joint21[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -613, 91, 43,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -66, 0, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimCrouchEnd_joint22[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1075, 129, 1027, -24, 673, 88,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1228, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1205, 207, 761, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1491, 163, 1073, 223,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1487, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1349, 38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1338, 89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1466, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1482, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1481, 0, 1383, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1481, 0, 1472, 5, 1397, 14,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimCrouchEnd_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 891, -34,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 430, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, -23,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimCrouchEnd_joint25[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 438, -47, -207, -14, -212, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 90, -26, -208, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 56, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 46, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 32, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 76, -14, 25, -6, -202, 6,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimCrouchEnd_joint26[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -89, -283, -478,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 56, 0, 0,
	ftAnimEnd(),
};
