/* AnimJoint data for relocData file 1752 (FTNessAnimCliffEscapeSlow2) */
/* 3696 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimCliffEscapeSlow2_joint1[22];
extern u16 dFTNessAnimCliffEscapeSlow2_joint2[196];
extern u16 dFTNessAnimCliffEscapeSlow2_joint3[52];
extern u16 dFTNessAnimCliffEscapeSlow2_joint5[58];
extern u16 dFTNessAnimCliffEscapeSlow2_joint6[204];
extern u16 dFTNessAnimCliffEscapeSlow2_joint7[84];
extern u16 dFTNessAnimCliffEscapeSlow2_joint8[28];
extern u16 dFTNessAnimCliffEscapeSlow2_joint9[54];
extern u16 dFTNessAnimCliffEscapeSlow2_joint11[116];
extern u16 dFTNessAnimCliffEscapeSlow2_joint12[158];
extern u16 dFTNessAnimCliffEscapeSlow2_joint13[54];
extern u16 dFTNessAnimCliffEscapeSlow2_joint14[48];
extern u16 dFTNessAnimCliffEscapeSlow2_joint16[12];
extern u16 dFTNessAnimCliffEscapeSlow2_joint17[148];
extern u16 dFTNessAnimCliffEscapeSlow2_joint19[62];
extern u16 dFTNessAnimCliffEscapeSlow2_joint20[118];
extern u16 dFTNessAnimCliffEscapeSlow2_joint22[66];
extern u16 dFTNessAnimCliffEscapeSlow2_joint23[122];
extern u16 dFTNessAnimCliffEscapeSlow2_joint25[40];
extern u16 dFTNessAnimCliffEscapeSlow2_joint26[152];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTNessAnimCliffEscapeSlow2_joints[] = {
	(u32)dFTNessAnimCliffEscapeSlow2_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimCliffEscapeSlow2_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimCliffEscapeSlow2_joint3, /* [2] joint 3 */
	(u32)dFTNessAnimCliffEscapeSlow2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTNessAnimCliffEscapeSlow2_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimCliffEscapeSlow2_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimCliffEscapeSlow2_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimCliffEscapeSlow2_joint9, /* [8] joint 9 */
	(u32)dFTNessAnimCliffEscapeSlow2_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTNessAnimCliffEscapeSlow2_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimCliffEscapeSlow2_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimCliffEscapeSlow2_joint14, /* [13] joint 14 */
	(u32)dFTNessAnimCliffEscapeSlow2_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTNessAnimCliffEscapeSlow2_joint17, /* [16] joint 17 */
	(u32)dFTNessAnimCliffEscapeSlow2_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTNessAnimCliffEscapeSlow2_joint20, /* [19] joint 20 */
	(u32)dFTNessAnimCliffEscapeSlow2_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTNessAnimCliffEscapeSlow2_joint23, /* [22] joint 23 */
	(u32)dFTNessAnimCliffEscapeSlow2_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTNessAnimCliffEscapeSlow2_joint26, /* [25] joint 26 */
	0xFFFF0387, /* [26] END */
};

