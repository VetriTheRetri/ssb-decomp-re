/* AnimJoint data for relocData file 1750 (FTNessAnimCliffEscapeQuick2) */
/* 2480 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimCliffEscapeQuick2_joint1[44];
extern u16 dFTNessAnimCliffEscapeQuick2_joint2[118];
extern u16 dFTNessAnimCliffEscapeQuick2_joint3[130];
extern u16 dFTNessAnimCliffEscapeQuick2_joint5[54];
extern u16 dFTNessAnimCliffEscapeQuick2_joint6[118];
extern u16 dFTNessAnimCliffEscapeQuick2_joint7[38];
extern u16 dFTNessAnimCliffEscapeQuick2_joint8[22];
extern u16 dFTNessAnimCliffEscapeQuick2_joint9[44];
extern u16 dFTNessAnimCliffEscapeQuick2_joint11[42];
extern u16 dFTNessAnimCliffEscapeQuick2_joint12[102];
extern u16 dFTNessAnimCliffEscapeQuick2_joint13[30];
extern u16 dFTNessAnimCliffEscapeQuick2_joint14[24];
extern u16 dFTNessAnimCliffEscapeQuick2_joint16[34];
extern u16 dFTNessAnimCliffEscapeQuick2_joint17[72];
extern u16 dFTNessAnimCliffEscapeQuick2_joint19[34];
extern u16 dFTNessAnimCliffEscapeQuick2_joint20[54];
extern u16 dFTNessAnimCliffEscapeQuick2_joint22[48];
extern u16 dFTNessAnimCliffEscapeQuick2_joint23[58];
extern u16 dFTNessAnimCliffEscapeQuick2_joint25[34];
extern u16 dFTNessAnimCliffEscapeQuick2_joint26[86];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTNessAnimCliffEscapeQuick2_joints[] = {
	(u32)dFTNessAnimCliffEscapeQuick2_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimCliffEscapeQuick2_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimCliffEscapeQuick2_joint3, /* [2] joint 3 */
	(u32)dFTNessAnimCliffEscapeQuick2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTNessAnimCliffEscapeQuick2_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimCliffEscapeQuick2_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimCliffEscapeQuick2_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimCliffEscapeQuick2_joint9, /* [8] joint 9 */
	(u32)dFTNessAnimCliffEscapeQuick2_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTNessAnimCliffEscapeQuick2_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimCliffEscapeQuick2_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimCliffEscapeQuick2_joint14, /* [13] joint 14 */
	(u32)dFTNessAnimCliffEscapeQuick2_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTNessAnimCliffEscapeQuick2_joint17, /* [16] joint 17 */
	(u32)dFTNessAnimCliffEscapeQuick2_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTNessAnimCliffEscapeQuick2_joint20, /* [19] joint 20 */
	(u32)dFTNessAnimCliffEscapeQuick2_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTNessAnimCliffEscapeQuick2_joint23, /* [22] joint 23 */
	(u32)dFTNessAnimCliffEscapeQuick2_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTNessAnimCliffEscapeQuick2_joint26, /* [25] joint 26 */
	0xFFFF0258, /* [26] END */
};

