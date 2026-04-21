/* AnimJoint data for relocData file 1174 (FTLinkAnimShieldOff) */
/* 1696 bytes: 120-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimShieldOff_joint1[8];
extern u16 dFTLinkAnimShieldOff_joint2[24];
extern u16 dFTLinkAnimShieldOff_joint3[22];
extern u16 dFTLinkAnimShieldOff_joint5[34];
extern u16 dFTLinkAnimShieldOff_joint6[94];
extern u16 dFTLinkAnimShieldOff_joint7[44];
extern u16 dFTLinkAnimShieldOff_joint10[30];
extern u16 dFTLinkAnimShieldOff_joint11[64];
extern u16 dFTLinkAnimShieldOff_joint12[36];
extern u16 dFTLinkAnimShieldOff_joint13[8];
extern u16 dFTLinkAnimShieldOff_joint14[10];
extern u16 dFTLinkAnimShieldOff_joint17[22];
extern u16 dFTLinkAnimShieldOff_joint18[10];
extern u16 dFTLinkAnimShieldOff_joint19[22];
extern u16 dFTLinkAnimShieldOff_joint21[22];
extern u16 dFTLinkAnimShieldOff_joint22[78];
extern u16 dFTLinkAnimShieldOff_joint24[36];
extern u16 dFTLinkAnimShieldOff_joint26[54];
extern u16 dFTLinkAnimShieldOff_joint27[66];
extern u16 dFTLinkAnimShieldOff_joint29[32];
extern u16 dFTLinkAnimShieldOff_joint30[70];

/* Joint pointer table (30 entries, 120 bytes) */
u32 dFTLinkAnimShieldOff_joints[] = {
	(u32)dFTLinkAnimShieldOff_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimShieldOff_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimShieldOff_joint3, /* [2] joint 3 */
	(u32)dFTLinkAnimShieldOff_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTLinkAnimShieldOff_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimShieldOff_joint7, /* [6] joint 7 */
	(u32)dFTLinkAnimShieldOff_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTLinkAnimShieldOff_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimShieldOff_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimShieldOff_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimShieldOff_joint14, /* [13] joint 14 */
	(u32)dFTLinkAnimShieldOff_joint17, /* [14] joint 17 */
	0x00000000, /* [15] NULL */
	0x00000000, /* [16] NULL */
	(u32)dFTLinkAnimShieldOff_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimShieldOff_joint19, /* [18] joint 19 */
	(u32)dFTLinkAnimShieldOff_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTLinkAnimShieldOff_joint22, /* [21] joint 22 */
	(u32)dFTLinkAnimShieldOff_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTLinkAnimShieldOff_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	(u32)dFTLinkAnimShieldOff_joint27, /* [26] joint 27 */
	(u32)dFTLinkAnimShieldOff_joint29, /* [27] joint 29 */
	0x00000000, /* [28] NULL */
	(u32)dFTLinkAnimShieldOff_joint30, /* [29] joint 30 */
};

/* 4-byte alignment padding */
static u32 dFTLinkAnimShieldOff_pad[1] = { 0 };

/* Joint 1 */
u16 dFTLinkAnimShieldOff_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLinkAnimShieldOff_joint2[24] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 729, -11, -61, 53,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 889, -83, 53, -68,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 645, 11, -129, -53,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 901, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTLinkAnimShieldOff_joint3[22] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -51, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 276, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -167, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 17, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), -107,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTLinkAnimShieldOff_joint5[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 310, -48, -2, -35, -71, -15,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -130, 19, -115, -1, -69, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 463, 48, -12, 35, 45, 15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 259, 166, 56,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTLinkAnimShieldOff_joint6[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2600, -51, 397, 19, 2418, -82,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -2624, 0, 2407, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 337, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 80, -259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2653, -457, -181, -306, 2487, 497,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3539, -643, -533, -128, 3403, 441,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3940, -219, -439, 57, 3370, -69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3164, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3979, -20, -417, 73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -237, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3980, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3651, 416, 3310, 79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3182, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3146, 336, -412, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2979, 104, -364, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2936, 42, -326, 37, 3130, -51,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTLinkAnimShieldOff_joint7[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -112, 112,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -343, -313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -633, -331,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1006, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -461, 310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -385, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -588, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -538, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 37,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimShieldOff_joint10[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 570, 42, -680, 62, -537, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 223, -44, -38, 123, 84, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 302, -27, 59, 5, 200, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 4, 7, 76,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTLinkAnimShieldOff_joint11[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 58, 12, 5, 50, -213, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 121, 73, 277, 86, -272, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 237, 248, 339, -130, -117, 349,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 618, 258, 16, -202, 427, 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 754, 44, -66, -42, 507, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 101, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 481, -59, 179, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 433, -32, 19, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 416, -17, 123, 21, -50, -70,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLinkAnimShieldOff_joint12[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -805, 24,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -751, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1000, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -555, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -590, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -770, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -657, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 69,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimShieldOff_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTLinkAnimShieldOff_joint14[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1486, -1003, 108,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 804, -804, 804,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimShieldOff_joint17[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3271, 18, -1530, 0, -1690, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 3217, -131, -1371, 82, -1468, 112,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 1697, -536, -339,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimShieldOff_joint18[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -7, -102, 36,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, -163, 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTLinkAnimShieldOff_joint19[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -20, 16, -100, 20, 104, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 163, 1, 5, -8, 37, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -199, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimShieldOff_joint21[22] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, -59,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -199, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 205, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -98, -34,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTLinkAnimShieldOff_joint22[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -37, -11, -339, 17, -292, 87,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -62, 114, -247, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 170, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 277, -56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -200, -235,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 55, 102, -230, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -134, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 75, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -411, -153,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -262, 217,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -246, -82,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -282, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -53, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -177, -94, -27, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -64, -244, 38, 108, 136,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTLinkAnimShieldOff_joint24[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 777, -69,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 283, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 111, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 419, 293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 697, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 698, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 440, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -191,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTLinkAnimShieldOff_joint26[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 300, -8, -156, -23, -241, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 231, -22, -342, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -54, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 25, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -196, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -225, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -115, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 215, 28, -363, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 325, 7, -168, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, 4, -161, 6, -34, 80,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTLinkAnimShieldOff_joint27[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 80, 24, 384, -19, -508, 85,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 364, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 203, -67, -173, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 112, -76, -415, -241,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 105, 20, -659, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 430, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 535, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 463, -77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 310, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 158, 65, -441, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 236, 56, -225, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 34, 269, -40, -125, 100,
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTLinkAnimShieldOff_joint29[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 775, -28,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 535, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 483, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 818, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 833, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 525, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -100,
	ftAnimEnd(),
	0x0000,
};

/* Joint 30 */
u16 dFTLinkAnimShieldOff_joint30[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -422, 14, 3126, 15, -134, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -150, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 3084, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -384, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -389, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -582, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -86, 74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -51, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2988, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 3135, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -499, 75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -417, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -96, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -91, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -427, -10, 3142, 7, -69, 21,
	ftAnimEnd(),
	0x0000, 0x0000,
};
