/* AnimJoint data for relocData file 363 (FTMarioAnimDollFalls) */
/* 3184 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimDollFalls_joint1[46];
extern u16 dFTMarioAnimDollFalls_joint2[82];
extern u16 dFTMarioAnimDollFalls_joint3[12];
extern u16 dFTMarioAnimDollFalls_joint5[10];
extern u16 dFTMarioAnimDollFalls_joint6[230];
extern u16 dFTMarioAnimDollFalls_joint7[48];
extern u16 dFTMarioAnimDollFalls_joint8[10];
extern u16 dFTMarioAnimDollFalls_joint9[10];
extern u16 dFTMarioAnimDollFalls_joint11[64];
extern u16 dFTMarioAnimDollFalls_joint12[164];
extern u16 dFTMarioAnimDollFalls_joint13[36];
extern u16 dFTMarioAnimDollFalls_joint16[10];
extern u16 dFTMarioAnimDollFalls_joint17[192];
extern u16 dFTMarioAnimDollFalls_joint19[94];
extern u16 dFTMarioAnimDollFalls_joint21[112];
extern u16 dFTMarioAnimDollFalls_joint22[196];
extern u16 dFTMarioAnimDollFalls_joint24[226];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTMarioAnimDollFalls_joints[] = {
	(u32)dFTMarioAnimDollFalls_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimDollFalls_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimDollFalls_joint3, /* [2] joint 3 */
	(u32)dFTMarioAnimDollFalls_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTMarioAnimDollFalls_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimDollFalls_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimDollFalls_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimDollFalls_joint9, /* [8] joint 9 */
	(u32)dFTMarioAnimDollFalls_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTMarioAnimDollFalls_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimDollFalls_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimDollFalls_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTMarioAnimDollFalls_joint17, /* [16] joint 17 */
	(u32)dFTMarioAnimDollFalls_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTMarioAnimDollFalls_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTMarioAnimDollFalls_joint22, /* [21] joint 22 */
	(u32)dFTMarioAnimDollFalls_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF02D6, /* [24] END */
};

