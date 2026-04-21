/* AnimJoint data for relocData file 1741 (FTNessAnimCliffClimbQuick2) */
/* 1776 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimCliffClimbQuick2_joint1[18];
extern u16 dFTNessAnimCliffClimbQuick2_joint2[62];
extern u16 dFTNessAnimCliffClimbQuick2_joint3[44];
extern u16 dFTNessAnimCliffClimbQuick2_joint5[42];
extern u16 dFTNessAnimCliffClimbQuick2_joint6[116];
extern u16 dFTNessAnimCliffClimbQuick2_joint7[48];
extern u16 dFTNessAnimCliffClimbQuick2_joint8[18];
extern u16 dFTNessAnimCliffClimbQuick2_joint9[42];
extern u16 dFTNessAnimCliffClimbQuick2_joint11[44];
extern u16 dFTNessAnimCliffClimbQuick2_joint12[82];
extern u16 dFTNessAnimCliffClimbQuick2_joint13[24];
extern u16 dFTNessAnimCliffClimbQuick2_joint14[40];
extern u16 dFTNessAnimCliffClimbQuick2_joint16[12];
extern u16 dFTNessAnimCliffClimbQuick2_joint17[38];
extern u16 dFTNessAnimCliffClimbQuick2_joint19[28];
extern u16 dFTNessAnimCliffClimbQuick2_joint20[24];
extern u16 dFTNessAnimCliffClimbQuick2_joint22[28];
extern u16 dFTNessAnimCliffClimbQuick2_joint23[38];
extern u16 dFTNessAnimCliffClimbQuick2_joint25[26];
extern u16 dFTNessAnimCliffClimbQuick2_joint26[30];
extern u16 dFTNessAnimCliffClimbQuick2_joint27[30];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTNessAnimCliffClimbQuick2_joints[] = {
	(u32)dFTNessAnimCliffClimbQuick2_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimCliffClimbQuick2_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimCliffClimbQuick2_joint3, /* [2] joint 3 */
	(u32)dFTNessAnimCliffClimbQuick2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTNessAnimCliffClimbQuick2_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimCliffClimbQuick2_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimCliffClimbQuick2_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimCliffClimbQuick2_joint9, /* [8] joint 9 */
	(u32)dFTNessAnimCliffClimbQuick2_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTNessAnimCliffClimbQuick2_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimCliffClimbQuick2_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimCliffClimbQuick2_joint14, /* [13] joint 14 */
	(u32)dFTNessAnimCliffClimbQuick2_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTNessAnimCliffClimbQuick2_joint17, /* [16] joint 17 */
	(u32)dFTNessAnimCliffClimbQuick2_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTNessAnimCliffClimbQuick2_joint20, /* [19] joint 20 */
	(u32)dFTNessAnimCliffClimbQuick2_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTNessAnimCliffClimbQuick2_joint23, /* [22] joint 23 */
	(u32)dFTNessAnimCliffClimbQuick2_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTNessAnimCliffClimbQuick2_joint26, /* [25] joint 26 */
	(u32)dFTNessAnimCliffClimbQuick2_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTNessAnimCliffClimbQuick2_joint1[18] = {
	ftAnimSetValBlock(FT_ANIM_TRAY), 0,
	ftAnimSetValT(FT_ANIM_TRAY, 17), 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 2,
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 621,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 15), 840, 82,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimCliffClimbQuick2_joint2[62] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 91, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 5,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 16), 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTZ, 1), 5,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 20), 3216,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 5,
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 767, -33,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAZ), -73,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 0, -8, 540, -122, 0, 24,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 0, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, -16, 537, -28,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTNessAnimCliffClimbQuick2_joint3[44] = {
	ftAnimSetValBlock(FT_ANIM_ROTY), -804,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY), 0, 0, 0, 0, 0, -137,
	ftAnimSetValT(FT_ANIM_ROTY, 11), -804,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), 7, 1, 10, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 17), 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 2,
	ftAnimBlock(0, 9),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 28, -3, -360, 0, 8, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimCliffClimbQuick2_joint5[42] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 27), 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 12,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -253, -31, -9, -2, -4, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -84, 14, -29, 0, -12, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 11, 0, 11, 0, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTNessAnimCliffClimbQuick2_joint6[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -148, 309, -646, 55, -65, -298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, 66, -591, 149, -364, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -15, -14, -347, 179, 105, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 131, -21, -233, -8, 56, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -59, -204, -364, -159, 101, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -750, -153,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 65, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -278, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -345, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -401, -52, -859, 83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -351, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -449, 110, 218, 66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 204, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -180, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -290, -84, -411, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -349, -101, -470, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -494, -83, -364, 110, 369, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -458, 52, -243, -6, 443, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -410, 47, -261, -17, 415, -27,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimCliffClimbQuick2_joint7[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -390, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -363, -287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -584, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -530, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, 56,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTNessAnimCliffClimbQuick2_joint8[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -804,
	ftAnimSetValRateT(FT_ANIM_ROTX, 35), 0, 14,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 20,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimBlock(0, 15),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTNessAnimCliffClimbQuick2_joint9[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 35), 300,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 20,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 35), 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 20,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -448, 34, -2, 0, 86, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -78, 29, -3, 24, 146, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -10, 0, 364, -3, -32, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTNessAnimCliffClimbQuick2_joint11[44] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -18,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 35), 0, 0, 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 20,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -6, 0, 2, 0, -5,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 16), -182, -172,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 113, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 7,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -1, 0, 0, 0, -1,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimCliffClimbQuick2_joint12[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 431, 11, 1874, -23, 392, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 259, 83,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 559, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 1707, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1595, -95,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1284, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 379, 116,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 800, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 611, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 950, 30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 960, 139,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1347, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1289, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1279, -89,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 973, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1076, 109, 1107, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1192, 116, 1038, -69, 1489, 141,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimCliffClimbQuick2_joint13[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -408, -274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, -150,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTNessAnimCliffClimbQuick2_joint14[40] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 580, -63, -294, -9, 178, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 953, 116, -220, 20, 217, -2,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1394, -66, -151, 21, 163, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 90, -9, 54, 5, 126, -5,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimCliffClimbQuick2_joint16[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	_FT_ANIM_CMD(11, 0, 1), 20,
	ftAnimBlock(0, 15),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTNessAnimCliffClimbQuick2_joint17[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 39, -46, -53, -2, -151, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -364, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -102, -8, -166, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -111, -38, -165, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -255, -27, -285, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -365, -1, -279, -24, -297, -11,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimCliffClimbQuick2_joint19[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 283, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 349, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, 46,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTNessAnimCliffClimbQuick2_joint20[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1764, 56, 1828, -21, 2115, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -1594, -8, 1601, -6, 1647, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1602, -7, 1596, -5, 1634, -12,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimCliffClimbQuick2_joint22[28] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -130, -13, 26, 1, -19, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -134, 4, 63, -1, 90, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -66, 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTNessAnimCliffClimbQuick2_joint23[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 51, -3, 516, -2, 186, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 168, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), -48, -8, 39, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -55, -31, 26, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -127, -8, -175, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -127, 0, 136, -31, -210, -34,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimCliffClimbQuick2_joint25[26] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 212, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 339, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, 67,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimCliffClimbQuick2_joint26[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1907, -16, -1751, 16, 1812, -64,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -1636, 2, 1412, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 1751, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1713, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1684, -28, -1633, 2, 1406, -6,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTNessAnimCliffClimbQuick2_joint27[30] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 268, -10, 223, 0, -340, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -134, -14, 18, -14, -37, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 56, 3, 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000, 0x0000,
};
