/* AnimJoint data for relocData file 693 (FTFoxAnimDownForwardU) */
/* 3008 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimDownForwardU_joint1[18];
extern u16 dFTFoxAnimDownForwardU_joint2[60];
extern u16 dFTFoxAnimDownForwardU_joint3[22];
extern u16 dFTFoxAnimDownForwardU_joint5[30];
extern u16 dFTFoxAnimDownForwardU_joint6[124];
extern u16 dFTFoxAnimDownForwardU_joint7[62];
extern u16 dFTFoxAnimDownForwardU_joint8[16];
extern u16 dFTFoxAnimDownForwardU_joint9[46];
extern u16 dFTFoxAnimDownForwardU_joint11[10];
extern u16 dFTFoxAnimDownForwardU_joint12[146];
extern u16 dFTFoxAnimDownForwardU_joint13[64];
extern u16 dFTFoxAnimDownForwardU_joint14[102];
extern u16 dFTFoxAnimDownForwardU_joint16[10];
extern u16 dFTFoxAnimDownForwardU_joint17[120];
extern u16 dFTFoxAnimDownForwardU_joint19[56];
extern u16 dFTFoxAnimDownForwardU_joint21[124];
extern u16 dFTFoxAnimDownForwardU_joint22[144];
extern u16 dFTFoxAnimDownForwardU_joint24[64];
extern u16 dFTFoxAnimDownForwardU_joint25[122];
extern u16 dFTFoxAnimDownForwardU_joint26[110];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTFoxAnimDownForwardU_joints[] = {
	(u32)dFTFoxAnimDownForwardU_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimDownForwardU_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimDownForwardU_joint3, /* [2] joint 3 */
	(u32)dFTFoxAnimDownForwardU_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTFoxAnimDownForwardU_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimDownForwardU_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimDownForwardU_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimDownForwardU_joint9, /* [8] joint 9 */
	(u32)dFTFoxAnimDownForwardU_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTFoxAnimDownForwardU_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimDownForwardU_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimDownForwardU_joint14, /* [13] joint 14 */
	(u32)dFTFoxAnimDownForwardU_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTFoxAnimDownForwardU_joint17, /* [16] joint 17 */
	(u32)dFTFoxAnimDownForwardU_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTFoxAnimDownForwardU_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTFoxAnimDownForwardU_joint22, /* [21] joint 22 */
	(u32)dFTFoxAnimDownForwardU_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTFoxAnimDownForwardU_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimDownForwardU_joint26, /* [25] joint 26 */
	0xFFFF02D7, /* [26] END */
};

