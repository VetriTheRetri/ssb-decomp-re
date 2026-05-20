/* AnimJoint data for relocData file 1189 (FTLinkAnimCliffCatch) */
/* 896 bytes: 120-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimCliffCatch_joint1[12];
extern u16 dFTLinkAnimCliffCatch_joint2[12];
extern u16 dFTLinkAnimCliffCatch_joint3[14];
extern u16 dFTLinkAnimCliffCatch_joint5[14];
extern u16 dFTLinkAnimCliffCatch_joint6[38];
extern u16 dFTLinkAnimCliffCatch_joint7[20];
extern u16 dFTLinkAnimCliffCatch_joint10[30];
extern u16 dFTLinkAnimCliffCatch_joint11[24];
extern u16 dFTLinkAnimCliffCatch_joint12[16];
extern u16 dFTLinkAnimCliffCatch_joint13[8];
extern u16 dFTLinkAnimCliffCatch_joint14[8];
extern u16 dFTLinkAnimCliffCatch_joint17[8];
extern u16 dFTLinkAnimCliffCatch_joint18[14];
extern u16 dFTLinkAnimCliffCatch_joint19[14];
extern u16 dFTLinkAnimCliffCatch_joint21[8];
extern u16 dFTLinkAnimCliffCatch_joint22[24];
extern u16 dFTLinkAnimCliffCatch_joint24[16];
extern u16 dFTLinkAnimCliffCatch_joint26[24];
extern u16 dFTLinkAnimCliffCatch_joint27[30];
extern u16 dFTLinkAnimCliffCatch_joint29[20];
extern u16 dFTLinkAnimCliffCatch_joint30[34];

/* Joint pointer table (30 entries, 120 bytes) */
AObjEvent32 * dFTLinkAnimCliffCatch_joints[] = {
	(AObjEvent32 *)dFTLinkAnimCliffCatch_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimCliffCatch_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimCliffCatch_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTLinkAnimCliffCatch_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffCatch_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimCliffCatch_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTLinkAnimCliffCatch_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffCatch_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimCliffCatch_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimCliffCatch_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimCliffCatch_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTLinkAnimCliffCatch_joint17, /* [14] joint 17 */
	NULL, /* [15] NULL */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffCatch_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimCliffCatch_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTLinkAnimCliffCatch_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffCatch_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTLinkAnimCliffCatch_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffCatch_joint26, /* [24] joint 26 */
	NULL, /* [25] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffCatch_joint27, /* [26] joint 27 */
	(AObjEvent32 *)dFTLinkAnimCliffCatch_joint29, /* [27] joint 29 */
	NULL, /* [28] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffCatch_joint30, /* [29] joint 30 */
};

/* Joint 1 */
u16 dFTLinkAnimCliffCatch_joint1[12] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -1115, -968,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -1850, -253, 0, 312,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimCliffCatch_joint2[12] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 832, 148,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 929, 32, -214, -120,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTLinkAnimCliffCatch_joint3[14] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 320, -11, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 120, -8, -608, 0, -157, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTLinkAnimCliffCatch_joint5[14] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 39, -119, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 59, 0, 20, 5, 227, 10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTLinkAnimCliffCatch_joint6[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 45, 222, -34, -368, -1092, 181,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 234, -112,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -611, 270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -402, -521,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1077, -420,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 41, -202, -1244, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -170, -212, -1282, -37, -278, 333,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTLinkAnimCliffCatch_joint7[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -103, -600,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -947, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -701, 293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -360, 341,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimCliffCatch_joint10[30] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 819, -76, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 461, -398, -74, 202, 308, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, -89, 327, 205, 394, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 191, 25, 542, 42, 255, -24,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTLinkAnimCliffCatch_joint11[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 369, 63, 467, -103, 338, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 448, -7, 103, -61, 358, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 441, -6, 82, -21, 320, -37,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLinkAnimCliffCatch_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -123, -153,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -334, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -244, 89,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimCliffCatch_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTLinkAnimCliffCatch_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimCliffCatch_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimCliffCatch_joint18[14] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -78, -70, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -85, 0, 217, 3, 30, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTLinkAnimCliffCatch_joint19[14] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -192, 184, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -133, 0, 245, 6, 0, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimCliffCatch_joint21[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -174,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTLinkAnimCliffCatch_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -15, 42, -160, 9, 229, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 85, -1, -52, 36, -376, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 74, -10, -31, 20, -467, -91,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTLinkAnimCliffCatch_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 316, 194,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 869, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 884, 15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTLinkAnimCliffCatch_joint26[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 729, 41, 38, 0, 13, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 758, -25, 38, 0, 13, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 737, -20, 38, 0, 13, 0,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTLinkAnimCliffCatch_joint27[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -228, 35, 247, -75, -55, -62,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -42, -96, -136, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -23, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 171, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 231, 60, -131, -88, -59, 77,
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTLinkAnimCliffCatch_joint29[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 470, 108,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 649, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 507, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 316, -190,
	ftAnimEnd(),
	0x0000,
};

/* Joint 30 */
u16 dFTLinkAnimCliffCatch_joint30[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 27, -214, 354, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 3114,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 354, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -187, -266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -506, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -626, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -645, -19, 354, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
