/* AnimJoint data for relocData file 550 (FTMarioAnimDownForwardU) */
/* 2640 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimDownForwardU_joint1[18];
extern u16 dFTMarioAnimDownForwardU_joint2[60];
extern u16 dFTMarioAnimDownForwardU_joint3[24];
extern u16 dFTMarioAnimDownForwardU_joint5[34];
extern u16 dFTMarioAnimDownForwardU_joint6[138];
extern u16 dFTMarioAnimDownForwardU_joint7[72];
extern u16 dFTMarioAnimDownForwardU_joint8[10];
extern u16 dFTMarioAnimDownForwardU_joint9[42];
extern u16 dFTMarioAnimDownForwardU_joint11[24];
extern u16 dFTMarioAnimDownForwardU_joint12[126];
extern u16 dFTMarioAnimDownForwardU_joint13[72];
extern u16 dFTMarioAnimDownForwardU_joint14[62];
extern u16 dFTMarioAnimDownForwardU_joint16[10];
extern u16 dFTMarioAnimDownForwardU_joint17[136];
extern u16 dFTMarioAnimDownForwardU_joint19[56];
extern u16 dFTMarioAnimDownForwardU_joint21[102];
extern u16 dFTMarioAnimDownForwardU_joint22[122];
extern u16 dFTMarioAnimDownForwardU_joint24[44];
extern u16 dFTMarioAnimDownForwardU_joint25[118];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTMarioAnimDownForwardU_joints[] = {
	(u32)dFTMarioAnimDownForwardU_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimDownForwardU_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimDownForwardU_joint3, /* [2] joint 3 */
	(u32)dFTMarioAnimDownForwardU_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTMarioAnimDownForwardU_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimDownForwardU_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimDownForwardU_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimDownForwardU_joint9, /* [8] joint 9 */
	(u32)dFTMarioAnimDownForwardU_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTMarioAnimDownForwardU_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimDownForwardU_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimDownForwardU_joint14, /* [13] joint 14 */
	(u32)dFTMarioAnimDownForwardU_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTMarioAnimDownForwardU_joint17, /* [16] joint 17 */
	(u32)dFTMarioAnimDownForwardU_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTMarioAnimDownForwardU_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTMarioAnimDownForwardU_joint22, /* [21] joint 22 */
	(u32)dFTMarioAnimDownForwardU_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTMarioAnimDownForwardU_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTMarioAnimDownForwardU_joint1[18] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 300, 1200,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 2800,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 20), 4200,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 11), 4200,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimDownForwardU_joint2[60] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -513, 5, 245, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 160, 5, 3, 322, 523, -8, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 25), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 20), 3216, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 10, 7, 900, -65, -8, -1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 14, 7, 240, -288, -9, -1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 24, -5, 360, 114, -11, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 3216, 223, 0, 0, 540, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTMarioAnimDownForwardU_joint3[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 25), 0, -1, 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 25), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -71, -790, -95,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimDownForwardU_joint5[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 6, -457, 156, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 375, 21,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 36), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 536, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 208, 258, 110,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimDownForwardU_joint6[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1475, -22, -556, -27, -2159, 59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -896, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1453, 253, -2100, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1983, -61, -2545, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1329, 16, -1714, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2016, 361, -1195, -322, -2323, -382,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2396, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2052, -8, -1541, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2000, -50, -1482, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1514, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), 1673, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2341, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -2169, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2208, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2363, -87,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1521, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1357, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2478, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2349, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2305, 40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -2045, 44,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1353, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1328, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1678, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1758, -2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1988, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1741, -16, -1308, 20, -1880, 107,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimDownForwardU_joint7[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -461, -400,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -809, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -615, 399,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -186, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -388, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -391, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -270, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -198, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -44, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, -138,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimDownForwardU_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTMarioAnimDownForwardU_joint9[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -134, 0, 0, 0, 288, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 36), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 0, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 402, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 402, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -187, -12, 0, 0, 0, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 201, -4, 176,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimDownForwardU_joint11[24] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 54, -18,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 36), -221, 0, 54, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, 3, 0, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 139, -209,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimDownForwardU_joint12[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -30, 1, 1295, -13, -428, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -10, -108, 1233, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -415, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -356, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -246, 3, 1135, -267, -582, 78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 296, -207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4, 9, -198, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -226, -95, -457, -110,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -168, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 283, -13, -419, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 237, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -489, -51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -145, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -167, -10,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 238, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 532, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -556, -74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -526, 94,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -156, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 267, 76,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -438, 75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -18, 78,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 349, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 443, 94, 551, 19, 65, 83,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimDownForwardU_joint13[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -574, -454,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -908, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -564, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -566, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -469, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -430, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -367, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -197, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -211, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -793, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, -17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTMarioAnimDownForwardU_joint14[62] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -268, -1072, 714,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -283, 14, -406, 250, 267, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -210, -59, -69, 203, 190, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -402, -11, 0, 4, 0, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -402, 8, 0, -6, 0, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -228, 92, -139, -13, -144, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 426, 77, -119, 12, 128, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 625, 38, 0, 10, 0, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTMarioAnimDownForwardU_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTMarioAnimDownForwardU_joint17[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 381, -16, -90, 52, -397, -62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -653, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 133, -143, -20, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -4, -110, -137, -83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -114, 65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -221, -32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -382, 295,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 247, 115,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -22, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -267, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -232, 1, 168, -91,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 107, -30, -731, -55,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -300, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -195, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 68, -44, -780, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -51, 65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -622, 77,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -193, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -245, -13,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 13, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -114, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -531, 100,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 6, 59,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -251, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -235, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -135, -20, -230, 4, 45, 38,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTMarioAnimDownForwardU_joint19[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 294, 148,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1130, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 973, -279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 570, -483,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 185, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 399, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 879, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 818, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 563, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 491, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 428, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -27,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTMarioAnimDownForwardU_joint21[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1740, -50, -1400, 23, 2183, -55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1336, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1804, 72, 1902, -323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1647, 114, 1481, -327,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1733, -15, 1237, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1424, -62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1486, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1725, -11, 1261, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1775, 62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 1606, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1491, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -1593, -3,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1707, 69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1570, -91,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1594, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1468, -15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1665, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1822, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1820, 1, -1597, -3, 1452, -16,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTMarioAnimDownForwardU_joint22[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1646, -105, 948, 1, 532, -113,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1319, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1450, 177, 336, 221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1765, 276, 720, 376,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 2112, 27, 1699, 249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2110, -48, 1562, 69, 1907, 59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1225, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1381, -43, 1665, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1370, 20, 1480, -178,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1699, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1062, -4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1236, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1827, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1681, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1421, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1070, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1519, 4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1433, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1425, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1836, 5, 1521, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 1812, -3, 1641, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1808, -3, 1421, -4, 1644, 2,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimDownForwardU_joint24[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 570, 95,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 590, -499,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 226, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 463, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1121, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1100, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 473, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 444, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTMarioAnimDownForwardU_joint25[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -52, 28, -54, -39, -101, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -445, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), -544, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -39, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -333, -151,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1, 251,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -430, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 200, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 270, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 150, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 135, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 331, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 266, -74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 57, 17,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 263, 59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 349, -64,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -571, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -321, 28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 63, 2, 282, -65,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 88, 2, -72, -23,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -294, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -224, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 89, 0, -93, -21, -212, 11,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
