/* AnimJoint data for relocData file 1214 (FTLinkAnimHeavyItemPickup) */
/* 3088 bytes: 120-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimHeavyItemPickup_joint1[34];
extern u16 dFTLinkAnimHeavyItemPickup_joint2[48];
extern u16 dFTLinkAnimHeavyItemPickup_joint4[62];
extern u16 dFTLinkAnimHeavyItemPickup_joint5[160];
extern u16 dFTLinkAnimHeavyItemPickup_joint6[68];
extern u16 dFTLinkAnimHeavyItemPickup_joint9[8];
extern u16 dFTLinkAnimHeavyItemPickup_joint10[170];
extern u16 dFTLinkAnimHeavyItemPickup_joint11[96];
extern u16 dFTLinkAnimHeavyItemPickup_joint12[8];
extern u16 dFTLinkAnimHeavyItemPickup_joint13[10];
extern u16 dFTLinkAnimHeavyItemPickup_joint16[42];
extern u16 dFTLinkAnimHeavyItemPickup_joint17[34];
extern u16 dFTLinkAnimHeavyItemPickup_joint18[36];
extern u16 dFTLinkAnimHeavyItemPickup_joint20[26];
extern u16 dFTLinkAnimHeavyItemPickup_joint21[120];
extern u16 dFTLinkAnimHeavyItemPickup_joint23[56];
extern u16 dFTLinkAnimHeavyItemPickup_joint25[118];
extern u16 dFTLinkAnimHeavyItemPickup_joint26[134];
extern u16 dFTLinkAnimHeavyItemPickup_joint28[48];
extern u16 dFTLinkAnimHeavyItemPickup_joint29[128];
extern u16 dFTLinkAnimHeavyItemPickup_joint30[78];

/* Joint pointer table (30 entries, 120 bytes) */
AObjEvent32 * dFTLinkAnimHeavyItemPickup_joints[] = {
	(AObjEvent32 *)dFTLinkAnimHeavyItemPickup_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimHeavyItemPickup_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimHeavyItemPickup_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTLinkAnimHeavyItemPickup_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTLinkAnimHeavyItemPickup_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimHeavyItemPickup_joint9, /* [6] joint 9 */
	NULL, /* [7] NULL */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTLinkAnimHeavyItemPickup_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTLinkAnimHeavyItemPickup_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimHeavyItemPickup_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimHeavyItemPickup_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimHeavyItemPickup_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTLinkAnimHeavyItemPickup_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTLinkAnimHeavyItemPickup_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimHeavyItemPickup_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTLinkAnimHeavyItemPickup_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTLinkAnimHeavyItemPickup_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTLinkAnimHeavyItemPickup_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTLinkAnimHeavyItemPickup_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTLinkAnimHeavyItemPickup_joint28, /* [26] joint 28 */
	NULL, /* [27] NULL */
	(AObjEvent32 *)dFTLinkAnimHeavyItemPickup_joint29, /* [28] joint 29 */
	(AObjEvent32 *)dFTLinkAnimHeavyItemPickup_joint30, /* [29] joint 30 */
};

