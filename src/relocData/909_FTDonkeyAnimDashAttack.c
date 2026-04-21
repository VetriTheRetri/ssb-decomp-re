/* AnimJoint data for relocData file 909 (FTDonkeyAnimDashAttack) */
/* 3360 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimDashAttack_joint1[14];
extern u16 dFTDonkeyAnimDashAttack_joint2[52];
extern u16 dFTDonkeyAnimDashAttack_joint3[66];
extern u16 dFTDonkeyAnimDashAttack_joint5[50];
extern u16 dFTDonkeyAnimDashAttack_joint6[168];
extern u16 dFTDonkeyAnimDashAttack_joint8[56];
extern u16 dFTDonkeyAnimDashAttack_joint9[10];
extern u16 dFTDonkeyAnimDashAttack_joint11[38];
extern u16 dFTDonkeyAnimDashAttack_joint12[98];
extern u16 dFTDonkeyAnimDashAttack_joint13[48];
extern u16 dFTDonkeyAnimDashAttack_joint14[18];
extern u16 dFTDonkeyAnimDashAttack_joint15[8];
extern u16 dFTDonkeyAnimDashAttack_joint17[34];
extern u16 dFTDonkeyAnimDashAttack_joint18[222];
extern u16 dFTDonkeyAnimDashAttack_joint20[72];
extern u16 dFTDonkeyAnimDashAttack_joint22[182];
extern u16 dFTDonkeyAnimDashAttack_joint23[258];
extern u16 dFTDonkeyAnimDashAttack_joint25[56];
extern u16 dFTDonkeyAnimDashAttack_joint26[178];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTDonkeyAnimDashAttack_joints[] = {
	(u32)dFTDonkeyAnimDashAttack_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimDashAttack_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimDashAttack_joint3, /* [2] joint 3 */
	(u32)dFTDonkeyAnimDashAttack_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTDonkeyAnimDashAttack_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimDashAttack_joint8, /* [6] joint 8 */
	0x00000000, /* [7] NULL */
	(u32)dFTDonkeyAnimDashAttack_joint9, /* [8] joint 9 */
	(u32)dFTDonkeyAnimDashAttack_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTDonkeyAnimDashAttack_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimDashAttack_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimDashAttack_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimDashAttack_joint15, /* [14] joint 15 */
	(u32)dFTDonkeyAnimDashAttack_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTDonkeyAnimDashAttack_joint18, /* [17] joint 18 */
	(u32)dFTDonkeyAnimDashAttack_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTDonkeyAnimDashAttack_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTDonkeyAnimDashAttack_joint23, /* [22] joint 23 */
	(u32)dFTDonkeyAnimDashAttack_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTDonkeyAnimDashAttack_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTDonkeyAnimDashAttack_joint1[14] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 20), 1770, 202,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 50), 1770,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTDonkeyAnimDashAttack_joint2[52] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 65, 1450, -209,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 19, -8, 1135, -58, -456, -131,
	ftAnimSetValRateT(FT_ANIM_TRAY, 38), 1158, -62,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 43), 19,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 13), -456, 120,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 25), 116, 152,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 798, -147,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), 116,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 19, -15, 881, 74, 116, -165,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), -29, 0, 1031, 4, -400, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTDonkeyAnimDashAttack_joint3[66] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 317, -88, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -322, -63, -409, -29, 279, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -639, -22, -523, -1, 573, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -728, -8, -435, 8, 598, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -728, 36, -435, 7, 598, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 2, 36, -284, 7, 109, -24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 2, -284, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 2, -10, -284, 9, 109, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -265, 0, -41, 0, -16, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimDashAttack_joint5[50] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 457, 58, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 242, -10, 52, 0, 1, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 242, 52, 1,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 52, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 242, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 330, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 330, 16, 52, -1, 1, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 750, 0, 24, 0, 41, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTDonkeyAnimDashAttack_joint6[168] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1795, -99, -1670, 402, -2118, 447,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -916, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1696, -360, -1671, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1074, -267, -1902, -186,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1617, 506,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -855, 45, -2044, -315,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -767, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2533, -533,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2175, 354, -3111, -370,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2407, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3273, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3361, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2557, -221, -3512, 222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1963, -154, -2916, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2247, 171, -3195, -165,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 2353, 14, -3275, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -736, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -304, 70,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2365, 9, -3278, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -3172, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 2662, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2680, 22, -235, 64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -196, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 3117, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3117, 54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -3449, -8,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -197, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), -85, 1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3120, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 3153, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3456, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -3687, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3154, 0, -84, 0, -3690, -2,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTDonkeyAnimDashAttack_joint8[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -4, -1110,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1114, -570,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1144, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -982, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -999, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -1221, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1227, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -1117, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1056, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -274, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -291, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -409, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTDonkeyAnimDashAttack_joint9[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 151, -67, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 70), 174, -67, -44,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimDashAttack_joint11[38] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -269, 151, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -3, 2, 402, 0, -35, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -135, -3, 120, -8, 20, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -135, -10, 120, -1, 20, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -398, 0, 70, 0, 29, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTDonkeyAnimDashAttack_joint12[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -381, 11, -3, 30, -959, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), -70, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -2, 32, -963, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 29, 31, -923, 40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -308, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 17), 350, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 370, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), 433, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -45, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), 120, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -305, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 36), -329, -27,
	ftAnimBlock(0, 24),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 434, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 175, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 117, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -115, -1,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -357, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -475, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -115, 0, 172, -3, -479, -4,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTDonkeyAnimDashAttack_joint13[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -4, -279,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -284, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -325, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -696, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -667, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -458, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -477, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 32), -601, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -576, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -423, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimDashAttack_joint14[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 357, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 340, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 269, 156,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 57), 98, 0, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTDonkeyAnimDashAttack_joint15[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 70),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTDonkeyAnimDashAttack_joint17[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -742, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -330, 8, -287, 10, -136, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -431, -5, 369, 5, 241, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), -529, 0, -92, -10, -43, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -404, 0, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTDonkeyAnimDashAttack_joint18[222] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1973, -41, -1118, -93, 938, 233,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1200, 67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1167, -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1960, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1964, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1515, 210,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1135, 46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1252, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 942, -223,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 468, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1303, 175,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1012, -19,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1223, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -983, -38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1049, -73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1386, -288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 564, 156,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1429, 152,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1737, -312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2011, -141, -1062, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1027, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2021, -5, 1441, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1914, 119, 1290, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1783, 94, 1116, -135,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1884, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1082, 31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1036, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1178, 4,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1914, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1716, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1112, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1040, -147,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1158, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -1049, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 858, -183,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 683, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1550, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1480, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1507, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -1671, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 710, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 1255, 22,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1045, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1210, -10,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1272, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1669, 2, -1215, -5, 1279, 6,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTDonkeyAnimDashAttack_joint20[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1012, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1023, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1081, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 352, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 210, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 174, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 351, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 579, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 536, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 899, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 906, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 899, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 924, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1026, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1026, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTDonkeyAnimDashAttack_joint22[182] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 340, 65, -79, -87, -97, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -312, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 405, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 86, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 56, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -31, -91,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -114, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -315, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 94, 23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -35, 31,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -259, -130,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -54, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 170, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 119, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), 43, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 219, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 188, -105,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -49, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -152, 23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 39, -115,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -39, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -57, 79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -48, 0,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 83, -5,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -48, 0, 45, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 35, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 95, -1,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 76, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -365, -7,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 47, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -109, -7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 90, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 19, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -113, -4, 14, -4, -369, -3,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTDonkeyAnimDashAttack_joint23[258] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 84, -394, 300, -71, 3045, -179,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2617, -153,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 359, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -310, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -311, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -178, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2559, -50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 2267, -4,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 377, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 291, -35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -193, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -537, -16,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2268, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 2525, -15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 265, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 603, 52,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -555, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -535, 53,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2508, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2833, 260,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -466, 101, 654, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 459, 147,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 615, -15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3125, 230,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 3432, 109,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 555, 72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 645, 88,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 622, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 887, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 799, -175, 3617, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 295, -204, 3151, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 390, 45, 3271, 59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 3140, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 249, -35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 892, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 817, 8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3095, -43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 3025, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 214, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 185, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 282, 374, 3132, 387,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 934, 573, 3799, 592,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1429, 294, 845, 37, 4316, 317,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1362, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1555, 23, 4489, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1569, 12, 4522, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 1709, 5, 4529, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1376, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1389, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1712, 3, 1391, 1, 4529, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTDonkeyAnimDashAttack_joint25[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 673, 263,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 937, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 973, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 976, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 969, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 552, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 524, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 831, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 835, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 850, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 891, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 997, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 994, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTDonkeyAnimDashAttack_joint26[178] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1585, 570, -1339, -236, 1840, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2155, 63, -1576, -247, 1785, -238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1711, -260, -1834, -87, 1364, -216,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1571, -55, -1666, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1353, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1354, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 1407, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1524, -39, -1592, 67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1406, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -1356, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1346, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1598, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1435, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 1964, 8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1405, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 1222, -15,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1591, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1354, -7,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1972, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 2185, 40,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1198, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1099, 8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2215, 20, -1361, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1529, -45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 1820, -53,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1107, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 1131, 26,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1573, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1710, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1769, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1619, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1158, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1216, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1616, -2, -1712, -2, 1221, 5,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
