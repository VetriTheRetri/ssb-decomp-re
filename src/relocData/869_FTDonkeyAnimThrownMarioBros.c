/* AnimJoint data for relocData file 869 (FTDonkeyAnimThrownMarioBros) */
/* 960 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimThrownMarioBros_joint2[16];
extern u16 dFTDonkeyAnimThrownMarioBros_joint3[16];
extern u16 dFTDonkeyAnimThrownMarioBros_joint5[12];
extern u16 dFTDonkeyAnimThrownMarioBros_joint6[52];
extern u16 dFTDonkeyAnimThrownMarioBros_joint7[24];
extern u16 dFTDonkeyAnimThrownMarioBros_joint8[20];
extern u16 dFTDonkeyAnimThrownMarioBros_joint9[10];
extern u16 dFTDonkeyAnimThrownMarioBros_joint11[18];
extern u16 dFTDonkeyAnimThrownMarioBros_joint12[52];
extern u16 dFTDonkeyAnimThrownMarioBros_joint13[24];
extern u16 dFTDonkeyAnimThrownMarioBros_joint14[20];
extern u16 dFTDonkeyAnimThrownMarioBros_joint15[10];
extern u16 dFTDonkeyAnimThrownMarioBros_joint17[14];
extern u16 dFTDonkeyAnimThrownMarioBros_joint18[24];
extern u16 dFTDonkeyAnimThrownMarioBros_joint20[16];
extern u16 dFTDonkeyAnimThrownMarioBros_joint22[24];
extern u16 dFTDonkeyAnimThrownMarioBros_joint23[24];
extern u16 dFTDonkeyAnimThrownMarioBros_joint25[16];
extern u16 dFTDonkeyAnimThrownMarioBros_joint26[36];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTDonkeyAnimThrownMarioBros_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTDonkeyAnimThrownMarioBros_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimThrownMarioBros_joint3, /* [2] joint 3 */
	(u32)dFTDonkeyAnimThrownMarioBros_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTDonkeyAnimThrownMarioBros_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimThrownMarioBros_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimThrownMarioBros_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimThrownMarioBros_joint9, /* [8] joint 9 */
	(u32)dFTDonkeyAnimThrownMarioBros_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTDonkeyAnimThrownMarioBros_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimThrownMarioBros_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimThrownMarioBros_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimThrownMarioBros_joint15, /* [14] joint 15 */
	(u32)dFTDonkeyAnimThrownMarioBros_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTDonkeyAnimThrownMarioBros_joint18, /* [17] joint 18 */
	(u32)dFTDonkeyAnimThrownMarioBros_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTDonkeyAnimThrownMarioBros_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTDonkeyAnimThrownMarioBros_joint23, /* [22] joint 23 */
	(u32)dFTDonkeyAnimThrownMarioBros_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTDonkeyAnimThrownMarioBros_joint26, /* [25] joint 26 */
};

/* Joint 2 */
u16 dFTDonkeyAnimThrownMarioBros_joint2[16] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -24, 0, 12, 512, -522, 482,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -24, 0, 782, 362, 201, 340,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTDonkeyAnimThrownMarioBros_joint3[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -41, -16,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), -265, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -383, -7,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 3,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimThrownMarioBros_joint5[12] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 571, -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 24, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 637, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTDonkeyAnimThrownMarioBros_joint6[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -400, -86, -90, 66, -36, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -59, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -950, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -69, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -283, -232,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1145, -194,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -35, -37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1029, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1086, -56, -1347, -201, -110, -75,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimThrownMarioBros_joint7[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -550, -183,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1055, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -903, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -485, 274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -164, 321,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimThrownMarioBros_joint8[20] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -24, 0, -3, 0, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -441, -16, -66, -2, -56, -2,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTDonkeyAnimThrownMarioBros_joint9[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, -67, -44,
	_FT_ANIM_CMD(11, 0, 1), 3,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimThrownMarioBros_joint11[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -961, 38, 70, 0, 29, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 70, 0, 29, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 101, 1,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimThrownMarioBros_joint12[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 306, 121, 152, -71, 44, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 810, -18, -105, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 245, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 454, 204,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1008, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 752, 283, -204, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1377, 157, 382, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1068, -177, 33, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1022, -46, 1150, 141, -55, -89,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTDonkeyAnimThrownMarioBros_joint13[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -609, -147,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1052, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -939, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -615, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -415, 199,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimThrownMarioBros_joint14[20] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 103, 31, 0, 13, 0, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 663, 20, 244, 9, -145, -5,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTDonkeyAnimThrownMarioBros_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -1340, 2502, 120, 120, 120,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimThrownMarioBros_joint17[14] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -404, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -334, 3, 246, 11, 278, 12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTDonkeyAnimThrownMarioBros_joint18[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -177, 7, -369, -1, 216, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -75, 1, -397, -4, -152, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, 0, -400, -3, -167, -15,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTDonkeyAnimThrownMarioBros_joint20[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 941, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1155, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1160, 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTDonkeyAnimThrownMarioBros_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -336, -4, -130, -6, -622, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -376, 15, -67, 8, -3, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -363, 13, -61, 5, 18, 21,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTDonkeyAnimThrownMarioBros_joint23[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 55, 20, 194, 11, 140, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 171, 6, 330, 7, -96, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 175, 4, 335, 5, -106, -10,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTDonkeyAnimThrownMarioBros_joint25[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 953, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1115, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1119, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTDonkeyAnimThrownMarioBros_joint26[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1761, 32, 1368, 0, 909, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1550, 10, 1549, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 1698, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1665, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1649, -16, 1557, 6, 1562, 12,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
