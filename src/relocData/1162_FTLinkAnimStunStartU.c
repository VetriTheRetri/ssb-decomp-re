/* AnimJoint data for relocData file 1162 (FTLinkAnimStunStartU) */
/* 2032 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimStunStartU_joint1[54];
extern u16 dFTLinkAnimStunStartU_joint2[14];
extern u16 dFTLinkAnimStunStartU_joint4[46];
extern u16 dFTLinkAnimStunStartU_joint5[76];
extern u16 dFTLinkAnimStunStartU_joint6[32];
extern u16 dFTLinkAnimStunStartU_joint9[20];
extern u16 dFTLinkAnimStunStartU_joint10[92];
extern u16 dFTLinkAnimStunStartU_joint11[40];
extern u16 dFTLinkAnimStunStartU_joint12[52];
extern u16 dFTLinkAnimStunStartU_joint13[8];
extern u16 dFTLinkAnimStunStartU_joint16[38];
extern u16 dFTLinkAnimStunStartU_joint17[54];
extern u16 dFTLinkAnimStunStartU_joint18[10];
extern u16 dFTLinkAnimStunStartU_joint20[30];
extern u16 dFTLinkAnimStunStartU_joint21[110];
extern u16 dFTLinkAnimStunStartU_joint23[36];
extern u16 dFTLinkAnimStunStartU_joint25[94];
extern u16 dFTLinkAnimStunStartU_joint26[56];
extern u16 dFTLinkAnimStunStartU_joint28[32];
extern u16 dFTLinkAnimStunStartU_joint29[62];

/* Joint pointer table (29 entries, 116 bytes) */
AObjEvent32 * dFTLinkAnimStunStartU_joints[] = {
	(AObjEvent32 *)dFTLinkAnimStunStartU_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimStunStartU_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimStunStartU_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTLinkAnimStunStartU_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTLinkAnimStunStartU_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimStunStartU_joint9, /* [6] joint 9 */
	NULL, /* [7] NULL */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTLinkAnimStunStartU_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTLinkAnimStunStartU_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimStunStartU_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimStunStartU_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimStunStartU_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTLinkAnimStunStartU_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTLinkAnimStunStartU_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimStunStartU_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTLinkAnimStunStartU_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTLinkAnimStunStartU_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTLinkAnimStunStartU_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTLinkAnimStunStartU_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTLinkAnimStunStartU_joint28, /* [26] joint 28 */
	NULL, /* [27] NULL */
	(AObjEvent32 *)dFTLinkAnimStunStartU_joint29, /* [28] joint 29 */
};

/* 4-byte alignment padding */
static u32 dFTLinkAnimStunStartU_pad[1] = { 0 };

/* Joint 1 */
u16 dFTLinkAnimStunStartU_joint1[54] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -807, 3, 0, 5, 0, 0, 152, -5, 0, -91,
	ftAnimSetValBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 18), -11, -3, -122, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 20), -411, 29, 65, 0,
	ftAnimSetValT(FT_ANIM_ROTY, 30), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 16), 355, 240,
	ftAnimSetValRateT(FT_ANIM_TRAY, 14), 901, 338,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 12), 0, 11, 0, 105,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 0, 49, 0, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLinkAnimStunStartU_joint2[14] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -138, 0, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -107, 276, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimStunStartU_joint4[46] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 350, 73, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -28, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 1003, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 16), -85, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 166, 88,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -26, 14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 259, -143,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 56, 18,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimStunStartU_joint5[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 74, -60, -472, 43, 284, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 66, -78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -150, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), -117, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -116, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -97, -17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -13, -56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 190, 28,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -169, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 104, 148,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 214, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 51, -114,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -119, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -301, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 280, 175, -326, -25, -86, -138,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimStunStartU_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -527, -83,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -459, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -357, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -540, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -576, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -591, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 90,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimStunStartU_joint9[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -97, -7,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 7, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -156, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 18), 4, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimStunStartU_joint10[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 666, -9, 442, -104, 227, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 341, -67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 86, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 240, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 149, -50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 59, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 268, -80,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2, -25,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 60, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 214, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -31, -43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -359, 36,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 76, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 100, 20,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -315, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -121, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 266, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 367, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 416, 48, 123, 23, -50, 71,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimStunStartU_joint11[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -330, -179,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -453, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -336, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -610, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -632, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -627, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -644, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -631, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 43,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimStunStartU_joint12[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -399, 81, -179, 4, 0, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -40, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -31, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -72, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), 0, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -176, 27,
	ftAnimBlock(0, 6),
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -2, -27,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 63, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 128, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -209, -27, 0, -16,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTLinkAnimStunStartU_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimStunStartU_joint16[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 1697, -2, -536, 51,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), -339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 1649, -14, -173, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -219, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1620, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1629, 3,
	ftAnimBlock(0, 9),
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -536, -49,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 1697, 13,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimStunStartU_joint17[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -899, 126, -494, 75, 377, -81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -220, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 38, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -6, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -23, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 0, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 127, 7,
	ftAnimBlock(0, 8),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 174, 44,
	ftAnimBlock(0, 8),
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -163, -85,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -84,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimStunStartU_joint18[10] = {
	ftAnimSetVal(FT_ANIM_ROTY), 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 30), -199,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTLinkAnimStunStartU_joint20[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -243, 54, 115, -16, -78, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 85, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -43, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 0, 16,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimStunStartU_joint21[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -632, 131, -300, -130, 129, -117,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 398, 153, -634, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -376, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -270, 81,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -481, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 561, 169, -577, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1356, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -672, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -783, -103,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -944, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -518, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -775, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1384, -269, -957, 274,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 137, -369, 263, 337,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -700, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -372, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 78, -28, 278, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), -189, -46, 82, 15,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -337, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -298, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -53, -244, 54, 108, 26,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimStunStartU_joint23[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 292, 287,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1358, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1377, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1076, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1052, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 520, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 409, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 250, -159,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimStunStartU_joint25[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 681, 65, 163, -14, 625, -175,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 375, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 259, 84, 24, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 355, 76, -144, -211,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -692, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 74, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 131, -203,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 31, 28,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -687, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -377, 13,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 56, 27, -55, -103,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -170, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 313, 15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -369, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -112, 65,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -178, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -178, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, 16, -161, 16, -34, 77,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimStunStartU_joint26[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 142, -21, 208, 5, -351, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 13, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), 283, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -379, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -385, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -161, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 233, 35,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -151, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -141, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 37, 269, -13, -125, 15,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimStunStartU_joint28[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 775, 54,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 906, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 891, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 881, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 827, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 534, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 425, -108,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimStunStartU_joint29[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -510, -9, -31, 35, -13, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -119, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -719, 2, 264, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -716, 2, 263, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -468, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -22, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -90, -63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -114, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -437, 25, -129, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -425, -3, -73, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -427, -2, -74, 0, -69, 44,
	ftAnimEnd(),
	0x0000, 0x0000,
};
