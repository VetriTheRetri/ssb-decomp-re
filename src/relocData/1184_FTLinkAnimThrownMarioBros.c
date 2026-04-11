/* AnimJoint data for relocData file 1184 (FTLinkAnimThrownMarioBros) */
/* 832 bytes: 120-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimThrownMarioBros_joint2[14];
extern u16 dFTLinkAnimThrownMarioBros_joint3[10];
extern u16 dFTLinkAnimThrownMarioBros_joint5[18];
extern u16 dFTLinkAnimThrownMarioBros_joint6[58];
extern u16 dFTLinkAnimThrownMarioBros_joint7[20];
extern u16 dFTLinkAnimThrownMarioBros_joint10[8];
extern u16 dFTLinkAnimThrownMarioBros_joint11[24];
extern u16 dFTLinkAnimThrownMarioBros_joint12[16];
extern u16 dFTLinkAnimThrownMarioBros_joint13[8];
extern u16 dFTLinkAnimThrownMarioBros_joint14[8];
extern u16 dFTLinkAnimThrownMarioBros_joint17[8];
extern u16 dFTLinkAnimThrownMarioBros_joint18[10];
extern u16 dFTLinkAnimThrownMarioBros_joint19[10];
extern u16 dFTLinkAnimThrownMarioBros_joint21[8];
extern u16 dFTLinkAnimThrownMarioBros_joint22[24];
extern u16 dFTLinkAnimThrownMarioBros_joint24[16];
extern u16 dFTLinkAnimThrownMarioBros_joint26[24];
extern u16 dFTLinkAnimThrownMarioBros_joint27[24];
extern u16 dFTLinkAnimThrownMarioBros_joint29[46];

/* Joint pointer table (30 entries, 120 bytes) */
u32 dFTLinkAnimThrownMarioBros_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTLinkAnimThrownMarioBros_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimThrownMarioBros_joint3, /* [2] joint 3 */
	(u32)dFTLinkAnimThrownMarioBros_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTLinkAnimThrownMarioBros_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimThrownMarioBros_joint7, /* [6] joint 7 */
	(u32)dFTLinkAnimThrownMarioBros_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTLinkAnimThrownMarioBros_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimThrownMarioBros_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimThrownMarioBros_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimThrownMarioBros_joint14, /* [13] joint 14 */
	(u32)dFTLinkAnimThrownMarioBros_joint17, /* [14] joint 17 */
	0x00000000, /* [15] NULL */
	0x00000000, /* [16] NULL */
	(u32)dFTLinkAnimThrownMarioBros_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimThrownMarioBros_joint19, /* [18] joint 19 */
	(u32)dFTLinkAnimThrownMarioBros_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTLinkAnimThrownMarioBros_joint22, /* [21] joint 22 */
	(u32)dFTLinkAnimThrownMarioBros_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTLinkAnimThrownMarioBros_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	(u32)dFTLinkAnimThrownMarioBros_joint27, /* [26] joint 27 */
	(u32)dFTLinkAnimThrownMarioBros_joint29, /* [27] joint 29 */
	0x00000000, /* [28] NULL */
	0xFFFF00C1, /* [29] END */
};

/* 4-byte alignment padding */
static u32 dFTLinkAnimThrownMarioBros_pad[1] = { 0 };

/* Joint 2 */
u16 dFTLinkAnimThrownMarioBros_joint2[14] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -298, 583, -120, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 576, -35,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTLinkAnimThrownMarioBros_joint3[10] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 8, 11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 8,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimThrownMarioBros_joint5[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 184, 97,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 606, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 194,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTLinkAnimThrownMarioBros_joint6[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2120, -88, -1598, -60, 2253, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1476, 155,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -3056, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 2186, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2161, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2475, 218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1309, 160,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1027, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3235, -216,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3777, -245,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2721, 208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3979, -201, -1045, -17, 2892, 170,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTLinkAnimThrownMarioBros_joint7[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -332, -158,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -594, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -514, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -440, 73,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimThrownMarioBros_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTLinkAnimThrownMarioBros_joint11[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2501, 50, 18, -23, 486, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -2314, -67, 480, 76, -38, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2400, -85, 549, 69, -183, -145,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLinkAnimThrownMarioBros_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -431, -116,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -765, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -727, 37,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimThrownMarioBros_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTLinkAnimThrownMarioBros_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimThrownMarioBros_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimThrownMarioBros_joint18[10] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -107, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 10,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTLinkAnimThrownMarioBros_joint19[10] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -296, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 189,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimThrownMarioBros_joint21[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTLinkAnimThrownMarioBros_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -346, 13, -163, -1, 114, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -217, 4, -69, 6, -59, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -214, 2, -66, 3, -59, 0,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTLinkAnimThrownMarioBros_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 217, 26,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 164, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 156, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTLinkAnimThrownMarioBros_joint26[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 399, 106, -363, 67, -4, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 480, -16, 54, 7, 220, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 471, -9, 58, 3, 222, 2,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTLinkAnimThrownMarioBros_joint27[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 227, -13, 164, -4, -342, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 157, 0, 110, -3, -87, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 158, 0, 108, -2, -77, 10,
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTLinkAnimThrownMarioBros_joint29[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 366, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 204, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 192, -12,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0422, 0xFFAA, 0x074E, 0xFFFB, 0x0670, 0x0038, 0x280D, 0x0009, 0x06EC, 0xFFFC, 0x0804, 0x0009, 0x2003, 0x0008, 0x034B, 0x0018, 0x2003, 0x0001, 0x0361, 0x0010, 0x200F, 0x0001, 0x036B, 0x0009, 0x06EA, 0xFFFE, 0x0809, 0x0005, 0x0000,
};
