/* AnimJoint data for relocData file 1817 (FTYoshiAnimWalk2) */
/* 1488 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimWalk2_joint1[18];
extern u16 dFTYoshiAnimWalk2_joint2[38];
extern u16 dFTYoshiAnimWalk2_joint3[30];
extern u16 dFTYoshiAnimWalk2_joint6[36];
extern u16 dFTYoshiAnimWalk2_joint7[44];
extern u16 dFTYoshiAnimWalk2_joint10[32];
extern u16 dFTYoshiAnimWalk2_joint11[44];
extern u16 dFTYoshiAnimWalk2_joint13[32];
extern u16 dFTYoshiAnimWalk2_joint14[14];
extern u16 dFTYoshiAnimWalk2_joint15[44];
extern u16 dFTYoshiAnimWalk2_joint17[54];
extern u16 dFTYoshiAnimWalk2_joint18[66];
extern u16 dFTYoshiAnimWalk2_joint20[32];
extern u16 dFTYoshiAnimWalk2_joint22[58];
extern u16 dFTYoshiAnimWalk2_joint23[48];
extern u16 dFTYoshiAnimWalk2_joint25[32];
extern u16 dFTYoshiAnimWalk2_joint26[70];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimWalk2_joints[] = {
	(u32)dFTYoshiAnimWalk2_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimWalk2_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimWalk2_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimWalk2_joint6, /* [3] joint 6 */
	0x00000000, /* [4] NULL */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimWalk2_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimWalk2_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimWalk2_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimWalk2_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTYoshiAnimWalk2_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimWalk2_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimWalk2_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimWalk2_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimWalk2_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimWalk2_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimWalk2_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimWalk2_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTYoshiAnimWalk2_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimWalk2_joint1[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAY), 693,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 15), 600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 15), 693,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 15), 600,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 15), 693, 0,
	ftAnimLoop(0x6800, -32),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTYoshiAnimWalk2_joint2[38] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), -89,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 30), 89,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 15,
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX), -44, 60,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 30, 20,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 30), 44, -60,
	ftAnimBlock(0, 15),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 30), -89,
	ftAnimBlock(0, 15),
	ftAnimSetVal0RateT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 30), -44, 60,
	ftAnimBlock(0, 15),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 30), 89,
	ftAnimBlock(0, 15),
	ftAnimLoop(0x6800, -74),
};

/* Joint 3 */
u16 dFTYoshiAnimWalk2_joint3[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 16, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 0, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 122, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 16, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 0, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 122, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 16, -8,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimWalk2_joint6[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 78, -1, 0, -2, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 11, -97, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 78, 0, 0, 6, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 11, 89, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 78, 1, 0, -1, 0, 0,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimWalk2_joint7[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1602, 1, 1604, -1, 1412, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 59), -1604, 2, 1606, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 1017, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1046, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), 1334, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1346, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1416, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1602, 2, 1604, -1, 1412, -4,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTYoshiAnimWalk2_joint10[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1170, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), -657, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -637, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -894, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -928, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -1170, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1170, 0,
	ftAnimLoop(0x6800, -62),
};

/* Joint 11 */
u16 dFTYoshiAnimWalk2_joint11[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1608, 0, 1607, 0, 1170, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 59), -1607, 0, 1607, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), 1397, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1406, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 984, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1012, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1149, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1608, 0, 1607, 0, 1170, 20,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimWalk2_joint13[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -583, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), -1168, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1171, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), -657, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -637, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -598, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -583, 15,
	ftAnimLoop(0x6800, -62),
};

/* Joint 14 */
u16 dFTYoshiAnimWalk2_joint14[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -714,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 44), -402,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 16), -714,
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimWalk2_joint15[44] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -268, -89,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 15), -190,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 0, 5,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 10,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), -268, 89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 0, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), -190,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), -268, -89,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 15), -190,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 0, 5,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -86),
};

/* Joint 17 */
u16 dFTYoshiAnimWalk2_joint17[54] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -268,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 20), -153,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 10,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), -178,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 0, 11,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 5,
	ftAnimBlock(0, 10),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 15), 178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -268,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 20), -153,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 15), 0, -11,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 15), -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -268,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 20), -153,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 0, 11,
	ftAnimBlock(0, 5),
	ftAnimLoop(0x6800, -104),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimWalk2_joint18[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, 1, 4, 0, -74, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 40), 18, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 45), 67, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 7, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -30, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -536, 9,
	ftAnimBlock(0, 19),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 18, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 3, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -526, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -122, 46,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 63, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, 0, 4, 0, -74, 48,
	ftAnimLoop(0x6800, -128),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimWalk2_joint20[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 313, -26,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 452, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 506, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 835, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 809, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 362, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 313, -49,
	ftAnimLoop(0x6800, -62),
};

/* Joint 22 */
u16 dFTYoshiAnimWalk2_joint22[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1613, 0, 5, 8, -243, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 40), 1536, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 42), -126, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), -272, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -242, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), -241, -3,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1537, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 1613, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -133, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 16), -3, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1613, 0, 5, 8, -243, -2,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimWalk2_joint23[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -36, -1, 0, -2, -403, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 37), 135, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 59), 2, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 26), 2, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 32), -35, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 156, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -364, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -36, 0, 0, -2, -403, -39,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimWalk2_joint25[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 903, 12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 567, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 546, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), 399, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 452, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 884, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 903, 19,
	ftAnimLoop(0x6800, -62),
};

/* Joint 26 */
u16 dFTYoshiAnimWalk2_joint26[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1635, 4, -2, 7, -302, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 65, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 44), 1636, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -178, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -185, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 29), -449, -9,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 53, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 35), -9, 6,
	ftAnimBlock(0, 20),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1637, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1631, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -458, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -332, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1635, 3, -2, 7, -302, 29,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
	0x0000, 0x0000,
};
