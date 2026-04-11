/* AnimJoint data for relocData file 1691 (FTNessAnimDamageX1) */
/* 2240 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimDamageX1_joint1[58];
extern u16 dFTNessAnimDamageX1_joint2[42];
extern u16 dFTNessAnimDamageX1_joint4[52];
extern u16 dFTNessAnimDamageX1_joint5[86];
extern u16 dFTNessAnimDamageX1_joint6[44];
extern u16 dFTNessAnimDamageX1_joint7[10];
extern u16 dFTNessAnimDamageX1_joint8[58];
extern u16 dFTNessAnimDamageX1_joint10[10];
extern u16 dFTNessAnimDamageX1_joint11[94];
extern u16 dFTNessAnimDamageX1_joint12[48];
extern u16 dFTNessAnimDamageX1_joint13[46];
extern u16 dFTNessAnimDamageX1_joint15[20];
extern u16 dFTNessAnimDamageX1_joint16[78];
extern u16 dFTNessAnimDamageX1_joint18[36];
extern u16 dFTNessAnimDamageX1_joint19[84];
extern u16 dFTNessAnimDamageX1_joint21[46];
extern u16 dFTNessAnimDamageX1_joint22[82];
extern u16 dFTNessAnimDamageX1_joint24[36];
extern u16 dFTNessAnimDamageX1_joint25[138];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimDamageX1_joints[] = {
	(u32)dFTNessAnimDamageX1_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimDamageX1_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimDamageX1_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimDamageX1_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimDamageX1_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimDamageX1_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimDamageX1_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimDamageX1_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimDamageX1_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimDamageX1_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimDamageX1_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimDamageX1_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimDamageX1_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimDamageX1_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimDamageX1_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimDamageX1_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimDamageX1_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimDamageX1_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimDamageX1_joint25, /* [24] joint 25 */
	0xFFFF0219, /* [25] END */
};

/* Joint 1 */
u16 dFTNessAnimDamageX1_joint1[58] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 537, -28,
	ftAnimSetValRate(FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -268, -223, 453, -263, -184, -1505,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -446, -22, 471, 18, -404, -220,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 471, -47, -404, 228,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 7), -446,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -446, 148, 423, 48, -176, 1517,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 483, 455, -25, 593,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 537, -28,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimDamageX1_joint2[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 28, -360, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -590, -258, -249, 23, 69, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -489, 12, -313, -7, 29, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -489, 30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -313, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -249, 172, -313, -15, 29, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 28, -360, 8,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimDamageX1_joint4[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 434, 236, 68, 43, -168, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 473, 4, 86, 2, -143, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 473, 86, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 473, -141, 86, -39, -143, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, -236, 7, -43, -81, 71,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimDamageX1_joint5[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2806, -582, -261, -460, -2801, 503,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1778, -232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -722, -178, -2298, 497,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -617, 61, -1806, 234,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -576, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1758, -40, -1828, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1452, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1822, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1762, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -581, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -502, 171,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1463, 402, -1795, -423,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2257, 567, -2609, -480,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2597, 274, -275, 120, -2756, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2806, 208, -261, 14, -2801, -44,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimDamageX1_joint6[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -473, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -477, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -502, -304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -609, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, 135,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimDamageX1_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimDamageX1_joint8[58] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, 0, 364, 0, -32, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 182, 93, 364, -3, -70, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 176, 0, 358, 0, -32, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 176, 358, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 176, 47, 358, 1, -32, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 271, -93, 361, 3, -32, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -10, 0, 364, 0, -32, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTNessAnimDamageX1_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimDamageX1_joint11[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1192, -326, 1038, -32, 1489, -292,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 866, 144, 1005, -208, 1196, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1482, 482, 621, -207, 1441, 283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1832, 210, 590, -30, 1764, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1902, 37, 561, -17, 1804, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 621, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1915, 8, 1784, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1923, -109, 1795, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1695, -194, 1563, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1534, -364, 646, 179, 1426, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 966, -221, 980, 200, 1140, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1091, 112, 1048, 29, 1343, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1192, 101, 1038, -9, 1489, 146,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimDamageX1_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, -263,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -822, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -393, 368,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -86, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -260, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -393, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -485, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, -73,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimDamageX1_joint13[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 90, 54, 126,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 338, 211, 85, -91, -74, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 514, 16, -128, -45, -72, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 469, -18, -280, -1, 41, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 366, -126, -139, 111, 221, 28,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 90, 54, 126,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimDamageX1_joint15[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 893, -935, 681,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 75, 68, 30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 827, -1389, 758,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 893, -935, 681,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTNessAnimDamageX1_joint16[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1974, -190, -1328, 96, 1310, 835,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2164, -214, -1232, 38, 2146, 521,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2402, -131, -1250, -18, 2353, 108,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1291, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2445, -14, 2366, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2456, -6, 2365, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -2423, 29, 2331, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2388, 143, -1296, 92, 2306, -183,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1889, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1106, 42, 1964, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1212, -110, 1405, -327,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1974, -84, -1328, -116, 1310, -95,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimDamageX1_joint18[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 396, -389,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 568, 344,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 695, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, -299,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimDamageX1_joint19[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 5, -72, 12, -178, 26, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -66, -120, -165, -14, 187, 310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -234, -78, -16, 74, 647, 234,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -215, 6, -26, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 656, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 649, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 555, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -210, 4, -40, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -91, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -210, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -219, -82, 523, -236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -376, 75, 82, -327,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -68, 191, -116, 51, -130, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, 74, 12, 129, 26, 157,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimDamageX1_joint21[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -259, 442, -102,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 252, 330, 421, -95, 480, 315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 400, 12, 250, -18, 529, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 352, -6, 275, 9, 436, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 351, -203, 323, 55, 368, -179,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -259, 442, -102,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimDamageX1_joint22[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -127, 21, 136, 228, -210, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -105, 108, 364, -148, -90, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 90, 117, -160, -285, -106, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 159, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 93, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -205, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -234, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -240, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 183, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 231, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 234, -158, 36, -298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -85, -244, -192, 162, -503, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -254, -21, 83, 164, -346, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -127, 127, 136, 52, -210, 135,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimDamageX1_joint24[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 407, 364,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 771, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 670, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 325, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 383, 278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 882, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 666, -237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, -259,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimDamageX1_joint25[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 76, 200, 25, 1, -202, 299,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 276, -156, 26, 61, 97, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -237, -302, 147, 57, 19, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 125, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 108, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -327, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -403, -64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -456, 26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 121, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 140, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 116, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 75, -43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -426, 238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, 284, 251, -65, 18, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 141, 27, 10, -113, -238, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 76, -65, 25, 15, -202, 36,
	ftAnimEnd(),
	0x400E, 0xFF74, 0x011B, 0xFF4A, 0x48E0, 0xFF82, 0xFFAE, 0xFFF4, 0x200F, 0x0001, 0x0111, 0x00D1, 0xFFED, 0x0016, 0xFF65, 0x00F3, 0x200F, 0x0001, 0x0116, 0x0000, 0x0148, 0x002B, 0x012F, 0x0039, 0x200F, 0x0007, 0x0116, 0xFFD5, 0x0148, 0xFFF3, 0x012F, 0xFFE9, 0x200F, 0x0001, 0xFFBA, 0xFF75, 0x00D8, 0xFFF1, 0x0070, 0xFF5E, 0x380F, 0x0002, 0xFF74, 0x011B, 0xFF4A, 0x0000,
};
