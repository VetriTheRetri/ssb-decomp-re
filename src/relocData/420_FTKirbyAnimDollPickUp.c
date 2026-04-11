/* AnimJoint data for relocData file 420 (FTKirbyAnimDollPickUp) */
/* 1360 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimDollPickUp_joint1[10];
extern u16 dFTKirbyAnimDollPickUp_joint2[66];
extern u16 dFTKirbyAnimDollPickUp_joint3[28];
extern u16 dFTKirbyAnimDollPickUp_joint4[10];
extern u16 dFTKirbyAnimDollPickUp_joint6[20];
extern u16 dFTKirbyAnimDollPickUp_joint7[94];
extern u16 dFTKirbyAnimDollPickUp_joint8[46];
extern u16 dFTKirbyAnimDollPickUp_joint10[18];
extern u16 dFTKirbyAnimDollPickUp_joint11[76];
extern u16 dFTKirbyAnimDollPickUp_joint14[22];
extern u16 dFTKirbyAnimDollPickUp_joint15[24];
extern u16 dFTKirbyAnimDollPickUp_joint17[24];
extern u16 dFTKirbyAnimDollPickUp_joint19[24];
extern u16 dFTKirbyAnimDollPickUp_joint20[56];
extern u16 dFTKirbyAnimDollPickUp_joint22[116];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTKirbyAnimDollPickUp_joints[] = {
	(u32)dFTKirbyAnimDollPickUp_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimDollPickUp_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimDollPickUp_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimDollPickUp_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimDollPickUp_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTKirbyAnimDollPickUp_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimDollPickUp_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimDollPickUp_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimDollPickUp_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimDollPickUp_joint14, /* [11] joint 14 */
	0x00000000, /* [12] NULL */
	0x00000000, /* [13] NULL */
	(u32)dFTKirbyAnimDollPickUp_joint15, /* [14] joint 15 */
	(u32)dFTKirbyAnimDollPickUp_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTKirbyAnimDollPickUp_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimDollPickUp_joint20, /* [19] joint 20 */
	(u32)dFTKirbyAnimDollPickUp_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF0125, /* [22] END */
};

/* Joint 1 */
u16 dFTKirbyAnimDollPickUp_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 100),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimDollPickUp_joint2[66] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 586, -403, -2135, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 464, -3, -422, -3, -1824, 2, 19, -30, -17, 0, -155, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 60), -269, -15, 3, -3, 48, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 50), 377, 1, -636, 0, -1998, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 617, 5, -434, 4, -2271, -6,
	ftAnimBlock(0, 10),
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), -154, 48, -52, -14, 56, -49,
	ftAnimBlock(0, 20),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 597, -3, -474, -8, -2243, 5,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimDollPickUp_joint3[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 430, -91,
	ftAnimSetValRate(FT_ANIM_TRAX), -413, 0,
	ftAnimSetValBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 100), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 101), -413, 0, 430, 0, -91, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 100), 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTKirbyAnimDollPickUp_joint4[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 311, 0,
	ftAnimBlock(0, 100),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimDollPickUp_joint6[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 140), 0, -6, 0, -2, 0, 0,
	ftAnimBlock(0, 100),
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimDollPickUp_joint7[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -690, 0, -1596, 0, 19, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 37), 74, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 87), -649, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 16), -1749, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1748, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 54), -1574, -3,
	ftAnimBlock(0, 20),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 74, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 43), 152, 13,
	ftAnimBlock(0, 33),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1582, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1799, -1,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 165, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 185, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1777, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1891, -31,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -643, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -645, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1894, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), -1814, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -644, 0, -1784, 30, 191, 6,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTKirbyAnimDollPickUp_joint8[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 47), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -247, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -212, 63,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimDollPickUp_joint10[18] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 121, -74, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 100), 121, -9, -74, 5, 10, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimDollPickUp_joint11[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 890, 0, 1229, 0, -3194, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 72), -3170, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 84), 917, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 70), 1340, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1332, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 1153, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3165, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -3011, 0,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 918, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 865, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1178, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1319, 3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3012, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -3006, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 865, 0, 1318, 0, -3001, 4,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimDollPickUp_joint14[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 78), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimDollPickUp_joint15[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -171, 0, -384, 0, 143, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 99), -172, 2, -383, -1, 145, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -171, 1, -384, 0, 143, -1,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimDollPickUp_joint17[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 74), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimDollPickUp_joint19[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1487, 0, 1349, 0, -1282, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 99), -1488, 2, 1349, 0, -1285, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1487, 0, 1349, 0, -1282, 3,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimDollPickUp_joint20[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -271, 0, 678, 0, 22, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 88), 202, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 94), 356, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 85), 12, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -179, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 192, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 152, 19,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 358, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 348, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 175, 22, 340, -8, -180, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimDollPickUp_joint22[116] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 75), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 23), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x200E, 0x01C9, 0x0008, 0x00CE, 0x0007, 0x01E6, 0x0001, 0x2803, 0x000E, 0x02B3, 0xFFFB, 0x2809, 0x0014, 0x0211, 0xFFF9, 0x2005, 0x000D, 0x0247, 0x0003, 0x2005, 0x0001, 0x024B, 0x0003, 0x2805, 0x003B, 0x01B8, 0xFFF5, 0x2003, 0x0001, 0x02AD, 0xFFFA, 0x2803, 0x0040, 0x009B, 0x0000, 0x0801, 0x0005, 0x2009, 0x0001, 0x0209, 0xFFF9, 0x2809, 0x003D, 0x008F, 0x0003, 0x0801, 0x0034, 0x2005, 0x0001, 0x01AC, 0xFFF3, 0x2805, 0x0014, 0x00CE, 0x0000, 0x0801, 0x0005, 0x2003, 0x0001, 0x009A, 0xFFFF, 0x2803, 0x0013, 0x0067, 0x0007, 0x0801, 0x0002, 0x2009, 0x0001, 0x0092, 0x0002, 0x2809, 0x0010, 0x0037, 0x0018, 0x0801, 0x000B, 0x2005, 0x0001, 0x00CE, 0x0000, 0x2005, 0x0004, 0x00C4, 0xFFFB, 0x200F, 0x0001, 0x006F, 0x0008, 0x00BD, 0xFFF9, 0x0054, 0x001D, 0x0000,
};
