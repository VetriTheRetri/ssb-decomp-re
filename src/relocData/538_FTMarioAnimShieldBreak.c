/* AnimJoint data for relocData file 538 (FTMarioAnimShieldBreak) */
/* 3056 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimShieldBreak_joint1[94];
extern u16 dFTMarioAnimShieldBreak_joint2[22];
extern u16 dFTMarioAnimShieldBreak_joint4[34];
extern u16 dFTMarioAnimShieldBreak_joint5[166];
extern u16 dFTMarioAnimShieldBreak_joint6[40];
extern u16 dFTMarioAnimShieldBreak_joint7[10];
extern u16 dFTMarioAnimShieldBreak_joint8[38];
extern u16 dFTMarioAnimShieldBreak_joint10[10];
extern u16 dFTMarioAnimShieldBreak_joint11[224];
extern u16 dFTMarioAnimShieldBreak_joint12[102];
extern u16 dFTMarioAnimShieldBreak_joint13[54];
extern u16 dFTMarioAnimShieldBreak_joint15[20];
extern u16 dFTMarioAnimShieldBreak_joint16[172];
extern u16 dFTMarioAnimShieldBreak_joint18[62];
extern u16 dFTMarioAnimShieldBreak_joint20[126];
extern u16 dFTMarioAnimShieldBreak_joint21[116];
extern u16 dFTMarioAnimShieldBreak_joint23[64];
extern u16 dFTMarioAnimShieldBreak_joint24[126];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimShieldBreak_joints[] = {
	(u32)dFTMarioAnimShieldBreak_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimShieldBreak_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimShieldBreak_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimShieldBreak_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimShieldBreak_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimShieldBreak_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimShieldBreak_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimShieldBreak_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimShieldBreak_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimShieldBreak_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimShieldBreak_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimShieldBreak_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimShieldBreak_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimShieldBreak_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimShieldBreak_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimShieldBreak_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimShieldBreak_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTMarioAnimShieldBreak_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimShieldBreak_joint1[94] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, -230, 0, 117,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 573, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), -3568, -117, 0, 0, 2188, 53,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -93, -170, 392, -67, 176, 4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -170, 61, 506, 125, 4, -288,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -16, 132, 549, 216, -184, 45,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 28, 117, 830, -164, 72, 137,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 190, 104, 261, -236, 55, -92,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 32), -7238, -6, 3197,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 223, -63, 386, 61, -100, -93,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 87, -117, 360, -27, -96, 78,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), -26, -34, 328, 0, 65, 63,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 5, 360, 54,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimShieldBreak_joint2[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValRate(FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 38), -45, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 38), -911,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 22), 0, -66,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimShieldBreak_joint4[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 268, -268, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 517, -15, -567, 9, -307, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -174, 3, 0, 8, 0, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 637, -5, -278, -6, -106, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -356, -221, 75,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimShieldBreak_joint5[166] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1596, -24, -1215, 18, -1622, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -865, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1881, -48, -1414, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1889, 194, -1455, -246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1491, 131, -1907, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1625, -133, -1800, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1758, -131, -1696, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1888, -381, -1594, 353,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2521, -566, -989, 539,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3020, -333, -515, 309,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -3294, -66, -283, 48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -895, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -1127, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3322, -38, -272, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -3372, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -267, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -298, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1140, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3349, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -2904, -84,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1098, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1240, -14,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3029, -186, -1159, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -854, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -3804, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3926, -98,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -4328, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1250, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1428, -8,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4348, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -4384, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4385, -1, -1435, -6, -856, -1,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimShieldBreak_joint6[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -813, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -383, 298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -21, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTMarioAnimShieldBreak_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimShieldBreak_joint8[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -34, 341, 153,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -235, -13, 1, -12, 0, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -409, 20, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 518, 11, -31, 10, -9, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -34, 341, 153,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimShieldBreak_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -221, 139, -209, 0, 54, -18,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimShieldBreak_joint11[224] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2534, 0, -12, 44, -509, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 2744, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 409, -24, -444, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 326, -9, -512, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 464, 32, -494, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2822, 176, 498, 54, -495, 90,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 492, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 3484, 308, -57, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3714, 186, 2, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 4405, 256, 210, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 454, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 550, -75,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4704, 257, 499, 257,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1011, 112,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 4905, -16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 459, -94,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 120, -12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1158, 69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1118, -16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 111, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 286, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4898, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 4887, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1101, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1032, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 834, -195,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 334, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 368, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 361, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4790, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4725, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4847, 37, 435, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 4821, 62, 187, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4925, 135, 113, -62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -238, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 5447, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 5495, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 5527, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 343, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 90, -21,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -273, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -475, -2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 59, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -53, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5525, -1, -80, -27, -474, 1,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimShieldBreak_joint12[102] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -531, -34,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -393, 291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -207, -208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -505, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -334, 252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 167,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -275, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -428, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -379, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -150, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -109, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -58, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 49,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimShieldBreak_joint13[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 625,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 105, 3, 406, 9,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 8), -69,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -298, -13, 54, -2, 126, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -349, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 54, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -305, 12, 54, 1, 126, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -49, 58, 80, -3, 336, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 625, 0, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimShieldBreak_joint15[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, -804, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 71, 0, 35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), 2227, -868, -656,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 32), 1608, -804, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTMarioAnimShieldBreak_joint16[172] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -140, 12, -138, -9, -477, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -15, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -370, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -279, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -244, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 435, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -12, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -306, -15,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -371, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -120, 50,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 564, 76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 651, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -305, 1, -101, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -37, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -442, -33,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 658, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 554, -72,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -41, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -581, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 487, -57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 522, 83,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -482, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1239, 102,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 609, 77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 599, -132,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -590, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -661, 44,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1083, 259, 416, -283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -380, 247, -323, -260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -226, 112, -488, -122,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -76, 4, -661, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -616, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -512, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -73, 2, -508, 4, -664, -2,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimShieldBreak_joint18[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 822, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 499, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 418, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 534, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 529, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 216, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -108,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 449, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 540, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 998, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 996, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimShieldBreak_joint20[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 25, -12, 59, 1, 59, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -364, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 184, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -433, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -528, -73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -291, 78,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -400, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 60, 94,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -215, 71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 153, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 147, 77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -121, -63,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 163, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 260, -3,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 153, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 5, 5,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -180, -53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 195, 10,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 18, 20, 256, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 92, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 413, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 405, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 365, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 203, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 363, -2, 91, -1, 206, 2,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimShieldBreak_joint21[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 58, 2, 67, 0, -650, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 320, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -371, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -382, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 78, 79,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -18, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 223, 63,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 341, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 361, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 163, 113,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 372, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 256, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 386, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 382, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), 256, -23,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 360, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -5, -15,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 372, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 158, -7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 232, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 125, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 153, -4, -16, -10, 143, 18,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimShieldBreak_joint23[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 787, -17,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 348, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 266, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 491, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 527, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 332, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 241, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 7, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 119, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 91, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 49, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -42,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimShieldBreak_joint24[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -63, 5, 132, -2, -56, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 55, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -145, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 188, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 202, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -304, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 34, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 105, 1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -146, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 38), -39, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -290, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 323, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 107, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 142, 10,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 314, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -111, 33,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 155, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 69, -37,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -74, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 232, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 31, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -182, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -26, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 13, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -185, -3, 14, 0, 235, 2,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
