/* AnimJoint data for relocData file 1693 (FTNessAnimDamageX3) */
/* 3488 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimDamageX3_joint1[56];
extern u16 dFTNessAnimDamageX3_joint2[52];
extern u16 dFTNessAnimDamageX3_joint4[70];
extern u16 dFTNessAnimDamageX3_joint5[182];
extern u16 dFTNessAnimDamageX3_joint6[60];
extern u16 dFTNessAnimDamageX3_joint7[10];
extern u16 dFTNessAnimDamageX3_joint8[44];
extern u16 dFTNessAnimDamageX3_joint10[10];
extern u16 dFTNessAnimDamageX3_joint11[170];
extern u16 dFTNessAnimDamageX3_joint12[70];
extern u16 dFTNessAnimDamageX3_joint13[62];
extern u16 dFTNessAnimDamageX3_joint15[54];
extern u16 dFTNessAnimDamageX3_joint16[158];
extern u16 dFTNessAnimDamageX3_joint18[50];
extern u16 dFTNessAnimDamageX3_joint19[152];
extern u16 dFTNessAnimDamageX3_joint21[62];
extern u16 dFTNessAnimDamageX3_joint22[152];
extern u16 dFTNessAnimDamageX3_joint24[72];
extern u16 dFTNessAnimDamageX3_joint25[206];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimDamageX3_joints[] = {
	(u32)dFTNessAnimDamageX3_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimDamageX3_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimDamageX3_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimDamageX3_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimDamageX3_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimDamageX3_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimDamageX3_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimDamageX3_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimDamageX3_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimDamageX3_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimDamageX3_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimDamageX3_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimDamageX3_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimDamageX3_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimDamageX3_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimDamageX3_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimDamageX3_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimDamageX3_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimDamageX3_joint25, /* [24] joint 25 */
	0xFFFF0349, /* [25] END */
};

