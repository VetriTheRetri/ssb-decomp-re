/* AnimJoint data for relocData file 512 (FTMarioAnimJumpAerialB) */
/* 2192 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimJumpAerialB_joint1[6];
extern u16 dFTMarioAnimJumpAerialB_joint2[34];
extern u16 dFTMarioAnimJumpAerialB_joint4[38];
extern u16 dFTMarioAnimJumpAerialB_joint5[158];
extern u16 dFTMarioAnimJumpAerialB_joint6[66];
extern u16 dFTMarioAnimJumpAerialB_joint7[10];
extern u16 dFTMarioAnimJumpAerialB_joint10[28];
extern u16 dFTMarioAnimJumpAerialB_joint11[142];
extern u16 dFTMarioAnimJumpAerialB_joint12[50];
extern u16 dFTMarioAnimJumpAerialB_joint13[22];
extern u16 dFTMarioAnimJumpAerialB_joint15[10];
extern u16 dFTMarioAnimJumpAerialB_joint16[88];
extern u16 dFTMarioAnimJumpAerialB_joint18[52];
extern u16 dFTMarioAnimJumpAerialB_joint20[68];
extern u16 dFTMarioAnimJumpAerialB_joint21[124];
extern u16 dFTMarioAnimJumpAerialB_joint23[152];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimJumpAerialB_joints[] = {
	(u32)dFTMarioAnimJumpAerialB_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimJumpAerialB_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimJumpAerialB_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimJumpAerialB_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimJumpAerialB_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimJumpAerialB_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimJumpAerialB_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimJumpAerialB_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimJumpAerialB_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimJumpAerialB_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimJumpAerialB_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimJumpAerialB_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimJumpAerialB_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimJumpAerialB_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimJumpAerialB_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimJumpAerialB_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	0xFFFF01F4, /* [23] END */
};

/* Joint 1 */
u16 dFTMarioAnimJumpAerialB_joint1[6] = {
	ftAnimSetValBlock(FT_ANIM_ROTX), 19301,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 90), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimJumpAerialB_joint2[34] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValRate(FT_ANIM_TRAY), 0, 150,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 120, 1, -240, -217,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 50), 120, 0, -240, -1,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), -146, 321,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 0, -2, 0, 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTMarioAnimJumpAerialB_joint4[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 0, 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -268, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 402, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 65), 402, 0, 0, 0, 0, -1, 0, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 89, 0, -14, -92,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimJumpAerialB_joint5[158] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -56, 2, -1246, 1, 376, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1203, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 13), -285, -112, 388, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -404, -92, 520, 97,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 752, 144,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -782, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1165, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1426, -39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 873, 89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1006, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1454, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -1537, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -786, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 59), -787, 3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1009, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 55), 987, -5,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1534, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 42), -1472, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -782, 9, -1455, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1353, 180,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -300, 506,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 979, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 512, -505,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1054, 222,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -988, 38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 360, 413, -146, -410,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 526, 91, -308, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 543, -105, -317, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 314, -82, -908, 34, -75, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 378, 64, -918, -9, -140, -64,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimJumpAerialB_joint6[66] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 13), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -220, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -160, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 38), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -448, -287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -574, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -330, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTMarioAnimJumpAerialB_joint7[10] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -1608,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 90), -625,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTMarioAnimJumpAerialB_joint10[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -368,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -378, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 268, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 52), 268, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -44, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 127,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimJumpAerialB_joint11[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1533, 0, 362, 1, -1237, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), -1224, 123, -1089, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 13), 416, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 391, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 120, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1101, 115, -956, 122,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -627, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -745, 3,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 119, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 56), 122, 5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -623, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 53), -651, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -742, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 51), -778, -6,
	ftAnimBlock(0, 50),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 128, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 247, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -787, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -927, -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -659, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1043, -484,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 523, 219,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 626, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1221, -487,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1902, -442, -1721, -439,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2106, -113, -1922, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2128, 119, -1936, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1868, 86, 701, 32, -1662, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1955, -86, 690, -11, -1749, -87,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimJumpAerialB_joint12[50] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 40), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 16), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -397, -273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -547, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -327, 245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimJumpAerialB_joint13[22] = {
	ftAnimSetVal(FT_ANIM_ROTX), 1608,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 7), 1653,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 5), 1474,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 12), 901,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 56), 893,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 10), 625,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTMarioAnimJumpAerialB_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 90),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimJumpAerialB_joint16[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -8, 0, -20, -1, 214, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 46), 55, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 85), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 141, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 116, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -104, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -216, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -864, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -864, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 60), -852, 0,
	ftAnimBlock(0, 27),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 55, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 42), 0, 0,
	ftAnimBlock(0, 32),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -852, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -251, 122,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -6, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 0, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -124, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 3, 2, -105, 18,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimJumpAerialB_joint18[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 357, 249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 499, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 762, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 762, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 59), 768, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 768, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 195, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimJumpAerialB_joint20[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -90, -6, 49, 0, 328, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 31), 440, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 79), 84, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -178, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -178, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 63), -175, 2,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 440, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 48), 423, 6,
	ftAnimBlock(0, 47),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -173, 11, 81, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -147, 1, -4, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 431, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 548, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -146, 1, -6, -1, 551, 2,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimJumpAerialB_joint21[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1617, -142, 1588, 0, 1822, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1693, -123,
	ftAnimSetValRateT(FT_ANIM_ROTY, 41), 1648, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1486, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1495, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 45), 1516, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1500, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 897, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 838, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 755, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 755, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 52), 775, 2,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1648, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 33), 1647, 4,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1516, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 26), 1517, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1508, -14, 1655, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 1589, 55, 1566, -76,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 775, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1165, 103,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1628, 20, 1494, -54,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 1608, 18, 1413, -9,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1269, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1631, 22, 1403, -9, 1374, 104,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimJumpAerialB_joint23[152] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 7, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 54, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 362, 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 501, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 731, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 731, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 60), 737, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 738, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1051, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1064, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 990, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 932, -58,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0050, 0x004F, 0xFFEC, 0x0000, 0x0146, 0x0001, 0x2809, 0x001B, 0x01D1, 0x0000, 0x2805, 0x004A, 0xFFF2, 0x0000, 0x2003, 0x0009, 0x00A5, 0xFFFF, 0x2003, 0x0001, 0x00A4, 0x0000, 0x2803, 0x0040, 0x00A5, 0x0000, 0x0801, 0x0011, 0x2009, 0x0001, 0x01D2, 0x0000, 0x2009, 0x002B, 0x0211, 0x0005, 0x2009, 0x0001, 0x0215, 0x0003, 0x2809, 0x000B, 0x00BF, 0xFF92, 0x0801, 0x0002, 0x2007, 0x0001, 0x00A6, 0x0007, 0xFFF1, 0xFFFF, 0x2805, 0x000E, 0xFF56, 0x0000, 0x2003, 0x0005, 0x00C4, 0xFFAC, 0x2003, 0x0001, 0x0051, 0xFFA1, 0x2803, 0x0007, 0x0074, 0x0012, 0x0801, 0x0002, 0x2009, 0x0001, 0x0052, 0xFF9C, 0x2809, 0x0005, 0xFF50, 0xFFF4, 0x0801, 0x0004, 0x2003, 0x0001, 0x0085, 0x0010, 0x200F, 0x0001, 0x0094, 0x000F, 0xFF56, 0x0000, 0xFF49, 0xFFFA, 0x0000, 0x0000, 0x0000,
};
