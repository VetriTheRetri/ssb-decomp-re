/* AnimJoint data for relocData file 1727 (FTNessAnimCatchPull) */
/* 720 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimCatchPull_joint1[10];
extern u16 dFTNessAnimCatchPull_joint2[8];
extern u16 dFTNessAnimCatchPull_joint4[10];
extern u16 dFTNessAnimCatchPull_joint5[24];
extern u16 dFTNessAnimCatchPull_joint8[16];
extern u16 dFTNessAnimCatchPull_joint10[12];
extern u16 dFTNessAnimCatchPull_joint11[24];
extern u16 dFTNessAnimCatchPull_joint12[8];
extern u16 dFTNessAnimCatchPull_joint13[14];
extern u16 dFTNessAnimCatchPull_joint15[12];
extern u16 dFTNessAnimCatchPull_joint16[24];
extern u16 dFTNessAnimCatchPull_joint18[16];
extern u16 dFTNessAnimCatchPull_joint19[24];
extern u16 dFTNessAnimCatchPull_joint21[10];
extern u16 dFTNessAnimCatchPull_joint22[24];
extern u16 dFTNessAnimCatchPull_joint24[16];
extern u16 dFTNessAnimCatchPull_joint25[24];
extern u16 dFTNessAnimCatchPull_joint26[30];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTNessAnimCatchPull_joints[] = {
	(u32)dFTNessAnimCatchPull_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimCatchPull_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimCatchPull_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimCatchPull_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimCatchPull_joint8, /* [5] joint 8 */
	0x00000000, /* [6] NULL */
	0x00000000, /* [7] NULL */
	(u32)dFTNessAnimCatchPull_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimCatchPull_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimCatchPull_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimCatchPull_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimCatchPull_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimCatchPull_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimCatchPull_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimCatchPull_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimCatchPull_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimCatchPull_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimCatchPull_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimCatchPull_joint25, /* [24] joint 25 */
	(u32)dFTNessAnimCatchPull_joint26, /* [25] joint 26 */
	0xFFFF00AA, /* [26] END */
};

/* Joint 1 */
u16 dFTNessAnimCatchPull_joint1[10] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 175, 12,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), -16, 537,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), -16,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimCatchPull_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 28, -360, 8,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTNessAnimCatchPull_joint4[10] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 66, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 66,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimCatchPull_joint5[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2461, -47, -1026, -55, -2770, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2414, -50, -1082, -49, -2720, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2360, -53, -1126, -44, -2665, 55,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimCatchPull_joint8[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTNessAnimCatchPull_joint10[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -15, -1, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -15, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimCatchPull_joint11[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -972, -14, -116, -5, -892, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -986, -9, -121, 0, -909, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -990, -4, -117, 3, -917, -7,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimCatchPull_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimCatchPull_joint13[14] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 544, 56, -293, -43, 255, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 544, -293, 255,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTNessAnimCatchPull_joint15[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	_FT_ANIM_CMD(11, 0, 1), 6,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimCatchPull_joint16[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -407, 37, -186, -80, -136, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -370, 30, -266, -58, -252, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -347, 22, -302, -36, -327, -74,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimCatchPull_joint18[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 544, 19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 563, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 476, -86,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimCatchPull_joint19[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -36, 19, 11, 0, -246, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -16, 20, 12, 0, -135, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4, 21, 12, 0, 18, 154,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimCatchPull_joint21[10] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -133, -16,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -199,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimCatchPull_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 32, -112, 286, -56, 188, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -79, -85, 230, -76, -30, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -137, -58, 132, -97, -241, -210,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimCatchPull_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 231,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 231, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 467, 236,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimCatchPull_joint25[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 175, -35, 33, 4, -48, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 139, -45, 37, 4, -111, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 83, -56, 42, 4, -139, -28,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimCatchPull_joint26[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 179, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -25,
	ftAnimEnd(),
	0x28E0, 0x0001, 0xFFF2, 0x01A6, 0x005F, 0x025C, 0x005F, 0x480E, 0x0000, 0xF9B8, 0x0000, 0x38E1, 0x0002, 0x0001, 0x01A6, 0x025C, 0x0000, 0x0000, 0x0000, 0x0000,
};
