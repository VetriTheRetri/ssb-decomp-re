/* AnimJoint data for relocData file 877 (FTDonkeyAnimCliffClimbSlow1) */
/* 1488 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimCliffClimbSlow1_joint1[22];
extern u16 dFTDonkeyAnimCliffClimbSlow1_joint2[80];
extern u16 dFTDonkeyAnimCliffClimbSlow1_joint3[24];
extern u16 dFTDonkeyAnimCliffClimbSlow1_joint5[24];
extern u16 dFTDonkeyAnimCliffClimbSlow1_joint6[58];
extern u16 dFTDonkeyAnimCliffClimbSlow1_joint7[24];
extern u16 dFTDonkeyAnimCliffClimbSlow1_joint8[24];
extern u16 dFTDonkeyAnimCliffClimbSlow1_joint9[18];
extern u16 dFTDonkeyAnimCliffClimbSlow1_joint11[22];
extern u16 dFTDonkeyAnimCliffClimbSlow1_joint12[64];
extern u16 dFTDonkeyAnimCliffClimbSlow1_joint13[16];
extern u16 dFTDonkeyAnimCliffClimbSlow1_joint14[40];
extern u16 dFTDonkeyAnimCliffClimbSlow1_joint17[10];
extern u16 dFTDonkeyAnimCliffClimbSlow1_joint18[76];
extern u16 dFTDonkeyAnimCliffClimbSlow1_joint20[24];
extern u16 dFTDonkeyAnimCliffClimbSlow1_joint22[42];
extern u16 dFTDonkeyAnimCliffClimbSlow1_joint23[60];
extern u16 dFTDonkeyAnimCliffClimbSlow1_joint25[24];
extern u16 dFTDonkeyAnimCliffClimbSlow1_joint26[40];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTDonkeyAnimCliffClimbSlow1_joints[] = {
	(AObjEvent32 *)dFTDonkeyAnimCliffClimbSlow1_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTDonkeyAnimCliffClimbSlow1_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTDonkeyAnimCliffClimbSlow1_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTDonkeyAnimCliffClimbSlow1_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTDonkeyAnimCliffClimbSlow1_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTDonkeyAnimCliffClimbSlow1_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTDonkeyAnimCliffClimbSlow1_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTDonkeyAnimCliffClimbSlow1_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTDonkeyAnimCliffClimbSlow1_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTDonkeyAnimCliffClimbSlow1_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTDonkeyAnimCliffClimbSlow1_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTDonkeyAnimCliffClimbSlow1_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTDonkeyAnimCliffClimbSlow1_joint17, /* [14] joint 17 */
	NULL, /* [15] NULL */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTDonkeyAnimCliffClimbSlow1_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTDonkeyAnimCliffClimbSlow1_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTDonkeyAnimCliffClimbSlow1_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTDonkeyAnimCliffClimbSlow1_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTDonkeyAnimCliffClimbSlow1_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTDonkeyAnimCliffClimbSlow1_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTDonkeyAnimCliffClimbSlow1_joint1[22] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 62), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAZ, 1), 40,
	ftAnimSetValRateBlock(FT_ANIM_TRAY), -1974, 950,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 12), -795, 734,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 0, 353,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimCliffClimbSlow1_joint2[80] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -475, -102, 1032, -37, -427, 4,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 9), -389, 69,
	ftAnimSetValRateT(FT_ANIM_TRAX, 11), -249, -12,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 993, 170,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 170,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 969, -216,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -216,
	ftAnimSetValRateT(FT_ANIM_TRAY, 8), 699, -197,
	ftAnimBlock(0, 6),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 69,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), -271, 307,
	ftAnimBlock(0, 2),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -12,
	ftAnimSetValRateT(FT_ANIM_TRAX, 4), -209, 191,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -197,
	ftAnimSetValRateT(FT_ANIM_TRAY, 10), 659, 108,
	ftAnimBlock(0, 3),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 307,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 8), -33, -44,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 191,
	ftAnimSetValRateT(FT_ANIM_TRAX, 8), -14, 56,
	ftAnimBlock(0, 6),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 108,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 749, 419,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTDonkeyAnimCliffClimbSlow1_joint3[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 17, -11, -53, 0, -105, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 17, -9, -53, 0, -105, 3,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), -265, -41, -16,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimCliffClimbSlow1_joint5[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -9, 36, 211, 2, -148, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 727, 25, 79, -6, -13, 6,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 750, 24, 41,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTDonkeyAnimCliffClimbSlow1_joint6[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 47, -1, -89, 4, -446, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 11), -323, -27, 60, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -232, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -125, 111,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 303, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -341, -13, 136, 65,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -298, 27, 93, -42,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 301, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 226, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -267, 31, 47, -46, 169, -57,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimCliffClimbSlow1_joint7[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1080, -34,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -1342, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1302, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1111, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1067, 44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimCliffClimbSlow1_joint8[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -153, 6, -26, 20, -213, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -169, 5, 83, 0, -11, 7,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 0, 0, 0,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTDonkeyAnimCliffClimbSlow1_joint9[18] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 393, 144, 74,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 393, 144, 74,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 174, -67, -44,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimCliffClimbSlow1_joint11[22] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -603, -188, 324,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -603, -188, 324,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -230, -7, 119,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -398, 70, 29,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimCliffClimbSlow1_joint12[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -486, -13, 303, -14, -734, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -708, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 156, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -475, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -517, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -389, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -726, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -424, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 133, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -118, 32,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -378, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -365, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -342, 22, -72, 46, -406, 17,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTDonkeyAnimCliffClimbSlow1_joint13[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -797, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -793, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -810, -16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimCliffClimbSlow1_joint14[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1161, 67, 0, -16, 268, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1161, 29, 0, 24, 268, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1453, -91, 244, 15, 598, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -26, -67, 201, -12, 236, -29,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 103, 0, 0,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTDonkeyAnimCliffClimbSlow1_joint17[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	_FT_ANIM_CMD(11, 0, 1), 7,
	ftAnimBlock(0, 22),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTDonkeyAnimCliffClimbSlow1_joint18[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 348, 97, -691, 1, 1800, -113,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -303, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 418, -47, 1710, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 349, -35, 1785, 45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1823, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 472, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 471, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 429, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1895, 84,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 2648, 53,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -207, 87,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -266, -22,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2698, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 2780, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 399, -29, -285, -19, 2813, 32,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTDonkeyAnimCliffClimbSlow1_joint20[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1189, 14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1306, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1329, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1336, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1320, -15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTDonkeyAnimCliffClimbSlow1_joint22[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 377, 23, 9, 0, 41, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 22, 0, -294, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 182, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 76, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -630, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -676, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -705, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -686, 19, 22, 0, -310, -16,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTDonkeyAnimCliffClimbSlow1_joint23[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -316, -38, 198, -38, 2024, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 2235, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -377, -36, 130, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -417, -42, 88, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -505, 62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 170, 39,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2272, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 2428, 57,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -437, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -362, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -286, 75, 205, 34, 2490, 62,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTDonkeyAnimCliffClimbSlow1_joint25[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1190, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1313, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1323, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1339, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1318, -21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTDonkeyAnimCliffClimbSlow1_joint26[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1619, 24, 1738, 0, -1270, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 1551, -11, -1837, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 1775, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1837, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 1897, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1841, -55, 1540, -10, -1869, -32,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
