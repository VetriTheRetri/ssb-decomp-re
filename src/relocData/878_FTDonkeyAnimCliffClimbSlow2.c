/* AnimJoint data for relocData file 878 (FTDonkeyAnimCliffClimbSlow2) */
/* 912 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimCliffClimbSlow2_joint1[12];
extern u16 dFTDonkeyAnimCliffClimbSlow2_joint2[52];
extern u16 dFTDonkeyAnimCliffClimbSlow2_joint3[18];
extern u16 dFTDonkeyAnimCliffClimbSlow2_joint5[18];
extern u16 dFTDonkeyAnimCliffClimbSlow2_joint6[24];
extern u16 dFTDonkeyAnimCliffClimbSlow2_joint7[16];
extern u16 dFTDonkeyAnimCliffClimbSlow2_joint8[18];
extern u16 dFTDonkeyAnimCliffClimbSlow2_joint9[14];
extern u16 dFTDonkeyAnimCliffClimbSlow2_joint11[14];
extern u16 dFTDonkeyAnimCliffClimbSlow2_joint12[24];
extern u16 dFTDonkeyAnimCliffClimbSlow2_joint13[20];
extern u16 dFTDonkeyAnimCliffClimbSlow2_joint14[18];
extern u16 dFTDonkeyAnimCliffClimbSlow2_joint15[10];
extern u16 dFTDonkeyAnimCliffClimbSlow2_joint17[18];
extern u16 dFTDonkeyAnimCliffClimbSlow2_joint18[24];
extern u16 dFTDonkeyAnimCliffClimbSlow2_joint20[16];
extern u16 dFTDonkeyAnimCliffClimbSlow2_joint22[24];
extern u16 dFTDonkeyAnimCliffClimbSlow2_joint23[24];
extern u16 dFTDonkeyAnimCliffClimbSlow2_joint25[16];
extern u16 dFTDonkeyAnimCliffClimbSlow2_joint26[24];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTDonkeyAnimCliffClimbSlow2_joints[] = {
	(AObjEvent32 *)dFTDonkeyAnimCliffClimbSlow2_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTDonkeyAnimCliffClimbSlow2_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTDonkeyAnimCliffClimbSlow2_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTDonkeyAnimCliffClimbSlow2_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTDonkeyAnimCliffClimbSlow2_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTDonkeyAnimCliffClimbSlow2_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTDonkeyAnimCliffClimbSlow2_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTDonkeyAnimCliffClimbSlow2_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTDonkeyAnimCliffClimbSlow2_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTDonkeyAnimCliffClimbSlow2_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTDonkeyAnimCliffClimbSlow2_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTDonkeyAnimCliffClimbSlow2_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTDonkeyAnimCliffClimbSlow2_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTDonkeyAnimCliffClimbSlow2_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTDonkeyAnimCliffClimbSlow2_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTDonkeyAnimCliffClimbSlow2_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTDonkeyAnimCliffClimbSlow2_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTDonkeyAnimCliffClimbSlow2_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTDonkeyAnimCliffClimbSlow2_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTDonkeyAnimCliffClimbSlow2_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTDonkeyAnimCliffClimbSlow2_joint1[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -2, 0, 36,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 506,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimCliffClimbSlow2_joint2[52] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX), -209, 191,
	ftAnimSetValRateT(FT_ANIM_TRAX, 8), -14, 56,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX, 1), 7,
	ftAnimSetValRateBlock(FT_ANIM_TRAY), 659, 108,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 749, 419,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 1,
	ftAnimSetValRateBlock(FT_ANIM_TRAZ), -33, -44,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 6), -340, -395,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 56,
	ftAnimSetValRateT(FT_ANIM_TRAX, 7), -24, -10,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 419,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 982, 352,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 352, -395,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1032, 108, -397, -124,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTDonkeyAnimCliffClimbSlow2_joint3[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 17, -9, -53, 0, -105, 3,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), -265, -41, -16,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 18,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimCliffClimbSlow2_joint5[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 727, 25, 79, -6, -13, 6,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 750, 24, 41,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTDonkeyAnimCliffClimbSlow2_joint6[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -267, 36, 47, -43, 169, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -67, 9, -84, -1, -448, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, 5, -84, 0, -473, -25,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimCliffClimbSlow2_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1067, 57,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -443, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 35,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimCliffClimbSlow2_joint8[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -169, 5, 83, 0, -11, 7,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTDonkeyAnimCliffClimbSlow2_joint9[14] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 393, 144, 74,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 174, -67, -44,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 18,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimCliffClimbSlow2_joint11[14] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -230, -7, 119,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -398, 70, 29,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimCliffClimbSlow2_joint12[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1951, 34, 1681, -58, -2015, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1724, 2, 1438, -5, -2072, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1724, 0, 1436, -2, -2087, -15,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTDonkeyAnimCliffClimbSlow2_joint13[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -810, -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -528, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -450, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 33,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimCliffClimbSlow2_joint14[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -26, -67, 201, -12, 236, -29,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 103, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTDonkeyAnimCliffClimbSlow2_joint15[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	_FT_ANIM_CMD(11, 0, 1), 29,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTDonkeyAnimCliffClimbSlow2_joint17[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -310, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -365, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -665, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), -404,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTDonkeyAnimCliffClimbSlow2_joint18[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 399, -41, -285, -9, 2813, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -7, -28, -357, -3, 2858, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, -15, -359, -1, 2866, 8,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTDonkeyAnimCliffClimbSlow2_joint20[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1320, -17,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1054, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1039, -15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTDonkeyAnimCliffClimbSlow2_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -686, 49, 22, 0, -310, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -144, 29, 24, 0, -376, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -128, 15, 24, 0, -377, -1,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTDonkeyAnimCliffClimbSlow2_joint23[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -286, 78, 205, 28, 2490, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 128, 15, 241, -5, 2947, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 136, 7, 238, -3, 2958, 11,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTDonkeyAnimCliffClimbSlow2_joint25[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1318, -34,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 965, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 951, -13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTDonkeyAnimCliffClimbSlow2_joint26[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1841, -58, 1540, -9, -1869, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1596, -5, 1503, -1, -1990, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1594, -2, 1503, 0, -1992, -1,
	ftAnimEnd(),
};