/* Joint 1 */
u16 dFTNessAnimCliffEscapeSlow2_joint1[22] = {
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 2242,
	ftAnimSetValBlock(FT_ANIM_TRAY), 0,
	ftAnimSetValT(FT_ANIM_TRAY, 64), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 31), 3600, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 26), 3600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 7), 3600,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimCliffEscapeSlow2_joint2[196] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAX), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 57), -6, -12,
	_FT_ANIM_CMD(11, FT_ANIM_TRAZ, 1), 10,
	ftAnimSetValRateT(FT_ANIM_TRAX, 59), -5, -7,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX, 1), 10,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY), -536, 15, 0, 13, -300, 874,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 1), 0, 157, -225, 354, 78, 291, -85, 1836,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 1836,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 1), 315, 132, 172, 100, 583, 464, 159, 2040,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 2040,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 1), 265, -159, -25, -98, 1006, 198, 424, 820,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 820,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 1), -2, -134, -24, 15, 980, -113, 364, -518,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -518,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 1), -2, 0, 5, 6, 778, -44, 294, -4,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0, 0, 804, 1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 363, 475,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 475,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 437, 28,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 28,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 3), 0,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 0, 804,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 405, -117,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -117,
	ftAnimSetValRateT(FT_ANIM_TRAY, 14), 280, -30,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 53), 0,
	ftAnimBlock(0, 13),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -30,
	ftAnimSetValRateT(FT_ANIM_TRAY, 10), 513, 185,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 8, -29,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 10), 223,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 0, -20,
	ftAnimBlock(0, 9),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 185,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 514, -34,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 0, 0,
	ftAnimBlock(0, 4),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -34,
	ftAnimSetValRateT(FT_ANIM_TRAY, 20), 535, 8,
	ftAnimBlock(0, 8),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -12,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 17), -28, -1,
	ftAnimBlock(0, 2),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -7,
	ftAnimSetValRateT(FT_ANIM_TRAX, 15), -16, 0,
	ftAnimBlock(0, 10),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 8,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 537, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTNessAnimCliffEscapeSlow2_joint3[52] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_TRAY), 0, -624, 600, -266,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 35), -7224, -12,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 8), 0, -436,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 53), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), 0, -2, 0, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -95, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 10), -71,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 29), 28, 8,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 29), -6794,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimCliffEscapeSlow2_joint5[58] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 45), 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 10,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 759, -12, 0, -44,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 0, -69,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 11), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), -804,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 0, 39,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), 0, 28, 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 685, 258, 110,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 29), 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimCliffEscapeSlow2_joint6[204] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, -625, -653, -69, -313, 638,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -649, -603, -723, 28, 324, 606,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1230, -362, -597, 148, 898, 346,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -190, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1373, -115, 1016, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1461, -91, 1096, 122,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1526, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1337, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -158, 20, 1314, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -140, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1297, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1518, 36, 1302, -75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -924, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1146, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1065, -68,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 847, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -128, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -327, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -798, 142, -408, -69, 766, -105,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -340, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -131, 71, 122, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -69, 55, 44, -73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -272, -76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 168, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -320, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -311, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -360, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -317, 15,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 164, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 63, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -299, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -237, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -125, 89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 330, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 21, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -407, -5,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -302, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -262, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 352, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 414, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -410, -2, -261, 0, 415, 1,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimCliffEscapeSlow2_joint7[84] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -640, -111,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -589, 277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -207, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -327, -254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -509, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -993, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -912, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -182, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 91,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -158, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -232, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -474, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimCliffEscapeSlow2_joint8[28] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), -794, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 45), 0, 10, 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 10,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimBlock(0, 35),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTNessAnimCliffEscapeSlow2_joint9[54] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAY), 288,
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 45), 0, 0, 288, 1, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 10,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, -6, 0, -14,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 5, -235, 0, 0, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 27), 201, 0, -4, 10, 176, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), -10, 0, 364, 0, -32, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 29), 0, 300, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimCliffEscapeSlow2_joint11[116] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 54, -4, -17, 1,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 74), 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 10,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -368, -13, 309, -2, -239, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -388, -14, 104, -37, -77, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -454, 131, 82, -21, 21, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -124, 227, 60, -41, 108, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -65, 0, -22, -122, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -255, -140, 15, 18, -95, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -280, -13, 37, 0, -151, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -311, 77, 19, -2, -33, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 108, 87, 23, 13, -24, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 124, -1, 88, 14, -231, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 99, -59, 107, 4, -300, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -348, -2, 125, -2, -301, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 38), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTNessAnimCliffEscapeSlow2_joint12[158] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 144, 50, -141, 29, -690, -144,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -26, -155,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 91, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -999, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1028, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -1086, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -197, -165,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -561, -18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 101, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 266, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -540, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -515, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -519, 28, 285, 74, -1081, 55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -837, 76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 134, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 477, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 526, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 479, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -756, 89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 27, 45,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 235, 90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 392, -26,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 65, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 81, -40,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 483, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 576, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 363, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -412, -6,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 41, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -116, -5,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 572, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 570, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -415, -3, 569, 0, -119, -2,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimCliffEscapeSlow2_joint13[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -478, 185,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -293, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 16), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -284, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -400, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -819, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -818, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -560, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 1,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTNessAnimCliffEscapeSlow2_joint14[48] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 625, 1, 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 625, 8,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 5,
	ftAnimBlock(0, 10),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 908, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 625, -23, 0, 1, 0, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), 90, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 54, 126,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTNessAnimCliffEscapeSlow2_joint16[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	_FT_ANIM_CMD(11, 0, 1), 10,
	ftAnimBlock(0, 64),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTNessAnimCliffEscapeSlow2_joint17[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -173, 89, -593, 134, 151, -122,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -158, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -39, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 75, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 199, 62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -122, -44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -127, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -202, -19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -137, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -122, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -42, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -115, -24,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -223, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -368, 56,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -109, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 85, 37,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -309, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -222, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -147, -41, 105, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -363, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 45, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 34, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -306, 1,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -370, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -281, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -229, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -364, -2,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -304, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -298, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -365, -1, -279, 1, -297, 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimCliffEscapeSlow2_joint19[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 920, -78,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 505, -278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 147, -252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 83, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 290, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 455, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 481, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 490, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 467, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 400, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, -3,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTNessAnimCliffEscapeSlow2_joint20[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2016, -29, 1716, -15, 1628, 77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 2225, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1473, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -1745, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1688, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1567, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2238, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 2225, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1470, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 1499, 17,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1547, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1556, -79,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2199, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1452, -14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1637, -77, 1521, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1833, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), 1598, -1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1445, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), 1633, 1,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1831, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -1603, 2,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1597, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1596, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1602, 1, 1596, 0, 1634, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimCliffEscapeSlow2_joint22[66] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 136, -82, -7,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 416, -57, 27, 36, 473, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 244, -58, 222, 15, 135, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -169, -16, 182, -5, -206, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -179, 11, 96, -4, -160, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 115, 32, 78, -10, -137, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 146, -11, -5, -4, 126, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -104, -8, -7, 0, 49, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -66, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTNessAnimCliffEscapeSlow2_joint23[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 70, 23, 48, -39, 120, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 178, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), 163, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -179, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -70, 89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 149, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 293, 17,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 38, 11,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 310, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 260, -37,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 173, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 159, -58,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 49, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 189, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 95, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -123, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 225, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), -127, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 189, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), 136, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -136, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -211, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -127, 0, 136, 0, -210, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimCliffEscapeSlow2_joint25[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 396, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), 408, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTNessAnimCliffEscapeSlow2_joint26[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1894, -45, -1819, 0, 2134, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 2014, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), -1797, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1595, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1551, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1770, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1780, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 1698, -20,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2021, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 1761, -90,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1785, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1586, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1684, -6, 1666, -92,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1689, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 1370, 1,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1586, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -1633, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1686, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 1684, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1372, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 1406, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1684, 0, -1633, 0, 1406, 0,
	ftAnimEnd(),
	0x48E0, 0xFF82, 0xFFAE, 0xFFF4, 0x200E, 0x00E8, 0xFFF5, 0x001C, 0xFFF4, 0xFFC8, 0x001D, 0x200F, 0x0005, 0x0047, 0x0003, 0xFF65, 0xFFFB, 0x0184, 0x0010, 0x200F, 0x0005, 0x0109, 0x0005, 0xFFE7, 0x0006, 0x0071, 0xFFF2, 0x200F, 0x0014, 0x00C6, 0xFFFD, 0x0003, 0x0000, 0x0019, 0xFFFE, 0x380F, 0x0022, 0x0038, 0x0000, 0x0000, 0x0000, 0x0000,
};
