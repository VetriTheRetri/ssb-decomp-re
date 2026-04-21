/* AnimJoint data for relocData file 806 (FTDonkeyAnimRun) */
/* 2304 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimRun_joint1[42];
extern u16 dFTDonkeyAnimRun_joint2[38];
extern u16 dFTDonkeyAnimRun_joint4[54];
extern u16 dFTDonkeyAnimRun_joint5[86];
extern u16 dFTDonkeyAnimRun_joint7[56];
extern u16 dFTDonkeyAnimRun_joint8[56];
extern u16 dFTDonkeyAnimRun_joint10[54];
extern u16 dFTDonkeyAnimRun_joint11[98];
extern u16 dFTDonkeyAnimRun_joint12[48];
extern u16 dFTDonkeyAnimRun_joint13[28];
extern u16 dFTDonkeyAnimRun_joint14[12];
extern u16 dFTDonkeyAnimRun_joint16[24];
extern u16 dFTDonkeyAnimRun_joint17[92];
extern u16 dFTDonkeyAnimRun_joint19[32];
extern u16 dFTDonkeyAnimRun_joint21[120];
extern u16 dFTDonkeyAnimRun_joint22[116];
extern u16 dFTDonkeyAnimRun_joint24[40];
extern u16 dFTDonkeyAnimRun_joint25[106];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimRun_joints[] = {
	(u32)dFTDonkeyAnimRun_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimRun_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimRun_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimRun_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimRun_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTDonkeyAnimRun_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimRun_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimRun_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimRun_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimRun_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimRun_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimRun_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimRun_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimRun_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimRun_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimRun_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimRun_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTDonkeyAnimRun_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimRun_joint1[42] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), -209, -79,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 65, 1450,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 1057, 26, -518, 25,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 7), 94, -69,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -69,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 4), 2, -30,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 21, 26, 1535, -5, -126, -55,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1450, -354, -209, -306,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 4), 65,
	ftAnimLoop(0x6800, -80),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimRun_joint2[38] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 317, -88, -77,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), -133, 3, 13, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -96, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 7), 10,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 3,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 6,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -88, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 573, 23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), 317,
	ftAnimLoop(0x6800, -72),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimRun_joint4[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 457, 58, -5,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 319, -157,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 735, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 69, -8, -18, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 20, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 7), -39,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 8,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 160, -11,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -5,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 19), 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 85, -7,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), -7,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 13), -5,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 457,
	ftAnimLoop(0x6800, -106),
};

/* Joint 5 */
u16 dFTDonkeyAnimRun_joint5[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 187, 0, 62, 0, -509, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -48, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 183, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -550, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -422, 69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1000, -16,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -35, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 63, 20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -993, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -631, 31,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 189, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 188, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -613, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -493, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 66, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 63, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 187, -1, 62, -1, -508, -15,
	ftAnimLoop(0x6800, -168),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimRun_joint7[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -4, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -350, -251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -277, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -270, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -266, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -272, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -174, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, 0,
	ftAnimLoop(0x6800, -108),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTDonkeyAnimRun_joint8[56] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 151, -67, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 23, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 11), -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 154, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), 130,
	ftAnimBlock(0, 7),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -32,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -69, 2,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 19), -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 71, 1,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 8), 151,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), -17,
	ftAnimLoop(0x6800, -110),
};

/* Joint 10 */
u16 dFTDonkeyAnimRun_joint10[54] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -269, 151, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -33, -1,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 11), -328,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 163, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 9), 15,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 35,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -1, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -45, 5,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 97, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -382,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 5,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), -269, 151,
	ftAnimBlock(0, 3),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 8,
	ftAnimLoop(0x6800, -106),
};

/* Joint 11 */
u16 dFTDonkeyAnimRun_joint11[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -381, 7, -3, -7, -959, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 245, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -102, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -722, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -622, 97,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -540, -129,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 244, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 33, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -87, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -406, 15,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -673, -129,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1091, 40,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 24, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 85, -40,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1047, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -976, 24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 22, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -390, 11, 6, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -382, 7, -2, -9, -960, 16,
	ftAnimLoop(0x6800, -192),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimRun_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -4, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -4, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -171, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -805, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -856, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -419, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -283, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -127, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, 0,
	ftAnimLoop(0x6800, -94),
};

/* Joint 13 */
u16 dFTDonkeyAnimRun_joint13[28] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 357, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 661, 16, 22, 0, 78, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 687, -15, 2, -1, 282, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 357, 0, 0,
	ftAnimLoop(0x6800, -52),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTDonkeyAnimRun_joint14[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -1340, 2502, 120, 120, 120,
	ftAnimBlock(0, 30),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTDonkeyAnimRun_joint16[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -742, -23,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 1046, 573,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -849, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -348, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), -742, -27,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimRun_joint17[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1243, -6, -1118, -1, 938, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1403, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 1149, 74, 1394, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1231, 76, 1383, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1573, 60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1341, -31,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1423, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1307, 49,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1628, 44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1344, -111,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1312, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1250, -12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1238, -97,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 972, -27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1256, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1149, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1243, -6, -1118, 31, 938, -33,
	ftAnimLoop(0x6800, -180),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimRun_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1012, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 1047, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1037, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 545, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 636, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 979, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1012, 32,
	ftAnimLoop(0x6800, -62),
};

/* Joint 21 */
u16 dFTDonkeyAnimRun_joint21[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 340, -89, -79, 1, -97, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 145, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -530, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 248, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 208, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 3, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 117, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -149, -86,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -541, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -257, 223,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 93, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -214, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -7, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -19, 195,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 119, -57,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 181, 74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 604, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 3, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -69, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 609, -29, -98, -16, 52, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 418, -99, -89, 11, -70, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 345, -73, -80, 9, -97, -26,
	ftAnimLoop(0x6800, -236),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimRun_joint22[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 84, -32, 300, 14, -171, -71,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -109, 56, 302, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -621, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -837, -168,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -620, 66,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -49, 46, 342, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 134, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 351, 14,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -565, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -321, 64,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 135, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 574, 152,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 364, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 311, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 728, 138, -259, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -186, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 712, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 488, -211, 311, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 122, -43, 282, 14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -162, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 83, -38, 299, 16, -172, -10,
	ftAnimLoop(0x6800, -228),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimRun_joint24[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 673, 83,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1145, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1111, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 878, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 835, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 449, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 497, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 603, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 673, 69,
	ftAnimLoop(0x6800, -78),
};

/* Joint 25 */
u16 dFTDonkeyAnimRun_joint25[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3193, -5, -268, -6, -2984, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -184, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 3177, -75, -3177, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3065, -79, -3124, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 3020, 8, -3268, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3043, 33, -129, 36, -3339, -76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -3665, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 3551, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -326, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -412, -96,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1351, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3712, -69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -4122, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3695, 96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 4163, 191,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4271, -139,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -4556, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4376, 208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 4773, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4802, 29, -1340, 11, -4593, -37,
	ftAnimLoop(0x6800, -204),
	ftAnimEnd(),
	0x0000, 0x0000,
};