/* Joint 1 */
u16 dFTNessAnimCliffEscapeQuick2_joint1[44] = {
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 1010,
	ftAnimSetValBlock(FT_ANIM_TRAY), 0,
	ftAnimSetValT(FT_ANIM_TRAY, 34), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 113, 996,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), 498, 1024,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 753, 977,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), 1109, 1488,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), 3172, 1589,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 3294, 477,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 3351, 174,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 12), 3600, 116,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimCliffEscapeQuick2_joint2[118] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX, 39), -16, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX, 1), 5,
	ftAnimSetValRateBlock(FT_ANIM_TRAZ), 257, 468,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), 282, -75,
	_FT_ANIM_CMD(11, FT_ANIM_TRAZ, 1), 1,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY), 439, 409, 0, 0, 313, -811,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 34), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 34), 6433, 13,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 98, -659,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -659,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -75,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 33), -28, -75,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 148, 590,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 590,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 309, 9,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 9,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 192, 77,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 77,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 382, 730,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 730,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 477, 70,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 70,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 7), 442, -136,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -136,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 423, -848,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -848,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 230, -790,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -790,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 226, 375,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 375,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 427, 686,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 686,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 510, 100,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 100,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 9), 538, 39,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTNessAnimCliffEscapeQuick2_joint3[130] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 33, 0,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, 33, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5,
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 220, -475, -861, 22,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 25, -439, -643, 1331,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 0, -53, 157, -29, 1087,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 123, 769, 36, -15,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 331, 660, -36, -1070,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 454, 50, -498, -1459,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 349, 46, -584, -568,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 465, -567, -640, -128,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 0, 66, -472, -648, 668,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 52, -28, -55, 864,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -2, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -37, 0, 0, 0, 44, -30, 0, 31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -6, -8,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 2, 0, -28, 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 28, 2, -360, 0, 8, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimCliffEscapeQuick2_joint5[54] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 42), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 20,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5,
	ftAnimSetValBlock(FT_ANIM_ROTX), 759,
	ftAnimSetValT(FT_ANIM_ROTX, 22), 759,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 2,
	ftAnimBlock(0, 20),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 710, -54,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 22, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 12), 0, -14, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimCliffEscapeQuick2_joint6[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2102, -43, -85, -33, 1562, 73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2532, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -234, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1960, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2100, 100,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2177, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2544, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -2502, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -223, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -162, -41,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2169, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 2131, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2515, -33, -208, -120, 2153, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2569, -267, -403, -227, 2238, 310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3050, -546, -663, -67, 2774, 604,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -360, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3662, -344, 3448, 414,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3740, -29, 3604, 105,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -3675, 46, 3662, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -267, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -247, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3627, 48, -261, -13, 3632, -29,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimCliffEscapeQuick2_joint7[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -260, -361,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -722, -314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -629, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, 155,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimCliffEscapeQuick2_joint8[22] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -498, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 39), 0, 8, 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimBlock(0, 34),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTNessAnimCliffEscapeQuick2_joint9[44] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 54), 300,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 20,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 54), 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 20,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -1, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, 9, 0, -1,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5,
	ftAnimSetValBlock(FT_ANIM_ROTX), 318,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 20), 347,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -10, 0, 364, -3, -32, 4,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimCliffEscapeQuick2_joint11[42] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -18, 8, -17,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 0, 0, 54, 0, -17, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimCliffEscapeQuick2_joint12[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 404, 57, 1391, -13, 3125, 88,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 3728, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1438, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 740, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 865, 90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 943, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3744, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), 3869, 48,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 935, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 845, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1433, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 1300, -24,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3924, 64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 4260, 183,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 880, 60, 1276, -93,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1049, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1158, 56,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4457, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1037, -5, 4613, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1192, 33, 1038, 1, 4706, 92,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimCliffEscapeQuick2_joint13[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 29), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -321, -237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -475, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -534, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, -23,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTNessAnimCliffEscapeQuick2_joint14[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1206, -9, -45, 1, 37, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 1206, -32, -45, 2, 37, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 90, -17, 54, 1, 126, -1,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimCliffEscapeQuick2_joint16[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 900, -935, 679, 74, 69, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 900, 0, -935, 0, 679, 0, 74, 0, 69, 0, 30, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 5,
	ftAnimBlock(0, 10),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 893, -935, 681, 75, 68, 30,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTNessAnimCliffEscapeQuick2_joint17[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 407, -1, -78, 0, -49, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 20), 154, -34, -73, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -44, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -33, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 113, -49, -87, -20, 32, 110,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -172, -66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -271, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 187, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 20, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -58, -79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -310, 12,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -242, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -310, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -365, -55, -279, -8, -297, 12,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimCliffEscapeQuick2_joint19[34] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 21), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 218, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 328, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 457, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 414, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, -18,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTNessAnimCliffEscapeQuick2_joint20[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2193, 19, 1897, -4, 2300, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 30), 1672, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 33), 1600, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), -1716, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1710, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1820, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1795, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1600, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1662, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1643, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1602, -2, 1596, -4, 1634, -8,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimCliffEscapeQuick2_joint22[48] = {
	ftAnimSetValAfter(FT_ANIM_TRAY), -82,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -57, 62, 89,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 126, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -57, 0, 62, 0, 89, -1,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 10), 126, -11,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 24), 126, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -61, 20, 36, -2, 52, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 248, 0, 20, -2, 29, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -66, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTNessAnimCliffEscapeQuick2_joint23[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 20, 0, 14, 0, -32, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 0, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), -105, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -25, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -18, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 138, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 12, 13, 107, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 132, 5, -210, -2,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -116, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -123, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -127, -3, 136, 4, -210, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimCliffEscapeQuick2_joint25[34] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 20), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 301, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 364, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 454, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 422, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, -15,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimCliffEscapeQuick2_joint26[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1749, -17, -1842, 2, 2025, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), 1671, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 33), -1636, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 1458, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1450, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1410, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1680, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1691, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1684, -6, -1633, 2, 1406, -4,
	ftAnimEnd(),
	0x380E, 0xFFB7, 0x0019, 0xFFEF, 0x200F, 0x000A, 0xFFB7, 0x0001, 0x0019, 0x0000, 0xFFEF, 0x0000, 0x200F, 0x000A, 0xFFED, 0x0014, 0x000F, 0xFFFE, 0xFFF7, 0x0002, 0x200F, 0x0005, 0x00E5, 0x0005, 0xFFFC, 0xFFFF, 0x0016, 0x0000, 0x380F, 0x0009, 0x0038, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
