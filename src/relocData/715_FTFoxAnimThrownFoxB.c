/* AnimJoint data for relocData file 715 (FTFoxAnimThrownFoxB) */
/* 1664 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimThrownFoxB_joint2[20];
extern u16 dFTFoxAnimThrownFoxB_joint3[10];
extern u16 dFTFoxAnimThrownFoxB_joint5[20];
extern u16 dFTFoxAnimThrownFoxB_joint6[54];
extern u16 dFTFoxAnimThrownFoxB_joint7[16];
extern u16 dFTFoxAnimThrownFoxB_joint8[10];
extern u16 dFTFoxAnimThrownFoxB_joint9[10];
extern u16 dFTFoxAnimThrownFoxB_joint10[18];
extern u16 dFTFoxAnimThrownFoxB_joint12[10];
extern u16 dFTFoxAnimThrownFoxB_joint13[54];
extern u16 dFTFoxAnimThrownFoxB_joint14[16];
extern u16 dFTFoxAnimThrownFoxB_joint16[10];
extern u16 dFTFoxAnimThrownFoxB_joint17[94];
extern u16 dFTFoxAnimThrownFoxB_joint19[32];
extern u16 dFTFoxAnimThrownFoxB_joint21[122];
extern u16 dFTFoxAnimThrownFoxB_joint22[94];
extern u16 dFTFoxAnimThrownFoxB_joint24[32];
extern u16 dFTFoxAnimThrownFoxB_joint25[122];
extern u16 dFTFoxAnimThrownFoxB_joint26[14];
extern u16 dFTFoxAnimThrownFoxB_joint27[20];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTFoxAnimThrownFoxB_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTFoxAnimThrownFoxB_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimThrownFoxB_joint3, /* [2] joint 3 */
	(u32)dFTFoxAnimThrownFoxB_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTFoxAnimThrownFoxB_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimThrownFoxB_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimThrownFoxB_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimThrownFoxB_joint9, /* [8] joint 9 */
	(u32)dFTFoxAnimThrownFoxB_joint10, /* [9] joint 10 */
	(u32)dFTFoxAnimThrownFoxB_joint12, /* [10] joint 12 */
	0x00000000, /* [11] NULL */
	(u32)dFTFoxAnimThrownFoxB_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimThrownFoxB_joint14, /* [13] joint 14 */
	(u32)dFTFoxAnimThrownFoxB_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTFoxAnimThrownFoxB_joint17, /* [16] joint 17 */
	(u32)dFTFoxAnimThrownFoxB_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTFoxAnimThrownFoxB_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTFoxAnimThrownFoxB_joint22, /* [21] joint 22 */
	(u32)dFTFoxAnimThrownFoxB_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTFoxAnimThrownFoxB_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimThrownFoxB_joint26, /* [25] joint 26 */
	(u32)dFTFoxAnimThrownFoxB_joint27, /* [26] joint 27 */
};

/* Joint 2 */
u16 dFTFoxAnimThrownFoxB_joint2[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -240, -240,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, 239, -360, -119,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, -360,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, -360,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTFoxAnimThrownFoxB_joint3[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 178, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimThrownFoxB_joint5[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 178, 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 178, 89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 357,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimThrownFoxB_joint6[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -144, -6, -223, -4, -2807, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -30, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -229, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -3079, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3068, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3187, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -25, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 15, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3182, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -3175, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 12, -2, -229, 0, -3169, 6,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimThrownFoxB_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTFoxAnimThrownFoxB_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTFoxAnimThrownFoxB_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimThrownFoxB_joint10[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -357,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 336, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 9), -357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 178,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimThrownFoxB_joint12[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimThrownFoxB_joint13[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 146, 2, 222, 7, -2803, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 30, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 230, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -3079, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3068, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3182, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 23, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -13, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3187, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -3171, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -13, 0, 230, 0, -3169, 1,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTFoxAnimThrownFoxB_joint14[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTFoxAnimThrownFoxB_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 272, 0, 0,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimThrownFoxB_joint17[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -26, -2, 2, -5, 215, -178,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -313, -214,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -347, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -363, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -385, -29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -563, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -429, 257, -413, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -48, 193, -51, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -41, 0, 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -48, -251, -53, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -543, -333, -384, -171,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -398, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -715, -99,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -352, 44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -392, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -362, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -329, 22, 8, 0, -358, 3,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimThrownFoxB_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 276, 238,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 605, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 402, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 67,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -67,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimThrownFoxB_joint21[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 47, -3, -3209, 2, -132, -165,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 87, 58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -2953, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -341, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -207, 153,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 213, 231,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 180, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 430, 65, -2788, 33, 428, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 5, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 310, -191, -2886, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 47, -135, -3188, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 40, 0, -3195, 0, 8, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 48, 216, -3189, 160, 21, 257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 474, 322, -2873, 182, 522, 325,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 626, -88,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 350, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2824, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -2981, -25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 524, -86,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 414, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 287, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 266, -20, -2994, -13, 400, -13,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimThrownFoxB_joint22[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 26, 2, -2, 5, 215, -178,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 309, 213,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -347, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -363, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -385, -29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 559, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 424, -255, -413, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 47, -191, -51, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 41, 0, 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 47, 249, -53, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 540, 333, -384, -171,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -398, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 714, 101,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 348, -44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -392, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -362, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 325, -22, -7, 0, -358, 3,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimThrownFoxB_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 276, 238,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 605, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 402, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 67,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -67,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimThrownFoxB_joint25[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1673, 2, 1593, 2, 1476, -165,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1738, -55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1843, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1266, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1401, 153,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1822, 230,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1819, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2051, -60, 2015, 34, 2036, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1614, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1939, 182, 1912, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1685, 133, 1608, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1672, 0, 1602, 0, 1618, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1685, -208, 1608, 163, 1631, 256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2090, -309, 1929, 186, 2130, 325,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2234, -89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1970, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1982, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1817, -26,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2132, -86,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2022, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1911, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1891, 19, 1803, -13, 2009, -13,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimThrownFoxB_joint26[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -798, -34,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), -798,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTFoxAnimThrownFoxB_joint27[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 64, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -178, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), -178,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
