/* AnimJoint data for relocData file 1715 (FTNessAnimDownForwardU) */
/* 3280 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimDownForwardU_joint1[18];
extern u16 dFTNessAnimDownForwardU_joint2[58];
extern u16 dFTNessAnimDownForwardU_joint3[20];
extern u16 dFTNessAnimDownForwardU_joint5[28];
extern u16 dFTNessAnimDownForwardU_joint6[154];
extern u16 dFTNessAnimDownForwardU_joint7[80];
extern u16 dFTNessAnimDownForwardU_joint8[10];
extern u16 dFTNessAnimDownForwardU_joint9[44];
extern u16 dFTNessAnimDownForwardU_joint11[22];
extern u16 dFTNessAnimDownForwardU_joint12[138];
extern u16 dFTNessAnimDownForwardU_joint13[88];
extern u16 dFTNessAnimDownForwardU_joint14[70];
extern u16 dFTNessAnimDownForwardU_joint16[10];
extern u16 dFTNessAnimDownForwardU_joint17[118];
extern u16 dFTNessAnimDownForwardU_joint19[56];
extern u16 dFTNessAnimDownForwardU_joint20[108];
extern u16 dFTNessAnimDownForwardU_joint22[118];
extern u16 dFTNessAnimDownForwardU_joint23[138];
extern u16 dFTNessAnimDownForwardU_joint25[56];
extern u16 dFTNessAnimDownForwardU_joint26[122];
extern u16 dFTNessAnimDownForwardU_joint27[130];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTNessAnimDownForwardU_joints[] = {
	(u32)dFTNessAnimDownForwardU_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimDownForwardU_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimDownForwardU_joint3, /* [2] joint 3 */
	(u32)dFTNessAnimDownForwardU_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTNessAnimDownForwardU_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimDownForwardU_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimDownForwardU_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimDownForwardU_joint9, /* [8] joint 9 */
	(u32)dFTNessAnimDownForwardU_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTNessAnimDownForwardU_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimDownForwardU_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimDownForwardU_joint14, /* [13] joint 14 */
	(u32)dFTNessAnimDownForwardU_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTNessAnimDownForwardU_joint17, /* [16] joint 17 */
	(u32)dFTNessAnimDownForwardU_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTNessAnimDownForwardU_joint20, /* [19] joint 20 */
	(u32)dFTNessAnimDownForwardU_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTNessAnimDownForwardU_joint23, /* [22] joint 23 */
	(u32)dFTNessAnimDownForwardU_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTNessAnimDownForwardU_joint26, /* [25] joint 26 */
	(u32)dFTNessAnimDownForwardU_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTNessAnimDownForwardU_joint1[18] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 300, 1200,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 2800,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 20), 4200,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 11), 4200,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimDownForwardU_joint2[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, -513, 5, 245, -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 160, 5, 3, 322, 523, -8, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 20), 3216, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 10, 7, 900, -65, -8, -1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 14, 7, 240, -288, -9, -1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 24, -11, 360, 113, -11, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 3216, 0, -16, 537, -28,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTNessAnimDownForwardU_joint3[20] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 25), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 25), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 28, -360, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimDownForwardU_joint5[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 6, -457, 156,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 375, 21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 31), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), 536, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 11), 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimDownForwardU_joint6[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1475, -22, -556, -27, -2159, 59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -895, -267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1453, 253, -2100, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1983, -62, -2544, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1328, 17, -1712, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2018, 363, -1194, -323, -2324, -383,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2396, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2054, -8, -1541, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2001, -50, -1482, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1516, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 1718, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2341, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -2169, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2208, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2363, -87,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1522, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1301, -26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2478, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2344, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2305, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2211, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1714, -67, -2168, 140,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1312, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1750, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1603, 136,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1230, 49,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1255, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1196, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1327, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1345, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1198, 1, -1347, -1, -1192, 37,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimDownForwardU_joint7[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -461, -400,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -809, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -615, 400,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -186, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -388, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -391, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -270, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -198, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -302, -235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -470, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -569, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, 95,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTNessAnimDownForwardU_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTNessAnimDownForwardU_joint9[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY), -134, 0, 0, 288,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 36), 300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 0, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 402, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 402, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -187, -25, 0, 22, 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -10, 0, 364, -3, -32, 4,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimDownForwardU_joint11[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 54, -18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 36), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 25), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 11), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTNessAnimDownForwardU_joint12[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1578, 4, 312, 13, 1179, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1597, -115, 374, 71, 1249, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1351, 16, 468, 257, 1015, 104,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1281, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1629, -21, 1458, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1309, -165, 1130, -161,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1285, -15, 1136, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1290, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1396, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1267, -18, 1135, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 967, -64, 921, -62,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1417, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 904, -28, 1483, -44, 857, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 977, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 904, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1328, -114,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1314, 71,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 974, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1421, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 895, -4, 1392, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1144, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 1104, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1080, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1047, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1192, 47, 1038, -8, 1489, 68,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimDownForwardU_joint13[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -578, -458,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -916, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -564, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -536, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -256, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -152, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -138, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -314, -228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -457, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -197, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -342, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -401, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -541, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, -17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTNessAnimDownForwardU_joint14[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -268, -1072, 714,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -283, 46, -406, 259, 267, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -82, 18, -34, 283, 356, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -247, -12, 160, 13, 168, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -280, 18, 189, 8, 226, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 82, 15, 304, -64, 157, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 46, 18, -135, -70, -197, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 426, 4, -119, 17, 128, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 90, 54, 126,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimDownForwardU_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTNessAnimDownForwardU_joint17[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1989, 0, -1518, -60, -2006, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1728, -239, -1610, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2169, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2329, -81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1972, 287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1460, -131, -1291, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1492, -6, -1432, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1451, -39, -1498, -76, -1659, 305,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1530, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1710, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1360, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1457, -96,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -2410, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1479, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -1359, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1401, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -1324, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1682, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1395, 3,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2379, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1921, 26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1394, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 1250, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1242, -7, -1328, -3, -1906, 15,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimDownForwardU_joint19[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 294, 141,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1049, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1130, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 562, -483,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 208, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 896, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 836, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 517, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 463, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 416, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, -20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTNessAnimDownForwardU_joint20[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -132, -28, -207, 11, 575, -67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 45, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -120, 126, 244, -333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 56, 127, -159, -298,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -375, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 140, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 181, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 117, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 70, -54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 102, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -361, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 62, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 137, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 79, -2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 102, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 247, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 254, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 9, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 71, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 25, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 74, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 14, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, -4, 12, -2, 26, 1,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimDownForwardU_joint22[118] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -385, 9, -67,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -328, -7, -125, 40, 79, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -415, -30, 170, 189, -196, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -389, 180, 253, 26, -211, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -54, 79, 224, -55, -122, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 88, 27, -79, -23, 1, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 140, -14, 60, 72, 75, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 30, -74, 209, 45, 145, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -83, -85, 195, -13, 54, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -311, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 183, -7, 82, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 173, -2, -113, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -472, -22, 172, -15, -249, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -466, 26, 66, -3, -241, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -180, 39, 132, -6, 6, 24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -66, 0, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTNessAnimDownForwardU_joint23[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 38, -115, 659, -22, -1076, -105,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 354, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -63, 111, -1129, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 70, 80, -929, 193,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 3, -6, -74, 364,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 193, -143,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 53, -9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 23, 8, 299, 187,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -33, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 26, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 41, -10, -97, -111,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -565, 122,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 187, 43,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -52, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -60, 58,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -420, 145,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -59, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 222, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 146, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -98, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -92, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -211, 1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -108, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -121, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 140, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -127, -5, 136, -4, -210, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimDownForwardU_joint25[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 570, 106,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 620, -503,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 224, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 470, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1208, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1253, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 892, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 775, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 593, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 544, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 416, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTNessAnimDownForwardU_joint26[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1555, 7, -1553, 14, -1710, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1484, -22, -1858, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1643, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1451, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1590, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1624, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1448, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1509, -26, -1840, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1623, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1964, -1,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1505, 64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1677, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1643, -59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2105, -45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1949, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1692, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1694, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1769, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2126, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1813, 7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1751, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1686, -4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1661, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1640, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1684, -1, -1633, 7, -1810, 2,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTNessAnimDownForwardU_joint27[130] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -359, -397, -289,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -776, -68, -437, 0, 164, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -691, 53, -260, 83, 175, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -614, 180, -130, 52, 246, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -103, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -330, 283, 257, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -47, 65, 133, -95,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 186, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -213, -39, 14, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -262, 50, 0, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 101, -80, 87, 98, 62, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -56, -91, 31, -58, 153, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -171, -31, -87, -59, 27, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -181, 34, -208, 25, -7, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -34, 78, 14, -6, -114, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -232, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 55, 40, -128, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 45, 0, -100, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 56, 0, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
