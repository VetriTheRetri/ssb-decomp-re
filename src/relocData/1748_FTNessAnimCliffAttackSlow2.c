/* AnimJoint data for relocData file 1748 (FTNessAnimCliffAttackSlow2) */
/* 2880 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimCliffAttackSlow2_joint1[26];
extern u16 dFTNessAnimCliffAttackSlow2_joint2[38];
extern u16 dFTNessAnimCliffAttackSlow2_joint3[34];
extern u16 dFTNessAnimCliffAttackSlow2_joint5[54];
extern u16 dFTNessAnimCliffAttackSlow2_joint6[116];
extern u16 dFTNessAnimCliffAttackSlow2_joint7[38];
extern u16 dFTNessAnimCliffAttackSlow2_joint8[18];
extern u16 dFTNessAnimCliffAttackSlow2_joint9[46];
extern u16 dFTNessAnimCliffAttackSlow2_joint11[50];
extern u16 dFTNessAnimCliffAttackSlow2_joint12[144];
extern u16 dFTNessAnimCliffAttackSlow2_joint13[46];
extern u16 dFTNessAnimCliffAttackSlow2_joint14[76];
extern u16 dFTNessAnimCliffAttackSlow2_joint16[10];
extern u16 dFTNessAnimCliffAttackSlow2_joint17[104];
extern u16 dFTNessAnimCliffAttackSlow2_joint19[40];
extern u16 dFTNessAnimCliffAttackSlow2_joint20[92];
extern u16 dFTNessAnimCliffAttackSlow2_joint22[68];
extern u16 dFTNessAnimCliffAttackSlow2_joint23[130];
extern u16 dFTNessAnimCliffAttackSlow2_joint25[70];
extern u16 dFTNessAnimCliffAttackSlow2_joint26[118];
extern u16 dFTNessAnimCliffAttackSlow2_joint27[68];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTNessAnimCliffAttackSlow2_joints[] = {
	(AObjEvent32 *)dFTNessAnimCliffAttackSlow2_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimCliffAttackSlow2_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimCliffAttackSlow2_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTNessAnimCliffAttackSlow2_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTNessAnimCliffAttackSlow2_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimCliffAttackSlow2_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNessAnimCliffAttackSlow2_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNessAnimCliffAttackSlow2_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTNessAnimCliffAttackSlow2_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTNessAnimCliffAttackSlow2_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimCliffAttackSlow2_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimCliffAttackSlow2_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTNessAnimCliffAttackSlow2_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTNessAnimCliffAttackSlow2_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTNessAnimCliffAttackSlow2_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTNessAnimCliffAttackSlow2_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTNessAnimCliffAttackSlow2_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTNessAnimCliffAttackSlow2_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTNessAnimCliffAttackSlow2_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTNessAnimCliffAttackSlow2_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTNessAnimCliffAttackSlow2_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTNessAnimCliffAttackSlow2_joint1[26] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1, 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), 463, 1920,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 28), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 960, -29,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 26), 360, 3,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimCliffAttackSlow2_joint2[38] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), -536, 17, 0, 0, 0, 0, -300, -156,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 30), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -594, -4, -234, 223, 0, -7,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 28), -16, 99, 537, 129,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 28), -28,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTNessAnimCliffAttackSlow2_joint3[34] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY), 0, 1, 0, 101, 0, -2, 600, -120,
	ftAnimSetValRateT(FT_ANIM_TRAY, 30), 0, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 22, 0, 1417, -12, -28, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 28, -2, -360, -2, 8, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimCliffAttackSlow2_joint5[54] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 14), 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 10,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 759, 32, 0, 6, 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 676, -2, 90, 11, 38, 5,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 26), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 714, -18, 203, 4, 86, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 0, -65, 0, -29, 0, -22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTNessAnimCliffAttackSlow2_joint6[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, -66, -653, 226, -313, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -89, 279, -427, 154, -216, -327,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 534, 308, -344, 194, -969, -443,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 365, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -37, 208, -1103, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 73, 65, -1119, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 39, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -404, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 273, -63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 294, -16,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 25, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -207, -62,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 274, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 144, -44,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -336, 75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 28, 171,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 89, -66, -269, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -333, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -83, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -288, -163, 274, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -410, -121, -261, 72, 415, 140,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimCliffAttackSlow2_joint7[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -640, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -640, 315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 320,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -274, -236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, -198,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimCliffAttackSlow2_joint8[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -804,
	ftAnimSetValRateT(FT_ANIM_ROTX, 70), 0, 8,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 40,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTNessAnimCliffAttackSlow2_joint9[46] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAY), 288,
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 0, 0, 288, 2, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 10,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -1, 0, -4, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 30), -10, 0, -32, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -57, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ, 26), 364, 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 26), 300,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimCliffAttackSlow2_joint11[50] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 54, -6, -17, 2,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 40), 0, 0, 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 10,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -368, -40, 309, 0, -239, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -733, 0, -357, -28, 912, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -354, 28, -198, 13, 19, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 4, 0, 10, 0, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTNessAnimCliffAttackSlow2_joint12[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1753, -85, 1749, -1131, -2298, 279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1667, -332, 618, -625, -2018, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1088, -123, 499, -204, -2631, -337,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2631, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1419, 330, 209, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1749, 213, 142, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1951, 104,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 157, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2638, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -2531, 36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2055, 102,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 2611, 25,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 159, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 271, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2644, 173, 337, 128, -2489, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2958, 681, 528, -52, -2217, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4008, 530, 231, -128, -2345, -61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 371, 117,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2519, -300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4020, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3960, -84,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3622, -334,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 505, 123,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 654, -24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3182, -410, -2942, -408,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2801, -381, 569, -84, -3336, -393,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimCliffAttackSlow2_joint13[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -478, -273,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -752, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 376,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 17), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -655, -254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -849, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -772, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 213,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTNessAnimCliffAttackSlow2_joint14[76] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 608, 135,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 1438, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 625, -119, 0, 6, 0, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -831, -74, 114, 26, 696, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -715, 7, 473, 144, 998, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -810, 752, 549, -315, 934, -668,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 789, 429, -158, -137, -338, -233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 908, -116, 0, 35, 0, 77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 90, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 54, 126,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTNessAnimCliffAttackSlow2_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTNessAnimCliffAttackSlow2_joint17[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -128, 150, -514, -29, 85, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 324, 308, -623, -34, -363, -277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 638, 157, -612, 213, -643, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 639, -199, -196, 76, -773, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 239, -246, -458, -129, -411, 218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 48, -97, -437, 26, -254, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -46, -88, -401, 45, -181, 64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -475, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -459, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), -1, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -33, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -292, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -472, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -350, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -466, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -317, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -365, -14, -279, 12, -297, 19,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimCliffAttackSlow2_joint19[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 889, 44,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 934, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 528, -467,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 816, 549,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1073, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1052, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 423, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, -27,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTNessAnimCliffAttackSlow2_joint20[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -418, 101, -107, -21, 20, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -115, -129,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -316, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -74, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 76, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -41, -62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 77, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -259, -133,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -286, 45,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -29, -54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 267, 55,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 12, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 314, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 5, -6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -241, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 19, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, 0, 12, 0, 26, 6,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimCliffAttackSlow2_joint22[68] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 468, -66, -241, -48, 236, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -29, -65, -322, -11, 656, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 138, 61, -297, 34, 475, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 399, -7, -79, 43, 127, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 65, -59, 135, 10, -325, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -194, -28, 23, -6, -203, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -222, -1, 71, 0, 61, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -208, 10, 24, -4, 56, -4,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTNessAnimCliffAttackSlow2_joint23[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1581, -81, 1560, -80, -1487, -209,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1263, -421,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2025, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1663, -236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2053, -281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2226, 17, 637, -338,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2018, 124, 586, -30, -1843, 103,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1948, 5, -1824, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 576, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 735, -8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1944, 3, -1830, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -2158, -134, -2085, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2323, -221, -2251, -221,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2873, -228, -2798, -226,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 717, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 230, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3058, -258, -2981, -263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -3544, -77, -3512, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3544, 14, -3541, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -3369, 28, -3460, 30,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 191, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 160, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3344, 25, 136, -23, -3427, 32,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimCliffAttackSlow2_joint25[70] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 442,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 449, 445,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 897, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -448,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 0, 7372, 6144, 6144,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 16), 4096, 4096, 4096,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 489, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 538, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 461, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, -54,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimCliffAttackSlow2_joint26[118] = {
	ftAnimSetValAfter(FT_ANIM_SCAX | FT_ANIM_SCAY), 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 107, -188, 211, 169, 525, -259,
	ftAnimSetValBlock(FT_ANIM_SCAZ), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -88, 81,
	ftAnimSetValT(FT_ANIM_SCAZ, 3), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 228, -238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 266, -290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -54, -67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 373, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 81, 96,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), -65, -193,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 23, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAZ, 1), 4915,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -167, -2,
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 10), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 448, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 252, -39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 27, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -93, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -169, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 23, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 213, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -195, -7,
	ftAnimBlock(0, 2),
	ftAnimSetValT(FT_ANIM_SCAZ, 16), 4096,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -118, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 79, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 76, -3, 25, 2, -202, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTNessAnimCliffAttackSlow2_joint27[68] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 183, -11, 23, 7, -47, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 61, -28, 131, 25, -712, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 41, -18, 149, -2, -834, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -71, 14, 116, -9, -828, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 188, 16, 52, -6, -721, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 91, -8, 50, -2, -567, 48,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 20), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 56, -1, 0, 28,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
