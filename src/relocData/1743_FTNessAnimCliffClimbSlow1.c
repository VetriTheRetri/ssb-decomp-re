/* AnimJoint data for relocData file 1743 (FTNessAnimCliffClimbSlow1) */
/* 1488 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimCliffClimbSlow1_joint1[14];
extern u16 dFTNessAnimCliffClimbSlow1_joint2[34];
extern u16 dFTNessAnimCliffClimbSlow1_joint3[24];
extern u16 dFTNessAnimCliffClimbSlow1_joint5[28];
extern u16 dFTNessAnimCliffClimbSlow1_joint6[66];
extern u16 dFTNessAnimCliffClimbSlow1_joint7[32];
extern u16 dFTNessAnimCliffClimbSlow1_joint8[14];
extern u16 dFTNessAnimCliffClimbSlow1_joint9[30];
extern u16 dFTNessAnimCliffClimbSlow1_joint11[34];
extern u16 dFTNessAnimCliffClimbSlow1_joint12[42];
extern u16 dFTNessAnimCliffClimbSlow1_joint13[28];
extern u16 dFTNessAnimCliffClimbSlow1_joint14[20];
extern u16 dFTNessAnimCliffClimbSlow1_joint16[24];
extern u16 dFTNessAnimCliffClimbSlow1_joint17[78];
extern u16 dFTNessAnimCliffClimbSlow1_joint19[30];
extern u16 dFTNessAnimCliffClimbSlow1_joint20[76];
extern u16 dFTNessAnimCliffClimbSlow1_joint22[28];
extern u16 dFTNessAnimCliffClimbSlow1_joint23[24];
extern u16 dFTNessAnimCliffClimbSlow1_joint25[16];
extern u16 dFTNessAnimCliffClimbSlow1_joint26[24];
extern u16 dFTNessAnimCliffClimbSlow1_joint27[24];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTNessAnimCliffClimbSlow1_joints[] = {
	(u32)dFTNessAnimCliffClimbSlow1_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimCliffClimbSlow1_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimCliffClimbSlow1_joint3, /* [2] joint 3 */
	(u32)dFTNessAnimCliffClimbSlow1_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTNessAnimCliffClimbSlow1_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimCliffClimbSlow1_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimCliffClimbSlow1_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimCliffClimbSlow1_joint9, /* [8] joint 9 */
	(u32)dFTNessAnimCliffClimbSlow1_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTNessAnimCliffClimbSlow1_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimCliffClimbSlow1_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimCliffClimbSlow1_joint14, /* [13] joint 14 */
	(u32)dFTNessAnimCliffClimbSlow1_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTNessAnimCliffClimbSlow1_joint17, /* [16] joint 17 */
	(u32)dFTNessAnimCliffClimbSlow1_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTNessAnimCliffClimbSlow1_joint20, /* [19] joint 20 */
	(u32)dFTNessAnimCliffClimbSlow1_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTNessAnimCliffClimbSlow1_joint23, /* [22] joint 23 */
	(u32)dFTNessAnimCliffClimbSlow1_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTNessAnimCliffClimbSlow1_joint26, /* [25] joint 26 */
	(u32)dFTNessAnimCliffClimbSlow1_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTNessAnimCliffClimbSlow1_joint1[14] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -327, 174, -109, 92,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 65, 0, -9,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimCliffClimbSlow1_joint2[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, -31, 0, 0, 0, -159,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -317, -53,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, -3, -300, 107, 0, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -536, 9, 0, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTNessAnimCliffClimbSlow1_joint3[24] = {
	ftAnimSetValBlock(FT_ANIM_TRAY), 600,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValT(FT_ANIM_TRAY, 23), 600,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 13,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0, 0, -9, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimCliffClimbSlow1_joint5[28] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 38), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 18,
	ftAnimSetValRate(FT_ANIM_ROTX), 223, 26,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 759, 36, 0, 4, 0, 1,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimCliffClimbSlow1_joint6[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -50, 17, -159, 34, -242, -52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 26, 91,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -109, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -601, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -792, -168,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -810, 304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 176, 226,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 611, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -184, -160,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -630, -117,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 456, -281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 48, -239, -665, -11, -390, 248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, -71, -653, 11, -313, 76,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimCliffClimbSlow1_joint7[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -313, -272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -545, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -632, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -640, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTNessAnimCliffClimbSlow1_joint8[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -804,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 70), 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 30,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTNessAnimCliffClimbSlow1_joint9[30] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_TRAY), 178, 8, 288, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 0, -3, 0, 6, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 13,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 53), 300,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 13,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTNessAnimCliffClimbSlow1_joint11[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -9, 0, 6, 0, -5, 0, 0, 54, -6, -18, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), -368, -19, 309, 8, -239, -7,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 13,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 53), 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 13,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTNessAnimCliffClimbSlow1_joint12[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 50, -12, 159, -10, -242, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -62, -60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 123, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -553, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -627, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -642, -44,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -120, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 144, 20, -141, -20, -690, -47,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimCliffClimbSlow1_joint13[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -415, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -479, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -478, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTNessAnimCliffClimbSlow1_joint14[20] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 402, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), 1127, -6, 0, 1, 0, 2,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 8,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTNessAnimCliffClimbSlow1_joint16[24] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 74, 69, 30,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 60), 911, -937, 663,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 30,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 70), 75, 68, 30,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 30,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTNessAnimCliffClimbSlow1_joint17[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 186, -24, -56, 1, 125, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -53, 11, 171, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 117, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -10, -448,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -779, -606, -35, -65, 259, 190,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 744, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1224, -236, -184, -95,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1036, 319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -226, -105,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -526, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 762, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -612, 326, 552, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -383, 219, -576, -33, 453, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -173, 210, -593, -17, 151, -302,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimCliffClimbSlow1_joint19[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 491, 337,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 683, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 920, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 920, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTNessAnimCliffClimbSlow1_joint20[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 983, 139, 1899, -31, -866, -145,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1189, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1387, -294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1256, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1327, 249,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2100, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1147, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1412, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1040, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1970, -179, 1084, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1741, -294, 1194, 124,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1470, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1380, -292, -1462, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1155, -90, -1505, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1200, 44, 1716, 246, -1588, -82,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimCliffClimbSlow1_joint22[28] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -47, 17, 66, 3, 94, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 544, 58, 118, -32, 71, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 537, -48, -258, -48, 267, 48,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTNessAnimCliffClimbSlow1_joint23[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 53, 4, 47, 0, 120, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 32, -5, 46, 0, 118, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 27, -5, 47, 1, 120, 2,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimCliffClimbSlow1_joint25[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTNessAnimCliffClimbSlow1_joint26[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 1897, -3,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -1819, 2134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1900, -1, -1818, 0, 2142, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1898, -2, -1819, -1, 2134, -8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTNessAnimCliffClimbSlow1_joint27[24] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -50, -2, 29, 0, -59, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -33, 2, 25, 0, -50, 1,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