/* Joint 1 */
u16 dFTMarioAnimDollFalls_joint1[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -182, 116, -907, -17, 264, -144, 161, 95, 7798, 25, -281, 281,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 20), 0, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 0, 2, 0, 12, 0, -3, 270, -64, 6787, -3119,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 69), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 19), 0, -31, 0, -786,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 50), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimDollFalls_joint2[82] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 13, 0, 748, 0, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 9, -386, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 51, -13, -152, 2, 76, -16, -46, -22, 629, 14, 5, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), -252, -9, 463, 15, -911, -32, -46, 0, 368, -62, 5, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 623,
	ftAnimSetValRateT(FT_ANIM_TRAY, 17), 1104, -2,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 13, -25, 64,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 27), -70, 0, 63, 0, 222, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 17), -46, 5,
	ftAnimSetValRateT(FT_ANIM_TRAY, 17), 263, -733,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 33), -46, 5,
	ftAnimBlock(0, 10),
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), -70, 63, 222,
	ftAnimBlock(0, 7),
	ftAnimSetValBlockT(FT_ANIM_TRAY, 16), 263,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTMarioAnimDollFalls_joint3[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimBlock(0, 70),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimDollFalls_joint5[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 70),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimDollFalls_joint6[230] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 843, -1, -251, -5, -6, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -165, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 779, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 199, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 420, 200,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 805, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -119, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 40, -7,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 806, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 774, -24,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 31, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -294, -319,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 733, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 801, 142, -677, -214, 485, -547,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -708, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1065, 123, -361, -493,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1047, -17, -502, -111,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1098, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -701, 3, -584, -72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1096, -270,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -739, 20,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1044, -432,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 233, -300, -1419, -320,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1899, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 443, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 563, -105, -714, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -862, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 233, -425, -1596, 398,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -287, -351, -1101, 323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -470, -139, -950, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -774, -31, -1120, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -817, 96, -1131, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -581, 42, -1414, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -731, -85, -1304, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -772, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1379, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -915, -54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1206, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -775, -2,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 16), -777,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1385, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -1385, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1206, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), -1206, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -777, 0, -1206, 0, -1385, 0,
	ftAnimSetFlags(0),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimDollFalls_joint7[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -363, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -450, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -414, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -355, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -355, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -355, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -355, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -355, 0,
	ftAnimSetFlags(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimDollFalls_joint8[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 100,
	ftAnimBlock(0, 70),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTMarioAnimDollFalls_joint9[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 397, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 100,
	ftAnimBlock(0, 70),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimDollFalls_joint11[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -263, 6, -56, 0, -383, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 187, 26, -14, 2, -334, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 187, -158, -14, -28, -334, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -603, -20, -154, -7, -42, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -477, 14, -166, 10, 111, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -35, 0, 172, 0, 371, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -35, 0, 172, 0, 371, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 21, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 62, 430,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimDollFalls_joint12[164] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 459, -17, 228, 39, -165, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 464, 95,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 479, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 522, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 544, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 444, -55,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 569, 102,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 928, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 623, 131,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1053, 9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 390, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 288, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 955, 251, -102, -463, 1028, 258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1432, -88, -637, -64, 1571, 726,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 778, -337, -230, 212, 2482, 474,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 756, -13, -213, 27, 2519, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 751, -4, -174, 37, 2526, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 433, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 2699, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 457, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 350, -71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 455, 20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 416, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 112, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2725, 24,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 28), 2849,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 473, 16,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 25), 541,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 112, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 112, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 541, 0, 112, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 2849,
	ftAnimSetFlags(0),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimDollFalls_joint13[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -393,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -786, -656,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1312, 393,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 651,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 45), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetFlags(0),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimDollFalls_joint16[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 100,
	ftAnimBlock(0, 70),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTMarioAnimDollFalls_joint17[192] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -136, 8, 46, 17, -41, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -77, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 236, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 59, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 215, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -27, 791, 228, 262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1505, 754, 740, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1481, -7, 678, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 1438, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 735, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 876, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 248, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 302, -7,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 872, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 288, -42, 836, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1414, -56, 218, -781, 697, 381,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1326, 33, -1275, -728, 1600, 331,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1481, 61, -1239, 11, 1360, -95,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1370, -32, 1539, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1252, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1208, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1384, 10, 1514, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1714, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1346, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1233, -99,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 953, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1738, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 1549, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1203, 5,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 34), -1165,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 956, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1285, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1516, -16, 1328, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 1516, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 14), 1328,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1328, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1516, 0, -1165, 0, 1328, 0,
	ftAnimSetFlags(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTMarioAnimDollFalls_joint19[94] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 393, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 251, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 374,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 757, 239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 485, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 288, -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -144,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 243, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 415, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 713, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 663, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 269, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 269, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 269, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 269, 0,
	ftAnimSetFlags(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTMarioAnimDollFalls_joint21[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1280, 1, 1855, 0, -892, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), 1914, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 40), -1378, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1245, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1054, -490,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 264, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1458, 650,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1564, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1580, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), 1556, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1591, -459,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 636, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1142, 318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1273, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1385, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 1213, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1184, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1464, 16,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1910, -4,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 29), 1830,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1418, -38,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 28), -1678,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1479, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 22), 1552, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), -1678, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1552, 1830,
	ftAnimSetFlags(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTMarioAnimDollFalls_joint22[196] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3006, -6, 126, 15, -109, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -3121, -116, 349, 98, -95, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3262, -93, 427, 59, -220, -67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 579, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -2958, 191, 285, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2764, 166, 497, 182,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -2492, -3, 801, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 460, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 461, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2498, -389, 463, 111, 795, -419,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3272, -490, 683, -42, -37, -651,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3479, 57, 379, -221, -507, -248,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -456, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 192, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3157, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3015, 70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -3040, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -474, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -970, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 203, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 157, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3056, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -4169, -49,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -971, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1056, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 138, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 499, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4219, -54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -4402, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1109, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1109, 0,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -4402, 499,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 12), -4402,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 499, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1109, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1109, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4402, 0, 499, 0, -1109, 0,
	ftAnimSetFlags(0),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimDollFalls_joint24[226] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 577, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 637, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 373, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 246, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 615, 469,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 946, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 591, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 600, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 816, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 763, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 403, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 403, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 13), 403,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 403, 0,
	ftAnimSetFlags(0),
	ftAnimEnd(),
	0x0000, 0x200E, 0xF6DD, 0xFFFC, 0xF9D1, 0x0000, 0xFC5E, 0x0000, 0x2809, 0x0017, 0xFC3C, 0xFFF1, 0x2805, 0x001B, 0xF9E9, 0x0000, 0x2003, 0x0006, 0xF6C3, 0xFFDE, 0x2003, 0x0001, 0xF69F, 0xFFDE, 0x2003, 0x0006, 0xF702, 0x0085, 0x2003, 0x0001, 0xF7B4, 0x005D, 0x2003, 0x0003, 0xF7CD, 0x0002, 0x2003, 0x0001, 0xF7D1, 0x0002, 0x2003, 0x0001, 0xF7D2, 0x0000, 0x2003, 0x0001, 0xF7D0, 0xFF1F, 0x2003, 0x0001, 0xF60F, 0xFF4C, 0x2003, 0x0001, 0xF666, 0x005C, 0x2803, 0x0004, 0xF782, 0x00BC, 0x0801, 0x0001, 0x2009, 0x0001, 0xFC28, 0xFFE6, 0x2809, 0x0004, 0xFAAD, 0xFF30, 0x0801, 0x0002, 0x2003, 0x0001, 0xF871, 0x00DA, 0x2803, 0x0007, 0xF9A7, 0x0001, 0x2005, 0x0001, 0xF9E6, 0xFFF2, 0x2805, 0x000D, 0xF874, 0xFFF6, 0x2009, 0x0001, 0xF9C6, 0xFF4A, 0x2809, 0x0006, 0xF90B, 0x0014, 0x0801, 0x0005, 0x2003, 0x0001, 0xF9AA, 0x0004, 0x4003, 0x0022, 0xF9D6, 0x2009, 0x0001, 0xF924, 0x001B, 0x4009, 0x0013, 0xFAAA, 0x0801, 0x0005, 0x2005, 0x0001, 0xF86B, 0xFFF9, 0x4005, 0x001B, 0xF85D, 0x0801, 0x000D, 0x3809, 0x0001, 0xFAAA, 0x3809, 0x000D, 0xFAAA, 0x380F, 0x0001, 0xF9D6, 0xF85D, 0xFAAA, 0x7000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
