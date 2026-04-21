/* AnimJoint data for relocData file 498 (FTNNessAnimPose1P) */
/* 704 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNNessAnimPose1P_joint1[30];
extern u16 dFTNNessAnimPose1P_joint2[10];
extern u16 dFTNNessAnimPose1P_joint4[16];
extern u16 dFTNNessAnimPose1P_joint5[24];
extern u16 dFTNNessAnimPose1P_joint6[16];
extern u16 dFTNNessAnimPose1P_joint7[8];
extern u16 dFTNNessAnimPose1P_joint8[20];
extern u16 dFTNNessAnimPose1P_joint10[8];
extern u16 dFTNNessAnimPose1P_joint11[24];
extern u16 dFTNNessAnimPose1P_joint12[16];
extern u16 dFTNNessAnimPose1P_joint15[8];
extern u16 dFTNNessAnimPose1P_joint16[24];
extern u16 dFTNNessAnimPose1P_joint18[14];
extern u16 dFTNNessAnimPose1P_joint21[24];
extern u16 dFTNNessAnimPose1P_joint22[24];
extern u16 dFTNNessAnimPose1P_joint24[8];
extern u16 dFTNNessAnimPose1P_joint25[24];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTNNessAnimPose1P_joints[] = {
	(u32)dFTNNessAnimPose1P_joint1, /* [0] joint 1 */
	(u32)dFTNNessAnimPose1P_joint2, /* [1] joint 2 */
	(u32)dFTNNessAnimPose1P_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNNessAnimPose1P_joint5, /* [4] joint 5 */
	(u32)dFTNNessAnimPose1P_joint6, /* [5] joint 6 */
	(u32)dFTNNessAnimPose1P_joint7, /* [6] joint 7 */
	(u32)dFTNNessAnimPose1P_joint8, /* [7] joint 8 */
	(u32)dFTNNessAnimPose1P_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNNessAnimPose1P_joint11, /* [10] joint 11 */
	(u32)dFTNNessAnimPose1P_joint12, /* [11] joint 12 */
	(u32)dFTNNessAnimPose1P_joint15, /* [12] joint 15 */
	0x00000000, /* [13] NULL */
	0x00000000, /* [14] NULL */
	(u32)dFTNNessAnimPose1P_joint16, /* [15] joint 16 */
	(u32)dFTNNessAnimPose1P_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNNessAnimPose1P_joint21, /* [18] joint 21 */
	0x00000000, /* [19] NULL */
	0x00000000, /* [20] NULL */
	(u32)dFTNNessAnimPose1P_joint22, /* [21] joint 22 */
	(u32)dFTNNessAnimPose1P_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNNessAnimPose1P_joint25, /* [24] joint 25 */
};

/* 8-byte alignment padding */
static u32 dFTNNessAnimPose1P_pad[2] = { 0 };

/* Joint 1 */
u16 dFTNNessAnimPose1P_joint1[30] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 446, -266, 0, -1920, 669, 960,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 446, -223, 0, 133, 0, 0, 960, -9890, 681, 2987, 960, 713,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 0, -4392, 1416, 1138,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNNessAnimPose1P_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNNessAnimPose1P_joint4[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -363,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -363, 181,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNNessAnimPose1P_joint5[24] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -33, 0, -696, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 713,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 713, 364, -33, -183, -696, -596,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1442, 728, -400, -367, -1888, -1192,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNNessAnimPose1P_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNNessAnimPose1P_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTNNessAnimPose1P_joint8[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -143, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -143, 71, 0, 111,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 0, 223,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTNNessAnimPose1P_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTNNessAnimPose1P_joint11[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1703, -831, 544, 966, -1960, -373,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2534, -552, 1510, 315, -2334, -493,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2808, -273, 1176, -334, -2947, -612,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNNessAnimPose1P_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTNNessAnimPose1P_joint15[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTNNessAnimPose1P_joint16[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 374, -317, -95, 52, 2098, 1100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 57, -120, -42, 33, 3199, 862,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 134, 77, -28, 14, 3822, 623,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNNessAnimPose1P_joint18[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNNessAnimPose1P_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -98, 68, -338, 168, 264, -269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -30, -54, -170, 106, -5, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -208, -177, -126, 44, 357, 363,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNNessAnimPose1P_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -55, 0, 42, 0, -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -55, -26, 42, -2, -9, -375,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -109, -53, 37, -4, -761, -751,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNNessAnimPose1P_joint24[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNNessAnimPose1P_joint25[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -9, 0, 203, 0, -12, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -9, 24, 203, -18, -12, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 39, 49, 166, -36, 316, 329,
	ftAnimEnd(),
};
