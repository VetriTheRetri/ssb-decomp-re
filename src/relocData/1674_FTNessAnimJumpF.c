/* AnimJoint data for relocData file 1674 (FTNessAnimJumpF) */
/* 1472 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimJumpF_joint1[24];
extern u16 dFTNessAnimJumpF_joint2[18];
extern u16 dFTNessAnimJumpF_joint4[16];
extern u16 dFTNessAnimJumpF_joint5[90];
extern u16 dFTNessAnimJumpF_joint6[30];
extern u16 dFTNessAnimJumpF_joint7[22];
extern u16 dFTNessAnimJumpF_joint8[22];
extern u16 dFTNessAnimJumpF_joint10[10];
extern u16 dFTNessAnimJumpF_joint11[96];
extern u16 dFTNessAnimJumpF_joint12[38];
extern u16 dFTNessAnimJumpF_joint13[20];
extern u16 dFTNessAnimJumpF_joint15[10];
extern u16 dFTNessAnimJumpF_joint16[48];
extern u16 dFTNessAnimJumpF_joint18[22];
extern u16 dFTNessAnimJumpF_joint19[46];
extern u16 dFTNessAnimJumpF_joint21[24];
extern u16 dFTNessAnimJumpF_joint22[46];
extern u16 dFTNessAnimJumpF_joint24[14];
extern u16 dFTNessAnimJumpF_joint25[62];
extern u16 dFTNessAnimJumpF_joint26[26];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTNessAnimJumpF_joints[] = {
	(AObjEvent32 *)dFTNessAnimJumpF_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimJumpF_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimJumpF_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTNessAnimJumpF_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTNessAnimJumpF_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimJumpF_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNessAnimJumpF_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNessAnimJumpF_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTNessAnimJumpF_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTNessAnimJumpF_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimJumpF_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimJumpF_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTNessAnimJumpF_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTNessAnimJumpF_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTNessAnimJumpF_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTNessAnimJumpF_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTNessAnimJumpF_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTNessAnimJumpF_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTNessAnimJumpF_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTNessAnimJumpF_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimJumpF_joint1[24] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -16, 242, -26,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX, 40), -16, 2,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 60), 242,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 40), -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 20), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimJumpF_joint2[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 28, 0, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 171, 0, 0, -3, 8, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, -209, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimJumpF_joint4[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 40), 0, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), 148,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimJumpF_joint5[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2521, 0, -1478, 0, -2857, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 46), 2566, 12, -2885, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 45), -1428, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1415, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1296, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2580, 15, -2895, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2849, 235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2950, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1247, 113, -2985, -128,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1008, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -3990, -136,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3138, 280,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 3736, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1024, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1223, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4086, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -4185, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3740, 3, -1229, -5, -4189, -4,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimJumpF_joint6[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 50), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -357, -261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -532, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -677, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -673, 4,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimJumpF_joint7[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 0, 0, 0, 0, 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 0, 268,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimJumpF_joint8[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -435, 5, -18,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), -190, 9, 5, 0, -18, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 138, 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNessAnimJumpF_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimJumpF_joint11[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1117, 1, 265, -3, -1312, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 46), -1343, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 48), -1143, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 43), 278, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 291, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 540, 53,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1350, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1459, -36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1151, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1221, -76,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1500, -98,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2159, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1347, -196,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1792, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 579, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 499, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1899, -84, -2283, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1992, -20, -2395, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2001, -9, 492, -6, -2408, -12,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimJumpF_joint12[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 26), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 25), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -461, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -522, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -578, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -584, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimJumpF_joint13[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 90, 54, 126,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 90, 54, 126,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -104, 44, 566,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTNessAnimJumpF_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimJumpF_joint16[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -450, 0, 4, 2, -53, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 44), -433, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 7, -2, -50, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1, -7, -63, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -334, -1, -620, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -422, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), -98, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -95, 2, -335, 0, -623, -2,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimJumpF_joint18[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 33), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimJumpF_joint19[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1943, -3, 1480, 0, 2089, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 42), 2230, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 59), 1660, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 36), 1833, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1829, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 1629, -1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2215, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 1805, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1629, 0, 1659, 0, 1802, -2,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimJumpF_joint21[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), -66, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), -66, 0, 0, 2, 0, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -384, 178, 112,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimJumpF_joint22[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -55, 0, 42, 0, -2, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 42), -49, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 41), 44, 3, -10, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 50, 7, -23, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 322, 2, -617, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -42, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), 173, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 175, 1, 323, 0, -621, -3,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimJumpF_joint24[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 59), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimJumpF_joint25[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 46, 0, 178, 0, 441, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 41), 628, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 54), 44, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 40), 152, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 139, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -98, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 618, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 228, -4,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -91, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -67, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 34, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 11, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -66, 0, 10, -1, 226, -2,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimJumpF_joint26[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -40, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 56, -3, 0, -1, 0, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -392, -96, -76,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
