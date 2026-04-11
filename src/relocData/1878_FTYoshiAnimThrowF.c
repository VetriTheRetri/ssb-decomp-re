/* AnimJoint data for relocData file 1878 (FTYoshiAnimThrowF) */
/* 4544 bytes: 112-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimThrowF_joint1[80];
extern u16 dFTYoshiAnimThrowF_joint2[118];
extern u16 dFTYoshiAnimThrowF_joint3[88];
extern u16 dFTYoshiAnimThrowF_joint4[158];
extern u16 dFTYoshiAnimThrowF_joint5[74];
extern u16 dFTYoshiAnimThrowF_joint7[60];
extern u16 dFTYoshiAnimThrowF_joint8[222];
extern u16 dFTYoshiAnimThrowF_joint11[92];
extern u16 dFTYoshiAnimThrowF_joint12[264];
extern u16 dFTYoshiAnimThrowF_joint13[128];
extern u16 dFTYoshiAnimThrowF_joint14[12];
extern u16 dFTYoshiAnimThrowF_joint15[32];
extern u16 dFTYoshiAnimThrowF_joint16[62];
extern u16 dFTYoshiAnimThrowF_joint18[62];
extern u16 dFTYoshiAnimThrowF_joint19[122];
extern u16 dFTYoshiAnimThrowF_joint21[72];
extern u16 dFTYoshiAnimThrowF_joint23[146];
extern u16 dFTYoshiAnimThrowF_joint24[168];
extern u16 dFTYoshiAnimThrowF_joint26[88];
extern u16 dFTYoshiAnimThrowF_joint27[168];

/* Joint pointer table (28 entries, 112 bytes) */
u32 dFTYoshiAnimThrowF_joints[] = {
	(u32)dFTYoshiAnimThrowF_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimThrowF_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimThrowF_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimThrowF_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimThrowF_joint5, /* [4] joint 5 */
	(u32)dFTYoshiAnimThrowF_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTYoshiAnimThrowF_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimThrowF_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTYoshiAnimThrowF_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimThrowF_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimThrowF_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimThrowF_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimThrowF_joint16, /* [15] joint 16 */
	(u32)dFTYoshiAnimThrowF_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTYoshiAnimThrowF_joint19, /* [18] joint 19 */
	(u32)dFTYoshiAnimThrowF_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTYoshiAnimThrowF_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTYoshiAnimThrowF_joint24, /* [23] joint 24 */
	(u32)dFTYoshiAnimThrowF_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	(u32)dFTYoshiAnimThrowF_joint27, /* [26] joint 27 */
	0xFFFF0465, /* [27] END */
};

