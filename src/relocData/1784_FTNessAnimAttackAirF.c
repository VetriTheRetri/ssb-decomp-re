/* AnimJoint data for relocData file 1784 (FTNessAnimAttackAirF) */
/* 4576 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimAttackAirF_joint1[86];
extern u16 dFTNessAnimAttackAirF_joint2[46];
extern u16 dFTNessAnimAttackAirF_joint4[24];
extern u16 dFTNessAnimAttackAirF_joint5[200];
extern u16 dFTNessAnimAttackAirF_joint6[142];
extern u16 dFTNessAnimAttackAirF_joint7[108];
extern u16 dFTNessAnimAttackAirF_joint8[66];
extern u16 dFTNessAnimAttackAirF_joint10[10];
extern u16 dFTNessAnimAttackAirF_joint11[202];
extern u16 dFTNessAnimAttackAirF_joint12[130];
extern u16 dFTNessAnimAttackAirF_joint13[166];
extern u16 dFTNessAnimAttackAirF_joint15[10];
extern u16 dFTNessAnimAttackAirF_joint16[142];
extern u16 dFTNessAnimAttackAirF_joint18[96];
extern u16 dFTNessAnimAttackAirF_joint19[172];
extern u16 dFTNessAnimAttackAirF_joint21[54];
extern u16 dFTNessAnimAttackAirF_joint22[214];
extern u16 dFTNessAnimAttackAirF_joint24[98];
extern u16 dFTNessAnimAttackAirF_joint25[270];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimAttackAirF_joints[] = {
	(u32)dFTNessAnimAttackAirF_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimAttackAirF_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimAttackAirF_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimAttackAirF_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimAttackAirF_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimAttackAirF_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimAttackAirF_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimAttackAirF_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimAttackAirF_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimAttackAirF_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimAttackAirF_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimAttackAirF_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimAttackAirF_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimAttackAirF_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimAttackAirF_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimAttackAirF_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimAttackAirF_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimAttackAirF_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimAttackAirF_joint25, /* [24] joint 25 */
	0xFFFF044E, /* [25] END */
};

