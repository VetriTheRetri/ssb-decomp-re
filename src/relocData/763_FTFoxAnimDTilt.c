/* AnimJoint data for relocData file 763 (FTFoxAnimDTilt) */
/* 3152 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimDTilt_joint1[30];
extern u16 dFTFoxAnimDTilt_joint2[36];
extern u16 dFTFoxAnimDTilt_joint4[56];
extern u16 dFTFoxAnimDTilt_joint5[192];
extern u16 dFTFoxAnimDTilt_joint6[64];
extern u16 dFTFoxAnimDTilt_joint7[10];
extern u16 dFTFoxAnimDTilt_joint8[136];
extern u16 dFTFoxAnimDTilt_joint10[10];
extern u16 dFTFoxAnimDTilt_joint11[180];
extern u16 dFTFoxAnimDTilt_joint12[80];
extern u16 dFTFoxAnimDTilt_joint13[40];
extern u16 dFTFoxAnimDTilt_joint15[8];
extern u16 dFTFoxAnimDTilt_joint16[142];
extern u16 dFTFoxAnimDTilt_joint18[40];
extern u16 dFTFoxAnimDTilt_joint20[128];
extern u16 dFTFoxAnimDTilt_joint21[90];
extern u16 dFTFoxAnimDTilt_joint23[32];
extern u16 dFTFoxAnimDTilt_joint24[114];
extern u16 dFTFoxAnimDTilt_joint25[136];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimDTilt_joints[] = {
	(u32)dFTFoxAnimDTilt_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimDTilt_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimDTilt_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimDTilt_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimDTilt_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimDTilt_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimDTilt_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimDTilt_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimDTilt_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimDTilt_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimDTilt_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimDTilt_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimDTilt_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimDTilt_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimDTilt_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimDTilt_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimDTilt_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimDTilt_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimDTilt_joint25, /* [24] joint 25 */
	0xFFFF02F8, /* [25] END */
};

