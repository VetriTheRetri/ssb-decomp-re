/* AnimJoint data for relocData file 1756 (FTNessAnimItemThrowSmashD) */
/* 2224 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimItemThrowSmashD_joint1[62];
extern u16 dFTNessAnimItemThrowSmashD_joint2[38];
extern u16 dFTNessAnimItemThrowSmashD_joint4[50];
extern u16 dFTNessAnimItemThrowSmashD_joint5[62];
extern u16 dFTNessAnimItemThrowSmashD_joint6[36];
extern u16 dFTNessAnimItemThrowSmashD_joint7[10];
extern u16 dFTNessAnimItemThrowSmashD_joint8[60];
extern u16 dFTNessAnimItemThrowSmashD_joint10[54];
extern u16 dFTNessAnimItemThrowSmashD_joint11[100];
extern u16 dFTNessAnimItemThrowSmashD_joint12[30];
extern u16 dFTNessAnimItemThrowSmashD_joint13[46];
extern u16 dFTNessAnimItemThrowSmashD_joint15[18];
extern u16 dFTNessAnimItemThrowSmashD_joint16[80];
extern u16 dFTNessAnimItemThrowSmashD_joint18[48];
extern u16 dFTNessAnimItemThrowSmashD_joint19[86];
extern u16 dFTNessAnimItemThrowSmashD_joint21[30];
extern u16 dFTNessAnimItemThrowSmashD_joint22[92];
extern u16 dFTNessAnimItemThrowSmashD_joint24[48];
extern u16 dFTNessAnimItemThrowSmashD_joint25[84];
extern u16 dFTNessAnimItemThrowSmashD_joint26[26];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTNessAnimItemThrowSmashD_joints[] = {
	(AObjEvent32 *)dFTNessAnimItemThrowSmashD_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimItemThrowSmashD_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimItemThrowSmashD_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTNessAnimItemThrowSmashD_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTNessAnimItemThrowSmashD_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimItemThrowSmashD_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNessAnimItemThrowSmashD_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNessAnimItemThrowSmashD_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTNessAnimItemThrowSmashD_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTNessAnimItemThrowSmashD_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimItemThrowSmashD_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimItemThrowSmashD_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTNessAnimItemThrowSmashD_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTNessAnimItemThrowSmashD_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTNessAnimItemThrowSmashD_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTNessAnimItemThrowSmashD_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTNessAnimItemThrowSmashD_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTNessAnimItemThrowSmashD_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTNessAnimItemThrowSmashD_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTNessAnimItemThrowSmashD_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimItemThrowSmashD_joint1[62] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -50, 0, 0, 0, 0, 540, 600, 0, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 1006, 1242, 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 1), 1006, -2340,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 421, -466, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, 0, 540, 59, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 0, 0, 540, 5, 0, 10,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimItemThrowSmashD_joint2[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 28, 7, -360, -1, 8, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -9, -804, -148, 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -804, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 1, -804, 26, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 28, -1, -360, 2, 8, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTNessAnimItemThrowSmashD_joint4[50] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, -130, 0, -14, 0, -111, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -276, -92,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 20), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 498, 0, 87, -276, 376,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), 477, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 997, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, -12, 0, 0, 0, -6,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimItemThrowSmashD_joint5[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -410, 315, -261, -305, 415, -528,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 136, 114, -386, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -567, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -602, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -479, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 135, 3, -386, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 13), -260, -19, 120, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -274, -60, -453, 65, 152, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -403, -14, -294, 44, 383, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -410, -7, -261, 33, 415, 31,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimItemThrowSmashD_joint6[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -473, 464,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -292, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -405, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, -68,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimItemThrowSmashD_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimItemThrowSmashD_joint8[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -10, 0, 364, -3, -32, 4, 0, 0, 300, 3, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 402, 137, 0, -121, 0, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 402, -384,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -366, -5, 0, 0, 0, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 329, 22, -4, 22, 154, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -10, 0, 364, -3, -32, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTNessAnimItemThrowSmashD_joint10[54] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 20, 0, 0, 0, -15, 0, 5,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 160, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 160, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -14, -160, -24, 0, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -161, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), -192, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, -2, 0, 7, 0, -1,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimItemThrowSmashD_joint11[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1192, -138, 1038, 306, 1489, -106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1380, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1054, 354, 1345, -316,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1902, 426, 404, -470,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1906, 89, 404, -116, 1380, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2080, 95, 171, -122, 1778, 240,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 2158, 48, 177, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1862, 88,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2558, 38,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2216, 63, 188, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 2534, 26, 254, 33,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2592, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2943, 163,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2562, 73, 291, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2680, 119, 503, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2801, 120, 569, 66, 3097, 153,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimItemThrowSmashD_joint12[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, 558,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 279,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -410, -279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, -148,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimItemThrowSmashD_joint13[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 54,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 90, 80, 126, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1429, 138, 0, -6, 0, -14,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 5), 1340,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 4, 0, 11,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), 580,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 54, 126,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 8), 90,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimItemThrowSmashD_joint15[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 893, -25, -935, -4, 681, 24,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 75, 68, 30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 893, -935, 681,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTNessAnimItemThrowSmashD_joint16[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 41, -41, -87, 23, -352, 341,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -38, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 31, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -11, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 68, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 75, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -209, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -280, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -289, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -232, -20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -50, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -88, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 33, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 41, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -255, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -351, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 41, 0, -87, 0, -352, -1,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimItemThrowSmashD_joint18[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 430, -423,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 397,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 802, 456,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 912, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 928, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 418, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 405, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 429, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 430, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimItemThrowSmashD_joint19[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1471, -338, -1212, 125, 1647, 469,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2512, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1132, -399, -1087, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 671, -141, -1165, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 848, -352, -1135, 168, 2510, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -33, -135, -829, 168, 2996, -90,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -774, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 578, 45, 2329, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 56, -276, 2855, 300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 25, -15, -743, 31, 2930, 68,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -400, 7, 3257, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 25, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -134, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -137, -3, -395, 4, 3256, -1,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimItemThrowSmashD_joint21[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -66, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 111, 13, 18, 4, -84, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -13, -10, 18, -1, -84, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -66, 0, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimItemThrowSmashD_joint22[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1488, -37, 1429, -18, 1458, -66,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1509, 29, 1377, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1410, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1546, 67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1485, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1510, -87, 1385, -127,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1257, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1122, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1531, 31, 999, -77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1391, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1368, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1232, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1457, 19,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1435, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1449, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1475, 11, 1368, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 1484, 4, 1428, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1488, 4, 1429, 0, 1458, 8,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimItemThrowSmashD_joint24[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 311, -304,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 241, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 173, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 7, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 55, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 312, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 311, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimItemThrowSmashD_joint25[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1715, -26, -1636, 240, -1781, 422,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1299, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1040, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1689, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1371, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1413, 261, -1374, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1375, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1895, 279, -1278, -194,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1980, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1481, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1409, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1634, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1956, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1718, -5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1507, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1777, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1715, -3, -1636, -2, -1781, -4,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimItemThrowSmashD_joint26[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 56,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -61, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -244, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -361, 18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 13), 56,
	ftAnimEnd(),
	0x0000, 0x0000,
};
