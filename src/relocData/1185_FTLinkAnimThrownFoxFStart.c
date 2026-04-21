/* AnimJoint data for relocData file 1185 (FTLinkAnimThrownFoxFStart) */
/* 768 bytes: 120-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimThrownFoxFStart_joint2[12];
extern u16 dFTLinkAnimThrownFoxFStart_joint3[16];
extern u16 dFTLinkAnimThrownFoxFStart_joint5[18];
extern u16 dFTLinkAnimThrownFoxFStart_joint6[30];
extern u16 dFTLinkAnimThrownFoxFStart_joint7[20];
extern u16 dFTLinkAnimThrownFoxFStart_joint10[8];
extern u16 dFTLinkAnimThrownFoxFStart_joint11[24];
extern u16 dFTLinkAnimThrownFoxFStart_joint12[16];
extern u16 dFTLinkAnimThrownFoxFStart_joint13[8];
extern u16 dFTLinkAnimThrownFoxFStart_joint14[8];
extern u16 dFTLinkAnimThrownFoxFStart_joint17[8];
extern u16 dFTLinkAnimThrownFoxFStart_joint18[10];
extern u16 dFTLinkAnimThrownFoxFStart_joint19[10];
extern u16 dFTLinkAnimThrownFoxFStart_joint21[8];
extern u16 dFTLinkAnimThrownFoxFStart_joint22[24];
extern u16 dFTLinkAnimThrownFoxFStart_joint24[16];
extern u16 dFTLinkAnimThrownFoxFStart_joint26[24];
extern u16 dFTLinkAnimThrownFoxFStart_joint27[24];
extern u16 dFTLinkAnimThrownFoxFStart_joint29[16];
extern u16 dFTLinkAnimThrownFoxFStart_joint30[24];

/* Joint pointer table (30 entries, 120 bytes) */
u32 dFTLinkAnimThrownFoxFStart_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTLinkAnimThrownFoxFStart_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimThrownFoxFStart_joint3, /* [2] joint 3 */
	(u32)dFTLinkAnimThrownFoxFStart_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTLinkAnimThrownFoxFStart_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimThrownFoxFStart_joint7, /* [6] joint 7 */
	(u32)dFTLinkAnimThrownFoxFStart_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTLinkAnimThrownFoxFStart_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimThrownFoxFStart_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimThrownFoxFStart_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimThrownFoxFStart_joint14, /* [13] joint 14 */
	(u32)dFTLinkAnimThrownFoxFStart_joint17, /* [14] joint 17 */
	0x00000000, /* [15] NULL */
	0x00000000, /* [16] NULL */
	(u32)dFTLinkAnimThrownFoxFStart_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimThrownFoxFStart_joint19, /* [18] joint 19 */
	(u32)dFTLinkAnimThrownFoxFStart_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTLinkAnimThrownFoxFStart_joint22, /* [21] joint 22 */
	(u32)dFTLinkAnimThrownFoxFStart_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTLinkAnimThrownFoxFStart_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	(u32)dFTLinkAnimThrownFoxFStart_joint27, /* [26] joint 27 */
	(u32)dFTLinkAnimThrownFoxFStart_joint29, /* [27] joint 29 */
	0x00000000, /* [28] NULL */
	(u32)dFTLinkAnimThrownFoxFStart_joint30, /* [29] joint 30 */
};

/* Joint 2 */
u16 dFTLinkAnimThrownFoxFStart_joint2[12] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -298, 277, -120, -308,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -55, -314,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTLinkAnimThrownFoxFStart_joint3[16] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAZ), 8, 19, 0, 64,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), -10, -5, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 5), 8, 56,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTLinkAnimThrownFoxFStart_joint5[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 184, 78, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 476, 4, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTLinkAnimThrownFoxFStart_joint6[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1096, 15, -1598, -65, -963, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 1064, -35, -1643, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1303, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1483, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1034, -29, -1559, 83, -1607, -124,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTLinkAnimThrownFoxFStart_joint7[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -332, -199,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -587, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -429, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -204, 224,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimThrownFoxFStart_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTLinkAnimThrownFoxFStart_joint11[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 715, -55, 18, -35, 486, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 473, -37, 37, 36, 145, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 447, -26, 73, 35, 61, -84,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLinkAnimThrownFoxFStart_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -431, -113,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -483, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -374, 109,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimThrownFoxFStart_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTLinkAnimThrownFoxFStart_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimThrownFoxFStart_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimThrownFoxFStart_joint18[10] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -107, -15,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -107,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTLinkAnimThrownFoxFStart_joint19[10] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -296, -58,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -296,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimThrownFoxFStart_joint21[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTLinkAnimThrownFoxFStart_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -346, -2, -163, 0, 114, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -348, 1, -146, -8, 145, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -346, 2, -163, -17, 114, -31,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTLinkAnimThrownFoxFStart_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 217, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 166, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 217, 51,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTLinkAnimThrownFoxFStart_joint26[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 399, -3, -363, -2, -4, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 347, 26, -397, 17, 13, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 399, 51, -363, 34, -4, -17,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTLinkAnimThrownFoxFStart_joint27[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 227, 4, 164, -7, -342, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 277, -26, 150, 10, -324, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 227, -49, 164, 14, -342, -17,
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTLinkAnimThrownFoxFStart_joint29[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 366, -30,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 276, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 366, 90,
	ftAnimEnd(),
	0x0000,
};

/* Joint 30 */
u16 dFTLinkAnimThrownFoxFStart_joint30[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1058, 13, 1870, 0, 1648, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1164, -58, 1869, 0, 1650, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1058, -105, 1870, 0, 1648, -1,
	ftAnimEnd(),
};
