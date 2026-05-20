/* AnimJoint data for relocData file 1927 (FTYoshiAnimUTilt) */
/* 2288 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimUTilt_joint1[40];
extern u16 dFTYoshiAnimUTilt_joint2[78];
extern u16 dFTYoshiAnimUTilt_joint3[52];
extern u16 dFTYoshiAnimUTilt_joint4[112];
extern u16 dFTYoshiAnimUTilt_joint6[10];
extern u16 dFTYoshiAnimUTilt_joint7[26];
extern u16 dFTYoshiAnimUTilt_joint10[16];
extern u16 dFTYoshiAnimUTilt_joint11[26];
extern u16 dFTYoshiAnimUTilt_joint12[14];
extern u16 dFTYoshiAnimUTilt_joint13[10];
extern u16 dFTYoshiAnimUTilt_joint14[36];
extern u16 dFTYoshiAnimUTilt_joint15[22];
extern u16 dFTYoshiAnimUTilt_joint17[22];
extern u16 dFTYoshiAnimUTilt_joint18[114];
extern u16 dFTYoshiAnimUTilt_joint20[56];
extern u16 dFTYoshiAnimUTilt_joint22[126];
extern u16 dFTYoshiAnimUTilt_joint23[128];
extern u16 dFTYoshiAnimUTilt_joint25[66];
extern u16 dFTYoshiAnimUTilt_joint26[138];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTYoshiAnimUTilt_joints[] = {
	(AObjEvent32 *)dFTYoshiAnimUTilt_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTYoshiAnimUTilt_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTYoshiAnimUTilt_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTYoshiAnimUTilt_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTYoshiAnimUTilt_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTYoshiAnimUTilt_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTYoshiAnimUTilt_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTYoshiAnimUTilt_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTYoshiAnimUTilt_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTYoshiAnimUTilt_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTYoshiAnimUTilt_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTYoshiAnimUTilt_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTYoshiAnimUTilt_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTYoshiAnimUTilt_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTYoshiAnimUTilt_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTYoshiAnimUTilt_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTYoshiAnimUTilt_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTYoshiAnimUTilt_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTYoshiAnimUTilt_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimUTilt_joint1[40] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValRate(FT_ANIM_TRAY), 672, -1228,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 422, -499,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 3), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 1), 0, 454,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 1), 422,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 556,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 840, 72, 340, -15,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 585, -79, -34, -160,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 672, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTYoshiAnimUTilt_joint2[78] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 2, -89, 6, 0, 0, 30, 8, 20, 7,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 26), 30, -16, 20, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 199, 49, 423, 128, 5, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 199, -93, 423, -218, 5, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -175, -132, -449, -105, 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -328, -83, 0, 224, -1, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -343, -109, -28, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -657, 20, 0, -5, -38, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 18, -89, 2, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimUTilt_joint3[52] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 16, 18, 0, 15, 0, 9,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 759, 185, 502, 125, 303, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 759, -126, 502, -83, 303, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -26, 0, -26, 0, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 249, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -8, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 16, -1, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimUTilt_joint4[112] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 600, 329,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 78, 27, 0, 12, 0, 6,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 446, 92, 398, 99, 78, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 446, 22, 398, -67, 78, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 536, -246, 127, -87, 25, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -539, -536, 46, -63, 9, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 6144, 6144, 6144,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -537, -42, 0, -12, 0, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -792, -3, -27, -3, -5, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 4096, 4096, 4096,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -583, 92, -42, 2, -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 226, 132, -3, 8, 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 78, -18, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimUTilt_joint6[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 48, 120,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimUTilt_joint7[26] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1256, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 1498, -1476,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 25), 1498, 0, -1476, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 25), 1256,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1498, 0, -1476, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 1256,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTYoshiAnimUTilt_joint10[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -764, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), -764, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimUTilt_joint11[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -1753, 0, 1389, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 1711,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 1711, 0, 1389, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 25), -1753,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1753, 0, 1711, 0, 1389, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTYoshiAnimUTilt_joint12[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1002, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), -1002, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -1002,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimUTilt_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 172, 0, 0,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimUTilt_joint14[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -536, -893, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 156, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -669, -14, -1535, -71, 232, 25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -669, -1535, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -669, 7, -1535, 37, 232, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -536, -893, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTYoshiAnimUTilt_joint15[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -190, -7, 0, 6, 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -259, 334, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -190, 6, 0, -6, 0, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTYoshiAnimUTilt_joint17[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -153, -8, 0, 10, 0, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -270, 455, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -153, 6, 0, -7, 0, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimUTilt_joint18[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, -57, 5, -5, -3, -395,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -265, -212, -133, -145, -618, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -488, -127, -290, -127, -588, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -520, 179, -389, 125, -608, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -130, 230, -40, 256, -552, 391,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -58, 110, 124, 132, 174, 580,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 91, 27, 223, -65, 608, 261,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 705, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3, -55, -5, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -20, -22, -30, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 16), -3, -3, 2, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 866, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 800, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 736, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 400, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 189, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -109, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -39, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, -2, 5, 2, -3, 35,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimUTilt_joint20[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 262, 526,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 788, 359,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 981, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1195, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1118, -351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 6, -246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 570, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 648, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 361, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 262, -98,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimUTilt_joint22[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1602, 35, -83, 110, -263, -176,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1457, 322, -378, 287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 27, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 369, 303,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 574, -246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -922, 358, 135, 343,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -740, -294, 307, -341,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1510, -413, 140, -377, -548, -420,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -224, 300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1566, -75, -181, -287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1661, -19, -435, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1604, 16, 6, 222, 65, 160,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 146, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1629, -3, 9, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1593, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -87, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 173, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -242, -104,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1623, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1609, 9,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -331, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -297, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1602, 7, -83, 3, -263, 34,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimUTilt_joint23[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -60, 0, 3, -154, -219,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -95, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 20, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -373, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -278, 124,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -154, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -14, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -131, 63,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -277, -84,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -131, 516,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 78, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -29, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4, 55, 710, 419,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -64, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 708, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -37, -4, 868, 129,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 794, -60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 0, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -49, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 3, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 731, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 660, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 350, -259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -319, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -378, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -309, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -3, 0, 0, -154, 155,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimUTilt_joint25[66] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 378, 403,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 781, 218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 816, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 743, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 844, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 716, -485,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 385, 293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 587, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 782, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 673, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -294,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimUTilt_joint26[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1607, 39, -89, 114, -228, -228,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -840, 59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 99, -238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1588, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1704, -52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1579, -108,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -691, 176,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -292, 269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -186, -250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1764, -11, -402, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1603, 67, 7, 205, 51, 199,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 161, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1630, -3, 9, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1593, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 36, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -76, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 184, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1, -51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1632, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1626, 16,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -49, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -285, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -319, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -278, 33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -86, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -92, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1607, 19, -89, 2, -228, 49,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