/* Joint 1 */
u16 dFTFoxAnimDTilt_joint1[30] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -22, 483, 58,
	ftAnimSetValRateT(FT_ANIM_TRAX, 2), -22, -81,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 483, 58,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 480, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 0, 480, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -22, 483, 58,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimDTilt_joint2[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -267, 101, 159,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -151, 38, 275, -244, 42, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1608, -131,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 23), -3115,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -267, 159,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimDTilt_joint4[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 792, 186, 227,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 790, -100, 355, -103, 252, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 89, -37, -536, -63, 89, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 268, 16, -536, 24, 89, -2,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 330, -163, 46,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 27, 63, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 538, 57, 103, 43, 124, 22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 792, 186, 227,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimDTilt_joint5[192] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1429, -298, -1450, 148, -1461, 255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1131, -174, -1301, 115, -1206, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1080, 645, -1219, -391, -1286, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2421, 561, -2085, -107, -1295, -552,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2203, -73, -1434, 428, -2391, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2275, -59, -1227, -240, -1411, 452,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2083, -117, -1916, 54, -1487, -332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2040, -308, -1117, 425, -2077, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1467, -352, -1065, -75, -1413, 505,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1116, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1335, 101, -1269, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1671, 326, -1308, -120,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1767, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1989, 175, -1468, -332,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2241, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2021, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1852, -213,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1693, 141,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1139, 83,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2143, 132,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1304, 88,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1576, -264, -1088, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1184, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1081, 44,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1253, 40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1453, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1175, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1252, -115,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1132, 71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1356, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1383, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1443, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1429, 72, -1450, -7, -1461, -7,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimDTilt_joint6[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -657, -138,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -796, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -306, 394,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -515, -379,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -830, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -773, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1240, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1048, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -410, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -446, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -412, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -662, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -657, 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimDTilt_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimDTilt_joint8[136] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -283, -418, 188,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -459, 168, -429, -42, 445, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 893, 152, -714, -26, -714, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 455, -297, -586, 90, -334, 180,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -84, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 299, -125, -230, 87,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -182, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 29, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 61, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 54, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -49, 5,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -182, -49, 54,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3, -4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -206, -18, -84, -48, 60, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -220, -7, -146, -66, 65, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -221, 5, -218, -67, 76, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -209, 6, -282, -59, 86, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -208, -11, -336, -49, 100, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -233, -28, -380, -36, 132, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -266, -24, -408, -18, 170, 28,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -283, -418, 188,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTFoxAnimDTilt_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimDTilt_joint11[180] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -106, -95, 501, 31, -523, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -201, -291, 533, -196, -539, -293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -689, -35, 109, -429, -1109, 210,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 300, 322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -325, 173, -118, 612,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 457, -46, 115, -202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 372, 7, -417, -326, -523, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 314, 191, -195, 254, 363, 546,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 232, -135, 256, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 755, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 586, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 561, 19, 2, -203, 222, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -131, 113,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 683, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 386, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -103, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 52, 180,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 606, 43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 652, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 194, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 31, -146, -251, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -98, -62, -360, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -93, -84, -323, -64,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -560, -162, -789, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 643, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 428, 22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -593, 19, -823, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -185, 135, -556, 72,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 480, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 500, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -100, 84, 497, -3, -521, 35,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimDTilt_joint12[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -571, -73,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -645, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -250, 318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -554, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -347,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -702, -420,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -849, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1192, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -996, 235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -537, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -512, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -576, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -569, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -867, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -852, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -602, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -571, 31,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimDTilt_joint13[40] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 301, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 19), 1, -11,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTFoxAnimDTilt_joint15[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, -804, 1608, 60,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimDTilt_joint16[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1424, -66, 1589, 10, 1257, -85,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1687, -12, 1119, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1372, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1566, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1336, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1639, -5, 1261, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 897, -80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1735, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1583, 233,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1814, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 928, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 831, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1749, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1890, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1766, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1645, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1595, -64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1456, 40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 834, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 971, 93,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1894, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1647, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1505, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1484, -37,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1066, 87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1244, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1453, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1426, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1606, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1424, -1, 1589, -16, 1257, 12,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimDTilt_joint18[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1081, -13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1105, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1213, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1116, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1134, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 1102, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1114, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1086, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1081, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimDTilt_joint20[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1584, 98, 1460, -103, 1227, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1499, -143, 1288, 49, 1421, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1773, -62, 1455, 156, 1050, -273,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1477, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1601, 20, 874, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1496, -6, 1033, 145,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1762, 111,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1230, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1662, -194,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1880, 22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1811, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1660, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1822, 76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1619, 18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1276, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1291, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1605, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1326, -35,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1325, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1227, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1376, -56, 1618, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1584, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), 1431, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1451, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1584, 0, 1460, 8, 1227, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimDTilt_joint21[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1445, 63, 1333, 38, -1601, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1687, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1171, 162, 1369, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -968, 156, 1388, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -919, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1315, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1574, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1462, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1514, -52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -1634, 28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -954, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1100, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1323, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1336, -5,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1148, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1432, -23,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1610, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1445, -12, 1333, -2, -1601, 9,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimDTilt_joint23[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1262, -14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1194, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1175, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 1168, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1167, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1259, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1262, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimDTilt_joint24[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -124, 29, 436, 83, -704, 73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1011, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -236, -152, 506, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -399, -75, 274, -155,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 231, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -5, -261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -328, -241,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -170, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1166, -84,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -915, 42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 175, -62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -78, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -895, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -754, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -167, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 72, 74,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -75, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -132, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 136, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 371, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 407, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 428, 14, -719, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -124, 8, 436, 7, -704, 14,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimDTilt_joint25[136] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 89, 219, 4096, 4096, 4096,
	ftAnimSetValBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 0, -31, 219, -31, 4096, 585, 4096, 585, 4096, 1170,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 6144, 6144, 8192,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -134, -1, 0, -34,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValT(FT_ANIM_ROTZ, 12), 25,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), -27, 7, -359, -15,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 18), 4096, 4096, 4096,
	ftAnimBlock(0, 7),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -12, 10, -259, 52,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 5), 10,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 89, 219,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 6), 0,
	ftAnimEnd(),
	0x0000, 0x380E, 0x001B, 0xFFEC, 0x00BA, 0x200F, 0x0002, 0x0023, 0x0001, 0x014C, 0x0002, 0x00D0, 0x0003, 0x200F, 0x0005, 0x0023, 0x0000, 0x0000, 0xFFFC, 0x00D0, 0x0001, 0x200F, 0x0007, 0x0029, 0x0000, 0x0118, 0x0017, 0x00E6, 0x0001, 0x200F, 0x0005, 0x0029, 0x0000, 0x0118, 0xFFD7, 0x00E6, 0xFFFD, 0x200F, 0x0008, 0x0027, 0xFFFF, 0xFF04, 0xFFE5, 0x00BD, 0xFFFD, 0x380F, 0x0003, 0x001B, 0xFFEC, 0x00BA, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
