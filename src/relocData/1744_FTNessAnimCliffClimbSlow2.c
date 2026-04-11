/* AnimJoint data for relocData file 1744 (FTNessAnimCliffClimbSlow2) */
/* 1888 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimCliffClimbSlow2_joint1[14];
extern u16 dFTNessAnimCliffClimbSlow2_joint2[22];
extern u16 dFTNessAnimCliffClimbSlow2_joint3[20];
extern u16 dFTNessAnimCliffClimbSlow2_joint5[36];
extern u16 dFTNessAnimCliffClimbSlow2_joint6[136];
extern u16 dFTNessAnimCliffClimbSlow2_joint7[32];
extern u16 dFTNessAnimCliffClimbSlow2_joint8[14];
extern u16 dFTNessAnimCliffClimbSlow2_joint9[28];
extern u16 dFTNessAnimCliffClimbSlow2_joint11[36];
extern u16 dFTNessAnimCliffClimbSlow2_joint12[104];
extern u16 dFTNessAnimCliffClimbSlow2_joint13[28];
extern u16 dFTNessAnimCliffClimbSlow2_joint14[24];
extern u16 dFTNessAnimCliffClimbSlow2_joint16[30];
extern u16 dFTNessAnimCliffClimbSlow2_joint17[70];
extern u16 dFTNessAnimCliffClimbSlow2_joint19[28];
extern u16 dFTNessAnimCliffClimbSlow2_joint20[34];
extern u16 dFTNessAnimCliffClimbSlow2_joint22[42];
extern u16 dFTNessAnimCliffClimbSlow2_joint23[50];
extern u16 dFTNessAnimCliffClimbSlow2_joint25[40];
extern u16 dFTNessAnimCliffClimbSlow2_joint26[102];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTNessAnimCliffClimbSlow2_joints[] = {
	(u32)dFTNessAnimCliffClimbSlow2_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimCliffClimbSlow2_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimCliffClimbSlow2_joint3, /* [2] joint 3 */
	(u32)dFTNessAnimCliffClimbSlow2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTNessAnimCliffClimbSlow2_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimCliffClimbSlow2_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimCliffClimbSlow2_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimCliffClimbSlow2_joint9, /* [8] joint 9 */
	(u32)dFTNessAnimCliffClimbSlow2_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTNessAnimCliffClimbSlow2_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimCliffClimbSlow2_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimCliffClimbSlow2_joint14, /* [13] joint 14 */
	(u32)dFTNessAnimCliffClimbSlow2_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTNessAnimCliffClimbSlow2_joint17, /* [16] joint 17 */
	(u32)dFTNessAnimCliffClimbSlow2_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTNessAnimCliffClimbSlow2_joint20, /* [19] joint 20 */
	(u32)dFTNessAnimCliffClimbSlow2_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTNessAnimCliffClimbSlow2_joint23, /* [22] joint 23 */
	(u32)dFTNessAnimCliffClimbSlow2_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTNessAnimCliffClimbSlow2_joint26, /* [25] joint 26 */
	0xFFFF01CE, /* [26] END */
};

/* Joint 1 */
u16 dFTNessAnimCliffClimbSlow2_joint1[14] = {
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, -9,
	ftAnimSetValBlock(FT_ANIM_TRAY), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 30), 360,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 30), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimCliffClimbSlow2_joint2[22] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -536, 9, 0, 0, 0, -3, -300, 107, 0, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 0, 0, -16, 537, -28,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTNessAnimCliffClimbSlow2_joint3[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY), 0, 0, 0, -9, 0, 0, 600, -90,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 30), 28, -360, 8, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimCliffClimbSlow2_joint5[36] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 38), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 28,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 759, 36, 0, 4, 0, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 958, -25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 90, 38,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 20), 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimCliffClimbSlow2_joint6[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, -55, -653, -49, -313, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1127, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -79, -77, -252, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -178, 147, -150, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 215, 76, -543, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -25, -141, -302, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -91, -21, -235, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -111, -23, -211, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -586, -410, 274, 399,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1176, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1138, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1043, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1252, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1110, -395, 785, 395,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1533, -40, 1321, 95,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1301, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1342, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1562, -24, 1406, 77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1879, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1893, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1941, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2019, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1933, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2008, -20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1345, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2018, -10, -1347, -1, 2024, 4,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimCliffClimbSlow2_joint7[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -640, -42,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -962, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -929, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -408, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -470, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTNessAnimCliffClimbSlow2_joint8[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -804,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 70), 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 40,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTNessAnimCliffClimbSlow2_joint9[28] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAY), 288, 1,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 53), 300,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 23,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -3, 0, 6, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -10, 0, 364, 0, -32, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTNessAnimCliffClimbSlow2_joint11[36] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 54, -6, -18, 2,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 53), 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 23,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -368, -19, 309, 8, -239, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -631, 12, 290, -10, -260, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTNessAnimCliffClimbSlow2_joint12[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 144, -20, -141, 0, -690, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -815, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -132, -252, 78, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -448, -261, 305, 165,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 520, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -665, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -939, -85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -598, 63,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 530, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 456, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -623, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -401, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -538, 57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -106, -9,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 478, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 568, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -394, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -413, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -115, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -415, -2, 569, 0, -119, -3,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimCliffClimbSlow2_joint13[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -478, -94,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -458, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -413, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -559, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -559, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTNessAnimCliffClimbSlow2_joint14[24] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 402, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), 1127, -6, 0, 1, 0, 2,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 18,
	ftAnimBlock(0, 10),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 90, 54, 126,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimCliffClimbSlow2_joint16[30] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 74, 69, 30,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 60), 911, -937, 663,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 40,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 70), 75, 68, 30,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 40,
	ftAnimBlock(0, 20),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 893, -935, 681,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTNessAnimCliffClimbSlow2_joint17[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -173, 193, -593, -5, 151, -212,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -361, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 393, 24, -523, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 407, 7, -560, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -384, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -273, -26,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -357, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -280, 1,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -375, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -300, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -297, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -363, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -365, -1, -279, 0, -297, 2,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimCliffClimbSlow2_joint19[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 920, 25,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 355, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 309, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 391, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 395, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTNessAnimCliffClimbSlow2_joint20[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1200, -6, 1716, 0, -1588, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 1596, 0, -1582, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 1363, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1427, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 1614, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1614, 0, 1596, 0, -1582, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimCliffClimbSlow2_joint22[42] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 537, -48, -258, -48, 267, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 59, -35, -367, -6, 561, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 178, -2, -324, 15, 446, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 29, -12, -129, 16, 224, -22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -66, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTNessAnimCliffClimbSlow2_joint23[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 27, -5, 47, 2, 120, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 29), -128, 2, 135, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 154, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 137, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -70, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -113, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -317, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -319, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -216, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -127, 1, 136, 1, -210, 5,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimCliffClimbSlow2_joint25[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 7, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 59, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 356, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 500, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 511, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 459, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 421, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, -14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTNessAnimCliffClimbSlow2_joint26[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1898, -3, -1819, -2, 2134, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 1636, -68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -1787, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1902, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1932, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 2196, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2273, 65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 2031, -93,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1568, -64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1393, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1941, -82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1684, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1762, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1634, 2,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1400, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1404, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1684, 0, -1633, 1, 1406, 1,
	ftAnimEnd(),
	0x48E0, 0xFF82, 0xFFAE, 0xFFF4, 0x200E, 0xFFDF, 0x0002, 0x0019, 0x0000, 0xFFCE, 0x0001, 0x380F, 0x001E, 0x0038, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