/* Joint 1 */
u16 dFTFoxAnimDownForwardU_joint1[18] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 480, 1200,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 4000,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 23), 4200,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 8), 4200,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimDownForwardU_joint2[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, -513, 9, 189, -13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 160, 0, 21, 9, 5, 540, 568, -13, -1,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 20), 3216,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 35, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 16, 12, 900, -288, -14, -2,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 24, 12, 180, -224, -16, -2,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 40, 9, 480, 279, -19, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 3216, 0, 48, 912, -20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTFoxAnimDownForwardU_joint3[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, -3, 0, -9, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -141, -338, -3,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimDownForwardU_joint5[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 6, -457, 156,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 375, 21, 0, 18, 0, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 536, -2, 0, 5, 0, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 309, 156, 81,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimDownForwardU_joint6[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 378, 153, -1183, -66, -1200, -102,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 818, 426, -1289, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1302, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1338, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1384, 540, -1103, -11, -1688, -461,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1510, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1899, 280, -2261, -380,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2450, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1946, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1761, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1524, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), -1460, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2449, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -2525, -1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1746, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 1500, -35,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2528, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2303, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2242, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1522, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1470, -20, -1397, 97,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1492, 10, -1337, -17,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1447, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1498, 6, -1442, 4, -1349, -11,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimDownForwardU_joint7[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -581, -184,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -766, -207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -995, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -877, 304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -386, 438,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 189,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -268, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -388, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -869, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -949, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -595, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 36,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimDownForwardU_joint8[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 272, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 36), 0, 0, 0, 269, 0, 0,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTFoxAnimDownForwardU_joint9[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -134, -402, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 20), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 0, 53, 0, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 402, 26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 402, -39,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -187, -32, 0, 8, 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -113, 136, -72,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTFoxAnimDownForwardU_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimDownForwardU_joint12[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 74, -42, 1520, -27, -704, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 31, -80, 1492, -34, -845, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -86, -618, 1450, -292, -958, -347,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2075, -385,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1205, -836, 908, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1759, -304, 1367, 305,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1595, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1813, -24, -2311, -170,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2398, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1809, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1219, 117,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1608, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 1787, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2400, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -2365, 24,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1101, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -723, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -760, -79, 1795, 113, -2335, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -882, -231, 2014, 107, -2242, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1224, -315, 2010, -130, -1932, 295,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1265, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1567, -8, 1527, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1530, 37, 1425, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1473, 0, 1342, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1475, -2, 1336, -6, -1271, -5,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimDownForwardU_joint13[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -458, -292,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -750, -359,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1176, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1182, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -721, 479,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -224, 356,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -51, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -475, -313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -628, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 33,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTFoxAnimDownForwardU_joint14[102] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 268, 89, 0, 22, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 714, 110, 178, 16, 0, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 928, 22, 100, -44, 44, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 804, -43, 0, -16, 89, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 670, -100, 0, 0, 89, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, -161, 0, 0, 0, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -625, -89, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -714, 16, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -544, 234, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -245, 181, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 40, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimDownForwardU_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimDownForwardU_joint17[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 381, -10, -90, 43, -397, -54,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -66, -68, -736, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 195, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 42, -127,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -206, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -122, -22, -663, 178,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -35, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 248, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 251, -82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -44, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -196, 20, -124, -78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 139, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -347, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -176, -134,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -467, 59,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 138, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -363, -24,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -370, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -235, 20,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -401, 67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -42, 26,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -385, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -400, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -405, -5, -223, 12, -26, 15,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimDownForwardU_joint19[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 294, 136,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1130, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1005, -282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 564, -499,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 368, 299,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 599, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1161, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1173, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 694, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 583, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 390, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -36,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTFoxAnimDownForwardU_joint21[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -142, -40, -207, -48, 575, -109,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -254, 66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -28, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 465, -246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 82, -360,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -380, -80,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -188, 53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 406, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -417, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -434, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -110, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -257, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -255, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -138, 43,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 450, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 500, -50,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -94, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 54, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -428, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -257, 67,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 447, -56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 138, -22,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 56, 0, -188, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 48, -3, -76, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 46, -2, 125, -12, -56, 19,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimDownForwardU_joint22[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 661, -11, 220, 26, 56, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 477, -92,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 523, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -304, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -472, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 378, -38, -533, 125,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 514, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 453, -166, -221, 351,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 46, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 169, 260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 468, -72, 299, 60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 259, -149,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -409, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 54, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 104, -49,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -230,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -514, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 39, -68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 37, 69,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -403, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 48, 22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -488, 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -122, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 106, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 147, -16,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 66, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 350, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -132, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 122, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 355, 4, 137, -9, 134, 11,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimDownForwardU_joint24[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 985, 49,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1156, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 977, -407,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 342, -488,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 486, 369,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 744, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1163, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1198, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 650, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 544, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 365, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -33,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTFoxAnimDownForwardU_joint25[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -208, -92, -12, -72, 29, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -458, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -301, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -457, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -419, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -191, 231,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -454, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 116, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 119, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 302, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 345, -60, -331, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -707, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 181, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 164, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 404, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 358, -63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 98, 12,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 155, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -95, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 118, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 23, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -694, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -253, 36,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 20, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 18, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16, -1, -102, -7, -226, 26,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimDownForwardU_joint26[110] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -571, 83, -164,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -358, 136, 267, -20, -266, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -27, -37, 0, -66, 0, 66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -506, -169,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -876, -10,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 30), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -590, -11, 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -982, 26, 40, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 18), 0, 219,
	ftAnimEnd(),
	0x0000, 0x380E, 0xFE80, 0xFF25, 0x00BE, 0x200F, 0x0006, 0xF8CD, 0x001F, 0x0808, 0x0018, 0xFA9E, 0xFFEB, 0x200F, 0x0003, 0xFF9B, 0x0093, 0x0000, 0xFEFF, 0x0000, 0x00AC, 0x2807, 0x0005, 0xFD6B, 0xFFCC, 0x0000, 0xFFFC, 0x3809, 0x0005, 0x0000, 0x4009, 0x0016, 0x0000, 0x2007, 0x000E, 0xFBBF, 0x0015, 0xFFA2, 0xFFFB, 0x3807, 0x0008, 0xFF4E, 0xFF86, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
