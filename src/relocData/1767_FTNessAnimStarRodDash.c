/* AnimJoint data for relocData file 1767 (FTNessAnimStarRodDash) */
/* 2832 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimStarRodDash_joint1[12];
extern u16 dFTNessAnimStarRodDash_joint2[62];
extern u16 dFTNessAnimStarRodDash_joint3[38];
extern u16 dFTNessAnimStarRodDash_joint5[66];
extern u16 dFTNessAnimStarRodDash_joint6[132];
extern u16 dFTNessAnimStarRodDash_joint7[48];
extern u16 dFTNessAnimStarRodDash_joint8[10];
extern u16 dFTNessAnimStarRodDash_joint9[64];
extern u16 dFTNessAnimStarRodDash_joint11[38];
extern u16 dFTNessAnimStarRodDash_joint12[126];
extern u16 dFTNessAnimStarRodDash_joint13[48];
extern u16 dFTNessAnimStarRodDash_joint14[76];
extern u16 dFTNessAnimStarRodDash_joint16[18];
extern u16 dFTNessAnimStarRodDash_joint17[140];
extern u16 dFTNessAnimStarRodDash_joint19[80];
extern u16 dFTNessAnimStarRodDash_joint20[62];
extern u16 dFTNessAnimStarRodDash_joint22[24];
extern u16 dFTNessAnimStarRodDash_joint23[132];
extern u16 dFTNessAnimStarRodDash_joint25[86];
extern u16 dFTNessAnimStarRodDash_joint26[58];
extern u16 dFTNessAnimStarRodDash_joint27[42];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTNessAnimStarRodDash_joints[] = {
	(AObjEvent32 *)dFTNessAnimStarRodDash_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimStarRodDash_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimStarRodDash_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTNessAnimStarRodDash_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTNessAnimStarRodDash_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimStarRodDash_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNessAnimStarRodDash_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNessAnimStarRodDash_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTNessAnimStarRodDash_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTNessAnimStarRodDash_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimStarRodDash_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimStarRodDash_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTNessAnimStarRodDash_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTNessAnimStarRodDash_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTNessAnimStarRodDash_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTNessAnimStarRodDash_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTNessAnimStarRodDash_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTNessAnimStarRodDash_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTNessAnimStarRodDash_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTNessAnimStarRodDash_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTNessAnimStarRodDash_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTNessAnimStarRodDash_joint1[12] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAZ), 0, 2116,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 38), 3600, 714,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), 3600,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimStarRodDash_joint2[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 755, -195, -67, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 283, -385,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 37), -34, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 0, 5, 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 418,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 283, -41,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 23), 283, 48,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 445, 281,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 182, -95,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 12, 0, 28,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 540, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 223, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTNessAnimStarRodDash_joint3[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -124, 0, -113, 0, 41, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 3, 0, 3, 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 0, -2, 0, -10, 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -72, 4, -344, -51, -48, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 28, -360, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimStarRodDash_joint5[66] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 407, 36, 234, 10, 78, 7,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 108,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 108,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 714, 9, 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 29), 714, -2, 0, 1, 0, 0, 0, 1, 0, 0, 0, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX, 4), 644, -102, 4, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 38, -8, 0, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTNessAnimStarRodDash_joint6[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -613, -93, -261, 219, 223, -87,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 180, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -706, 143, 135, -487,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -326, 152, -752, -675,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -400, -15, 95, -26, -1216, -243,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 150, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -358, 19, -1239, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -393, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 29), -1239, 17,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 157, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 138, -12,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -393, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -358, -2,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 127, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -71, -238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -366, 56, -1217, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -942, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -244, 316,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 266, 306, -399, -251,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -576, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 367, -286, -764, 478,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -306, -421, 13, 548,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -475, -51, -340, 157, 331, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -410, 64, -261, 78, 415, 84,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimStarRodDash_joint7[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -247, -686,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -973, 462,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 482,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -193, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -452, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, -21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTNessAnimStarRodDash_joint8[10] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -804,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 40), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTNessAnimStarRodDash_joint9[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 188, -1, -68, 7, -36, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 78, -153, 49, 17, -95, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -424, -68, 0, -14, 0, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -265, -3, -20, -3, 1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -442, -5, -19, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), -424, 31, 0, 0, 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 441, 59, -23, 52, 68, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -10, 0, 364, -3, -32, 4,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimStarRodDash_joint11[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -190, 5, -42, 0, 97, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 5, 0, 1, 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 0, -6, 0, 4, 0, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 145, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -221, -87,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTNessAnimStarRodDash_joint12[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 212, -142, 405, -55, -557, -75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 141, -260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 70, -289, -633, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -366, -277, -1026, -308,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -538, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1323, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -170, -187,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -257, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -530, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), -574, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -270, -7, -1342, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), -230, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), -1313, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -587, 40, -1288, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -494, 84, -215, 125, -1212, 230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -417, 221, 19, 153, -827, 457,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -51, 444, 90, 71, -297, 217,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 370, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 471, 7, -392, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -128, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -36, -307,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -143, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -118, 24, 470, 100, -11, 117,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimStarRodDash_joint13[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -489, -144,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -633, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -394, 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -674, 248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 337,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -372, -279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, -185,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTNessAnimStarRodDash_joint14[76] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 522, 15, 0,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 322, -17, 0, -21, 649, 82,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 143, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 29), 143, 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 380, 0, -157, -7, 657, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 319, -4, -218, 7, 617, -8,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 195, -56, 44, 83, 429, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 93, -26, 114, 2, 78, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 90, -7, 54, -8, 126, 21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTNessAnimStarRodDash_joint16[18] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, -804, 0,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 48), 893, -935, 681,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 8,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 75, 68, 30,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTNessAnimStarRodDash_joint17[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1576, 72, -1488, -56, -1996, -73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1605, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1534, -38, -1999, 322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1580, 44, -1425, 598,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1446, 74, -1715, -51, -802, 337,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1624, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1430, 16, -751, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -488, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), -1432, -13,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1625, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -1626, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -486, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -502, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -510, -42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -756, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1657, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1715, 20,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1446, -59, -802, -119,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1594, 42, -1391, -550,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1667, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1488, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1467, 44, -1541, -21, -2097, -434,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1883, -133, -1995, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1531, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1323, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1306, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1974, -91, -1328, -21, -1906, 88,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimStarRodDash_joint19[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 112, 381,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 866, 291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1077, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 539, -306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 463, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 140, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 383, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 465, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 809, 322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1185, 249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1308, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1063, -254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 538, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, -141,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTNessAnimStarRodDash_joint20[62] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -1538, -68, -1582, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 1596,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 39), 1596, -1582,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1741, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1658, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -1652, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1651, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), -1589, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1580, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1466, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1626, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1494, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1548, -54,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1602, -54, 1596, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -1582,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTNessAnimStarRodDash_joint22[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -66,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 916, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 28), 931, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -237, -142,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -66,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTNessAnimStarRodDash_joint23[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -40, 35, 175, -23, 752, 68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 11, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 181, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 809, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 822, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1120, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 9, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -24, 2,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1117, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1111, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 192, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 353, 13,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -19, 24, 1104, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 188, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 902, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 367, -37, 865, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 278, -200, 304, 54, 638, -449,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 203, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -33, -172, -33, -599,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 38, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -559, -213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 194, -42, -460, 119,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 125, 9, -238, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -73, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -119, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -127, -7, 136, 10, -210, 27,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimStarRodDash_joint25[86] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 284, -18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 404, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 505, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 440, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 129, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 366, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 454, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 539, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 860, 346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1233, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1084, -277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 678, -323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 436, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 392, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, 14,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimStarRodDash_joint26[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 49, -29, 126, 0, -150, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 36), 14, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), 29, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 32), -75, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -62, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -61, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 106, 72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 99, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -178, -53,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 86, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 76, -10, 25, -3, -202, -23,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTNessAnimStarRodDash_joint27[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 907, 75, 15,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 916, 0, 72, -2, 14, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), 884, -39, 5, -2, 1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -362, -118, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 56, 0, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
