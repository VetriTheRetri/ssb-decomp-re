/* AnimJoint data for relocData file 1147 (FTLinkAnimDamaged5) */
/* 2608 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimDamaged5_joint1[18];
extern u16 dFTLinkAnimDamaged5_joint2[56];
extern u16 dFTLinkAnimDamaged5_joint4[48];
extern u16 dFTLinkAnimDamaged5_joint5[148];
extern u16 dFTLinkAnimDamaged5_joint6[56];
extern u16 dFTLinkAnimDamaged5_joint9[58];
extern u16 dFTLinkAnimDamaged5_joint10[128];
extern u16 dFTLinkAnimDamaged5_joint11[48];
extern u16 dFTLinkAnimDamaged5_joint12[76];
extern u16 dFTLinkAnimDamaged5_joint13[8];
extern u16 dFTLinkAnimDamaged5_joint16[24];
extern u16 dFTLinkAnimDamaged5_joint17[48];
extern u16 dFTLinkAnimDamaged5_joint18[26];
extern u16 dFTLinkAnimDamaged5_joint20[30];
extern u16 dFTLinkAnimDamaged5_joint21[94];
extern u16 dFTLinkAnimDamaged5_joint23[40];
extern u16 dFTLinkAnimDamaged5_joint25[76];
extern u16 dFTLinkAnimDamaged5_joint26[116];
extern u16 dFTLinkAnimDamaged5_joint28[56];
extern u16 dFTLinkAnimDamaged5_joint29[92];

/* Joint pointer table (29 entries, 116 bytes) */
AObjEvent32 * dFTLinkAnimDamaged5_joints[] = {
	(AObjEvent32 *)dFTLinkAnimDamaged5_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimDamaged5_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimDamaged5_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTLinkAnimDamaged5_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTLinkAnimDamaged5_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimDamaged5_joint9, /* [6] joint 9 */
	NULL, /* [7] NULL */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTLinkAnimDamaged5_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTLinkAnimDamaged5_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimDamaged5_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimDamaged5_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimDamaged5_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTLinkAnimDamaged5_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTLinkAnimDamaged5_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimDamaged5_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTLinkAnimDamaged5_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTLinkAnimDamaged5_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTLinkAnimDamaged5_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTLinkAnimDamaged5_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTLinkAnimDamaged5_joint28, /* [26] joint 28 */
	NULL, /* [27] NULL */
	(AObjEvent32 *)dFTLinkAnimDamaged5_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimDamaged5_joint1[18] = {
	ftAnimSetVal(FT_ANIM_TRAY), 901,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 1), 901,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 2), 901,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 19), 1099,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 8), 744,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimDamaged5_joint2[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -107, 276,
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -12,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 134, 259, 268, -95, 268, 104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 670, 35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -9, 312,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 19), -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 1251, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 268, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 83, 13,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 274, 37,
	ftAnimBlock(0, 3),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 3249, 352,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimDamaged5_joint4[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 259, 166, 56,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 357, -100, 312, -8, 446, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -7, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -41, -46, 26, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 18), -567, 39, 26, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 166, 24, 56, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 877, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 315, -84,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTLinkAnimDamaged5_joint5[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1328, -677, -1281, -114, 1522, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1499, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2005, -169, -1395, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1668, 306, -1163, 169,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -984, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1393, 104, 1320, -65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1519, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1459, -80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -2293, -125,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -977, 4, 1607, 82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2252, 131,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1073, -16,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2425, -137,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -3016, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2378, 113,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2662, 1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3009, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2985, 155, -1089, -78, 2651, -184,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2020, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2698, 258, -1229, -231,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2061, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1552, -248,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1424, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2004, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2008, -40,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1970, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1927, 26, -1370, 38, 1975, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1916, 10, -1347, 22, 1955, -20,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimDamaged5_joint6[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -500, -69,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -716, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -361, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -338, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -340, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -718, -345,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1032, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1059, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -870, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -744, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -710, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -744, -33,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimDamaged5_joint9[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, -496, 7, 64, 76, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4, -496, 7, 64, 76, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -371, -12, 117, 1, 224, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -539, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 163, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 99, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 176, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 278, 83,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 266, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 193, 1,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimDamaged5_joint10[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 416, 413, 123, -66, -50, 650,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 829, 266, 57, 26, 599, 396,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 949, 116, 177, 74, 742, 89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 259, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1134, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 733, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 738, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 1004, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 276, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 616, 13,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1133, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 1182, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1175, -103, 627, -36, 1007, -84,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 707, -353,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 265, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 834, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 676, -240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 268, -242, 354, -191,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 264, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 292, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 226, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 122, -121,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 11, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 347, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 468, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 488, 20, 60, 48, 163, -62,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimDamaged5_joint11[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -587, -29,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -617, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -296, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -345, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -392, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -476, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -501, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1153, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1223, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -744, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -617, 127,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimDamaged5_joint12[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 13, -209, 11, 0, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 13, -209, 11, 0, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 24, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 127, 311, -91, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 40, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 301, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 769, 52,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 150, -20,
	ftAnimBlock(0, 13),
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -178, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 611, -248,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 330, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 0, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), -209,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimDamaged5_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimDamaged5_joint16[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 1697, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -536, -339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1697, 0, -536, 29, -339, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 1508, -17, 346, 91, -843, -51,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimDamaged5_joint17[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 116, -163, 197, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 116, -163, 197, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 173, -10, 19, 20, -35, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -191, -7, 234, 0, -104, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 247, 43, 209, 38, 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -52, -163, -64, 0, -1,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimDamaged5_joint18[26] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 56, -460, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -393, -293, -165,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 0, -199, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, -199, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTLinkAnimDamaged5_joint20[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 422, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -150, -155,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 21), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 110, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 97, -8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimDamaged5_joint21[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -242, -844, -244, 153, 108, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 316, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1086, -261, -90, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -765, 644, -466, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 203, 476, -220, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 187, -19, -237, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -15, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -219, 8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 336, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 268, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 247, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -525, -244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 15, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 134, -47,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -206, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 61, 79,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 69, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 30, -39, 139, 78, -782, -257,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimDamaged5_joint23[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 249, 156,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 405, 225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 700, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 433, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 397, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 657, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 708, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1256, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1205, -50,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimDamaged5_joint25[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 329, 279, -161, 206, -34, 113,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 190, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 482, -371, 107, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -134, -297, 99, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -109, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -111, 33, 170, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), 82, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -68, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), 659, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 702, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1114, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1167, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 927, -317,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -149, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 473, -454, -183, -33, 69, -12,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimDamaged5_joint26[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, -512, 269, -1, -125, -447,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 61, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -241, -238, -572, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -205, 49, -317, 202,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -217, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -138, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -145, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -377, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -207, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -21, 32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 70, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 170, -10,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 28, 69, -351, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 252, -25, -131, -19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 169, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 234, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 153, -45, -201, 104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 268, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 76, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 116, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 206, 42, 113, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 301, 33, 318, 112, -270, -383,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimDamaged5_joint28[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 424, 808,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1233, 341,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1108, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 917, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 908, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 948, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 957, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 511, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 466, 208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 928, 281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1029, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 719, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 845, 125,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimDamaged5_joint29[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -427, -958, -74, 0, -69, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 138, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -180, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1386, -324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1075, 377,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -631, 344,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -387, 193,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -89, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 138, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), 238, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -180, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), -103, 14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -105, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -566, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -545, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -808, -421,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1378, -305,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1420, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1352, 386,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -647, 705, -89, 13, 252, 14,
	ftAnimEnd(),
};
