/* AnimJoint data for relocData file 1713 (FTNessAnimTechB) */
/* 4768 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimTechB_joint1[44];
extern u16 dFTNessAnimTechB_joint2[130];
extern u16 dFTNessAnimTechB_joint3[20];
extern u16 dFTNessAnimTechB_joint5[50];
extern u16 dFTNessAnimTechB_joint6[214];
extern u16 dFTNessAnimTechB_joint7[102];
extern u16 dFTNessAnimTechB_joint8[24];
extern u16 dFTNessAnimTechB_joint9[74];
extern u16 dFTNessAnimTechB_joint11[80];
extern u16 dFTNessAnimTechB_joint12[204];
extern u16 dFTNessAnimTechB_joint13[92];
extern u16 dFTNessAnimTechB_joint14[62];
extern u16 dFTNessAnimTechB_joint16[10];
extern u16 dFTNessAnimTechB_joint17[226];
extern u16 dFTNessAnimTechB_joint19[102];
extern u16 dFTNessAnimTechB_joint20[158];
extern u16 dFTNessAnimTechB_joint22[118];
extern u16 dFTNessAnimTechB_joint23[216];
extern u16 dFTNessAnimTechB_joint25[120];
extern u16 dFTNessAnimTechB_joint26[284];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTNessAnimTechB_joints[] = {
	(u32)dFTNessAnimTechB_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimTechB_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimTechB_joint3, /* [2] joint 3 */
	(u32)dFTNessAnimTechB_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTNessAnimTechB_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimTechB_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimTechB_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimTechB_joint9, /* [8] joint 9 */
	(u32)dFTNessAnimTechB_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTNessAnimTechB_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimTechB_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimTechB_joint14, /* [13] joint 14 */
	(u32)dFTNessAnimTechB_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTNessAnimTechB_joint17, /* [16] joint 17 */
	(u32)dFTNessAnimTechB_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTNessAnimTechB_joint20, /* [19] joint 20 */
	(u32)dFTNessAnimTechB_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTNessAnimTechB_joint23, /* [22] joint 23 */
	(u32)dFTNessAnimTechB_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTNessAnimTechB_joint26, /* [25] joint 26 */
	0xFFFF0475, /* [26] END */
};

