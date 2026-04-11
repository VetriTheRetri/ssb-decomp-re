/* AnimJoint data for relocData file 794 (FTFoxAnimShireStartAir) */
/* 896 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimShireStartAir_joint1[10];
extern u16 dFTFoxAnimShireStartAir_joint2[8];
extern u16 dFTFoxAnimShireStartAir_joint4[10];
extern u16 dFTFoxAnimShireStartAir_joint5[40];
extern u16 dFTFoxAnimShireStartAir_joint7[24];
extern u16 dFTFoxAnimShireStartAir_joint8[14];
extern u16 dFTFoxAnimShireStartAir_joint10[10];
extern u16 dFTFoxAnimShireStartAir_joint11[40];
extern u16 dFTFoxAnimShireStartAir_joint12[24];
extern u16 dFTFoxAnimShireStartAir_joint13[12];
extern u16 dFTFoxAnimShireStartAir_joint15[10];
extern u16 dFTFoxAnimShireStartAir_joint16[34];
extern u16 dFTFoxAnimShireStartAir_joint18[22];
extern u16 dFTFoxAnimShireStartAir_joint20[34];
extern u16 dFTFoxAnimShireStartAir_joint21[30];
extern u16 dFTFoxAnimShireStartAir_joint23[20];
extern u16 dFTFoxAnimShireStartAir_joint24[24];
extern u16 dFTFoxAnimShireStartAir_joint25[30];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimShireStartAir_joints[] = {
	(u32)dFTFoxAnimShireStartAir_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimShireStartAir_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimShireStartAir_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimShireStartAir_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimShireStartAir_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTFoxAnimShireStartAir_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimShireStartAir_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimShireStartAir_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimShireStartAir_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimShireStartAir_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimShireStartAir_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimShireStartAir_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimShireStartAir_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimShireStartAir_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimShireStartAir_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimShireStartAir_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimShireStartAir_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimShireStartAir_joint25, /* [24] joint 25 */
	0xFFFF00D8, /* [25] END */
};

/* Joint 1 */
u16 dFTFoxAnimShireStartAir_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 960, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimShireStartAir_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTFoxAnimShireStartAir_joint4[10] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimShireStartAir_joint5[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1331, -49, -1323, -61, 1151, -68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1504, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1380, -96, 1082, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1523, -43, 1205, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1467, 35, -1700, -148, 1123, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1451, 15, -1801, -100, 1035, -87,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimShireStartAir_joint7[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -476, -303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -613, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -582, 30,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTFoxAnimShireStartAir_joint8[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 178, 268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 336, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTFoxAnimShireStartAir_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimShireStartAir_joint11[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1976, 195, 1090, 364, 1592, 276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2171, -139, 1455, 202, 1869, 370,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1697, -571, 1496, 1, 2332, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1028, -341, 1457, 95, 1424, -567,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1014, -14, 1687, 230, 1197, -226,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimShireStartAir_joint12[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, -604,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -612, -599,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1205, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -946, 299,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -606, 340,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimShireStartAir_joint13[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 272, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 625,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimShireStartAir_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimShireStartAir_joint16[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -5, -15, 18, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 18, -30, -89, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -268, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -106, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -30, -49, -105, -16, 145, 251,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimShireStartAir_joint18[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 544, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 499, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 227, -271,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTFoxAnimShireStartAir_joint20[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -16, 60, -64, -11, 610, -168,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 36, -30, 7, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 441, -317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -24, -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -42, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 22, -14, 44, 36, 40, 83,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimShireStartAir_joint21[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1600, -12, 1603, -12, 1116, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1601, 26, 1513, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1343, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1571, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1630, 28, 1501, -11, 1711, 140,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimShireStartAir_joint23[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 626, 40,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 647, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 462, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 279, -183,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimShireStartAir_joint24[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -14, 42, 124, 0, -91, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 150, 31, 69, -26, -35, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 165, 15, 51, -17, 50, 85,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimShireStartAir_joint25[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 442, 49,
	ftAnimEnd(),
	0x0000, 0x4002, 0x0192, 0x48EC, 0x0000, 0x0000, 0x0000, 0x0040, 0xFE3E, 0x2003, 0x0004, 0x0000, 0xFFD4, 0x0000, 0x0000, 0x0000, 0x0000,
};
