/* AnimJoint data for relocData file 1814 (FTNessAnimFireFlowerShootAir) */
/* 3360 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimFireFlowerShootAir_joint1[64];
extern u16 dFTNessAnimFireFlowerShootAir_joint2[68];
extern u16 dFTNessAnimFireFlowerShootAir_joint4[52];
extern u16 dFTNessAnimFireFlowerShootAir_joint5[168];
extern u16 dFTNessAnimFireFlowerShootAir_joint6[62];
extern u16 dFTNessAnimFireFlowerShootAir_joint7[26];
extern u16 dFTNessAnimFireFlowerShootAir_joint8[28];
extern u16 dFTNessAnimFireFlowerShootAir_joint10[10];
extern u16 dFTNessAnimFireFlowerShootAir_joint11[160];
extern u16 dFTNessAnimFireFlowerShootAir_joint12[58];
extern u16 dFTNessAnimFireFlowerShootAir_joint13[10];
extern u16 dFTNessAnimFireFlowerShootAir_joint15[38];
extern u16 dFTNessAnimFireFlowerShootAir_joint16[154];
extern u16 dFTNessAnimFireFlowerShootAir_joint18[62];
extern u16 dFTNessAnimFireFlowerShootAir_joint19[156];
extern u16 dFTNessAnimFireFlowerShootAir_joint21[30];
extern u16 dFTNessAnimFireFlowerShootAir_joint22[186];
extern u16 dFTNessAnimFireFlowerShootAir_joint24[80];
extern u16 dFTNessAnimFireFlowerShootAir_joint25[152];
extern u16 dFTNessAnimFireFlowerShootAir_joint26[64];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimFireFlowerShootAir_joints[] = {
	(u32)dFTNessAnimFireFlowerShootAir_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimFireFlowerShootAir_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimFireFlowerShootAir_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimFireFlowerShootAir_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimFireFlowerShootAir_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimFireFlowerShootAir_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimFireFlowerShootAir_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimFireFlowerShootAir_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimFireFlowerShootAir_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimFireFlowerShootAir_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimFireFlowerShootAir_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimFireFlowerShootAir_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimFireFlowerShootAir_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimFireFlowerShootAir_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimFireFlowerShootAir_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimFireFlowerShootAir_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimFireFlowerShootAir_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimFireFlowerShootAir_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimFireFlowerShootAir_joint25, /* [24] joint 25 */
	(u32)dFTNessAnimFireFlowerShootAir_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimFireFlowerShootAir_joint1[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 242, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 444, 201, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 223, 11,
	ftAnimSetValT(FT_ANIM_ROTY, 16), 223,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 3), 444,
	ftAnimSetValT(FT_ANIM_TRAY, 13), 444,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 13), 0, 0,
	ftAnimBlock(0, 12),
	ftAnimSetValT(FT_ANIM_ROTY, 10), 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 1), 444,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 8), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 8), 242,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimFireFlowerShootAir_joint2[68] = {
	ftAnimSetValAfter(FT_ANIM_ROTZ | FT_ANIM_TRAY), 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, -209,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 5), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 0, 26,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), 0, 0, 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY, 13), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), -3, 43, -104,
	ftAnimSetValT(FT_ANIM_ROTX, 7), -3,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), 0, 0,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 0, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 0,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 12), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), 0,
	ftAnimSetValT(FT_ANIM_ROTX, 9), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 1), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 8), -209,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTNessAnimFireFlowerShootAir_joint4[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 148, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -10, -19, -163, -20,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 3), -10,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 3), -163,
	ftAnimSetValT(FT_ANIM_ROTY, 13), -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -10, -69,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -10, 43,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -10, 17,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 1), -163,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 8), 148,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 8), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimFireFlowerShootAir_joint5[168] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -415, 191, -615, 24, 75, -164,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 5529, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -223, 281, -590, 116, -88, -249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 147, 200, -382, 297, -424, -232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 177, -118, 3, 302, -552, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -88, -228, 221, 138, -774, -107,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 290, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -524, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -767, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -770, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -766, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 287, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 277, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -717, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1077, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1137, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -947, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -753, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -326, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -267, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -99, 94,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 279, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 26, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -768, 54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -542, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 21, 110,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 67, -153,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -208, -234, -475, 89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -569, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -364, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -154, -208, -157, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -348, -130, -607, -22, 16, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -415, -66, -615, -7, 75, 58,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimFireFlowerShootAir_joint6[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -795, -77,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -873, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -913, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -651, 456,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 321,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -658, -270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -853, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -827, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -795, 32,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimFireFlowerShootAir_joint7[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, 0, 0, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTNessAnimFireFlowerShootAir_joint8[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 194, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 31, -2, -62, -4, 86, 5,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 162, -47, 65,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 194, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTNessAnimFireFlowerShootAir_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimFireFlowerShootAir_joint11[160] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -967, -130, 1036, -8, -1357, -123,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 5529, 4095, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1080, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1097, -267, -1481, -263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1501, -307, -1884, -338,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1691, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1321, 231, -2158, -206,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1643, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2297, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1432, 132, -2450, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1425, 0, 1659, 4, -2454, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1642, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -2454, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1433, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1609, -16,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1643, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1642, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1623, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1632, -23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1642, -26, -2454, 59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1347, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2335, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1653, -11, -2239, 92,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1592, 128, -2020, 177,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1179, -143,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1032, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1398, 218, -1795, 238,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1400, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1155, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1011, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -967, 43, 1036, 3, -1357, 42,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimFireFlowerShootAir_joint12[58] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -748, -54,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -803, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -854, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -436, 363,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 14), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -330, -287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -574, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -818, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -770, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -748, 22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimFireFlowerShootAir_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -170, -63, 267, 143, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimFireFlowerShootAir_joint15[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 893, -935, 681,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 75, 68, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1536, 35, -804, 7, -71, -41,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 1536, -804, -71,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1536, -804, -71,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1536, -804, -71,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 893, -935, 681,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTNessAnimFireFlowerShootAir_joint16[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -32, -72, -360, 48, -700, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -104, -97, -312, 104, -634, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -228, -69, -150, 135, -451, 94,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -245, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 68, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -444, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -418, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -412, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -238, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -208, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -214, 12, 83, 3, -438, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -75, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 64, -30, -379, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 15, -22, -527, -97,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -610, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 69, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -50, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -13, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -637, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -697, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 77, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -161, -45,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -32, -10, -694, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -48, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -755, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -207, -46, -721, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -303, -52, -653, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -62, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -32, 29, -360, -56, -700, -46,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimFireFlowerShootAir_joint18[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 439, -95,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 343, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 367, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 473, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 818, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 865, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 573, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 456, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 388, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 439, 50,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimFireFlowerShootAir_joint19[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1620, 51, 1573, -36, -1615, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1484, -24, 1365, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1576, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1414, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1376, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1534, -30, 1310, -36, -1335, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1309, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1370, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1604, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1634, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1532, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1226, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1141, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1590, -64, -1169, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1677, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1375, 15, -1214, -115,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1515, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1400, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1403, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1666, 9, -1392, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1522, 81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1308, -31,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1513, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1556, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1432, 70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1504, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1365, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1633, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1645, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1600, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1541, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1580, -39, 1566, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1620, -40, 1573, 6, -1615, -15,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimFireFlowerShootAir_joint21[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -476, 178, 112,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -306, 7, 17, -13, -90, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -327, -6, -97, 6, -91, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -476, 178, 112,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimFireFlowerShootAir_joint22[186] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -59, 8, 442, 32, -799, 61,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 48, 141,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 444, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -737, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -502, 291,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 148, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 230, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 390, 85, 240, -127,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 163, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 402, 8, 150, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 133, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 472, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 131, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 101, 5, 124, -55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -52, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 142, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 105, -43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -32, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 58, 24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 54, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 90, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 54, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 186, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 466, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 449, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 95, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 182, 81,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 192, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -90, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 443, -19, 302, 123,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 579, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 310, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 133, -157, -340, -231,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -47, -22, -666, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 563, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 480, -40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -50, -5, -730, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -59, -9, 442, -37, -799, -68,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimFireFlowerShootAir_joint24[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 614, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 554, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 405, -277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 112, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 162, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 225, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 188, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 360, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 404, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 473, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 490, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 693, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 742, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 615, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 614, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimFireFlowerShootAir_joint25[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 7, 56, -104, 38, -32, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 59, 155,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -105, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 64, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 154, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 29, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 245, 149,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 312, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 23, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -23, -20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -6, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -83, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -39, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -56, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 269, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 64, -55,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -112, 0, -5, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 13, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -57, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 5, -55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -145, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 49, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -200, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -75, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 208, 41,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -220, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -309, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -171, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -78, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 238, 11, -294, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 69, -63, -68, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, -62, -104, -25, -32, 35,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimFireFlowerShootAir_joint26[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -339, -256, -211,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -17, 35, -256, -2, -211, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 15, 5, -278, -15, -18, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 44, 12, -422, -11, 146, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 142, 10, -394, 8, 152, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 120, -15, -366, 17, 84, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 79, -57, -325, 13, -143, -37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -339, -256, -211,
	ftAnimEnd(),
	0x0000, 0x0000,
};
