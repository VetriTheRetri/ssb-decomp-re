/* AnimJoint data for relocData file 742 (FTFoxAnimHeavyItemPickup) */
/* 2752 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimHeavyItemPickup_joint1[48];
extern u16 dFTFoxAnimHeavyItemPickup_joint2[44];
extern u16 dFTFoxAnimHeavyItemPickup_joint4[36];
extern u16 dFTFoxAnimHeavyItemPickup_joint5[134];
extern u16 dFTFoxAnimHeavyItemPickup_joint6[54];
extern u16 dFTFoxAnimHeavyItemPickup_joint7[10];
extern u16 dFTFoxAnimHeavyItemPickup_joint8[46];
extern u16 dFTFoxAnimHeavyItemPickup_joint10[10];
extern u16 dFTFoxAnimHeavyItemPickup_joint11[146];
extern u16 dFTFoxAnimHeavyItemPickup_joint12[54];
extern u16 dFTFoxAnimHeavyItemPickup_joint13[10];
extern u16 dFTFoxAnimHeavyItemPickup_joint15[10];
extern u16 dFTFoxAnimHeavyItemPickup_joint16[124];
extern u16 dFTFoxAnimHeavyItemPickup_joint18[64];
extern u16 dFTFoxAnimHeavyItemPickup_joint20[106];
extern u16 dFTFoxAnimHeavyItemPickup_joint21[114];
extern u16 dFTFoxAnimHeavyItemPickup_joint23[72];
extern u16 dFTFoxAnimHeavyItemPickup_joint24[104];
extern u16 dFTFoxAnimHeavyItemPickup_joint25[24];
extern u16 dFTFoxAnimHeavyItemPickup_joint26[28];
extern u16 dFTFoxAnimHeavyItemPickup_joint27[84];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTFoxAnimHeavyItemPickup_joints[] = {
	(u32)dFTFoxAnimHeavyItemPickup_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimHeavyItemPickup_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimHeavyItemPickup_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimHeavyItemPickup_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimHeavyItemPickup_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimHeavyItemPickup_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimHeavyItemPickup_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimHeavyItemPickup_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimHeavyItemPickup_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimHeavyItemPickup_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimHeavyItemPickup_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimHeavyItemPickup_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimHeavyItemPickup_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimHeavyItemPickup_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimHeavyItemPickup_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimHeavyItemPickup_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimHeavyItemPickup_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimHeavyItemPickup_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimHeavyItemPickup_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimHeavyItemPickup_joint26, /* [25] joint 26 */
	(u32)dFTFoxAnimHeavyItemPickup_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTFoxAnimHeavyItemPickup_joint1[48] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 48, 912, -20,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, -32, 540, -208, 240, -146,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 600, 119, -240, -319,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 8), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 28), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 720, 240, -240, 160,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 960, -72, 0, 96,
	ftAnimSetValRateT(FT_ANIM_TRAY, 12), 540, -119,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 12), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 720, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimHeavyItemPickup_joint2[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -141, -338, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 178, 34, 0, 28, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 268, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 28), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), -89, -11, 0, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), 0, 5, -268, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 0, -268,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimHeavyItemPickup_joint4[36] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 156, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 357, 18, 0, -13, 0, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 536, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -178, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 268, 27,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 268,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimHeavyItemPickup_joint5[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -109, 198, -165, 0, -2958, -471,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 3, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 189, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -3710, -256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3943, -188,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -4460, -90,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 7, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 13, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4545, -74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -4250, 147,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 146, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 172, 36,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4100, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -3829, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 14, -19, -3851, 66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -107, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3696, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3852, -227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4151, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4175, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -5104, -45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 217, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 790, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 821, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 849, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5134, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -5117, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 845, -3, -112, -4, -5107, 9,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimHeavyItemPickup_joint6[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, 510,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -48, 275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -437, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -389, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimHeavyItemPickup_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimHeavyItemPickup_joint8[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -113, 136, -72,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -536, -57, 0, -11, 0, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -804, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -357, 48, 0, 9, 0, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 357, 39, 223, 13, -134, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 268, 223, -134,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimHeavyItemPickup_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimHeavyItemPickup_joint11[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1741, -133, 1336, 31, -1271, -236,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1298, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1367, 102, -1508, -411,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1541, 114, -2095, -410,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2478, -121,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1587, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1240, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1345, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2571, -93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2911, 104,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1589, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1545, -18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1415, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1545, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2785, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -2215, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2242, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2079, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1519, -32, 1547, 26, -2243, -231,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1146, -98,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1568, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2543, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2562, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -3438, 11,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1050, -86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 842, 5,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1565, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1559, -4, -3421, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 846, 4, 1556, -3, -3412, 9,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimHeavyItemPickup_joint12[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -594, 95,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -499, 293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -448, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 188,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimHeavyItemPickup_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 272, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimHeavyItemPickup_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimHeavyItemPickup_joint16[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -376, 19, -207, -56, 28, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -262, 150, -305, 44, -380, -303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -56, 150, -175, 129, -708, -260,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -26, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 56, -1, -1062, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 55, -2, -1025, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -16, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -783, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -777, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -93, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -24, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -233, -40,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -33, -8, -101, -71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 47, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -406, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -480, -72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -647, 102,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -273, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -351, 16,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 25, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -113, -48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -543, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -142, -28, -337, 13, -496, 47,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimHeavyItemPickup_joint18[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 328, 193,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1058, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1025, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 582, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 394, -288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 270, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 427, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 890, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 868, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 681, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 625, -55,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimHeavyItemPickup_joint20[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 19, 96, 39, -50, -93,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -7, -29, -253, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 178, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 67, -100,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -58, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -16, -6, -165, 93,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), 3, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 360, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -61, 1, 593, 131,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 20, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 624, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 606, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 323, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 286, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 65, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 18, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -18, 19,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 26, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 25, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 12, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 15, 2, 24, 0, -2, 16,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimHeavyItemPickup_joint21[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 347, 1, 122, 62, 198, -56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 246, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 538, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 145, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 164, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -506, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 252, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 149, -59,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 526, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 557, -12,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -458, 59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 305, 21,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 81, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -48, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -43, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 66, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 323, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -113, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 544, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 256, 22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 130, 56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 231, -12,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -90, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 271, 15, 222, -8, -74, 15,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimHeavyItemPickup_joint23[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 290, 164,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 754, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 804, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1094, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1062, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 488, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 320, -244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 259, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 418, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1077, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1053, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 857, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 803, -53,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimHeavyItemPickup_joint24[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1563, 38, -1517, -33, -1818, -107,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -1286, -24, -1698, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -2243, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2286, -43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2272, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1323, -49, -1696, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1771, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -1654, 2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2226, 40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1848, 125,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1739, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), -1536, -8,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1681, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1669, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1650, 5, -1695, -87,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1628, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2010, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2079, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -2261, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2183, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1540, -4, -1624, 3, -2146, 36,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimHeavyItemPickup_joint25[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 219,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 34), 0, -3, 265, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 267, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -134,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 0, 268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTFoxAnimHeavyItemPickup_joint26[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -178, -122,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 11), 205, 5, 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 24), 10, -13, 1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -168, 78, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 402, 0,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTFoxAnimHeavyItemPickup_joint27[84] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -48, -12, 920,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 360, 488,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), 0, 0, 660,
	ftAnimSetValRateT(FT_ANIM_TRAX, 8), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 134, 720, 1020,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), 0, 0, 900, -607,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 4), 134, 600,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -89, -50, 0, 0, 1041, 840, 412, -660,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -268, -44, 0, 0, 1440, 287, 240, -152,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 6), -536, -44, 0, 0, 1400, -439,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 6), 221,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 6), 0, 0, 240, 14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 6), -804, 780,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -804, 0, 780, 240,
	ftAnimEnd(),
};
