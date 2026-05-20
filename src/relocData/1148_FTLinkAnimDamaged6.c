/* AnimJoint data for relocData file 1148 (FTLinkAnimDamaged6) */
/* 1536 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimDamaged6_joint1[20];
extern u16 dFTLinkAnimDamaged6_joint2[54];
extern u16 dFTLinkAnimDamaged6_joint4[44];
extern u16 dFTLinkAnimDamaged6_joint5[64];
extern u16 dFTLinkAnimDamaged6_joint6[36];
extern u16 dFTLinkAnimDamaged6_joint9[14];
extern u16 dFTLinkAnimDamaged6_joint10[58];
extern u16 dFTLinkAnimDamaged6_joint11[32];
extern u16 dFTLinkAnimDamaged6_joint12[22];
extern u16 dFTLinkAnimDamaged6_joint13[8];
extern u16 dFTLinkAnimDamaged6_joint16[8];
extern u16 dFTLinkAnimDamaged6_joint17[22];
extern u16 dFTLinkAnimDamaged6_joint18[28];
extern u16 dFTLinkAnimDamaged6_joint20[14];
extern u16 dFTLinkAnimDamaged6_joint21[56];
extern u16 dFTLinkAnimDamaged6_joint23[36];
extern u16 dFTLinkAnimDamaged6_joint25[62];
extern u16 dFTLinkAnimDamaged6_joint26[64];
extern u16 dFTLinkAnimDamaged6_joint28[24];
extern u16 dFTLinkAnimDamaged6_joint29[44];

/* Joint pointer table (29 entries, 116 bytes) */
AObjEvent32 * dFTLinkAnimDamaged6_joints[] = {
	(AObjEvent32 *)dFTLinkAnimDamaged6_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimDamaged6_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimDamaged6_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTLinkAnimDamaged6_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTLinkAnimDamaged6_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimDamaged6_joint9, /* [6] joint 9 */
	NULL, /* [7] NULL */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTLinkAnimDamaged6_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTLinkAnimDamaged6_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimDamaged6_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimDamaged6_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimDamaged6_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTLinkAnimDamaged6_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTLinkAnimDamaged6_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimDamaged6_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTLinkAnimDamaged6_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTLinkAnimDamaged6_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTLinkAnimDamaged6_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTLinkAnimDamaged6_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTLinkAnimDamaged6_joint28, /* [26] joint 28 */
	NULL, /* [27] NULL */
	(AObjEvent32 *)dFTLinkAnimDamaged6_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimDamaged6_joint1[20] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 744, -249, 0, -243,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 588, -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 744, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLinkAnimDamaged6_joint2[54] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ), 32, -59, 274, -17, 83, -33, 0, -616,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ, 1), -180, -84, 86, -103, 15, -5, -239, -62,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 9), -240, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -220, -4, -34, -15, 67, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -220, 28, -53, 34, 67, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ, 2), 32, 30, 274, 16, 83, 22, 0, 280,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTLinkAnimDamaged6_joint4[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 259, 92, 166, -88, 56, 58,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 525, 173, -62, -116, 200, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 781, 28, -183, -13, -49, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 781, -57, -183, 38, -49, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 259, -44, 166, 61, 56, -32,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimDamaged6_joint5[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -297, 152, -380, 276, 256, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -173, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 456, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -104, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -87, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -265, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -241, -70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -353, 47,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 403, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 325, -62,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -284, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -360, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -297, 56, -380, -20, 256, -69,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimDamaged6_joint6[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -430, -483,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -914, -241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -913, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -484, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -290, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -553, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -532, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -430, 101,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimDamaged6_joint9[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 76, 41,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 4, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 76, -27,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimDamaged6_joint10[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2310, 17, 1143, 449, 2041, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 2253, 58, 2174, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1593, 264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1673, 63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1508, -58,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2321, 55, 2110, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 2360, -32, 2065, -12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1455, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1284, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2310, -49, 1143, -140, 2041, -23,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimDamaged6_joint11[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -444, -760,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1204, -375,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1196, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -560, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -458, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -599, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -444, 154,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimDamaged6_joint12[22] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -209, 0, 0, 1,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 33, -192, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, -3, -209, 0, 0, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimDamaged6_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimDamaged6_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1508, 346, -843,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimDamaged6_joint17[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -31, -163, 24, 0, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -85, -86, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, -3, -163, -28, 0, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimDamaged6_joint18[28] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 220, 60, -199, 27, 0, 38,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 182, -116, 115,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -225, -162, 51,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -199, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimDamaged6_joint20[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 97, -42,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 356,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 97, 21,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimDamaged6_joint21[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 18, 91, 163, 32, -712, 102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -692, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 33, -86, -36, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -68, -79, -144, -68,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -29, 82, 30, 111,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -724, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -784, 55,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 24, 23, 145, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 18, -5, 163, 17, -712, 71,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimDamaged6_joint23[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1036, 156,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1192, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1113, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 788, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 740, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 832, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 994, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1036, 41,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimDamaged6_joint25[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 456, 451, -183, 12, 70, 181,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 443, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -185, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 907, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 510, -230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 623, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 700, 60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 666, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 405, -57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 86, -37,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 488, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 388, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 456, 67, -183, 2, 70, -16,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimDamaged6_joint26[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 355, 49, 246, 37, -155, -116,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 286, -66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -553, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 305, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 50, -241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -178, -89, 188, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 322, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -128, 73, -561, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 334, 30, -200, 56,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 319, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 271, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 355, 20, 246, -25, -155, 45,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimDamaged6_joint28[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 551, -140,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 439, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 488, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 590, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 551, -39,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimDamaged6_joint29[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -415, -328, -89, 2, 252, 48,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -98, 6, 226, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -743, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -451, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -367, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -407, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -429, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -415, 14, -89, 8, 252, 26,
	ftAnimEnd(),
	0x0000, 0x0000,
};
