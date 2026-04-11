/* AnimJoint data for relocData file 1021 (FTSamusAnimThrownMarioBros) */
/* 912 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimThrownMarioBros_joint2[26];
extern u16 dFTSamusAnimThrownMarioBros_joint3[22];
extern u16 dFTSamusAnimThrownMarioBros_joint5[34];
extern u16 dFTSamusAnimThrownMarioBros_joint6[60];
extern u16 dFTSamusAnimThrownMarioBros_joint7[16];
extern u16 dFTSamusAnimThrownMarioBros_joint8[26];
extern u16 dFTSamusAnimThrownMarioBros_joint9[10];
extern u16 dFTSamusAnimThrownMarioBros_joint12[16];
extern u16 dFTSamusAnimThrownMarioBros_joint13[44];
extern u16 dFTSamusAnimThrownMarioBros_joint15[24];
extern u16 dFTSamusAnimThrownMarioBros_joint16[24];
extern u16 dFTSamusAnimThrownMarioBros_joint18[16];
extern u16 dFTSamusAnimThrownMarioBros_joint20[24];
extern u16 dFTSamusAnimThrownMarioBros_joint21[24];
extern u16 dFTSamusAnimThrownMarioBros_joint23[42];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTSamusAnimThrownMarioBros_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTSamusAnimThrownMarioBros_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimThrownMarioBros_joint3, /* [2] joint 3 */
	(u32)dFTSamusAnimThrownMarioBros_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTSamusAnimThrownMarioBros_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimThrownMarioBros_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimThrownMarioBros_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimThrownMarioBros_joint9, /* [8] joint 9 */
	(u32)dFTSamusAnimThrownMarioBros_joint12, /* [9] joint 12 */
	0x00000000, /* [10] NULL */
	0x00000000, /* [11] NULL */
	(u32)dFTSamusAnimThrownMarioBros_joint13, /* [12] joint 13 */
	(u32)dFTSamusAnimThrownMarioBros_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTSamusAnimThrownMarioBros_joint16, /* [15] joint 16 */
	(u32)dFTSamusAnimThrownMarioBros_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTSamusAnimThrownMarioBros_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTSamusAnimThrownMarioBros_joint21, /* [20] joint 21 */
	(u32)dFTSamusAnimThrownMarioBros_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	0xFFFF00D7, /* [23] END */
};

/* Joint 2 */
u16 dFTSamusAnimThrownMarioBros_joint2[26] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -290, 815, -232, 144,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 0, 1544, 0, 92, 10,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 20), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 1544, 9, 92, -1,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTSamusAnimThrownMarioBros_joint3[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 116, -20, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -78, 0, 101, 0, -15, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -78, -101, 15,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimThrownMarioBros_joint5[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -201, 45, 0, 0, 3, -10, -35, 69,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -4, 0, 32, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX, 10), 168, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -6, 0, 41, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_TRAX, 20), 168, 0,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimThrownMarioBros_joint6[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1632, -234, -1148, -37, -1215, 138,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1195, 62, -1176, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1119, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1027, 93,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -890, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1291, 266, -1250, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1728, 631, -1644, -580,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2554, 500, -2411, -437,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2728, 113, -968, -62, -2519, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2780, 51, -1016, -48, -2527, -8,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimThrownMarioBros_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1083, -38,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -571, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -515, 56,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimThrownMarioBros_joint8[26] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 424,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 18), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 8,
	ftAnimSetValRate(FT_ANIM_ROTX), -491, -111,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -748, -8,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 20), -748,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimThrownMarioBros_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimThrownMarioBros_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -148, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTSamusAnimThrownMarioBros_joint13[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3164, 79, 88, -3, -2798, 166,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2194, 126,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -2094, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 142, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 231, 74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 348, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2058, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1877, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2100, -5, 351, 3, -1878, -1,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimThrownMarioBros_joint15[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -209, -272,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -945, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -825, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -571, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -519, 51,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTSamusAnimThrownMarioBros_joint16[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3, -22, -65, -19, -66, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 7, 0, -43, 0, -31, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, 0, -43, 0, -19, 12,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTSamusAnimThrownMarioBros_joint18[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 602, 38,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 297, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 273, -23,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTSamusAnimThrownMarioBros_joint20[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1700, 0, 1637, -1, 1566, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -1627, 0, 1587, -2, 1588, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1627, 0, 1585, -1, 1588, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTSamusAnimThrownMarioBros_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -8, -11, 46, -6, -246, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 7, 4, 46, 0, -61, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 9, 2, 46, 0, -44, 16,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTSamusAnimThrownMarioBros_joint23[42] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 479, 15,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 313, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 295, -17,
	ftAnimEnd(),
	0x0000, 0x200E, 0xF9CD, 0xFFF5, 0x0586, 0x0003, 0xF8E2, 0x0003, 0x200F, 0x0009, 0xF9CC, 0xFFFD, 0x0626, 0x000A, 0xF96F, 0x0008, 0x200F, 0x0001, 0xF9CA, 0xFFFF, 0x062B, 0x0005, 0xF973, 0x0004, 0x0000, 0x0000, 0x0000,
};
