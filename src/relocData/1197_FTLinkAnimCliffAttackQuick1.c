/* AnimJoint data for relocData file 1197 (FTLinkAnimCliffAttackQuick1) */
/* 1296 bytes: 120-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimCliffAttackQuick1_joint1[24];
extern u16 dFTLinkAnimCliffAttackQuick1_joint2[22];
extern u16 dFTLinkAnimCliffAttackQuick1_joint3[32];
extern u16 dFTLinkAnimCliffAttackQuick1_joint5[28];
extern u16 dFTLinkAnimCliffAttackQuick1_joint6[30];
extern u16 dFTLinkAnimCliffAttackQuick1_joint7[24];
extern u16 dFTLinkAnimCliffAttackQuick1_joint10[26];
extern u16 dFTLinkAnimCliffAttackQuick1_joint11[50];
extern u16 dFTLinkAnimCliffAttackQuick1_joint12[28];
extern u16 dFTLinkAnimCliffAttackQuick1_joint13[24];
extern u16 dFTLinkAnimCliffAttackQuick1_joint14[20];
extern u16 dFTLinkAnimCliffAttackQuick1_joint17[26];
extern u16 dFTLinkAnimCliffAttackQuick1_joint18[24];
extern u16 dFTLinkAnimCliffAttackQuick1_joint19[24];
extern u16 dFTLinkAnimCliffAttackQuick1_joint21[26];
extern u16 dFTLinkAnimCliffAttackQuick1_joint22[34];
extern u16 dFTLinkAnimCliffAttackQuick1_joint24[16];
extern u16 dFTLinkAnimCliffAttackQuick1_joint26[30];
extern u16 dFTLinkAnimCliffAttackQuick1_joint27[34];
extern u16 dFTLinkAnimCliffAttackQuick1_joint29[24];
extern u16 dFTLinkAnimCliffAttackQuick1_joint30[42];

/* Joint pointer table (30 entries, 120 bytes) */
AObjEvent32 * dFTLinkAnimCliffAttackQuick1_joints[] = {
	(AObjEvent32 *)dFTLinkAnimCliffAttackQuick1_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimCliffAttackQuick1_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimCliffAttackQuick1_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTLinkAnimCliffAttackQuick1_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffAttackQuick1_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimCliffAttackQuick1_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTLinkAnimCliffAttackQuick1_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffAttackQuick1_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimCliffAttackQuick1_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimCliffAttackQuick1_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimCliffAttackQuick1_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTLinkAnimCliffAttackQuick1_joint17, /* [14] joint 17 */
	NULL, /* [15] NULL */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffAttackQuick1_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimCliffAttackQuick1_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTLinkAnimCliffAttackQuick1_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffAttackQuick1_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTLinkAnimCliffAttackQuick1_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffAttackQuick1_joint26, /* [24] joint 26 */
	NULL, /* [25] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffAttackQuick1_joint27, /* [26] joint 27 */
	(AObjEvent32 *)dFTLinkAnimCliffAttackQuick1_joint29, /* [27] joint 29 */
	NULL, /* [28] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffAttackQuick1_joint30, /* [29] joint 30 */
};

/* Joint 1 */
u16 dFTLinkAnimCliffAttackQuick1_joint1[24] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 20), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAZ, 1), 10,
	ftAnimSetValRateBlock(FT_ANIM_TRAY), -532, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), -532, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 426,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 0, 453,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimCliffAttackQuick1_joint2[22] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 480, 0, -600, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 395, 0, -447, 1,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 52,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 374, 952, -401, 590,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTLinkAnimCliffAttackQuick1_joint3[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -48, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -117, 0, -48, 0, 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 178, 4, -6,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 5), -61,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 1055, 322, 0, 32,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTLinkAnimCliffAttackQuick1_joint5[28] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 446, 0, 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 513, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -69,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 532, 12, 0, 5, 0, 1,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimCliffAttackQuick1_joint6[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -9, 0, 12, 2, -623, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 3, -15, 28, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -369, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -357, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -16, -20, 7, -20, -694, -337,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTLinkAnimCliffAttackQuick1_joint7[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -539, -39,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -858, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -912, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -670, 452,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 663,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimCliffAttackQuick1_joint10[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 690, 49, -126, -14, -32, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 690, -9, -126, 1, -32, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 590, -68, -109, 13, -316, 10,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimCliffAttackQuick1_joint11[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -456, -5, -35, -109, -978, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -849, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -431, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -145, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -59, 84,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 144, 158,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -792, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -313, 300, 368, 171, -653, 271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 169, 482, 487, 118, -248, 404,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLinkAnimCliffAttackQuick1_joint12[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -216, 216,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -189, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -745, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -977, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1057, -80,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimCliffAttackQuick1_joint13[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -261, -26, 49, 25, 311, 31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -261, 49, 311,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -261, 26, 49, -25, 311, -31,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTLinkAnimCliffAttackQuick1_joint14[20] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 804, -804, 804,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 804, 13, -804, 0, 804, -13,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimCliffAttackQuick1_joint17[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1569, -12, -22, 51, -1296, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1569, 72, -22, -6, -1296, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 2291, 12, -90, -51, -1120, 95,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimCliffAttackQuick1_joint18[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 8, 0, -21, 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 18, 0, -16, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTLinkAnimCliffAttackQuick1_joint19[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 13, 0, -24, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 6, 0, -2, 0, 1,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimCliffAttackQuick1_joint21[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -281, 0, 0, 0, 0, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 0, 28,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -26, 0, 0, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTLinkAnimCliffAttackQuick1_joint22[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1416, 9, -1452, -1, -2685, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -1345, -97, -1432, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -2771, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2786, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2659, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1469, -123, -1351, 80, -2422, 236,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTLinkAnimCliffAttackQuick1_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 788, 31,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1058, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1030, -27,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTLinkAnimCliffAttackQuick1_joint26[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 364, 10, -126, -16, -399, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -89, 20, -260, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 270, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 300, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 420, 119, -62, 26, -55, 205,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTLinkAnimCliffAttackQuick1_joint27[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -146, -3, 17, -1, -1044, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -138, 67, 42, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1116, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1129, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1008, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -85, 52, 81, 38, -869, 138,
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTLinkAnimCliffAttackQuick1_joint29[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 780, 33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1056, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1103, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 850, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 934, 83,
	ftAnimEnd(),
	0x0000,
};

/* Joint 30 */
u16 dFTLinkAnimCliffAttackQuick1_joint30[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2865, -2, 156, 8, -412, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 156, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -282, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 2929, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3127, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2897, -140, 154, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2846, -51, 150, -3, -42, 239,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
