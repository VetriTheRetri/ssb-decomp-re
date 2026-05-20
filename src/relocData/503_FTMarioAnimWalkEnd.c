/* AnimJoint data for relocData file 503 (FTMarioAnimWalkEnd) */
/* 928 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimWalkEnd_joint1[14];
extern u16 dFTMarioAnimWalkEnd_joint2[16];
extern u16 dFTMarioAnimWalkEnd_joint4[16];
extern u16 dFTMarioAnimWalkEnd_joint5[40];
extern u16 dFTMarioAnimWalkEnd_joint6[24];
extern u16 dFTMarioAnimWalkEnd_joint7[14];
extern u16 dFTMarioAnimWalkEnd_joint8[16];
extern u16 dFTMarioAnimWalkEnd_joint10[16];
extern u16 dFTMarioAnimWalkEnd_joint11[32];
extern u16 dFTMarioAnimWalkEnd_joint12[16];
extern u16 dFTMarioAnimWalkEnd_joint13[14];
extern u16 dFTMarioAnimWalkEnd_joint15[10];
extern u16 dFTMarioAnimWalkEnd_joint16[48];
extern u16 dFTMarioAnimWalkEnd_joint18[24];
extern u16 dFTMarioAnimWalkEnd_joint20[30];
extern u16 dFTMarioAnimWalkEnd_joint21[30];
extern u16 dFTMarioAnimWalkEnd_joint23[24];
extern u16 dFTMarioAnimWalkEnd_joint24[32];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTMarioAnimWalkEnd_joints[] = {
	(AObjEvent32 *)dFTMarioAnimWalkEnd_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTMarioAnimWalkEnd_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTMarioAnimWalkEnd_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTMarioAnimWalkEnd_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTMarioAnimWalkEnd_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTMarioAnimWalkEnd_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTMarioAnimWalkEnd_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTMarioAnimWalkEnd_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTMarioAnimWalkEnd_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTMarioAnimWalkEnd_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTMarioAnimWalkEnd_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTMarioAnimWalkEnd_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTMarioAnimWalkEnd_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTMarioAnimWalkEnd_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTMarioAnimWalkEnd_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTMarioAnimWalkEnd_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTMarioAnimWalkEnd_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTMarioAnimWalkEnd_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimWalkEnd_joint1[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 636, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 223, 540, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimWalkEnd_joint2[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY), -222, -72, 17, -58,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 10), -71, -790, -95, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTMarioAnimWalkEnd_joint4[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 339, 135, 75, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 10), 208, 258, 110, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimWalkEnd_joint5[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -572, 22, -78, 1, 540, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -46, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -284, -29, 75, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -304, -10, -72, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 59, 89, -305, 2, -204, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 133, 73, -300, 4, -272, -67,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimWalkEnd_joint6[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -500, -34,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -684, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -576, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -275, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 93,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTMarioAnimWalkEnd_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -446,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -625, 22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimWalkEnd_joint8[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 187, -68, -32, 0, 288, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 201, -4, 176, 0, 288, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimWalkEnd_joint10[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -181, 4, 39, 0, 54, -18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -221, 139, -209, 0, 54, -17,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimWalkEnd_joint11[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -151, 17, 355, 6, -538, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 551, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 356, 76, -14, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 420, 43, 44, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 443, 23, 551, 0, 65, 21,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimWalkEnd_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -411, -23,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -808, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimWalkEnd_joint13[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 446,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 625, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 625,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTMarioAnimWalkEnd_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimWalkEnd_joint16[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -201, -9, -81, -12, -133, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -85, -18, -298, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -228, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -166, 70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 26, 32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -103, -15, -267, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -115, -15, -237, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -135, -19, -230, 6, 45, 18,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimWalkEnd_joint18[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 200, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 411, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimWalkEnd_joint20[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -105, -16, -2, 0, 24, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -9, -1, -122, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -291, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -237, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -212, 25, -11, -1, -156, -33,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimWalkEnd_joint21[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 89, 25, 102, 16, 629, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 164, 33, 173, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 43, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 33, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 200, 36, 187, 13, 35, 1,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimWalkEnd_joint23[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 91, 74,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 470, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 456, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 443, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimWalkEnd_joint24[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 55, -52, -27, 0, -90, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -21, 0, -203, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 82, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 93, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 104, 11, -20, 0, -218, -14,
	ftAnimEnd(),
	0x0000, 0x0000,
};
