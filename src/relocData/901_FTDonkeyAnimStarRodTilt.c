/* AnimJoint data for relocData file 901 (FTDonkeyAnimStarRodTilt) */
/* 2320 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimStarRodTilt_joint1[14];
extern u16 dFTDonkeyAnimStarRodTilt_joint2[50];
extern u16 dFTDonkeyAnimStarRodTilt_joint4[50];
extern u16 dFTDonkeyAnimStarRodTilt_joint5[110];
extern u16 dFTDonkeyAnimStarRodTilt_joint6[48];
extern u16 dFTDonkeyAnimStarRodTilt_joint7[8];
extern u16 dFTDonkeyAnimStarRodTilt_joint8[42];
extern u16 dFTDonkeyAnimStarRodTilt_joint10[8];
extern u16 dFTDonkeyAnimStarRodTilt_joint11[158];
extern u16 dFTDonkeyAnimStarRodTilt_joint12[56];
extern u16 dFTDonkeyAnimStarRodTilt_joint13[46];
extern u16 dFTDonkeyAnimStarRodTilt_joint14[10];
extern u16 dFTDonkeyAnimStarRodTilt_joint16[34];
extern u16 dFTDonkeyAnimStarRodTilt_joint17[106];
extern u16 dFTDonkeyAnimStarRodTilt_joint19[40];
extern u16 dFTDonkeyAnimStarRodTilt_joint21[98];
extern u16 dFTDonkeyAnimStarRodTilt_joint22[96];
extern u16 dFTDonkeyAnimStarRodTilt_joint24[32];
extern u16 dFTDonkeyAnimStarRodTilt_joint25[104];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimStarRodTilt_joints[] = {
	(u32)dFTDonkeyAnimStarRodTilt_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimStarRodTilt_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimStarRodTilt_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimStarRodTilt_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimStarRodTilt_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimStarRodTilt_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimStarRodTilt_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimStarRodTilt_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimStarRodTilt_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimStarRodTilt_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimStarRodTilt_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimStarRodTilt_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimStarRodTilt_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimStarRodTilt_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimStarRodTilt_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimStarRodTilt_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimStarRodTilt_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimStarRodTilt_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTDonkeyAnimStarRodTilt_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimStarRodTilt_joint1[14] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1032, -402,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), -24,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 1022, -796,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 32), 1032, -402,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimStarRodTilt_joint2[50] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -265, -41, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -309, -6, 355, 56, 11, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -309, 7, 355, -66, 11, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -265, 8, -41, -89, -16, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -239, 1, -358, -21, -4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -239, 0, -358, 11, -4, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -265, -41, -16,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimStarRodTilt_joint4[50] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 750, 24, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 811, 8, 137, 16, 274, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 811, -10, 137, -18, 274, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 750, -8, 24, -33, 41, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 741, 0, -127, -10, -179, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 741, 0, -127, 5, -179, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 750, 24, 41,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimStarRodTilt_joint5[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, 3, -84, 0, -473, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -74, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -384, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -473, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -342, 140,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 165, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -18, 64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 28, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -534, -151,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -886, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 153, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -74, -56,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -870, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -100, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 41, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -90, 2,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -131, -55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -466, -13,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -86, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -64, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -88, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -85, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, 1, -84, 0, -473, -6,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimStarRodTilt_joint6[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -407, 24,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -261, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1011, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -963, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -793, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -814, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -872, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -822, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -418, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimStarRodTilt_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 42),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimStarRodTilt_joint8[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, -67, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -145, -45, -609, -77, 587, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -145, 52, -609, 93, 587, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 168, 16, -47, 74, -43, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 38, 0, 209, 0, -470, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 174, -67, -44,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTDonkeyAnimStarRodTilt_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -398, 70, 29,
	ftAnimBlock(0, 42),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimStarRodTilt_joint11[158] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -115, -64, 172, -49, -479, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -911, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -594, -72, -184, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -664, -52, -149, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -784, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 524, 175,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -968, -59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1431, -377,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -855, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1092, -330, 686, 97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 587, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1516, -185, -1900, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1252, 166, -1679, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1129, 100, -1563, 94,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -1055, 5, -1552, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 521, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 701, 34,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1037, 49, -1537, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -637, 428, -1134, 433,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 736, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 271, -36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -100, 348, -591, 356,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 91, 13, -374, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 86, -11, -360, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -113, -4, -474, -9,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 238, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 176, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -115, -2, 172, -4, -479, -5,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimStarRodTilt_joint12[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -416, -129,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -746, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -714, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -948, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -932, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -326, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -204, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -4, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -144, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -710, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -737, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -429, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimStarRodTilt_joint13[46] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 98, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1005, 128, -136, -19, 290, 41,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 792, -24, 203, 25, 1330, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 739, -3, 142, -4, 1053, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 739, -23, 142, -5, 1053, -39,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 98, 0, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTDonkeyAnimStarRodTilt_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -1340, 2502, 119, 120, 120,
	ftAnimBlock(0, 42),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTDonkeyAnimStarRodTilt_joint16[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -404, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -365, -2, -191, 52, -204, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -440, -5, 626, -2, 68, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -494, 1, -245, -20, -374, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -404, 0, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimStarRodTilt_joint17[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -86, -6, -394, 8, -304, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 12, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -258, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -131, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -178, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 254, 20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -25, -45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -367, -7,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -219, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -280, -37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 273, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 390, -28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -374, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -189, 43,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 352, -46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -294, -20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -315, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -392, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -147, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -86, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -86, 0, -394, -2, -304, -10,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimStarRodTilt_joint19[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1004, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 916, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 941, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 694, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 675, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 825, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 880, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1005, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1004, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimStarRodTilt_joint21[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, -28, 24, 7, -377, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 70, -123,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -469, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -310, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -279, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -299, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -75, -130,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -484, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -475, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -505, -3,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -296, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -126, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -477, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -47, 39,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -505, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -384, 12,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -94, 27, -10, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -71, 15, 14, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, 8, 24, 9, -377, 7,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimStarRodTilt_joint22[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 99, -17, 216, -10, -297, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -38, -60, -372, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -177, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -204, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 196, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -86, -12, -483, -86,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -11, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -530, -8,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 234, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 77, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -38, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 156, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -539, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), -300, 5,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 69, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 98, 2,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 177, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 214, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 99, 1, 216, 2, -297, 2,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimStarRodTilt_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 993, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 895, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 862, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 990, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 992, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 993, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 993, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTDonkeyAnimStarRodTilt_joint25[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -2, 105, 60, -383, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 615, 26, -105, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 261, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 414, 144,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 511, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 618, -9, 83, 151,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -44, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 68, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 306, -231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -79, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -180, -84, -58, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -157, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -222, -21,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 82, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 106, -1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -144, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -1, 3,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -244, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -382, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 2, 105, 0, -383, -1,
	ftAnimEnd(),
	0x0000, 0x0000,
};
