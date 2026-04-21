/* AnimJoint data for relocData file 1712 (FTNessAnimTechF) */
/* 3568 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimTechF_joint1[18];
extern u16 dFTNessAnimTechF_joint2[110];
extern u16 dFTNessAnimTechF_joint3[46];
extern u16 dFTNessAnimTechF_joint5[50];
extern u16 dFTNessAnimTechF_joint6[156];
extern u16 dFTNessAnimTechF_joint7[56];
extern u16 dFTNessAnimTechF_joint8[24];
extern u16 dFTNessAnimTechF_joint9[80];
extern u16 dFTNessAnimTechF_joint11[74];
extern u16 dFTNessAnimTechF_joint12[172];
extern u16 dFTNessAnimTechF_joint13[58];
extern u16 dFTNessAnimTechF_joint14[64];
extern u16 dFTNessAnimTechF_joint16[10];
extern u16 dFTNessAnimTechF_joint17[106];
extern u16 dFTNessAnimTechF_joint19[40];
extern u16 dFTNessAnimTechF_joint20[104];
extern u16 dFTNessAnimTechF_joint22[166];
extern u16 dFTNessAnimTechF_joint23[106];
extern u16 dFTNessAnimTechF_joint25[40];
extern u16 dFTNessAnimTechF_joint26[100];
extern u16 dFTNessAnimTechF_joint27[150];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTNessAnimTechF_joints[] = {
	(u32)dFTNessAnimTechF_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimTechF_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimTechF_joint3, /* [2] joint 3 */
	(u32)dFTNessAnimTechF_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTNessAnimTechF_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimTechF_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimTechF_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimTechF_joint9, /* [8] joint 9 */
	(u32)dFTNessAnimTechF_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTNessAnimTechF_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimTechF_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimTechF_joint14, /* [13] joint 14 */
	(u32)dFTNessAnimTechF_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTNessAnimTechF_joint17, /* [16] joint 17 */
	(u32)dFTNessAnimTechF_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTNessAnimTechF_joint20, /* [19] joint 20 */
	(u32)dFTNessAnimTechF_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTNessAnimTechF_joint23, /* [22] joint 23 */
	(u32)dFTNessAnimTechF_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTNessAnimTechF_joint26, /* [25] joint 26 */
	(u32)dFTNessAnimTechF_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTNessAnimTechF_joint1[18] = {
	ftAnimSetVal(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 6), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 4000,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 24), 4800,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), 4800,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimTechF_joint2[110] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -5013, 0, 0, 780, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 720, -80,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -5013, 58, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), -1, -102,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 21, 720, -639, 0, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -4423, 475, 0, 0, 14, 17, 240, 68, -9, -11,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1206, 714,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 14, 780, -9,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 14, 0, 240, 120, -9, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2010, 294,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 15), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 14, 840, -9,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 14, 7, 240, -582, -9, -1,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), 3216,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 21, 7, 330, 113, -11, -1,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 16), 537,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 24, -18, -11, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 11), 3216, 0, -16, -28,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTNessAnimTechF_joint3[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 29), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 7, 0, 9, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 7, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 7, 0, 9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 28, -360, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimTechF_joint5[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 6), 0, 52, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 522, 65, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 522, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 522, 0, 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 21), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 536, -24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 11), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTNessAnimTechF_joint6[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 815, 0, -50, 0, 1806, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -265, -77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1789, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 819, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 815, -78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 192, -119,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -325, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -239, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 121, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 127, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1785, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1794, 34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -242, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -272, -49,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 119, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 129, -103, 1853, 253,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2712, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -88, -217, -344, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -305, -88, -261, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -264, 40, -281, 12, 2720, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -331, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 75, -16, 2886, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 44, -94, 2966, 171,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -210, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -343, 0, 3229, 206,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -263, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3378, 128,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 3625, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -285, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -402, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -410, -7, -261, 2, 3632, 7,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimTechF_joint7[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -391, -237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -475, 195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -9, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -45, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -356, -208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -463, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -483, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTNessAnimTechF_joint8[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -1072,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1072, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 0, 134,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 26), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTNessAnimTechF_joint9[80] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -375, 0, 0, 0, 288, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -375, 107, 0, 0, 288, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 288, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 484, 107,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), 484,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 484, -8, 0, 0, 288, 3, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 21), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 402, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -187, -25, 0, 22, 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -10, 0, 364, -3, -32, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTNessAnimTechF_joint11[74] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -221, 139, -209, 0, 54, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -221, 13, 139, -15, -209, 23, 0, 0, 54, 0, -17, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -83, 17, -13, -19, 20, 28, 0, 0, 54, 0, -17, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -83, -13, 20, 0, 54, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -83, 3, -13, 0, 20, -1, 0, 0, 54, -16, -17, 5,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 21), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimTechF_joint12[172] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 738, -12, 1561, 1, 181, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1562, -46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 201, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 677, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 735, 129,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1171, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1474, -112,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1203, 43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1240, 82, 161, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1352, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 242, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1263, 61, 222, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1366, -24, 185, 28,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1355, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1315, 87, 1329, -97, 229, 229,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1167, 362,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1530, 270, 1170, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1856, 151, 1202, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1145, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1833, -188, 1370, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1479, -261, 1219, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1311, -119, 1198, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1246, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 1062, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1045, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1117, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1153, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1075, -49,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1290, 70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1478, 22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1160, 33, 1050, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1184, 16, 1041, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1192, 7, 1038, -2, 1489, 11,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimTechF_joint13[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -434, -330,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -660, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -514, 286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -87, 257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -478, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -538, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, -20,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTNessAnimTechF_joint14[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1072, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1072, -134, 0, -107, 0, 71,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -268, -131, 714, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), -1072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 148, 51, 0, 63, -25, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 294, 32, -377, 10, -101, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 508, 21, 117, 42, -761, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 507, -26, 47, -3, -699, 55,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 90, 54, 126,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTNessAnimTechF_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTNessAnimTechF_joint17[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1473, -3, -1377, -3, -1563, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 1595, 79, -1307, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1695, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1879, -178,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2132, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1677, 58, -1302, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1724, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1315, -27,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2132, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2287, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1725, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1523, -23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1370, -56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1460, 43,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2324, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -1914, 16,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1494, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1249, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1419, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -1329, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1242, -7, -1328, 1, -1906, 8,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimTechF_joint19[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 400, -16,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 597, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 822, 195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1055, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1052, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 884, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 819, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 401, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTNessAnimTechF_joint20[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1820, 1, -1597, 1, 1452, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1832, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1360, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -1686, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1754, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1790, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1827, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1653, 82, 1359, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1466, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1661, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1790, 24,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1790, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1577, -37,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1761, 33, 1507, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1529, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 1637, -3,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1622, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1604, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1520, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1604, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1602, 1, -1620, -16, 1634, -2,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimTechF_joint22[166] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, 34, 53,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 206, 1, 196, 5, 16, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -62, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 72, -31, -19, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 250, 31, 102, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -39, -8, 122, -9, 75, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 221, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -78, -11, 105, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -62, 0, 105, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 244, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -80, -1, 114, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -66, 6, 120, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -55, -1, 129, 21, 106, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -70, -15, 287, 0, 121, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -85, -43, 112, -25, 67, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -157, -44, 236, 15, 42, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -173, -25, 144, -99, -4, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -209, -17, 36, -89, -33, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -208, -47, -34, -12, -83, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -304, -69, -45, -1, -85, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -44, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -347, -6, -183, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -326, 11, -229, 15,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 11), -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -4, 4, -55, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTNessAnimTechF_joint23[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1408, 4, 1421, 3, -1572, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1600, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1384, -29, -1705, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1362, -8, -1893, -182,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2154, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 1346, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1717, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1773, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1774, 0, -2154, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1501, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1875, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1348, 4, -1808, 65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1683, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1474, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1485, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1716, -11,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1724, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1816, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1725, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1733, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1734, -1, 1471, -2, -1816, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimTechF_joint25[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, -16,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 640, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 874, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1109, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1110, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 795, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 728, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 412, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 401, -11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTNessAnimTechF_joint26[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, 0, -1514, 0, -1821, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 18), -1503,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 1760, 36, -1896, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1788, 14, -1910, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1982, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 1799, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1503, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1720, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2002, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -1886, 32,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1730, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1668, 23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1799, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1689, -10,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1849, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1811, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1647, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1636, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1684, -5, -1633, 2, -1810, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTNessAnimTechF_joint27[150] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 183, -397, -289,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -44, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 439, -2, -372, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 21, -91, -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -19, -38, -101, -66, -95, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -92, -1, -207, -13, -106, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -65, 15, -127, 0, -95, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, -1, -205, 17, -128, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -70, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -69, 4, -109, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -99, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -54, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -84, -2, -176, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -62, 4, -112, 10, -103, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -69, 0, -144, -19, -77, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -63, 12, -190, -10, -120, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, 53, -187, 25, -118, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 148, 60, -88, 32, -90, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 218, -6, -56, 24, -81, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 0, 3,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 14), 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 9, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimEnd(),
	0x0000, 0x0000,
};
