/* AnimJoint data for relocData file 1868 (FTYoshiAnimDownAttackD) */
/* 3664 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimDownAttackD_joint1[30];
extern u16 dFTYoshiAnimDownAttackD_joint2[84];
extern u16 dFTYoshiAnimDownAttackD_joint3[84];
extern u16 dFTYoshiAnimDownAttackD_joint4[84];
extern u16 dFTYoshiAnimDownAttackD_joint6[16];
extern u16 dFTYoshiAnimDownAttackD_joint7[86];
extern u16 dFTYoshiAnimDownAttackD_joint8[48];
extern u16 dFTYoshiAnimDownAttackD_joint10[16];
extern u16 dFTYoshiAnimDownAttackD_joint11[70];
extern u16 dFTYoshiAnimDownAttackD_joint12[32];
extern u16 dFTYoshiAnimDownAttackD_joint13[16];
extern u16 dFTYoshiAnimDownAttackD_joint14[8];
extern u16 dFTYoshiAnimDownAttackD_joint15[162];
extern u16 dFTYoshiAnimDownAttackD_joint17[106];
extern u16 dFTYoshiAnimDownAttackD_joint18[178];
extern u16 dFTYoshiAnimDownAttackD_joint20[64];
extern u16 dFTYoshiAnimDownAttackD_joint22[236];
extern u16 dFTYoshiAnimDownAttackD_joint23[192];
extern u16 dFTYoshiAnimDownAttackD_joint25[268];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimDownAttackD_joints[] = {
	(u32)dFTYoshiAnimDownAttackD_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimDownAttackD_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimDownAttackD_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimDownAttackD_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimDownAttackD_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimDownAttackD_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimDownAttackD_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimDownAttackD_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimDownAttackD_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimDownAttackD_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimDownAttackD_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimDownAttackD_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimDownAttackD_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimDownAttackD_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimDownAttackD_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimDownAttackD_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimDownAttackD_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimDownAttackD_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimDownAttackD_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF032E, /* [25] END */
};

