/* AnimJoint data for relocData file 1239 (FTLinkAnimAttackAirU) */
/* 2656 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimAttackAirU_joint1[18];
extern u16 dFTLinkAnimAttackAirU_joint2[30];
extern u16 dFTLinkAnimAttackAirU_joint4[38];
extern u16 dFTLinkAnimAttackAirU_joint5[158];
extern u16 dFTLinkAnimAttackAirU_joint6[72];
extern u16 dFTLinkAnimAttackAirU_joint7[54];
extern u16 dFTLinkAnimAttackAirU_joint9[26];
extern u16 dFTLinkAnimAttackAirU_joint10[108];
extern u16 dFTLinkAnimAttackAirU_joint11[68];
extern u16 dFTLinkAnimAttackAirU_joint12[34];
extern u16 dFTLinkAnimAttackAirU_joint13[8];
extern u16 dFTLinkAnimAttackAirU_joint16[42];
extern u16 dFTLinkAnimAttackAirU_joint17[52];
extern u16 dFTLinkAnimAttackAirU_joint18[52];
extern u16 dFTLinkAnimAttackAirU_joint20[60];
extern u16 dFTLinkAnimAttackAirU_joint21[78];
extern u16 dFTLinkAnimAttackAirU_joint23[48];
extern u16 dFTLinkAnimAttackAirU_joint25[104];
extern u16 dFTLinkAnimAttackAirU_joint26[120];
extern u16 dFTLinkAnimAttackAirU_joint28[40];
extern u16 dFTLinkAnimAttackAirU_joint29[60];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimAttackAirU_joints[] = {
	(u32)dFTLinkAnimAttackAirU_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimAttackAirU_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimAttackAirU_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimAttackAirU_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimAttackAirU_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimAttackAirU_joint7, /* [6] joint 7 */
	(u32)dFTLinkAnimAttackAirU_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimAttackAirU_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimAttackAirU_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimAttackAirU_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimAttackAirU_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimAttackAirU_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimAttackAirU_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimAttackAirU_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimAttackAirU_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimAttackAirU_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimAttackAirU_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimAttackAirU_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimAttackAirU_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimAttackAirU_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	(u32)dFTLinkAnimAttackAirU_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimAttackAirU_joint1[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 744, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 50), 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -45,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 20), -3216,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimAttackAirU_joint2[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 274, 83,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 32, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 274, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 274, 4, 83, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 45), 274, 83,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 274, 83,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimAttackAirU_joint4[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 315, 166, 56,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 791, -95, 349, -118, 36, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -163, -19, -424, -15, -61, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 45), -163, 7, -424, 9, -61, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 315, 166, 56,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimAttackAirU_joint5[158] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1300, 0, -1347, 0, -1261, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1405, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1300, 109, -1261, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1518, 202, -1520, -332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1704, 120, -1652, -93, -1926, -159,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1566, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1759, 163, -1839, -369,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2032, 135, -2664, -411,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2029, -2, -1567, -1, -2663, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 43), 2033, -1, -1565, 0, -2665, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2032, 96, -1566, 85, -2664, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -725, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2305, -12, -2740, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2200, 120, -2612, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2546, 128, -2942, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2456, -64, -655, 101, -2836, 81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2698, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 2775, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -177, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -222, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -168, -27,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2693, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2855, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2804, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2900, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -199, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -252, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2908, 8, -260, -8, -2870, -14,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimAttackAirU_joint6[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -744, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -744, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1016, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -807, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -962, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -498, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -498, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 43), -498, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -498, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -841, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -719, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -596, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -623, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -175, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -295, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -745, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -744, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTLinkAnimAttackAirU_joint7[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 278, 266, 193,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 250, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 278, -108, 266, 40, 193, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -46, -158, 389, 121, 99, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -196, -536, 632, 39, 110, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1120, -20, 468, -3, -179, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 45), -1120, 21, 468, -3, -179, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 278, 266, 193,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTLinkAnimAttackAirU_joint9[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 1, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 809, 0, 810, 16, 8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 45), 809, 0, 810, -12, 8, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 804, 1, 8,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimAttackAirU_joint10[108] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 60, 0, 163, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 488,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 173, -325, 172, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 157, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 139, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -259, -376, 265, -82, -141, -497,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -579, -160, 7, -128, -856, -357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -580, 0, 8, 0, -857, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 43), -579, 0, 8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -857, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 42), -856, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -579, 12, 7, 9, -856, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -553, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 483, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 199, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 190, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 61, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -569, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 129, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 155, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 488, 5, 60, -1, 163, 8,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimAttackAirU_joint11[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -616, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -771, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -896, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -954, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -756, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -757, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -757, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 40), -756, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -756, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -576, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -463, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -352, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -450, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -658, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -629, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -616, 12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimAttackAirU_joint12[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 200, -209, 2, 0, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1004, 20, -197, 0, -81, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 45), 1004, -15, -197, 0, -81, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, -209, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTLinkAnimAttackAirU_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 70),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimAttackAirU_joint16[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1508, 346, -843,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1508, 4, 346, -80, -843, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1529, 0, -57, -9, -771, 1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 45), 1529, 0, -57, 0, -771, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 6, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 1508, 346, -843,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimAttackAirU_joint17[52] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -183, -92, -162, 37, 29, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -277, 23, -52, 54, 10, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -112, 3, 0, 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 45), -112, 1, 0, -4, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), -56, 5, -231, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -163, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimAttackAirU_joint18[52] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -415, -125, -337, 28, 54, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -377, 111, -114, 112, 20, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -81, 6, 0, 2, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 45), -81, 1, 0, -5, 0, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 0, 4, -295, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), -81,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -199, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTLinkAnimAttackAirU_joint20[60] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 97, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 45), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 271, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -125, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 77,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -125,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 77,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -125,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 77,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -125,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -125, 4, 0, 30, 0, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 168, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 604, 156,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 97, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimAttackAirU_joint21[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1577, 32, -1748, -113, 825, -136,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1556, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1862, 29, 688, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1690, 91, 960, 271,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1649, 7, 1609, 74,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1544, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 45), -1537, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1649, 0, 1609, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 63), -1745, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 43), 1610, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1609, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 831, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1539, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 18), -1578, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1577, 0, -1748, -2, 825, -6,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimAttackAirU_joint23[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1205, 57,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1138, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 881, -291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 300, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 299, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 43), 299, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 300, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 925, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 978, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1202, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1205, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimAttackAirU_joint25[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 473, -245, -183, 0, 70, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 120, 5, 253, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 227, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 776, 323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 826, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 759, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 773, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 125, 4, 257, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 45), 100, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 58), 95, -9,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 774, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 36), 755, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 767, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 624, -57,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 88, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -181, -3,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 87, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 71, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 567, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 485, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 473, -11, -183, -1, 70, -1,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimAttackAirU_joint26[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 301, 34, 318, -67, -270, 122,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 332, 72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 70, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -147, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -293, -202,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -958, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 396, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 297, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -146, -156,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -243, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -958, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 44), -958, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 297, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 42), 297, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -243, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 41), -242, 6,
	ftAnimBlock(0, 40),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 298, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 365, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -229, 16, -950, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -282, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 299, 3,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 353, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 320, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -273, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 301, 1, 318, -1, -270, 3,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimAttackAirU_joint28[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 845, -187,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 658, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 841, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1180, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1180, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 46), 1167, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1159, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 848, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 845, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimAttackAirU_joint29[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -647, 179, -89, 0, 252, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 69), -89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 69), 252, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -467, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -667, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -595, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -594, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 42), -595, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -596, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), -694, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -676, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -650, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -647, 3, -89, 0, 252, 0,
	ftAnimEnd(),
	0x0000,
};
