/* AnimJoint data for relocData file 567 (FTMarioAnimThrownMarioBros) */
/* 1120 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimThrownMarioBros_joint2[18];
extern u16 dFTMarioAnimThrownMarioBros_joint3[8];
extern u16 dFTMarioAnimThrownMarioBros_joint5[28];
extern u16 dFTMarioAnimThrownMarioBros_joint6[62];
extern u16 dFTMarioAnimThrownMarioBros_joint7[32];
extern u16 dFTMarioAnimThrownMarioBros_joint8[10];
extern u16 dFTMarioAnimThrownMarioBros_joint9[18];
extern u16 dFTMarioAnimThrownMarioBros_joint11[16];
extern u16 dFTMarioAnimThrownMarioBros_joint12[66];
extern u16 dFTMarioAnimThrownMarioBros_joint13[32];
extern u16 dFTMarioAnimThrownMarioBros_joint14[8];
extern u16 dFTMarioAnimThrownMarioBros_joint16[20];
extern u16 dFTMarioAnimThrownMarioBros_joint17[46];
extern u16 dFTMarioAnimThrownMarioBros_joint19[28];
extern u16 dFTMarioAnimThrownMarioBros_joint21[24];
extern u16 dFTMarioAnimThrownMarioBros_joint22[42];
extern u16 dFTMarioAnimThrownMarioBros_joint24[28];
extern u16 dFTMarioAnimThrownMarioBros_joint25[24];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTMarioAnimThrownMarioBros_joints[] = {
	NULL, /* [0] NULL */
	(AObjEvent32 *)dFTMarioAnimThrownMarioBros_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTMarioAnimThrownMarioBros_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTMarioAnimThrownMarioBros_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTMarioAnimThrownMarioBros_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTMarioAnimThrownMarioBros_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTMarioAnimThrownMarioBros_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTMarioAnimThrownMarioBros_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTMarioAnimThrownMarioBros_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTMarioAnimThrownMarioBros_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTMarioAnimThrownMarioBros_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTMarioAnimThrownMarioBros_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTMarioAnimThrownMarioBros_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTMarioAnimThrownMarioBros_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTMarioAnimThrownMarioBros_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTMarioAnimThrownMarioBros_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTMarioAnimThrownMarioBros_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTMarioAnimThrownMarioBros_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTMarioAnimThrownMarioBros_joint25, /* [24] joint 25 */
};

/* Joint 2 */
u16 dFTMarioAnimThrownMarioBros_joint2[18] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 184,
	ftAnimSetValBlock(FT_ANIM_TRAY), -240,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 10), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 10), 480,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTMarioAnimThrownMarioBros_joint3[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimThrownMarioBros_joint5[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -134, 32, 0, -30, 0, -13,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 500, 30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -19, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 168, -20, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimThrownMarioBros_joint6[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -195, -46, -135, -83, 418, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -241, -220, -218, -152, 411, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -636, 8, -439, -563, 713, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -224, 267, -1344, -488, 532, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -100, 79, -1417, -34, 469, -69,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1368, -8, -124, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 91, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 146, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 166, 20, -1377, -9, -168, -43,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimThrownMarioBros_joint7[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -458,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -925, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 458,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimThrownMarioBros_joint8[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 8,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTMarioAnimThrownMarioBros_joint9[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -312, -13, 0, 0, 0, -13,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 30, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimThrownMarioBros_joint11[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 17, 0, -10, 0, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 0, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimThrownMarioBros_joint12[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2246, -153, 136, 37, -2802, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2400, -222, 173, 22, -2831, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2690, 191, 180, 650, -2918, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2018, 300, 1474, 668, -2672, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2089, -161, 1517, 11, -2740, -70,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1349, -12, -3309, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -2801, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2918, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3000, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3047, -46, 1346, -3, -3385, -75,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimThrownMarioBros_joint13[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -587,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1175, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 583,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTMarioAnimThrownMarioBros_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 625, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTMarioAnimThrownMarioBros_joint16[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 1608, 23, 0, 23,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), -804,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 1992, 41, 383, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2028, 0, 419, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTMarioAnimThrownMarioBros_joint17[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1473, -23, -1377, -8, -1563, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1504, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1132, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1549, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1457, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1578, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1602, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1509, -4, -1624, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1094, -38, -1513, -3, -1644, -19,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTMarioAnimThrownMarioBros_joint19[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 400, -51,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 258, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimThrownMarioBros_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -206, 22, -11, 22, -156, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 27, 18, 143, 19, 82, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 43, 16, 164, 21, 95, 13,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTMarioAnimThrownMarioBros_joint22[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 200, 17, 187, -4, 35, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 94, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 497, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 13, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -11, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -38, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 97, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 498, 1, 97, 0, -38, 0,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimThrownMarioBros_joint24[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, -51,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 143, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTMarioAnimThrownMarioBros_joint25[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1698, -10, -1514, 13, 1395, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1574, -5, -1435, -6, 1694, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1573, 0, -1443, -8, 1703, 9,
	ftAnimEnd(),
};
