/* AnimJoint data for relocData file 1694 (FTNessAnimDamaged3) */
/* 2272 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimDamaged3_joint1[48];
extern u16 dFTNessAnimDamaged3_joint2[64];
extern u16 dFTNessAnimDamaged3_joint4[34];
extern u16 dFTNessAnimDamaged3_joint5[96];
extern u16 dFTNessAnimDamaged3_joint6[36];
extern u16 dFTNessAnimDamaged3_joint7[10];
extern u16 dFTNessAnimDamaged3_joint8[60];
extern u16 dFTNessAnimDamaged3_joint10[10];
extern u16 dFTNessAnimDamaged3_joint11[76];
extern u16 dFTNessAnimDamaged3_joint12[26];
extern u16 dFTNessAnimDamaged3_joint13[54];
extern u16 dFTNessAnimDamaged3_joint15[10];
extern u16 dFTNessAnimDamaged3_joint16[84];
extern u16 dFTNessAnimDamaged3_joint18[34];
extern u16 dFTNessAnimDamaged3_joint19[94];
extern u16 dFTNessAnimDamaged3_joint21[54];
extern u16 dFTNessAnimDamaged3_joint22[86];
extern u16 dFTNessAnimDamaged3_joint24[44];
extern u16 dFTNessAnimDamaged3_joint25[164];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimDamaged3_joints[] = {
	(u32)dFTNessAnimDamaged3_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimDamaged3_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimDamaged3_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimDamaged3_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimDamaged3_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimDamaged3_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimDamaged3_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimDamaged3_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimDamaged3_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimDamaged3_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimDamaged3_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimDamaged3_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimDamaged3_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimDamaged3_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimDamaged3_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimDamaged3_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimDamaged3_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimDamaged3_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimDamaged3_joint25, /* [24] joint 25 */
	0xFFFF0216, /* [25] END */
};

/* Joint 1 */
u16 dFTNessAnimDamaged3_joint1[48] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 537, -28,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, -16,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 669, 515, -100, -1049,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 666, -4, -290, -253,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 666, -290,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 666, -520, -290, 920,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 471, -607, 54, 1181,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 514, 265, 4, -330,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 537, -28,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimDamaged3_joint2[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 28, 274, -360, 56, 8, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 255, 0, -324, 22, -85, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -76, -66, -268, 29, 0, 2,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -2, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -76, -66, -268, 29, 0, 2,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -2, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -76, 20, 0, 1, 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 6, 34, -275, -120, 7, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 28, 20, -360, -73,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTNessAnimDamaged3_joint4[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 132,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 133, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 296, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 296, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 424, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 95, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, -81,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimDamaged3_joint5[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1198, 858, -1347, 189, -1192, -933,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1026, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2057, 650, -2126, -583,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2498, 252, -2360, -119,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2565, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2280, -39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1040, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1035, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2543, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2509, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2498, 264, -2360, -403,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3039, 403, -1031, -100, -3087, -450,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1164, 344,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3306, 63, -3261, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3166, -9, -3060, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3286, -180, -546, 451, -3540, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2806, -479, -261, 285, -2801, 739,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimDamaged3_joint6[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -473, 315,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -9, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -91, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, -473,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimDamaged3_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimDamaged3_joint8[60] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, -180, 364, -228, -32, 13,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -130, 6, 149, -182, -15, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 138, 93, 0, -24, 0, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 138, 93,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 225, 0, 0, 72, 0, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 45, -78, 290, 121, -23, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -10, -49, 364, 69, -32, -10,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNessAnimDamaged3_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimDamaged3_joint11[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1192, 1003, 1038, 2, 1489, 523,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2954, 373, 2430, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1041, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1204, 95,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1204, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2942, -11, 2433, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 3102, 165, 2594, 231,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1193, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3286, 207, 1179, 128, 2893, 542,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3516, 414, 1449, 204, 3679, 625,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4114, 446, 1589, -205, 4143, 513,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4409, 294, 1038, -550, 4706, 562,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimDamaged3_joint12[26] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, 265,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 146,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, -549,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimDamaged3_joint13[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 90, 54, 126,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 103, 5, 20, -15, 302, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 102, 0, 22, 0, 287, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 102, -56, 22, -13, 287, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -293, -10, -68, -13, 290, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 70, 128, -17, 40, 448, -54,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 90, 54, 126,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimDamaged3_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimDamaged3_joint16[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -365, -39, -279, 200, -297, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -405, 141, -79, 94, -274, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -83, 193, -90, 4, -127, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -63, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 44, 50, -223, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 81, 7, -229, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -17, -158, -176, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -257, -204, -249, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -427, -10, -2, -115, -274, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -279, 45, -295, -147, -415, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -336, -43, -297, 7, -353, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -365, -29, -279, 17, -297, 56,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimDamaged3_joint18[34] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 396, -389,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -198,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 380,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 769, 275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 550, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, -153,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimDamaged3_joint19[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1602, 228, -1620, -25, 1634, 281,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2164, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1374, 25, -1645, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1551, -118, -1496, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1521, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1704, 47,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2200, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2264, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1521, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1639, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1625, 220,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1088, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2417, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1593, -66, 2395, -489,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1527, -232, -1773, -46, 1438, -422,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1553, -37, -1686, 76, 1550, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1602, -49, -1620, 65, 1634, 84,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimDamaged3_joint21[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -259, 442, -102,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -288, 183, 146, -217, -104, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 107, 65, 7, -23, 19, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 107, -41, 7, -9, 19, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -181, -91, -56, 98, -148, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -259, -26, 400, 166, -109, 15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -259, 442, -102,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimDamaged3_joint22[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1481, 166, 1472, 47, 1397, -466,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1755, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1519, -81, 931, -318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1308, -101, 761, -127,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1303, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 761, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1665, -45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1649, -122,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1280, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1475, 102,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 729, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 928, 276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1511, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1498, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1563, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1510, -45, 1326, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1481, -17, 1472, -38, 1397, 71,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimDamaged3_joint24[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 407, 166,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 574, 287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 981, 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1026, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1012, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 911, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 792, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 912, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 587, -252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, -180,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimDamaged3_joint25[164] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1684, 62, 1583, 350, -1810, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1746, -36, 1933, 132, -1747, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1611, -9, 1847, -83, -1530, 88,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1562, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1852, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1728, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1712, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1611, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1532, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1530, -54,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1847, -69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1540, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1712, 21, -1616, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1549, -8, -1596, -135,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1587, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1636, 67, 1543, -2, -1857, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1684, 47, 1583, 39, -1810, 46,
	ftAnimEnd(),
	0x400E, 0xFF74, 0x011B, 0xFF4A, 0x48E0, 0xFF82, 0xFFAE, 0xFFF4, 0x200F, 0x0001, 0xFDE5, 0xFF8A, 0xFF9B, 0xFF7C, 0x00E8, 0xFFB7, 0x200F, 0x0001, 0xFE86, 0x001A, 0x0013, 0x0014, 0xFEB7, 0xFFA3, 0x200F, 0x0005, 0xFE86, 0xFFF7, 0x0013, 0xFFF1, 0xFEB7, 0x001A, 0x200F, 0x0002, 0xFE45, 0xFFEE, 0xFFA6, 0x004F, 0xFF70, 0x0020, 0x200F, 0x0001, 0xFE4F, 0x0078, 0x0102, 0x00BF, 0xFF18, 0xFFE6, 0x200F, 0x0001, 0xFF35, 0x0092, 0x0125, 0x000C, 0xFF3B, 0x0018, 0x380F, 0x0001, 0xFF74, 0x011B, 0xFF4A, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
