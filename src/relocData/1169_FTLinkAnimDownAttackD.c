/* AnimJoint data for relocData file 1169 (FTLinkAnimDownAttackD) */
/* 3248 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimDownAttackD_joint1[102];
extern u16 dFTLinkAnimDownAttackD_joint2[14];
extern u16 dFTLinkAnimDownAttackD_joint4[74];
extern u16 dFTLinkAnimDownAttackD_joint5[178];
extern u16 dFTLinkAnimDownAttackD_joint6[88];
extern u16 dFTLinkAnimDownAttackD_joint9[100];
extern u16 dFTLinkAnimDownAttackD_joint10[60];
extern u16 dFTLinkAnimDownAttackD_joint11[32];
extern u16 dFTLinkAnimDownAttackD_joint12[10];
extern u16 dFTLinkAnimDownAttackD_joint13[8];
extern u16 dFTLinkAnimDownAttackD_joint16[36];
extern u16 dFTLinkAnimDownAttackD_joint17[100];
extern u16 dFTLinkAnimDownAttackD_joint18[10];
extern u16 dFTLinkAnimDownAttackD_joint20[28];
extern u16 dFTLinkAnimDownAttackD_joint21[176];
extern u16 dFTLinkAnimDownAttackD_joint23[48];
extern u16 dFTLinkAnimDownAttackD_joint25[162];
extern u16 dFTLinkAnimDownAttackD_joint26[142];
extern u16 dFTLinkAnimDownAttackD_joint28[48];
extern u16 dFTLinkAnimDownAttackD_joint29[148];

/* Joint pointer table (29 entries, 116 bytes) */
AObjEvent32 * dFTLinkAnimDownAttackD_joints[] = {
	(AObjEvent32 *)dFTLinkAnimDownAttackD_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimDownAttackD_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimDownAttackD_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTLinkAnimDownAttackD_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTLinkAnimDownAttackD_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimDownAttackD_joint9, /* [6] joint 9 */
	NULL, /* [7] NULL */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTLinkAnimDownAttackD_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTLinkAnimDownAttackD_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimDownAttackD_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimDownAttackD_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimDownAttackD_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTLinkAnimDownAttackD_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTLinkAnimDownAttackD_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimDownAttackD_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTLinkAnimDownAttackD_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTLinkAnimDownAttackD_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTLinkAnimDownAttackD_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTLinkAnimDownAttackD_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTLinkAnimDownAttackD_joint28, /* [26] joint 28 */
	NULL, /* [27] NULL */
	(AObjEvent32 *)dFTLinkAnimDownAttackD_joint29, /* [28] joint 29 */
};

/* 4-byte alignment padding */
static u32 dFTLinkAnimDownAttackD_pad[1] = { 0 };

