/* AnimJoint data for relocData file 1182 (FTLinkAnimThrownDKPulled) */
/* 2048 bytes: 120-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimThrownDKPulled_joint2[42];
extern u16 dFTLinkAnimThrownDKPulled_joint3[26];
extern u16 dFTLinkAnimThrownDKPulled_joint5[14];
extern u16 dFTLinkAnimThrownDKPulled_joint6[90];
extern u16 dFTLinkAnimThrownDKPulled_joint7[34];
extern u16 dFTLinkAnimThrownDKPulled_joint10[18];
extern u16 dFTLinkAnimThrownDKPulled_joint11[80];
extern u16 dFTLinkAnimThrownDKPulled_joint12[40];
extern u16 dFTLinkAnimThrownDKPulled_joint13[16];
extern u16 dFTLinkAnimThrownDKPulled_joint14[8];
extern u16 dFTLinkAnimThrownDKPulled_joint17[8];
extern u16 dFTLinkAnimThrownDKPulled_joint18[14];
extern u16 dFTLinkAnimThrownDKPulled_joint19[14];
extern u16 dFTLinkAnimThrownDKPulled_joint21[16];
extern u16 dFTLinkAnimThrownDKPulled_joint22[130];
extern u16 dFTLinkAnimThrownDKPulled_joint24[54];
extern u16 dFTLinkAnimThrownDKPulled_joint26[104];
extern u16 dFTLinkAnimThrownDKPulled_joint27[118];
extern u16 dFTLinkAnimThrownDKPulled_joint29[62];
extern u16 dFTLinkAnimThrownDKPulled_joint30[76];

/* Joint pointer table (30 entries, 120 bytes) */
AObjEvent32 * dFTLinkAnimThrownDKPulled_joints[] = {
	NULL, /* [0] NULL */
	(AObjEvent32 *)dFTLinkAnimThrownDKPulled_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimThrownDKPulled_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTLinkAnimThrownDKPulled_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTLinkAnimThrownDKPulled_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimThrownDKPulled_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTLinkAnimThrownDKPulled_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTLinkAnimThrownDKPulled_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimThrownDKPulled_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimThrownDKPulled_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimThrownDKPulled_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTLinkAnimThrownDKPulled_joint17, /* [14] joint 17 */
	NULL, /* [15] NULL */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTLinkAnimThrownDKPulled_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimThrownDKPulled_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTLinkAnimThrownDKPulled_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTLinkAnimThrownDKPulled_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTLinkAnimThrownDKPulled_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTLinkAnimThrownDKPulled_joint26, /* [24] joint 26 */
	NULL, /* [25] NULL */
	(AObjEvent32 *)dFTLinkAnimThrownDKPulled_joint27, /* [26] joint 27 */
	(AObjEvent32 *)dFTLinkAnimThrownDKPulled_joint29, /* [27] joint 29 */
	NULL, /* [28] NULL */
	(AObjEvent32 *)dFTLinkAnimThrownDKPulled_joint30, /* [29] joint 30 */
};

/* Joint 2 */
u16 dFTLinkAnimThrownDKPulled_joint2[42] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -298, 213, -120, 87,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, 0, -63, 162, 51, -114,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 0, 12, -138, -339, -416,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, -240, -403, -480, -608,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, -240, -720,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 0, -240, -720,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTLinkAnimThrownDKPulled_joint3[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 8, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -130, 0, -10, 0, -5, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 8, -10, -5,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 8, -10, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTLinkAnimThrownDKPulled_joint5[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 184, 11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), 184,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 12), 184,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTLinkAnimThrownDKPulled_joint6[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2120, -52, -1598, -9, -963, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -1388, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1300, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), -2792, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2799, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2801, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1405, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1421, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2799, -185, -1276, 121, -1435, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3172, -280, -1056, 482, -985, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3359, -83, -311, 415, -1106, -131,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -3338, 0, -1251, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -224, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -225, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 10), -225,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3338, -1251,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -3338, -1251,
	ftAnimBlock(0, 9),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -225,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTLinkAnimThrownDKPulled_joint7[34] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -332, -37,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -488, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -509, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -566, 317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimThrownDKPulled_joint10[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 0, 7, 0, 76, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 4, 7, 76,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 4, 7, 76,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimThrownDKPulled_joint11[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 715, 1, 18, 2, 486, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 320, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 16), 731, -11, 475, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 718, -72, 456, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 586, -180, 337, -77, 266, -402,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 357, -88, 164, -107, -348, -441,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -616, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 408, 25, 121, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 121, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 408, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), 408,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -616, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -616, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 408, 0, 121, 0, -616, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimThrownDKPulled_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -431, -29,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -530, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -576, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -782, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -657, 255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -271, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -271, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -271, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -271, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimThrownDKPulled_joint13[16] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -209, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -209, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -209, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTLinkAnimThrownDKPulled_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimThrownDKPulled_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimThrownDKPulled_joint18[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -107, -4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), -107,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 12), -107,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTLinkAnimThrownDKPulled_joint19[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -296, -18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), -296,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 12), -296,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimThrownDKPulled_joint21[16] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 20), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), 0, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTLinkAnimThrownDKPulled_joint22[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -346, 66, -163, -104, 114, -192,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 76, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -213, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -997, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1116, -91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1192, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 34, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -134, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1164, 146,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -644, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -221, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -331, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -234, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 28, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -717, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -622, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -33, -126, -250, 379,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -333, 17, 326, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -336, 25,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 15), -229,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -188, 133, 33, -375,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -66, 29, -424, -258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -130, -31, -483, -29,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 10), -483,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 9), -130,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -130,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -130, -483,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -130, 0, -229, 0, -483, 0,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTLinkAnimThrownDKPulled_joint24[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 217, 316,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 570, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 398, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 742, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 986, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 749, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 534, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 754, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 816, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 612, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 612, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 612,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 612,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTLinkAnimThrownDKPulled_joint26[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 399, 80, -363, 12, -4, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 133, 102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 195, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 621, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 630, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 720, -49,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 234, 76,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -254, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 666, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1093, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 206, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -4, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1209, 803,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2700, 1131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3472, 467, -340, -54,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 7), -363,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 3636,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3636, 0, -4, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 3636, -4,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -363,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), -363,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -363, 0, -4, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 3636,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTLinkAnimThrownDKPulled_joint27[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 227, -45, 164, 35, -342, -153,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 41, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 101, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1098, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1096, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 37, -60, -1108, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -56, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 104, 59, -1203, 181,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 484, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -746, 361,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 14, 145, -480, 318,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 727, 32, 508, 85,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 414, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 654, -342, 410, 17, 492, -349,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 41, -390, 449, -148, -190, -743,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -125, -16, 114, -156, -994, -387,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 9, 67, 137, 11, -965, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 9, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 11), 137,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -965,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 11), -965,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 9, 137,
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTLinkAnimThrownDKPulled_joint29[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 366, 172,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 574, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 479, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 399, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 371, 269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 938, 345,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1062, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 619, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 623, 230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1081, 240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1104, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 734, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 734, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 734,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 734,
	ftAnimEnd(),
	0x0000,
};

/* Joint 30 */
u16 dFTLinkAnimThrownDKPulled_joint30[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1058, -70, 1870, -14, 1648, 3,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 26), 1591,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 31), 1661,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 942, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 849, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 762, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 864, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 759, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 788, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1122, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1194, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 841, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1204, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1137, -33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 1137,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 11), 1137,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 6), 1591,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 1661,
	ftAnimEnd(),
	0x0000, 0x0000,
};
