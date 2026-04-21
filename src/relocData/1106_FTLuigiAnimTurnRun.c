/* AnimJoint data for relocData file 1106 (FTLuigiAnimTurnRun) */
/* 3024 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLuigiAnimTurnRun_joint1[12];
extern u16 dFTLuigiAnimTurnRun_joint2[46];
extern u16 dFTLuigiAnimTurnRun_joint3[42];
extern u16 dFTLuigiAnimTurnRun_joint5[64];
extern u16 dFTLuigiAnimTurnRun_joint6[156];
extern u16 dFTLuigiAnimTurnRun_joint7[74];
extern u16 dFTLuigiAnimTurnRun_joint8[24];
extern u16 dFTLuigiAnimTurnRun_joint9[80];
extern u16 dFTLuigiAnimTurnRun_joint11[56];
extern u16 dFTLuigiAnimTurnRun_joint12[142];
extern u16 dFTLuigiAnimTurnRun_joint13[64];
extern u16 dFTLuigiAnimTurnRun_joint14[8];
extern u16 dFTLuigiAnimTurnRun_joint16[10];
extern u16 dFTLuigiAnimTurnRun_joint17[138];
extern u16 dFTLuigiAnimTurnRun_joint19[62];
extern u16 dFTLuigiAnimTurnRun_joint21[140];
extern u16 dFTLuigiAnimTurnRun_joint22[124];
extern u16 dFTLuigiAnimTurnRun_joint24[58];
extern u16 dFTLuigiAnimTurnRun_joint25[162];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTLuigiAnimTurnRun_joints[] = {
	(u32)dFTLuigiAnimTurnRun_joint1, /* [0] joint 1 */
	(u32)dFTLuigiAnimTurnRun_joint2, /* [1] joint 2 */
	(u32)dFTLuigiAnimTurnRun_joint3, /* [2] joint 3 */
	(u32)dFTLuigiAnimTurnRun_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTLuigiAnimTurnRun_joint6, /* [5] joint 6 */
	(u32)dFTLuigiAnimTurnRun_joint7, /* [6] joint 7 */
	(u32)dFTLuigiAnimTurnRun_joint8, /* [7] joint 8 */
	(u32)dFTLuigiAnimTurnRun_joint9, /* [8] joint 9 */
	(u32)dFTLuigiAnimTurnRun_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTLuigiAnimTurnRun_joint12, /* [11] joint 12 */
	(u32)dFTLuigiAnimTurnRun_joint13, /* [12] joint 13 */
	(u32)dFTLuigiAnimTurnRun_joint14, /* [13] joint 14 */
	(u32)dFTLuigiAnimTurnRun_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTLuigiAnimTurnRun_joint17, /* [16] joint 17 */
	(u32)dFTLuigiAnimTurnRun_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTLuigiAnimTurnRun_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTLuigiAnimTurnRun_joint22, /* [21] joint 22 */
	(u32)dFTLuigiAnimTurnRun_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTLuigiAnimTurnRun_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTLuigiAnimTurnRun_joint1[12] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 15), 792,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 13), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLuigiAnimTurnRun_joint2[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 755, -60, -67, 30,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 223, 8, 433, -171, 0, 8,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_TRAY), 0, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAY, 9), 223, 0, 433, 133,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 0, -4,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 354,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), -2, 38,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -228,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -1608, 755, 67,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTLuigiAnimTurnRun_joint3[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -124, 1, -113, -34, 41, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -71, 0, -790, -25, -95, -5,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -71, 0, -790, 0, -95, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -124, -113, 41,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTLuigiAnimTurnRun_joint5[64] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 407, -7, 234, 7, 78, 12,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 188, -8, 12, -8, 162, 3,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 188, -8, 12, -8, 162, 3,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 779, 17, -582, -7, -649, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 407, -36, 78, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -62, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 234, 77,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 407, 234, 78,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTLuigiAnimTurnRun_joint6[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1266, -29, -1305, -66, -1320, 69,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 1039, 9, -1068, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -1433, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1330, 107,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1059, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1067, 90, -1109, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1220, 53, -1280, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1174, -37, -1082, -17, -1228, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1116, 4, -1086, 13, -1152, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1134, -99, -1066, -86, -1172, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 917, -151, -1258, -114, -899, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 831, -24, -1294, -58, -797, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -909, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 699, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1375, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1371, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1578, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1539, 75, -893, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1294, 37, -572, 268,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 436, -262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 173, 10, -1353, 13, -272, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 457, 311, -1267, 255, -660, -341,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 796, 462, -843, 58, -955, -434,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1383, 234, -1149, -230, -1530, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1266, -117, -1305, -155, -1320, 210,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTLuigiAnimTurnRun_joint7[74] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -247, -126,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -393, 308,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -74, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -124, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -146, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -91, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -325, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 162,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -378, -438,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -876, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -518, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -800, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -247, 553,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTLuigiAnimTurnRun_joint8[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 0, 19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 0, -18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLuigiAnimTurnRun_joint9[80] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 188, 7, -68, 9, -36, 9,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 472, 10, 162, 8, 322, 13, 0, 0, 288, 0, 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 472, 0, 162, 0, 322, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 288, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 472, 0, 162, 0, 322, 0, 0, 0, 288, 0, 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), -1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 188, -68, 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 28, -34,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -36,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLuigiAnimTurnRun_joint11[56] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -18,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -190, -42, 97,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 0, 0, 54, 0, -17, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -221, 139, -209,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 54, -17,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -221, 139, -209,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 54, 0, -17, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -221, 139, -209,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 54, -18,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -190, -42, 97,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLuigiAnimTurnRun_joint12[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1389, 98, -2211, 55, -2168, 126,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 1511, 64, -1454, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -1864, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1893, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1795, 93,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1588, 70, -1436, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2102, 249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1346, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1272, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1270, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2411, -47, -1712, -73, -1436, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2008, -541, -1942, -76, -1398, -291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1328, -381, -1864, 148, -2019, -394,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2206, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1246, -41, -1645, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1244, 5, -1609, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 1387, 45, -1805, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2145, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1859, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1423, 154, -1812, -55, -1661, 193,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1923, -287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1915, -37, -1472, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1887, -118, -1296, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2152, -162, -1580, -435,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1389, -533, -2211, -59, -2168, -587,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTLuigiAnimTurnRun_joint13[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -489, -150,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -838, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -773, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -500, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -572, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -721, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -769, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, 208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -427, -486,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -982, -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -806, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -489, 317,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTLuigiAnimTurnRun_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 0, 0,
	ftAnimBlock(0, 28),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLuigiAnimTurnRun_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 28),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLuigiAnimTurnRun_joint17[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 178, -153, -103, -51, -384, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -213, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -428, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -38, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -15, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -4, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -167, 45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -156, -22,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -440, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -490, -50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 9, 94, -174, -117,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 239, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -391, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -456, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -244, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 214, -50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 130, 71,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -576, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 105, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 282, 130, -319, -82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -524, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 380, 64,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 196, 68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 37, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -482, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -437, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 451, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 409, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 178, -230, -103, -140, -384, 53,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTLuigiAnimTurnRun_joint19[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 112, -112,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 247, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 300, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 130, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 331, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 770, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 678, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 496, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 498, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 340, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 112, -227,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLuigiAnimTurnRun_joint21[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1374, 64, -1260, -120, 1877, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1398, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 2158, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1428, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1406, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1506, 57,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1417, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1276, 7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1444, 55, 2209, 51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1631, -244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2260, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2124, -84,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2043, -112,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1295, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1180, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1866, -400,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1940, -110, 1241, -348,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1715, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1258, 30, 1169, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1322, 230, 1482, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1636, 92,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1227, 185,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1666, 107, 1416, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1229, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1026, 85, 1472, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1055, -117, 1830, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1374, 144, -1260, -205, 1877, 46,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTLuigiAnimTurnRun_joint22[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -45, 19, 174, 45, 752, -71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -187, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -121, 60, 284, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -43, 78, 274, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -151, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 176, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -193, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -322, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -188, -35, -354, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -248, 66, -196, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 190, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 171, 75,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -102, 98, 0, 208,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 407, 98,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -183, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 287, 82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 163, -139,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 416, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 437, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -224, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 42, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1, -108, 98, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -54, -21, 148, 37, 622, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -45, 8, 174, 25, 752, 129,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTLuigiAnimTurnRun_joint24[58] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 284, 93,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 892, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 889, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 754, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 781, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 651, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 606, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -162,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, 259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 519, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 421, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 284, -136,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTLuigiAnimTurnRun_joint25[162] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1670, 11, 1479, 37, -1759, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1507, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1873, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1667, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1640, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1304, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1462, 176, 1480, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1544, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1658, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1663, 40, -1934, -51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1654, -84,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1713, 50,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1555, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1658, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1552, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1395, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1314, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1333, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1661, 24, -1677, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1879, 64, -1906, 88,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1555, 216,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1710, -169,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1888, -40, -1746, 145,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1518, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1615, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1498, -102, -1460, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1643, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1692, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1493, -15, -1750, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1488, -7, -1781, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1670, 27, 1479, -9, -1759, 22,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
