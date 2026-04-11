/* AnimJoint data for relocData file 1853 (FTYoshiAnimShieldBreak) */
/* 3056 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimShieldBreak_joint1[26];
extern u16 dFTYoshiAnimShieldBreak_joint2[116];
extern u16 dFTYoshiAnimShieldBreak_joint3[22];
extern u16 dFTYoshiAnimShieldBreak_joint4[32];
extern u16 dFTYoshiAnimShieldBreak_joint6[30];
extern u16 dFTYoshiAnimShieldBreak_joint7[220];
extern u16 dFTYoshiAnimShieldBreak_joint10[64];
extern u16 dFTYoshiAnimShieldBreak_joint11[222];
extern u16 dFTYoshiAnimShieldBreak_joint12[64];
extern u16 dFTYoshiAnimShieldBreak_joint13[10];
extern u16 dFTYoshiAnimShieldBreak_joint14[8];
extern u16 dFTYoshiAnimShieldBreak_joint15[24];
extern u16 dFTYoshiAnimShieldBreak_joint17[24];
extern u16 dFTYoshiAnimShieldBreak_joint18[130];
extern u16 dFTYoshiAnimShieldBreak_joint20[72];
extern u16 dFTYoshiAnimShieldBreak_joint22[116];
extern u16 dFTYoshiAnimShieldBreak_joint23[122];
extern u16 dFTYoshiAnimShieldBreak_joint25[174];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimShieldBreak_joints[] = {
	(u32)dFTYoshiAnimShieldBreak_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimShieldBreak_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimShieldBreak_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimShieldBreak_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimShieldBreak_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimShieldBreak_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimShieldBreak_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimShieldBreak_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimShieldBreak_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimShieldBreak_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimShieldBreak_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimShieldBreak_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimShieldBreak_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimShieldBreak_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimShieldBreak_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimShieldBreak_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimShieldBreak_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimShieldBreak_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF02C5, /* [25] END */
};

