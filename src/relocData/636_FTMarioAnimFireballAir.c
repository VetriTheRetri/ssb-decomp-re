/* AnimJoint data for relocData file 636 (FTMarioAnimFireballAir) */
/* 2672 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimFireballAir_joint1[60];
extern u16 dFTMarioAnimFireballAir_joint2[34];
extern u16 dFTMarioAnimFireballAir_joint4[102];
extern u16 dFTMarioAnimFireballAir_joint5[136];
extern u16 dFTMarioAnimFireballAir_joint6[46];
extern u16 dFTMarioAnimFireballAir_joint7[10];
extern u16 dFTMarioAnimFireballAir_joint8[34];
extern u16 dFTMarioAnimFireballAir_joint10[52];
extern u16 dFTMarioAnimFireballAir_joint11[176];
extern u16 dFTMarioAnimFireballAir_joint12[34];
extern u16 dFTMarioAnimFireballAir_joint13[10];
extern u16 dFTMarioAnimFireballAir_joint15[10];
extern u16 dFTMarioAnimFireballAir_joint16[126];
extern u16 dFTMarioAnimFireballAir_joint18[60];
extern u16 dFTMarioAnimFireballAir_joint20[144];
extern u16 dFTMarioAnimFireballAir_joint21[134];
extern u16 dFTMarioAnimFireballAir_joint23[56];
extern u16 dFTMarioAnimFireballAir_joint24[64];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimFireballAir_joints[] = {
	(u32)dFTMarioAnimFireballAir_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimFireballAir_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimFireballAir_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimFireballAir_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimFireballAir_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimFireballAir_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimFireballAir_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimFireballAir_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimFireballAir_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimFireballAir_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimFireballAir_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimFireballAir_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimFireballAir_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimFireballAir_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimFireballAir_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimFireballAir_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimFireballAir_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTMarioAnimFireballAir_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimFireballAir_joint1[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAY), 0, 600,
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, -27,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 0, 7,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 540, -29, -180, 95,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 13), 191, 110,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 13), 540,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 14), 540,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 14), 191, -45,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 7), 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 0, -2,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 540, 29, 66, -95,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), 145,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 8), 0, 3, 0, -24,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 8), 600,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimFireballAir_joint2[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -71, -1, -790, -21, -95, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 35), -72, 1, -802, 18, -97, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTMarioAnimFireballAir_joint4[102] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 16), 0, 8,
	ftAnimSetValRateT(FT_ANIM_TRAY, 16), 1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 158, 4, -125, -4, 71, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 33, -25, -33, 94, -75, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 173, 160, 628, 99, -43, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1156, 255, 663, -83, 1023, 287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1448, 18, 210, -28, 1393, 23,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 1448, 0, 210, 0, 1393, 0, 0, 0, 0, -4, 0, -26,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -37, 5, -39,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 16), 0, -92,
	ftAnimSetValRateT(FT_ANIM_TRAY, 16), -14, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 618, -84, 329, -13, 518, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 89, -18, 0, -3, 0, -18,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimFireballAir_joint5[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1436, -2, -332, -7, -1051, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -573, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 1315, -56, -1012, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1252, 347, -978, -384,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2011, 612, -688, -18, -1781, -635,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -439, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2478, 325, -2249, -317,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 2901, 129, -2633, -145,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -409, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -238, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3041, 67, -2806, -76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 3041, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2783, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2777, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -2656, 39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3041, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), 2536, -84,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -242, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -607, -32,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2611, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1846, 112,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -635, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -690, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2442, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 2081, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1987, -93, -690, 0, -1748, 97,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimFireballAir_joint6[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -437, -275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -559, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -306, 250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 148,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTMarioAnimFireballAir_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 46),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimFireballAir_joint8[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -368, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 201, 15, -4, 0, 176, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 35), 210, -1, -4, 0, 179, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 127, 0, 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTMarioAnimFireballAir_joint10[52] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -218, -11, 103, -12, -206, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -188, 1, -196, -11, -180, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -188, 0, -196, 9, -180, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -210, 11, 22, 12, -199, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0, 0, 5, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimFireballAir_joint11[176] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1805, 148, 332, 91, 2165, 100,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 554, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1953, 434, 2265, 345,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2675, 546, 2856, 477,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 3020, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 441, -65, 3220, 203,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 553, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3263, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3289, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2995, 247, 3314, 249,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 4480, 962,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 692, 72, 3789, 481,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 464, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4276, 575,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 5441, 519, 4939, 352,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 5518, 61, 4980, 48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 5293, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 5563, 44, 432, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 19), 5666, 8, 415, 8,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5296, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 5287, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5690, 52, 424, 17, 5313, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 618, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 6273, 31, 5906, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 6289, 6, 5925, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 6243, -49, 5889, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6177, -164, 684, 59, 5828, -158,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 717, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 5914, -418, 5572, -408,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 5340, -439, 5011, -412,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 5035, -328, 4746, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4683, -351, 692, -25, 4680, -66,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimFireballAir_joint12[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -238, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 119,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 33), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimFireballAir_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 46),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimFireballAir_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 72, 0, 36,
	ftAnimBlock(0, 46),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimFireballAir_joint16[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1262, -47, -1588, -50, -1394, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1331, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), 131, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1442, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1315, 80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1326, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1267, 57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -913, -2,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1357, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1436, -5,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -916, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -1264, -92,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 159, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 700, 157,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1438, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1384, -48,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 866, 166,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1686, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1353, -75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1685, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1429, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1601, -19,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1688, 0, -1670, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1685, -2, -1702, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1682, -2, -1612, -10, -1713, -11,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimFireballAir_joint18[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 323, 297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 764, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 752, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 414, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 436, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 452, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 457, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 393, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 368, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimFireballAir_joint20[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 219, -93, 315, -93, 400, -86,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -81, -186, 165, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 222, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 50, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 239, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -246, -101, 187, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -305, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 559, 22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 265, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 313, 9,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -266, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 270, 45,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 321, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 324, -8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 579, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 478, -43,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 307, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 20, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -16, -43, 422, -63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 179, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -303, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 310, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -188, 33,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 223, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 543, 13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -269, 31, -146, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -219, 15, -60, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -209, 9, -45, 15, 552, 9,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimFireballAir_joint21[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 8, -493, 20, 6, 210, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 125, 32, 158, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -485, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -421, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -773, -18,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, -16, 141, -63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -78, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 84, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 103, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 340, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -99, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -58, 23,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -789, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -702, 34,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 320, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 10, -14,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -660, 56, -41, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -53, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -234, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 12, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 206, 6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -28, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 10, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 209, 1, -242, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 207, -2, -243, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 22, 11, 204, -2, -233, 9,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimFireballAir_joint23[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 268, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 384, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 313, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 294, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 595, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 617, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 820, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 868, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 929, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 932, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimFireballAir_joint24[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1688, 201, -1588, 0, 1931, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), 1698, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 45), -1512, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1890, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1879, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 1873, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1833, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 1687, -28,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1704, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), 1402, -8,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1661, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 1784, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1784, 0, -1514, -1, 1395, -7,
	ftAnimEnd(),
};
