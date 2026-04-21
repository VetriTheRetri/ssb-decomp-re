/* AnimJoint data for relocData file 1083 (FTSamusAnimAttackAirU) */
/* 2320 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimAttackAirU_joint1[68];
extern u16 dFTSamusAnimAttackAirU_joint2[26];
extern u16 dFTSamusAnimAttackAirU_joint4[58];
extern u16 dFTSamusAnimAttackAirU_joint5[130];
extern u16 dFTSamusAnimAttackAirU_joint6[60];
extern u16 dFTSamusAnimAttackAirU_joint7[64];
extern u16 dFTSamusAnimAttackAirU_joint8[16];
extern u16 dFTSamusAnimAttackAirU_joint11[22];
extern u16 dFTSamusAnimAttackAirU_joint12[152];
extern u16 dFTSamusAnimAttackAirU_joint14[60];
extern u16 dFTSamusAnimAttackAirU_joint15[98];
extern u16 dFTSamusAnimAttackAirU_joint17[58];
extern u16 dFTSamusAnimAttackAirU_joint19[82];
extern u16 dFTSamusAnimAttackAirU_joint20[90];
extern u16 dFTSamusAnimAttackAirU_joint22[52];
extern u16 dFTSamusAnimAttackAirU_joint23[78];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimAttackAirU_joints[] = {
	(u32)dFTSamusAnimAttackAirU_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimAttackAirU_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimAttackAirU_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimAttackAirU_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimAttackAirU_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimAttackAirU_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimAttackAirU_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimAttackAirU_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimAttackAirU_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimAttackAirU_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimAttackAirU_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimAttackAirU_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimAttackAirU_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimAttackAirU_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimAttackAirU_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTSamusAnimAttackAirU_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimAttackAirU_joint1[68] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -4, 1300, 0,
	ftAnimSetValT(FT_ANIM_TRAX, 4), -4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1251, -193, 0, 74, 0, 63,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1279, -106,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1186, -210,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1074, -264,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 950, -268,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -4, 853, -215,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -1158, 445, 383, -49, 837, -184,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), -1158, 445, 383, -49, 837, -184,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), -4, 1300, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimAttackAirU_joint2[26] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 40), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 6), 16,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 3), -3216,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 9), -6433,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 10), -8042,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 12), -9650,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTSamusAnimAttackAirU_joint4[58] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -21, 56,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 240, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 51, -51, 0, 34, 39, -71,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 419, 464, 357,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -38, -26, 4, 1, 3, -10,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -402, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 26), -38, 9, 4, -6, 3, 12,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 0, -402, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, -21, 56,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 240, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimAttackAirU_joint5[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1596, 77, -1588, 78, 1674, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1118, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1466, 6, 1574, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1496, 91, 1437, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1412, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1282, 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1000, 177, -1048, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -763, 116, -1585, -268, 1150, -127,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1159, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -766, -2, -1586, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1156, 71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -802, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1160, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 1427, 46,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1087, 63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1198, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -815, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1510, -36,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1473, 44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1672, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1247, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1534, -55,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1544, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1572, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1596, -24, -1588, -53, 1674, 1,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimAttackAirU_joint6[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1046, 265,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 40), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -440, 342,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -95, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -504, -378,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -852, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -839, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -839, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -973, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -977, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -884, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -899, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -1038, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1046, -8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimAttackAirU_joint7[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 536, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 40), 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 402, 23, 0, -8, 0, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 382, -13, -139, -6, 142, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 160, -19, -116, 0, 120, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 185, 25, -142, 7, 250, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 536, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimAttackAirU_joint8[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 40), 67, -17, -1474, 98, 60, -42,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimAttackAirU_joint11[22] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 40), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 5), -89,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 1), -178,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 19), -178,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 15), 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimAttackAirU_joint12[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -275, 129, 111, 46, -68, 255,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 225, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 192, 209, 665, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 421, 109, 841, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 410, 217, 328, 654, 776, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 856, 220, 1535, 604, 979, 98,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 970, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 852, -3, 1537, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1073, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 849, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 900, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 967, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1114, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 938, 76, 1177, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1054, 286, 962, -91, 1322, 317,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 982, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1512, 463, 1812, 492,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1980, 284, 2308, 310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2081, 28, 2432, 39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1814, -129,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1296, -59,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 967, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1406, 85,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1698, -99,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1523, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1251, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1288, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1332, 44, 1496, 90, 1540, 16,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimAttackAirU_joint14[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -985, -89,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 40), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1207, 208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -876, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -834, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -831, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -1125, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1157, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1087, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -979, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1082, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1097, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1016, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -985, 30,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimAttackAirU_joint15[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1576, -4, -1557, -10, 1042, -473,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1606, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -1620, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 568, -239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 562, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 805, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 835, 400,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1516, 45, 1607, 386,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1516, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 1607,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 1605, 1,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -1516,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), -1586, 3,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1608, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1385, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1328, -52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1043, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1619, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1565, 7,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1582, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1576, 6, -1557, 7, 1042, -1,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimAttackAirU_joint17[58] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1329, -31,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 40), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1104, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 917, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 778, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 757, -389,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -378,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 289, 221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 447, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1275, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1329, 53,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTSamusAnimAttackAirU_joint19[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1643, -18, -1630, 8, -1559, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), -1626, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1564, 30, -1663, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1587, 18, -1771, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1546, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1741, 298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1175, 282,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -1175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1175, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), -1347, -26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1546, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), 1633, 7,
	ftAnimBlock(0, 22),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1374, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1534, -25,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1640, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1643, 2, -1630, -3, -1559, -25,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTSamusAnimAttackAirU_joint20[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -7, 38, -5, -592, -316,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 0, -1, 9, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -944, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -775, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -578, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4, 109, 7, 92, -495, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 219, 111, 193, 93, -306, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 219, 0, 193, 0, -306, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), 65, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 18), 219, -12, -306, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 194, -23, -330, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 13), 7, -8, -574, -17,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 56, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 47, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -8, 38, -8, -592, -17,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimAttackAirU_joint22[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1100, 72,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 40), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1173, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 988, -217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 513, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 793, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 793, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 793, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 926, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 947, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1082, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1100, 18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimAttackAirU_joint23[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -70, 52, 64, -2, 59, -120,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -25, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -16, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -61, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -18, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -120, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 37, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 37, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 32), 57, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -25, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), -68, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -16, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 24), 59, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -70, -2, 64, 5, 59, 1,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
