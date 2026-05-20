/* AnimJoint data for relocData file 1732 (FTNessAnimThrownMarioBros) */
/* 1312 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimThrownMarioBros_joint1[8];
extern u16 dFTNessAnimThrownMarioBros_joint2[18];
extern u16 dFTNessAnimThrownMarioBros_joint3[8];
extern u16 dFTNessAnimThrownMarioBros_joint5[28];
extern u16 dFTNessAnimThrownMarioBros_joint6[74];
extern u16 dFTNessAnimThrownMarioBros_joint8[32];
extern u16 dFTNessAnimThrownMarioBros_joint9[20];
extern u16 dFTNessAnimThrownMarioBros_joint11[24];
extern u16 dFTNessAnimThrownMarioBros_joint12[76];
extern u16 dFTNessAnimThrownMarioBros_joint13[30];
extern u16 dFTNessAnimThrownMarioBros_joint14[8];
extern u16 dFTNessAnimThrownMarioBros_joint16[10];
extern u16 dFTNessAnimThrownMarioBros_joint17[62];
extern u16 dFTNessAnimThrownMarioBros_joint19[28];
extern u16 dFTNessAnimThrownMarioBros_joint20[34];
extern u16 dFTNessAnimThrownMarioBros_joint22[14];
extern u16 dFTNessAnimThrownMarioBros_joint23[48];
extern u16 dFTNessAnimThrownMarioBros_joint25[30];
extern u16 dFTNessAnimThrownMarioBros_joint26[34];
extern u16 dFTNessAnimThrownMarioBros_joint27[16];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTNessAnimThrownMarioBros_joints[] = {
	(AObjEvent32 *)dFTNessAnimThrownMarioBros_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimThrownMarioBros_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimThrownMarioBros_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTNessAnimThrownMarioBros_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTNessAnimThrownMarioBros_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimThrownMarioBros_joint8, /* [6] joint 8 */
	NULL, /* [7] NULL */
	(AObjEvent32 *)dFTNessAnimThrownMarioBros_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTNessAnimThrownMarioBros_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTNessAnimThrownMarioBros_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimThrownMarioBros_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimThrownMarioBros_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTNessAnimThrownMarioBros_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTNessAnimThrownMarioBros_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTNessAnimThrownMarioBros_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTNessAnimThrownMarioBros_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTNessAnimThrownMarioBros_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTNessAnimThrownMarioBros_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTNessAnimThrownMarioBros_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTNessAnimThrownMarioBros_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTNessAnimThrownMarioBros_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTNessAnimThrownMarioBros_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 840, 240,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimThrownMarioBros_joint2[18] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 184,
	ftAnimSetValBlock(FT_ANIM_TRAY), -240,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 10), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 10), 480,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTNessAnimThrownMarioBros_joint3[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimThrownMarioBros_joint5[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -134, 32, 0, -30, 0, -13,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 500, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -19, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, -20, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimThrownMarioBros_joint6[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -195, -46, -135, -83, 418, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -241, -220, -218, -152, 411, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -636, 9, -439, -562, 713, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -221, 267, -1343, -489, 528, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -102, 77, -1418, -36, 473, -64,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1360, 1, -6, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -29, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 22, 59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 144, 39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1366, -9, -119, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 168, 24, -1379, -12, -172, -52,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimThrownMarioBros_joint8[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -458,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -925, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 462,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTNessAnimThrownMarioBros_joint9[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -178, -29, 0, 0, 0, -13,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -178, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimThrownMarioBros_joint11[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 17, 0, -10, 0, 16, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 0, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimThrownMarioBros_joint12[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2246, -153, 136, 41, -2802, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2400, -222, 178, 22, -2831, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2690, 191, 180, 648, -2918, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2018, 300, 1474, 668, -2672, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2089, -161, 1517, 11, -2740, -70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3041, -136,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1351, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -2621, -229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2800, -148,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2998, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3186, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3305, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3049, -51, 1344, -6, -3389, -84,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimThrownMarioBros_joint13[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -587,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1175, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 583,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -9,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTNessAnimThrownMarioBros_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -141, 6, 998,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTNessAnimThrownMarioBros_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTNessAnimThrownMarioBros_joint17[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1743, -23, -1377, -8, 1653, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1895, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1404, -40, 1667, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1468, -34, 1763, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1498, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1725, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1928, -34, 1695, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -2084, -39, 1592, -20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1504, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1509, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2122, -38, -1513, -3, 1572, -19,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimThrownMarioBros_joint19[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 400, -51,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 258, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -125,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTNessAnimThrownMarioBros_joint20[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -206, 22, -11, 22, -156, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 143, 19, 82, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -46, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -18, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 27, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 43, 16, 164, 21, 95, 13,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimThrownMarioBros_joint22[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 66, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 126, -82, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -51,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTNessAnimThrownMarioBros_joint23[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 200, 17, 187, -4, 35, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 498, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 134, -38, 66, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 94, -18, 88, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 94, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -9, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -27, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -36, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 499, 1, 93, 0, -36, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimThrownMarioBros_joint25[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, -51,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 306, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 143, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTNessAnimThrownMarioBros_joint26[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 90, -10, -93, -13, -212, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -173, 6, 86, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 15, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -6, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -33, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -34, 0, -164, 8, 95, 9,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTNessAnimThrownMarioBros_joint27[16] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 179, -11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -126, -82, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -92,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
