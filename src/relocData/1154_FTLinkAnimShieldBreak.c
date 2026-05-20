/* AnimJoint data for relocData file 1154 (FTLinkAnimShieldBreak) */
/* 3072 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimShieldBreak_joint1[16];
extern u16 dFTLinkAnimShieldBreak_joint2[44];
extern u16 dFTLinkAnimShieldBreak_joint4[60];
extern u16 dFTLinkAnimShieldBreak_joint5[274];
extern u16 dFTLinkAnimShieldBreak_joint6[88];
extern u16 dFTLinkAnimShieldBreak_joint9[18];
extern u16 dFTLinkAnimShieldBreak_joint10[248];
extern u16 dFTLinkAnimShieldBreak_joint11[120];
extern u16 dFTLinkAnimShieldBreak_joint12[18];
extern u16 dFTLinkAnimShieldBreak_joint13[10];
extern u16 dFTLinkAnimShieldBreak_joint16[10];
extern u16 dFTLinkAnimShieldBreak_joint17[10];
extern u16 dFTLinkAnimShieldBreak_joint18[26];
extern u16 dFTLinkAnimShieldBreak_joint20[14];
extern u16 dFTLinkAnimShieldBreak_joint21[178];
extern u16 dFTLinkAnimShieldBreak_joint23[72];
extern u16 dFTLinkAnimShieldBreak_joint25[66];
extern u16 dFTLinkAnimShieldBreak_joint26[108];
extern u16 dFTLinkAnimShieldBreak_joint28[48];
extern u16 dFTLinkAnimShieldBreak_joint29[50];

/* Joint pointer table (29 entries, 116 bytes) */
AObjEvent32 * dFTLinkAnimShieldBreak_joints[] = {
	(AObjEvent32 *)dFTLinkAnimShieldBreak_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimShieldBreak_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimShieldBreak_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTLinkAnimShieldBreak_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTLinkAnimShieldBreak_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimShieldBreak_joint9, /* [6] joint 9 */
	NULL, /* [7] NULL */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTLinkAnimShieldBreak_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTLinkAnimShieldBreak_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimShieldBreak_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimShieldBreak_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimShieldBreak_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTLinkAnimShieldBreak_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTLinkAnimShieldBreak_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimShieldBreak_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTLinkAnimShieldBreak_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTLinkAnimShieldBreak_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTLinkAnimShieldBreak_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTLinkAnimShieldBreak_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTLinkAnimShieldBreak_joint28, /* [26] joint 28 */
	NULL, /* [27] NULL */
	(AObjEvent32 *)dFTLinkAnimShieldBreak_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimShieldBreak_joint1[16] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 187, -388, 0, 199,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 901, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 60), -7148, 3216,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLinkAnimShieldBreak_joint2[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -138,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 57, 0, 8,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 639, 3, 461, 0, 16, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 44), 38, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 37, -9, 92, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 35, -2, 85, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -681, -117,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimShieldBreak_joint4[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 437, -7, 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -471, 19, -25, -5, 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 782, 47, -98, -3, -32, -1,
	ftAnimSetValRateBlock(FT_ANIM_ROTY), -99, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 532, -104, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 782, -52, -99, 4, -32, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -471, -2, -25, 11, 0, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 709, 156, 242, 20, 522, 40,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimShieldBreak_joint5[274] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1546, -577, -1002, -126, 1209, 638,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2124, -382, -1128, -249, 1848, 420,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2312, -170, -1501, -190, 2051, 80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1303, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2774, -422, 1927, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3311, -372, 2031, 68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -3626, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2075, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1316, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1093, 93,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3645, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -3558, 124,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2087, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1900, -43,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3403, 143, -1000, 83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -910, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3271, -40, 1888, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3485, -348, 2222, 451,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3967, -282, 2791, 347,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2954, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -4049, -46, -965, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -4061, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -605, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2979, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2979, 112,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4029, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4251, -49, 3218, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4128, 71, 3114, -51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -3877, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3116, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 3075, -88,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -600, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -506, 27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3731, 162,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -3289, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2967, -83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2685, -86,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3226, 68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2918, 18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2589, -61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2543, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -485, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -417, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2904, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2989, -66,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2557, 59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2976, 46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3045, -52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -3312, -6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3020, 39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 3117, 8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -412, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3316, -4, -410, 2, 3122, 4,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimShieldBreak_joint6[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -581, -260,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -826, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -488, 250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -325, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -54, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -160, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -329, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -457, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -331, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -340, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -332, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -7, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -65, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -7, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -142, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -470, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -472, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimShieldBreak_joint9[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, -19,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 60), 0, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 29), -492, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 31), 445,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimShieldBreak_joint10[248] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1526, 637, 997, 185, 1205, 705,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2164, 402, 1183, 322, 1910, 443,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2331, 146, 1641, 177, 2093, 76,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2402, -65, 2065, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1538, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1536, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1212, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2326, -66, 2071, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 2135, -153, 1899, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1912, -413, 1056, -74, 1632, -469,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1104, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1308, -329, 959, -372,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1253, -40, 886, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 1136, -16, 660, -36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1110, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1013, -41,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1119, 34, 621, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1251, -5, 726, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 995, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1162, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1238, -18, 704, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1150, 13, 580, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1164, 12, 588, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 1255, 10, 622, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1174, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1111, -60,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1264, 72, 618, 75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1521, 171,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2516, 257,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1062, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1186, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1637, 109,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2344, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2767, 241,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 3371, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1186, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1215, -29,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3363, -6, 2341, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1941, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 2778, -18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1187, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1072, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1896, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1810, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2768, -10, 1070, -1, 1804, -5,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimShieldBreak_joint11[120] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -599, -330,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -930, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -825, 308,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -313, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -368, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -455, 319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -227, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -231, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -124, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -444, -212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -652, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -621, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -401, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -119, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -247, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -551, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -553, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimShieldBreak_joint12[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 25,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 60), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 29), 583, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 31), 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTLinkAnimShieldBreak_joint13[10] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 60), 804, -803, 804,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTLinkAnimShieldBreak_joint16[10] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 60), 1697, -536, -339,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimShieldBreak_joint17[10] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -163, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 60), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimShieldBreak_joint18[26] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -27, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 383, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), -84, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 271, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTLinkAnimShieldBreak_joint20[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTY), 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 153,
	ftAnimSetValBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 60), 343,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 60), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimShieldBreak_joint21[178] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1358, 115, -1345, 22, 942, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1508, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -1097, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 994, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1262, 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1404, -67, 1531, 170,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1290, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1604, 66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1817, -19,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1294, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1454, 35,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1777, -62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1572, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1115, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1388, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1472, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1289, 37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1571, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1906, 57,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1445, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1078, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1953, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1559, -135,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1344, 79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1872, 42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1023, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -1372, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1429, -103,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1137, -37,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1910, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1781, -54,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1103, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 1026, 4,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1727, -51, -1382, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 1555, -11, -1420, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1549, -5, -1422, -1, 1028, 2,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimShieldBreak_joint23[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 644, 112,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 736, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 568, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 489, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 506, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 451, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 380, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 558, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 516, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 478, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 565, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 570, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 500, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 868, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 903, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 931, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 929, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimShieldBreak_joint25[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2290, -61, 226, 1, 315, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 59), 347, 2, 383, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -2206, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2191, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -2430, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2526, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -2168, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2153, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -2368, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2554, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -2621, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2585, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -2356, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2354, 2, 349, 2, 384, 1,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimShieldBreak_joint26[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 231, -27, 256, -9, -667, 84,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 211, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 188, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -583, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -340, 207,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -452, -51,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 247, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 208, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 141, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 155, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -488, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -288, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 159, 3, -279, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), -168, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), 43, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 201, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 34), 243, 1,
	ftAnimBlock(0, 22),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -152, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 115, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 34, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 31, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 31, 0, 244, 0, 118, 3,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimShieldBreak_joint28[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 629, 82,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 687, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 561, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 588, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 543, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 412, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 409, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 714, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 743, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 791, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 789, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimShieldBreak_joint29[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -863, 18, -213, 0, 368, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 59), -144, 2, 504, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -770, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -722, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), -714, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -718, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 29), -1058, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1079, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1132, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1137, -4, -142, 2, 508, 3,
	ftAnimEnd(),
};
