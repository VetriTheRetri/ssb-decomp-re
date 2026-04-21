/* AnimJoint data for relocData file 1819 (FTYoshiAnimWalkEnd) */
/* 720 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimWalkEnd_joint1[10];
extern u16 dFTYoshiAnimWalkEnd_joint2[28];
extern u16 dFTYoshiAnimWalkEnd_joint6[10];
extern u16 dFTYoshiAnimWalkEnd_joint7[24];
extern u16 dFTYoshiAnimWalkEnd_joint10[16];
extern u16 dFTYoshiAnimWalkEnd_joint11[24];
extern u16 dFTYoshiAnimWalkEnd_joint13[16];
extern u16 dFTYoshiAnimWalkEnd_joint14[10];
extern u16 dFTYoshiAnimWalkEnd_joint15[18];
extern u16 dFTYoshiAnimWalkEnd_joint17[18];
extern u16 dFTYoshiAnimWalkEnd_joint18[24];
extern u16 dFTYoshiAnimWalkEnd_joint20[16];
extern u16 dFTYoshiAnimWalkEnd_joint22[24];
extern u16 dFTYoshiAnimWalkEnd_joint23[24];
extern u16 dFTYoshiAnimWalkEnd_joint25[16];
extern u16 dFTYoshiAnimWalkEnd_joint26[30];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimWalkEnd_joints[] = {
	(u32)dFTYoshiAnimWalkEnd_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimWalkEnd_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimWalkEnd_joint6, /* [2] joint 6 */
	0x00000000, /* [3] NULL */
	0x00000000, /* [4] NULL */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimWalkEnd_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimWalkEnd_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimWalkEnd_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimWalkEnd_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTYoshiAnimWalkEnd_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimWalkEnd_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimWalkEnd_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimWalkEnd_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimWalkEnd_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimWalkEnd_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimWalkEnd_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimWalkEnd_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTYoshiAnimWalkEnd_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimWalkEnd_joint1[10] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 693,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 672,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimWalkEnd_joint2[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -1, 0, -3, 30, 12, 20, 7,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX), -44, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 4, 1, -77, 1, 0, 0, 0, -13, 24, -13, 0, 10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTYoshiAnimWalkEnd_joint6[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 16, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 57, -9, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimWalkEnd_joint7[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1602, -1, 1604, 0, 1412, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -1614, 0, 1626, 0, 1054, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1614, 0, 1626, 0, 1044, -10,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTYoshiAnimWalkEnd_joint10[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1170, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -706, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -689, 17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimWalkEnd_joint11[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1608, 0, 1607, 0, 1170, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -1627, -2, 1619, 0, 1429, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1628, -1, 1619, 0, 1435, 6,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimWalkEnd_joint13[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -583, -19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1102, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1115, -12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimWalkEnd_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -536, -893, 0, 0, 156, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimWalkEnd_joint15[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -210, -5, -36, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), -130, 0, 0, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTYoshiAnimWalkEnd_joint17[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -210, -5, -145, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), -64, -2, 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimWalkEnd_joint18[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, 0, 4, 0, -74, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -2, 0, 1, 0, -117, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2, 0, 1, 0, -118, -1,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimWalkEnd_joint20[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 313, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 405, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimWalkEnd_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1613, 0, 5, -2, -243, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1610, 0, -72, -4, -286, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1610, 0, -74, -2, -287, -1,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimWalkEnd_joint23[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -36, 1, 0, 0, -403, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 2, 1, 0, 0, -210, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3, 0, -1, 0, -199, 10,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimWalkEnd_joint25[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 903, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 440, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 420, -20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTYoshiAnimWalkEnd_joint26[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1635, -1, -2, -1, -302, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1606, 0, -77, -4, -231, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1607, 0, -79, -2, -229, 2,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
