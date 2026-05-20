/* AnimJoint data for relocData file 1909 (FTYoshiAnimItemThrowAirSmashB) */
/* 2976 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimItemThrowAirSmashB_joint1[16];
extern u16 dFTYoshiAnimItemThrowAirSmashB_joint2[96];
extern u16 dFTYoshiAnimItemThrowAirSmashB_joint3[36];
extern u16 dFTYoshiAnimItemThrowAirSmashB_joint4[66];
extern u16 dFTYoshiAnimItemThrowAirSmashB_joint6[20];
extern u16 dFTYoshiAnimItemThrowAirSmashB_joint7[120];
extern u16 dFTYoshiAnimItemThrowAirSmashB_joint8[36];
extern u16 dFTYoshiAnimItemThrowAirSmashB_joint10[12];
extern u16 dFTYoshiAnimItemThrowAirSmashB_joint11[184];
extern u16 dFTYoshiAnimItemThrowAirSmashB_joint12[64];
extern u16 dFTYoshiAnimItemThrowAirSmashB_joint13[20];
extern u16 dFTYoshiAnimItemThrowAirSmashB_joint14[12];
extern u16 dFTYoshiAnimItemThrowAirSmashB_joint15[34];
extern u16 dFTYoshiAnimItemThrowAirSmashB_joint17[32];
extern u16 dFTYoshiAnimItemThrowAirSmashB_joint18[138];
extern u16 dFTYoshiAnimItemThrowAirSmashB_joint20[64];
extern u16 dFTYoshiAnimItemThrowAirSmashB_joint22[146];
extern u16 dFTYoshiAnimItemThrowAirSmashB_joint23[136];
extern u16 dFTYoshiAnimItemThrowAirSmashB_joint25[68];
extern u16 dFTYoshiAnimItemThrowAirSmashB_joint26[136];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTYoshiAnimItemThrowAirSmashB_joints[] = {
	(AObjEvent32 *)dFTYoshiAnimItemThrowAirSmashB_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTYoshiAnimItemThrowAirSmashB_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTYoshiAnimItemThrowAirSmashB_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTYoshiAnimItemThrowAirSmashB_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTYoshiAnimItemThrowAirSmashB_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTYoshiAnimItemThrowAirSmashB_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTYoshiAnimItemThrowAirSmashB_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTYoshiAnimItemThrowAirSmashB_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTYoshiAnimItemThrowAirSmashB_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTYoshiAnimItemThrowAirSmashB_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTYoshiAnimItemThrowAirSmashB_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTYoshiAnimItemThrowAirSmashB_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTYoshiAnimItemThrowAirSmashB_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTYoshiAnimItemThrowAirSmashB_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTYoshiAnimItemThrowAirSmashB_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTYoshiAnimItemThrowAirSmashB_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTYoshiAnimItemThrowAirSmashB_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTYoshiAnimItemThrowAirSmashB_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTYoshiAnimItemThrowAirSmashB_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTYoshiAnimItemThrowAirSmashB_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimItemThrowAirSmashB_joint1[16] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0, 608,
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetFlags(0),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 13), 105,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 11), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTYoshiAnimItemThrowAirSmashB_joint2[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -11, 0, -6, 0, 8, 0, -33, 214, -15, 1, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -580, 73, -285, 0, 518, 10,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -131, 21, -183, -270, -114, -87,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -124, 830, -107, 278,
	ftAnimSetValRateT(FT_ANIM_TRAX, 6), 35, 62,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -6, 68, 1, 31, 122, -67,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 231, 106, 24, 975,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -97, -1324, 136, 438,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 36, -73, -4, 0, -91, -10,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -100, 208, 134, -89,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 0, -23, 214, 10, 1, -46,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -893, 1, 0, 2, 0, 2,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimItemThrowAirSmashB_joint3[36] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1161, -9, 0, 13, 0, -5,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 16, 67, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -204, -50, 511, 16, -194, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 351, 80, 264, -30, 13, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 1161, -3, 0, -4, 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimItemThrowAirSmashB_joint4[66] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 562, 16, 0, -3, 0, 14,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 600, 329,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 535, 406,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 309, 89, -107, -54, 182, -203,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1188, -48, -384, -36, -1424, -15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, 0, 600, 27, 329, -32,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -124, -36, -435, 22, 41, 83,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 562, 2, 0, 7, 0, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 0, 600, 329,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimItemThrowAirSmashB_joint6[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 48, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 435, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), 435, -22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimItemThrowAirSmashB_joint7[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -226, -65, -1432, 4, -227, 63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 712, 303,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1495, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -520, -356,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1005, -425,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1618, 33,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1021, 241,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 939, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1553, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1500, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1575, -202, -1515, 142, 716, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2023, -335, -1216, 633, 1398, 450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2245, -78, -248, 495, 1617, 96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1894, 208,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1274, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -224, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -202, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -113, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1763, 96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1794, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1196, -65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1357, 35,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -154, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1835, -40, -176, -21, 1380, 23,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimItemThrowAirSmashB_joint8[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -8, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -546,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1102, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 551,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTYoshiAnimItemThrowAirSmashB_joint10[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -625,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), -639,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 17), -625,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTYoshiAnimItemThrowAirSmashB_joint11[184] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 237, 131, 1418, -18, -231, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 368, 316, 1400, -51, -127, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 871, 103, 1315, -637, 125, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 576, 174, 124, -592, 30, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1221, 503, 130, 64, 222, 405,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1698, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 253, 35, 841, 429,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 200, -60, 1080, 182,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -99, -119,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1421, 185,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1648, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1500, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1324, 452, -193, 164,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 532, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2405, 706, 1694, 282,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2524, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2737, 357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3120, 243, 315, -167,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 16, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3225, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 3221, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2652, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2658, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2628, 199,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3362, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3370, 442, 83, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 4105, 42, 373, 540,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3454, -314, 1163, 448, 2799, -241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3477, 11, 1269, 89, 2878, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3476, -6, 1341, 62, 2932, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3465, -10, 1394, 39, 2970, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3456, -9, 1420, 26, 2989, 19,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimItemThrowAirSmashB_joint12[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -8, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -523,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1056, -283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -574, 528,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -431,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -863, -474,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -957, 427,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 478,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -8, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimItemThrowAirSmashB_joint13[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -625,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 172, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -223, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -463, -23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 13), -625,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimItemThrowAirSmashB_joint14[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -536, -893, 0, 0, 156, 0,
	ftAnimSetFlagsT(0, 13),
	ftAnimSetFlagsT(FT_ANIM_ROTY, 11),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimItemThrowAirSmashB_joint15[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 536, -10, 0, -5, 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -440, -31, -268, 19, 133, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 69, 337, 19, 0, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 536, 2, 0, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTYoshiAnimItemThrowAirSmashB_joint17[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 89, -16, 0, -1, 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -587, -10, -76, 13, 162, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -105, 56, 256, 6, -51, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 89, 3, 0, -5, 0, 1,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimItemThrowAirSmashB_joint18[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 38, -26, -151, 110, 271, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 120, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -127, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -72, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -314, -252,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -821, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 61, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -116, 103, 14, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 144, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 129, 75, -838, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 133, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -829, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 61, -135, -895, 384,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -269, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 281, -37, -61, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, -94, -530, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -60, 134, 92, -1, -268, 146,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -98, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -12, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -236, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 238, 258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 510, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 605, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -119, -19, 476, -70,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -156, 0, 394, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -13, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 2, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 38, 36, -151, 4, 271, -123,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimItemThrowAirSmashB_joint20[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 687, -27,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 940, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1035, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 981, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 812, -487,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1060, 397,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 801, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 778, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 271, -272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 365, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 625, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 687, 62,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimItemThrowAirSmashB_joint22[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1438, 109, 164, -62, -318, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -205, 7, -43, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1364, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1487, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1640, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1620, -74, -185, -87, 96, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -349, 340,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1788, -34, -84, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1689, 165, -177, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1458, 146, -257, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1397, 70, 200, 243, -113, -69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1317, -43, -396, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1485, -123, -263, 64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -161, 113,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1658, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -26, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 68, 66,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -11, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 202, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 129, -125,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -146, -91,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1676, 4, 133, 53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 183, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1650, 97, -231, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1481, 105, -290, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1438, 43, 164, -18, -318, -27,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimItemThrowAirSmashB_joint23[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -34, 29, 150, -20, 286, 95,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -71, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 31, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 220, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 65, -156,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -268, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -93, -83,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -304, 269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 69, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 155, 28, -228, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 126, 75, -305, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 307, 43, -45, 444,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 75, 180, 212, -112, 582, 380,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -10, -60, 94, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 716, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 344, -331,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, -43, 77, -24, 52, -263,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 74, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 20, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -243, 267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 170, 263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 83, 10, 284, 145,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 136, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 460, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 599, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 480, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -34, -55, 150, 13, 286, -194,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimItemThrowAirSmashB_joint25[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 670, -77,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 772, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 912, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1053, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 856, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1016, -559,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -504,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 440, 332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 672, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 745, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 560, -369,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 334, 335,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 670, 335,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTYoshiAnimItemThrowAirSmashB_joint26[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1452, 174, -161, -20, -321, 97,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -147, 31, -13, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1617, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1503, -122,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1383, 220,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -121, -80, -13, -71,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -363, 22, -403, -176,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1653, 141,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1665, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -262, 114, -510, -89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -33, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -581, 279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1658, -49, 49, 111,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1569, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -358, -314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -59, -23, -578, -145,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -464, 108,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -191, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1592, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1422, -81,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -347, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -188, -144,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1340, 15, -192, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1452, 111, -161, 31, -321, -132,
	ftAnimEnd(),
	0x0000, 0x0000,
};