/* Joint 1 */
u16 dFTNessAnimDamageX3_joint1[56] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 537, -28,
	ftAnimSetValRate(FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -268, -178, 477, -37, -172, -392,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -1072, -70, 509, 25, -322, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -1072, 56, 509, -72, -322, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -775, 22, 408, -69, -157, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -775, 59, 396, 79, -145, 79,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 537, -28,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimDamageX3_joint2[52] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 28, -360, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -455, 16, -333, 60, 0, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 125, 58, 0, 33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 125, -2, 0, -9, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 98, -2, -99, -7, 2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 98, -5, -99, -20, 2, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 28, -360, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTNessAnimDamageX3_joint4[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 686, -11, 23, -22, -142, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -35, -217, -67, -4, -261, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -402, -24, 0, 8, -134, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -359, 68, 0, 5, -134, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 310, 43, 55, 6, -183, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 368, -3, 79, -2, -210, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 272, -61, 35, -13, -90, 35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimDamageX3_joint5[182] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -410, -720, -261, -680, 415, 580,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1130, -118, -942, -318, 996, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -648, 527, -898, 6, 576, -477,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1155, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -75, 404, 42, -380,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 161, 155, -185, -156,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 227, -15, -312, -12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1176, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1137, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 212, -21, -327, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 51, -86, -254, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -54, 50, -150, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 152, 44, -1121, 56, -429, -72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1006, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 34, -479, -296, 495,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -806, -651, 560, 625,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1269, -281, -1280, -215, 954, 218,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1331, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1368, -55, 997, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1380, 7, 977, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1228, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 881, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1260, 81, 932, 120,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1136, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1360, -257, 1121, 334,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1743, -324, 1602, 432,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2010, -152, -1312, -131, 1987, 238,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -2035, 14, -1377, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2078, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2056, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2018, 16, -1347, 30, 2024, -32,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimDamageX3_joint6[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -473, 464,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -609, -454,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -909, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -746, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -669, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -998, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1141, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -882, 241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -619, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, 145,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimDamageX3_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimDamageX3_joint8[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, 0, 364, 0, -32, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 228, -87, 320, 22, 76, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -534, -66, 498, 15, -325, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -439, 21, 472, -5, -259, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -10, 0, 364, 0, -32, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNessAnimDamageX3_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimDamageX3_joint11[170] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1192, -383, 1038, 355, 1489, -379,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 717, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1394, 2, 1109, -266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1044, -485, 957, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1008, 293, 422, -293, 1012, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1303, 488, 458, 11, 823, 126,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 405, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1985, 379, 1265, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2063, 45, 1245, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1303, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2075, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1941, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 412, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 454, 43,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1940, -51, 1352, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1674, -87, 1099, -67,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 490, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 309, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1662, 48, 1126, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 2046, 87, 1757, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2108, 49, 198, -103, 1912, 139,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2322, 105,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 2490, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -47, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 5, 120,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 546, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2450, 161,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 3067, 100,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2661, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2784, 69, 577, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2801, 16, 569, -7, 3097, 29,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimDamageX3_joint12[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, -15,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -574, -252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1063, -311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1196, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -661, 593,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 330,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -652, -296,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -863, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -580, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -432, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -812, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -785, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -648, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 89,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimDamageX3_joint13[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 90, 54, 126,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 338, 32, 85, -83, -74, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 188, -48, -195, -25, 644, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 97, -11, -41, 19, 604, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 97, 9, -41, -23, 604, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 197, 0, -295, -7, 606, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 97, -8, -134, 26, 480, -36,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 90, 54, 126,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimDamageX3_joint15[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 893, -935, 681,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 75, 68, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 827, 28,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1389, 758,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1062, 23, -935, 45, 681, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1062, 77, -935, 0, 681, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1914, -26, -926, -17, -98, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 722, -78, -1161, 0, 1230, 59,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 893, -935, 681,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimDamageX3_joint16[158] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1974, -171, -1328, 155, 1310, 821,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2146, -75, -1173, 80, 2131, 446,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2125, 60, -1168, -7, 2202, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1908, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1230, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1471, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1401, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1486, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1914, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1846, -24,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1218, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1232, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1507, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1613, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1821, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1587, -51, 1506, -203,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2015, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1415, -42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1601, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1134, 82,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -978, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2123, -87,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2096, 95,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1618, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1547, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1001, -47, 1406, -133,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1258, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1306, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2006, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1974, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1291, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1974, 0, -1328, -22, 1310, 18,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimDamageX3_joint18[50] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 396, -396,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -198,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 12), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 472, 309,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 618, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 720, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 734, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 545, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 443, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, -47,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimDamageX3_joint19[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 5, -68, 12, -226, 26, 142,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -62, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 258, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -214, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -203, 48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -110, -34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -44, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -180, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -186, -70, 256, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 291, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -238, -1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -181, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -417, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 274, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 229, -80,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -253, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -346, 37,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -507, -27, 99, -98,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -361, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 0, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -286, 68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -134, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -330, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -76, 65,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -127, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 16, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -55, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 3, 35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -17, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, -3, 12, -4, 26, 22,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimDamageX3_joint21[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -259, 442, -102,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 252, 42, 421, 12, 480, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -3, -25, 515, 9, 417, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -3, -21, 515, -5, 417, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -239, -24, 456, 1, 68, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -323, -32, 538, -9, -191, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -562, 10, 361, -15, -274, 14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -259, 442, -102,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimDamageX3_joint22[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -127, -162, 136, -223, -210, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -289, -3, -87, -104, -43, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -135, 166, -72, 40, -50, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 43, 122, -6, -25, 126, 293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 109, 55, -123, -90, 537, 167,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -227, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 157, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 461, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 392, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 357, -47,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -249, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 142, 56, -259, 60, 296, -237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 80, -128, 134, -118, -360,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 144, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 302, 7, -423, -268,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 103, -15, -895, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 123, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -36, 18,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 91, -12, -883, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -111, -44, -542, 138,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 113, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -141, -12, -398, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -137, 6, -270, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -127, 9, 136, 23, -210, 59,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimDamageX3_joint24[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 407, 342,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 749, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 863, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 748, -431,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -370,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 575, 435,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 871, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 884, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 866, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 735, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 615, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 479, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, -72,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimDamageX3_joint25[206] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 76, -43, 25, -284, -202, 109,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -31, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 32, -166, -259, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -257, -208, -362, -62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -413, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -384, -11, -76, 45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 186, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -279, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -402, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 274, 77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 4, -201,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -421, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -277, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -396, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -319, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -369, -36, -243, -105,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 54, 75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -170, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -265, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -74, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 93, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -192, -35,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -162, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 65, 20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1, 57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 30, -8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -218, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -214, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 76, 10, 25, -5, -202, 11,
	ftAnimEnd(),
	0x400E, 0xFF74, 0x011B, 0xFF4A, 0x48E0, 0xFF82, 0xFFAE, 0xFFF4, 0x200F, 0x0001, 0x017B, 0x005C, 0x00B6, 0xFFB5, 0xFFFD, 0x0041, 0x200F, 0x0005, 0x019E, 0x0003, 0xFF57, 0xFFDD, 0x00D2, 0x0015, 0x200F, 0x0005, 0x019E, 0xFFB8, 0xFF57, 0x0014, 0x00D2, 0xFFFE, 0x200F, 0x0006, 0xFE86, 0xFFBC, 0x003B, 0x0017, 0x00BB, 0xFFF1, 0x200F, 0x0007, 0xFE1F, 0x0019, 0x008E, 0x0008, 0x0006, 0xFFDA, 0x200F, 0x0003, 0xFF86, 0x0038, 0x0093, 0x0017, 0xFF3A, 0xFFE1, 0x380F, 0x0003, 0xFF74, 0x011B, 0xFF4A, 0x0000,
};
