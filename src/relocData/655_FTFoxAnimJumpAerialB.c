/* AnimJoint data for relocData file 655 (FTFoxAnimJumpAerialB) */
/* 2048 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimJumpAerialB_joint1[8];
extern u16 dFTFoxAnimJumpAerialB_joint2[26];
extern u16 dFTFoxAnimJumpAerialB_joint4[28];
extern u16 dFTFoxAnimJumpAerialB_joint5[142];
extern u16 dFTFoxAnimJumpAerialB_joint7[54];
extern u16 dFTFoxAnimJumpAerialB_joint8[30];
extern u16 dFTFoxAnimJumpAerialB_joint10[8];
extern u16 dFTFoxAnimJumpAerialB_joint11[156];
extern u16 dFTFoxAnimJumpAerialB_joint12[56];
extern u16 dFTFoxAnimJumpAerialB_joint13[34];
extern u16 dFTFoxAnimJumpAerialB_joint15[10];
extern u16 dFTFoxAnimJumpAerialB_joint16[90];
extern u16 dFTFoxAnimJumpAerialB_joint18[46];
extern u16 dFTFoxAnimJumpAerialB_joint20[66];
extern u16 dFTFoxAnimJumpAerialB_joint21[72];
extern u16 dFTFoxAnimJumpAerialB_joint23[40];
extern u16 dFTFoxAnimJumpAerialB_joint24[68];
extern u16 dFTFoxAnimJumpAerialB_joint25[18];
extern u16 dFTFoxAnimJumpAerialB_joint26[20];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimJumpAerialB_joints[] = {
	(u32)dFTFoxAnimJumpAerialB_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimJumpAerialB_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimJumpAerialB_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimJumpAerialB_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimJumpAerialB_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTFoxAnimJumpAerialB_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimJumpAerialB_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimJumpAerialB_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimJumpAerialB_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimJumpAerialB_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimJumpAerialB_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimJumpAerialB_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimJumpAerialB_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimJumpAerialB_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimJumpAerialB_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimJumpAerialB_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimJumpAerialB_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimJumpAerialB_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimJumpAerialB_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimJumpAerialB_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 960, 0,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimJumpAerialB_joint2[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -595,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -3216, -372,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -6433, -186,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 30), -9650,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTFoxAnimJumpAerialB_joint4[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 178, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 34), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 28), 357,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 16), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), -268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimJumpAerialB_joint5[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -514, 53, -124, -129, 758, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -461, -348, -253, -438, 754, 318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1210, -181, -1001, -573, 1396, 75,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 4), -1593,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -823, 203, 906, -267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -804, 9, 861, -22,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 13), 861,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 29), -804,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1593, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), -1593, 0,
	ftAnimBlock(0, 10),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 861,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 861, 5,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -804, 0, -1593, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1031, -104,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1065, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 873, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1274, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1136, -82, 1382, 75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1219, -96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1264, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1087, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1335, 6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1162, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1152, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1301, -29, -1327, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1323, -15, -1324, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1331, -7, -1323, 0, 1151, -1,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimJumpAerialB_joint7[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1232, -77,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1187, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -822, 302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -582, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -582, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), -582, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -582, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -826, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -756, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -406, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -126, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -7,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimJumpAerialB_joint8[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 336, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 34), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 178,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 44), 178,
	ftAnimBlock(0, 28),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), 268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTFoxAnimJumpAerialB_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTFoxAnimJumpAerialB_joint11[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 480, -93, 196, 18, 367, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 105, -526,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 387, -275, 214, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -70, -552, 488, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -718, -366, 239, -231, -629, -426,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, -42, 24, -107, -747, -58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 24, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 7), -804,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -747,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 29), -747, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 24, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), 19, -8,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -804,
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), -810, 4,
	ftAnimBlock(0, 22),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -757, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -868, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 7, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 326, 199,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -804, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -642, 409,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -822, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 548, 126, -638, 450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 38, 472, 580, -108, 78, 449,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 422, 75, 219, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 332, -159,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 517, 80,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 455, -42, 140, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 338, -43, -45, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 367, 29, 517, 0, -16, 29,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTFoxAnimJumpAerialB_joint12[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -930, -145,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1140, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -839, 270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -598, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -598, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), -598, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -582, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -497, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -683, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -719, 253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -406, 356,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimJumpAerialB_joint13[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 446, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 34), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1340, -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 30), 1340, -268,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 446, -83, 446, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), -357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimJumpAerialB_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimJumpAerialB_joint16[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -52, -1, -11, -4, -169, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 37), -83, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 43), -59, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), -522,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -522, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), -522, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -522, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -595, 83,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -78, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -5, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -498, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -262, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -75, 105,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 0, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -50, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 11, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 18, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 2, -5, 0, 18, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTFoxAnimJumpAerialB_joint18[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 447, 89,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1229, 22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 1229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), 1229, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1214, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 577, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 371, -286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 5,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTFoxAnimJumpAerialB_joint20[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 93, 1, -57, 2, 332, -63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 34), 124, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 49), -64, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -268, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -268, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), -268, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 132, 13, -247, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -13, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 142, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 254, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 471, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 517, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 610, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -16, -3, -64, 0, 610, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimJumpAerialB_joint21[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1673, 0, 1574, -3, -1997, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 35), 1538, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 38), 1702, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -2131, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2131, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -2131, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2131, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2358, 31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1526, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1601, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1696, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1603, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2317, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -2104, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1600, -2, 1603, 1, -2100, 3,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimJumpAerialB_joint23[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 730, 44,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1229, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1229, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), 1229, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1221, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 673, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 648, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 631, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 626, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimJumpAerialB_joint24[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3084, -1, 45, 0, 84, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 34), 3066, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 49), 121, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -268, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -268, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), -268, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3057, -16, -251, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -105, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 3042, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3060, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 3196, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -104, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -92, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3202, 5, 124, 2, -91, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimJumpAerialB_joint25[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -896, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 489, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 43), 0, -5,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimJumpAerialB_joint26[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 312,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 758, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 48), 402, -3,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
