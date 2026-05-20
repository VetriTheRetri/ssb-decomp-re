/* AnimJoint data for relocData file 675 (FTFoxAnimDamaged6) */
/* 1808 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimDamaged6_joint1[34];
extern u16 dFTFoxAnimDamaged6_joint2[26];
extern u16 dFTFoxAnimDamaged6_joint4[50];
extern u16 dFTFoxAnimDamaged6_joint5[72];
extern u16 dFTFoxAnimDamaged6_joint6[40];
extern u16 dFTFoxAnimDamaged6_joint7[10];
extern u16 dFTFoxAnimDamaged6_joint8[50];
extern u16 dFTFoxAnimDamaged6_joint10[10];
extern u16 dFTFoxAnimDamaged6_joint11[68];
extern u16 dFTFoxAnimDamaged6_joint12[36];
extern u16 dFTFoxAnimDamaged6_joint13[10];
extern u16 dFTFoxAnimDamaged6_joint15[10];
extern u16 dFTFoxAnimDamaged6_joint16[74];
extern u16 dFTFoxAnimDamaged6_joint18[44];
extern u16 dFTFoxAnimDamaged6_joint20[72];
extern u16 dFTFoxAnimDamaged6_joint21[70];
extern u16 dFTFoxAnimDamaged6_joint23[36];
extern u16 dFTFoxAnimDamaged6_joint24[78];
extern u16 dFTFoxAnimDamaged6_joint25[32];
extern u16 dFTFoxAnimDamaged6_joint26[30];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTFoxAnimDamaged6_joints[] = {
	(AObjEvent32 *)dFTFoxAnimDamaged6_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimDamaged6_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimDamaged6_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTFoxAnimDamaged6_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTFoxAnimDamaged6_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTFoxAnimDamaged6_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTFoxAnimDamaged6_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTFoxAnimDamaged6_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTFoxAnimDamaged6_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTFoxAnimDamaged6_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimDamaged6_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimDamaged6_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTFoxAnimDamaged6_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTFoxAnimDamaged6_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTFoxAnimDamaged6_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTFoxAnimDamaged6_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTFoxAnimDamaged6_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTFoxAnimDamaged6_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTFoxAnimDamaged6_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimDamaged6_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimDamaged6_joint1[34] = {
	ftAnimSetVal(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0, 960,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 1), -296,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -2288,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -572, -1104,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -572, 81,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), -500, 556,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), -15, 1335,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimDamaged6_joint2[26] = {
	ftAnimSetVal(FT_ANIM_ROTX), 0,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 254,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 282, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 282, -31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTFoxAnimDamaged6_joint4[50] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -268, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 75, 254, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3, 88, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -6, 10, -90, -127,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 96, 12, 0, 11, 0, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 96, -10, 0, -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -268, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimDamaged6_joint5[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 555, -536, -341, 105, -728, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 18, -47, -236, -156, -616, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 460, 665, -654, -677, -928, -389,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1349, 464, -1590, -478, -1394, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1389, 40, -1611, -16, -1369, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1509, -22, -1572, 63, -1325, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1477, 38, -1483, 190, -1377, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1585, 343, -1190, 108, -1710, -479,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2164, 578, -1266, -75, -2337, -626,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimDamaged6_joint6[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, -281,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -288, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -896, -441,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -882, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -815, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -867, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -640, 441,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 633,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimDamaged6_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimDamaged6_joint8[50] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 178, 268,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), -57, -15,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 282, 151,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -14, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 150, 88, 73, -91, -30, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 463, 45, -24, -13, 0, 4,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 463, -24, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -31, 32,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 178, 268, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimDamaged6_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimDamaged6_joint11[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 727, 923, 567, 469, 451, 393,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1602, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1651, 507, 844, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1742, 80, 800, 490,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1838, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1825, 595,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1654, 32, 1990, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1733, -4, 1862, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1897, 151, 1707, -167, 1770, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2141, 219, 1398, -333, 1867, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2336, 194, 1040, -357, 2059, 192,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimDamaged6_joint12[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -389, 37,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -351, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -821, -394,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -795, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -821, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -822, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -389, 433,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimDamaged6_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 272, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimDamaged6_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimDamaged6_joint16[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 28, -6, 1, 25, -741,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -144, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 28, -72, -716, -438,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -145, -67, -852, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -104, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -711, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -717, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -646, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -103, 0, -143, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -111, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -80, 58,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -556, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -136, 55, -182, 290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 135, -6, 74, 25, 207,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimDamaged6_joint18[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 5, 824,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 829, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -412,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 357, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 291, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -285,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimDamaged6_joint20[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 60, -81, -94, 18, 493, -323,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 116, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -20, 43, 170, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 148, -5, 511, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -31, -90, 300, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -31, 1, 115, -1, 299, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 87, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 29, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 292, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 297, -130,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 34, 231,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 58, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 60, 31, -94, -152, 493, 459,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimDamaged6_joint21[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -15, -15, 1, 5, -763, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -31, -78, -698, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -172, -52, -896, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -138, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -810, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -815, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -817, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -142, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -37, 36,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -737, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -804, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -733, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -15, 22, 1, -3, -763, -29,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimDamaged6_joint23[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1013, -1013,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 449, 493,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 987, 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 986, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 956, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 882, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1013, 131,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimDamaged6_joint24[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3, -62, 121, 0, -202, 617,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 56, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 40, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 414, 332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 462, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 54, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 57, 0, 53, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 38, -54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 85, 33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 43, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 36, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 139, 9, -36, -171,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 11, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -304, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -211, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3, -7, 121, 36, -202, 8,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimDamaged6_joint25[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 114, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 49, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 175, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 175, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 357, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 178,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimDamaged6_joint26[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 312,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 64, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, -78,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 197, 39,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 312,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
