/* AnimJoint data for relocData file 1883 (FTYoshiAnimThrownDK) */
/* 2016 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimThrownDK_joint2[30];
extern u16 dFTYoshiAnimThrownDK_joint3[26];
extern u16 dFTYoshiAnimThrownDK_joint4[18];
extern u16 dFTYoshiAnimThrownDK_joint5[34];
extern u16 dFTYoshiAnimThrownDK_joint7[18];
extern u16 dFTYoshiAnimThrownDK_joint8[166];
extern u16 dFTYoshiAnimThrownDK_joint9[68];
extern u16 dFTYoshiAnimThrownDK_joint11[8];
extern u16 dFTYoshiAnimThrownDK_joint12[140];
extern u16 dFTYoshiAnimThrownDK_joint13[64];
extern u16 dFTYoshiAnimThrownDK_joint14[12];
extern u16 dFTYoshiAnimThrownDK_joint15[12];
extern u16 dFTYoshiAnimThrownDK_joint16[20];
extern u16 dFTYoshiAnimThrownDK_joint18[20];
extern u16 dFTYoshiAnimThrownDK_joint19[68];
extern u16 dFTYoshiAnimThrownDK_joint21[56];
extern u16 dFTYoshiAnimThrownDK_joint23[26];
extern u16 dFTYoshiAnimThrownDK_joint24[72];
extern u16 dFTYoshiAnimThrownDK_joint26[60];
extern u16 dFTYoshiAnimThrownDK_joint27[36];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTYoshiAnimThrownDK_joints[] = {
	NULL, /* [0] NULL */
	(AObjEvent32 *)dFTYoshiAnimThrownDK_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTYoshiAnimThrownDK_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTYoshiAnimThrownDK_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTYoshiAnimThrownDK_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTYoshiAnimThrownDK_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTYoshiAnimThrownDK_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTYoshiAnimThrownDK_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTYoshiAnimThrownDK_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTYoshiAnimThrownDK_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTYoshiAnimThrownDK_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTYoshiAnimThrownDK_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTYoshiAnimThrownDK_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTYoshiAnimThrownDK_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTYoshiAnimThrownDK_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTYoshiAnimThrownDK_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTYoshiAnimThrownDK_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTYoshiAnimThrownDK_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTYoshiAnimThrownDK_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTYoshiAnimThrownDK_joint26, /* [24] joint 26 */
	NULL, /* [25] NULL */
	(AObjEvent32 *)dFTYoshiAnimThrownDK_joint27, /* [26] joint 27 */
};

/* Joint 2 */
u16 dFTYoshiAnimThrownDK_joint2[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1608, -61, 1608, 61, 0, 0, 371, 84, 0, 41,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), -1608, 1608, 0, 371, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), -1608, 1608, 0, 371, 0,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimThrownDK_joint3[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -44, 0, 5, 184, 0, 73, -152,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 36,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), -893, 0, 184, 73,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), -893, 0, 184, 73,
	ftAnimLoop(0x6800, -50),
};

/* Joint 4 */
u16 dFTYoshiAnimThrownDK_joint4[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 172,
	ftAnimSetValRate(FT_ANIM_ROTX), 804, 46,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), 538,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), 804,
	ftAnimLoop(0x6800, -34),
};

/* Joint 5 */
u16 dFTYoshiAnimThrownDK_joint5[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 536, -7, 0, 10, 0, 0, 515, -24, 461, 37,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 15), 13,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 0, 515, 461,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 13), 275,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 11), 0,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 9), 536,
	ftAnimLoop(0x6800, -66),
};