/* Joint 1 */
u16 dFTNessAnimAttackAirF_joint1[86] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 242, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 25, 25, 195, -47, -65, -65,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 25, -18, 195, 47, -65, 92,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 6, -8, 242, 22, 341, 28,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 6, 0, 242, -7, 341, 16,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 7), 6, 0, 386, -131,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 6), 224, -121,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 136, -834,
	ftAnimSetValRateT(FT_ANIM_TRAX, 7), 4, -4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -88, -274, 193, -427,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 379, -165, -516,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 148, 324, -129, 220,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 242, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimAttackAirF_joint2[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, -209,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -56, -7, -32, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -56, 48, -32, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 332, 5, 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 332, 9, 0, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1829, 353,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -85, -12,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 14), -209,
	ftAnimBlock(0, 6),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 3216,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimAttackAirF_joint4[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 148,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 281, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 215, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 215, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 17), 148,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimAttackAirF_joint5[200] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2101, -550, -927, -15, -2407, 616,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -991, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1551, -336, -1790, 409,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1428, -125, -1588, 188,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1232, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1178, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1059, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1622, -14, -949, 38, -1199, 211,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 382, -844, -1040, -403,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -636, 663,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 126, 531,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -486, -323, -1721, -390, 426, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -265, 118, -1820, -52, 214, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -249, 15, -1826, -6, 209, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -286, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -1823, 16, 218, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1794, 196, 172, -342,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1104, -469,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -266, -507, -1429, 258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1301, -593, -1276, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1452, -127, -1341, 4, -1405, -204,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1624, -104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1433, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1267, 78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1199, -48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1722, -121,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2193, -102,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1302, 100, -1263, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1018, 76,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1297, 25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2272, -101,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2590, 114,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -950, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -943, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1260, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1070, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1115, -171, -927, 143, -2407, 183,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimAttackAirF_joint6[142] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), -539, -132,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -672, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -628, 33,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -514, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -312, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -116, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -408, -291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -699, 204,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 290, 287, 283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 0, 345, 5113, 1012, 5100, 4120, 5087, 986,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_SCAY, 1), -9, -4, 8216, -20,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 1), 5108, 5082,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX | FT_ANIM_SCAZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 5108, -93, 7568, -408, 5082, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 0, 0,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4169, -15, 4129, -10, 4143, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -451,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -903, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -346, 446,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 12), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -289, -265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -539, -250,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimAttackAirF_joint7[108] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAY), 0, 0, 268, 4096,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_SCAY, 8), 4096, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -773, -58, -217, -7, 529, 23,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 8), 4096, 4096,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX | FT_ANIM_SCAZ), 1638, -113,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 12288, 2067, 6144, 50, 3529, -725,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), -696, 17, -95, 35, 544, 5, 8230, -718, 4197, -25, 2644, -121,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 13), 6902, -462, 2621, 28,
	ftAnimSetVal0RateT(FT_ANIM_SCAY, 30), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -687, 4, -38, 10, 554, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -674, 3, -42, -10, 543, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -669, -2, -88, -5, 536, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -695, 30, -88, 4, 487, -12,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 0, 0, 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 5), 4069, 4131,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 12), 4096, 4096,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimAttackAirF_joint8[66] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 194, 0, 300, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, -17, 300, -65, 0, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 594, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 594, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -481, -19, -21, -10, 218, -38, -101, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), -481, 16, -21, 5, 218, 20, -101, 25,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 751, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 575, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 665, -47,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 194,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTNessAnimAttackAirF_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 42),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimAttackAirF_joint11[202] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 573, 17, 639, -150, -3038, 46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 353, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 544, 21, -2913, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 569, -7, -2783, 119,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 401, 62, -2537, 135,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 397, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 437, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 562, 659, 534, -137, -2342, 674,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1720, 468, 163, -250, -1188, 473,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1498, -118, 33, -67, -1396, -102,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 23, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1475, -6, -1399, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1470, -3, -1394, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), 1498, -5, -1396, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 25, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 12, -13,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1487, -47, -1427, -602,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1403, -512, -2601, -717,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 462, -510, -4, 89, -2862, -234,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3159, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 382, -45, 191, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 371, -8, 245, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 237, -105,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 380, 135,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3192, -74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3620, -110,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 124, -87,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -166, -152,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3711, -120,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -4108, -37,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -345, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -406, 361, 561, 151, -4073, 433,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 377, 490, 683, 39, -3240, 517,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 573, 196, 639, -43, -3038, 202,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimAttackAirF_joint12[130] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), -433, -198,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -676, 84,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, 4096, 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -561, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -536, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -762, 268,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 290, 287, 283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 0, 376, 5113, 1012, 5100, 4120, 5087, 986,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateT(FT_ANIM_SCAY, 1), 8216, -20,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 1), 5108, 5082,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX | FT_ANIM_SCAZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 5108, -93, 7568, -408, 5082, -93,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), -9,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4169, -15, 4129, -10, 4143, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -696,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1402, -207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -415, 701,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 203,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 12), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -149, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -432, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -433, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimAttackAirF_joint13[166] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAY | FT_ANIM_SCAZ), -170, -63, 267, 4096, 4096,
	ftAnimSetValBlock(FT_ANIM_SCAX), 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 518, 25, -190, 15, -420, 56,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 2), 4096,
	ftAnimSetValRateT(FT_ANIM_SCAY, 6), 4096, 10,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 6), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 80, 12, 771, 476,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX | FT_ANIM_SCAZ), 2047, -255,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 12288, 2069, 6144, 12, 3072, -823,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 640,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -165, -124, 533, -100,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 911,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -168, -23, 571, 14,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 8234, -724, 4120, 13, 2187, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 925,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -211, -14, 561, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 907,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -212, 2, 548, 0,
	ftAnimSetValRateT(FT_ANIM_SCAX, 13), 6853, -459,
	ftAnimSetValRateT(FT_ANIM_SCAZ, 14), 2559, 212,
	ftAnimSetVal0RateT(FT_ANIM_SCAY, 30), 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 940,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -201, 10, 560, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 905,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -180, 10, 557, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 933,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -159, 1, 573, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 905,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -170, 4, 493, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 979,
	ftAnimSetValRateT(FT_ANIM_SCAX, 5), 4097, -38,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -170, -63, 267,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAZ, 4), 4097,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 12), 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTNessAnimAttackAirF_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 42),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimAttackAirF_joint16[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1575, 35, -1248, -47, 908, -137,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 736, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -1539, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 1645, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1671, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1688, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 714, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 852, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 856, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 852, 9,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1689, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1579, -25,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 874, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 826, -65,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1551, -17, -1544, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1270, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1535, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1605, 8, 737, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1552, 19, 950, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1643, 22, 806, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1641, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 963, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 880, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1747, 51, 712, -89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1610, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1261, 10, 701, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1246, 0, 860, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1575, -34, -1248, -1, 908, 47,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimAttackAirF_joint18[96] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 439, 301,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 948, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 941, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 951, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 948, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1066, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 986, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 967, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 970, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 962, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 895, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 646, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 454, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 483, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 524, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 775, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 427, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 462, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 198, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 185, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 384, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 444, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 439, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimAttackAirF_joint19[172] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1596, 134, 1573, -70, 1601, 75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1655, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1599, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1875, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1863, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1519, -15,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1643, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1643, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1819, 88,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1822, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1503, -13, 1600, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 1481, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 1648, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1823, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 1819, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1786, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1614, 45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1478, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1589, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1657, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1319, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1712, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1753, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1607, 52, 1678, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1694, -50, 1962, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1507, -127, 1308, 12, 1741, -88,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1530, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1561, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1784, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1986, 61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1791, -98,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1537, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1589, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1711, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1633, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1596, 7, 1573, 12, 1601, -32,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimAttackAirF_joint21[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -476, 178, 112,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -436, 4, 26, -19, 1, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -436, -1, 26, -3, 1, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -448, 0, -1, -1, -16, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -448, -5, -1, 2, -16, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -562, -1, 49, 10, 20, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -476, 178, 112,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimAttackAirF_joint22[214] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -66, -141, 442, -70, -807, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -208, -37, 372, -116, -819, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -141, 23, 208, -94, -616, 107,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -155, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 234, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -598, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -599, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -608, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -146, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -20, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 208, -35, -616, 236,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 261, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 162, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 71, 45, 9, -79,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -4, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 64, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 260, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 261, -16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -8, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 120, 35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 62, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 37, -20,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 236, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 284, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 106, -183,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -464, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 143, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 203, 27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -176, 27, -721, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 59, 221, 252, 0, -544, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 316, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 203, 50, -606, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 353, 88, -964, -313,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 334, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 63, -200, -1233, -207,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -219, 79, -1079, 172,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 233, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 420, 42,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -125, 76, -902, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -66, 59, 442, 21, -807, 94,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimAttackAirF_joint24[98] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 619, 317,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1132, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1141, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1132, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1091, -333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 466, -319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 451, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 464, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 466, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 380, -233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 366, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 147, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 427, 416,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 832, 258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 944, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 837, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 694, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 619, -75,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimAttackAirF_joint25[270] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 7, 56, -104, -32, -31, -135,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -202, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 124, 45, -148, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 150, 11, -154, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -112, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 85, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 59, -90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -186, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -222, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -40, 38, 189, 211,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -23, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -186, 0, 200, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 190, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -186, 8,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -22, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -132, -7,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 189, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -168, 30, 260, 158,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -67, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 506, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 636, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -39, 115, 742, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 162, 72, 373, -249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 105, -128, -141, -45, 243, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -347, -259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -223, -93, 375, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -328, 88, -24, -394,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -614, -30, -45, 317, -414, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -408, 185, 306, 28, -53, 367,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -243, 116, 11, -215, 321, 101,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -26, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -125, -69, 149, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -112, 11, -24, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, 34, -104, 8, -31, -6,
	ftAnimEnd(),
	0x400E, 0xFEAD, 0xFF00, 0xFF2D, 0x48E0, 0xFF82, 0xFFAE, 0xFFF4, 0x200F, 0x0002, 0xFF50, 0x0012, 0x0043, 0x0017, 0xFFCE, 0x0010, 0x200F, 0x0006, 0xFF50, 0x001A, 0x0043, 0xFFFB, 0xFFCE, 0x000C, 0x200F, 0x0002, 0x0177, 0x0007, 0x0017, 0xFFFE, 0x005C, 0x0008, 0x200F, 0x000F, 0x0177, 0x0007, 0x0017, 0xFFFC, 0x005C, 0x0008, 0x200F, 0x0005, 0xFFB8, 0xFF96, 0xFFC1, 0xFFEF, 0x0018, 0xFFF1, 0x200F, 0x0002, 0xFE8E, 0xFFB0, 0xFF9C, 0xFFEE, 0xFFEF, 0xFFEB, 0x200F, 0x0002, 0xFE74, 0xFFE9, 0xFF77, 0xFFEE, 0xFFC2, 0xFFE9, 0x200F, 0x0004, 0xFDFF, 0x0007, 0xFF2C, 0xFFF2, 0xFF64, 0xFFEE, 0x380F, 0x0004, 0xFEAD, 0xFF00, 0xFF2D, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
