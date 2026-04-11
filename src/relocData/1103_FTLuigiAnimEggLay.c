/* AnimJoint data for relocData file 1103 (FTLuigiAnimEggLay) */
/* 1344 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLuigiAnimEggLay_joint1[12];
extern u16 dFTLuigiAnimEggLay_joint2[36];
extern u16 dFTLuigiAnimEggLay_joint4[28];
extern u16 dFTLuigiAnimEggLay_joint5[64];
extern u16 dFTLuigiAnimEggLay_joint6[40];
extern u16 dFTLuigiAnimEggLay_joint7[12];
extern u16 dFTLuigiAnimEggLay_joint8[46];
extern u16 dFTLuigiAnimEggLay_joint10[12];
extern u16 dFTLuigiAnimEggLay_joint11[74];
extern u16 dFTLuigiAnimEggLay_joint12[24];
extern u16 dFTLuigiAnimEggLay_joint13[20];
extern u16 dFTLuigiAnimEggLay_joint15[8];
extern u16 dFTLuigiAnimEggLay_joint16[48];
extern u16 dFTLuigiAnimEggLay_joint18[24];
extern u16 dFTLuigiAnimEggLay_joint20[44];
extern u16 dFTLuigiAnimEggLay_joint21[58];
extern u16 dFTLuigiAnimEggLay_joint23[74];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTLuigiAnimEggLay_joints[] = {
	(u32)dFTLuigiAnimEggLay_joint1, /* [0] joint 1 */
	(u32)dFTLuigiAnimEggLay_joint2, /* [1] joint 2 */
	(u32)dFTLuigiAnimEggLay_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLuigiAnimEggLay_joint5, /* [4] joint 5 */
	(u32)dFTLuigiAnimEggLay_joint6, /* [5] joint 6 */
	(u32)dFTLuigiAnimEggLay_joint7, /* [6] joint 7 */
	(u32)dFTLuigiAnimEggLay_joint8, /* [7] joint 8 */
	(u32)dFTLuigiAnimEggLay_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTLuigiAnimEggLay_joint11, /* [10] joint 11 */
	(u32)dFTLuigiAnimEggLay_joint12, /* [11] joint 12 */
	(u32)dFTLuigiAnimEggLay_joint13, /* [12] joint 13 */
	(u32)dFTLuigiAnimEggLay_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTLuigiAnimEggLay_joint16, /* [15] joint 16 */
	(u32)dFTLuigiAnimEggLay_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTLuigiAnimEggLay_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLuigiAnimEggLay_joint21, /* [20] joint 21 */
	(u32)dFTLuigiAnimEggLay_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	0xFFFF0137, /* [23] END */
};

/* Joint 1 */
u16 dFTLuigiAnimEggLay_joint1[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 223, 0, 0, 540, 0,
	ftAnimBlock(0, 60),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLuigiAnimEggLay_joint2[36] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAZ), -30,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 30), 36,
	_FT_ANIM_CMD(11, FT_ANIM_TRAZ, 1), 15,
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), -71, -790, -95, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 30), -90,
	ftAnimBlock(0, 15),
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 30), -30,
	ftAnimBlock(0, 15),
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 30), 0,
	ftAnimBlock(0, 15),
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 30), 36,
	ftAnimBlock(0, 15),
	ftAnimLoop(0x6800, -70),
};

/* Joint 4 */
u16 dFTLuigiAnimEggLay_joint4[28] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_TRAZ), 301, -60,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 30), 98, 60,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_TRAZ, 1), 15,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 258, 110, 0, 0,
	ftAnimBlock(0, 15),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 30), 301, -60,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 30), 98, 60,
	ftAnimBlock(0, 15),
	ftAnimLoop(0x6800, -54),
};

/* Joint 5 */
u16 dFTLuigiAnimEggLay_joint5[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1767, -8, -1324, -1, -1932, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), 1651, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 49), -1215, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -1558, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1559, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 30), -1967, 4,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1671, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), 1877, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1863, -13, -1230, -14, -1963, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1782, -12, -1325, -1, -1953, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1769, -12, -1325, 0, -1937, 16,
	ftAnimLoop(0x6800, -124),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLuigiAnimEggLay_joint6[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -87, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -143, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), -414, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -394, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -71, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTLuigiAnimEggLay_joint7[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -625, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 60),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTLuigiAnimEggLay_joint8[46] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 181, 6, 2, -2, 176, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 305, 1, -41, 0, 172, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 230, -6, -15, 2, 176, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 114, -1, 26, 0, 175, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 181, 6, 2, -2, 176, 0,
	ftAnimLoop(0x6800, -88),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLuigiAnimEggLay_joint10[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -221, 139, -209, 0, 54, -17,
	ftAnimBlock(0, 60),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLuigiAnimEggLay_joint11[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 442, 9, 511, -10, 78, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 49), 694, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 34), 571, 0, 149, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 567, -15, 145, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 303, -131, -118, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 192, -68, -229, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 280, 18, -137, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 297, 16, -118, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 13), 433, 9, 65, 13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 676, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), 523, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 442, 9, 511, -11, 78, 12,
	ftAnimLoop(0x6800, -144),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLuigiAnimEggLay_joint12[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -850, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 34), -744, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -738, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -845, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -850, -5,
	ftAnimLoop(0x6800, -46),
};

/* Joint 13 */
u16 dFTLuigiAnimEggLay_joint13[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 625, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 30), 866, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 806, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 625, 1,
	ftAnimLoop(0x6800, -38),
};

/* Joint 15 */
u16 dFTLuigiAnimEggLay_joint15[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, -804, 0,
	ftAnimBlock(0, 60),
	ftAnimLoop(0x6800, -14),
};

/* Joint 16 */
u16 dFTLuigiAnimEggLay_joint16[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1470, -3, -1378, -1, -1564, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 49), 1553, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 59), -1377, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 43), -1677, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1667, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -1563, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1544, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 1473, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1470, -3, -1378, -1, -1564, -1,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLuigiAnimEggLay_joint18[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 405, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 36), 691, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 677, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 400, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 405, 4,
	ftAnimLoop(0x6800, -46),
};

/* Joint 20 */
u16 dFTLuigiAnimEggLay_joint20[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -208, 3, -8, 3, -160, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 58), -216, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 59), -11, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 40), -250, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -241, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -156, -3,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -212, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -208, 3, -8, 3, -160, -3,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLuigiAnimEggLay_joint21[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 196, -4, 188, 1, 36, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 41), -77, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 56), 184, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 38), 152, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 160, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 200, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -69, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 36, 0,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 184, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 186, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 196, -4, 188, 1, 36, 0,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLuigiAnimEggLay_joint23[74] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 435, -4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), 710, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 698, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 437, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 435, -2,
	ftAnimLoop(0x6800, -46),
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1700, 3, -1517, -3, 1397, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 49), -1494, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 59), 1697, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 46), 1294, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1303, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1395, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1494, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), -1514, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1700, 3, -1517, -3, 1397, 2,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
	0x0000, 0x0000,
};
