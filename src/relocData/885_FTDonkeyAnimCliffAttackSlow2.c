/* AnimJoint data for relocData file 885 (FTDonkeyAnimCliffAttackSlow2) */
/* 1024 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimCliffAttackSlow2_joint1[18];
extern u16 dFTDonkeyAnimCliffAttackSlow2_joint2[60];
extern u16 dFTDonkeyAnimCliffAttackSlow2_joint3[18];
extern u16 dFTDonkeyAnimCliffAttackSlow2_joint5[14];
extern u16 dFTDonkeyAnimCliffAttackSlow2_joint6[24];
extern u16 dFTDonkeyAnimCliffAttackSlow2_joint7[24];
extern u16 dFTDonkeyAnimCliffAttackSlow2_joint8[18];
extern u16 dFTDonkeyAnimCliffAttackSlow2_joint9[14];
extern u16 dFTDonkeyAnimCliffAttackSlow2_joint11[10];
extern u16 dFTDonkeyAnimCliffAttackSlow2_joint12[42];
extern u16 dFTDonkeyAnimCliffAttackSlow2_joint13[24];
extern u16 dFTDonkeyAnimCliffAttackSlow2_joint14[14];
extern u16 dFTDonkeyAnimCliffAttackSlow2_joint15[8];
extern u16 dFTDonkeyAnimCliffAttackSlow2_joint17[26];
extern u16 dFTDonkeyAnimCliffAttackSlow2_joint18[24];
extern u16 dFTDonkeyAnimCliffAttackSlow2_joint20[20];
extern u16 dFTDonkeyAnimCliffAttackSlow2_joint22[34];
extern u16 dFTDonkeyAnimCliffAttackSlow2_joint23[24];
extern u16 dFTDonkeyAnimCliffAttackSlow2_joint25[16];
extern u16 dFTDonkeyAnimCliffAttackSlow2_joint26[28];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTDonkeyAnimCliffAttackSlow2_joints[] = {
	(AObjEvent32 *)dFTDonkeyAnimCliffAttackSlow2_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTDonkeyAnimCliffAttackSlow2_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTDonkeyAnimCliffAttackSlow2_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTDonkeyAnimCliffAttackSlow2_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTDonkeyAnimCliffAttackSlow2_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTDonkeyAnimCliffAttackSlow2_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTDonkeyAnimCliffAttackSlow2_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTDonkeyAnimCliffAttackSlow2_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTDonkeyAnimCliffAttackSlow2_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTDonkeyAnimCliffAttackSlow2_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTDonkeyAnimCliffAttackSlow2_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTDonkeyAnimCliffAttackSlow2_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTDonkeyAnimCliffAttackSlow2_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTDonkeyAnimCliffAttackSlow2_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTDonkeyAnimCliffAttackSlow2_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTDonkeyAnimCliffAttackSlow2_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTDonkeyAnimCliffAttackSlow2_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTDonkeyAnimCliffAttackSlow2_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTDonkeyAnimCliffAttackSlow2_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTDonkeyAnimCliffAttackSlow2_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTDonkeyAnimCliffAttackSlow2_joint1[18] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 169,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 10), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 465, 404,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 8), 506,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimCliffAttackSlow2_joint2[60] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX), -482, 210,
	ftAnimSetValRateT(FT_ANIM_TRAX, 18), -49, 118,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX, 1), 11,
	ftAnimSetValRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 592, 55, 19, -704,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), -403, -985,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 629, 312,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 312,
	ftAnimSetValRateT(FT_ANIM_TRAY, 7), 992, 291,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -985,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -428, -150,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -150,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 7), -402, 29,
	ftAnimBlock(0, 4),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 118,
	ftAnimSetValRateT(FT_ANIM_TRAX, 3), -24, 26,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 291,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 1032, 85,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTDonkeyAnimCliffAttackSlow2_joint3[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 17, -9, -53, 0, -105, 2,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), -265, -41, -16,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimCliffAttackSlow2_joint5[14] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 727, 25, 79, -6, -13, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 750, 24, 41,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTDonkeyAnimCliffAttackSlow2_joint6[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1208, 42, -1715, 33, -1420, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1540, 9, -1523, 0, -2057, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1545, 5, -1523, 0, -2082, -24,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimCliffAttackSlow2_joint7[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -964, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -616, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -519, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -440, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 32,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimCliffAttackSlow2_joint8[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -270, 8, 23, 5, -460, 3,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 15,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTDonkeyAnimCliffAttackSlow2_joint9[14] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 393, 144, 74,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 174, -67, -44,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimCliffAttackSlow2_joint11[10] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -230, -7, 119,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -398, 70, 29,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimCliffAttackSlow2_joint12[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -711, 30, -30, 51, -490, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -415, -45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -121, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 200, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 186, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 173, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -459, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -115, 5, 172, -1, -479, -19,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTDonkeyAnimCliffAttackSlow2_joint13[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -795, -28,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -636, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -537, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -452, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 35,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimCliffAttackSlow2_joint14[14] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -240, -1, 230, -16, -1, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 103, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTDonkeyAnimCliffAttackSlow2_joint15[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTDonkeyAnimCliffAttackSlow2_joint17[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -182, -8, 41, -3, 110, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -734, -14, 6, -2, 24, -7,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -404, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTDonkeyAnimCliffAttackSlow2_joint18[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2064, -26, -1368, 26, 1132, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1600, -28, -1250, 3, 1249, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1584, -15, -1249, 1, 1258, 8,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTDonkeyAnimCliffAttackSlow2_joint20[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1350, -14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1093, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1054, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1039, -15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTDonkeyAnimCliffAttackSlow2_joint22[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -717, 11, 21, 0, -275, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 24, 0, -376, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -444, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -342, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -144, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -128, 15, 24, 0, -377, -1,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTDonkeyAnimCliffAttackSlow2_joint23[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1242, 91, -1813, -40, 813, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1740, 9, -1848, 3, 1343, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1745, 4, -1846, 2, 1350, 6,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTDonkeyAnimCliffAttackSlow2_joint25[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1306, -30,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 959, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 951, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTDonkeyAnimCliffAttackSlow2_joint26[28] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1888, -57, 1564, -12, -1799, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1595, -3, 1503, -1, -1990, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1594, -1, 1503, 0, -1992, -1,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
