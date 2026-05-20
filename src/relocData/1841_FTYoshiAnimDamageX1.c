/* AnimJoint data for relocData file 1841 (FTYoshiAnimDamageX1) */
/* 1888 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimDamageX1_joint1[14];
extern u16 dFTYoshiAnimDamageX1_joint2[78];
extern u16 dFTYoshiAnimDamageX1_joint3[44];
extern u16 dFTYoshiAnimDamageX1_joint4[48];
extern u16 dFTYoshiAnimDamageX1_joint6[18];
extern u16 dFTYoshiAnimDamageX1_joint7[56];
extern u16 dFTYoshiAnimDamageX1_joint8[40];
extern u16 dFTYoshiAnimDamageX1_joint10[20];
extern u16 dFTYoshiAnimDamageX1_joint11[58];
extern u16 dFTYoshiAnimDamageX1_joint12[40];
extern u16 dFTYoshiAnimDamageX1_joint13[26];
extern u16 dFTYoshiAnimDamageX1_joint14[8];
extern u16 dFTYoshiAnimDamageX1_joint15[44];
extern u16 dFTYoshiAnimDamageX1_joint16[20];
extern u16 dFTYoshiAnimDamageX1_joint17[18];
extern u16 dFTYoshiAnimDamageX1_joint18[54];
extern u16 dFTYoshiAnimDamageX1_joint20[38];
extern u16 dFTYoshiAnimDamageX1_joint21[62];
extern u16 dFTYoshiAnimDamageX1_joint22[22];
extern u16 dFTYoshiAnimDamageX1_joint23[66];
extern u16 dFTYoshiAnimDamageX1_joint25[40];
extern u16 dFTYoshiAnimDamageX1_joint26[78];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTYoshiAnimDamageX1_joints[] = {
	(AObjEvent32 *)dFTYoshiAnimDamageX1_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTYoshiAnimDamageX1_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTYoshiAnimDamageX1_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTYoshiAnimDamageX1_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTYoshiAnimDamageX1_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTYoshiAnimDamageX1_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTYoshiAnimDamageX1_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTYoshiAnimDamageX1_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTYoshiAnimDamageX1_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTYoshiAnimDamageX1_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTYoshiAnimDamageX1_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTYoshiAnimDamageX1_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTYoshiAnimDamageX1_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTYoshiAnimDamageX1_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTYoshiAnimDamageX1_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTYoshiAnimDamageX1_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTYoshiAnimDamageX1_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTYoshiAnimDamageX1_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTYoshiAnimDamageX1_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTYoshiAnimDamageX1_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTYoshiAnimDamageX1_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTYoshiAnimDamageX1_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimDamageX1_joint1[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 672, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimDamageX1_joint2[78] = {
	ftAnimSetValAfter(FT_ANIM_SCAX | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAY), -482, -30, -110, 101, -250, -2536, 4096, 1850,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_SCAY, 2), 5406,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -535, 41,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), -94, -56,
	ftAnimSetValT(FT_ANIM_ROTY, 8), 0,
	ftAnimSetValT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 12), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -459, -349,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 6), -502, 398,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_SCAY, 2), 4096, -1945,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 0, 80,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_SCAY, 8), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), -170, -36,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 30, 541,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -197, 347,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 4), -89, -27, 20, 87,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimDamageX1_joint3[44] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY), 0, 0, 4095, 4095,
	ftAnimSetValRate(FT_ANIM_SCAZ), 4095, -1235,
	ftAnimSetValBlock(FT_ANIM_ROTX), 317,
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 2), 3235,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 822,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 759,
	ftAnimSetValRateT(FT_ANIM_SCAZ, 2), 4095, 1258,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 848,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 650, 56,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_SCAZ, 8), 4095,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 16, -164,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimDamageX1_joint4[48] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAY | FT_ANIM_SCAZ), 225, 0, 0, 4096, 4096,
	ftAnimSetValAfter(FT_ANIM_SCAX), 4096,
	ftAnimSetValT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4950, 3214,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), -238,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), -154,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), -288, 3396, 4032,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 128, 42,
	ftAnimSetValBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4096, 4096,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 78, -43,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimDamageX1_joint6[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 402, 62,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 472, -42,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimDamageX1_joint7[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1715, 50, -1475, 107, 1247, -224,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -1705, 67, -1328, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1022, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1138, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1074, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1633, 53, -1321, 0, 939, -100,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -1705, -30, -1440, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1009, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1168, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1718, -13, -1476, -36, 1256, 88,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimDamageX1_joint8[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -754, 70,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -683, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -506, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -577, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -745, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -789, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -876, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, 112,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTYoshiAnimDamageX1_joint10[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -32,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -112, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 239, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -92,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimDamageX1_joint11[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1518, -304, -1966, 62, 1030, -481,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1848, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1822, -61, 549, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1641, 11, 810, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1799, -48, 504, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1738, 50, 626, 92,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -1656, -78, 1280, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1834, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -1557, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1753, -96, -1505, 51, 1389, 108,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimDamageX1_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -959, 489,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -470, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -544, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -205, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -401, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -538, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -611, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -950, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, -52,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimDamageX1_joint13[26] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -82, -32,
	ftAnimSetValRateBlock(FT_ANIM_ROTZ), -62, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 109, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 76, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -14,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimDamageX1_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -536, -893, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTYoshiAnimDamageX1_joint15[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 300, -242, 4096, -1560, 4095, 3115,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX), 0, 0, 4095,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -211, -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 2990, 6430,
	ftAnimSetValRateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 1470, 4095, -2437,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -422, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4096, 4095,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -190, -13,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTYoshiAnimDamageX1_joint16[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 235, -233,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -146, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -416, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -153, -31,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTYoshiAnimDamageX1_joint17[18] = {
	ftAnimSetValRate(FT_ANIM_SCAX), 4096, -1141,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4095,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 2), 3291,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX, 2), 4096, 1169,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 8), 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimDamageX1_joint18[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -69, -16, -40, 40, 91, 157,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -29, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -7, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 224, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 152, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 24, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -259, -177,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -122, 113,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -17, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -10, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, 4, 5, 13, -3, 118,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimDamageX1_joint20[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 451, -444,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 835, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 826, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 551, -236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 261, -289,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTYoshiAnimDamageX1_joint21[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1673, 43, -86, -10, -305, 278,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 26, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1605, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -27, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -13, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 87, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 147, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -219, -166,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 55, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -47, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -295, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -355, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1614, 9, -83, -35, -263, 91,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTYoshiAnimDamageX1_joint22[22] = {
	ftAnimSetValAfter(FT_ANIM_SCAZ), 4095,
	ftAnimSetValRate(FT_ANIM_SCAX), 4096, -1129,
	ftAnimSetValBlock(FT_ANIM_SCAY), 4096,
	ftAnimSetValT(FT_ANIM_SCAY, 12), 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 2), 3284,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX, 2), 4096, 1175,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 8), 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTYoshiAnimDamageX1_joint23[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 122, 137, 80, 15, 133, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 253, -71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 289, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 79, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 5, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 227, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 102, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -179, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 180, -86, 126, -86, -12, 59,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 22, -31, 0, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -90, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -122, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -22, 0, 0, -154, -31,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimDamageX1_joint25[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 498, -119,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 282, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 128, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 364, 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 576, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 804, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 763, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 556, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -177,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTYoshiAnimDamageX1_joint26[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1650, -94, 207, -50, -183, 121,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1408, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 266, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -52, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -196, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1458, 108, -300, -135,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -478, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1626, 86, 344, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 29, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1630, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1589, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -438, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -357, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1609, 20, -89, -119, -228, 128,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
