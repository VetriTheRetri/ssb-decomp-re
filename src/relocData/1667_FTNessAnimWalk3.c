/* AnimJoint data for relocData file 1667 (FTNessAnimWalk3) */
/* 2976 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimWalk3_joint1[56];
extern u16 dFTNessAnimWalk3_joint2[64];
extern u16 dFTNessAnimWalk3_joint4[58];
extern u16 dFTNessAnimWalk3_joint5[140];
extern u16 dFTNessAnimWalk3_joint7[56];
extern u16 dFTNessAnimWalk3_joint8[58];
extern u16 dFTNessAnimWalk3_joint10[58];
extern u16 dFTNessAnimWalk3_joint11[166];
extern u16 dFTNessAnimWalk3_joint12[64];
extern u16 dFTNessAnimWalk3_joint13[8];
extern u16 dFTNessAnimWalk3_joint15[12];
extern u16 dFTNessAnimWalk3_joint16[120];
extern u16 dFTNessAnimWalk3_joint18[78];
extern u16 dFTNessAnimWalk3_joint19[136];
extern u16 dFTNessAnimWalk3_joint21[20];
extern u16 dFTNessAnimWalk3_joint22[102];
extern u16 dFTNessAnimWalk3_joint24[56];
extern u16 dFTNessAnimWalk3_joint25[148];
extern u16 dFTNessAnimWalk3_joint26[36];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTNessAnimWalk3_joints[] = {
	(AObjEvent32 *)dFTNessAnimWalk3_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimWalk3_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimWalk3_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTNessAnimWalk3_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTNessAnimWalk3_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTNessAnimWalk3_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNessAnimWalk3_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTNessAnimWalk3_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTNessAnimWalk3_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimWalk3_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimWalk3_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTNessAnimWalk3_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTNessAnimWalk3_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTNessAnimWalk3_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTNessAnimWalk3_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTNessAnimWalk3_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTNessAnimWalk3_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTNessAnimWalk3_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTNessAnimWalk3_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimWalk3_joint1[56] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 636, -1, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 10), -9, -4,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 29), -24,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 508,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 10), 636,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), -8, 9,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), 2, 2,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 10), 508,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 9), -4, -7,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), -8, 2,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 11), 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY, 10), 636, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 9), 0, 0,
	ftAnimLoop(0x6800, -110),
};

/* Joint 2 */
u16 dFTNessAnimWalk3_joint2[64] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -72, 8, 17, -2,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -222,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 67, 11, 5, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -271,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 93, -3, -14, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), -279,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 37, -9, 49, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -233,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -54, -11, 26, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 9), -229,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -85, -1, 50, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -241,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -72, 8, 17, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 9), -222,
	ftAnimLoop(0x6800, -124),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimWalk3_joint4[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 339, 2, 135, -11, 75, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 411, 7, -87, -22, -108, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 433, -5, -158, -4, -161, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 358, -4, -135, 10, -174, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 360, 1, 5, 19, -30, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 378, -1, 83, 11, 3, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 339, 1, 135, -9, 75, -6,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimWalk3_joint5[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -349, -20, -151, 7, 635, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), -338, 13, -167, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 344, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 280, -61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -23, -94,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -311, 28, -190, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1, 67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -355, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -126, -106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -510, 46,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 64, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 5, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -350, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -294, 33,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -442, 81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 133, 61,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -65, -70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -356, -30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -258, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -142, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 187, 46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 389, 67,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -389, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -373, 20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 453, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 622, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -349, 24, -151, -9, 635, 13,
	ftAnimLoop(0x6800, -276),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimWalk3_joint7[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -500, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -686, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -689, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -638, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -569, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -436, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -496, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -738, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -730, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -596, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -553, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -495, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, -5,
	ftAnimLoop(0x6800, -110),
};

/* Joint 8 */
u16 dFTNessAnimWalk3_joint8[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 187, 0, -68, 0, -32, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 173, 0, -68, 0, -24, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 196, 3, -69, 0, -29, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 204, -1, -69, 0, -54, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 166, -2, -68, 0, -43, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 172, 1, -68, 0, -48, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 187, 0, -68, 0, -32, 1,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNessAnimWalk3_joint10[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -181, 2, 4, 3, 39, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -159, 0, 106, 11, 35, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -187, -5, 155, 5, 26, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -210, 0, 167, -4, 25, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -198, 0, 80, -10, 37, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -200, 1, 49, -6, 44, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -181, 2, 4, 3, 39, 0,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimWalk3_joint11[166] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -151, -43, 355, 2, -538, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -86, 74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 384, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -417, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -294, 129,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 239, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -5, 78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 308, 36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 353, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 130, -21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 288, 48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 567, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 345, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 523, 50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 112, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 204, 25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 558, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 468, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 576, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 506, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 469, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 226, -14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 423, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -148, -125,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 229, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 348, 29,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 208, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -154, -35,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 373, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 356, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -276, -124,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -543, -24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -173, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -151, 21, 355, -1, -538, 4,
	ftAnimLoop(0x6800, -328),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimWalk3_joint12[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -411, 27,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -423, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -499, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -726, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -711, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -577, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -540, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -614, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -646, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -711, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -727, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -516, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -441, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -396, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -411, -14,
	ftAnimLoop(0x6800, -126),
};

/* Joint 13 */
u16 dFTNessAnimWalk3_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 446, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimLoop(0x6800, -14),
};

/* Joint 15 */
u16 dFTNessAnimWalk3_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 40),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimWalk3_joint16[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -209, 7, -48, 9, -68, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), -93, -7, -67, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 44, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 54, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 406, 84,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -106, -20, -76, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 31, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -269, 7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 497, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 526, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 35, -33, 538, -54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -76, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 418, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -255, 16, 340, -75,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -170, -15, -106, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -106, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -102, 7,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -186, -11, -134, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -209, 0, -92, 25,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -94, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -58, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -209, 0, -48, 10, -68, 24,
	ftAnimLoop(0x6800, -236),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimWalk3_joint18[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 248, -29,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 310, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 358, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 341, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 266, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 151, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -75,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 279, 225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 711, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 809, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 888, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 805, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 428, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 358, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 294, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 248, -46,
	ftAnimLoop(0x6800, -154),
};

/* Joint 19 */
u16 dFTNessAnimWalk3_joint19[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 18, 5, -2, 8, 24, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 74, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 149, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 15, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 13, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -87, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -150, -63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -341, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 54, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -52, 6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -339, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -94, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 166, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 270, -23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -45, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 73, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 26, 60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 26, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 72, 53, 248, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 6, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 111, 34, 25, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 24, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 234, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 254, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 67, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 42, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 27, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 18, -9, -2, -8, 24, 0,
	ftAnimLoop(0x6800, -268),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimWalk3_joint21[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 10, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 240, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 399, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), 10,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimWalk3_joint22[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 22, 4, 44, 0, 422, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 60, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 63, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -35, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -93, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -179, 7,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 56, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 50, -7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -170, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -31, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 66, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 26, -11,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 43, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 48, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -17, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 369, 43,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 22, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 25, -1,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 22, -2, 44, -3, 422, 15,
	ftAnimLoop(0x6800, -200),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimWalk3_joint24[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 206, 80,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 941, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 982, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 849, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 755, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 367, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 344, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 432, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 459, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 289, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 238, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 203, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 206, 3,
	ftAnimLoop(0x6800, -110),
};

/* Joint 25 */
u16 dFTNessAnimWalk3_joint25[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -81, -7, -27, 3, -90, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -126, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -2, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -89, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -86, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -58, 32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -98, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 24, 31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -37, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, 0, 55, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -63, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 9, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -37, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -13, -29,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -93, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -179, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -43, -20, -206, -87,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -62, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -353, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 25, 19, -339, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 56, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -107, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -77, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -44, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 36, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -17, -9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -63, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -81, -17, -27, -9, -90, 17,
	ftAnimLoop(0x6800, -292),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimWalk3_joint26[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 419, 0, -3, 0, 108, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 183, -18, -26, 0, 24, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 59, 8, -22, 0, 38, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 419, -3, 108,
	ftAnimLoop(0x6800, -58),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