/* Joint 7 */
u16 dFTYoshiAnimThrownDK_joint7[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 48, 120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 446,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), 446,
	ftAnimLoop(0x6800, -32),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimThrownDK_joint8[166] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 26, 77, -321, -89, 2459, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 104, 337, -411, -132, 2362, -332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 700, 512, -587, -41, 1795, -470,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1129, 19, -494, 2, 1421, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 739, -500, -581, 35, 1759, 455,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -291, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 128, -353, 2333, 343,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 31, -53, 2446, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -63, -71, 2661, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -244, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -193, 10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -143, -75, 2843, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -214, -67, -188, -71, 2961, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -278, -438, -336, -339, 2904, 316,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1091, -100, -867, -388, 3595, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -479, 125, -1113, -98, 3030, -127,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1458, -368, 3913, 356,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1065, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1364, -35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1576, -68, 4054, 86,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 4133, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1604, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1388, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1321, 42,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4106, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1581, 22, -1286, 34, 4068, -38,
	ftAnimLoop(0x6800, -328),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTYoshiAnimThrownDK_joint9[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -674, -48,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -703, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -614, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -717, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -606, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -401, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -542, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -865, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1048, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -614, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -636, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -606, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -505, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -518, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -639, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -674, -35,
	ftAnimLoop(0x6800, -134),
};

/* Joint 11 */
u16 dFTYoshiAnimThrownDK_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimLoop(0x6800, -14),
};

/* Joint 12 */
u16 dFTYoshiAnimThrownDK_joint12[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1632, 17, 1288, 57, 851, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1190, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1638, -67, 838, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1754, -361, 697, -352,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2727, 135, -180, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1065, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1111, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2090, 698, 870, 81, 408, 737,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1329, 348, 1274, 275, 1294, 471,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1392, -67, 1420, 70, 1352, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1628, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1394, -5, 897, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1387, -15, 848, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 838, -61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1187, -145,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1638, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1733, -346, 725, -337,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -180, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2331, -497, 1027, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2727, 17, 1111, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2296, 515, 1015, 41, 195, 476,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1696, 331, 1194, 136, 773, 328,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1632, 63, 1288, 94, 851, 78,
	ftAnimLoop(0x6800, -276),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimThrownDK_joint13[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -674, 102,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -423, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -505, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -695, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -636, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -614, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -905, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1048, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -865, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -394, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -489, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -692, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -614, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -742, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -674, 67,
	ftAnimLoop(0x6800, -126),
};

/* Joint 14 */
u16 dFTYoshiAnimThrownDK_joint14[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 172, 0, 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimLoop(0x6800, -22),
};

/* Joint 15 */
u16 dFTYoshiAnimThrownDK_joint15[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 156, 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -536, -893, 0,
	ftAnimBlock(0, 24),
	ftAnimLoop(0x6800, -22),
};

/* Joint 16 */
u16 dFTYoshiAnimThrownDK_joint16[20] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -268, 25, 0, -7, 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 268, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -268, 0, 0,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimThrownDK_joint18[20] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -357, 29, 0, -18, 0, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 357, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -357, 0, 0,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTYoshiAnimThrownDK_joint19[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0, 0, 197, -124,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 23), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -126, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 40, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 586, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 716, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 197, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 36, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -127, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 37, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 587, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 716, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 310, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0, 0, 197, -113,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTYoshiAnimThrownDK_joint21[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 776, 119,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1038, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 907, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 458, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 310, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 648, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 776, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1038, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 908, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 457, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 310, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 710, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 776, 65,
	ftAnimLoop(0x6800, -110),
};

/* Joint 23 */
u16 dFTYoshiAnimThrownDK_joint23[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1632, 0, -83, 0, -263, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 1624, 6, -83, 0, -263, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1632, 7, -83, 0, -263, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTYoshiAnimThrownDK_joint24[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0, 0, 197, 142,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 23), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 567, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 716, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 197, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 40, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -128, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 36, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 588, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 716, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 197, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 37, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -96, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 97, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0, 0, 197, 99,
	ftAnimLoop(0x6800, -140),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimThrownDK_joint26[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 776, -86,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 486, -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 310, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 652, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 776, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1038, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 909, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 455, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 310, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 650, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 776, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1026, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 873, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 776, -97,
	ftAnimLoop(0x6800, -118),
};

/* Joint 27 */
u16 dFTYoshiAnimThrownDK_joint27[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1625, -9, -89, 0, -228, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), -89, 0, -228, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), 1613, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1616, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 1625, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1625, 0, -89, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -228,
	ftAnimLoop(0x6800, -70),
};
