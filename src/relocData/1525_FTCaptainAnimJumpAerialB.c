/* AnimJoint data for relocData file 1525 (FTCaptainAnimJumpAerialB) */
/* 2928 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimJumpAerialB_joint1[30];
extern u16 dFTCaptainAnimJumpAerialB_joint2[38];
extern u16 dFTCaptainAnimJumpAerialB_joint3[40];
extern u16 dFTCaptainAnimJumpAerialB_joint5[58];
extern u16 dFTCaptainAnimJumpAerialB_joint6[144];
extern u16 dFTCaptainAnimJumpAerialB_joint7[64];
extern u16 dFTCaptainAnimJumpAerialB_joint8[26];
extern u16 dFTCaptainAnimJumpAerialB_joint9[8];
extern u16 dFTCaptainAnimJumpAerialB_joint11[48];
extern u16 dFTCaptainAnimJumpAerialB_joint12[168];
extern u16 dFTCaptainAnimJumpAerialB_joint13[76];
extern u16 dFTCaptainAnimJumpAerialB_joint14[26];
extern u16 dFTCaptainAnimJumpAerialB_joint15[10];
extern u16 dFTCaptainAnimJumpAerialB_joint17[8];
extern u16 dFTCaptainAnimJumpAerialB_joint18[122];
extern u16 dFTCaptainAnimJumpAerialB_joint20[46];
extern u16 dFTCaptainAnimJumpAerialB_joint22[120];
extern u16 dFTCaptainAnimJumpAerialB_joint23[144];
extern u16 dFTCaptainAnimJumpAerialB_joint25[78];
extern u16 dFTCaptainAnimJumpAerialB_joint26[158];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTCaptainAnimJumpAerialB_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimJumpAerialB_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimJumpAerialB_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimJumpAerialB_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTCaptainAnimJumpAerialB_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTCaptainAnimJumpAerialB_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimJumpAerialB_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimJumpAerialB_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTCaptainAnimJumpAerialB_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTCaptainAnimJumpAerialB_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTCaptainAnimJumpAerialB_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimJumpAerialB_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimJumpAerialB_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTCaptainAnimJumpAerialB_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTCaptainAnimJumpAerialB_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTCaptainAnimJumpAerialB_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTCaptainAnimJumpAerialB_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTCaptainAnimJumpAerialB_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTCaptainAnimJumpAerialB_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTCaptainAnimJumpAerialB_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTCaptainAnimJumpAerialB_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTCaptainAnimJumpAerialB_joint1[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY), 0, 1013,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, -55, -125,
	ftAnimSetValRateT(FT_ANIM_TRAY, 25), 1184, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -1087, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1251, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -2098, -98,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 10), -3216, 994,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTCaptainAnimJumpAerialB_joint2[38] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 209, 132,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -55, 0, 183, 0, 132, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -55, 0, 182, 0, 132, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), -41, 22, 261, 0, -9, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 0, 215, 124,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTCaptainAnimJumpAerialB_joint3[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 240, 95, 49,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, -76, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 0, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -102, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 0, 16, 589, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 9), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 240, 95, 49,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTCaptainAnimJumpAerialB_joint5[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 242, -182, -12,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -31, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 94, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -161, 0, 0, 0,
	ftAnimSetValT(FT_ANIM_ROTX, 19), 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -346, 0,
	ftAnimSetValT(FT_ANIM_ROTZ, 10), 368,
	ftAnimBlock(0, 6),
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 183, 0,
	ftAnimBlock(0, 3),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 186, 0,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -429, 0, 171, -51,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 242, -182, -12,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimJumpAerialB_joint6[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 318, -9, -175, -32, -771, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -171, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 102, -25, -1221, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 95, -28, -1287, 64,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 291, 254, -519, 162,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -77, 54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -69, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 597, 256, -417, 67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 894, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -312, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -66, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 35, 30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 905, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 648, -79,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -299, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -113, -4,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 58, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -316, 72,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 551, -122,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 60, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -128, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -590, -32,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 106, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 260, 25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -227, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -151, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 274, 14, -120, 30, -606, -16,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimJumpAerialB_joint7[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -971, -18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -894, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -751, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -671, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -825, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -928, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -851, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -858, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -828, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -710, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -704, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1149, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1135, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1119, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1109, 10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimJumpAerialB_joint8[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -605, -82, -524,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -90, 0, -43, 0, -267, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -280, 9, -131, -1, -231, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 191, -97, -323,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTCaptainAnimJumpAerialB_joint9[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -153, 113, -38,
	ftAnimBlock(0, 35),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimJumpAerialB_joint11[48] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -132, 0, 233, 0, -55, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 344, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 209, -8, 197, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -341, 0, 119, -38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -39, 1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 83, 0, -144, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimJumpAerialB_joint12[168] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1711, -61, -1826, -24, 2248, -174,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1783, -439,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1858, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1650, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1709, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1602, -83, 1194, -544,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 254, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1543, -96, -1787, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1862, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1380, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1380, -28, 337, 106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 561, 76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 763, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1787, 89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1356, 30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 621, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1013, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 766, 6, -1356, 0, 1017, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1474, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 961, 22, 1116, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 984, -7, 1111, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1117, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1026, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1142, 94, -1503, -103,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1375, 143, -1922, -149,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1353, 187,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1690, 270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1500, 121, -1980, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1771, 75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1884, 44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2033, 263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1768, -14, 2217, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1742, -26, -1858, 26, 2237, 19,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimJumpAerialB_joint13[76] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -410, -112,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -522, -236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -882, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -606, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -642, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -837, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -765, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -701, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -549, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -543, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -543, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -773, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -849, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1004, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -824, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -864, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -746, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -631, 115,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimJumpAerialB_joint14[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 122, 156, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 644, 22, 138, -8, 62, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 657, -32, -47, 1, 44, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -5, 167, 63,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTCaptainAnimJumpAerialB_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 39,
	ftAnimBlock(0, 35),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimJumpAerialB_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 255, 0, 0,
	ftAnimBlock(0, 35),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTCaptainAnimJumpAerialB_joint18[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -91, 28, 71, -9, -693, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 36, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -107, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -559, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -291, 264,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 228, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 289, -31,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 225, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -55, -9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -97, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -224, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -69, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -338, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -206, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 218, -8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 256, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 166, -43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -411, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -624, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 146, -12, -705, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 60, -8, -574, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 205, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 88, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 55, -4, 81, -6, -557, 16,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTCaptainAnimJumpAerialB_joint20[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 330, 166,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 806, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 685, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -76,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 4, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 252, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 272, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 253, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 237, -16,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimJumpAerialB_joint22[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1707, -28, -1741, 42, -1268, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1604, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1593, -17, -1310, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1619, -19, -1080, 178,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1568, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1049, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1086, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1182, 45,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1596, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1425, 57,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1136, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1352, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1620, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1711, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1504, 68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1602, -7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1355, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1180, 62,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1610, 89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1595, -17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1592, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1604, 12,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1121, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1614, 9, -1605, -10, -1095, 26,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTCaptainAnimJumpAerialB_joint23[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -176, 38, 172, -72, -891, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 74, 26, 40, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -686, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -511, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -445, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -162, 310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 174, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 76, -11, 66, 34, 49, -147,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 23, 52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 339, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -119, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -105, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -266, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 86, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 196, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 344, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 243, -30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -272, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -417, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -484, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -454, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 227, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 253, 17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 191, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -3, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -563, -101,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -814, -21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 269, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 283, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -13, -10, 289, 5, -825, -11,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTCaptainAnimJumpAerialB_joint25[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1129, -125,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1003, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 692, -318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 366, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 508, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 483, -217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 73, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 197, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 276, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 60, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 450, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 622, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 842, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 875, 32,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTCaptainAnimJumpAerialB_joint26[158] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 84, 13, 164, -2, 40, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 10, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -16, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 240, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 452, 189,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 670, -115,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -63, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 354, -14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 527, -102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 471, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 34, 79,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 282, 13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 315, -50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 232, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 267, -15, 443, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 352, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 118, -32,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 258, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 222, -92,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 338, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 6, -30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 83, -123, 91, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 63, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 289, -33,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -15, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -54, -8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 55, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 17, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 216, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2, -20, -57, -3, -154, -158,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
