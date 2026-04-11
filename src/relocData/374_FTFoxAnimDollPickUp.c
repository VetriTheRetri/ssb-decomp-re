/* AnimJoint data for relocData file 374 (FTFoxAnimDollPickUp) */
/* 1424 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimDollPickUp_joint1[10];
extern u16 dFTFoxAnimDollPickUp_joint2[48];
extern u16 dFTFoxAnimDollPickUp_joint3[46];
extern u16 dFTFoxAnimDollPickUp_joint5[16];
extern u16 dFTFoxAnimDollPickUp_joint6[78];
extern u16 dFTFoxAnimDollPickUp_joint7[36];
extern u16 dFTFoxAnimDollPickUp_joint8[10];
extern u16 dFTFoxAnimDollPickUp_joint9[20];
extern u16 dFTFoxAnimDollPickUp_joint11[10];
extern u16 dFTFoxAnimDollPickUp_joint12[70];
extern u16 dFTFoxAnimDollPickUp_joint13[36];
extern u16 dFTFoxAnimDollPickUp_joint16[10];
extern u16 dFTFoxAnimDollPickUp_joint17[58];
extern u16 dFTFoxAnimDollPickUp_joint19[38];
extern u16 dFTFoxAnimDollPickUp_joint21[34];
extern u16 dFTFoxAnimDollPickUp_joint22[54];
extern u16 dFTFoxAnimDollPickUp_joint24[30];
extern u16 dFTFoxAnimDollPickUp_joint25[54];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimDollPickUp_joints[] = {
	(u32)dFTFoxAnimDollPickUp_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimDollPickUp_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimDollPickUp_joint3, /* [2] joint 3 */
	(u32)dFTFoxAnimDollPickUp_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTFoxAnimDollPickUp_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimDollPickUp_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimDollPickUp_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimDollPickUp_joint9, /* [8] joint 9 */
	(u32)dFTFoxAnimDollPickUp_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTFoxAnimDollPickUp_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimDollPickUp_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimDollPickUp_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTFoxAnimDollPickUp_joint17, /* [16] joint 17 */
	(u32)dFTFoxAnimDollPickUp_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTFoxAnimDollPickUp_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTFoxAnimDollPickUp_joint22, /* [21] joint 22 */
	(u32)dFTFoxAnimDollPickUp_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTFoxAnimDollPickUp_joint25, /* [24] joint 25 */
	0xFFFF015C, /* [25] END */
};

/* 4-byte alignment padding */
static u32 dFTFoxAnimDollPickUp_pad[1] = { 0 };

/* Joint 1 */
u16 dFTFoxAnimDollPickUp_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 100),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimDollPickUp_joint2[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY), 923, 103, 265, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 923, 0, 103, 1, 265, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 95), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 907, -2, 159, 1, 198, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 761, -2, 190, 4, 68, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 718, 0, 489, 7, -2, -1,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTFoxAnimDollPickUp_joint3[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -90, -68, 888,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -90, -2, -68, 14, 888, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 95), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 25), -99, -8, -14, 15, 817, -7,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), -151, -5, 39, 6, 839, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 40), -151, 39, 839,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimDollPickUp_joint5[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 440,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 440,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 95), 440, -4,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimDollPickUp_joint6[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 246, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 2135, -1566,
	ftAnimSetValRateT(FT_ANIM_ROTX, 80), 2044, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 62), -1558, 4, 249, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1553, 22, 251, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), -1244, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), 415, -22,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2041, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 2136, 6,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1250, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1514, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 236, -35,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1542, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1579, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2145, 8, -1584, -5, 195, -41,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimDollPickUp_joint7[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 62), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -267, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -280, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -189, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -176, 43,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTFoxAnimDollPickUp_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 100),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTFoxAnimDollPickUp_joint9[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 174,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 174, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 105), -244, -1,
	ftAnimBlock(0, 95),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTFoxAnimDollPickUp_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 100),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimDollPickUp_joint12[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 468, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -2300, 1453,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 79), 572, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 90), -2318, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 67), 1448, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1450, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 1671, 10,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 576, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 396, -29,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2317, 4, 1690, 61,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -2303, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1772, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1745, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 1607, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2302, 1, 1578, -28, 363, -32,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimDollPickUp_joint13[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -241,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 69), -344, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -352, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -258, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -253, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -210, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 105,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimDollPickUp_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 272, 0, 0,
	ftAnimBlock(0, 100),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimDollPickUp_joint17[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 265, 0, 43, 0, -668, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 85), -544, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 97), 344, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 84), -90, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -96, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -35, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -540, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -608, -18,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 340, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 335, -7, -5, 40, -634, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 324, -10, 46, 51, -686, -51,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimDollPickUp_joint19[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 306, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 72), 296, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 292, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 158, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 144, -23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 66, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 230, 163,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTFoxAnimDollPickUp_joint21[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -186, 0, -145, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 333,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 99), 0, 1, 349, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 83), -188, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -188, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -129, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -116, 12, 0, 1, 349, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimDollPickUp_joint22[54] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 209, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 93, -571,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 85), -465, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 92), 271, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 84), -30, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -35, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 71, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -462, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -587, -28,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 271, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 234, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 214, -20, 99, 28, -616, -29,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimDollPickUp_joint24[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 250,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 72), 259, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 257, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 171, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 162, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 146, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 226, 80,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimDollPickUp_joint25[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -55, 0, 12, 0, 401, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 99), -213, -1, 590, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 79), -372, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -378, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 18), -340, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -336, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -338, -1, -215, -1, 591, 1,
	ftAnimEnd(),
	0x1802, 0x0000, 0x50EC, 0x0000, 0x0000, 0x0000, 0xFF82, 0xFFA0, 0x1003, 0x0064, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
