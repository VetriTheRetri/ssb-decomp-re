/* AnimJoint data for relocData file 412 (FTLinkAnimIntro) */
/* 2576 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimIntro_joint1[30];
extern u16 dFTLinkAnimIntro_joint2[48];
extern u16 dFTLinkAnimIntro_joint4[144];
extern u16 dFTLinkAnimIntro_joint5[114];
extern u16 dFTLinkAnimIntro_joint6[56];
extern u16 dFTLinkAnimIntro_joint7[28];
extern u16 dFTLinkAnimIntro_joint9[42];
extern u16 dFTLinkAnimIntro_joint10[26];
extern u16 dFTLinkAnimIntro_joint11[16];
extern u16 dFTLinkAnimIntro_joint12[8];
extern u16 dFTLinkAnimIntro_joint13[8];
extern u16 dFTLinkAnimIntro_joint16[8];
extern u16 dFTLinkAnimIntro_joint17[38];
extern u16 dFTLinkAnimIntro_joint18[42];
extern u16 dFTLinkAnimIntro_joint20[102];
extern u16 dFTLinkAnimIntro_joint21[162];
extern u16 dFTLinkAnimIntro_joint23[80];
extern u16 dFTLinkAnimIntro_joint25[82];
extern u16 dFTLinkAnimIntro_joint26[94];
extern u16 dFTLinkAnimIntro_joint28[102];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimIntro_joints[] = {
	(u32)dFTLinkAnimIntro_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimIntro_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimIntro_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimIntro_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimIntro_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimIntro_joint7, /* [6] joint 7 */
	(u32)dFTLinkAnimIntro_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimIntro_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimIntro_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimIntro_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimIntro_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimIntro_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimIntro_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimIntro_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimIntro_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimIntro_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimIntro_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimIntro_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimIntro_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimIntro_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	0xFFFF0264, /* [28] END */
};

