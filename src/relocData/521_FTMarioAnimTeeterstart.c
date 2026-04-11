/* AnimJoint data for relocData file 521 (FTMarioAnimTeeterstart) */
/* 992 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimTeeterstart_joint1[20];
extern u16 dFTMarioAnimTeeterstart_joint2[22];
extern u16 dFTMarioAnimTeeterstart_joint4[20];
extern u16 dFTMarioAnimTeeterstart_joint5[46];
extern u16 dFTMarioAnimTeeterstart_joint6[24];
extern u16 dFTMarioAnimTeeterstart_joint7[8];
extern u16 dFTMarioAnimTeeterstart_joint8[20];
extern u16 dFTMarioAnimTeeterstart_joint10[20];
extern u16 dFTMarioAnimTeeterstart_joint11[42];
extern u16 dFTMarioAnimTeeterstart_joint12[14];
extern u16 dFTMarioAnimTeeterstart_joint13[14];
extern u16 dFTMarioAnimTeeterstart_joint15[10];
extern u16 dFTMarioAnimTeeterstart_joint16[34];
extern u16 dFTMarioAnimTeeterstart_joint18[20];
extern u16 dFTMarioAnimTeeterstart_joint20[46];
extern u16 dFTMarioAnimTeeterstart_joint21[24];
extern u16 dFTMarioAnimTeeterstart_joint23[64];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimTeeterstart_joints[] = {
	(u32)dFTMarioAnimTeeterstart_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimTeeterstart_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimTeeterstart_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimTeeterstart_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimTeeterstart_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimTeeterstart_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimTeeterstart_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimTeeterstart_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimTeeterstart_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimTeeterstart_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimTeeterstart_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimTeeterstart_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimTeeterstart_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimTeeterstart_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimTeeterstart_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimTeeterstart_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimTeeterstart_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	0xFFFF00E4, /* [23] END */
};

/* Joint 1 */
u16 dFTMarioAnimTeeterstart_joint1[20] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 636, 23, 0, 37,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), -20, -2, 590, -28, 112, 47,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimTeeterstart_joint2[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY), -222, -58,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -72, 1, 17, -1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 13), -200, 2, -57, 1, 9, -1, 0, 2,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimTeeterstart_joint4[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 225, 1, 135, -3, 75, -1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 294, -11, -9, -3, -36, -2,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimTeeterstart_joint5[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1101, -5, -1429, 3, 2018, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 1381, 111, 1544, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -1304, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1244, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1239, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1488, 78, 1400, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1574, 33, 1303, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1605, 31, -1246, -6, 1271, -32,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimTeeterstart_joint6[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -191, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -314, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -123, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTMarioAnimTeeterstart_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -89, 0, 0,
	ftAnimBlock(0, 13),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimTeeterstart_joint8[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 187, 1, -68, 0, -32, -1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 213, 0, -70, 0, -89, 2,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimTeeterstart_joint10[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -181, 4, 4, 0, 39, 1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -71, 2, 59, 0, 75, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimTeeterstart_joint11[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1575, -54, 1344, 8, 1315, -99,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1445, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1266, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1225, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1233, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1261, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1436, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1425, -10, 1261, -5, 1265, 4,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimTeeterstart_joint12[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -170, 170,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimTeeterstart_joint13[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTY), 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 0, 9,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 13), 89,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimTeeterstart_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 13),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimTeeterstart_joint16[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 220, -138, -78, 20, -133, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 50, 16, 122, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -61, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -62, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -58, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -48, 9, 67, 17, 209, 86,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimTeeterstart_joint18[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 122,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 246, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 182, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 60, -121,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimTeeterstart_joint20[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1508, 6, 2031, -142, 1629, -60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1477, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1644, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 1780, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1785, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1807, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1466, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1467, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1670, 26, 1819, 11, 1496, 28,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimTeeterstart_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 89, -2, 102, 8, 629, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 274, 14, 0, -17, 293, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 288, 13, -5, -4, 259, -34,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimTeeterstart_joint23[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 91, 137,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 242, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 186, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000, 0x200E, 0x067F, 0xFFED, 0x0663, 0x0005, 0xF95D, 0xFFC9, 0x2807, 0x000C, 0x068E, 0x0003, 0x06A8, 0x0006, 0x2009, 0x000A, 0xF913, 0x0014, 0x2009, 0x0001, 0xF931, 0x001F, 0x2009, 0x0001, 0xF953, 0x000D, 0x200F, 0x0001, 0x0690, 0x0001, 0x06B0, 0x0007, 0xF94C, 0xFFF9, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
