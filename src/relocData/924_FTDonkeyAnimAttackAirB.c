/* AnimJoint data for relocData file 924 (FTDonkeyAnimAttackAirB) */
/* 2624 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimAttackAirB_joint1[38];
extern u16 dFTDonkeyAnimAttackAirB_joint2[38];
extern u16 dFTDonkeyAnimAttackAirB_joint4[64];
extern u16 dFTDonkeyAnimAttackAirB_joint5[178];
extern u16 dFTDonkeyAnimAttackAirB_joint6[64];
extern u16 dFTDonkeyAnimAttackAirB_joint7[12];
extern u16 dFTDonkeyAnimAttackAirB_joint8[8];
extern u16 dFTDonkeyAnimAttackAirB_joint10[30];
extern u16 dFTDonkeyAnimAttackAirB_joint11[204];
extern u16 dFTDonkeyAnimAttackAirB_joint12[64];
extern u16 dFTDonkeyAnimAttackAirB_joint13[18];
extern u16 dFTDonkeyAnimAttackAirB_joint14[8];
extern u16 dFTDonkeyAnimAttackAirB_joint16[26];
extern u16 dFTDonkeyAnimAttackAirB_joint17[120];
extern u16 dFTDonkeyAnimAttackAirB_joint19[48];
extern u16 dFTDonkeyAnimAttackAirB_joint21[106];
extern u16 dFTDonkeyAnimAttackAirB_joint22[122];
extern u16 dFTDonkeyAnimAttackAirB_joint24[48];
extern u16 dFTDonkeyAnimAttackAirB_joint25[66];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTDonkeyAnimAttackAirB_joints[] = {
	(AObjEvent32 *)dFTDonkeyAnimAttackAirB_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTDonkeyAnimAttackAirB_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTDonkeyAnimAttackAirB_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTDonkeyAnimAttackAirB_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTDonkeyAnimAttackAirB_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTDonkeyAnimAttackAirB_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTDonkeyAnimAttackAirB_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTDonkeyAnimAttackAirB_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTDonkeyAnimAttackAirB_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTDonkeyAnimAttackAirB_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTDonkeyAnimAttackAirB_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTDonkeyAnimAttackAirB_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTDonkeyAnimAttackAirB_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTDonkeyAnimAttackAirB_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTDonkeyAnimAttackAirB_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTDonkeyAnimAttackAirB_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTDonkeyAnimAttackAirB_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTDonkeyAnimAttackAirB_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTDonkeyAnimAttackAirB_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimAttackAirB_joint1[38] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 949, -319,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 30,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 949, -319,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 32), 949, 51, -319, 119,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 1189, 1, 234, 568,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 950, -439, 390, -217,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 640, -1, -37, -568,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 949, -319,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimAttackAirB_joint2[38] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -257, -28, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 270, 125, -169, -14, 66, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 746, 50, -141, 0, 66, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 32), 746, 0, -141, 2, 66, 1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 2959, -28, 131,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimAttackAirB_joint4[64] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 791, 73, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 783, -92, 55, 68, -127, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 50, -73, 617, 56, -520, -39,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 189, 618, -520,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 50, 0, 617, 0, -520, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 14, -10, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 443, 29, 429, -27, -368, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 491, 23, 206, -23, -186, 19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 791, 73, -78,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimAttackAirB_joint5[178] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1584, 15, -1225, -23, -1758, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1484, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1818, 122, -2000, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1922, 69, -2155, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1956, 4, -1561, 5, -2258, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1931, 290, -1472, 283, -2355, -502,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3081, 308,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -994, 197, -3263, -778,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1078, -44, -3913, -370,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3153, 70, -1083, -6, -4003, -86,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), -1238, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), 3307, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4085, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -4537, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1209, 28, -4504, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -4005, 90,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1030, 3,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3231, -75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3081, -121,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3913, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2913, -461, -3697, 550,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2157, -492, -1071, -194, -2811, 657,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2258, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1927, -106, -1418, -232,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1956, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1537, -71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1411, 34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1951, -8, -2227, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 13), 1585, -3, -1760, 3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1378, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -1228, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1584, -1, -1225, 3, -1758, 1,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimAttackAirB_joint6[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -727, -51,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -852, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -833, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1120, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1063, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -1047, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1046, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -1056, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1063, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1042, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -911, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -875, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -875, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -733, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -727, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimAttackAirB_joint7[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -825,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -308, 165,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 40), -1419,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), -825,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTDonkeyAnimAttackAirB_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 393, 144, 74,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTDonkeyAnimAttackAirB_joint10[30] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -452, -206, 75,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -270, -196, 73,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -624, -4, 2,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 32), -624, -4, 2,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -234, -72, 26,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -452, -206, 75,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimAttackAirB_joint11[204] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1332, -32, 1223, 14, 1599, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1805, -158, 1143, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1406, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1572, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 895, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1996, -221, 928, -271,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 525, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2249, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2139, 300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1648, 374, 890, 302,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1512, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1391, 220, 899, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -979, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1292, 6,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1523, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 1496, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -977, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -990, -12,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1297, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 927, -33,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1007, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1648, -296,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1465, -42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 890, -257,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 899, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1207, 153,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1979, -273, 622, -185,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2169, 124,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1033, 90,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1356, 147,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1264, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1996, 136,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1607, 58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1108, 65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1564, 25,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1546, 60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1335, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1250, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1225, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1583, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1598, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1332, 3, 1223, -2, 1599, 1,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimAttackAirB_joint12[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -826, -64,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -945, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -873, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1118, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1126, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -1122, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1130, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1128, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1100, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -888, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -914, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -888, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -856, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -834, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -826, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimAttackAirB_joint13[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 893,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 1186, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 33), 1221, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), 893,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimAttackAirB_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTDonkeyAnimAttackAirB_joint16[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 268, 714, 1072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -725, -16, -24, -27, -5, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 27), -343, 19, -295, 14, -239, 21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 268, 714, 1072,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimAttackAirB_joint17[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -278, -5, -14, -15, -196, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -249, 53, -132, 51, -405, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -203, 28, -75, 42, -184, 180,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -42, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -177, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 22, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 37, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), 81, -14,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -42, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), -104, -16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -176, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -156, -3,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 66, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -502, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -165, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -334, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -127, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -16, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -496, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -201, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -333, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -279, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -278, 0, -14, 1, -196, 4,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimAttackAirB_joint19[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 651, 40,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 902, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 742, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 528, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 516, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 646, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 667, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 961, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 932, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 656, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 651, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimAttackAirB_joint21[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -4, 12, 0, 6, 105, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 13, -22, -20, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -2, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -113, -81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -203, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2, -9, 1, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 29), -22, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 32), -15, 5,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -210, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), -304, 2,
	ftAnimBlock(0, 23),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -24, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 18, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -301, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 96, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -7, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 1, -1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 101, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -2, -3,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 35, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 103, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4, -1, 0, 0, 105, 1,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimAttackAirB_joint22[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -160, -5, 189, -8, -727, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 7, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 184, 32, -700, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 207, 6, -428, 217,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -224, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 32), 234, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 69, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 97, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -214, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), -225, -10,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 97, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 56, -18,
	ftAnimBlock(0, 20),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 236, 2, -237, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -887, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 139, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 25, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -157, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -901, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -731, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -161, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -161, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 143, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 188, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -160, 0, 189, 1, -727, 3,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimAttackAirB_joint24[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1071, 13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1098, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 960, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 481, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 471, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), 826, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 845, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1103, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1098, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 1072, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1071, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTDonkeyAnimAttackAirB_joint25[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1678, 4, 1787, 1, -1480, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -1584, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 59), 1787, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -1685, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1690, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), -1713, 13,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1587, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), -1697, -5,
	ftAnimBlock(0, 21),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1691, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -1481, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1699, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 17), -1677, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1678, 0, 1787, 0, -1480, 0,
	ftAnimEnd(),
	0x0000, 0x0000,
};
