/* AnimJoint data for relocData file 1671 (FTNessAnimRunBrake) */
/* 3216 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimRunBrake_joint1[66];
extern u16 dFTNessAnimRunBrake_joint2[40];
extern u16 dFTNessAnimRunBrake_joint4[34];
extern u16 dFTNessAnimRunBrake_joint5[146];
extern u16 dFTNessAnimRunBrake_joint6[56];
extern u16 dFTNessAnimRunBrake_joint7[16];
extern u16 dFTNessAnimRunBrake_joint8[26];
extern u16 dFTNessAnimRunBrake_joint10[32];
extern u16 dFTNessAnimRunBrake_joint11[150];
extern u16 dFTNessAnimRunBrake_joint12[74];
extern u16 dFTNessAnimRunBrake_joint13[24];
extern u16 dFTNessAnimRunBrake_joint15[10];
extern u16 dFTNessAnimRunBrake_joint16[142];
extern u16 dFTNessAnimRunBrake_joint18[72];
extern u16 dFTNessAnimRunBrake_joint19[156];
extern u16 dFTNessAnimRunBrake_joint21[82];
extern u16 dFTNessAnimRunBrake_joint22[156];
extern u16 dFTNessAnimRunBrake_joint24[64];
extern u16 dFTNessAnimRunBrake_joint25[140];
extern u16 dFTNessAnimRunBrake_joint26[70];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTNessAnimRunBrake_joints[] = {
	(AObjEvent32 *)dFTNessAnimRunBrake_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimRunBrake_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimRunBrake_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTNessAnimRunBrake_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTNessAnimRunBrake_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimRunBrake_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNessAnimRunBrake_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNessAnimRunBrake_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTNessAnimRunBrake_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTNessAnimRunBrake_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimRunBrake_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimRunBrake_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTNessAnimRunBrake_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTNessAnimRunBrake_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTNessAnimRunBrake_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTNessAnimRunBrake_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTNessAnimRunBrake_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTNessAnimRunBrake_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTNessAnimRunBrake_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTNessAnimRunBrake_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimRunBrake_joint1[66] = {
	ftAnimSetValAfter(FT_ANIM_ROTX), 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), -357, 0, -16, 34,
	ftAnimSetValBlock(FT_ANIM_TRAY), 439,
	ftAnimSetValT(FT_ANIM_TRAY, 7), 552,
	ftAnimSetValRateT(FT_ANIM_TRAX, 7), 0, 11,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), -59, 1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), -60, -7,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 219,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 5), 755,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), -67, -6,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 5), 0,
	ftAnimSetValT(FT_ANIM_TRAX, 5), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 552, -151,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), -32, 10,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), -60, 3,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 537, 103, -28, -3,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 6), -16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimRunBrake_joint2[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -1, 8,
	ftAnimSetValRate(FT_ANIM_ROTX), 405, -5,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 37, 0, -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 178, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 88, -6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -360, -7, 8, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 28, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTNessAnimRunBrake_joint4[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -101, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -176, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 312, 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 408,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, 19, 0, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 312, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 0, 6,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimRunBrake_joint5[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 846, 49, -1174, 21, -1131, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1280, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 1048, 10, -1072, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1052, -13, -1060, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1033, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 932, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 845, -136, -1202, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 659, -213, -1062, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 418, -134, -1052, -65, -894, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 391, -19, -1164, -64, -969, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 380, 72, -1181, -31, -986, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -996, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 713, 155, -1191, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 848, 184, -964, 118,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1281, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -954, -7, -1202, -193,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1475, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -980, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1115, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1362, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1363, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1479, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1471, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1348, -70, -1149, -77, -1449, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1222, -75, -1270, -98, -1261, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1198, -24, -1347, -76, -1192, 69,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimRunBrake_joint6[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -315, -230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -461, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -405, 253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -322, -236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, -150,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimRunBrake_joint7[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 143, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), -804,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 11), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTNessAnimRunBrake_joint8[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 347,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -102, 0, -175, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 23), -10, 0, -32, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), -66, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), 364, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNessAnimRunBrake_joint10[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 150, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 23), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 12), 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, -8, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTNessAnimRunBrake_joint11[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 482, 46, 1117, -1, 381, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1091, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 627, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 633, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 779, 115,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1042, 323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1045, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1031, -21, 839, 365,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1510, 296, 1002, 28, 1358, 341,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1191, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1636, 88, 1521, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1687, 59, 1530, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1937, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1264, 62, 1564, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1363, -29, 1641, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1951, 40, 1290, -62, 1553, -56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1423, -83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1165, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2017, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1979, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1798, -178,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1325, -70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1266, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1549, -227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1343, -128, 1187, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1060, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1292, -25, 1390, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1264, -49, 1542, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1192, -71, 1038, -21, 1489, -52,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimRunBrake_joint12[74] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -325, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -427, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -416, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -418, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -411, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -379, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -107, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -429, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -540, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, -18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimRunBrake_joint13[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 66, 217,
	ftAnimSetValRate(FT_ANIM_ROTX), 557, -16,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 268, -20, 0, 0, 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 90, 54, 126,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimRunBrake_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 23),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimRunBrake_joint16[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 295, -61, -174, 48, -1059, -110,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 77, -256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -126, -82, -1169, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -338, -87, -891, 441,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -197, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -279, -189, -285, 347,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -301, -9, -197, 69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 89, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -299, 7, -125, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -34, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -59, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -8, 48, 276, 194,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 595, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 20, -28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 50, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -77, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 382, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 186, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -63, 35, -2, -22, 77, -120,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 32, -4, -243, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -23, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -15, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -13, -54, -182, -141, -444, -139,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -318, -59, -354, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -298, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -316, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -365, -47, -279, 36, -297, 56,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimRunBrake_joint18[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 498,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 505, 449,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 905, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 590, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 497, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 467, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 568, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 570, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 398, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 266, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 666, 362,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 990, 222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1110, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1080, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 919, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 552, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, -156,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimRunBrake_joint19[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -289, 220, -760, 112, 427, -455,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -69, 147, -648, 247, -27, -358,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4, 82, -265, 276, -289, -160,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -346, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -45, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 94, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 105, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 240, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -342, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -367, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -32, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -34, -58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 248, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 265, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -294, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 263, -47, -107, -41, -239, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -137, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 171, -76, -322, -56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -414, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 111, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 46, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -48, -47, -473, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -210, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -49, 65, -183, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 81, 94, -80, 80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 30, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -23, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 16, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -146, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -30, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, -24, 12, -4, 26, 57,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimRunBrake_joint21[82] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -902, -20, 85, 4, -102, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -736, 146, 132, 55, 21, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -477, 246, 248, 35, 18, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -28, 142, 233, -10, 26, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 202, 91, 198, -13, 1, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 586, 40, 140, -15, -1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 510, -89, 81, -13, -1, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -94, -127, 35, -10, 65, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -222, -28, 23, -9, 63, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -66, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTNessAnimRunBrake_joint22[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1165, -121, 1346, -113, -990, -145,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1227, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1286, -168, -1135, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1502, -155, -1348, -152,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1668, -70, -1538, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1303, 53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1469, 93,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1738, -63, -1638, -109,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1953, -311,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1780, 55,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1577, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1708, 81, -2378, -343,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1714, 25, 1740, 7, -2641, -110,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1771, -45, 1682, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2599, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2441, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1821, 48, 1612, -37, -2219, 136,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1588, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1675, 96, -2168, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1627, 21, -1873, 176,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1815, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1707, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1587, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1493, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1816, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1828, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1715, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1734, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1735, -1, 1472, -21, -1819, 8,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimRunBrake_joint24[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 377,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 385, 403,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 815, 331,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1210, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1257, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1361, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1199, -227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 558, -371,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 163, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 437, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 555, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 530, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 412, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimRunBrake_joint25[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1520, -1, 1772, -17, 1669, -213,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1496, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1509, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1456, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1155, -260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 935, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1536, 24, 870, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1459, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 918, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1041, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1537, 16, 1343, 247,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1497, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1537, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1443, 39, 1551, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1537, 110, 1608, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1663, 10, 1434, 15, 1723, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1558, -70, 1529, 53, 1486, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1522, -1, 1540, 1, 1397, -81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1633, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1563, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1324, -56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1360, 24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1640, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1670, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1387, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1414, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1684, 14, 1583, 19, 1406, -8,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimRunBrake_joint26[70] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 467, 13, 139, 2, -27, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 527, -47, 98, -6, -30, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 145, -249, 93, -2, -53, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -200, -61, 86, -6, -63, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -306, -88, 80, -6, -71, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -453, -53, 67, -7, -47, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -459, 41, 59, -5, -51, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 56, 0, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
