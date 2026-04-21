/* AnimJoint data for relocData file 1702 (FTNessAnimDamage2) */
/* 2816 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimDamage2_joint1[88];
extern u16 dFTNessAnimDamage2_joint2[54];
extern u16 dFTNessAnimDamage2_joint4[58];
extern u16 dFTNessAnimDamage2_joint5[178];
extern u16 dFTNessAnimDamage2_joint6[64];
extern u16 dFTNessAnimDamage2_joint7[10];
extern u16 dFTNessAnimDamage2_joint8[58];
extern u16 dFTNessAnimDamage2_joint10[10];
extern u16 dFTNessAnimDamage2_joint11[166];
extern u16 dFTNessAnimDamage2_joint12[54];
extern u16 dFTNessAnimDamage2_joint13[42];
extern u16 dFTNessAnimDamage2_joint15[10];
extern u16 dFTNessAnimDamage2_joint16[100];
extern u16 dFTNessAnimDamage2_joint18[44];
extern u16 dFTNessAnimDamage2_joint19[76];
extern u16 dFTNessAnimDamage2_joint21[54];
extern u16 dFTNessAnimDamage2_joint22[96];
extern u16 dFTNessAnimDamage2_joint24[48];
extern u16 dFTNessAnimDamage2_joint25[96];
extern u16 dFTNessAnimDamage2_joint26[50];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimDamage2_joints[] = {
	(u32)dFTNessAnimDamage2_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimDamage2_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimDamage2_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimDamage2_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimDamage2_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimDamage2_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimDamage2_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimDamage2_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimDamage2_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimDamage2_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimDamage2_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimDamage2_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimDamage2_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimDamage2_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimDamage2_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimDamage2_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimDamage2_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimDamage2_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimDamage2_joint25, /* [24] joint 25 */
	(u32)dFTNessAnimDamage2_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimDamage2_joint1[88] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 537, -28,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAX), 0, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 0, 0, 561, 946, -64, -379,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 774, 959, -123, -361,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 1, 0, 0, 801, 361, -154, 329,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 500,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), 6433, 28,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 999, -55, 82, 302,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 651, -374, 147, -235,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -58,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 557, 185, -152, -250,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 837, 76, -103, 263,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 10), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 643, -240, 144, 242,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 537, 199,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimDamage2_joint2[54] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 28, -360, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 376, -418, 85, -103, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 780, 621, -188, 150, -198, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1301, -103, -116, 24, -181, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -153, -199, 29, 1, 34, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -1886, -58, -88, -1, 111, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1206, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTNessAnimDamage2_joint4[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 253, -42, -127, -26, -76, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -84, -259, -53, 63, -32, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -264, -19, 0, -8, 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -259, 61, -125, -17, -63, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 724, 25, -277, -23, -126, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 206, 1, -557, -17, -225, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimDamage2_joint5[178] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1198, 699, -1347, 308, -1192, -961,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -967, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1897, 449, -2154, -688,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2097, 209, -2568, -505,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2619, 357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1105, -88, -3165, -377,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1344, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3322, -152,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -3809, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3032, 329,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 3483, 9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1367, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1361, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3490, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3549, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3801, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1419, 5, -3994, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3634, 350, -1351, 129, -4175, -470,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4251, 439, -1159, -45, -4934, -547,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4513, 202, -1442, -121, -5271, -326,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 4844, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1401, -3, -5587, -149,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1428, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5570, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -5505, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4922, 70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 5126, -30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1398, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1183, 113,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5499, 86,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -5161, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 5038, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 4898, -136, -1087, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4765, -132, -1022, 64, -5035, 125,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimDamage2_joint6[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -473, 473,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 236,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -956, -297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1086, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -800, 538,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 400,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -300, -254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -509, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -606, -96,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimDamage2_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimDamage2_joint8[58] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, 0, 364, 0, -32, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 49, -87, 240, -130, -121, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -185, -210, 104, -120, -54, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -371, -20, 0, -3, 0, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -372, 39, 71, 1, 57, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 253, 34, 30, -6, 34, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 246, -53, -16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTNessAnimDamage2_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimDamage2_joint11[166] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1192, 416, 1038, -549, 1489, -389,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1608, 83, 488, -239, 1099, -474,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1360, -39, 558, 49, 541, -343,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1779, 79,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 549, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 413, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 796, 211,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 861, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1689, -101,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1360, 73,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 905, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1055, 80,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 550, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 675, 55,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1468, 275, 1167, 282,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2442, 288, 2210, 379,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 729, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 602, -135,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2488, -19, 2381, 101,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2339, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2516, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 390, -149,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 278, 21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2339, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 2806, 106,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2552, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2733, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 303, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 389, 24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2897, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2955, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2964, 8, 414, 24, 2731, -2,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimDamage2_joint12[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, 111,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -447, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -556, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 9,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimDamage2_joint13[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 90, 54, 126,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 95, -43, -44, -6, 619, 284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3, -90, 41, 81, 694, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -84, 3, 117, 0, 415, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 54, 36, 126, -80,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 26), 90,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimDamage2_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimDamage2_joint16[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -365, 335, -279, -236, -297, -281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -30, -61, -516, 53, -579, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -488, -244, -173, 216, 57, 446,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -93, -5, 256, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -484, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -435, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 266, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -97, 1, 202, -57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -80, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -7, -42,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 286, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -90, -29,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -103, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -442, -1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -51, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -190, -13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -439, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -106, -16, -197, -6, -437, 2,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimDamage2_joint18[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 396, 588,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 985, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 373, -361,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 274, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 302, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 545, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 602, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 659, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 630, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 619, -11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimDamage2_joint19[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1614, 17, -1620, 31, 1634, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1997, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -1595, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1673, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1675, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1795, 100,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2024, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 1934, -2,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1894, 80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1711, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1620, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1741, -4,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1714, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1719, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1722, 2, -1743, -2, 1932, -1,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimDamage2_joint21[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -259, 442, -102,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -115, 201, 400, -20, 130, 88,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 142, 117,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 402, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 120, 11, 400, -25, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 242, -4, 171, -39, 83, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 43, -30, -230, -9, -120, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -302, 0, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimDamage2_joint22[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1481, 623, 1472, -97, 1397, 389,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1428, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2104, -121, 1787, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1238, -338, 1776, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1922, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1428, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1476, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 1840, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1988, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2016, -4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1440, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1336, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2000, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1818, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1830, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1847, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1827, -13, 1359, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 1766, -4, 1451, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1764, -2, 1455, 3, 1850, 2,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimDamage2_joint24[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 407, -407,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 188, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 117, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 94, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 58, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 248, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 540, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 529, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimDamage2_joint25[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1684, 81, -1633, 545, 1406, 193,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1933, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1088, -44, 1599, 241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1722, -304, 1888, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1924, 2, -1697, 23, 1869, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2039, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1676, 22, 1903, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 2130, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), -1469, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2069, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 2108, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2062, -71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1562, -31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2119, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 1930, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1540, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 1461, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1452, -8, -1469, 0, 1929, -1,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimDamage2_joint26[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -140, 283, -182,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 353, 286, 312, 17, 104, 145,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 431, 69,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 317, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 491, 2, 312, -23, 104, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 477, -4, -78, -12, -224, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 363, 0, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
