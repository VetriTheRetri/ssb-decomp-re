/* AnimJoint data for relocData file 1692 (FTNessAnimDamageX2) */
/* 3184 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimDamageX2_joint1[64];
extern u16 dFTNessAnimDamageX2_joint2[66];
extern u16 dFTNessAnimDamageX2_joint4[70];
extern u16 dFTNessAnimDamageX2_joint5[130];
extern u16 dFTNessAnimDamageX2_joint6[56];
extern u16 dFTNessAnimDamageX2_joint7[10];
extern u16 dFTNessAnimDamageX2_joint8[62];
extern u16 dFTNessAnimDamageX2_joint10[22];
extern u16 dFTNessAnimDamageX2_joint11[126];
extern u16 dFTNessAnimDamageX2_joint12[60];
extern u16 dFTNessAnimDamageX2_joint13[62];
extern u16 dFTNessAnimDamageX2_joint15[44];
extern u16 dFTNessAnimDamageX2_joint16[138];
extern u16 dFTNessAnimDamageX2_joint18[52];
extern u16 dFTNessAnimDamageX2_joint19[116];
extern u16 dFTNessAnimDamageX2_joint21[62];
extern u16 dFTNessAnimDamageX2_joint22[130];
extern u16 dFTNessAnimDamageX2_joint24[58];
extern u16 dFTNessAnimDamageX2_joint25[212];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimDamageX2_joints[] = {
	(u32)dFTNessAnimDamageX2_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimDamageX2_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimDamageX2_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimDamageX2_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimDamageX2_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimDamageX2_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimDamageX2_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimDamageX2_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimDamageX2_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimDamageX2_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimDamageX2_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimDamageX2_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimDamageX2_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimDamageX2_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimDamageX2_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimDamageX2_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimDamageX2_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimDamageX2_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimDamageX2_joint25, /* [24] joint 25 */
	0xFFFF02F7, /* [25] END */
};