/* Joint 1 */
u16 dFTYoshiAnimThrowF_joint1[80] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAZ), 180,
	ftAnimSetValRateBlock(FT_ANIM_TRAY), 525, 7,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 536, 23, 180, -640,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 2), 537,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -60, -960,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), -60,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 536, -49, -60, 32,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 14), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 11), 462, -42,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 3), 462,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 3), 210,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 2), 1095,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 14,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 1095, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 11), 0, -119,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 672, -260,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 672, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 672, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimThrowF_joint2[118] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 30, 9, 20, 8,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 22), 34, 1, 23, -26,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 21,
	ftAnimSetValBlock(FT_ANIM_ROTX), -7,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTY), 0, -2,
	ftAnimSetValT(FT_ANIM_ROTX, 2), -5,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 1,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 2), 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTZ, 1), 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -15, -3,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 1,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 3), -5, -6, -15, -6, 0, -43, 34, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), -55,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 23, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -49, -18, -58, 1,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 28), 30, -41, 20, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), -303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -209, -16, 0, 5, 0, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -209, 12, 0, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 21), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 14), 0, 12, -89, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, -89, -125, 20,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 30, 31, 20, -25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 0, -89,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimThrowF_joint3[88] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 172,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 607, -60, 0, 14, 0, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -196, -134,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 1,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 310, -251,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -196, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -196, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -385, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 536, 131, 0, -44, 0, 35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 536, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 536, -20, 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 290, -40,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -5, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 16, -15, 0, 1, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 210, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 16, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimThrowF_joint4[158] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -876, 110, 0, 2, 600, -71, 329, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 446, 148, 3, 2, 494, -95, 392, 55,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 18), 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 7), 3,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 494, -34, 392, -75,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 7), 446,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 434, -47, 260, -105,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 10), 3,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 7), -928,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -928, 8, 434, 391, 260, 232,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -893, 17, 3, 0, 630, 942, 376, 343,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 6144, 6144, 6144,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -893, 3, 670, 345,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 5), -893,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 3, 0, 630, -160, 376, 122,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 18), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 3, 630, 376,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 3, 630, 376,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -893, 138, 3, -3, 630, -33, 376, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 78, 107, 0, -2, 600, -26, 329, -41,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 78, 0, 600, 329,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 78, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 600, 329,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTYoshiAnimThrowF_joint5[74] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 48, 120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 619, -79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -337, -50,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 1,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 5939, 204, 10186, 676, 8556, 495,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 17), -337, 5939, 10186, 8556,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 62, -204, -676, -495,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 783, 560,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 783,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 783,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 783, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 0, -87,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimThrowF_joint7[60] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 276, -23, 0, 0, 56, 25, 0, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 0, -31,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 1,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 33), 0, 0, 175, 26, 72, 15,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 0, 175, 72,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 175, 72,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimThrowF_joint8[222] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 617, 436, -1012, -309, 1869, -313,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1461, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1053, 464, 1556, -383,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1545, 237, 1103, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1528, 14, -1510, -50, 1247, 55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1802, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1575, 48, 1214, -83,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1640, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 857, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1781, 123, 770, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1555, 149, 615, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1659, 3, -1482, 49, 693, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1710, 96, -1373, 117, 674, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1840, 53, -1222, 87, 576, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1816, -113, -1198, -143, 617, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1613, -96, -1510, -158, 867, 96,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1620, 0, -1526, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 811, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 816, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 911, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1624, -6, -1534, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1545, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1494, 51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1162, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1228, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1344, 61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1171, -120,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1540, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1759, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1439, 19, 1045, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1422, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1214, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 987, -312,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 335, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1369, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1448, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1955, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1614, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 536, 272,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1154, 188,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1521, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1498, -23, -1476, -27, 1256, 101,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTYoshiAnimThrowF_joint11[92] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -894, -51,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -946, 447,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 468,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -527, -249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -498, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -552, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -584, 276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 287,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -602, -280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -800, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -771, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -719, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -291, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -499, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -788, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, 24,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimThrowF_joint12[264] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2175, -566, 298, 77, -2263, -496,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2742, -543, 375, -7, -2760, -657,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3262, -211, 282, -44, -3578, -310,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 61, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3165, 65, -3381, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3131, 23, -3335, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -3025, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -3466, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -86, -126, -3402, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2959, 461, -191, -4, -3480, -390,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2101, 319, -95, -22, -4184, -306,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -236, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2320, -118, -4093, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2320, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4131, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -45, 26, -4223, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -194, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2769, -332, -4117, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -3077, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4150, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 132, 187, -3709, 148,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 167, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3853, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3808, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3084, 3, 161, -61, -3807, 130,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -3318, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 43, -56, -3548, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 47, 0, -3570, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -25, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3512, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -3518, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3535, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -3227, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3205, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3453, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -42, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -164, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3352, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -3364, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3645, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3480, -96,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -126, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -383, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3292, 160, -3750, -359,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -4529, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3044, 296,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2700, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2981, -270, -356, 66, -4269, 323,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -146, 73, -3562, 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3240, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3342, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3362, -20, -103, 43, -3436, 126,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimThrowF_joint13[128] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -939, 47,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -892, 469,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 446,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -466, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -273, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -439,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -888, -434,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -868, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -931, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -983, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -469, 491,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 234,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -468, -388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -777, -263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1095, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1015, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -756, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -591, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -945, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1022, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, 20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimThrowF_joint14[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 172, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 21,
	ftAnimBlock(0, 39),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimThrowF_joint15[32] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 156, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -893,
	ftAnimSetValRate(FT_ANIM_ROTX), -617, -125,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -1161, 2, -893, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 28), -536, 20, -893, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -536, -893,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -536, -893,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTYoshiAnimThrowF_joint16[62] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 260, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -312, -45, 0, 20, 0, -20,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -453, 19, 324, -20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), -321,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 26, -332, -19, 0, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 0, -10, 0, 18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -190, -17,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 11), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 9), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -190, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimThrowF_joint18[62] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 303, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -441, -63, 0, 13, 0, -19,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -511, 27, 174, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), -245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 30, -419, -10, 0, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 0, -8, 0, 23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -153, -13,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 11), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 9), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -153, 34,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTYoshiAnimThrowF_joint19[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1606, -2, 1605, -2, -1517, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1715, 123,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1654, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1558, -313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2145, -264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2088, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2036, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1836, 36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1856, 124,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1597, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1704, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1608, 1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1794, 45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1677, -7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1603, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 1601, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1690, 208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1607, -1, -1260, 208,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 1603, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1272, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1426, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1439, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1883, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1914, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1693, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1602, 1, 1603, 0, -1612, 81,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTYoshiAnimThrowF_joint21[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 468, 33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 501, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 837, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 835, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 922, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 814, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 786, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 790, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 800, -391,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -397,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 752, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 830, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 411, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 262, -149,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTYoshiAnimThrowF_joint23[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1593, 2, -134, 7, -557, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1593, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -215, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -551, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -300, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -406, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1636, -20, -458, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1452, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -537, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -317, -85,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -68, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1506, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1553, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1586, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1584, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -515, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -507, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -53, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), -83, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -513, 253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 407,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 301, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 298, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 287, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -78, -58,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1585, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1615, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -131, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -499, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -426, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -331, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1614, 0, -83, 0, -263, 67,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTYoshiAnimThrowF_joint24[168] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1594, 7, 1577, 0, -2261, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1561, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1577, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2273, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2065, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2235, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1532, 78, -2253, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1945, 112,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1291, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1623, 103,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1867, 58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1910, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1815, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1901, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1663, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1342, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1558, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1928, -84,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1678, 46,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1634, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1600, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1597, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1594, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1654, 215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1248, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1264, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1479, -29,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1596, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1608, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1601, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1608, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1511, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1922, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2032, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1832, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1608, 0, 1608, 0, -1762, 69,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimThrowF_joint26[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 888, -31,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 857, -424,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 40, -253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 350, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 436, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 6, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 308, 265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 803, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 778, -398,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -389,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, 308,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 623, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 838, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 688, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 500, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -121,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTYoshiAnimThrowF_joint27[168] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -50, 0, -1731, 10, 1386, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -8, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1635, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1427, 316,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2018, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1881, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 8, -25, 1817, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -188, 33, 1958, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1620, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), -1516, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -77, 47, 1935, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -133, 18, 1459, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -99, 33, 1351, -104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -14, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1090, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1081, 255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1600, 414,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1909, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1911, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1899, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1572, -50,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -6, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1525, -96,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1191, 41,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1517, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1519, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1250, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1327, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, -1519, 0, 1379, 52,
	ftAnimEnd(),
	0x20E0, 0x0000, 0x0000, 0x003C, 0x016C, 0x041F, 0xFE21, 0x38E1, 0x0013, 0x0000, 0x04B0, 0x0690, 0x10E1, 0x0014, 0x0000, 0x04B0, 0x0690, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
