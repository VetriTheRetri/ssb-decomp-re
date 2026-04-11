/* AnimJoint data for relocData file 729 (FTFoxAnimCliffEscapeQuick1) */
/* 880 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimCliffEscapeQuick1_joint1[14];
extern u16 dFTFoxAnimCliffEscapeQuick1_joint2[32];
extern u16 dFTFoxAnimCliffEscapeQuick1_joint3[18];
extern u16 dFTFoxAnimCliffEscapeQuick1_joint5[10];
extern u16 dFTFoxAnimCliffEscapeQuick1_joint6[32];
extern u16 dFTFoxAnimCliffEscapeQuick1_joint7[20];
extern u16 dFTFoxAnimCliffEscapeQuick1_joint8[10];
extern u16 dFTFoxAnimCliffEscapeQuick1_joint9[10];
extern u16 dFTFoxAnimCliffEscapeQuick1_joint11[10];
extern u16 dFTFoxAnimCliffEscapeQuick1_joint12[32];
extern u16 dFTFoxAnimCliffEscapeQuick1_joint13[20];
extern u16 dFTFoxAnimCliffEscapeQuick1_joint14[12];
extern u16 dFTFoxAnimCliffEscapeQuick1_joint16[10];
extern u16 dFTFoxAnimCliffEscapeQuick1_joint17[24];
extern u16 dFTFoxAnimCliffEscapeQuick1_joint19[14];
extern u16 dFTFoxAnimCliffEscapeQuick1_joint21[24];
extern u16 dFTFoxAnimCliffEscapeQuick1_joint22[24];
extern u16 dFTFoxAnimCliffEscapeQuick1_joint24[8];
extern u16 dFTFoxAnimCliffEscapeQuick1_joint25[24];
extern u16 dFTFoxAnimCliffEscapeQuick1_joint26[38];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTFoxAnimCliffEscapeQuick1_joints[] = {
	(u32)dFTFoxAnimCliffEscapeQuick1_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimCliffEscapeQuick1_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimCliffEscapeQuick1_joint3, /* [2] joint 3 */
	(u32)dFTFoxAnimCliffEscapeQuick1_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTFoxAnimCliffEscapeQuick1_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimCliffEscapeQuick1_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimCliffEscapeQuick1_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimCliffEscapeQuick1_joint9, /* [8] joint 9 */
	(u32)dFTFoxAnimCliffEscapeQuick1_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTFoxAnimCliffEscapeQuick1_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimCliffEscapeQuick1_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimCliffEscapeQuick1_joint14, /* [13] joint 14 */
	(u32)dFTFoxAnimCliffEscapeQuick1_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTFoxAnimCliffEscapeQuick1_joint17, /* [16] joint 17 */
	(u32)dFTFoxAnimCliffEscapeQuick1_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTFoxAnimCliffEscapeQuick1_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTFoxAnimCliffEscapeQuick1_joint22, /* [21] joint 22 */
	(u32)dFTFoxAnimCliffEscapeQuick1_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTFoxAnimCliffEscapeQuick1_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimCliffEscapeQuick1_joint26, /* [25] joint 26 */
	0xFFFF00D2, /* [26] END */
};

/* Joint 1 */
u16 dFTFoxAnimCliffEscapeQuick1_joint1[14] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -480, -480,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 3), 0, 800,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimCliffEscapeQuick1_joint2[32] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAZ), -420, -26, 0, -44,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAY), 912,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), -503, -220, -107, 228,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 1013, 626,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 626,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 1170, 405,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 405,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 1211, 125,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTFoxAnimCliffEscapeQuick1_joint3[18] = {
	ftAnimSetValAfter(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -402, -1206,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValT(FT_ANIM_TRAX, 35), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, -1608,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimCliffEscapeQuick1_joint5[10] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 402,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTFoxAnimCliffEscapeQuick1_joint6[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2022, -89, 86, -33, -1885, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1933, -33, 53, -157, -1889, -315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1956, -431, -227, -190, -2516, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1070, -885, -327, -99, -1707, 808,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimCliffEscapeQuick1_joint7[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -8, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -382,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -772, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -168, 604,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTFoxAnimCliffEscapeQuick1_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTFoxAnimCliffEscapeQuick1_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 178, 0, 0, 0, 336, 0,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimCliffEscapeQuick1_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimCliffEscapeQuick1_joint12[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 716, 328, 286, 425, 920, 450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1044, -254, 712, -55, 1371, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 207, -492, 175, -275, 1090, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 60, -147, 161, -13, 990, -99,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimCliffEscapeQuick1_joint13[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -827, 819,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -539, -305,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -618, -78,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTFoxAnimCliffEscapeQuick1_joint14[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 272, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 178,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimCliffEscapeQuick1_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimCliffEscapeQuick1_joint17[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1326, 89, -1651, 33, -1620, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1538, 67, -1589, 1, -1737, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1551, 12, -1613, -24, -1884, -147,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimCliffEscapeQuick1_joint19[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTFoxAnimCliffEscapeQuick1_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 373, -103, 144, -54, 425, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 124, -98, 1, -50, 365, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 73, -51, -12, -13, 418, 53,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimCliffEscapeQuick1_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1585, 38, 1579, 34, 1596, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1671, 25, 1642, 1, 1482, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1674, 3, 1617, -24, 1332, -149,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimCliffEscapeQuick1_joint24[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTFoxAnimCliffEscapeQuick1_joint25[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 185, -95, 86, -22, 403, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -63, -108, 34, -18, 374, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -127, -64, 27, -6, 419, 44,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimCliffEscapeQuick1_joint26[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -504, 279, -421,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -178, 113, 117, -55, -177, 84,
	ftAnimEnd(),
	0x0000, 0x4002, 0x0000, 0x48EC, 0xFFF7, 0xFFF9, 0x0000, 0x0040, 0xFE3E, 0x2003, 0x0003, 0x007F, 0x0032, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
