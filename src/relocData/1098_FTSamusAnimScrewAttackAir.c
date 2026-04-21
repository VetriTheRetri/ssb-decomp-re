/* AnimJoint data for relocData file 1098 (FTSamusAnimScrewAttackAir) */
/* 2128 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimScrewAttackAir_joint1[8];
extern u16 dFTSamusAnimScrewAttackAir_joint2[236];
extern u16 dFTSamusAnimScrewAttackAir_joint3[10];
extern u16 dFTSamusAnimScrewAttackAir_joint5[42];
extern u16 dFTSamusAnimScrewAttackAir_joint6[106];
extern u16 dFTSamusAnimScrewAttackAir_joint7[48];
extern u16 dFTSamusAnimScrewAttackAir_joint8[20];
extern u16 dFTSamusAnimScrewAttackAir_joint9[10];
extern u16 dFTSamusAnimScrewAttackAir_joint12[22];
extern u16 dFTSamusAnimScrewAttackAir_joint13[86];
extern u16 dFTSamusAnimScrewAttackAir_joint15[48];
extern u16 dFTSamusAnimScrewAttackAir_joint16[74];
extern u16 dFTSamusAnimScrewAttackAir_joint18[40];
extern u16 dFTSamusAnimScrewAttackAir_joint20[68];
extern u16 dFTSamusAnimScrewAttackAir_joint21[72];
extern u16 dFTSamusAnimScrewAttackAir_joint23[40];
extern u16 dFTSamusAnimScrewAttackAir_joint24[86];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTSamusAnimScrewAttackAir_joints[] = {
	(u32)dFTSamusAnimScrewAttackAir_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimScrewAttackAir_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimScrewAttackAir_joint3, /* [2] joint 3 */
	(u32)dFTSamusAnimScrewAttackAir_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTSamusAnimScrewAttackAir_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimScrewAttackAir_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimScrewAttackAir_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimScrewAttackAir_joint9, /* [8] joint 9 */
	(u32)dFTSamusAnimScrewAttackAir_joint12, /* [9] joint 12 */
	0x00000000, /* [10] NULL */
	0x00000000, /* [11] NULL */
	(u32)dFTSamusAnimScrewAttackAir_joint13, /* [12] joint 13 */
	(u32)dFTSamusAnimScrewAttackAir_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTSamusAnimScrewAttackAir_joint16, /* [15] joint 16 */
	(u32)dFTSamusAnimScrewAttackAir_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTSamusAnimScrewAttackAir_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTSamusAnimScrewAttackAir_joint21, /* [20] joint 21 */
	(u32)dFTSamusAnimScrewAttackAir_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTSamusAnimScrewAttackAir_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTSamusAnimScrewAttackAir_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimBlock(0, 48),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimScrewAttackAir_joint2[236] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), -2,
	ftAnimSetValRate(FT_ANIM_TRAY), 1300, 82,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 19, -138, -5, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 1337, -116, 0, -23,
	ftAnimSetValT(FT_ANIM_TRAX, 48), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -112,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 1), -25,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -286,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 649, -2970,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 33), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 819,
	ftAnimSetValT(FT_ANIM_ROTX, 2), 4036,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), 23,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -722,
	ftAnimSetValRateT(FT_ANIM_TRAY, 1), 1081, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), -31,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 646, 15,
	ftAnimSetValT(FT_ANIM_ROTX, 4), 7253,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), 215,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 2), -216,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 1089, 155,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 2), 197,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -1381,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 714, 509,
	ftAnimSetValT(FT_ANIM_ROTX, 3), 10470,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), -178,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -1195,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 2), 199,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 1077, 1,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -2064,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 714, 3,
	ftAnimSetValT(FT_ANIM_ROTX, 3), 13687,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -180, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 398,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 3), 215, -58,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 1104, -52,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -439,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 647, -330,
	ftAnimSetValT(FT_ANIM_ROTX, 9), 16904,
	ftAnimBlock(0, 2),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 12,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 5), -214,
	ftAnimBlock(0, 3),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 97,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 1083, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), 222, -39,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), 645, -1,
	ftAnimSetValT(FT_ANIM_ROTX, 11), 20121,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), -218, -321,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 1082, 71,
	ftAnimBlock(0, 2),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -13,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), -29, 987,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 1011,
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), 746, -176,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 22518, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 199, 103,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -11,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 3), 32, -1248,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), 817, 337,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), -60,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 3), 0,
	ftAnimSetValRate(FT_ANIM_TRAZ), -2, -1,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), -138, -5, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTSamusAnimScrewAttackAir_joint3[10] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 48), -62, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimScrewAttackAir_joint5[42] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 179, 170, 0, 39, 3, 54,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 122, 0, 0, 2, 0, 44,
	ftAnimSetValT(FT_ANIM_TRAX, 45), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 209, 0, 0, 0, 73,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 44), 0, 0, -33, 70,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 12), 209,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 24), 209,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 8), 255,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTSamusAnimScrewAttackAir_joint6[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 141, -4, -127, -8, 243, 107,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -136, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 134, -6, 459, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 123, 309, 565, -497,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 752, 314, -8, 64, -535, -550,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 752, 0, -535, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 34), 752, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 35), -535, -5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 30), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 752, -50, -8, -141,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 504, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -291, -167, -547, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -544, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -343, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -448, -8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 464, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 430, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 422, -7, -449, 0, -549, -4,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimScrewAttackAir_joint7[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1040, -40,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1099, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1093, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -790, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -790, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 34), -790, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -790, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -618, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -756, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -990, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1028, -38,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimScrewAttackAir_joint8[20] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 699, -9, -173,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 37), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimScrewAttackAir_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 48),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimScrewAttackAir_joint12[22] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 480, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValBlock(FT_ANIM_ROTY), 15,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 48), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 3), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 37), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 8), 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTSamusAnimScrewAttackAir_joint13[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -277, 75, 167, -23, -41, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -162, 33, 142, 2, 368, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -135, -312, 148, -108, 545, -584,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -787, -325, -73, -110, -800, -672,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -787, 0, -73, 0, -800, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 35), -800, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 34), -787, 0, -74, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -787, -15, -74, 146,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -804, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 218, 221, -791, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -602, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 369, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 277, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -800, 3, 266, -11, -592, 10,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimScrewAttackAir_joint15[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -960, -105,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1108, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1078, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -729, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -729, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 34), -728, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -728, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -838, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -777, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -684, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -687, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTSamusAnimScrewAttackAir_joint16[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -54, 4, -127, 23, -540, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 11, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 20, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -557, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -504, -359,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1276, -386,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1276, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 34), -1276, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 11, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), -11, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 20, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 36), 31, 0,
	ftAnimBlock(0, 28),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1276, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1078, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 32, 0, -13, -1, -1056, 22,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTSamusAnimScrewAttackAir_joint18[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1321, -125,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1048, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 880, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1390, 254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1390, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), 1390, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1379, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1306, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1293, -13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTSamusAnimScrewAttackAir_joint20[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 13, 0, -11, -9, 20, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -102, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 39), -29, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 41, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 53, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -291, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -291, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 34), -291, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -102, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 36), -24, 11,
	ftAnimBlock(0, 28),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -29, 10, -291, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 75, 3, -29, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 77, 1, -12, 11, 5, 34,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTSamusAnimScrewAttackAir_joint21[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1663, 8, 1680, -20, -2256, 47,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 28), 1621,
	ftAnimSetValRateT(FT_ANIM_ROTX, 41), -1632, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2163, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2117, -362,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2888, -385,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2888, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 34), -2888,
	ftAnimBlock(0, 23),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 1621,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 1601, -10,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2888, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2382, 107,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1635, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1656, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1656, 0, 1591, -10, -2276, 105,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimScrewAttackAir_joint23[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1094, -65,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 959, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 886, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1391, 252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1391, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 34), 1391, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1391, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1459, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1447, -12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTSamusAnimScrewAttackAir_joint24[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 14, -19, 43, -1, 100, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 39, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 14, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 69, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 52, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 122, 41, -286, -169,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 122, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -286, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 34), -286, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 122, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 35), 91, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 14, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), -12, 2,
	ftAnimBlock(0, 23),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -286, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -43, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -9, 2, 87, -4, -19, 24,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
