/* AnimJoint data for relocData file 586 (FTMarioAnimCliffEscapeSlow1) */
/* 1312 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimCliffEscapeSlow1_joint1[16];
extern u16 dFTMarioAnimCliffEscapeSlow1_joint2[32];
extern u16 dFTMarioAnimCliffEscapeSlow1_joint3[20];
extern u16 dFTMarioAnimCliffEscapeSlow1_joint5[30];
extern u16 dFTMarioAnimCliffEscapeSlow1_joint6[54];
extern u16 dFTMarioAnimCliffEscapeSlow1_joint7[26];
extern u16 dFTMarioAnimCliffEscapeSlow1_joint8[22];
extern u16 dFTMarioAnimCliffEscapeSlow1_joint9[32];
extern u16 dFTMarioAnimCliffEscapeSlow1_joint11[30];
extern u16 dFTMarioAnimCliffEscapeSlow1_joint12[34];
extern u16 dFTMarioAnimCliffEscapeSlow1_joint13[30];
extern u16 dFTMarioAnimCliffEscapeSlow1_joint14[26];
extern u16 dFTMarioAnimCliffEscapeSlow1_joint16[10];
extern u16 dFTMarioAnimCliffEscapeSlow1_joint17[76];
extern u16 dFTMarioAnimCliffEscapeSlow1_joint19[30];
extern u16 dFTMarioAnimCliffEscapeSlow1_joint21[74];
extern u16 dFTMarioAnimCliffEscapeSlow1_joint22[24];
extern u16 dFTMarioAnimCliffEscapeSlow1_joint24[14];
extern u16 dFTMarioAnimCliffEscapeSlow1_joint25[26];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTMarioAnimCliffEscapeSlow1_joints[] = {
	(u32)dFTMarioAnimCliffEscapeSlow1_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimCliffEscapeSlow1_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimCliffEscapeSlow1_joint3, /* [2] joint 3 */
	(u32)dFTMarioAnimCliffEscapeSlow1_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTMarioAnimCliffEscapeSlow1_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimCliffEscapeSlow1_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimCliffEscapeSlow1_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimCliffEscapeSlow1_joint9, /* [8] joint 9 */
	(u32)dFTMarioAnimCliffEscapeSlow1_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTMarioAnimCliffEscapeSlow1_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimCliffEscapeSlow1_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimCliffEscapeSlow1_joint14, /* [13] joint 14 */
	(u32)dFTMarioAnimCliffEscapeSlow1_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTMarioAnimCliffEscapeSlow1_joint17, /* [16] joint 17 */
	(u32)dFTMarioAnimCliffEscapeSlow1_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTMarioAnimCliffEscapeSlow1_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTMarioAnimCliffEscapeSlow1_joint22, /* [21] joint 22 */
	(u32)dFTMarioAnimCliffEscapeSlow1_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTMarioAnimCliffEscapeSlow1_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTMarioAnimCliffEscapeSlow1_joint1[16] = {
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimSetValRate(FT_ANIM_TRAY), -327, 174,
	ftAnimSetValBlock(FT_ANIM_TRAZ), -109,
	ftAnimSetValRateT(FT_ANIM_TRAY, 10), 0, 107,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 10), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimCliffEscapeSlow1_joint2[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, -31, 0, 0, 0, -159,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -317, -53,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 10), 0, 0, -300, 258,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -536, 15, 0, 13,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTMarioAnimCliffEscapeSlow1_joint3[20] = {
	ftAnimSetValBlock(FT_ANIM_TRAY), 600,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValT(FT_ANIM_TRAY, 23), 600,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 13,
	ftAnimSetVal(FT_ANIM_ROTY), 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 10), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimCliffEscapeSlow1_joint5[30] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 63), 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 18,
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 223, 26,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 759, -12, 0, -44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTMarioAnimCliffEscapeSlow1_joint6[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1657, 15, -1448, 7, 1361, -51,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -1273, 69, -1401, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1006, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 830, -142,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 855, 186,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1211, -3, -1352, 113,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1420, -175, -1049, 109,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1052, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1631, -211, -954, 94, 1294, 241,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimCliffEscapeSlow1_joint7[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -327, -256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -512, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -640, -128,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimCliffEscapeSlow1_joint8[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), -794, 10,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 45), 0, 2, 0, 0, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTMarioAnimCliffEscapeSlow1_joint9[32] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAY), 0, 288,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAZ), 178, 8, 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 23), 0, -5, 0, -7,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 13,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 58), 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 13,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimCliffEscapeSlow1_joint11[30] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 54, 0, -18, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 87), 0, 54, -17,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 13,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -189, -16, 135, 13, -144, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -368, -13, 309, -2, -239, 4,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimCliffEscapeSlow1_joint12[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 50, -6, 159, -8, -242, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 86, 50, -120, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -378, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -302, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -564, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 144, 58, -141, -20, -690, -126,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimCliffEscapeSlow1_joint13[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -526, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -621, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -582, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -478, 103,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTMarioAnimCliffEscapeSlow1_joint14[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 598, 7, 0, 10, 0, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 625, 1, 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 625, 8,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimCliffEscapeSlow1_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTMarioAnimCliffEscapeSlow1_joint17[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 186, -30, -56, 6, 125, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 236, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 96, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -70, -430,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -765, -537, 60, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1145, -207, -65, -69, 480, 216,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1174, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 992, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -78, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -293, -164,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1184, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1136, -298, -482, -360, 1066, 383,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1782, -645, -1014, -531, 1759, 693,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTMarioAnimCliffEscapeSlow1_joint19[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 470, 329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 659, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 993, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 920, -73,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTMarioAnimCliffEscapeSlow1_joint21[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -625, 141, -291, 31, 742, -145,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 418, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 221, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -327, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -208, 267,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 581, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 460, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 196, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 568, 151,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 414, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 468, -142,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -156, -239,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 275, -138, 146, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 138, -191, 102, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -408, -251, -107, -246, 20, -82,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTMarioAnimCliffEscapeSlow1_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 53, 2, 47, 0, 120, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 58, 6, 62, -8, 120, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 67, 9, 48, -14, 120, 0,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimCliffEscapeSlow1_joint24[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTMarioAnimCliffEscapeSlow1_joint25[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 1897, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -1819, 2134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1911, -9, -1820, 0, 2139, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1895, -16, -1819, 0, 2134, -5,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
