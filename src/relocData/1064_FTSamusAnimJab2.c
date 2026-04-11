/* AnimJoint data for relocData file 1064 (FTSamusAnimJab2) */
/* 2416 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimJab2_joint1[44];
extern u16 dFTSamusAnimJab2_joint2[16];
extern u16 dFTSamusAnimJab2_joint4[114];
extern u16 dFTSamusAnimJab2_joint5[136];
extern u16 dFTSamusAnimJab2_joint6[72];
extern u16 dFTSamusAnimJab2_joint7[30];
extern u16 dFTSamusAnimJab2_joint8[10];
extern u16 dFTSamusAnimJab2_joint11[8];
extern u16 dFTSamusAnimJab2_joint12[140];
extern u16 dFTSamusAnimJab2_joint14[72];
extern u16 dFTSamusAnimJab2_joint15[116];
extern u16 dFTSamusAnimJab2_joint17[48];
extern u16 dFTSamusAnimJab2_joint19[98];
extern u16 dFTSamusAnimJab2_joint20[94];
extern u16 dFTSamusAnimJab2_joint22[164];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimJab2_joints[] = {
	(u32)dFTSamusAnimJab2_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimJab2_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimJab2_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimJab2_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimJab2_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimJab2_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimJab2_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimJab2_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimJab2_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimJab2_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimJab2_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimJab2_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimJab2_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimJab2_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimJab2_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF0226, /* [22] END */
};

/* Joint 1 */
u16 dFTSamusAnimJab2_joint1[44] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1355, 80,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 7), 0, 0, 1623, 469,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 938, -14,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), 933, -8,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 1077, 17,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 23), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 933, 4,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 21), 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 6), 1109, 82,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 835,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 14), 1600,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimJab2_joint2[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -227, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 30), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -486, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 20), 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimJab2_joint4[114] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -7, -160, 14, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 52, -24, -172, 57, 6, -39, -12, 146, 12, 14, 22, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -181, 154, 243, 184, -262, 138, 128, 151, 12, -72, -81, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 670, 547, 563, 129, 559, 455, 63, 204, -23, -293, 51, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1459, -18, 631, -16, 1104, -61, 205, 73, -97, 17, -68, -40,
	ftAnimSetValRateT(FT_ANIM_TRAY, 7), -4, 97,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), -235, 190,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 8), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 8), 0, -285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 562, -146, 466, -52, 193, -110,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -7, 0, 104, 0, -1, 0,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 1), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 0, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimJab2_joint5[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1596, -8, -1258, 6, 1827, 105,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1243, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1427, 86, 1957, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1368, -20, 1876, 69,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1576, 75, 2283, 72,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1240, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1202, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1316, -2, 2240, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1580, -389, 2053, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2094, -254, 2185, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1556, 143, 1759, -109,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1224, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1324, 24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1492, 43, 1694, -102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1108, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1308, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1295, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1719, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1188, 74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1325, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1326, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1135, 5,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1343, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1375, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1132, 2, -1722, -3, 1377, 1,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimJab2_joint6[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1312, 43,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -887, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -654, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -688, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1007, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1085, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -776, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -738, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -518, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -672, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -746, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -892, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -748, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -566, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -632, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -744, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimJab2_joint7[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -271, -160, 91,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -107, 33, -96, 4, 55, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 565, 47, -51, 5, 26, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 701, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimJab2_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimJab2_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTSamusAnimJab2_joint12[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1580, -175, 1670, -208, 1349, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1566, 363, 1178, -191, 1481, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2131, 278, 1079, -88, 1632, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1995, -79, 1035, -284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1001, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1078, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1963, -121, 1034, 71, 794, -291,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1486, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1221, 164, 453, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1364, -43, 590, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1134, -85, 751, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1524, -40, 1194, 33, 948, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1442, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1201, -4, 807, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1186, 158, 846, 45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1295, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1659, 115, 1519, 257,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1554, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1533, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1497, -28, 1494, 144,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), 1658, 15, 1406, -24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1523, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 1733, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1666, 8, 1737, 3, 1392, -13,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimJab2_joint14[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -599, -230,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -829, -271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1141, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -869, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -686, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -836, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -258, 249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -338, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -460, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -453, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -821, -266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1226, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1284, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1146, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1126, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -616, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimJab2_joint15[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -66, 20, -252, -10, -520, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -244, -98,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -344, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -485, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -371, 99,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -569, -362,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -336, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -147, 322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -413, -103,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -557, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 293, 283, -1036, -306,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 85, -84, -859, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -542, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -555, 44,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 81, 15, -851, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -802, 99,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 27, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -510, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -29, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -706, 87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -394, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -11, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 84, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 87, 3, -27, 1, -389, 4,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimJab2_joint17[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 815, 37,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 712, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 604, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 632, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 913, 248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1086, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1010, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 724, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 675, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 491, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimJab2_joint19[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -33, -2, 34, 2, -213, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 158, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -27, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -64, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -51, -93,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 158, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 6, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -126, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 5, -85,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -27, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -60, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -112, -102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -66, 15,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -63, -3, 0, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -75, -1, -26, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -53, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -45, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, 0, -28, -1, -41, 3,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimJab2_joint20[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -63, -8, 167, 7, -257, 75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 339, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -57, 53, 7, 241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 34, 37, 301, 146,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -190, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 273, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 268, -81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -55, -18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -350, -121,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -312, 20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -61, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -40, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 323, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 159, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -292, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 223, 6,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -47, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, 3, 160, 1, -49, -2,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimJab2_joint22[164] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 736, -71,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 439, -330,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 254, 257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 634, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 557, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 540, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 489, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 438, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, 4,
	ftAnimEnd(),
	0x0000, 0x200E, 0x008B, 0x000F, 0x00AA, 0x0017, 0xFEB3, 0x000A, 0x2803, 0x0005, 0x0077, 0xFFEC, 0x2805, 0x0007, 0x0049, 0xFFBE, 0x2009, 0x0002, 0xFF02, 0x0090, 0x2009, 0x0001, 0xFFDF, 0x0091, 0x2809, 0x0005, 0xFEF8, 0xFF7A, 0x0801, 0x0002, 0x2003, 0x0001, 0x004E, 0xFF9C, 0x2803, 0x0002, 0xFF86, 0x0034, 0x0801, 0x0001, 0x2005, 0x0001, 0x001B, 0x000D, 0x2805, 0x0003, 0x00DF, 0x0015, 0x200B, 0x0001, 0x0017, 0x009C, 0xFE7D, 0xFFB9, 0x280B, 0x0004, 0x013B, 0xFFE5, 0xFEC4, 0xFFF9, 0x0801, 0x0002, 0x2005, 0x0001, 0x00E5, 0x0004, 0x2805, 0x0011, 0x00C2, 0xFFFE, 0x0801, 0x0001, 0x200B, 0x0001, 0x011C, 0xFFE1, 0xFEB5, 0xFFEE, 0x200B, 0x000C, 0x0077, 0x0009, 0xFF33, 0xFFFF, 0x200B, 0x0001, 0x0080, 0x0008, 0xFF31, 0xFFFE, 0x200B, 0x0002, 0x008C, 0x0003, 0xFF2C, 0xFFFF, 0x200F, 0x0001, 0x008E, 0x0001, 0x00C1, 0xFFFF, 0xFF2B, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
