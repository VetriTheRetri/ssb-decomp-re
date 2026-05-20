/* AnimJoint data for relocData file 1022 (FTSamusAnimThrownFoxFStart) */
/* 848 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimThrownFoxFStart_joint2[20];
extern u16 dFTSamusAnimThrownFoxFStart_joint3[26];
extern u16 dFTSamusAnimThrownFoxFStart_joint5[22];
extern u16 dFTSamusAnimThrownFoxFStart_joint6[40];
extern u16 dFTSamusAnimThrownFoxFStart_joint7[20];
extern u16 dFTSamusAnimThrownFoxFStart_joint8[22];
extern u16 dFTSamusAnimThrownFoxFStart_joint9[10];
extern u16 dFTSamusAnimThrownFoxFStart_joint12[18];
extern u16 dFTSamusAnimThrownFoxFStart_joint13[46];
extern u16 dFTSamusAnimThrownFoxFStart_joint15[24];
extern u16 dFTSamusAnimThrownFoxFStart_joint16[24];
extern u16 dFTSamusAnimThrownFoxFStart_joint18[16];
extern u16 dFTSamusAnimThrownFoxFStart_joint20[24];
extern u16 dFTSamusAnimThrownFoxFStart_joint21[24];
extern u16 dFTSamusAnimThrownFoxFStart_joint23[16];
extern u16 dFTSamusAnimThrownFoxFStart_joint24[24];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTSamusAnimThrownFoxFStart_joints[] = {
	NULL, /* [0] NULL */
	(AObjEvent32 *)dFTSamusAnimThrownFoxFStart_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimThrownFoxFStart_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTSamusAnimThrownFoxFStart_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTSamusAnimThrownFoxFStart_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimThrownFoxFStart_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimThrownFoxFStart_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimThrownFoxFStart_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTSamusAnimThrownFoxFStart_joint12, /* [9] joint 12 */
	NULL, /* [10] NULL */
	NULL, /* [11] NULL */
	(AObjEvent32 *)dFTSamusAnimThrownFoxFStart_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTSamusAnimThrownFoxFStart_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTSamusAnimThrownFoxFStart_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTSamusAnimThrownFoxFStart_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTSamusAnimThrownFoxFStart_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTSamusAnimThrownFoxFStart_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTSamusAnimThrownFoxFStart_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTSamusAnimThrownFoxFStart_joint24, /* [23] joint 24 */
};

/* Joint 2 */
u16 dFTSamusAnimThrownFoxFStart_joint2[20] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -290, -232,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 643, 4, -232, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 643, -232,
	ftAnimBlock0(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTSamusAnimThrownFoxFStart_joint3[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 116, -20, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 268, 0, 0, 0, 0, 3,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -202, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 268, 0,
	ftAnimBlock0(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimThrownFoxFStart_joint5[22] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -201, 45, 3, -10, -35, 69,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 167, 5, -4, 0, 32, 0,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimThrownFoxFStart_joint6[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 25, -266, -460, 42, 390, 71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -651, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -293, 74, 345, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -91, -213, 127, 262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -720, -165, -922, -188, 870, 283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -422, 298, -1028, -106, 695, -175,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimThrownFoxFStart_joint7[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1082, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -811, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -623, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -502, 120,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimThrownFoxFStart_joint8[22] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 0,
	ftAnimSetValRate(FT_ANIM_ROTX), -491, -195,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 424, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 10), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -865, -54,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 5), -1036,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimThrownFoxFStart_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimThrownFoxFStart_joint12[18] = {
	ftAnimSetValAfter(FT_ANIM_ROTY), 0,
	ftAnimSetValRate(FT_ANIM_ROTX), -148, 0,
	ftAnimSetValBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValT(FT_ANIM_ROTZ, 10), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 0, 4,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTSamusAnimThrownFoxFStart_joint13[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 57, 17, 86, 27, 439, 190,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 12, -242, 470, -422,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 114, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 317, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -409, -101, 465, -142, -213, -399,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -190, 168, 32, -268, -329, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -73, 116, -70, -102, -247, 81,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimThrownFoxFStart_joint15[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -242, -499,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1101, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -956, 360,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -381, 262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -432, -51,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTSamusAnimThrownFoxFStart_joint16[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -17, -10, -73, -10, -77, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -13, 0, -60, 3, -147, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -13, 0, -58, 1, -140, 7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTSamusAnimThrownFoxFStart_joint18[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 604, 29,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 504, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 477, -26,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTSamusAnimThrownFoxFStart_joint20[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -90, 12, -28, 7, -41, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 21, 23, 52, 17, 162, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 35, 14, 62, 10, 190, 27,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTSamusAnimThrownFoxFStart_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, -12, 46, -6, -257, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -27, 1, 37, 0, -457, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -25, 1, 37, 0, -466, -8,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTSamusAnimThrownFoxFStart_joint23[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 477, 24,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 479, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 470, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTSamusAnimThrownFoxFStart_joint24[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 15, -16, 193, -18, -213, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1, 10, 11, -39, -182, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 9, 8, -12, -24, -178, 3,
	ftAnimEnd(),
};