/* Joint 1 */
u16 dFTYoshiAnimDownAttackD_joint1[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY), -242, 25, 265, 79,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAY, 50), 672, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 19), -44, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -44, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 30), 0, 26,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTYoshiAnimDownAttackD_joint2[84] = {
	ftAnimSetValAfter(FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 144, -15, -190, -42,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 110, -58, -224, 201,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), -312, 402,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 42, -118, 162, 359,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 143, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 36, -10, 0, -644,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 357, -402,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 36, -1, -240, -639,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -171, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 36, -2, -240, 480,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -171, 0,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 0, 536,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 35, -1, 0, 69,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 27), 30, 15, 20, 101,
	ftAnimBlock(0, 1),
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 26), 0, -89,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimDownAttackD_joint3[84] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY), 934, 0,
	ftAnimSetValAfter(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 172,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 944, 239,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 642, -56,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 4), 359,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 605, -67,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 372, -183,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 2), -160,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 55, 65,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 1), -241,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 567, 170,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 2), -241,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 567, 30,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 1), -241,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 838, 16,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 1), -402,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 2), -402,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 823, -37,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 8), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 16, -22,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 14), 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimDownAttackD_joint4[84] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -607, -2,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -485, 5,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 12), 425, -360, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4505, 4505, 7168,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -536, 5,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 536, 0,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -457, 20,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 402,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -433, 7,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 33), 4096, 4096, 4096,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -89, 402,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -433, 10,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -89, 402,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -341, 17,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -536, 402,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 78, 26,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimDownAttackD_joint6[16] = {
	ftAnimSetVal(FT_ANIM_ROTX), 0,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 24), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 5), 481,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 21), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimDownAttackD_joint7[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 50, 7, -557, 6, 2294, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 27), 191, 0, -634, 9, 2251, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 190, -19, -623, 29, 2255, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -122, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -100, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 2276, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2154, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2205, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -115, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -132, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2218, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 2586, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2639, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2858, 12,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -107, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -110, -2, -131, 0, 2864, 6,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimDownAttackD_joint8[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), -601, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -582, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -321, 245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -8, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -166, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -309, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -795, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, 30,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTYoshiAnimDownAttackD_joint10[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -263, -8, -454, -6, -220, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 50), 0, 12, 0, 19, 0, 10,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTYoshiAnimDownAttackD_joint11[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1617, -6, 1040, 5, 729, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 27), -1746, 0, 948, 9, 693, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1745, 13, 959, 31, 698, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1486, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -1730, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 688, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 664, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1053, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1502, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1699, 12,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1102, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1367, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1753, -23, 1711, 12, 1389, 21,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimDownAttackD_joint12[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -710, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), -715, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -695, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -228, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -273, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -1028, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, 25,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimDownAttackD_joint13[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 284, 3, 225, 18, 28, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 50), 0, -38, 0, -31, 0, -36,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimDownAttackD_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -536, -893, 0,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTYoshiAnimDownAttackD_joint15[162] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 39, 9,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 216, -240, 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 0, 216, -240,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -1117, 1431,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -1559, -25,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 227, 4096, 910, 4096, 455,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 5120, 341, 8192, 682, 6144, 682,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 351, 416, 54, -35, -417, -332,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -418, 743, 208, -1405, 198, 874, -406, -276,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -468, 149,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -71, 173, 0, -832, 272, 71, -487, 185,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 64,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAZ, 1), 0, 5120, 6144,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAY, 1), -71, 48, 216, -113, -360, 494, 6144, -1365,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 64,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 216, -240,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 402, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 368, 33,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 30), 0,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 5120, -292, 6144, -585, 6144, -585,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 27), 216, -240,
	ftAnimBlock(0, 4),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 23), 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 368, -25,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 402, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -190, 10,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTYoshiAnimDownAttackD_joint17[106] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 107, 0,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 48, -264,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -613, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 151, -9,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 0, 48, -264,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 36, 68, 28, 125, -403, -170,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -63, -71,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 34, -115, 110, 273, -349, -243,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 7, -137, 96, -251, -464, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -63, -4, 0, -15, 48, -97, -360, 400,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 52,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 402, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -116, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 48, -264,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 27), 0, 48, -264,
	ftAnimBlock(0, 7),
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -116, -1,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 402, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -153, 17,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimDownAttackD_joint18[178] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -348, 95, -313, -212, 1068, -256,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -252, -373, -525, -332, 812, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1095, -422, -979, -330, 1389, 148,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1337, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1098, -89, 1108, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1273, -160, 1072, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1644, -234, 986, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1888, -172, 1099, 99,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1984, 13, 1327, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1424, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1560, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1967, 151, -1587, 96, 1368, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1681, 129, -1367, 96, 1053, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1709, -56, -1394, -49, 1357, 169,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1415, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 929, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1839, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1857, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1599, 89, -1405, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1391, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1678, -40, 1014, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 940, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1753, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1850, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1708, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1409, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), -1613, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 952, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), 1577, 27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1685, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), -1614, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1614, 0, -1613, 0, 1604, 27,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimDownAttackD_joint20[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 382, 298,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1012, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 958, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 916, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 826, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 691, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 673, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1085, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 928, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1005, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1126, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 989, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 971, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 319, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 261, -57,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimDownAttackD_joint22[236] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 500, 238, 1624, -6, 2055, -91,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1698, 79, 1892, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 739, 908,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2317, 986,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2712, 294, 1777, -100, 1566, -273,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1269, -161, 1397, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2906, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3063, 247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3400, 307, 1175, -19, 1641, 219,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1966, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 3789, 9, 1268, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3796, 6, 1261, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1232, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3801, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3804, -246, 1974, -331,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3308, -377, 1163, 103, 1302, -558,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3049, -108, 1439, 185, 857, -224,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3124, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1534, 86, 854, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1617, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 874, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1134, 266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3125, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3125, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3292, 80, 1413, -98, 1452, 158,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1447, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3287, 37, 1421, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3367, 53, 1289, -131,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3540, 314,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1029, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1433, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1600, 346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4023, 174, 2125, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3889, -143, 1004, -16, 1990, -145,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1343, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3736, -147, 1834, -150,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 3229, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 1303, 0,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1374, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1668, 24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3226, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 3219, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1304, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1339, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3223, 3, 1692, 23, 1344, 4,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimDownAttackD_joint23[192] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, 41, 435, 31, 468, -29,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 769, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1, -192, -150, -343,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -247, 283, -554, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 568, 613, 135, 516,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 978, 56, 479, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 682, -233, 734, -41, 192, -193,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 531, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 511, -106, 92, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 501, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 204, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 304, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 143, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 434, -260, -14, -393,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -529, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 621, 51, -643, -775,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 634, 167, -1564, -619,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -453, -290, 956, 180, -1882, -314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1110, -454, 995, 84, -2194, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1361, -131, 1125, 81, -2088, 53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1288, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1374, -60, -2086, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1482, 18, -1985, 217,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1261, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1650, 247,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1468, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1447, 145,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1630, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1257, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), -1610, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1472, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -1751, -12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1633, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 19), 1606, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1608, 2, 1608, 2, -1762, -11,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimDownAttackD_joint25[268] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 675, 41,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1080, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1025, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 830, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 773, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 913, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 928, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1244, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1145, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 971, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 990, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 537, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 519, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 407, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -28,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFDA1, 0xFFCD, 0xF9F1, 0xFFF1, 0xFC1C, 0xFFF8, 0x2805, 0x0003, 0xF9FC, 0x00BA, 0x200B, 0x0002, 0xFD40, 0xFFF6, 0xFBDF, 0xFF92, 0x200B, 0x0001, 0xFD58, 0x00D4, 0xFB36, 0xFE71, 0x2803, 0x0002, 0x0073, 0x00BD, 0x200D, 0x0001, 0xFB42, 0x00E1, 0xF8C1, 0xFE56, 0x2805, 0x0007, 0xFAE2, 0xFFBF, 0x2009, 0x0001, 0xF7E0, 0xFFCA, 0x2809, 0x0002, 0xF8E6, 0x004F, 0x2003, 0x0001, 0x0064, 0xFFC6, 0x2803, 0x0002, 0x0012, 0x0032, 0x0801, 0x0001, 0x2009, 0x0001, 0xF8F5, 0xFFED, 0x2809, 0x0003, 0xF884, 0xFFE9, 0x2003, 0x0001, 0x0063, 0x0044, 0x2803, 0x0004, 0x0154, 0x00A4, 0x0801, 0x0002, 0x200D, 0x0001, 0xFAA5, 0x0028, 0xF86E, 0xFF4E, 0x2809, 0x0002, 0xF5F3, 0xFF3C, 0x2005, 0x0001, 0xFB34, 0x004B, 0x2007, 0x0001, 0x022E, 0x009D, 0xFB3B, 0x0038, 0x200F, 0x0001, 0x028F, 0xFEDF, 0xFBA4, 0x012A, 0xF596, 0x0149, 0x200F, 0x0001, 0xFFEC, 0xFF56, 0xFD90, 0x01BE, 0xF885, 0x00AA, 0x200F, 0x0001, 0x013B, 0x0149, 0xFF21, 0x0028, 0xF6EB, 0xFE8C, 0x200F, 0x0001, 0x027E, 0x0202, 0xFDE2, 0xFF82, 0xF59D, 0xFE31, 0x200F, 0x0001, 0x053F, 0x0171, 0xFE24, 0x002E, 0xF34C, 0xFECB, 0x200F, 0x0001, 0x0562, 0x00B0, 0xFE3E, 0x005C, 0xF333, 0xFF49, 0x2805, 0x0004, 0x00B7, 0x0046, 0x200B, 0x0001, 0x06A0, 0x00D0, 0xF1DD, 0xFF0A, 0x2809, 0x0004, 0xF156, 0x0005, 0x2003, 0x0001, 0x0703, 0x002C, 0x2803, 0x0004, 0x06B1, 0xFFF0, 0x0801, 0x0002, 0x2005, 0x0001, 0x00B6, 0xFFFF, 0x2805, 0x0018, 0xFFC0, 0xFFE9, 0x2009, 0x0001, 0xF15E, 0x0007, 0x2809, 0x0017, 0xF27C, 0x000E, 0x2003, 0x0001, 0x06A3, 0xFFF3, 0x2003, 0x0016, 0x0648, 0x0000, 0x200F, 0x0001, 0x0649, 0x0000, 0xFFA7, 0xFFE7, 0xF28B, 0x000E, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
