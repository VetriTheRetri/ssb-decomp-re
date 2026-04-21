/* AnimJoint data for relocData file 1203 (FTLinkAnimCliffEscapeSlow1) */
/* 992 bytes: 120-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimCliffEscapeSlow1_joint1[14];
extern u16 dFTLinkAnimCliffEscapeSlow1_joint2[24];
extern u16 dFTLinkAnimCliffEscapeSlow1_joint3[16];
extern u16 dFTLinkAnimCliffEscapeSlow1_joint5[16];
extern u16 dFTLinkAnimCliffEscapeSlow1_joint6[24];
extern u16 dFTLinkAnimCliffEscapeSlow1_joint7[16];
extern u16 dFTLinkAnimCliffEscapeSlow1_joint10[16];
extern u16 dFTLinkAnimCliffEscapeSlow1_joint11[34];
extern u16 dFTLinkAnimCliffEscapeSlow1_joint12[28];
extern u16 dFTLinkAnimCliffEscapeSlow1_joint13[16];
extern u16 dFTLinkAnimCliffEscapeSlow1_joint14[14];
extern u16 dFTLinkAnimCliffEscapeSlow1_joint17[16];
extern u16 dFTLinkAnimCliffEscapeSlow1_joint18[16];
extern u16 dFTLinkAnimCliffEscapeSlow1_joint19[16];
extern u16 dFTLinkAnimCliffEscapeSlow1_joint21[16];
extern u16 dFTLinkAnimCliffEscapeSlow1_joint22[24];
extern u16 dFTLinkAnimCliffEscapeSlow1_joint24[16];
extern u16 dFTLinkAnimCliffEscapeSlow1_joint26[24];
extern u16 dFTLinkAnimCliffEscapeSlow1_joint27[38];
extern u16 dFTLinkAnimCliffEscapeSlow1_joint29[16];
extern u16 dFTLinkAnimCliffEscapeSlow1_joint30[36];

/* Joint pointer table (30 entries, 120 bytes) */
u32 dFTLinkAnimCliffEscapeSlow1_joints[] = {
	(u32)dFTLinkAnimCliffEscapeSlow1_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimCliffEscapeSlow1_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimCliffEscapeSlow1_joint3, /* [2] joint 3 */
	(u32)dFTLinkAnimCliffEscapeSlow1_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTLinkAnimCliffEscapeSlow1_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimCliffEscapeSlow1_joint7, /* [6] joint 7 */
	(u32)dFTLinkAnimCliffEscapeSlow1_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTLinkAnimCliffEscapeSlow1_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimCliffEscapeSlow1_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimCliffEscapeSlow1_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimCliffEscapeSlow1_joint14, /* [13] joint 14 */
	(u32)dFTLinkAnimCliffEscapeSlow1_joint17, /* [14] joint 17 */
	0x00000000, /* [15] NULL */
	0x00000000, /* [16] NULL */
	(u32)dFTLinkAnimCliffEscapeSlow1_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimCliffEscapeSlow1_joint19, /* [18] joint 19 */
	(u32)dFTLinkAnimCliffEscapeSlow1_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTLinkAnimCliffEscapeSlow1_joint22, /* [21] joint 22 */
	(u32)dFTLinkAnimCliffEscapeSlow1_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTLinkAnimCliffEscapeSlow1_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	(u32)dFTLinkAnimCliffEscapeSlow1_joint27, /* [26] joint 27 */
	(u32)dFTLinkAnimCliffEscapeSlow1_joint29, /* [27] joint 29 */
	0x00000000, /* [28] NULL */
	(u32)dFTLinkAnimCliffEscapeSlow1_joint30, /* [29] joint 30 */
};

/* Joint 1 */
u16 dFTLinkAnimCliffEscapeSlow1_joint1[14] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValRate(FT_ANIM_TRAY), -1132, 1345,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 453, 0, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimCliffEscapeSlow1_joint2[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAZ), 0, -214,
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY), -314, -98, 936, -616,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -314, 274, 81, -687, -214, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTLinkAnimCliffEscapeSlow1_joint3[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 18, -12, -45, 51, -95, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 37, 114, -32, 77, -336, 54,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimCliffEscapeSlow1_joint5[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 408, 56, 141, 17, 53, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 679, -44, 209, 6, 307, -23,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimCliffEscapeSlow1_joint6[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2105, 91, -1364, -19, 1696, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1799, 28, -1444, -8, 1475, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1776, 23, -1449, -4, 1465, -10,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTLinkAnimCliffEscapeSlow1_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1143, 24,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1039, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1004, 34,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimCliffEscapeSlow1_joint10[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 359, 36, 63, -59, -74, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 590, -19, -109, 8, -316, 27,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimCliffEscapeSlow1_joint11[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2108, -14, -1634, 174, -2668, -126,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1881, 86, -2717, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1466, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1539, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1585, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1812, 69, -1584, 1, -2634, 83,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLinkAnimCliffEscapeSlow1_joint12[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -364, 357,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -183, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -383, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -528, -144,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimCliffEscapeSlow1_joint13[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -261, -23, 49, 23, 311, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -261, 14, 49, -17, 311, -12,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTLinkAnimCliffEscapeSlow1_joint14[14] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 804, 2, -804, 0, 804, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimCliffEscapeSlow1_joint17[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1569, 7, -22, 16, -1296, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1780, 1, -360, 0, -1330, 62,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimCliffEscapeSlow1_joint18[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -78, 0, -15, -21, 68, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -78, 7, -15, 1, 68, -6,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTLinkAnimCliffEscapeSlow1_joint19[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -122, 0, -137, -34, 95, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -122, 11, -137, 12, 95, -8,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimCliffEscapeSlow1_joint21[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -179, -16, -260, -23, 55, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -179, 16, -260, 23, 55, -5,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTLinkAnimCliffEscapeSlow1_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 204, -2, -177, -19, -256, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 198, 5, -205, 21, -204, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 204, 5, -177, 28, -256, -52,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTLinkAnimCliffEscapeSlow1_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 469, -55,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 402, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 469, 66,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTLinkAnimCliffEscapeSlow1_joint26[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2081, -16, -1646, -1, -1594, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 2068, 11, -1653, 4, -1616, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2081, 12, -1646, 6, -1594, 22,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTLinkAnimCliffEscapeSlow1_joint27[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 230, -150, 437, 30, 2562, -191,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -427, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 286, -145, 2170, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 125, -117, 2247, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 51, -29, 2346, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -460, -33, 67, 16, 2386, 39,
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTLinkAnimCliffEscapeSlow1_joint29[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1140, 18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 998, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 971, -27,
	ftAnimEnd(),
	0x0000,
};

/* Joint 30 */
u16 dFTLinkAnimCliffEscapeSlow1_joint30[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -876, 19, -102, 0, 354, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -101, 0, 355, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -697, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -627, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -644, -16, -102, -1, 354, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
