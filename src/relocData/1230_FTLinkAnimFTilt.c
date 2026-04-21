/* AnimJoint data for relocData file 1230 (FTLinkAnimFTilt) */
/* 2816 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimFTilt_joint1[48];
extern u16 dFTLinkAnimFTilt_joint2[70];
extern u16 dFTLinkAnimFTilt_joint4[70];
extern u16 dFTLinkAnimFTilt_joint5[176];
extern u16 dFTLinkAnimFTilt_joint6[64];
extern u16 dFTLinkAnimFTilt_joint9[58];
extern u16 dFTLinkAnimFTilt_joint10[100];
extern u16 dFTLinkAnimFTilt_joint11[48];
extern u16 dFTLinkAnimFTilt_joint12[8];
extern u16 dFTLinkAnimFTilt_joint13[8];
extern u16 dFTLinkAnimFTilt_joint16[8];
extern u16 dFTLinkAnimFTilt_joint17[50];
extern u16 dFTLinkAnimFTilt_joint18[50];
extern u16 dFTLinkAnimFTilt_joint20[42];
extern u16 dFTLinkAnimFTilt_joint21[124];
extern u16 dFTLinkAnimFTilt_joint23[44];
extern u16 dFTLinkAnimFTilt_joint25[104];
extern u16 dFTLinkAnimFTilt_joint26[100];
extern u16 dFTLinkAnimFTilt_joint28[40];
extern u16 dFTLinkAnimFTilt_joint29[138];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimFTilt_joints[] = {
	(u32)dFTLinkAnimFTilt_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimFTilt_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimFTilt_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimFTilt_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimFTilt_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimFTilt_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimFTilt_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimFTilt_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimFTilt_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimFTilt_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimFTilt_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimFTilt_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimFTilt_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimFTilt_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimFTilt_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimFTilt_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimFTilt_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimFTilt_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimFTilt_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	(u32)dFTLinkAnimFTilt_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimFTilt_joint1[48] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 901, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 5, 860, -83, -237, -182,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 10, 5, 755, -87, -319, 150,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 9, 0, 708, -34, 26, 251,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 9, -3, 708, 0, 26, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 70, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 0, 901, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimFTilt_joint2[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, 276, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -205, -7, 539, 18, -99, -7,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -205, 0, 539, 0, -99, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3, -8, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -3, 77, -58, -89, 33, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 104, 11, -138, -8, -79, -12,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 104, 0, -138, 0, -79, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -9, 18, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -107, 276, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimFTilt_joint4[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 259, 166, 56,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 176, -5, 390, 16, 29, -1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 176, 0, 390, 0, 29, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2, -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 346, 85, -83, -157, 126, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 520, 19, -240, -17, -166, -32,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 520, 0, -240, 0, -166, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -11, 18, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 259, 166, 56,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimFTilt_joint5[176] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1888, -49, -1281, 119, -1694, 55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -718, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1839, -180, -1638, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1528, -320, -1433, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1197, -416, -1348, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 694, -254, -1017, 165,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1009, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 687, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 659, -48, -721, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -455, 127,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -211, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -979, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -831, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -329, 109, -894, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -165, 125, -983, -41,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -220, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -27, -7, 16, 129, -1030, 205,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -74, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -234, -202, -572, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -432, -63, -594, -45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -501, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -360, 56, -303, -137,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -129, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -350, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -341, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -355, -61,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -413, 79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -93, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 45, 157,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 282, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -412, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -330, 7,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 280, -1, -88, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 280, 0, -326, 3, -86, 1,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimFTilt_joint6[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -500, -141,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -752, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -320, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -330, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -601, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -619, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -327, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -83, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -417, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -463, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -503, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimFTilt_joint9[58] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 190, 2, 57, 0, 47, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 39, -16, 7, -39, 301, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 141, 3, -61, -60, 349, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 46, -20, -113, -9, 361, 8,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 46, 0, -113, 0, 361, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1, 5, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 4, 7, 76,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimFTilt_joint10[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 416, 68, 123, -45, -50, 134,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -26, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 571, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 685, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 903, 152,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 989, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 68, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 69, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 571, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), 177, -34,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 989, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 639, -33,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 69, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 16, 14,
	ftAnimBlock(0, 16),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 606, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 417, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 30, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 122, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 143, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -47, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 416, -1, 123, 1, -50, -3,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimFTilt_joint11[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -587, -163,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -886, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -696, 249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -388, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -388, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -388, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -388, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -822, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -849, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -592, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimFTilt_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimFTilt_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimFTilt_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimFTilt_joint17[50] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 35, 2, -274, -7, 71, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 35, 0, -274, 27, 71, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 30, 0, 114, 35, -84, -14,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 30, 0, 114, 0, -84, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1, -12, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, -163, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimFTilt_joint18[50] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 29, 2, -312, -8, -24, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 29, -20, -312, 45, -24, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -252, -25, 318, 57, -203, -16,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -252, 0, 318, 0, -203, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 11, -23, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, -199, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimFTilt_joint20[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -18, 11, -105, -3, 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 226, -4, -76, 4, 3, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -63, -33, -53, 4, 2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -169, 4, -21, 3, 1, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimFTilt_joint21[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -242, 34, -244, -22, 108, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -244, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -322, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -8, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -14, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 23, 45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -274, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -364, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 77, -10, -364, 129,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 150, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3, -193, -333, 69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -116, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -309, -171,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -341, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 236, 90,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 197, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -69, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -184, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -336, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -232, -8,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 177, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 106, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -201, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -246, 3,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -239, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -2, -244, 2, 108, 2,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimFTilt_joint23[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 249, 14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 728, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 681, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 332, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 127, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 256, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 304, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 273, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 256, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimFTilt_joint25[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 329, -5, -161, 14, -34, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 405, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -218, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), 84, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 94, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 65, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 369, -129, 28, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 146, -107, -244, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 153, 0, -374, -101, -170, 66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 94, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -506, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 25, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -37, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 106, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 191, 39,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -505, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -166, 9,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 231, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 321, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, 7, -161, 5, -34, 2,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimFTilt_joint26[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, -3, 269, -2, -125, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), -155, -36, 296, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 3, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -117, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -189, -54, 279, -84, -150, -139,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -149, 90, -71, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -630, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -708, -46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -719, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -60, 31, -78, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 108, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -106, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -89, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 268, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -722, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -132, 14,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 154, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), 270, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 2, 269, 0, -125, 7,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimFTilt_joint28[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 424, -14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 155, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 130, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 602, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 719, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 772, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 772, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 431, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimFTilt_joint29[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2036, -1, -1534, -37, 1538, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1853, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1891, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1922, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1834, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1710, 31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1870, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1949, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1931, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1955, -29,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1678, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1610, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1566, -123, -1957, 54, 1922, -92,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1654, 116,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1486, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1856, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1941, -61,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1996, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1607, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1603, 24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1485, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 1536, 3,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2023, -21, -1573, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -2039, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), -1509, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1522, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1531, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2036, 3, -1534, -3, 1538, 1,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