/* Joint 1 */
u16 dFTLinkAnimHeavyItemPickup_joint1[34] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 901, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 398, -274, 258, -86,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 454, 131, -140, -83,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 727, 174, 49, 50,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 934, -3, 0, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 719, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimHeavyItemPickup_joint2[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -107, 276,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 140, -1, 0, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -125, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -144, 17, 0, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 81, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -144, -18, 0, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -107, 3, 276, 27,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -107, 276,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimHeavyItemPickup_joint4[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 259, 166, 56,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 390, 50, -48, -33, -175, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 512, 34, 0, 4, 0, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 738, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 543, -73, 0, -1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -139, -18, -13, 11, -4, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 259, 31, 166, 9, 56, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 338, 135, 99,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimHeavyItemPickup_joint5[160] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 280, 3, -326, -28, -86, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 347, 80, -400, -6, -231, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 443, -215, -367, 208, -479, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -83, -352, 15, 218, -585, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -261, -101, 70, -2, -787, -173,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -306, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -948, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 17, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 17, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -14, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -310, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -16, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -906, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -393, 27,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -43, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -107, 6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -363, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -386, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -38, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -165, -45,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -656, -250,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1235, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -83, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 177, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -208, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -270, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1294, -57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1296, 22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 183, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 186, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -266, 3, 185, -1, -1283, 13,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimHeavyItemPickup_joint6[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -500, -90,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -697, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -522, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -85, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -218, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -389, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -427, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -622, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -454, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -477, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -460, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -533, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -589, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -612, -22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimHeavyItemPickup_joint9[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimHeavyItemPickup_joint10[170] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 416, -354, 123, 541, -50, -803,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1683, -706,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 61, -437, 665, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -459, -232, 348, -322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -403, -106, 19, -5, -2267, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -671, 296, 336, -13, -1486, 679,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 189, 444, -7, -173, -908, 301,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 216, 19, -10, -1, -883, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), 4, -23, 65, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -877, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -788, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -693, 89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -541, -5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -15, -14, 80, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 75, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 150, 61,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -532, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -402, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -429, -117,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -838, -145,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 39, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -496, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -928, -92,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1661, -99,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 214, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 207, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 136, -12, -1739, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 282, 24, -1620, 28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -478, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -462, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -455, 7, 295, 12, -1603, 16,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimHeavyItemPickup_joint11[96] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -587, -323,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -911, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -916, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -948, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -593, 465,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -18, 292,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -7, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -18, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -300, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -347, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -93, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -159, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -378, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -639, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -563, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -356, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -166, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -129, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -412, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -453, -40,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimHeavyItemPickup_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimHeavyItemPickup_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 804, -804, 804, 83, 0, 12,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTLinkAnimHeavyItemPickup_joint16[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1695, -182, 2, 83, -157, 397,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 785, -82, -118, -11, 1646, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 785, 30, -118, -13, 1646, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 1697, 33, -536, -15, -339, -73,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1697, -536, -339,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimHeavyItemPickup_joint17[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, -163,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -245, -18, 0, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -245, 7, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), -100, 11, 8, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 0, 6, -163, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 0, -163,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimHeavyItemPickup_joint18[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, -199,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -153, 7, 0, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 92, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), -481, -4, 0, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 0, 32, -199, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 0, -199,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTLinkAnimHeavyItemPickup_joint20[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -66, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -194, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -194, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 22), 0, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimHeavyItemPickup_joint21[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -242, 48, -244, -41, 108, -68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -190, -72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -462, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -14, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 90, 92,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -172, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -255, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 116, -12,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -468, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -161, 22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -243, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -7, -33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 92, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -311, -5,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -45, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 247, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 314, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 4, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -315, -2, -143, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -94, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -288, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -317, -19, -82, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -29, 45, -327, -6, -136, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2, 26, -329, -1, -154, -18,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimHeavyItemPickup_joint23[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 249, 143,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 745, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 761, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1182, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1164, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 606, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 535, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 196, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 695, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 735, 39,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimHeavyItemPickup_joint25[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 329, -64, -161, -29, -34, -63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -328, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -241, 12, -283, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -193, 44, -272, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -52, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -328, -4,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -320, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 32, 54,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -25, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 219, -23,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -338, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -254, 56,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 189, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 325, -22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 90, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -9, -106,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -197, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -191, -14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -111, -85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -222, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 296, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 265, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 250, -14, -200, -9, -236, -14,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimHeavyItemPickup_joint26[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, -81, 269, 12, -125, -113,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 10, -54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -420, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -721, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -753, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -944, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -55, -82,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -172, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -470, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -176, 20,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -84, 74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 47, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -900, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -673, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -162, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 38, 46,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 41, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 213, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -693, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -133, 40,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 81, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 153, -75,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 219, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 353, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -97, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -293, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 81, -51, -379, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 49, -31, 354, 0, -415, -35,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimHeavyItemPickup_joint28[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 424, 149,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1340, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1368, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1013, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1003, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 421, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 360, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 386, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 546, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 797, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 837, 40,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimHeavyItemPickup_joint29[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -427, 17, -74, 15, -69, -78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 72, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -52, 62, -581, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3, 35, -468, 123,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -407, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -16, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 27, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -25, -24,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -426, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -414, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -43, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -88, 24,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -414, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -522, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -63, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -139, 40,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -509, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -400, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -63, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -121, -63,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -101, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -52, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -179, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -216, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -398, 1, -50, 1, -229, -13,
	ftAnimEnd(),
};

/* Joint 30 */
u16 dFTLinkAnimHeavyItemPickup_joint30[78] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 900,
	ftAnimSetValRate(FT_ANIM_TRAY), -1, 803,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX, 15), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 501, 804, 641, -191,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 586, 129, 541, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 32, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 51, 5,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 0, 760, 223, 393, -352,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 72, -34,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 20), -804,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 0, 0, 1006, 58, -119, -115,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 900, 120,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
