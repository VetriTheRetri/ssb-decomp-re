/* AnimJoint data for relocData file 699 (FTFoxAnimClangRecoil) */
/* 1696 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimClangRecoil_joint1[32];
extern u16 dFTFoxAnimClangRecoil_joint2[10];
extern u16 dFTFoxAnimClangRecoil_joint4[30];
extern u16 dFTFoxAnimClangRecoil_joint5[86];
extern u16 dFTFoxAnimClangRecoil_joint7[38];
extern u16 dFTFoxAnimClangRecoil_joint10[30];
extern u16 dFTFoxAnimClangRecoil_joint11[70];
extern u16 dFTFoxAnimClangRecoil_joint12[32];
extern u16 dFTFoxAnimClangRecoil_joint13[28];
extern u16 dFTFoxAnimClangRecoil_joint15[10];
extern u16 dFTFoxAnimClangRecoil_joint16[68];
extern u16 dFTFoxAnimClangRecoil_joint18[40];
extern u16 dFTFoxAnimClangRecoil_joint20[84];
extern u16 dFTFoxAnimClangRecoil_joint21[74];
extern u16 dFTFoxAnimClangRecoil_joint23[40];
extern u16 dFTFoxAnimClangRecoil_joint24[56];
extern u16 dFTFoxAnimClangRecoil_joint25[38];
extern u16 dFTFoxAnimClangRecoil_joint26[30];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTFoxAnimClangRecoil_joints[] = {
	(AObjEvent32 *)dFTFoxAnimClangRecoil_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimClangRecoil_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimClangRecoil_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTFoxAnimClangRecoil_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTFoxAnimClangRecoil_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTFoxAnimClangRecoil_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTFoxAnimClangRecoil_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTFoxAnimClangRecoil_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimClangRecoil_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimClangRecoil_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTFoxAnimClangRecoil_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTFoxAnimClangRecoil_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTFoxAnimClangRecoil_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTFoxAnimClangRecoil_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTFoxAnimClangRecoil_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTFoxAnimClangRecoil_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTFoxAnimClangRecoil_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimClangRecoil_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimClangRecoil_joint1[32] = {
	ftAnimSetValAfter(FT_ANIM_TRAX), 48,
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 912, -600,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 134, -187, 0,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 690, -157, -365, 165,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 690, 148, -365, 229,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 912, -20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimClangRecoil_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -141, -338, -3, 0, 0, 0,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimClangRecoil_joint4[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 310, -162, -132,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 402, 8, 0, 14, 214, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 402, -7, 0, 13, 214, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 309, 156, 81,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimClangRecoil_joint5[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 792, -108, 261, -9, -700, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -835, -60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 396, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 252, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 67, -151,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -118, 54,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -906, -70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -542, 419,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 423, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 242, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -61, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -331, 53,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -37, -189, 4, 439,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -116, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -214, 77, 337, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -175, 24, 324, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -109, 6, -165, 9, 258, -65,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimClangRecoil_joint7[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -292, -231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -303, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -198, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -814, -281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1057, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -730, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 172,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimClangRecoil_joint10[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -52, 248, -100,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 143, 17, 99, -13, -82, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 143, -21, 99, 3, -82, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -113, 136, -72,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimClangRecoil_joint11[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -262, -37, -111, 49, -375, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -521, 19, 15, -47, -481, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -480, 22, -41, -44, -411, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 113, 180, -191, 298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -480, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -420, 139,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 49, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 320, 105, 184, 324,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 295, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 457, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 106, 41, 413, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 132, 26, 271, -23, 336, -76,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimClangRecoil_joint12[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -879, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -692, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -655, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -976, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1115, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -745, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 150,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimClangRecoil_joint13[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 446,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 272, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 714, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 536, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 446, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 268, -111,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimClangRecoil_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimClangRecoil_joint16[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 855, -102, -454, 20, -218, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 61, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -416, 96, -160, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, 66, -372, -161,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -492, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -364, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 55, -11, -368, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -307, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -383, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -494, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -127, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -250, 42, -51, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -405, -22, -223, 27, -26, 24,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimClangRecoil_joint18[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 5, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 565, 383,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 767, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 857, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 843, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 446, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -92,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimClangRecoil_joint20[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2007, 76, -176, -71, -2232, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2274, 282,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -382, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2235, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2325, -362,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2650, 312, -2959, -467,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 3112, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -263, 102, -3261, -215,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -3439, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 47, 26,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3139, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 3224, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3455, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -3340, 58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 71, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 105, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3236, 12, 125, 20, -3273, 67,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimClangRecoil_joint21[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 104, -35, 52, 53, -149, -106,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -433, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 139, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -279, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -231, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -109, 114,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -424, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -88, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 150, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 265, -51,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 75, 146,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 296, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 17, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 198, -63, 113, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 355, 59, 137, -61, 134, 20,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimClangRecoil_joint23[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 271,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 622, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 638, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 659, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 607, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 598, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 477, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 352, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimClangRecoil_joint24[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1628, 15, -1375, -12, -1406, -166,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1817, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1777, -5, -1908, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1777, -8, -1919, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1910, 60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1707, -40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1794, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -1407, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1448, -49, -1846, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1651, -56, -1505, -57, -1835, 11,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimClangRecoil_joint25[38] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, -568,
	ftAnimSetValBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 4), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -568, 147,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 3), -383,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 465, 65,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 0, 219,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 9), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTFoxAnimClangRecoil_joint26[30] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -160, -558, 337,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -160, -1, -558, 71, 337, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -182, -1, 304, 36, -85, -28,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -178, -122, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
