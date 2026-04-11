/* AnimJoint data for relocData file 592 (FTMarioAnimItemThrowDash) */
/* 3472 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimItemThrowDash_joint1[10];
extern u16 dFTMarioAnimItemThrowDash_joint2[122];
extern u16 dFTMarioAnimItemThrowDash_joint3[48];
extern u16 dFTMarioAnimItemThrowDash_joint5[80];
extern u16 dFTMarioAnimItemThrowDash_joint6[114];
extern u16 dFTMarioAnimItemThrowDash_joint7[34];
extern u16 dFTMarioAnimItemThrowDash_joint8[10];
extern u16 dFTMarioAnimItemThrowDash_joint9[80];
extern u16 dFTMarioAnimItemThrowDash_joint11[56];
extern u16 dFTMarioAnimItemThrowDash_joint12[112];
extern u16 dFTMarioAnimItemThrowDash_joint13[30];
extern u16 dFTMarioAnimItemThrowDash_joint14[26];
extern u16 dFTMarioAnimItemThrowDash_joint16[10];
extern u16 dFTMarioAnimItemThrowDash_joint17[180];
extern u16 dFTMarioAnimItemThrowDash_joint19[110];
extern u16 dFTMarioAnimItemThrowDash_joint21[216];
extern u16 dFTMarioAnimItemThrowDash_joint22[166];
extern u16 dFTMarioAnimItemThrowDash_joint24[282];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTMarioAnimItemThrowDash_joints[] = {
	(u32)dFTMarioAnimItemThrowDash_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimItemThrowDash_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimItemThrowDash_joint3, /* [2] joint 3 */
	(u32)dFTMarioAnimItemThrowDash_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTMarioAnimItemThrowDash_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimItemThrowDash_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimItemThrowDash_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimItemThrowDash_joint9, /* [8] joint 9 */
	(u32)dFTMarioAnimItemThrowDash_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTMarioAnimItemThrowDash_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimItemThrowDash_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimItemThrowDash_joint14, /* [13] joint 14 */
	(u32)dFTMarioAnimItemThrowDash_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTMarioAnimItemThrowDash_joint17, /* [16] joint 17 */
	(u32)dFTMarioAnimItemThrowDash_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTMarioAnimItemThrowDash_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTMarioAnimItemThrowDash_joint22, /* [21] joint 22 */
	(u32)dFTMarioAnimItemThrowDash_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF0303, /* [24] END */
};

