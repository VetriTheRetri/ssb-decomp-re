/* AnimJoint data for relocData file 881 (FTDonkeyAnimCliffClimbQuick2) */
/* 1712 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimCliffClimbQuick2_joint1[30];
extern u16 dFTDonkeyAnimCliffClimbQuick2_joint2[54];
extern u16 dFTDonkeyAnimCliffClimbQuick2_joint3[28];
extern u16 dFTDonkeyAnimCliffClimbQuick2_joint5[26];
extern u16 dFTDonkeyAnimCliffClimbQuick2_joint6[72];
extern u16 dFTDonkeyAnimCliffClimbQuick2_joint7[40];
extern u16 dFTDonkeyAnimCliffClimbQuick2_joint8[26];
extern u16 dFTDonkeyAnimCliffClimbQuick2_joint9[20];
extern u16 dFTDonkeyAnimCliffClimbQuick2_joint11[20];
extern u16 dFTDonkeyAnimCliffClimbQuick2_joint12[112];
extern u16 dFTDonkeyAnimCliffClimbQuick2_joint13[40];
extern u16 dFTDonkeyAnimCliffClimbQuick2_joint14[22];
extern u16 dFTDonkeyAnimCliffClimbQuick2_joint15[10];
extern u16 dFTDonkeyAnimCliffClimbQuick2_joint17[18];
extern u16 dFTDonkeyAnimCliffClimbQuick2_joint18[68];
extern u16 dFTDonkeyAnimCliffClimbQuick2_joint20[28];
extern u16 dFTDonkeyAnimCliffClimbQuick2_joint22[52];
extern u16 dFTDonkeyAnimCliffClimbQuick2_joint23[64];
extern u16 dFTDonkeyAnimCliffClimbQuick2_joint25[28];
extern u16 dFTDonkeyAnimCliffClimbQuick2_joint26[46];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTDonkeyAnimCliffClimbQuick2_joints[] = {
	(u32)dFTDonkeyAnimCliffClimbQuick2_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimCliffClimbQuick2_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimCliffClimbQuick2_joint3, /* [2] joint 3 */
	(u32)dFTDonkeyAnimCliffClimbQuick2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTDonkeyAnimCliffClimbQuick2_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimCliffClimbQuick2_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimCliffClimbQuick2_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimCliffClimbQuick2_joint9, /* [8] joint 9 */
	(u32)dFTDonkeyAnimCliffClimbQuick2_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTDonkeyAnimCliffClimbQuick2_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimCliffClimbQuick2_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimCliffClimbQuick2_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimCliffClimbQuick2_joint15, /* [14] joint 15 */
	(u32)dFTDonkeyAnimCliffClimbQuick2_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTDonkeyAnimCliffClimbQuick2_joint18, /* [17] joint 18 */
	(u32)dFTDonkeyAnimCliffClimbQuick2_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTDonkeyAnimCliffClimbQuick2_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTDonkeyAnimCliffClimbQuick2_joint23, /* [22] joint 23 */
	(u32)dFTDonkeyAnimCliffClimbQuick2_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTDonkeyAnimCliffClimbQuick2_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTDonkeyAnimCliffClimbQuick2_joint1[30] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 191,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), 403, 437,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 20), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), 820, 304,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 974, 123,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), 974,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimCliffClimbQuick2_joint2[54] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), -24,
	ftAnimSetValRateBlock(FT_ANIM_TRAZ), -391, 187,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), -285, 149,
	_FT_ANIM_CMD(11, FT_ANIM_TRAZ, 1), 1,
	ftAnimSetValRateBlock(FT_ANIM_TRAY), 1284, 1492,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 1531, 2089,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 2089, 149,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 2072, 1571, 226, 1590,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 2316, -555, 509, -277,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 821, -551, -396, -364,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 4), -402,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 1006, 348,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 348,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 1032, 208,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTDonkeyAnimCliffClimbQuick2_joint3[28] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 17, 93, -53, 0, -28, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 2951, 97, -41, 0, -16, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4,
	ftAnimBlock(0, 20),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 2951, -41, -16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimCliffClimbQuick2_joint5[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 414, 35, 15, 0, 7, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 827, 11, 24, 0, 41, 1,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4,
	ftAnimBlock(0, 20),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 750, 24, 41,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTDonkeyAnimCliffClimbQuick2_joint6[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -83, -44, -357, 177, -148, -186,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -53, -1, -194, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1172, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1306, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1186, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -55, 0, -238, -48, -1141, 48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -410, 114,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -435, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -206, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -212, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -77, 27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -272, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -103, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, 14, -84, 18, -473, -38,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimCliffClimbQuick2_joint7[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -960, 45,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -601, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -431, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -614, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -657, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -794, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -772, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -505, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 98,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimCliffClimbQuick2_joint8[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -145, 8, -63, 5, -98, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 0, 5, 0, 2, 0, 3,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4,
	ftAnimBlock(0, 20),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTDonkeyAnimCliffClimbQuick2_joint9[20] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 393, 144, 74,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 174, -67, -44,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4,
	ftAnimBlock(0, 20),
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 174, -67, -44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimCliffClimbQuick2_joint11[20] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -724, -183, 91,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), -398, 70, 29,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4,
	ftAnimBlock(0, 20),
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -398, 70, 29,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTDonkeyAnimCliffClimbQuick2_joint12[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1337, 483, 567, 86, -1384, 343,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -388, 275, -745, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 654, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 519, -143,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 280, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -304, 48, -837, -145,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -348, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1233, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 321, 22, -1456, -76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1325, 59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 609, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -264, 72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 52, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1267, 58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -407, 22,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 622, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 404, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 48, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -90, -41,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 288, -98, -407, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 206, -58, -447, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -115, -24, 172, -34, -479, -31,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTDonkeyAnimCliffClimbQuick2_joint13[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1086, 36,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -768, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -620, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -728, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -759, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -742, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -734, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -504, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 88,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimCliffClimbQuick2_joint14[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1201, 14, 397, -18, 201, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 1229, -43, 0, -15, 0, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 103, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTDonkeyAnimCliffClimbQuick2_joint15[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	_FT_ANIM_CMD(11, 0, 1), 10,
	ftAnimBlock(0, 25),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTDonkeyAnimCliffClimbQuick2_joint17[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -404, -61,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -957, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -1075, 27,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -404,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTDonkeyAnimCliffClimbQuick2_joint18[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 367, 5, -371, 3, 2340, 153,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 315, 20, -429, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 2866, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2846, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 2733, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 336, 19, -405, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 74, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), -323, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -342, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -358, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 25, -41, 2797, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -9, -24, 2846, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, -13, -359, -1, 2866, 20,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTDonkeyAnimCliffClimbQuick2_joint20[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 973, -107,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 530, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 565, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 1124, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1065, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1039, -25,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTDonkeyAnimCliffClimbQuick2_joint22[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -351, -178, 10, 0, -20, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -422, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 23, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -700, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -665, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -167, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -105, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -117, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -413, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -383, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -128, -10, 24, 1, -377, 6,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTDonkeyAnimCliffClimbQuick2_joint23[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -586, -6, 282, 103, 2379, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -277, 7, 544, -29, 2942, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -273, 2, 512, -34, 2944, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 2849, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 11), 37, 45, 266, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 78, 34, 269, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 132, 6, 241, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2901, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2941, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 136, 3, 238, -3, 2958, 16,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTDonkeyAnimCliffClimbQuick2_joint25[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1151, -67,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 864, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 889, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 1029, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 974, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 951, -23,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTDonkeyAnimCliffClimbQuick2_joint26[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1928, 65, 1688, -26, -1428, -73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 1780, -71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 1502, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1943, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1963, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -1999, 11,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1710, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 1591, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1594, 2, 1503, 0, -1992, 7,
	ftAnimEnd(),
};