/* Joint 1 */
u16 dFTNessAnimDamageX2_joint1[64] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 537, -28,
	ftAnimSetValRate(FT_ANIM_ROTY), 0, 234,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 268, 297, 477, -75, -172, -784,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 893, 56, 509, 23, -322, -109,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 509, -71, -322, 112,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 9), 893,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 893, -33, 401, -83, -154, 252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 625, -76, 425, 121, -70, 112,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 537, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 357, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 0, -223,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimDamageX2_joint2[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 28, -424, -360, 157, 8, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -375, -9, 0, 120, 0, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 0, 13, 89, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 0, 13,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 17), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -56, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -56, 8, 89, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 21, 0, 0, 0, -20,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 28, 12, -360, -211, 8, 11,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimDamageX2_joint4[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 457,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 431, 41, 115, 10, 333, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 125, -27, 31, -7, 174, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 125, 15, 31, -20, 174, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 306, 22, -211, -30, 110, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 306, -2, -211, 11, 110, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 291, -28, -127, 52, 28, -27,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 0, -165,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimDamageX2_joint5[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2018, 1205, -1347, 291, 2024, -607,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -655, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -813, 418, 1417, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1182, 141, 1791, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -530, 309, 1151, -313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -562, -31, -639, 14, 1165, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -659, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -1012, -105, 1127, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1121, -186, 1143, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1385, 64, -734, -117, 1351, -102,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1240, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -991, 127, 938, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1129, -68, 1048, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1127, 14, 993, -70,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1321, -288, 1105, 323,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1192, 77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1067, -67,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1724, -335, 1558, 400,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2031, -13, 2016, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1218, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1331, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2018, 12, -1347, -15, 2024, 7,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimDamageX2_joint6[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -473, 218,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -314, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -198, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -314, -256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -568, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -589, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, 115,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimDamageX2_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimDamageX2_joint8[62] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, 427, 364, -295, -32, 158,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 259, -19, 35, -274, 98, 134,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -241, -45, -458, -44, 370, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -241, 12, -458, 4, 370, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -92, 9, -409, 16, -42, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -166, 9, -326, 86, 92, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -10, 42, 364, 112, -32, -32,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNessAnimDamageX2_joint10[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 9), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 12), 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimDamageX2_joint11[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1192, -120, 1038, -7, 1489, -509,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1071, 55, 1030, -242, 980, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1303, 193, 554, -351, 1046, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1447, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 989, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 290, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 285, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 399, 88,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1441, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1411, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 988, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1099, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1316, 374, 505, 17, 1113, 501,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2161, 467, 435, -158, 2103, 567,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2251, 37, 187, -131, 2247, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 2161, 41, 435, 128, 2103, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2251, 240, 581, 123, 2214, 312,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 620, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2641, 291, 2728, 428,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2834, 79, 3071, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2801, -33, 569, -50, 3097, 26,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimDamageX2_joint12[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, 549,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -395,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -790, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -451, 390,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -262, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -732, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -650, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 91,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimDamageX2_joint13[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 90, 54, 126,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 338, 48, 85, -124, -74, 259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 188, 136, -195, -165, 644, 325,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 612, 42, -245, -5, 575, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 612, -42, -245, 17, 575, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 97, -64, -41, 25, 604, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 97, 0, -41, 10, 604, -53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 90, 54, 126,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimDamageX2_joint15[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 893, -935, 681,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 75, 68, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 827, 56,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1389, 758,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1062, 21, -935, 41, 681, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1062, -935, 681,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -935, 681,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 1062,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1062, -18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 893,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimDamageX2_joint16[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1242, 449, -1328, -257, 1310, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1749, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1692, 112, 1274, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1467, -267, 1061, -130,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1053, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1156, -159, -1686, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1698, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1147, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1143, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1060, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 953, -64,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1692, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1843, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1156, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1872, 138,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 885, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1255, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1934, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1626, 81,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1996, 93,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2062, -60,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1570, -55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1741, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1954, -226, 1118, -61,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1283, -183, 1217, 89,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1526, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1242, -40, -1328, 198, 1310, 92,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimDamageX2_joint18[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 396, 107,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 530, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 653, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 658, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 653, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 626, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 538, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 471, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 558, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 359, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 288, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, 108,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimDamageX2_joint19[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 5, -95, 12, -102, 26, 150,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 364, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -90, -202, -90, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -399, 60, 61, 135,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 187, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 30, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 26, -5, 341, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 30, 4, 364, -31,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 181, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 16, -138,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 24, -45, 300, -97,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -194, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -283, 30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -115, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -23, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 10, 61, -201, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 238, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -229, 223, -95, 192,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 318, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 182, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 180, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, -313, 12, -226, 26, -153,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimDamageX2_joint21[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -259, 442, -102,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -372, -24, 258, -113, -312, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -334, 3, 102, -14, -436, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -334, 8, 102, -16, -436, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -231, 11, -92, -7, -335, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -244, -17, 43, 26, -70, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -355, -3, 95, 99, -351, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -259, 442, -102,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimDamageX2_joint22[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1735, 494, 1472, -209, -1819, 538,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1163, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1241, 253, -1280, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1228, 13, -1231, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -1218, 3, -1178, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1168, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1196, 54,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1203, 24, -1160, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1238, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1269, -3, -1110, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 980, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1248, -93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1233, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1205, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1029, 307,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -589, 369, -913, 266,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -317, -260, -757, -262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1033, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1208, 286,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -811, -574, -1225, -373,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1467, -408, 1642, 178, -1504, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1629, -134, 1565, -85, -1578, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1735, -106, 1472, -93, -1819, -241,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimDamageX2_joint24[58] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 407, 173,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 580, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 210, -290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 359, 261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 522, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 854, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 717, -229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 394, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 351, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, 55,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimDamageX2_joint25[212] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1684, 416, -1633, 256, 1406, -114,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1360, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2101, -106, 1291, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1471, -293, 1624, 379,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1514, 7, -1556, -97, 2050, 235,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1541, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1486, -29, 2095, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 1514, 106, 2046, -47,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1532, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1662, -144,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1666, 167, 1978, -96,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1570, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2003, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1845, -121,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1337, 109,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1532, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1421, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1947, -68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1860, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1270, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1862, -169, -1472, -397, 1250, -118,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1299, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1521, -163, -2066, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1535, 81, -1941, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1684, 149, -1633, 308, 1406, 106,
	ftAnimEnd(),
	0x400E, 0xFF74, 0x011B, 0xFF4A, 0x48E0, 0xFF82, 0xFFAE, 0xFFF4, 0x200F, 0x0001, 0x01CC, 0x00AE, 0x0146, 0xFFE0, 0x00A8, 0xFFF8, 0x200F, 0x0002, 0x017D, 0xFFF9, 0x00B8, 0xFFF4, 0xFF31, 0xFFDE, 0x200F, 0x0009, 0x017D, 0xFFF8, 0x00B8, 0xFFEB, 0xFF31, 0xFFF6, 0x200F, 0x0003, 0x0113, 0x000B, 0xFFB8, 0xFFC9, 0xFEAE, 0xFFC4, 0x200F, 0x0004, 0x01CC, 0x0013, 0xFF34, 0xFFDE, 0xFD89, 0xFFD1, 0x200F, 0x0001, 0x0176, 0xFF95, 0xFF0B, 0xFFBD, 0xFDBF, 0x00B3, 0x200F, 0x0002, 0x0088, 0xFF80, 0xFE68, 0x0084, 0xFFA3, 0x0062, 0x380F, 0x0002, 0xFF74, 0x011B, 0xFF4A, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
