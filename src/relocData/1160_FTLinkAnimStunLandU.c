/* AnimJoint data for relocData file 1160 (FTLinkAnimStunLandU) */
/* 2144 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimStunLandU_joint1[38];
extern u16 dFTLinkAnimStunLandU_joint2[14];
extern u16 dFTLinkAnimStunLandU_joint4[28];
extern u16 dFTLinkAnimStunLandU_joint5[142];
extern u16 dFTLinkAnimStunLandU_joint6[56];
extern u16 dFTLinkAnimStunLandU_joint9[20];
extern u16 dFTLinkAnimStunLandU_joint10[134];
extern u16 dFTLinkAnimStunLandU_joint11[60];
extern u16 dFTLinkAnimStunLandU_joint12[26];
extern u16 dFTLinkAnimStunLandU_joint13[8];
extern u16 dFTLinkAnimStunLandU_joint16[16];
extern u16 dFTLinkAnimStunLandU_joint17[40];
extern u16 dFTLinkAnimStunLandU_joint18[8];
extern u16 dFTLinkAnimStunLandU_joint20[28];
extern u16 dFTLinkAnimStunLandU_joint21[82];
extern u16 dFTLinkAnimStunLandU_joint23[48];
extern u16 dFTLinkAnimStunLandU_joint25[74];
extern u16 dFTLinkAnimStunLandU_joint26[78];
extern u16 dFTLinkAnimStunLandU_joint28[40];
extern u16 dFTLinkAnimStunLandU_joint29[72];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimStunLandU_joints[] = {
	(u32)dFTLinkAnimStunLandU_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimStunLandU_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimStunLandU_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimStunLandU_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimStunLandU_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimStunLandU_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimStunLandU_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimStunLandU_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimStunLandU_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimStunLandU_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimStunLandU_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimStunLandU_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimStunLandU_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimStunLandU_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimStunLandU_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimStunLandU_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimStunLandU_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimStunLandU_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimStunLandU_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	(u32)dFTLinkAnimStunLandU_joint29, /* [28] joint 29 */
};

/* 4-byte alignment padding */
static u32 dFTLinkAnimStunLandU_pad[1] = { 0 };

/* Joint 1 */
u16 dFTLinkAnimStunLandU_joint1[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY), -668, 65, 272, 2597,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 10), 1800, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -507, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1295, -75,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 216, -2935,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_TRAY), 347, 342,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 6), -807, -29, 152, -651,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimStunLandU_joint2[14] = {
	ftAnimSetVal(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -138, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTLinkAnimStunLandU_joint4[28] = {
	ftAnimSetValAfter(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 130, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 89, -71,
	ftAnimSetValBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValT(FT_ANIM_ROTY, 26), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 145, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 804, -46,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 350, 36,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimStunLandU_joint5[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -365, -15, -508, 39, 556, 57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -335, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -116, 65, 678, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -57, 42, 656, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -277, -174,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 791, -111,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -315, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -112, -145,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -480, -174,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -296, 341,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 640, -136,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 63, -383,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -320, -198,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -515, 57,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 114, 318, -389, -365,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 339, 160, -395, 151, -668, -231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 435, -234, -212, -24, -851, 324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -128, -382, -443, -19, -19, 660,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -329, 10, -252, 62, 468, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -107, 164, -317, -47, 375, -84,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -398, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 0, 60, 299, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 13, 37, 324, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 74, 60, -472, -73, 284, -39,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimStunLandU_joint6[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -679, -4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -359, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -296, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1152, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1187, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -681, 302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -320, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -970, -256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -832, 311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -346, 285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -261, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -426, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -527, -101,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimStunLandU_joint9[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, -19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), -459, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -467, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -97, 66,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimStunLandU_joint10[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 99, 68, 391, -19, 248, 108,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 329, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 210, -49, 535, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 149, -25, 449, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 701, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 651, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 324, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 122, 157,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 652, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 75, -426,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 574, -187, 343, 211,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 522, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 276, -375,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -177, -321, -430, -380,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -365, -122, 374, -179, -685, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -421, 283, 162, 39, -872, 318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 201, 508, 453, 6, -49, 603,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 596, 236, 176, -96, 335, 179,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 252, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 662, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 261, 124,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 454, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 234, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 666, 4, 442, -12, 227, -7,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimStunLandU_joint11[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -660, -32,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -209, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -641, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -840, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1120, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -938, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -679, 343,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -252, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -967, -301,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -854, 273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -127, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -179, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -330, -150,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimStunLandU_joint12[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 29, 0, -4, 0, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), -179, -15, 0, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 17), 471, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 371, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -399, -159,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTLinkAnimStunLandU_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimStunLandU_joint16[16] = {
	ftAnimSetValRate(FT_ANIM_ROTY), -536, 20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 1697, -339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 17), -188, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), -536, -47,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimStunLandU_joint17[40] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -470, -21,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 18), 2,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 19), 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 17), -54, 140,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -81, -190,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -494, -83,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 377, 63,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -899, -96,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimStunLandU_joint18[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTLinkAnimStunLandU_joint20[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -61, 93,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 150, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -184, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -243, -2, 115, 19, -78, -13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimStunLandU_joint21[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -374, 38, -226, -1, -35, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -126, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -237, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 165, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 131, -52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -176, -8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -112, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -290, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -237, 1, -174, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -323, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 83, 46,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -300, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -558, -90,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -345, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -333, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -632, -73, -299, 33, 129, 46,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimStunLandU_joint23[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 501, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 354, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 341, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 549, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 525, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 368, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 286, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 482, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 507, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 377, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 291, -85,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimStunLandU_joint25[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 799, 2, 390, -17, 62, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 688, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 136, 12, 478, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 150, 15, 467, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 449, 66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 181, -20,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 697, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 948, -60,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 510, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 613, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 165, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 157, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 844, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 681, -163, 163, 6, 625, 11,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimStunLandU_joint26[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 220, -21, 316, -8, -239, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 165, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 164, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 20, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -25, -42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -206, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 171, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 160, -62,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 162, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 198, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -258, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -226, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 98, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 107, 20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -283, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 142, 34, 208, 9, -351, -68,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimStunLandU_joint28[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 656, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 483, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 472, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 439, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 388, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 498, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 698, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 837, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 775, -61,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimStunLandU_joint29[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -676, -35, -253, 15, 49, 81,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -114, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -827, 19, 440, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -808, 17, 432, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), -691, -11, 300, -17,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -115, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -25, 13,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -711, 14, 276, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -581, 75, 83, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -22, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -26, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -510, 70, -31, -5, -13, -96,
	ftAnimEnd(),
	0x0000, 0x0000,
};
