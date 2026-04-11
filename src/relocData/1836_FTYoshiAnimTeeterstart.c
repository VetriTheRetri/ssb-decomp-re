/* AnimJoint data for relocData file 1836 (FTYoshiAnimTeeterstart) */
/* 1488 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimTeeterstart_joint1[20];
extern u16 dFTYoshiAnimTeeterstart_joint2[58];
extern u16 dFTYoshiAnimTeeterstart_joint3[24];
extern u16 dFTYoshiAnimTeeterstart_joint4[56];
extern u16 dFTYoshiAnimTeeterstart_joint6[14];
extern u16 dFTYoshiAnimTeeterstart_joint7[76];
extern u16 dFTYoshiAnimTeeterstart_joint10[40];
extern u16 dFTYoshiAnimTeeterstart_joint11[100];
extern u16 dFTYoshiAnimTeeterstart_joint12[46];
extern u16 dFTYoshiAnimTeeterstart_joint13[8];
extern u16 dFTYoshiAnimTeeterstart_joint14[16];
extern u16 dFTYoshiAnimTeeterstart_joint15[28];
extern u16 dFTYoshiAnimTeeterstart_joint17[28];
extern u16 dFTYoshiAnimTeeterstart_joint18[24];
extern u16 dFTYoshiAnimTeeterstart_joint20[24];
extern u16 dFTYoshiAnimTeeterstart_joint22[34];
extern u16 dFTYoshiAnimTeeterstart_joint23[34];
extern u16 dFTYoshiAnimTeeterstart_joint25[62];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimTeeterstart_joints[] = {
	(u32)dFTYoshiAnimTeeterstart_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimTeeterstart_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimTeeterstart_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimTeeterstart_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimTeeterstart_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimTeeterstart_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimTeeterstart_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimTeeterstart_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimTeeterstart_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimTeeterstart_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimTeeterstart_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimTeeterstart_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimTeeterstart_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimTeeterstart_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimTeeterstart_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimTeeterstart_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimTeeterstart_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimTeeterstart_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF0161, /* [25] END */
};

/* Joint 1 */
u16 dFTYoshiAnimTeeterstart_joint1[20] = {
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 693, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 693, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 13), 0, 25, 840, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 13), 201,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimTeeterstart_joint2[58] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAY), -60,
	ftAnimSetValRateT(FT_ANIM_TRAY, 42), 30, -5,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 37,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 71,
	ftAnimSetValRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 89, 1, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 37), -44,
	_FT_ANIM_CMD(11, FT_ANIM_ROTZ, 1), 32,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 37), 0, -1, 0, -3,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 32,
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 11, -24, -5,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 12), 60, 11, 20, -49,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 7,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 0, 1, -89, 0, 0, -7, 35, -5, -99, -17, -177, 44,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimTeeterstart_joint3[24] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 134, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 16, -3,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 12,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 172,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 16, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTYoshiAnimTeeterstart_joint4[56] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -29, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 47), 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTZ, 1), 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 47), 78, 2,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 42,
	ftAnimSetValRateBlock(FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 0, 2,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 12,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 600, 329,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 600, 329,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 81, 0, 0, 0, 600, 0, 390, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 95, -5, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 4, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimTeeterstart_joint6[14] = {
	ftAnimSetVal(FT_ANIM_ROTX), 0,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 491, 10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimTeeterstart_joint7[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -70, 12, -63, 18, 2930, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -193, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -83, -26, 2910, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -106, -13, 2850, -67,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -82, 83, 2668, -186,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -255, -54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -393, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 55, 73, 2402, -135,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 83, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 2391, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2386, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2376, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 88, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 95, 7, -387, 5, 2364, -11,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTYoshiAnimTeeterstart_joint10[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1208, -20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1051, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -948, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -461, 331,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -8, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimTeeterstart_joint11[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -9, 2, -24, 10, 2688, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 59, 53, 77, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 2752, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2784, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2875, 31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 132, 108, 153, 126,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 702, 517, 576, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2901, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3214, 440,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1311, 450, 549, -52, 3782, 445,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 343, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1604, 257, 4104, 319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1826, 96, 4422, 145,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1783, -9, 4379, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 335, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1779, -1, 336, 5, 4373, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1780, 1, 346, 9, 4371, -2,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimTeeterstart_joint12[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -580, -33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -612, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -562, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1091, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -887, 282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -525, 439,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -8,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimTeeterstart_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimTeeterstart_joint14[16] = {
	ftAnimSetVal(FT_ANIM_ROTX), -689,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, 0, 0, 156, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 5), -689,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), -536, 1,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimTeeterstart_joint15[28] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 89, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 27), -36,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), -210, -7,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 22,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), -190, 0, 0, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTYoshiAnimTeeterstart_joint17[28] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 89, 1, 0, -2,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 17), -145,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -210, -8,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 12,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), -153, -2, 0, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimTeeterstart_joint18[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 15, -6, -9, 3, -125, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -41, 1, 26, -1, -109, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -39, 2, 25, -1, -106, 2,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimTeeterstart_joint20[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 355, -16,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 355, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 373, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 423, 26,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimTeeterstart_joint22[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1595, 4, 5, 1, -243, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 17), 1633, -2, -57, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -180, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -187, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -201, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1630, -3, -61, -4, -223, -22,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimTeeterstart_joint23[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 58, -21, -8, 3, 2887, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 17), 41, 11, 36, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 2558, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2521, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 2516, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 52, 10, 35, -1, 2509, -7,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimTeeterstart_joint25[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 804, 19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 725, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 661, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 566, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 557, -9,
	ftAnimEnd(),
	0x0000, 0x200E, 0xF981, 0x0012, 0xFFEF, 0x0002, 0xFF0C, 0xFFF0, 0x2807, 0x0011, 0xFA00, 0xFFFC, 0xFF77, 0xFFFC, 0x2009, 0x000D, 0xFF8D, 0x001C, 0x2009, 0x0001, 0xFFA9, 0x001A, 0x2009, 0x0003, 0xFFE4, 0x0008, 0x200F, 0x0001, 0xF9FB, 0xFFFC, 0xFF73, 0xFFFD, 0xFFE8, 0x0003, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
