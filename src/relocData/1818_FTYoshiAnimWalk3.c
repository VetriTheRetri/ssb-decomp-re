/* AnimJoint data for relocData file 1818 (FTYoshiAnimWalk3) */
/* 1600 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimWalk3_joint1[16];
extern u16 dFTYoshiAnimWalk3_joint2[42];
extern u16 dFTYoshiAnimWalk3_joint3[28];
extern u16 dFTYoshiAnimWalk3_joint6[68];
extern u16 dFTYoshiAnimWalk3_joint7[36];
extern u16 dFTYoshiAnimWalk3_joint10[16];
extern u16 dFTYoshiAnimWalk3_joint11[36];
extern u16 dFTYoshiAnimWalk3_joint13[16];
extern u16 dFTYoshiAnimWalk3_joint14[14];
extern u16 dFTYoshiAnimWalk3_joint15[48];
extern u16 dFTYoshiAnimWalk3_joint17[52];
extern u16 dFTYoshiAnimWalk3_joint18[74];
extern u16 dFTYoshiAnimWalk3_joint20[46];
extern u16 dFTYoshiAnimWalk3_joint22[68];
extern u16 dFTYoshiAnimWalk3_joint23[64];
extern u16 dFTYoshiAnimWalk3_joint25[124];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimWalk3_joints[] = {
	(u32)dFTYoshiAnimWalk3_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimWalk3_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimWalk3_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimWalk3_joint6, /* [3] joint 6 */
	0x00000000, /* [4] NULL */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimWalk3_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimWalk3_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimWalk3_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimWalk3_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTYoshiAnimWalk3_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimWalk3_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimWalk3_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimWalk3_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimWalk3_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimWalk3_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimWalk3_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimWalk3_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF016A, /* [25] END */
};

/* Joint 1 */
u16 dFTYoshiAnimWalk3_joint1[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAY), 746,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 746,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 746,
	ftAnimLoop(0x6800, -30),
};

/* Joint 2 */
u16 dFTYoshiAnimWalk3_joint2[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), -89,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 20), 89,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 10,
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), -44, 60, 43,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAY), 0, 30,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 20), 44, -60,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), 1,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 20), -89,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), 43,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 20), -44, 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), 1,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 20), 89,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), 43,
	ftAnimLoop(0x6800, -82),
};

/* Joint 3 */
u16 dFTYoshiAnimWalk3_joint3[28] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 251,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), 178,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 2,
	ftAnimBlock(0, 8),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 251,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 251,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), 178,
	ftAnimBlock(0, 2),
	ftAnimLoop(0x6800, -54),
};

/* Joint 6 */
u16 dFTYoshiAnimWalk3_joint6[68] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -116, 22, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -117, 0, -46, -10, 51, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -114, 0, -78, -2, 35, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -111, 0, -70, 5, 8, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -108, 0, -19, 11, -37, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -112, 0, 46, 10, -49, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -115, 0, 84, 2, -28, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -117, 0, 66, -6, 6, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -116, 22, 35,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimWalk3_joint7[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1610, 0, 1617, -1, 983, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 39), -1609, 0, 1617, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 1119, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1130, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 969, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1610, 0, 1617, 0, 983, 13,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTYoshiAnimWalk3_joint10[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1085, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), -1082, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1085, -3,
	ftAnimLoop(0x6800, -30),
};

/* Joint 11 */
u16 dFTYoshiAnimWalk3_joint11[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1614, 0, 1621, -1, 1121, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 39), -1614, 0, 1621, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 984, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 996, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 1105, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1614, 0, 1621, 0, 1121, 15,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimWalk3_joint13[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1103, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), -1102, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1103, -1,
	ftAnimLoop(0x6800, -30),
};

/* Joint 14 */
u16 dFTYoshiAnimWalk3_joint14[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -357,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), -357,
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimWalk3_joint15[48] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), -44,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 21), 44,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 7,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -312,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), -44,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 5,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), -312,
	ftAnimBlock(0, 9),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 19), -44,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -44,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), -312,
	ftAnimBlock(0, 8),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 21), 44,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), -44,
	ftAnimBlock(0, 5),
	ftAnimLoop(0x6800, -94),
};

/* Joint 17 */
u16 dFTYoshiAnimWalk3_joint17[52] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTY), -162, 17,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -312,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 0, 20,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 10), 178,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), -312,
	ftAnimBlock(0, 7),
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 0, -17,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), -44,
	ftAnimBlock(0, 7),
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -178, -12,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), -312,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -162, 17,
	ftAnimLoop(0x6800, -102),
};

/* Joint 18 */
u16 dFTYoshiAnimWalk3_joint18[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 1, -1, 119, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), 79, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), 15, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 155, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 123, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -437, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -49, 116,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 78, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 10, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 65, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 97, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 1, 0, 123, 26,
	ftAnimLoop(0x6800, -144),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimWalk3_joint20[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 6, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 97, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 680, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 716, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 529, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 469, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 150, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -90),
};

/* Joint 22 */
u16 dFTYoshiAnimWalk3_joint22[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1609, 0, 1, 12, -99, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), 1534, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), -130, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -387, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -422, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -118, -15,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1536, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1609, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -142, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -11, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -134, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -71, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -79, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1609, 0, 1, 12, -97, -17,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimWalk3_joint23[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -24, -1, 5, -2, -289, -52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 2, 108,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), 8, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -15, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -6, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), -24, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 99, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 240, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 254, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 53, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 22, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -237, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -24, 0, 5, -2, -289, -52,
	ftAnimLoop(0x6800, -124),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimWalk3_joint25[124] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 747, 24,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 495, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 434, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 114, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 295, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 336, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 716, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 747, 31,
	ftAnimLoop(0x6800, -94),
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1624, 5, -7, 11, -261, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 71, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 1612, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -147, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -158, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -81, 6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 55, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -17, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1609, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 1621, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -99, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -393, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -424, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -298, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1624, 3, -7, 9, -261, 36,
	ftAnimLoop(0x6800, -144),
	ftAnimEnd(),
	0x0000, 0x0000,
};
