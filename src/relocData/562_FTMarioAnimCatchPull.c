/* AnimJoint data for relocData file 562 (FTMarioAnimCatchPull) */
/* 896 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimCatchPull_joint1[28];
extern u16 dFTMarioAnimCatchPull_joint2[22];
extern u16 dFTMarioAnimCatchPull_joint4[22];
extern u16 dFTMarioAnimCatchPull_joint5[34];
extern u16 dFTMarioAnimCatchPull_joint6[14];
extern u16 dFTMarioAnimCatchPull_joint7[18];
extern u16 dFTMarioAnimCatchPull_joint8[32];
extern u16 dFTMarioAnimCatchPull_joint10[20];
extern u16 dFTMarioAnimCatchPull_joint11[34];
extern u16 dFTMarioAnimCatchPull_joint12[16];
extern u16 dFTMarioAnimCatchPull_joint13[16];
extern u16 dFTMarioAnimCatchPull_joint15[12];
extern u16 dFTMarioAnimCatchPull_joint16[24];
extern u16 dFTMarioAnimCatchPull_joint18[16];
extern u16 dFTMarioAnimCatchPull_joint20[24];
extern u16 dFTMarioAnimCatchPull_joint21[24];
extern u16 dFTMarioAnimCatchPull_joint23[8];
extern u16 dFTMarioAnimCatchPull_joint24[34];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTMarioAnimCatchPull_joints[] = {
	(u32)dFTMarioAnimCatchPull_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimCatchPull_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimCatchPull_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimCatchPull_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimCatchPull_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimCatchPull_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimCatchPull_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimCatchPull_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimCatchPull_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimCatchPull_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimCatchPull_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimCatchPull_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimCatchPull_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimCatchPull_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimCatchPull_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimCatchPull_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimCatchPull_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTMarioAnimCatchPull_joint24, /* [23] joint 24 */
	0xFFFF00DB, /* [24] END */
};

/* Joint 1 */
u16 dFTMarioAnimCatchPull_joint1[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 540, 0, 180, 499,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), 360, -143,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 10), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAY, 10), 223, 5, 540, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimCatchPull_joint2[22] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -71, 1, -790, -3, -95, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -71, -790, -95,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTMarioAnimCatchPull_joint4[22] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 790, 32, 622, -4, 795, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 690, -17, 503, -21, 197, -97,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimCatchPull_joint5[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY), -945, -111, -1457, -51, 721, 18, 6144, 0, 4095, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAZ), 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 5), 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1056, -291, -1508, -55, 739, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1527, -471, -1569, -60, 752, 12,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimCatchPull_joint6[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -9,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimCatchPull_joint7[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 143, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -625,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 0, 12,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 6,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimCatchPull_joint8[32] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -28, 282, -60,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 0, 4, 288, 0, 0, 10,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 4,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -9, 0, 0, 0, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 201, 4, -4, 0, 176, 4,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimCatchPull_joint10[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -221, -5, 139, 3, -209, -4,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimCatchPull_joint11[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY), 2948, 42, 185, -49, 2329, -1, 6144, 0, 4095, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAZ), 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 5), 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2991, 51, 135, -56, 2327, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3050, 59, 71, -64, 2312, -14,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimCatchPull_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimCatchPull_joint13[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 753, -52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 759, -11,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 3,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTMarioAnimCatchPull_joint15[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, 0, 71, 0, 35,
	ftAnimSetValAfter(FT_ANIM_ROTY), -804,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTMarioAnimCatchPull_joint16[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -688, 43, -233, 100, 346, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -644, 55, -132, 33, 354, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -576, 68, -166, -34, 328, -25,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimCatchPull_joint18[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 276, -187,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 89, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 151, 61,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimCatchPull_joint20[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -275, 3, -10, 0, -153, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -272, 5, -10, 0, -153, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -263, 8, -10, 0, -154, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimCatchPull_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -6, -86, 282, 51, 138, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -92, -65, 334, 46, 145, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -137, -45, 375, 41, 167, 21,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimCatchPull_joint23[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimCatchPull_joint24[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1829, 39, -1522, -94, 1651, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1869, 39, -1616, -82, 1685, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1907, 38, -1687, -70, 1720, 35,
	ftAnimEnd(),
	0x50EE, 0x0000, 0x0648, 0x0000, 0x0000, 0x012C, 0x0258, 0x0801, 0x0002, 0x0000,
};
