/* AnimJoint data for relocData file 1723 (FTNessAnimShieldOff) */
/* 1952 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimShieldOff_joint2[50];
extern u16 dFTNessAnimShieldOff_joint3[34];
extern u16 dFTNessAnimShieldOff_joint5[42];
extern u16 dFTNessAnimShieldOff_joint6[102];
extern u16 dFTNessAnimShieldOff_joint7[22];
extern u16 dFTNessAnimShieldOff_joint8[48];
extern u16 dFTNessAnimShieldOff_joint9[24];
extern u16 dFTNessAnimShieldOff_joint11[48];
extern u16 dFTNessAnimShieldOff_joint12[92];
extern u16 dFTNessAnimShieldOff_joint13[46];
extern u16 dFTNessAnimShieldOff_joint14[26];
extern u16 dFTNessAnimShieldOff_joint16[14];
extern u16 dFTNessAnimShieldOff_joint17[60];
extern u16 dFTNessAnimShieldOff_joint19[32];
extern u16 dFTNessAnimShieldOff_joint20[50];
extern u16 dFTNessAnimShieldOff_joint22[36];
extern u16 dFTNessAnimShieldOff_joint23[72];
extern u16 dFTNessAnimShieldOff_joint25[42];
extern u16 dFTNessAnimShieldOff_joint26[66];
extern u16 dFTNessAnimShieldOff_joint27[14];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTNessAnimShieldOff_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTNessAnimShieldOff_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimShieldOff_joint3, /* [2] joint 3 */
	(u32)dFTNessAnimShieldOff_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTNessAnimShieldOff_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimShieldOff_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimShieldOff_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimShieldOff_joint9, /* [8] joint 9 */
	(u32)dFTNessAnimShieldOff_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTNessAnimShieldOff_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimShieldOff_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimShieldOff_joint14, /* [13] joint 14 */
	(u32)dFTNessAnimShieldOff_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTNessAnimShieldOff_joint17, /* [16] joint 17 */
	(u32)dFTNessAnimShieldOff_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTNessAnimShieldOff_joint20, /* [19] joint 20 */
	(u32)dFTNessAnimShieldOff_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTNessAnimShieldOff_joint23, /* [22] joint 23 */
	(u32)dFTNessAnimShieldOff_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTNessAnimShieldOff_joint26, /* [25] joint 26 */
	(u32)dFTNessAnimShieldOff_joint27, /* [26] joint 27 */
};

/* 4-byte alignment padding */
static u32 dFTNessAnimShieldOff_pad[1] = { 0 };

/* Joint 2 */
u16 dFTNessAnimShieldOff_joint2[50] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 466, 2, 7, 160,
	ftAnimSetValBlock(FT_ANIM_TRAX), -16,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 2), 468,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), 91, 383,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 2), -16,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 513, 90, 199, 216,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 2), -16,
	ftAnimSetValT(FT_ANIM_TRAX, 8), -16,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 513, -78, 199, -228,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 6), -28,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 464, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 537,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTNessAnimShieldOff_joint3[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 28, -360, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 28, 48, -360, 9, 8, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 221, 76, -323, 17, -113, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 335, -24, -290, -4, -168, 15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 28, -360, 8,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimShieldOff_joint5[42] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTY), 307, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 0, 0, 307, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 92, 49, 0, -73, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 199, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 13, -33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTNessAnimShieldOff_joint6[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 255, 20, 46, -13, -889, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -988, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 275, 12, 32, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 279, 110, 31, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 497, 276, -121, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 832, 503, -375, -561, -1232, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1504, 493, -1244, -494, -986, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1820, 87, -1364, -36, -1163, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1295, -426,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1317, 43, -1106, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1278, 42, -1054, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 826, -204, -1232, 49, -1026, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1094, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1180, -40, -1106, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1313, -83, -1171, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1198, 103, -1347, -33, -1192, -21,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimShieldOff_joint7[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -363, -236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, -110,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimShieldOff_joint8[48] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 564, 0, -338, 0, -477, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 564, 0, -338, 0, -477, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 22, -2, -443, 0, -164, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -98, 87,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 8), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -72, 46,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 6), 0,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTNessAnimShieldOff_joint9[24] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, 0, 364, -3, -32, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -10, 0, 364, -3, -32, 4,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimShieldOff_joint11[48] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTY), -358, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, -358, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -187, 0, -27, 2, -35, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -17, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -187, 0, -35, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 35, 31, -22, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimShieldOff_joint12[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -640, 24, 32, -17, -919, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -639, -27, -43, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -885, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -944, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -667, 95, -124, 257, -1005, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -448, 186, 471, 241, -573, 498,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -294, 83, 358, -41, -7, 299,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -250, 162,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 562, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 26, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 59, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 41, 186, 348, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 122, -152, 616, 28, 409, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -262, -269, 618, -23, 27, -264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -415, -153, 569, -48, -119, -146,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimShieldOff_joint13[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -634, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -390, -319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -647, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -623, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 64,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTNessAnimShieldOff_joint14[26] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -102, 0, 497, 0, -130, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -99, 0, 498, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), -132,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 90, 54, 126,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimShieldOff_joint16[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 75, 68, 30,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2314, -868, -656,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 893, -935, 681,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTNessAnimShieldOff_joint17[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -241, -8, -391, 7, -513, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -225, 34, -403, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -474, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -561, -83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -635, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -191, 25, -423, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -248, -76, -389, 49,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -513, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -330, -58, -324, 54, -369, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -365, -35, -279, 44, -297, 71,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimShieldOff_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 607, 50,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 721, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 674, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 767, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 768, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 504, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, -108,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTNessAnimShieldOff_joint20[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 8, -14, -2, -4, 19, -62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 38, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 26, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -224, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -216, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -95, 64,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 25, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 11, -10, 16, -7, -21, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, -6, 12, -4, 26, 47,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimShieldOff_joint22[36] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -173, 0, 94, 0, 154, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 78, -7, 99, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -203, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -376, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -331, 51,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -66, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTNessAnimShieldOff_joint23[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -179, 12, 159, 51, -298, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -81, 44, 229, -36, -35, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -42, 9, 182, -47, 60, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -67, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 130, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -33, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -81, -29, -80, -101,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -155, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -236, -109,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -250, 44,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -139, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -127, 12, 136, 6, -210, 40,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimShieldOff_joint25[42] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 644, -72,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 270, -232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -135,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 112, 222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 444, 236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 584, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 483, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, -76,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimShieldOff_joint26[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 131, 30, 30, -1, -361, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 51, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 132, -57, -248, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 65, -60, -80, 94,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -60, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -60, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -130, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 37, 33, -283, -102,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 78, -2, -245, 54,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 33, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 76, -2, 25, -7, -202, 43,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTNessAnimShieldOff_joint27[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 56, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
