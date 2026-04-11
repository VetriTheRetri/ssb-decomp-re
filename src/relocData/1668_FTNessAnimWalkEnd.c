/* AnimJoint data for relocData file 1668 (FTNessAnimWalkEnd) */
/* 944 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimWalkEnd_joint1[16];
extern u16 dFTNessAnimWalkEnd_joint2[18];
extern u16 dFTNessAnimWalkEnd_joint4[18];
extern u16 dFTNessAnimWalkEnd_joint5[30];
extern u16 dFTNessAnimWalkEnd_joint6[24];
extern u16 dFTNessAnimWalkEnd_joint7[14];
extern u16 dFTNessAnimWalkEnd_joint8[20];
extern u16 dFTNessAnimWalkEnd_joint10[20];
extern u16 dFTNessAnimWalkEnd_joint11[24];
extern u16 dFTNessAnimWalkEnd_joint12[16];
extern u16 dFTNessAnimWalkEnd_joint13[22];
extern u16 dFTNessAnimWalkEnd_joint15[10];
extern u16 dFTNessAnimWalkEnd_joint16[32];
extern u16 dFTNessAnimWalkEnd_joint18[24];
extern u16 dFTNessAnimWalkEnd_joint19[24];
extern u16 dFTNessAnimWalkEnd_joint21[12];
extern u16 dFTNessAnimWalkEnd_joint22[30];
extern u16 dFTNessAnimWalkEnd_joint24[24];
extern u16 dFTNessAnimWalkEnd_joint25[42];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimWalkEnd_joints[] = {
	(u32)dFTNessAnimWalkEnd_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimWalkEnd_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimWalkEnd_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimWalkEnd_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimWalkEnd_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimWalkEnd_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimWalkEnd_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimWalkEnd_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimWalkEnd_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimWalkEnd_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimWalkEnd_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimWalkEnd_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimWalkEnd_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimWalkEnd_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimWalkEnd_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimWalkEnd_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimWalkEnd_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimWalkEnd_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimWalkEnd_joint25, /* [24] joint 25 */
	0xFFFF00E3, /* [25] END */
};

/* Joint 1 */
u16 dFTNessAnimWalkEnd_joint1[16] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAY), 636, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -16, 537, -28,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimWalkEnd_joint2[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY), -222, -72, 17, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 10), 0, -23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 28, -360, 8,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimWalkEnd_joint4[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 225, 135, 75,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 0, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimWalkEnd_joint5[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -285, -2, -208, 0, 440, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -396, -12, -262, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 426, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 417, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -410, -13, -261, 1, 415, -2,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimWalkEnd_joint6[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -191, -19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -437, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -451, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -462, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, -11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimWalkEnd_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -89,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 0, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTNessAnimWalkEnd_joint8[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY), 187, -68, -32, 300,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 10), -10, 0, 364, -3, -32, 4, 300, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTNessAnimWalkEnd_joint10[20] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -181, 4, 39, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 21, 0, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 10), 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimWalkEnd_joint11[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -142, -73, 280, 16, -296, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -399, -12, 545, 26, -110, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -415, -16, 569, 24, -119, -8,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimWalkEnd_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -170, -17,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -531, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, -26,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimWalkEnd_joint13[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 89, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 625, 0, 0, 5, 0, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 90, 54, 126,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimWalkEnd_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimWalkEnd_joint16[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -209, -53, -48, -23, -68, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -363, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -272, -6, -282, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -276, -3, -292, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -365, -2, -280, -3, -297, -5,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimWalkEnd_joint18[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 248, 21,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 427, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 421, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 400, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimWalkEnd_joint19[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 6, -16, -2, 0, 24, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 2, 4, 9, 2, 26, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, 2, 12, 2, 26, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimWalkEnd_joint21[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 126, -82, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -66,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimWalkEnd_joint22[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 22, -10, 44, 4, 422, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -129, 0, 135, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -169, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -195, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -126, 3, 138, 3, -206, -11,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimWalkEnd_joint24[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 206, 37,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 485, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 467, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 410, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 403, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimWalkEnd_joint25[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -71, 5, -27, 8, -90, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 80, 1, 22, 3, -196, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 78, -1, 25, 2, -202, -6,
	ftAnimEnd(),
	0x400E, 0x0173, 0xFFD5, 0x003F, 0x48E0, 0xFF82, 0xFFAE, 0xFFF4, 0x380F, 0x000A, 0x0038, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