/* Joint 1 */
u16 dFTNessAnimTechB_joint1[44] = {
	ftAnimSetVal(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimSetValT(FT_ANIM_TRAY, 10), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 6), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -3520,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 24), -4800,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 13), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 2880,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 480,
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), 0, -720,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 10), -4800,
	ftAnimBlock(0, 2),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 8), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimTechB_joint2[130] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 7854, 0, 0, 780, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 7854, -262, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 756, 192,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 8, 780, -721, 0, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 5227, -874, 0, 0, 5, 9, 214, 192, 180, -12,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 900, 820, -8, -1440,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2010, -714,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 1), 5,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 13), 5,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 420, -1826, -180, 501,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 214, 1279, 180, 458,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1206, -321, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 900, 1540, -8, -1440,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 600, -1370, -180, 376,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 214, 399, 180, 229,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -2814, -95, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 900, 1096, -8, -300,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 900, -342,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), -8,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 5, -10, 600, -181, -8, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), -3216, 0, -16, 537, -28,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTNessAnimTechB_joint3[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 28, -360, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimTechB_joint5[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 6), 0, 18, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 187, 23, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 187, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 187, 14, 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 21), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 402, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 11), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTNessAnimTechB_joint6[214] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -792, 3, -1561, -3, 197, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 135, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -776, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1565, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1514, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1471, -51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 122, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 197, 81,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -792, -41, -1557, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -860, -162, -1476, 71, 303, 102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 466, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1117, -383, -1413, 48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1365, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1627, -363,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1843, -130, 489, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 503, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1888, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1884, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1852, -12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1365, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1395, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1869, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1843, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1780, 69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1423, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 527, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 756, 54,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1397, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1384, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 810, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 968, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1400, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1372, 41,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1389, -35, 1030, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1455, -112, -1311, 55, 1198, 226,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1264, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1614, -147, 1482, 248,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2001, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2008, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1293, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1347, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2020, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2018, -10, -1347, 0, 2024, 4,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimTechB_joint7[102] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -154, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -298, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -341, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -278, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -185, -238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -485, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -645, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -621, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -501, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, 27,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTNessAnimTechB_joint8[24] = {
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
u16 dFTNessAnimTechB_joint9[74] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -375, 0, 0, 0, 288, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 0, 288, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), -536,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -375, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 402, 97, 0, 0, 288, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 402, 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 402, -10, 0, 0, 288, 3, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 21), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 187, -19, 0, 17, 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -10, 0, 364, -3, -32, 4,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimTechB_joint11[80] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -221, 139, -209, 0, 54, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -221, 24, 139, -15, -209, 23, 0, 0, 54, 0, -17, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 22, 30, -13, -19, 20, 28, 0, 0, 54, 0, -18, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 22, -13, 20, 0, 54, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 22, -1, -13, 0, 20, -1, 0, 0, 54, 0, -18, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, -1, 0, 0, 0, 0, 0, 0, 54, -20, -18, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimTechB_joint12[204] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 738, -8, 1561, -41, 181, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 122, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 738, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1520, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1462, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1445, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 82, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 89, 59,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1448, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1561, -1, 181, 107,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 416, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 828, 85, 1444, -99,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1006, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1303, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 472, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 489, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1005, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1009, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1296, -2, 491, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1302, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 543, 22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1032, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 998, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 932, -62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 712, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1294, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1099, -49,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 570, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 782, 114,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 730, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 776, 58, 1049, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 847, 136, 1027, -68, 911, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1048, 276, 912, -68, 1169, 332,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 933, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1400, 230, 1576, 281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1482, -47, 1738, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1414, -70, 954, 21, 1693, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1202, -19, 1033, 9, 1500, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1192, -10, 1038, 5, 1489, -11,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimTechB_joint13[92] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -110,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -110, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -287, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -412, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -366, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -254, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -409, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -564, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -574, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -562, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 3,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTNessAnimTechB_joint14[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1072, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1072, -38, 0, -36, 0, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 682, -40, -361, 20, 94, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 867, 203, 103, 82, 26, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1498, 2, -31, 15, -38, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 905, -33, 301, -2, 47, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 926, -50, -75, -15, -107, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 90, 54, 126,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimTechB_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTNessAnimTechB_joint17[226] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1473, -1, -1377, -5, -1563, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1451, -34, -1402, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1516, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1389, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1402, -25, -1455, -28, -1187, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1400, 0, -1459, -1, -1157, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1401, 22, -1457, 30, -1211, -156,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1530, 105, -1314, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1471, -310,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2249, -396,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1656, 112, -1263, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1755, 50, -1428, -139, -2625, -260,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2768, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1757, 2, -1542, -61,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1739, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1552, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1551, 3, -2768, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2738, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1579, -12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1724, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1703, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2720, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2560, 59,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1590, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1567, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2492, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1710, 3, -2384, 112,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1638, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2268, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2278, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1571, -3, -2277, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1590, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2276, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1563, -73, -2191, 84,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2065, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1317, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1587, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1392, 37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2070, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1915, 17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1297, -21, -1357, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1246, -8, -1329, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1242, -3, -1328, 0, -1906, 9,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimTechB_joint19[102] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 400, -25,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 270, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 720, 374,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1046, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1207, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1222, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1222, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1222, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1130, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1081, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 637, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 479, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 245, -239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -118,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 60, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 187, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 397, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, -1,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTNessAnimTechB_joint20[158] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1820, -10, -1597, 0, 1452, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 18), -1608,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 1443, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1840, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1827, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1820, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1776, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1772, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1769, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1710, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1608, -5, 1443, 39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1610, 87,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1673, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1712, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1699, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1698, 85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2006, 13,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1680, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1633, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1675, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1675, 22, 2013, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1897, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1578, 52, -1630, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1654, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1597, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1879, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1665, -14, 1807, -63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1668, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1753, -45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1640, -7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1651, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1623, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1602, -5, -1620, 3, 1634, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTNessAnimTechB_joint22[118] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, 34, 53,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 218, 15, 41, 32, 104, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 133, -104, 263, 53, 189, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -199, -316, 256, -112, 40, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -499, -156, 37, -79, 59, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -669, -41, 17, -4, 67, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -623, 2, 24, -2, 68, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -659, -11, 5, 0, 59, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -667, 2, 26, 3, 63, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -654, 11, 13, -10, 58, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -644, -5, 4, 20, 54, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -665, -13, 53, -19, 18, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -671, 38, -33, -8, 40, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -434, 30, 0, 1, 36, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -66, 0, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTNessAnimTechB_joint23[216] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1408, 4, 1421, 7, -1572, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1470, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1384, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1511, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1457, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1468, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1485, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1421, -62,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1408, -45, -1572, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1475, -106, 1340, -70, -1806, -314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1620, -135, 1280, 48, -2201, -407,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1747, -68, 1437, 130, -2620, -284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1757, -6, 1542, 56, -2771, -73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1753, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1551, 4, -2768, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1520, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2769, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2777, 3,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1522, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1571, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1757, 9, -2771, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1714, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2669, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2577, 89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2234, 95,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1711, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1677, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2131, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1549, -14, -1968, 117,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1538, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1896, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1885, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1781, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1667, 8, -1693, 79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1734, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1622, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1679, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1522, -15, -1687, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1475, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1727, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1743, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1820, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1735, -1, 1472, -3, -1819, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimTechB_joint25[120] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, -29,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 334, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 237, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 177, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 257, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, 252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 762, 322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1083, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1227, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1222, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1222, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1222, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1222, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1140, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1048, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 575, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 405, -229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 115, -202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 198, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 264, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 335, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 360, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 409, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTNessAnimTechB_joint26[284] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, 0, -1514, 1, -1821, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -1565, -30, -1798, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1706, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1697, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1730, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1709, 0, -1595, -21, -1783, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1608, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 8), -1773,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1735, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1734, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1718, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1608, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 3), -1608,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1773, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1674, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1730, 21, -1608, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1837, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1680, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1750, -67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -2067, -23,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1823, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1789, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1701, -71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1628, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2088, 3, -1671, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1617, 29, -2060, 53, -1744, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1687, 16, -1981, 65, -1657, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1754, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1776, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1651, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1667, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1661, -2, -1781, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1680, 2, -1813, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1724, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1640, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1684, 3, -1633, 6, -1810, 2,
	ftAnimEnd(),
	0x400E, 0x00B7, 0xFE73, 0xFEDF, 0x48E0, 0xFF82, 0xFFAE, 0xFFF4, 0x200F, 0x0004, 0xFFD0, 0xFFEF, 0xFF4A, 0x0010, 0xFFD4, 0x002A, 0x200F, 0x0003, 0x003D, 0xFFD0, 0xFEE5, 0xFFD5, 0x0006, 0x000E, 0x200F, 0x0001, 0xFF10, 0xFEDA, 0xFEA9, 0xFFFF, 0x000E, 0x0003, 0x200F, 0x0001, 0xFDF1, 0xFF1A, 0xFF76, 0x0080, 0x000D, 0x000C, 0x200F, 0x0001, 0xFD42, 0xFFCA, 0xFFAA, 0x000F, 0x0027, 0x0012, 0x200F, 0x0002, 0xFD4F, 0x0007, 0xFFA5, 0x000A, 0x0044, 0xFFEC, 0x200F, 0x0004, 0xFD6C, 0x0010, 0xFFEA, 0x0012, 0xFFAC, 0xFFE5, 0x200F, 0x0004, 0xFDD2, 0x0024, 0x0037, 0x0002, 0xFF6A, 0x0007, 0x200F, 0x0003, 0xFE6E, 0x0034, 0xFFFE, 0xFFF4, 0xFFDE, 0x001D, 0x200F, 0x0002, 0xFED7, 0x004C, 0xFFFA, 0x0000, 0xFFFC, 0x0009, 0x200F, 0x0003, 0xFFEF, 0x0017, 0x0000, 0x0000, 0x000C, 0x0000, 0x380F, 0x000C, 0x0038, 0x0000, 0x0000, 0x0000,
};
