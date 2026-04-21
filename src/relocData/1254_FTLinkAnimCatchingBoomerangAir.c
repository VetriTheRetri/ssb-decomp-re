/* AnimJoint data for relocData file 1254 (FTLinkAnimCatchingBoomerangAir) */
/* 1728 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimCatchingBoomerangAir_joint1[32];
extern u16 dFTLinkAnimCatchingBoomerangAir_joint2[38];
extern u16 dFTLinkAnimCatchingBoomerangAir_joint4[46];
extern u16 dFTLinkAnimCatchingBoomerangAir_joint5[128];
extern u16 dFTLinkAnimCatchingBoomerangAir_joint6[56];
extern u16 dFTLinkAnimCatchingBoomerangAir_joint7[66];
extern u16 dFTLinkAnimCatchingBoomerangAir_joint9[32];
extern u16 dFTLinkAnimCatchingBoomerangAir_joint10[26];
extern u16 dFTLinkAnimCatchingBoomerangAir_joint11[16];
extern u16 dFTLinkAnimCatchingBoomerangAir_joint12[8];
extern u16 dFTLinkAnimCatchingBoomerangAir_joint13[8];
extern u16 dFTLinkAnimCatchingBoomerangAir_joint16[8];
extern u16 dFTLinkAnimCatchingBoomerangAir_joint17[26];
extern u16 dFTLinkAnimCatchingBoomerangAir_joint18[26];
extern u16 dFTLinkAnimCatchingBoomerangAir_joint20[8];
extern u16 dFTLinkAnimCatchingBoomerangAir_joint21[62];
extern u16 dFTLinkAnimCatchingBoomerangAir_joint23[32];
extern u16 dFTLinkAnimCatchingBoomerangAir_joint25[44];
extern u16 dFTLinkAnimCatchingBoomerangAir_joint26[78];
extern u16 dFTLinkAnimCatchingBoomerangAir_joint28[24];
extern u16 dFTLinkAnimCatchingBoomerangAir_joint29[42];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimCatchingBoomerangAir_joints[] = {
	(u32)dFTLinkAnimCatchingBoomerangAir_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimCatchingBoomerangAir_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimCatchingBoomerangAir_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimCatchingBoomerangAir_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimCatchingBoomerangAir_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimCatchingBoomerangAir_joint7, /* [6] joint 7 */
	(u32)dFTLinkAnimCatchingBoomerangAir_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimCatchingBoomerangAir_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimCatchingBoomerangAir_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimCatchingBoomerangAir_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimCatchingBoomerangAir_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimCatchingBoomerangAir_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimCatchingBoomerangAir_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimCatchingBoomerangAir_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimCatchingBoomerangAir_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimCatchingBoomerangAir_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimCatchingBoomerangAir_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimCatchingBoomerangAir_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimCatchingBoomerangAir_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimCatchingBoomerangAir_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	(u32)dFTLinkAnimCatchingBoomerangAir_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimCatchingBoomerangAir_joint1[32] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 744, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 37, 42, 818, -94, 42, 49,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 37, 0, 818, 34, 42, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), -15, -18,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 0, 744, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimCatchingBoomerangAir_joint2[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 32, 274, 83,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 30, 19, -297, -82, -9, -1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 30, 0, -297, 0, -9, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -7, 30, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 32, 274, 83,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimCatchingBoomerangAir_joint4[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 315, 166, 56,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 373, 16, -248, -59, -197, -36,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 373, 0, -248, 0, -197, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -18, 57, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 171, -4, 384, 31, 47, 19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 315, 166, 56,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimCatchingBoomerangAir_joint5[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -308, 358, -260, -630, 346, -1155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 50, 168, -891, -303, -809, -586,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 28, -5, -867, 9, -825, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 50, -6, -891, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -798, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -809, -124,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1258, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 64, -105, -782, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -161, -137, -470, 247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -210, -25, -286, 149, -1360, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 8, 161,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -23, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1095, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -859, 126,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -843, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 153, 81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 56, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 16, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -281, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -643, 264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -314, 387,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -198, -179, 132, 320,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -303, -54, -252, 10, 327, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -308, -4, -260, -8, 346, 19,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimCatchingBoomerangAir_joint6[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -744, 205,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -538, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -538, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -617, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -700, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -886, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1000, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -618, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -428, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -967, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1036, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -867, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -744, 123,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTLinkAnimCatchingBoomerangAir_joint7[66] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 278, 266, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -417, -99, 216, -7, -152, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -417, -156, 216, -264, -152, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1987, -166, -2423, -246, 958, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1747, 50, -1751, 164, 1698, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1732, 723, -1600, 807, 1817, -759,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -300, 755, -137, 839, 180, -928,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -222, 192, 78, 134, -39, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 278, 266, 193,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTLinkAnimCatchingBoomerangAir_joint9[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 804, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1608, 114, 804, 114,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 1608, 804,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 1608, -160, 804, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 804, -89, 1, -89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 804, 1,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimCatchingBoomerangAir_joint10[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 488, 0, 60, 0, 163, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 60, 0, 163, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 19), 488,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 488, 0, 60, 0, 163, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTLinkAnimCatchingBoomerangAir_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -616, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -616, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -616, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimCatchingBoomerangAir_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimCatchingBoomerangAir_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1114, -804, 494,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimCatchingBoomerangAir_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1508, 346, -843,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimCatchingBoomerangAir_joint17[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -165, -23, 465, 89, -63, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -165, 8, 465, -33, -63, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 0, -163, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimCatchingBoomerangAir_joint18[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, 0, 8, 29, -151, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 5, 0, 8, -10, -151, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 0, -199, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimCatchingBoomerangAir_joint20[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 97, 0, 0,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimCatchingBoomerangAir_joint21[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1639, -205, -1748, 604, 825, 152,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 972, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1434, -99, -1144, 302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1440, 12, -1144, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), 1678, -6, -1564, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 955, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 816, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1670, -9, -1624, -55, 822, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1642, -5, -1739, -16, 825, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1639, -2, -1748, -8, 825, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimCatchingBoomerangAir_joint23[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1205, -663,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 542, -327,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 551, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 1183, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1195, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1203, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1205, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimCatchingBoomerangAir_joint25[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1135, 223, -1425, 0, -1538, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 19), -1538,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -1425, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -911, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -913, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -1207, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1225, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1146, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1135, 11, -1425, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -1538,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimCatchingBoomerangAir_joint26[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1910, -392, 1289, 275, 1338, -547,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1890, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1517, -262, 790, -244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1384, -108, 849, 60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 971, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1736, 49,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1877, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1333, -25,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 990, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1332, 10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1782, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1906, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1313, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 1290, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1910, 3, 1289, 0, 1338, 5,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimCatchingBoomerangAir_joint28[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 845, 145,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 999, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 999, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 848, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 845, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimCatchingBoomerangAir_joint29[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -647, 161, -89, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 252,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -89, 0, 252, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -62, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -47, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -766, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -802, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -659, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -647, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -89, 252,
	ftAnimEnd(),
};