/* Joint 1 */
u16 dFTYoshiAnimShieldBreak_joint1[26] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -409, -350, 0, 121,
	ftAnimSetValBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 672, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 60), -8547, -3, 3216, 11,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 60), 672, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimShieldBreak_joint2[116] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -14, 0, 5, -150, -95, -103, -608,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 10), -524, -133,
	ftAnimSetValRateT(FT_ANIM_TRAY, 12), 27, 303,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -215, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 7), 18, 52,
	ftAnimSetValRateT(FT_ANIM_TRAX, 7), 7, -96,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 7), -476, 322,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), 112, -86,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAX, 9), -42, -14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 19), -366, -108,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY, 16), 251, 201,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 138, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 11), -50, 7,
	ftAnimSetValRateT(FT_ANIM_TRAX, 5), -13, 87,
	ftAnimSetValRateT(FT_ANIM_TRAY, 12), 338, 127,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 10), -352, 157,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_TRAX, 6), 1, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 0, -9,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_TRAX, 15), 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 420, 13, -124, 101,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimShieldBreak_joint3[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 80,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 60), -3, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), 905, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 24), 679, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), 1163, 33,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimShieldBreak_joint4[32] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 288, 0,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 60), 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 573, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 284, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 548, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 197, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 19), 342, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTYoshiAnimShieldBreak_joint6[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 54,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 0, -57,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 14), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 54,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 316,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 0, -51,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 6), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimShieldBreak_joint7[220] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -44, -28, -192, -22, -597, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -233, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), -504, 0, -422, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -494, 28, -494, -81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -302, 309,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -694, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -306, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, -326,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 169, 464, -960, -475,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 625, 306, -1423, -311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 781, 121, -646, 31, -1582, -123,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -687, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1292, 479, -2105, -492,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1935, 428, -2764, -448,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2207, 37, -3091, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -564, 128,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -241, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2223, 7, -3140, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 2360, 93, -3275, -58,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -238, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -312, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2483, 215, -458, -133, -3365, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 3183, 270, -545, 69, -4085, -305,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3333, 95, -439, 94, -4280, -140,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -454, -76, -4204, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 3313, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3247, -108,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2511, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -525, -44, -4036, 205,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -358, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -3477, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2440, -53, -3431, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 2852, 169, -3890, -177,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -389, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -498, 53,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3022, 148, -4070, -162,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 3233, 67, -4323, -96,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -438, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3286, 52, -375, 62, -4409, -86,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTYoshiAnimShieldBreak_joint10[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -757, -11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -786, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -824, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -674, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -776, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -695, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -607, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -980, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -867, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -611, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -700, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1064, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1059, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -774, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -672, 101,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimShieldBreak_joint11[222] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1559, 41, 1453, -40, -2164, 68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 949, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 13), -990, 36, -1684, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -949, 64, -1667, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -467, 540, -1209, 538,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 864, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1046, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 220, 413, -518, 418,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 359, 81, -371, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 382, -2, -341, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 64, -250, -685, -275,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1034, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1222, 98,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -234, -251, -1014, -281,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -667, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1524, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1312, 72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1422, 8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -683, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -759, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1535, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1548, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1421, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1107, -163,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -814, -145, -1583, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1049, -460, 943, -81, -1811, -460,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1196, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1734, -444, -2505, -461,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1983, -24, -2807, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1987, 8, -2830, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1491, 291, -2258, 300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1188, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 988, 28,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1170, 270, -1934, 268,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -795, -51, -1604, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1039, 56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1233, 19,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -855, -68, -1643, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1425, -81, -2112, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1499, -74, 1256, 22, -2196, -83,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimShieldBreak_joint12[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -893, -21,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -869, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -898, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -685, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -796, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -735, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -680, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -999, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -897, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -662, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -777, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -1090, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1079, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -920, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -856, 64,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimShieldBreak_joint13[10] = {
	ftAnimSetVal(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 60), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimShieldBreak_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -536, -893, 0,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTYoshiAnimShieldBreak_joint15[24] = {
	ftAnimSetValAfter(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTX), -190, -24,
	ftAnimSetValBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValT(FT_ANIM_ROTY, 60), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 18), -487, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 23), 26, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 19), -269, -27,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTYoshiAnimShieldBreak_joint17[24] = {
	ftAnimSetValAfter(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTX), -153, -21,
	ftAnimSetValBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValT(FT_ANIM_ROTY, 60), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 19), -377, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 24), 53, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 17), -319, -32,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimShieldBreak_joint18[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 151, -22, -66, 14, -196, -60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -12, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), -16, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -543, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -571, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 437, -75,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 0, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -111, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -5, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 191, 36,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 348, -96,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -184, 7,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 224, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 95, -38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -114, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -35, 45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -170, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -6, 127,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 5, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 0, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 61, -29, 130, 134,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), -7, -1, 539, -4,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 3, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -9, -2, 4, 0, 534, -4,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimShieldBreak_joint20[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 463, 27,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 308, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 324, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 987, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 996, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 467, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 536, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 478, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 391, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 531, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 651, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 568, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 459, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 267, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 263, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 263, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 264, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimShieldBreak_joint22[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1791, 14, -163, 0, -80, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 24), -1823, -43, -133, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 326, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 314, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 206, -42,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1861, -20, -151, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -2002, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 34, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 142, -71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 303, 18,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2006, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1816, 40,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 88, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 18, -17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 320, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 603, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1769, 50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -1630, 1,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 0, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -96, -5,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 641, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 677, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1627, 2, -99, -3, 711, 33,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimShieldBreak_joint23[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -130, 13, 54, -8, -202, -54,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 17), -126, -28, -6, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -552, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -571, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 474, -85,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -151, -20, 15, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -52, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), 186, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 180, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 6, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 372, -110,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -324, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -81, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 199, -17,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -318, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -69, 106,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 16, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -41, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 40, 104,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 246, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 180, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 60, -8,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -37, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -31, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 52, -8, -31, 0, 263, 16,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimShieldBreak_joint25[174] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 440, 26,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 522, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 621, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 775, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 684, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 394, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 486, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 724, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 659, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 643, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 717, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 534, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 524, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 331, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 274, -56,
	ftAnimEnd(),
	0x0000, 0x200E, 0x06EA, 0xFFFB, 0x00A8, 0x0003, 0xFFC1, 0x001F, 0x2803, 0x0011, 0x06FB, 0x001D, 0x2805, 0x001C, 0x00A5, 0x000D, 0x2009, 0x000D, 0x0120, 0xFFF7, 0x2009, 0x0001, 0x0116, 0xFFF6, 0x2809, 0x0010, 0x0045, 0xFFF0, 0x0801, 0x0003, 0x2003, 0x0001, 0x0719, 0x001D, 0x2803, 0x000E, 0x078A, 0xFFDD, 0x0801, 0x000A, 0x2005, 0x0001, 0x00B1, 0x0008, 0x2805, 0x0012, 0x0031, 0x0000, 0x0801, 0x0001, 0x2009, 0x0001, 0x003E, 0x0000, 0x2809, 0x000B, 0x0131, 0x0005, 0x0801, 0x0001, 0x2003, 0x0001, 0x0760, 0xFFD0, 0x2803, 0x000F, 0x053D, 0x0013, 0x0801, 0x0009, 0x2009, 0x0001, 0x0136, 0x0004, 0x2809, 0x0010, 0x01B8, 0x000D, 0x0801, 0x0004, 0x2005, 0x0001, 0x0032, 0x0000, 0x2805, 0x000B, 0x005A, 0x0005, 0x2003, 0x0001, 0x0551, 0x0011, 0x2003, 0x000A, 0x05CF, 0x0004, 0x200F, 0x0001, 0x05D2, 0x0002, 0x0061, 0x0006, 0x01C6, 0x000D, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
