/* AnimJoint data for relocData file 1156 (FTLinkAnimDamaged) */
/* 1488 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimDamaged_joint1[20];
extern u16 dFTLinkAnimDamaged_joint2[16];
extern u16 dFTLinkAnimDamaged_joint4[20];
extern u16 dFTLinkAnimDamaged_joint5[78];
extern u16 dFTLinkAnimDamaged_joint6[32];
extern u16 dFTLinkAnimDamaged_joint9[8];
extern u16 dFTLinkAnimDamaged_joint10[88];
extern u16 dFTLinkAnimDamaged_joint11[32];
extern u16 dFTLinkAnimDamaged_joint12[8];
extern u16 dFTLinkAnimDamaged_joint13[8];
extern u16 dFTLinkAnimDamaged_joint16[8];
extern u16 dFTLinkAnimDamaged_joint17[8];
extern u16 dFTLinkAnimDamaged_joint18[14];
extern u16 dFTLinkAnimDamaged_joint20[50];
extern u16 dFTLinkAnimDamaged_joint21[62];
extern u16 dFTLinkAnimDamaged_joint23[32];
extern u16 dFTLinkAnimDamaged_joint25[36];
extern u16 dFTLinkAnimDamaged_joint26[76];
extern u16 dFTLinkAnimDamaged_joint28[40];
extern u16 dFTLinkAnimDamaged_joint29[50];

/* Joint pointer table (29 entries, 116 bytes) */
AObjEvent32 * dFTLinkAnimDamaged_joints[] = {
	(AObjEvent32 *)dFTLinkAnimDamaged_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimDamaged_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimDamaged_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTLinkAnimDamaged_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTLinkAnimDamaged_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimDamaged_joint9, /* [6] joint 9 */
	NULL, /* [7] NULL */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTLinkAnimDamaged_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTLinkAnimDamaged_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimDamaged_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimDamaged_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimDamaged_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTLinkAnimDamaged_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTLinkAnimDamaged_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimDamaged_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTLinkAnimDamaged_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTLinkAnimDamaged_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTLinkAnimDamaged_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTLinkAnimDamaged_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTLinkAnimDamaged_joint28, /* [26] joint 28 */
	NULL, /* [27] NULL */
	(AObjEvent32 *)dFTLinkAnimDamaged_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimDamaged_joint1[20] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_TRAZ), 2680, 0,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 901,
	ftAnimSetValT(FT_ANIM_ROTX, 29), -536,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 11), -144,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 18), 0,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimDamaged_joint2[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -65,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -860, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 0, -65,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimDamaged_joint4[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 709, 242, 522,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 759, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 709, 242, 522,
	ftAnimLoop(0x6800, -38),
};

/* Joint 5 */
u16 dFTLinkAnimDamaged_joint5[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -99, -29, -410, 8, -94, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -313, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1015, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 29, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 15, 29,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -348, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -294, -31,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -968, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -126, 37,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 45, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -84, -19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -326, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -402, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -99, 26, -410, -7, -94, -10,
	ftAnimLoop(0x6800, -152),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimDamaged_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -472, -13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -735, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -721, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -601, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -555, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -484, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -472, 11,
	ftAnimLoop(0x6800, -62),
};

/* Joint 9 */
u16 dFTLinkAnimDamaged_joint9[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 445, 0, -209,
	ftAnimBlock(0, 29),
	ftAnimLoop(0x6800, -14),
};

/* Joint 10 */
u16 dFTLinkAnimDamaged_joint10[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1159, -24, 537, -16, 196, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 314, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 200, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 158, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 165, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 52, 29,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 328, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 413, 45,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 171, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1030, 64,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 86, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 184, 19,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 458, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 522, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1091, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1138, 34, 201, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1159, 21, 537, 15, 196, -4,
	ftAnimLoop(0x6800, -172),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimDamaged_joint11[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -553, -12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -678, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -632, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -706, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -737, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -564, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -553, 11,
	ftAnimLoop(0x6800, -62),
};

/* Joint 12 */
u16 dFTLinkAnimDamaged_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 29),
	ftAnimLoop(0x6800, -14),
};

/* Joint 13 */
u16 dFTLinkAnimDamaged_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 29),
	ftAnimLoop(0x6800, -14),
};

/* Joint 16 */
u16 dFTLinkAnimDamaged_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimBlock(0, 29),
	ftAnimLoop(0x6800, -14),
};

/* Joint 17 */
u16 dFTLinkAnimDamaged_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 29),
	ftAnimLoop(0x6800, -14),
};

/* Joint 18 */
u16 dFTLinkAnimDamaged_joint18[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 271,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), -343,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 14), 271,
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimDamaged_joint20[50] = {
	ftAnimSetVal(FT_ANIM_ROTX), 343,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 550,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 343,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 550,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 343,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 550,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 343,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 181,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 30,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 125,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 30,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 125,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 30,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 125,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), 343,
	ftAnimLoop(0x6800, -96),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimDamaged_joint21[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -59, 2, -186, 0, -580, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), -228, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), -131, -16, -10, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -145, -9, 19, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -44, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -575, -9,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -216, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -187, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -51, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -57, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -59, -2, -186, 0, -580, -4,
	ftAnimLoop(0x6800, -120),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimDamaged_joint23[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 929, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 788, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 752, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 955, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 948, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 932, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 929, -2,
	ftAnimLoop(0x6800, -62),
};

/* Joint 25 */
u16 dFTLinkAnimDamaged_joint25[36] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 862, 1, 384, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 349,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), 349, 0, 384, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), 998, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 977, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 864, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 862, -1, 349, 0, 384, 0,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimDamaged_joint26[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 31, -8, 244, 0, 118, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -252, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 65, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -606, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -612, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -309, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -257, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -28, 36,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 64, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 245, -1,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -202, 105,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 103, 30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 24, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 31, 7, 244, 0, 118, 15,
	ftAnimLoop(0x6800, -148),
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimDamaged_joint28[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 789, 14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 908, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 834, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 671, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 738, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 931, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 882, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 802, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 789, -12,
	ftAnimLoop(0x6800, -78),
};

/* Joint 29 */
u16 dFTLinkAnimDamaged_joint29[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1137, 1, -142, 0, 508, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), -142, 0, 508, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -846, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -719, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), -787, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -902, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1136, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1137, 0, -142, 0, 508, 0,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
