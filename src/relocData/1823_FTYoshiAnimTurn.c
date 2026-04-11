/* AnimJoint data for relocData file 1823 (FTYoshiAnimTurn) */
/* 1776 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimTurn_joint1[6];
extern u16 dFTYoshiAnimTurn_joint2[104];
extern u16 dFTYoshiAnimTurn_joint3[32];
extern u16 dFTYoshiAnimTurn_joint6[38];
extern u16 dFTYoshiAnimTurn_joint7[72];
extern u16 dFTYoshiAnimTurn_joint10[32];
extern u16 dFTYoshiAnimTurn_joint11[74];
extern u16 dFTYoshiAnimTurn_joint13[24];
extern u16 dFTYoshiAnimTurn_joint14[10];
extern u16 dFTYoshiAnimTurn_joint15[28];
extern u16 dFTYoshiAnimTurn_joint17[22];
extern u16 dFTYoshiAnimTurn_joint18[76];
extern u16 dFTYoshiAnimTurn_joint20[48];
extern u16 dFTYoshiAnimTurn_joint22[74];
extern u16 dFTYoshiAnimTurn_joint23[72];
extern u16 dFTYoshiAnimTurn_joint25[124];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimTurn_joints[] = {
	(u32)dFTYoshiAnimTurn_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimTurn_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimTurn_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimTurn_joint6, /* [3] joint 6 */
	0x00000000, /* [4] NULL */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimTurn_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimTurn_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimTurn_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimTurn_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTYoshiAnimTurn_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimTurn_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimTurn_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimTurn_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimTurn_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimTurn_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimTurn_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimTurn_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF0196, /* [25] END */
};

/* Joint 1 */
u16 dFTYoshiAnimTurn_joint1[6] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 12), 1608,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTYoshiAnimTurn_joint2[104] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAZ), -24, -4,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 28), 22, 15,
	_FT_ANIM_CMD(11, FT_ANIM_TRAZ, 1), 25,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY), 0, -1, -89, -2, 0, 1, 30, 12,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 30, -65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 89, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), 0, 1, -89, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 3), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), -10, 240,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 0, -34, 31, 69,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 1), 40, 15,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 1), -8,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 22, 120, 80, 35, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -89, -14,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, -22, 19, -349, 39, 13,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -10, 283, 40, 15,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 1), -8,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 22, 90, 109, 43, -62,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 2, 30, -34, 16, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 2), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimTurn_joint3[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 14, -8, 0, 2, 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -147, 14, 89, 3, -141, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 144, 13, 30, -9, -47, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -29, -17, 0, -2, 0, 4,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimTurn_joint6[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 78, -11, 0, 31,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -71, -11, 1075, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 0, 4, 593, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -54, -21, 453, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -64, 21, 186, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 31, 0, 0, -18,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimTurn_joint7[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1608, 27, 1608, 233, 1146, 122,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1273, -84,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1485, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1841, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1875, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 2010, -17,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1156, -143,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 882, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1345, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1274, -95, 1961, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1535, -165, 1725, -167, 1041, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1604, -36, 1627, -58, 1223, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1608, -4, 1608, -18, 1314, 91,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTYoshiAnimTurn_joint10[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -596, -73,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -610, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -572, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -724, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -721, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -676, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -602, 74,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimTurn_joint11[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1608, -91, 1608, 227, 1475, 60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1395, -111,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1549, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1835, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1829, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 2150, 61,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1264, -132,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1157, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1424, 35, 2178, -61,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1605, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2028, -238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1701, -213, 1313, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1607, -1, 1602, -46, 1389, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1608, 0, 1608, 6, 1377, -12,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimTurn_joint13[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1162, 171,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -811, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -863, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1108, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1087, 21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimTurn_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -536, -893, 0, 0, 156, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimTurn_joint15[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -183, -6, 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -210, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -223, 0, 0, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -212, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTYoshiAnimTurn_joint17[22] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -160, -8, 0, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -195, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -261, -5, 0, 16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimTurn_joint18[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, -7, 4, 6, -12, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 63, -50, -241, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -82, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -186, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 40, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -48, -4, -554, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 61, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -189, 279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -75, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 8, -50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -46, 47,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 181, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 23, -22, 157, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4, -28, 5, 51, 24, -133,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimTurn_joint20[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 270, -24,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 247, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 368, 375,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 998, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 452, -407,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 184, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 324, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 448, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 205, 198,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimTurn_joint22[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1614, 6, -84, 35, -263, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1758, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 224, 200, -142, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 455, 20, -76, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1825, -4, 266, -145, -222, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1566, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 164, -100, -127, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -129, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -288, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -388, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1549, 6, -159, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1578, 33, -163, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1615, 37, -84, 45, -243, -79,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimTurn_joint23[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -13, 0, 7, -160, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 105, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -47, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -28, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 55, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -77, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 132, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 75, -50, 113, -192,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -20, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -11, 61, -253, -249,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 61, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -386, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -263, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -239, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -60, 0, 19, -160, 79,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimTurn_joint25[124] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 381, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 351, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 342, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 495, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 629, 431,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 869, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 654, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 556, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 381, -174,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0648, 0x000A, 0xFFA6, 0x0028, 0xFF1E, 0xFFF2, 0x2803, 0x0005, 0x0670, 0x0029, 0x200D, 0x0003, 0x00C3, 0x0092, 0xFEAE, 0xFFAA, 0x200D, 0x0001, 0x015A, 0x0017, 0xFE3C, 0xFFC3, 0x2805, 0x0002, 0x00A7, 0xFFA9, 0x2009, 0x0001, 0xFE34, 0x00A6, 0x200B, 0x0001, 0x0690, 0x000A, 0xFF89, 0x00A4, 0x2809, 0x0002, 0xFEC0, 0xFF9C, 0x2803, 0x0005, 0x05FE, 0x0046, 0x2005, 0x0001, 0x0043, 0xFF9A, 0x2805, 0x0004, 0xFF7A, 0x0021, 0x0801, 0x0001, 0x2009, 0x0001, 0xFEB4, 0x003F, 0x2009, 0x0001, 0xFF3E, 0x003E, 0x2009, 0x0001, 0xFF30, 0xFFF1, 0x200F, 0x0001, 0x0648, 0x004A, 0xFFA6, 0x002C, 0xFF1E, 0xFFEF, 0x0000,
};
