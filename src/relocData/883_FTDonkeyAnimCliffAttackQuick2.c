/* AnimJoint data for relocData file 883 (FTDonkeyAnimCliffAttackQuick2) */
/* 3456 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimCliffAttackQuick2_joint1[24];
extern u16 dFTDonkeyAnimCliffAttackQuick2_joint2[110];
extern u16 dFTDonkeyAnimCliffAttackQuick2_joint3[64];
extern u16 dFTDonkeyAnimCliffAttackQuick2_joint5[68];
extern u16 dFTDonkeyAnimCliffAttackQuick2_joint6[196];
extern u16 dFTDonkeyAnimCliffAttackQuick2_joint7[64];
extern u16 dFTDonkeyAnimCliffAttackQuick2_joint8[60];
extern u16 dFTDonkeyAnimCliffAttackQuick2_joint9[14];
extern u16 dFTDonkeyAnimCliffAttackQuick2_joint11[50];
extern u16 dFTDonkeyAnimCliffAttackQuick2_joint12[142];
extern u16 dFTDonkeyAnimCliffAttackQuick2_joint13[56];
extern u16 dFTDonkeyAnimCliffAttackQuick2_joint14[52];
extern u16 dFTDonkeyAnimCliffAttackQuick2_joint15[10];
extern u16 dFTDonkeyAnimCliffAttackQuick2_joint17[40];
extern u16 dFTDonkeyAnimCliffAttackQuick2_joint18[184];
extern u16 dFTDonkeyAnimCliffAttackQuick2_joint20[56];
extern u16 dFTDonkeyAnimCliffAttackQuick2_joint22[142];
extern u16 dFTDonkeyAnimCliffAttackQuick2_joint23[154];
extern u16 dFTDonkeyAnimCliffAttackQuick2_joint25[64];
extern u16 dFTDonkeyAnimCliffAttackQuick2_joint26[126];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTDonkeyAnimCliffAttackQuick2_joints[] = {
	(u32)dFTDonkeyAnimCliffAttackQuick2_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimCliffAttackQuick2_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimCliffAttackQuick2_joint3, /* [2] joint 3 */
	(u32)dFTDonkeyAnimCliffAttackQuick2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTDonkeyAnimCliffAttackQuick2_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimCliffAttackQuick2_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimCliffAttackQuick2_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimCliffAttackQuick2_joint9, /* [8] joint 9 */
	(u32)dFTDonkeyAnimCliffAttackQuick2_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTDonkeyAnimCliffAttackQuick2_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimCliffAttackQuick2_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimCliffAttackQuick2_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimCliffAttackQuick2_joint15, /* [14] joint 15 */
	(u32)dFTDonkeyAnimCliffAttackQuick2_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTDonkeyAnimCliffAttackQuick2_joint18, /* [17] joint 18 */
	(u32)dFTDonkeyAnimCliffAttackQuick2_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTDonkeyAnimCliffAttackQuick2_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTDonkeyAnimCliffAttackQuick2_joint23, /* [22] joint 23 */
	(u32)dFTDonkeyAnimCliffAttackQuick2_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTDonkeyAnimCliffAttackQuick2_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTDonkeyAnimCliffAttackQuick2_joint1[24] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 3759,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 0, 1920, 1664,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 0, 0, 3120, 344,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 38), 0, 4080,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimCliffAttackQuick2_joint2[110] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), -24, -34, 1032, -4306,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 855, 2821,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 1,
	ftAnimSetValRateT(FT_ANIM_TRAX, 16), -62, -10,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX, 1), 1,
	ftAnimSetValRateBlock(FT_ANIM_TRAZ), 117, 866,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 15), 1080, 55,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 1716,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 1560, 664,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 493,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 9), 679, -1929,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -1929,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 488, -924,
	ftAnimSetValRateT(FT_ANIM_TRAX, 14), -62, 5,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 26), 467, -307,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 412, 147,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 147,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 506, 380,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 380,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 634, 408,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 408,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 738, 17,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 17,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 686, -218,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -218,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 528, -71,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 12), -44, 12, 542, 170,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 12), -24, 2, -402, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 11), 1020, 92,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 92,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 1032, 24,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTDonkeyAnimCliffAttackQuick2_joint3[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 17, -6, -53, 147, -28, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 68, 3, 1432, 106, 32, 4,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 73, 0, 1616, 11, 42, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 73, 1616, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 73, 0, 1616, 10, 42, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 75, 0, 1742, 8, 23, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 75, -14, 1742, 0, 23, -1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -59,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -265, -41, -16,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimCliffAttackQuick2_joint5[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 414, 67, 15, 0, 7, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 716, 25, 16, 0, 13, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 716, -43, 16, 0, 13, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 384, -20, 18, 0, 18, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 558, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 18, 18,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 18, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 445, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 445,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 445, 13, 18, 0, 18, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 750, 24, 41,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimCliffAttackQuick2_joint6[196] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1602, 213, -1302, -86, 1720, -429,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 659, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1816, 164, -1389, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1932, 245, -1578, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2307, 134, -1173, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2200, -107, -1139, -1, 592, -68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 2032, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1371, 4, 257, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1352, 26, 283, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 245, -120,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), -1276, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2036, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2278, -30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 92, -128,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 92, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2229, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 2205, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 92, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 18, -13,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2205, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 2205, -72,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 9, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 248, 208,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1265, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1342, -120,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2095, -149,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1740, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 509, 245,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1309, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1485, -97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1543, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1697, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1544, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1547, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1526, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1275, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1154, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1545, 1, -1523, 2, 1135, -19,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimCliffAttackQuick2_joint7[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -940, 351,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -589, 470,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -535, -309,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -618, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -503, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -663, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -979, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -979, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -913, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -915, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1145, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1063, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -451, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -409, 41,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimCliffAttackQuick2_joint8[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -145, -23, -63, 2, -98, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -588, -37, -140, -6, 164, 22,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -588, -124, -140, -15, 164, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1549, -124, -261, -15, 447, 36,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1549, -261, 447,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -1549, -261, 447,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -1549, 66, -261, 11, 447, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTDonkeyAnimCliffAttackQuick2_joint9[14] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 393, 144, 74,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 54), 174, -67, -44,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1,
	ftAnimBlock(0, 53),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimCliffAttackQuick2_joint11[50] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -724, -183, 91,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -848, 121, 692,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1,
	ftAnimBlock(0, 7),
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -848, 121, 692,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -846, 4, 702,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -848, 121, 692,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -848, 121, 692,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -846, 4, 702,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -846, 4, 702,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -398, 70, 29,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTDonkeyAnimCliffAttackQuick2_joint12[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1728, 912, 996, -19, 1985, 845,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1059, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2641, 555, 2831, 476,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2839, 176, 2938, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2993, -4, 995, -157, 2950, -234,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 490, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2829, 68, 2470, -250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3129, 153, 2449, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3137, -5, 366, -94, 2301, -127,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 456, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 3198, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 2313, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2312, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 2226, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 451, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 457, -4,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3198, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 3325, 41,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2209, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 2945, 4,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 448, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 183, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3361, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 3111, -15,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2939, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 2756, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3101, -9, 172, -10, 2738, -18,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTDonkeyAnimCliffAttackQuick2_joint13[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1130, 47,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -677, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -596, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -341, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -377, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -350, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -350, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -273, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -257, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -731, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -727, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -446, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -418, 28,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimCliffAttackQuick2_joint14[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 893, 114, 446, -5, 178, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1441, -36, 112, -23, 154, -37,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 607, -108, 257, 18, -116, -35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 607, 257, -116,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 607, 257, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 607, -22, 257, -11, -116, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 98, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTDonkeyAnimCliffAttackQuick2_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -1340, 2502, 120, 120, 120,
	ftAnimBlock(0, 53),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimCliffAttackQuick2_joint17[40] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -404, -140,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1387, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1445, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), -647, 28, 0, 7, 0, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -460, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 252, 217,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -404, 0, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTDonkeyAnimCliffAttackQuick2_joint18[184] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 373, -58, -608, 89, 1857, 241,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -2, -262, -604, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 2373, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2309, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2504, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -367, -283, -607, 64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -307, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -480, 42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2488, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 2240, 89,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -287, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -337, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -439, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -679, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -852, -121, 2334, 67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2116, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -800, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -547, 196,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -348, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -329, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -291, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2112, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 2047, -30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -351, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -328, 42,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -293, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -433, 54,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -275, 64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 147, -64,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2018, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2399, 150,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -386, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -364, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2552, 149,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2810, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 73, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 9, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -22, -31, -359, 5, 2864, 53,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTDonkeyAnimCliffAttackQuick2_joint20[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1120, -160,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 624, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 625, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 357, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 516, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 509, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 591, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 669, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1056, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1074, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1051, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1040, -11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTDonkeyAnimCliffAttackQuick2_joint22[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 263, -247, 17, 12, 90, 78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 811, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), 151, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -131, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 99, 261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 557, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 618, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 514, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 836, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 812, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 651, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 741, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 553, -148,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 467, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 811, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 764, -10,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 485, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 529, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 157, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 287, 29,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 750, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 157, -185,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 523, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 149, -166,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 315, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 34, -17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -34, -148, -39, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -142, 17, -365, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -128, 13, 24, -10, -376, -11,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTDonkeyAnimCliffAttackQuick2_joint23[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1848, 125, -1864, -90, 371, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1036, 51, 889, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -1889, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1795, 95,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1585, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -995, 34, 921, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 745, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -728, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1625, -54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1777, 15,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 746, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 485, -116,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -719, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1224, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1760, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1996, 23,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1402, -154, 375, -90,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 245, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1697, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1965, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -2052, -12,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 223, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 451, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1725, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1760, 87,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2059, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1855, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 661, 206,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1333, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1667, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1476, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1472, 4, -1847, 8, 1349, 16,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTDonkeyAnimCliffAttackQuick2_joint25[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1161, -61,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 220, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 276, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 325, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 297, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 344, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 899, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 907, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1020, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1086, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1098, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1045, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 967, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 952, -15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTDonkeyAnimCliffAttackQuick2_joint26[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1552, -82, 1736, -3, -1253, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -921, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 1676, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 1105, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1082, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 992, -8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -930, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -1119, -50,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 994, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 1085, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1155, 71, 1671, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1417, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 1526, -9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1170, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -1502, -74,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1428, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 1278, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1212, -54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1352, 124,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1580, -77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1986, -8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1482, 112,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1601, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1518, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 1503, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1594, -6, 1503, 0, -1991, -5,
	ftAnimEnd(),
};
