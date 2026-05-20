/* AnimJoint data for relocData file 1904 (FTYoshiAnimItemThrowSmashB) */
/* 2864 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimItemThrowSmashB_joint1[16];
extern u16 dFTYoshiAnimItemThrowSmashB_joint2[96];
extern u16 dFTYoshiAnimItemThrowSmashB_joint3[36];
extern u16 dFTYoshiAnimItemThrowSmashB_joint4[56];
extern u16 dFTYoshiAnimItemThrowSmashB_joint6[20];
extern u16 dFTYoshiAnimItemThrowSmashB_joint7[146];
extern u16 dFTYoshiAnimItemThrowSmashB_joint8[68];
extern u16 dFTYoshiAnimItemThrowSmashB_joint10[12];
extern u16 dFTYoshiAnimItemThrowSmashB_joint11[166];
extern u16 dFTYoshiAnimItemThrowSmashB_joint12[76];
extern u16 dFTYoshiAnimItemThrowSmashB_joint13[20];
extern u16 dFTYoshiAnimItemThrowSmashB_joint14[12];
extern u16 dFTYoshiAnimItemThrowSmashB_joint15[34];
extern u16 dFTYoshiAnimItemThrowSmashB_joint17[32];
extern u16 dFTYoshiAnimItemThrowSmashB_joint18[104];
extern u16 dFTYoshiAnimItemThrowSmashB_joint20[48];
extern u16 dFTYoshiAnimItemThrowSmashB_joint22[122];
extern u16 dFTYoshiAnimItemThrowSmashB_joint23[130];
extern u16 dFTYoshiAnimItemThrowSmashB_joint25[62];
extern u16 dFTYoshiAnimItemThrowSmashB_joint26[124];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTYoshiAnimItemThrowSmashB_joints[] = {
	(AObjEvent32 *)dFTYoshiAnimItemThrowSmashB_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTYoshiAnimItemThrowSmashB_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTYoshiAnimItemThrowSmashB_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTYoshiAnimItemThrowSmashB_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTYoshiAnimItemThrowSmashB_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTYoshiAnimItemThrowSmashB_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTYoshiAnimItemThrowSmashB_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTYoshiAnimItemThrowSmashB_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTYoshiAnimItemThrowSmashB_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTYoshiAnimItemThrowSmashB_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTYoshiAnimItemThrowSmashB_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTYoshiAnimItemThrowSmashB_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTYoshiAnimItemThrowSmashB_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTYoshiAnimItemThrowSmashB_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTYoshiAnimItemThrowSmashB_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTYoshiAnimItemThrowSmashB_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTYoshiAnimItemThrowSmashB_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTYoshiAnimItemThrowSmashB_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTYoshiAnimItemThrowSmashB_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTYoshiAnimItemThrowSmashB_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimItemThrowSmashB_joint1[16] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0, 672,
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetFlags(0),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 13), 105,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 11), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTYoshiAnimItemThrowSmashB_joint2[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -11, -89, -6, 0, 8, 0, -33, 30, -15, 20, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -580, 0, -285, 7, 518, 10,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -131, 21, -183, -123, -114, -102,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -124, 830, -107, 278,
	ftAnimSetValRateT(FT_ANIM_TRAX, 6), 35, 62,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -6, 68, 1, 31, 122, -67,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 231, 106, 24, 975,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -97, -1324, 136, 438,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 36, 0, -4, -7, -91, -10,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -100, 85, 134, -77,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 0, -23, 30, 10, 20, -46,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 1, -89, 2, 0, 2,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimItemThrowSmashB_joint3[36] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 16, -9, 0, 13, 0, -5,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -204, 20, 511, 16, -194, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 351, 12, 264, -30, 13, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 16, -3, 0, -4, 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimItemThrowSmashB_joint4[56] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 78, 64, 0, -10, 0, -83,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 600, 329,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1188, -16, -384, -36, -1424, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 535, 406,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, 0, 600, 27, 329, -32,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -124, -65, -435, 22, 41, 83,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 78, 2, 0, 7, 0, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 0, 600, 329,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimItemThrowSmashB_joint6[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 48, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 435, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), 435, -22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimItemThrowSmashB_joint7[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1718, 18, -1476, -36, 1256, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1668, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1487, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1296, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1197, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1278, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1238, -58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 697, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1677, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1393, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1392, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1363, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1419, 367, 437, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1301, -273, -628, 574, 571, 480,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1941, -312, -269, 190, 1398, 415,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1927, 71, -247, 36, 1402, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1684, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -197, 50, 1305, -77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1372, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -61, -55,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1652, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1621, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1590, -765, 1348, 357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3153, -806, 2087, 543,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3204, -56, -97, -29, 2434, 305,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -3310, -31, -126, -5, 2831, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3327, -17, -132, -5, 2864, 32,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimItemThrowSmashB_joint8[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -764, 92,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -427, 336,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 213,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -8, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -386,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -781, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 386,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -8, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -744, -284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -904, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -825, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, 60,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTYoshiAnimItemThrowSmashB_joint10[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), -639,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 17), 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTYoshiAnimItemThrowSmashB_joint11[166] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1463, 145, 1711, -103, 1389, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1608, 715, 1608, -214, 1495, 328,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2893, 823, 1283, -122, 2046, 544,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 3271, -8, 1506, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2583, 353,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2752, 89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2790, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3238, -22, 1569, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 3139, -78, 1718, 97,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2799, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2861, 131,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3057, 187, 1808, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3514, 361, 1449, -386, 3082, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3780, 541, 1035, -60, 3086, 323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4597, 542, 1327, 218, 3730, 586,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4865, 111, 1471, 147, 4259, 284,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 4785, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1641, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4300, 58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 4436, 45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4770, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 4680, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4487, 163,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 4898, 32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1612, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1682, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4829, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4679, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4680, 0, 1711, 28, 4606, -72,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimItemThrowSmashB_joint12[76] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1002, -311,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1148, 485,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -343, 569,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -314, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -434, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 217,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -524, -444,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -897, -264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1048, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, 45,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimItemThrowSmashB_joint13[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 172, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -223, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -463, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 13), 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimItemThrowSmashB_joint14[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -536, -893, 0, 0, 156, 0,
	ftAnimSetFlagsT(0, 13),
	ftAnimSetFlagsT(FT_ANIM_ROTY, 11),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimItemThrowSmashB_joint15[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -190, -10, 0, -5, 0, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), -440, 11, -268, 19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 17, 337, 19, 0, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -190, 2, 0, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTYoshiAnimItemThrowSmashB_joint17[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -153, -16, 0, -1, 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -587, 2, -76, 13, 162, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -105, 36, 256, 6, -51, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -153, 3, 0, -5, 0, 1,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimItemThrowSmashB_joint18[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, -74, 5, 39, -3, -174,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -187, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 34, -58, -565, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -25, -32, -701, -130,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 79, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -825, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -12, 110, -729, 68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -103, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -688, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 50, 98, -736, 330,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 276, 23, -28, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -232, 32, 96, -89, -454, -73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 59, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -37, 112, -174, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -6, 32, -232, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 0, -10, -34, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 32, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 1, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, -5, 5, 4, -3, 30,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimItemThrowSmashB_joint20[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 262, 251,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 930, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 996, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 883, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 718, -438,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 916, 308,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 624, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 689, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 312, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 262, -50,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimItemThrowSmashB_joint22[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 6, 61, -1524, -61, -1872, -58,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 214, -83, -1699, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -1481, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1436, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 116, -119, -1436, 87, -1565, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, -26, -1262, 104, -1811, -179,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1405, -283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 63, 110, -1924, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 197, 42, -1928, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 148, -9, -1793, -196, -1799, -161,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 97, -61, -1641, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2251, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2101, 63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2131, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 55, -26, -1621, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 17, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1520, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2115, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1892, 28,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 10, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 7, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6, 0, -1524, -3, -1872, 20,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimItemThrowSmashB_joint23[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -21, 0, 9, -154, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -596, -89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -87, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -141, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -125, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -237, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -693, -42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -425, 485,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -158, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -360, 92, -20, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -53, 157, 251, 25, 289, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -45, 80, 31, -140, -90, -280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 106, 22, -28, -15, -271, 77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 498, 315,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 138, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 63, -28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 697, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 625, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 37, -51, 122, -18, 555, -206,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -30, 25, 13, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 213, -258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 37, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -193, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 30, 0, -13, -154, 39,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimItemThrowSmashB_joint25[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 378, 93,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1234, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1291, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1309, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1131, -654,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 839, 503,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 778, -387,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 233, -389,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 426, 286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 572, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 540, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -162,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimItemThrowSmashB_joint26[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1609, -3, -89, 1, -228, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 1291, -92, -330, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -246, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -153, 79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -226, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1195, 51, -355, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1642, 133,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 6, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -456, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1663, -31, -65, -108,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1474, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -673, -291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -25, -17, -647, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -195, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1522, 13, -574, 151,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1550, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -165, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -165, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -179, 17, -159, -61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -91, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -289, -71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -255, 22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1579, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1608, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1609, 0, -89, 2, -228, 26,
	ftAnimEnd(),
};
