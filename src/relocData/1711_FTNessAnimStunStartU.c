/* AnimJoint data for relocData file 1711 (FTNessAnimStunStartU) */
/* 2096 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimStunStartU_joint1[28];
extern u16 dFTNessAnimStunStartU_joint2[14];
extern u16 dFTNessAnimStunStartU_joint4[30];
extern u16 dFTNessAnimStunStartU_joint5[138];
extern u16 dFTNessAnimStunStartU_joint6[50];
extern u16 dFTNessAnimStunStartU_joint7[16];
extern u16 dFTNessAnimStunStartU_joint8[34];
extern u16 dFTNessAnimStunStartU_joint10[12];
extern u16 dFTNessAnimStunStartU_joint11[122];
extern u16 dFTNessAnimStunStartU_joint12[34];
extern u16 dFTNessAnimStunStartU_joint13[62];
extern u16 dFTNessAnimStunStartU_joint15[10];
extern u16 dFTNessAnimStunStartU_joint16[64];
extern u16 dFTNessAnimStunStartU_joint18[32];
extern u16 dFTNessAnimStunStartU_joint19[60];
extern u16 dFTNessAnimStunStartU_joint21[38];
extern u16 dFTNessAnimStunStartU_joint22[68];
extern u16 dFTNessAnimStunStartU_joint24[32];
extern u16 dFTNessAnimStunStartU_joint25[70];
extern u16 dFTNessAnimStunStartU_joint26[82];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimStunStartU_joints[] = {
	(u32)dFTNessAnimStunStartU_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimStunStartU_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimStunStartU_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimStunStartU_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimStunStartU_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimStunStartU_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimStunStartU_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimStunStartU_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimStunStartU_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimStunStartU_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimStunStartU_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimStunStartU_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimStunStartU_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimStunStartU_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimStunStartU_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimStunStartU_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimStunStartU_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimStunStartU_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimStunStartU_joint25, /* [24] joint 25 */
	(u32)dFTNessAnimStunStartU_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimStunStartU_joint1[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, -513, 5, 245, -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 26, 0, 17, 4, -5, 360, 77, -5, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 0, 0, -16, 537, -28,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimStunStartU_joint2[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 28, -360, 8,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimStunStartU_joint4[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 6, -457, 156,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 268, 42, 0, 30, 0, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 643, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimStunStartU_joint5[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -132, 51, -1051, 0, -550, -53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1333, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 92, 202, -786, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 324, 795, -997, -182,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1546, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1683, 778,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1880, 101,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1770, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1402, -50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1097, 25,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1746, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1737, -26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1626, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1682, 12, -1617, -72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1895, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1772, -156,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1856, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1092, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1238, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1874, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1183, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1224, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1351, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1709, 152,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1191, 7,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1185, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1193, 6, -1190, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1198, 4, -1347, 4, -1192, -1,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimStunStartU_joint6[50] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -59, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -279, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -340, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -399, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -661, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -744, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -579, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -504, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, 31,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimStunStartU_joint7[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 143, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), -640,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTNessAnimStunStartU_joint8[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -134, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -214, 23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 375, 13, 0, 24, 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -10, 0, 364, -3, -32, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTNessAnimStunStartU_joint10[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 30), 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimStunStartU_joint11[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1638, -13, 312, 9, -2037, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 379, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -2071, -359, -2397, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2528, -431, -2655, -228,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3115, -131,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2936, 91,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 340, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 736, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3197, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -3059, 51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2801, 100,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -2494, 29,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3002, 63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -2504, 18,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2461, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2558, -191,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2517, -81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -3409, -136,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 740, -7, -2818, -245,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 581, -20, -3326, -18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3514, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -3619, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3632, -13, 569, -11, -3336, -9,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimStunStartU_joint12[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -611, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -740, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -646, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -584, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 25,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimStunStartU_joint13[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1334, -879, 1900,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -331, 241, -198, 134, 167, -312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 114, 159, -73, 96, 25, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 466, 53, 286, -8, -30, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 866, 27, -186, -25, 268, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 857, -51, -72, 27, 36, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 508, -127, 8, 21, 71, 14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 90, 54, 126,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimStunStartU_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimStunStartU_joint16[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 381, -23, -90, 7, -397, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -851, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -322, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -31, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -84, -52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -362, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -829, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -343, 23,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -330, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -284, 5,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -320, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -305, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -365, -2, -279, 4, -297, 7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimStunStartU_joint18[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 294, 42,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 898, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 919, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 665, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 636, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 403, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimStunStartU_joint19[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -132, 12, -207, 2, 575, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 111, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 229, -15, 19, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 206, -12, -30, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -8, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 13, -6,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 100, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 11, 3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 47, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, -8, 12, 0, 26, -21,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimStunStartU_joint21[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -385, 9, -67,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -655, 9, 176, 6, -294, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -231, 34, 124, -8, 9, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -106, 12, 69, -11, 87, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -66, 0, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimStunStartU_joint22[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1570, -166, 948, 99, -2684, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -1767, 124, 1124, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -2351, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2148, 195,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1797, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1644, 113, 1151, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1669, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 1472, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1837, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -1822, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1679, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), -1735, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1735, 0, 1472, 0, -1819, 3,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimStunStartU_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 570, 27,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 959, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 869, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 757, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 728, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 413, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimStunStartU_joint25[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -52, -129, -54, -1, -101, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 16, 55, -518, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 36, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 148, 94,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 159, -9,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 69, 32, -480, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 60, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -203, 3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 150, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 78, -3,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 51, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 26, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 76, -1, 25, -1, -202, 1,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimStunStartU_joint26[82] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -359, -397, -289,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -392, -23, -376, 22, -259, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -454, -1, -306, 18, -180, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -187, 118, -281, 21, -252, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -197, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -99, 98, -256, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 108, 38, -194, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 122, -11, -192, 8, -105, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -48, 9, -35, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -43, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -130, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 56, 0, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
