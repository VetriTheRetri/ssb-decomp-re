/* AnimJoint data for relocData file 561 (FTMarioAnimCatch) */
/* 2176 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimCatch_joint1[62];
extern u16 dFTMarioAnimCatch_joint2[26];
extern u16 dFTMarioAnimCatch_joint4[70];
extern u16 dFTMarioAnimCatch_joint5[136];
extern u16 dFTMarioAnimCatch_joint6[48];
extern u16 dFTMarioAnimCatch_joint7[18];
extern u16 dFTMarioAnimCatch_joint8[64];
extern u16 dFTMarioAnimCatch_joint10[34];
extern u16 dFTMarioAnimCatch_joint11[118];
extern u16 dFTMarioAnimCatch_joint12[38];
extern u16 dFTMarioAnimCatch_joint15[34];
extern u16 dFTMarioAnimCatch_joint16[100];
extern u16 dFTMarioAnimCatch_joint18[40];
extern u16 dFTMarioAnimCatch_joint20[42];
extern u16 dFTMarioAnimCatch_joint21[76];
extern u16 dFTMarioAnimCatch_joint23[46];
extern u16 dFTMarioAnimCatch_joint24[76];
extern u16 dFTMarioAnimCatch_joint25[10];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTMarioAnimCatch_joints[] = {
	(AObjEvent32 *)dFTMarioAnimCatch_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTMarioAnimCatch_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTMarioAnimCatch_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTMarioAnimCatch_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTMarioAnimCatch_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTMarioAnimCatch_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTMarioAnimCatch_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTMarioAnimCatch_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTMarioAnimCatch_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTMarioAnimCatch_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTMarioAnimCatch_joint15, /* [12] joint 15 */
	NULL, /* [13] NULL */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTMarioAnimCatch_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTMarioAnimCatch_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTMarioAnimCatch_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTMarioAnimCatch_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTMarioAnimCatch_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTMarioAnimCatch_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTMarioAnimCatch_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTMarioAnimCatch_joint1[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 223,
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 540, -15, 0, -86,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 539, 0, -201, 240,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 6), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 540, 0, 180, 499,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 10), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAY, 10), 223, 5, 540, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 360, -143,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 0, -73,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 34), 223,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 34), 0, 0, 540, 5, 0, 10,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimCatch_joint2[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -71, 1, -790, -3, -95, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -71, -790, -95,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 34), -71, 0, -790, 2, -95, 0,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimCatch_joint4[70] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 208, 0, 258, 10, 110, 6,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 170, 63, 449, 96, 226, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 399, 155, 548, 43, 333, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 790, 32, 622, -4, 795, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 690, -17, 503, -21, 197, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 669, -120, 469, -61, 112, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 208, -12, 258, -5, 110, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 34), 208, 0, 258, -1, 110, -1,
	ftAnimBlock0(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimCatch_joint5[136] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY), 4095, 4095,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 133, -895, -300, -136, -272, 987,
	ftAnimSetValAfterBlock(FT_ANIM_SCAZ), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1405, -384,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 6), 6144, 0, 4095, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -436, 21, 715, 693,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -257, 43, 1114, 322,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -422, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1530, -269, 1359, 389,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2364, -304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1892, 452,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -208, 135, 2264, 218,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -38, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2553, -149, 2329, 41,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 5), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2398, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2664, -291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3135, -628,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3921, -451, 31, 67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 225, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4039, -77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -4079, 66,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY, 5), 4096, 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3955, 428, 170, -152, 2475, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3221, 435, -79, -235, 2767, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3083, 138, -300, -221, 2944, 177,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTMarioAnimCatch_joint6[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -182, -878,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1060, -237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -656, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -708, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -553, 349,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -198, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTMarioAnimCatch_joint7[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -625,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), 0, 12,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 34), 0,
	ftAnimBlock0(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimCatch_joint8[64] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 201, 3, -4, 0, 176, 2,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 331, -33, -3, 0, 129, -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -28, 282, -60,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 0, 4, 288, 0, 0, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, -9, 0, 0, 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 201, 4, -4, 0, 176, 4,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 34), 0, 288, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 34), 201, 0, -4, 0, 176, -1,
	ftAnimBlock0(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTMarioAnimCatch_joint10[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -221, 10, 139, -7, -209, 4,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -221, -5, 139, 3, -209, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 34), -221, -1, 139, 1, -209, 1,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimCatch_joint11[118] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY), 4095, 4095,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1164, 403, 1056, -120, -1542, 353,
	ftAnimSetValAfterBlock(FT_ANIM_SCAZ), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 981, 157,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 6), 6144, 0, 4095, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -761, 593, -1189, 563,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 22, 885, -416, 881,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1008, 589, 573, 558,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1201, 135, 1231, 196, 699, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1537, 69, 704, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1531, 106,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 5), 4096, 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1611, 75, 683, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1853, -16, 587, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1654, 129,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1880, -225,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY, 5), 4096, 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1783, -330, 588, 264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1530, 85, 1191, -363, 1116, 542,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2052, 521, 1056, -134, 1674, 558,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTMarioAnimCatch_joint12[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -811, 17,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -597, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -275, 298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -452,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -914, -405,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, 102,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimCatch_joint15[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 625,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1072, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 753, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 759, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 625, 34,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 1002,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 625, -121,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 8), -89,
	ftAnimBlock0(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTMarioAnimCatch_joint16[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1743, 136, -1377, 235, 1653, -309,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1607, -325, -1142, 379, 1344, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2394, -586, -619, 214, 1974, 562,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -964, -237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2779, 93, 2468, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2207, 237, 1872, -259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2304, -44, -1187, -205, 1949, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1442, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2296, 25, 1955, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1946, 54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1664, -19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1386, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1382, 10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1882, 65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1762, 35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1375, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1743, 18, -1377, -2, 1653, -11,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimCatch_joint18[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 400, 405,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 972, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 925, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 276, -230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 89, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 356, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 389, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 400, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimCatch_joint20[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -212, -117, -11, 0, -156, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -11, 0, -156, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -329, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -280, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -380, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -339, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -212, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -212, 0, -11, 0, -156, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimCatch_joint21[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 200, 161, 187, -48, 35, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 414, -115,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -57, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 39, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 116, 78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 300, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 257, -168,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 57, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -14, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 138, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 145, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 314, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 137, 48, 213, -49, 294, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 153, 31, 200, -13, 69, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 200, 46, 187, -13, 35, -34,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimCatch_joint23[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, 53,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 492, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 414, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 473, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 292, -236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -146,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 379, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, 58,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimCatch_joint24[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -146, -1514, 144, 1395, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1281, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1468, 98, 1447, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1605, 141, 1435, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1685, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1937, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1396, -120,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1622, 72,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1720, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1584, -113,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1885, -58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1740, -61,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1550, 54, 1417, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1697, -43, -1514, 35, 1395, -22,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTMarioAnimCatch_joint25[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1608, 0, 0, 300, 600,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
};
