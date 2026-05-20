/* AnimJoint data for relocData file 1161 (FTLinkAnimStunStartD) */
/* 1856 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimStunStartD_joint1[58];
extern u16 dFTLinkAnimStunStartD_joint2[14];
extern u16 dFTLinkAnimStunStartD_joint4[34];
extern u16 dFTLinkAnimStunStartD_joint5[92];
extern u16 dFTLinkAnimStunStartD_joint6[40];
extern u16 dFTLinkAnimStunStartD_joint9[30];
extern u16 dFTLinkAnimStunStartD_joint10[66];
extern u16 dFTLinkAnimStunStartD_joint11[32];
extern u16 dFTLinkAnimStunStartD_joint12[10];
extern u16 dFTLinkAnimStunStartD_joint13[8];
extern u16 dFTLinkAnimStunStartD_joint16[10];
extern u16 dFTLinkAnimStunStartD_joint17[58];
extern u16 dFTLinkAnimStunStartD_joint18[10];
extern u16 dFTLinkAnimStunStartD_joint20[16];
extern u16 dFTLinkAnimStunStartD_joint21[66];
extern u16 dFTLinkAnimStunStartD_joint23[32];
extern u16 dFTLinkAnimStunStartD_joint25[92];
extern u16 dFTLinkAnimStunStartD_joint26[90];
extern u16 dFTLinkAnimStunStartD_joint28[32];
extern u16 dFTLinkAnimStunStartD_joint29[78];

/* Joint pointer table (29 entries, 116 bytes) */
AObjEvent32 * dFTLinkAnimStunStartD_joints[] = {
	(AObjEvent32 *)dFTLinkAnimStunStartD_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimStunStartD_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimStunStartD_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTLinkAnimStunStartD_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTLinkAnimStunStartD_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimStunStartD_joint9, /* [6] joint 9 */
	NULL, /* [7] NULL */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTLinkAnimStunStartD_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTLinkAnimStunStartD_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimStunStartD_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimStunStartD_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimStunStartD_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTLinkAnimStunStartD_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTLinkAnimStunStartD_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimStunStartD_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTLinkAnimStunStartD_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTLinkAnimStunStartD_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTLinkAnimStunStartD_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTLinkAnimStunStartD_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTLinkAnimStunStartD_joint28, /* [26] joint 28 */
	NULL, /* [27] NULL */
	(AObjEvent32 *)dFTLinkAnimStunStartD_joint29, /* [28] joint 29 */
};

/* 4-byte alignment padding */
static u32 dFTLinkAnimStunStartD_pad[1] = { 0 };

/* Joint 1 */
u16 dFTLinkAnimStunStartD_joint1[58] = {
	ftAnimSetValAfter(FT_ANIM_TRAZ), 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAX), 0,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY), 0, -5, 0, -34, 162, 220,
	ftAnimSetValBlock(FT_ANIM_ROTX), 945,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAY, 14), -289, -10, 424, 127,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -189, -7,
	ftAnimSetValT(FT_ANIM_ROTX, 30), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 12), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 8), -43,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -85, 12,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 539, 242,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAY, 12), 0, 18, 901, 244,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 10), 0, 7, 0, 37,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLinkAnimStunStartD_joint2[14] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -138, 0, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -107, 276, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimStunStartD_joint4[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 74, 25, 0, 2, 0, -1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -23, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), 362, 19, 29, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 17), 259, -16, 166, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 56, 5,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimStunStartD_joint5[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -612, -9, -379, 69, -279, 75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -274, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -269, 31, -194, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -236, 34, -236, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 127, 68, -315, 46,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -318, -64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -556, 42,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 169, -3, -265, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 98, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -327, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -427, 126,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -145, 14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 122, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 274, 7,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -130, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -101, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 280, 5, -326, 0, -86, 15,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimStunStartD_joint6[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, -162,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1014, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -964, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -436, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -295, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -427, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -455, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -505, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimStunStartD_joint9[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 122, -104, 0, 39,
	ftAnimSetValBlock(FT_ANIM_ROTY), -128,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -116, -11,
	ftAnimSetValT(FT_ANIM_ROTY, 30), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 114, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), 76, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 25), 4, 42,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimStunStartD_joint10[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 795, -48, 225, -24, -151, -81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -573, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 423, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 231, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 249, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 127, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -550, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -77, 27,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 126, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 124, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 419, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 415, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 416, 0, 123, 0, -50, 26,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimStunStartD_joint11[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -575, -16,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -150, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -90, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -277, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -313, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -589, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimStunStartD_joint12[10] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 0, -209, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTLinkAnimStunStartD_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimStunStartD_joint16[10] = {
	ftAnimSetVal(FT_ANIM_ROTY), -208,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ), 1697, -339,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 30), -536,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimStunStartD_joint17[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -332, 18, 291, -22, 0, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 197, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -25, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -51, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -45, 6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 215, -32,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -9, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 16, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -163, -7,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 0, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, -10,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimStunStartD_joint18[10] = {
	ftAnimSetVal(FT_ANIM_ROTY), 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 30), -199,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTLinkAnimStunStartD_joint20[16] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -40, -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), -143, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 17), 0, 12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimStunStartD_joint21[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -258, -9, -386, 8, -259, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -260, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -52, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 172, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 171, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -218, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -266, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -264, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -45, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -209, -30,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -219, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 25, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -32, -244, 20, 108, 83,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimStunStartD_joint23[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 706, -21,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 429, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 490, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 744, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 713, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 378, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 250, -128,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimStunStartD_joint25[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 924, -9, 319, -29, 254, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -49, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 561, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 329, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 329, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 170, -67,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -83, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -346, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 527, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 553, 60,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 109, -59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -84, 39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 608, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 303, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -364, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -189, 30,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 303, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 314, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, 14, -162, 27, -34, 49,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimStunStartD_joint26[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -936, -343, 944, -39, -1801, -333,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1260, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1847, -139, -2716, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1933, -60, -2829, -94,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), -1392, 116, -2878, 83,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1248, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1351, -16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1278, 54, -2791, 67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2472, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -1564, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1579, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1395, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2400, 74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1846, 110,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1336, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 1317, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1337, 57, 1338, 21, -1733, 112,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimStunStartD_joint28[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 825, 84,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 1082, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1026, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 817, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 773, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 520, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 425, -95,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimStunStartD_joint29[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2362, 89, -79, 62, 30, -76,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -178, -110, -263, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 2649, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2622, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 2460, -21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -277, -67, -196, 83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -240, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 43, -21,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2470, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 2791, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -241, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -81, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 24, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -100, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2788, -2, -74, 7, -69, 30,
	ftAnimEnd(),
	0x0000, 0x0000,
};
