/* AnimJoint data for relocData file 1181 (FTLinkAnimEggLayPulled) */
/* 912 bytes: 120-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimEggLayPulled_joint1[8];
extern u16 dFTLinkAnimEggLayPulled_joint2[14];
extern u16 dFTLinkAnimEggLayPulled_joint3[26];
extern u16 dFTLinkAnimEggLayPulled_joint5[26];
extern u16 dFTLinkAnimEggLayPulled_joint6[34];
extern u16 dFTLinkAnimEggLayPulled_joint7[20];
extern u16 dFTLinkAnimEggLayPulled_joint10[8];
extern u16 dFTLinkAnimEggLayPulled_joint11[32];
extern u16 dFTLinkAnimEggLayPulled_joint12[16];
extern u16 dFTLinkAnimEggLayPulled_joint13[8];
extern u16 dFTLinkAnimEggLayPulled_joint14[8];
extern u16 dFTLinkAnimEggLayPulled_joint17[8];
extern u16 dFTLinkAnimEggLayPulled_joint18[18];
extern u16 dFTLinkAnimEggLayPulled_joint19[18];
extern u16 dFTLinkAnimEggLayPulled_joint21[8];
extern u16 dFTLinkAnimEggLayPulled_joint22[30];
extern u16 dFTLinkAnimEggLayPulled_joint24[16];
extern u16 dFTLinkAnimEggLayPulled_joint26[32];
extern u16 dFTLinkAnimEggLayPulled_joint27[24];
extern u16 dFTLinkAnimEggLayPulled_joint29[16];
extern u16 dFTLinkAnimEggLayPulled_joint30[26];

/* Joint pointer table (30 entries, 120 bytes) */
u32 dFTLinkAnimEggLayPulled_joints[] = {
	(u32)dFTLinkAnimEggLayPulled_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimEggLayPulled_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimEggLayPulled_joint3, /* [2] joint 3 */
	(u32)dFTLinkAnimEggLayPulled_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTLinkAnimEggLayPulled_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimEggLayPulled_joint7, /* [6] joint 7 */
	(u32)dFTLinkAnimEggLayPulled_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTLinkAnimEggLayPulled_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimEggLayPulled_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimEggLayPulled_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimEggLayPulled_joint14, /* [13] joint 14 */
	(u32)dFTLinkAnimEggLayPulled_joint17, /* [14] joint 17 */
	0x00000000, /* [15] NULL */
	0x00000000, /* [16] NULL */
	(u32)dFTLinkAnimEggLayPulled_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimEggLayPulled_joint19, /* [18] joint 19 */
	(u32)dFTLinkAnimEggLayPulled_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTLinkAnimEggLayPulled_joint22, /* [21] joint 22 */
	(u32)dFTLinkAnimEggLayPulled_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTLinkAnimEggLayPulled_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	(u32)dFTLinkAnimEggLayPulled_joint27, /* [26] joint 27 */
	(u32)dFTLinkAnimEggLayPulled_joint29, /* [27] joint 29 */
	0x00000000, /* [28] NULL */
	(u32)dFTLinkAnimEggLayPulled_joint30, /* [29] joint 30 */
};

/* Joint 1 */
u16 dFTLinkAnimEggLayPulled_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1200, 120,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLinkAnimEggLayPulled_joint2[14] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), -120, 100,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, -298,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), -120,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTLinkAnimEggLayPulled_joint3[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, -2, 276, -47, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -124, 38, -10, -95, -5, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 8, -10, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTLinkAnimEggLayPulled_joint5[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 259, -56, 166, -27, 56, -9,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -76, -25, 0, -55, 0, -18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 184, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTLinkAnimEggLayPulled_joint6[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1888, -791, -1281, -316, -1694, 731,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1096, -443, -1598, -95, -963, 337,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1473, 0, -1019, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 1000,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1096, 96, -1598, -125, -963, 56,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTLinkAnimEggLayPulled_joint7[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -500, 167,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -332, 250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -332, -332,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimEggLayPulled_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTLinkAnimEggLayPulled_joint11[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 416, 299, 123, -105, -50, 536,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 715, 159, 18, -21, 486, 274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 735, 0, 80, 0, 498, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 715, -19, 18, -61, 486, -12,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLinkAnimEggLayPulled_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -587, 156,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -264, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -431, -166,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimEggLayPulled_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTLinkAnimEggLayPulled_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimEggLayPulled_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimEggLayPulled_joint18[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValRate(FT_ANIM_ROTY), -163, 27,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 0, -35, 0, 54,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -107, 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTLinkAnimEggLayPulled_joint19[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 18, -199, 33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 112, -98, 0, 66,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -296, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimEggLayPulled_joint21[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTLinkAnimEggLayPulled_joint22[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -242, -81, -244, 157, 108, 292,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -344, -11, -81, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 401, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 295, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -346, -1, -163, -82, 114, -180,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTLinkAnimEggLayPulled_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 249, -249,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 5, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 217, 212,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTLinkAnimEggLayPulled_joint26[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 329, -160, -161, -241, -34, 215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 168, -11, -403, -125, 180, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 306, 115, -413, 19, 115, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 399, 92, -363, 50, -4, -119,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTLinkAnimEggLayPulled_joint27[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, -68, 269, -86, -125, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 199, 12, 163, -9, -282, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 227, 28, 164, 1, -342, -59,
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTLinkAnimEggLayPulled_joint29[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 424, 31,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 419, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 366, -52,
	ftAnimEnd(),
	0x0000,
};

/* Joint 30 */
u16 dFTLinkAnimEggLayPulled_joint30[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1180, -52, 1682, 178, 1538, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1093, -34, 1871, 4, 1583, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1058, -35, 1870, -1, 1648, 65,
	ftAnimEnd(),
	0x0000, 0x0000,
};
