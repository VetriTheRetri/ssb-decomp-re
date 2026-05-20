/* AnimJoint data for relocData file 1217 (FTLinkAnimStarRodTilt) */
/* 2960 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimStarRodTilt_joint1[34];
extern u16 dFTLinkAnimStarRodTilt_joint2[46];
extern u16 dFTLinkAnimStarRodTilt_joint4[46];
extern u16 dFTLinkAnimStarRodTilt_joint5[182];
extern u16 dFTLinkAnimStarRodTilt_joint6[88];
extern u16 dFTLinkAnimStarRodTilt_joint9[26];
extern u16 dFTLinkAnimStarRodTilt_joint10[174];
extern u16 dFTLinkAnimStarRodTilt_joint11[82];
extern u16 dFTLinkAnimStarRodTilt_joint12[58];
extern u16 dFTLinkAnimStarRodTilt_joint13[10];
extern u16 dFTLinkAnimStarRodTilt_joint16[8];
extern u16 dFTLinkAnimStarRodTilt_joint17[42];
extern u16 dFTLinkAnimStarRodTilt_joint18[42];
extern u16 dFTLinkAnimStarRodTilt_joint20[58];
extern u16 dFTLinkAnimStarRodTilt_joint21[114];
extern u16 dFTLinkAnimStarRodTilt_joint23[40];
extern u16 dFTLinkAnimStarRodTilt_joint25[112];
extern u16 dFTLinkAnimStarRodTilt_joint26[106];
extern u16 dFTLinkAnimStarRodTilt_joint28[32];
extern u16 dFTLinkAnimStarRodTilt_joint29[122];

/* Joint pointer table (29 entries, 116 bytes) */
AObjEvent32 * dFTLinkAnimStarRodTilt_joints[] = {
	(AObjEvent32 *)dFTLinkAnimStarRodTilt_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimStarRodTilt_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimStarRodTilt_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTLinkAnimStarRodTilt_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTLinkAnimStarRodTilt_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimStarRodTilt_joint9, /* [6] joint 9 */
	NULL, /* [7] NULL */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTLinkAnimStarRodTilt_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTLinkAnimStarRodTilt_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimStarRodTilt_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimStarRodTilt_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimStarRodTilt_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTLinkAnimStarRodTilt_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTLinkAnimStarRodTilt_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimStarRodTilt_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTLinkAnimStarRodTilt_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTLinkAnimStarRodTilt_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTLinkAnimStarRodTilt_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTLinkAnimStarRodTilt_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTLinkAnimStarRodTilt_joint28, /* [26] joint 28 */
	NULL, /* [27] NULL */
	(AObjEvent32 *)dFTLinkAnimStarRodTilt_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimStarRodTilt_joint1[34] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 901, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 882, -83, -122, -127,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 797, -102, -158, 219,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 742, -25, 179, 159,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 742, 47, 179, -53,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 901, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimStarRodTilt_joint2[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, 276, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -79, 8, 590, 31, 10, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -22, 20, 590, -64, 10, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 141, 9, -116, -41, -1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 141, -9, -116, 14, -1, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -107, 276, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimStarRodTilt_joint4[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 259, 166, 56,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 581, 47, 531, 38, 517, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 736, -35, 551, -78, 636, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 192, -31, -333, -52, 11, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 192, 2, -333, 18, 11, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 259, 166, 56,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimStarRodTilt_joint5[182] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2936, 65, -326, 56, 3130, -72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -140, 143,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2777, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -2741, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2527, 159,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2397, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 78, 145,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 227, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2758, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2777, -71,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2408, -12, 173, -74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2577, -346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 78, -213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -253, -189, 2656, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 3618, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3116, -574, -301, 89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -4181, -213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -74, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 9, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -4153, 14, -155, -129,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -260, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -3805, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3663, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 3605, -49,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -270, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -295, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -191, 75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -226, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3570, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 3701, 34,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3673, 120,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -3020, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3720, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 3143, -24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -280, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -331, 7,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2975, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2946, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2936, 9, -326, 4, 3130, -12,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimStarRodTilt_joint6[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -500, 106,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -383, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -639, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -528, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -457, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -593, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -792, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -677, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1037, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -841, 406,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -224, 417,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -262, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -390, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -770, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -785, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -513, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimStarRodTilt_joint9[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 311, 30, -66, -7, 181, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 311, -8, -66, 1, 181, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 32), 4, 7, 76,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimStarRodTilt_joint10[174] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 416, -46, 123, 42, -50, -136,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 258, -280,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 68, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -187, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -191, -416, -421, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -574, -213, -120, -99, -649, -131,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -166, -19, -733, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -618, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -520, 27,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -185, -18, -759, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -204, -15, -788, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -502, 381, -216, 509, -826, 269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 243, 552, 814, 676, -249, 376,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 603, -25, 1137, 95, -73, -148,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1005, -225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 191, -416, 1005, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -229, -266, 1084, 68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -418, -64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1110, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -998, 46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -866, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -470, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -663, -36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -862, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -866, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1112, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 1200, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -696, -34, 1241, 38, -904, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -1189, -4, 1483, 3, -1650, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1192, -2, 1484, 1, -1659, -8,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimStarRodTilt_joint11[82] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -587, -27,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -604, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -741, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -470, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -448, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -428, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -455, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -221, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -422, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -431, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -473, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -567, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -628, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -598, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 11,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLinkAnimStarRodTilt_joint12[58] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -173, -27, -119, 7, 507, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -109, 8, -179, -7, 287, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -109, -42, -179, 43, 287, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -407, 8, 127, 281, 531, 235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -91, 124, 382, 51, 757, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -157, 3, 231, -19, 626, -25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 0, -209, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTLinkAnimStarRodTilt_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 804, -804, 804, 83, 0, 12,
	ftAnimBlock(0, 42),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTLinkAnimStarRodTilt_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimBlock(0, 42),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimStarRodTilt_joint17[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -511, -34,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -4, -511, 86, 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -54, -3, 436, 55, -38, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -54, 2, 436, -22, -38, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, -163, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimStarRodTilt_joint18[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 65, 6, -537, -33, -29, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 65, -15, -537, 47, -29, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -104, -9, -19, 30, -84, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -104, 3, -19, -6, -84, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, -199, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimStarRodTilt_joint20[58] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -143, 12, -203, -15, 52, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 156, 0, -198, -19, 51, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -135, -9, -403, -10, 106, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 45, 0, -330, 18, 87, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -143, -14, -215, 22, 57, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -128, 11, -57, 17, 15, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimStarRodTilt_joint21[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -242, 62, -244, 1, 108, -62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -66, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 87, -12, -281, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 61, -31, -323, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 101, 118,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -297, 111,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -80, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -65, -56,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 251, 82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -127, -69,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -124, -23, -170, 130,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -9, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 70, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -168, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), -234, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -4, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -247, 2,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 65, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 106, 3,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -240, -3, -245, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -2, -244, 0, 108, 2,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimStarRodTilt_joint23[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 249, 44,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 697, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 681, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 355, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 318, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 408, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 406, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 254, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimStarRodTilt_joint25[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 329, 22, -161, -2, -34, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 510, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -157, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -46, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -19, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -372, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 488, -51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -57, -29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -124, 46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -89, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -521, -110,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -620, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -35, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 71, -15,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -608, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -202, 24,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 56, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 321, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -88, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -36, 3,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -180, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -166, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, 7, -161, 4, -34, 2,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimStarRodTilt_joint26[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, -17, 269, 4, -125, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 180, -62, -371, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -150, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -194, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -99, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 116, -42, -501, -113,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -83, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -655, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -136, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 51, 47,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -87, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 280, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -657, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -405, 49,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 96, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 269, 3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -356, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -132, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 280, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 270, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 1, 269, 0, -125, 7,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimStarRodTilt_joint28[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 424, -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 555, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 636, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 828, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 824, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 431, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimStarRodTilt_joint29[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -427, 45, -74, 51, -69, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -20, 72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 134, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 340, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 377, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 282, -145,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 39, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -340, -130,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 33, -118,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -297, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -438, -51, 101, -165,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -328, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 3, 12,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -303, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -73, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -314, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -476, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 13, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 14), -187, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -165, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -77, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -464, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -431, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -427, 3, -74, 3, -69, 3,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
