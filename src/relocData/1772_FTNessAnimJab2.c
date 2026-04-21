/* AnimJoint data for relocData file 1772 (FTNessAnimJab2) */
/* 2704 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimJab2_joint1[40];
extern u16 dFTNessAnimJab2_joint2[14];
extern u16 dFTNessAnimJab2_joint4[48];
extern u16 dFTNessAnimJab2_joint5[138];
extern u16 dFTNessAnimJab2_joint6[54];
extern u16 dFTNessAnimJab2_joint7[48];
extern u16 dFTNessAnimJab2_joint8[48];
extern u16 dFTNessAnimJab2_joint10[8];
extern u16 dFTNessAnimJab2_joint11[152];
extern u16 dFTNessAnimJab2_joint12[120];
extern u16 dFTNessAnimJab2_joint13[82];
extern u16 dFTNessAnimJab2_joint15[12];
extern u16 dFTNessAnimJab2_joint16[84];
extern u16 dFTNessAnimJab2_joint18[36];
extern u16 dFTNessAnimJab2_joint19[88];
extern u16 dFTNessAnimJab2_joint21[50];
extern u16 dFTNessAnimJab2_joint22[102];
extern u16 dFTNessAnimJab2_joint24[46];
extern u16 dFTNessAnimJab2_joint25[84];
extern u16 dFTNessAnimJab2_joint26[46];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimJab2_joints[] = {
	(u32)dFTNessAnimJab2_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimJab2_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimJab2_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimJab2_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimJab2_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimJab2_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimJab2_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimJab2_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimJab2_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimJab2_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimJab2_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimJab2_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimJab2_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimJab2_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimJab2_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimJab2_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimJab2_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimJab2_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimJab2_joint25, /* [24] joint 25 */
	(u32)dFTNessAnimJab2_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimJab2_joint1[40] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX), 0,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 537, 0, 22, -328,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 0, -6, 464, 34,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -96, 1262,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 496, -226,
	ftAnimSetValRateT(FT_ANIM_TRAY, 17), 537, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 17), -16, -28,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimJab2_joint2[14] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 30, 0, -361, 0, 4, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 28, -360, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTNessAnimJab2_joint4[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 82, -39, -25, -2, -129, 64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 335, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 73, 397, -136, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 840, 257, 358, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1362, -32, 408, 6, 945, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 449, -97, 438, -6, 186, -67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 0, -37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimJab2_joint5[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -201, -438, -197, -215, 286, 97,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 349, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -639, -144, -413, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -489, 195, -341, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -13, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -424, 11, 116, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -319, 66, -90, -121,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -321, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 23, 44, -127, -68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 127, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -228, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -286, 38, -254, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -223, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -285, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 76, -37, -147, 97,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 60, 33, -170, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -238, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -355, -12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 102, 21, -249, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 16, -128, -126, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -364, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -382, 31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -153, -171, 99, 221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -326, -128, -321, 60, 316, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -410, -84, -261, 60, 415, 99,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimJab2_joint6[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1110, 556,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -553, 555,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 272,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -324, -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -493, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -474, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -395, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -460, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, -12,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimJab2_joint7[48] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), 143, 0, 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 16,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 6062, 6062, 6062,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 17), 4096, 4096, 4096,
	_FT_ANIM_CMD(11, FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 14,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -625, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), 0, 0, 0, 143, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 17), 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimJab2_joint8[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, 30, 358, 5, 35, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 477, 26, 363, -11, 163, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 41, -248, 199, -245, -85, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -19, 0, -127, 66, 50, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 16, 0, 91, 28, 32, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -10, 0, 364, 0, -32, -5,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNessAnimJab2_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTNessAnimJab2_joint11[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 143, 176, 631, 642, 367, -577,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 319, 72, 1273, 311, -210, -301,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 288, -27, 1254, -27, -235, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 264, -3, 1218, 11, -252, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 280, -86, 1277, -57, -238, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 91, 59, 1103, -154, -457, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 399, 241, 969, -64, -24, 327,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1000, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 575, -22, 197, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 354, -231, -48, -284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 113, -151, 1062, 45, -370, -212,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 974, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 51, -21, -472, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 38, -78, -393, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -86, -129, -438, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -97, 366, -244, 452,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 919, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 512, 405, 985, 167, 437, 482,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 827, 200, 925, 318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1255, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1122, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1116, 182, 1021, -42, 1357, 281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1192, 76, 1038, 17, 1489, 131,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimJab2_joint12[120] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTZ), -549, 549,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 12, 4096, 1228, 4096, 1228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), -564, -214, 20480, 614, 5939, 558, 5939, 558,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 5324, -625, 5213, -526, 5213, -526,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -428, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -696, -244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -918, -163,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1108, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1099, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -961, 137,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -823, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -787, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -743, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -583, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -347, 287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -431, -304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -618, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 59,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimJab2_joint13[82] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 90, -45, 54, 2, 126, 7,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -150, -30, 37, 9, 122, -37,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -32, 81, -7, 15, -24,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 1773, 8192, 7372,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -312, -64, 0, 0, 0, 78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -384, 9, 486, 71,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 11), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -238, 43, 459, -52,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 90, 54, 126,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTNessAnimJab2_joint15[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	_FT_ANIM_CMD(11, 0, 1), 16,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimJab2_joint16[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -372, 38, -272, -42, -296, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -379, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -334, 63, -330, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -245, 24, -421, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -286, -33, -350, 25, -322, 75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -300, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -312, -21, -271, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -336, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -266, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -272, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -299, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -343, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -361, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -293, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -285, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -365, -4, -279, 5, -297, 2,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimJab2_joint18[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 460, -195,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 264, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 684, 261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 772, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 751, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 446, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 413, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, -17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimJab2_joint19[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 19, 86, 19, 404, -44, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 105, 6, 423, 196, 169, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 32, -58, 413, -29, -184, -271,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 322, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -13, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -412, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -412, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -221, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 328, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 401, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -7, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 27, -18,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 356, -63, -176, 51,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 33, -39, 12, 22,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 11, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, -5, 12, -21, 26, 13,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimJab2_joint21[50] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 21, -7, 7, 0, 42, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -98, -128, 7, 0, 41, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -235, 18, 6, 0, 39, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -42, 8, 5, 0, 34, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -111, -1, 0, 0, 2, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -66, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTNessAnimJab2_joint22[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, -37, 198, -120, -107, -249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -145, 105, 77, 72, -356, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 104, 199, 343, 151, 270, 395,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 417, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 254, 66, 379, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 237, -20, 376, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 33, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 187, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 393, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 185, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 7, -49, 146, -91,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -100, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -83, -69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -208, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -117, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -128, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 165, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 139, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -127, 0, 136, -3, -210, -1,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimJab2_joint24[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 268, 276,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 545, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -272,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 195, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 298, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 409, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, -2,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimJab2_joint25[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 117, -65, 27, -5, -172, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 52, -1, -185, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 52, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 226, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 231, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 230, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 112, -16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 50, -2, -189, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 25, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -150, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -137, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -202, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -224, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -206, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 98, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 79, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 76, -2, 25, 0, -202, 4,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimJab2_joint26[46] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 70, -3, 6, 0, -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4, 57, 6, 24, -7, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 185, 108, 56, 15, -136, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 328, -7, 53, -3, -130, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 56, 0, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