/* Joint 1 */
u16 dFTLinkAnimDownAttackD_joint1[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 945, -4, 0, 10, 0, -5, 0, 269, 162, 294, 0, -6,
	ftAnimSetValRateT(FT_ANIM_TRAY, 14), 421, 29,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 15), -225, -350,
	ftAnimSetValRateT(FT_ANIM_TRAX, 18), 84, -170,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 20), 429, -46, 558, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -41, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 128, 51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 522, 407,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 7), -209, 1134,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 9), 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY, 13), 583, 108,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -56,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), 0, -13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), 124, -14,
	ftAnimBlock(0, 3),
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValT(FT_ANIM_TRAX, 23), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 23), 0, -45,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 18), 901, 151,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimDownAttackD_joint2[14] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -138, 0, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 50), -107, 276, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimDownAttackD_joint4[74] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 74, -11, 0, 29, 0, -30,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -84, -4, 569, 30, -393, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -24, 8, 611, -128, -282, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTZ), -292, 55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -225, -201,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 6), 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -57, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 228, 75,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -396, 21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 379, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), 56, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 166, 26,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 19), 259, -9,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimDownAttackD_joint5[178] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -612, 97, -379, 100, -279, -121,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 123, 93,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 80, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -753, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -799, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -552, 38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 222, 101,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 362, -125,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -514, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -707, -255,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 14, -62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -265, -116,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 217, -120,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 400, 220,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1027, -307,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1576, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -428, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -113, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 626, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 247, -267, -1442, 154,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1130, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 91, -73, -79, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 71, -38, -137, 76,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1071, 144,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -686, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 22, -12, -21, 104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 121, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -165, -24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -602, 74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -59, 12,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 126, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 259, 18,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -187, -20, -48, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -317, -10, -66, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 280, 20, -326, -9, -86, -19,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimDownAttackD_joint6[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, -118,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -489, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -329, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -285, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -266, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -268, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -246, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -326, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -264, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -426, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -438, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -338, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -90, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -256, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -336, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -268, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -321, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -483, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -492, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -498, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimDownAttackD_joint9[100] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 122, -128, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 387, -218, -28,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 493, -302, -77,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 578, -400, -143,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 327, -487, -78,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 34, -427, 109,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -570, 104, 436,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -740, 373, 384,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -482, 358, 547,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -313, 250, 678,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -301, 470, 563,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -209, 448, 621,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -142, 32, 749,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -136, -199, 683,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -150, -9, 565,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -191, 59, 525,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -229, 27, 521,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -202, -10, 306,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -132, -3, 186,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 4, 7, 76,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimDownAttackD_joint10[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 795, -12, 225, -13, -151, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), 167, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 93, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 22), 557, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 555, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), 420, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 180, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), -34, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 108, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 18), 350, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 332, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 158, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 416, -3, 123, -35, -50, -16,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimDownAttackD_joint11[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -575, -23,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), -919, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -916, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -688, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -675, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -608, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimDownAttackD_joint12[10] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 50), 0, -209, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTLinkAnimDownAttackD_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimDownAttackD_joint16[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 1697,
	ftAnimSetValRate(FT_ANIM_ROTZ), -339, 30,
	ftAnimSetValBlock(FT_ANIM_ROTY), -208,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -104, -42,
	ftAnimSetValT(FT_ANIM_ROTY, 50), -536,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 1704, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 1978, -9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -599, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 21), 1697, -14, -339, 14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimDownAttackD_joint17[100] = {
	ftAnimSetValRate(FT_ANIM_ROTY), 291, -50,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -332, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -132, -19,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), -239, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 4, 101,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -128, -163,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 71, 42,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -100, -210,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 90, -8,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -164, -167,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 53, -45,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -168, -158,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -44, -50,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -198, -124,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -148, 28,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -178, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 67, 94,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -332, -89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 229, 51,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -452, -235,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 222, -34,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -476, -167,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 23), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -46, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 16), -163, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimDownAttackD_joint18[10] = {
	ftAnimSetVal(FT_ANIM_ROTY), 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 50), -199,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTLinkAnimDownAttackD_joint20[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -40, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), -24, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 146, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 104, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 24, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimDownAttackD_joint21[176] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1349, -81, -1222, 79, 1349, -54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1026, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1094, -250, 1326, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 767, -305, 1518, 183,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 183, -55, 1829, 31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1065, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1189, -14,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 124, -61, 1862, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 76, 118, 1631, -109,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1199, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1089, 88,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 202, 116, 1533, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 334, -40, 1616, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 305, 217, 1758, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1240, 250, 1419, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1000, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1240, -67,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1270, 27, 1575, 103,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1472, -45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1553, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1266, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1251, -7,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1427, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 1551, 24,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1496, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1389, -9,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1258, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1346, -16,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1577, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1673, 40,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1378, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1366, -12, -1364, -18, 1717, 43,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimDownAttackD_joint23[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 706, 119,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 1128, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1153, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 657, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 551, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 783, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 820, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 660, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 631, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 327, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 250, -77,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimDownAttackD_joint25[162] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -683, 108, -1928, 100, -1353, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -360, -137, -1686, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1709, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1803, -64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1821, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -542, -142, -1710, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1915, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -821, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1004, -138,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -741, 30,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1826, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1852, 93,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -722, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -930, -201,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1927, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1505, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1729, 94,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1779, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1195, -246,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1583, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1885, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1883, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1507, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1444, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1598, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1320, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1864, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -1688, 27,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1450, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1472, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1305, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1258, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1249, 8, -1472, 0, -1656, 31,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimDownAttackD_joint26[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -936, -322, 944, -35, -1801, -336,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1411, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1643, -274, -2515, -260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1807, -125, -2658, -106,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -2178, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -2580, 40,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1461, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1157, -71,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2221, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -2252, 86,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2538, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2454, -88,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2150, 44, 1093, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -2061, 138, 1335, 37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2558, -101,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2575, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1886, 168, 1303, -55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1190, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1584, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1620, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), -1358, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1193, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 1316, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2576, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -1968, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1923, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1783, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1337, 20, 1338, 22, -1733, 49,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimDownAttackD_joint28[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 825, 62,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 939, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 892, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 585, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 540, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 946, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 981, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 596, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 545, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 488, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 425, -63,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimDownAttackD_joint29[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -854, 17, -79, 30, 30, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 543, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -637, 28, 70, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -601, 66, 69, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 270, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -505, 208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -183, 282, 573, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 79, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 59, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 50, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 40, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 252, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 16, -64,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -22, -89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -189, 21,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -38, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -351, -79,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -72, -148,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -554, -31,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -415, 11, -166, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -247, 9, -294, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -485, 51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -418, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -237, 10, -302, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -79, 5, -98, 26,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -419, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -425, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -428, -2, -74, 5, -69, 28,
	ftAnimEnd(),
	0x0000, 0x0000,
};