/* Joint 1 */
u16 dFTMarioAnimItemThrowDash_joint1[10] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAZ), 0, 2116,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 38), 3600,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 2), 3600,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimItemThrowDash_joint2[122] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 755, 0, -67, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 552, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 29), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), -59, 8,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), -60, -7,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 5), 755,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 6), -67, 24,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 6), 552,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 3), -32, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 755, 32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), -60, -35,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), -67, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 588, -46,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 703, 25,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -67, 16,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), -59, 17,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -59, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 0, 20,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 613, -108, -60, -15,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 608, -73, -72, -9,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 5), 223,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 540, -56,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), -67, 145,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 0, 93,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTMarioAnimItemThrowDash_joint3[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -124, 0, -113, 0, 41, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), -124, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 37, 0, -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -113, 0, 41, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -83, 3, -202, -4, 31, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -82, 3, -173, -195, 26, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -71, -3, -790, 5, -95, 1,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimItemThrowDash_joint5[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 407, 0, 234, 0, 78, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 355, -345, -478, -449, 157, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -282, -128, -663, 296, 273, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 98, 542, 113, 552, -118, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 803, 302, 441, -15, 609, 272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1006, 9, 67, -17, 699, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 1006, 0, 67, -4, 699, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 1012, 3, -60, 0, 673, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1044, -114, 64, 45, 438, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 208, -91, 258, 12, 110, -25,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimItemThrowDash_joint6[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -342, -81, 2913, -105, 288, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -423, -338, 2808, -391, 302, 238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1019, -296, 2130, -299, 764, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1016, -50, 2208, 84, 754, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1120, -182, 2299, 69, 871, 194,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 2349, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1382, -126, 1142, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1373, -6, 1140, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -1299, 26, 1123, -19,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2351, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), 1988, -51,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1288, -4, 1119, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 13), -1255, -1, 1190, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1256, -1, 1198, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1382, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1239, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1933, -39, 1237, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1475, -93, 1908, -25, 1336, 98,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimItemThrowDash_joint7[34] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -247, -419,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -666, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 328,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 34), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, -182,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimItemThrowDash_joint8[10] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -804,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 40), -625,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTMarioAnimItemThrowDash_joint9[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 188, -1, -68, 33, -36, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -78, -264, 372, 396, -297, -263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -340, 117, 723, -172, -563, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 156, 189, 28, -614, -224, 311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 38, -170, -505, -259, 60, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -184, -108, -491, 9, 0, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -178, 0, -486, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -178, 12, -486, 5, 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 221, 25, -319, 32, 65, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 201, -2, -4, 20, 176, -8,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimItemThrowDash_joint11[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -190, 0, -42, 0, 97, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -190, 38, -42, 8, 103, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 94, 0, 23, 0, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1, 0, 5, 0, -1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -1, -6, 5, 4, -1, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -221, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 150, 8, 28, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 139, -16, -209, 5,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimItemThrowDash_joint12[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1827, -12, 1005, 75, -2168, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1839, 103, 1080, 2, -2130, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1619, 225, 1009, -431, -1864, 226,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1166, 301, -1442, 303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 217, -290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 428, 163,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 541, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -785, 202, -1071, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -755, 6, -1054, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -749, 6, -1053, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 27), -638, 12, -1060, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 545, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), 553, 4,
	ftAnimBlock(0, 25),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -623, 20, -1048, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -566, 69, -998, 68,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 555, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -457, -299, 596, 250, -888, -271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1164, -706, 1056, 460, -1542, -654,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimItemThrowDash_joint13[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -489, 480,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 35), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -89, -405,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, -721,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTMarioAnimItemThrowDash_joint14[26] = {
	ftAnimSetValAfter(FT_ANIM_ROTY), 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 804,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 12), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 12), 580,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 28), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 8), 625,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), 625,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 16), 625,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimItemThrowDash_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTMarioAnimItemThrowDash_joint17[180] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 122, -29, -109, 16, -386, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -5, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -53, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -369, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -159, 258,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 294, 93,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 11, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -24, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -23, 17, 334, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 0, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 366, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 284, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 150, -240,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 33, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -10, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 42, -19, -139, -254,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -380, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -87, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -85, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 48, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -46, -43, -249, 203,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -28, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 26, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 107, 68,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 209, -64,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 55, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -76, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 157, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 95, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1, -97,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -140, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -19, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -24, -92,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -85, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -189, 13, -27, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2, 45, -181, -93, 12, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -97, -100, -215, -33, 41, 28,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTMarioAnimItemThrowDash_joint19[110] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 112, 106,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 218, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 520, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 520, -250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 140, -260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 194, 275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 558, 262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 960, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1060, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 964, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 782, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 340, -239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -170,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 368, 363,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 727, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 704, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 608, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 630, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 469, -298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, 400,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTMarioAnimItemThrowDash_joint21[216] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -200, 27, -299, 27, 246, -104,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -141, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -105, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -227, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -149, 78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 9, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -160, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -191, -30,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -128, -116,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -362, -49,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -124, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -82, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -213, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -201, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -429, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -155, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -130, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 45, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -106, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -152, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -165, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -137, 104,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -12, -52, -156, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -141, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -154, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 35, 125,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -8, -25,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -157, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -316, 9, -17, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -138, 68, -275, -84, -317, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -313, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -179, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -72, 303,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 472, 78,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -202, 95,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 39, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -111,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -125, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -123, 90,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 233, 180,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 23, -7, -50, 222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 24, -113, 467, -94, 320, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -203, -118, 45, -258, 113, -238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -213, -9, -48, -93, -156, -270,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTMarioAnimItemThrowDash_joint22[166] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -43, 6, 174, -7, 752, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -14, 44, 103, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 209, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -53, -208,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -386, -49,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 28, 17, 149, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -17, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 47, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -426, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -54, 167,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -166, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 117, 117,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 185, 45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 50, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -84, -77,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 240, 39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -84, -130,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -183, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -221, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -200, -48, -178, -172, -219, -77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -451, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 36, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -428, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -389, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -313, 480, -128, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 509, 295, -46, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 33, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 276, -203,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 181, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 56, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 134, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 166, -15, 172, 138, 30, -104,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimItemThrowDash_joint24[282] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 284, 17,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 301, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 509, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1072, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 963, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 644, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 641, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 299, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 256, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 755, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 805, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1050, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1139, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 836, -413,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 293, -414,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 226, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, 211,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0036, 0x0008, 0x007E, 0xFFFD, 0xFF6A, 0x0011, 0x2805, 0x0007, 0x0094, 0x001D, 0x200B, 0x0006, 0x0001, 0xFFB9, 0xFFA1, 0x007F, 0x200B, 0x0001, 0xFFAD, 0xFFDE, 0x0021, 0x0022, 0x2809, 0x0003, 0xFED7, 0xFFD0, 0x2007, 0x0001, 0xFFBC, 0x0059, 0x00AD, 0xFFFB, 0x2805, 0x0004, 0x00A3, 0x001D, 0x2003, 0x0001, 0x005F, 0x0050, 0x2803, 0x0003, 0x0079, 0x0008, 0x0801, 0x0001, 0x2009, 0x0001, 0xFED1, 0x0007, 0x2809, 0x0004, 0xFF15, 0x0007, 0x0801, 0x0001, 0x2007, 0x0001, 0x007E, 0xFFF6, 0x00B6, 0x000B, 0x2803, 0x0004, 0x0051, 0x002D, 0x2805, 0x0007, 0x0077, 0xFFD6, 0x0801, 0x0002, 0x2009, 0x0001, 0xFF38, 0x003C, 0x2809, 0x0004, 0xFFFB, 0xFFE5, 0x0801, 0x0001, 0x2003, 0x0001, 0x008B, 0x002A, 0x2803, 0x0005, 0x0054, 0x0009, 0x0801, 0x0002, 0x200D, 0x0001, 0x0057, 0xFFF0, 0xFFC5, 0xFFD9, 0x280D, 0x0006, 0x00B6, 0x0030, 0x000E, 0xFFE9, 0x0801, 0x0002, 0x2003, 0x0001, 0x005F, 0x000D, 0x2003, 0x0003, 0x00CE, 0x003C, 0x200F, 0x0001, 0x010D, 0x00AA, 0x0100, 0x0086, 0xFFDB, 0x0020, 0x280D, 0x0002, 0x021A, 0xFFD3, 0x0067, 0xFFE0, 0x2003, 0x0001, 0x0222, 0x005E, 0x2003, 0x0001, 0x01C9, 0xFF0F, 0x2803, 0x0002, 0xFF50, 0xFFD3, 0x200D, 0x0001, 0x0167, 0xFE09, 0x000D, 0x003C, 0x200D, 0x0001, 0xFE2D, 0xFEE1, 0x00DF, 0x0040, 0x200F, 0x0001, 0xFFE6, 0x0088, 0xFF28, 0x00F5, 0x008E, 0xFFBE, 0x200F, 0x0004, 0x0055, 0xFFB0, 0x0183, 0x007A, 0xFF97, 0xFFB6, 0x200F, 0x0001, 0xFFF4, 0x0001, 0x020A, 0xFFA5, 0xFF42, 0xFFE7, 0x200F, 0x0001, 0x0059, 0x0034, 0x00CB, 0xFEDD, 0xFF65, 0xFFF5, 0x200F, 0x0001, 0x005B, 0x0002, 0xFFC5, 0xFEF9, 0xFF2C, 0xFFC8, 0x0000,
};