/* Joint 1 */
u16 dFTLinkAnimIntro_joint1[30] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, -268, 0, 3600,
	ftAnimSetVal0Rate(FT_ANIM_TRAY), -3600,
	ftAnimSetValBlock(FT_ANIM_TRAZ), -6360,
	ftAnimSetValRateT(FT_ANIM_TRAY, 60), -3600, 448,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 60), -6360,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 600, 840,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 46,
	ftAnimSetValRateT(FT_ANIM_TRAY, 85), -1428, -220,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 85), 3846,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimIntro_joint2[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 32, 274, 83,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 60), 32, 0, 274, 0, 83, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -557, -22, -540, -31, 457, 14,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 22), -557, 0, -540, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 22), 457,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 84), -557, -540, 457,
	ftAnimBlock(0, 74),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTLinkAnimIntro_joint4[144] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 315, 166, 56,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 60), 315, 0, 166, 0, 56, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 357, 3, -185, -20, -323, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), -365, 0, -305, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 363, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 363, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 362, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 361, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 360, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 360, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 84), -365, -305,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 360, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 382, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 360, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 382, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 360, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 382, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 360, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 382, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 360, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 382, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 360, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 386, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 356, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 391, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 352, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 396, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 347, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 401, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 360, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 360, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 25), 360,
	ftAnimBlock(0, 15),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimIntro_joint5[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -308, 0, -260, 0, 346, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 59), -308, 0, -260, 0, 346, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -308, 63, -260, -28, 346, -103,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -221, 143,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 331, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 140, -357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -368, -377,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -866, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -30, 187,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 176, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 431, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 438, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 197, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), 153, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -881, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -799, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 437, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 88), 431, 0,
	ftAnimBlock(0, 20),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 153, 0, -799, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 67), 153, 0, -799, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 153, 0, -799, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 431,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTLinkAnimIntro_joint6[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -744, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 59), -744, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -744, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -877, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -738, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -657, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -454, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -308, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -286, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -454, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -454, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 70), -454, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -454, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTLinkAnimIntro_joint7[28] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 278, 266, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 60), 278, 0, 266, 0, 193, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -20, 0, -24, 0, 205, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 108), -20, -24, 205,
	ftAnimBlock(0, 98),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTLinkAnimIntro_joint9[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 1, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 60), 804, 0, 1, 0, 8, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 2412, 79, 0, 0, 126, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 2385, 0, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 2412, 0, 0, 0, 126, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 84), 2412, 0, 126,
	ftAnimBlock(0, 74),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimIntro_joint10[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 488, 0, 60, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), -3053,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 159), 488, 0, 60, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 159), -3053,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 488, 0, 60, 0, -3053, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTLinkAnimIntro_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -616, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 159), -616, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -616, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimIntro_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 160),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimIntro_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 160),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimIntro_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1508, 346, -843,
	ftAnimBlock(0, 160),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimIntro_joint17[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 362, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 60), 0, 0, -163, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 146, 5, 525, 26, 170, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 146, 525, 170,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 84), 146, 525, 170,
	ftAnimBlock(0, 74),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimIntro_joint18[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 78, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 60), 0, 0, -199, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 60), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 25, 2, -15, 19, 0, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 66, 0, 296, 0, -174, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 84), 66, 296, -174,
	ftAnimBlock(0, 74),
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTLinkAnimIntro_joint20[102] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 97,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 347, 22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 75), 97,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 145,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 97,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 136,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 97,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 131,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 97,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 127,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 97,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 126,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 97,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 126,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 97,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 127,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 97,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 127,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 97,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 134,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 97,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 140,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 97,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 143,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 97,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 147,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 97,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 149,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 97,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 151,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 97,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 11), 97,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimIntro_joint21[162] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 30, 0, 139, 0, -782, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 60), -782, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 59), 30, 0, 139, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 30, 18, 139, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 152, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 67, 138, -787, 45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -274, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 307, 204,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 335, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -38, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -260, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -322, -73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -410, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -276, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -393, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 334, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 416, 25,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -404, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -336, -7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 433, 1, -416, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -374, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 422, 19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -338, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 51), -270, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -414, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -419, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 435, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 75), 418, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -429, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 69), -413, 0,
	ftAnimBlock(0, 42),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -271, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 26), -275, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 418, 0, -275, 0, -413, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimIntro_joint23[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1205, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 59), 1205, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1205, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1324, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 928, -458,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 408, -340,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 248, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 134, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 225, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 244, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 326, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 318, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 361, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 373, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 63), 342, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 342, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimIntro_joint25[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 473, 0, -183, 0, 70, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 159), -183, 0, 70, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 59), 473, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 473, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 549, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 338, -262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 23, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 135, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 206, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 216, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 193, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 205, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 184, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 176, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 30), 167, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 167, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 40), 166, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 166, 0, -183, 0, 70, 0,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimIntro_joint26[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 301, 0, 318, 0, -270, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 59), 301, 0, 318, 0, -270, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 301, -8, 318, 21, -270, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 617, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 412, 172, -752, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 617, 122, -715, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 728, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -708, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 617, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 94), 617, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 738, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), 617, 0,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -711, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 76), -715, 0,
	ftAnimBlock(0, 9),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 617,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 66), 617, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 617, 0, -715, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 617,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimIntro_joint28[102] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 845, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 59), 845, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 845, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1193, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1180, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 37), 1180, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 1180,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 57), 1180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1180, 0,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFD79, 0x0000, 0xFFA7, 0x0000, 0x00FC, 0x0000, 0x280D, 0x009F, 0xFFA7, 0x0000, 0x00FC, 0x0000, 0x2003, 0x003B, 0xFD7A, 0x0000, 0x2003, 0x0001, 0xFD79, 0xFFEF, 0x2003, 0x0004, 0xFE06, 0x0058, 0x2003, 0x0001, 0xFE41, 0x003D, 0x2003, 0x000B, 0xFED8, 0xFFDF, 0x2003, 0x0001, 0xFEB5, 0xFFDE, 0x2003, 0x001E, 0xFE06, 0x0000, 0x2003, 0x0001, 0xFE06, 0x0000, 0x2003, 0x0033, 0xFE06, 0x0000, 0x200F, 0x0001, 0xFE06, 0x0000, 0xFFA7, 0x0000, 0x00FC, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
