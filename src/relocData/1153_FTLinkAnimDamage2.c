/* AnimJoint data for relocData file 1153 (FTLinkAnimDamage2) */
/* 2816 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimDamage2_joint1[40];
extern u16 dFTLinkAnimDamage2_joint2[64];
extern u16 dFTLinkAnimDamage2_joint4[46];
extern u16 dFTLinkAnimDamage2_joint5[124];
extern u16 dFTLinkAnimDamage2_joint6[40];
extern u16 dFTLinkAnimDamage2_joint9[56];
extern u16 dFTLinkAnimDamage2_joint10[112];
extern u16 dFTLinkAnimDamage2_joint11[48];
extern u16 dFTLinkAnimDamage2_joint12[72];
extern u16 dFTLinkAnimDamage2_joint13[20];
extern u16 dFTLinkAnimDamage2_joint16[18];
extern u16 dFTLinkAnimDamage2_joint17[38];
extern u16 dFTLinkAnimDamage2_joint18[26];
extern u16 dFTLinkAnimDamage2_joint20[26];
extern u16 dFTLinkAnimDamage2_joint21[136];
extern u16 dFTLinkAnimDamage2_joint23[58];
extern u16 dFTLinkAnimDamage2_joint25[108];
extern u16 dFTLinkAnimDamage2_joint26[136];
extern u16 dFTLinkAnimDamage2_joint28[182];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimDamage2_joints[] = {
	(u32)dFTLinkAnimDamage2_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimDamage2_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimDamage2_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimDamage2_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimDamage2_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimDamage2_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimDamage2_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimDamage2_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimDamage2_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimDamage2_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimDamage2_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimDamage2_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimDamage2_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimDamage2_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimDamage2_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimDamage2_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimDamage2_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimDamage2_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimDamage2_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	0xFFFF0289, /* [28] END */
};

/* Joint 1 */
u16 dFTLinkAnimDamage2_joint1[40] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 901, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 901, 476, 0, -293,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1080, 292, -110, -123,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 1083, 106, -77, 88,
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), 1200, -63,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -65, 7,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), -71, 23,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), 901, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimDamage2_joint2[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -107, 276,
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -12,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 134, 856, 268, -89, 268, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2610, 562,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 98, -270, 113, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -272, -8, 73, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 72, 61, -160, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 156, -3, 75, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2948, 195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 3625, 90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 5037, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTLinkAnimDamage2_joint4[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 259, 166, 56,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 357, -285, 312, 44, 446, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -597, -56, 300, -12, 26, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -268, 87, 170, -12, 96, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 893, 57, 94, 4, 268, 25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 709, 242, 522,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimDamage2_joint5[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 280, -677, -326, 114, -86, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -110, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -397, -170, -212, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -60, 305, -444, -169,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -627, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 214, 102, -287, -62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -53, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 144, -89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1187, -80,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -632, -1, 56, 104,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -544, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 772, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1253, -55, 857, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1376, 20, 1042, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1330, 87, 960, -135,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 174, -102,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -419, 157,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -542, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -412, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 96, -77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -58, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -268, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -148, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -99, 48, -410, 2, -94, -36,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimDamage2_joint6[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -500, -69,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -733, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -763, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -358, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -340, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -745, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -698, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -516, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -472, 43,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimDamage2_joint9[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, -496, 7, 64, 76, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4, -496, 7, 64, 76, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -371, -12, 117, 1, 224, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -539, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 163, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 99, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 176, 4,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 9), 445,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 7), 0,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), -209,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimDamage2_joint10[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2024, 413, 1484, 66, 1557, 650,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2438, 267, 1551, -28, 2208, 397,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2560, 116, 1426, -74, 2353, 89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1365, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 2700, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 2332, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2331, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 2615, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1356, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 893, -39,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2690, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 2783, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2816, 5, 2627, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2794, -145, 2563, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2525, -309, 860, 0, 2225, -391,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1085, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2175, -177, 1780, -283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2170, 53, 1658, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 2660, 151, 1768, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2768, 108, 1070, -15, 1804, 36,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimDamage2_joint11[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -587, -29,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -617, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -286, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -350, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -406, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -501, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -477, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -596, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -628, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -593, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -553, 40,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimDamage2_joint12[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 13, -209, 11, 0, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 13, -209, 11, 0, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 24, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 127, 311, -91, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 40, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 301, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 769, 52,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 150, -20,
	ftAnimBlock(0, 12),
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -178, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 611, -248,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 8), 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 330, -59,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimDamage2_joint13[20] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 804, -804, 804,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 804, -804, 804,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 804, -804, 804,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTLinkAnimDamage2_joint16[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -339,
	ftAnimSetValRate(FT_ANIM_ROTX), 1697, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), -536,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1697, 0, -339, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 28), 1697, -339,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimDamage2_joint17[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 116, -163, 197, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 116, -163, 197, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 173, -10, 19, 21, -35, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -191, -7, 234, 0, -104, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimDamage2_joint18[26] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 56, -460, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -393, -293, -165,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 507, -359, -216,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 271, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTLinkAnimDamage2_joint20[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 422, 4,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -150, -155,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 25), 110, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 343,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimDamage2_joint21[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -242, -691, -244, 207, 108, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 273, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -933, -199, -36, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -641, 139, -173, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -658, -2, -137, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -659, 0, -138, 1, 274, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -658, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 185, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -173, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -150, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -173, -75,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -641, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -32, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -254, -63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -271, -46,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 179, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 99, -143,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -40, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 69, 70,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -325, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -197, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -63, -206,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -550, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 141, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -19, -69,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -596, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -59, -39, -186, 11, -580, 16,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimDamage2_joint23[58] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 249, 239,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 488, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 137, -241,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 104, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 137, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 137, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 616, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 657, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1182, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1023, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 929, -94,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTLinkAnimDamage2_joint25[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 329, 466, -161, 206, -34, 113,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 107, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 190, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 795, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 150, -334,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 126, -7, 99, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 96, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 135, 19, 170, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 186, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 438, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 457, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 643, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 607, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 866, 155,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 114, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 342, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 204, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 376, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1028, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1109, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 943, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 876, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 862, -14, 349, 7, 384, 8,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimDamage2_joint26[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, -512, 269, -1, -125, -447,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -241, 120, 267, -188, -572, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 512, 349, -106, -192, -67, 248,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -122, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 456, -59, -74, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 392, -65, -78, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -70, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 203, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -124, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 84, 35,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -69, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -285, -43,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 219, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 81, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -324, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -459, 42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 119, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 183, 38,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 84, 18, -380, 113,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 29, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -153, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -217, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 49, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 93, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 227, 30, 83, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 31, 1, 244, 16, 118, 35,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimDamage2_joint28[182] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 424, 808,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1233, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -613,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 246, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 382, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 982, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 993, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 593, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 466, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 927, 281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1029, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 865, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 789, -75,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFE55, 0xFC42, 0xFFB6, 0x0000, 0xFFBB, 0x0000, 0x2809, 0x0004, 0x008A, 0x000D, 0x2805, 0x0006, 0xFF4C, 0x0000, 0x2003, 0x0001, 0xFA96, 0xFF7A, 0x2003, 0x0001, 0xFD47, 0x014D, 0x2003, 0x0001, 0xFD31, 0x0003, 0x2003, 0x0001, 0xFD4E, 0x001D, 0x2803, 0x0005, 0xFDB2, 0xFFFA, 0x2009, 0x0001, 0x008B, 0x0001, 0x2809, 0x0015, 0x01B3, 0x0026, 0x0801, 0x0001, 0x2005, 0x0001, 0xFF4D, 0x0000, 0x2805, 0x0015, 0xFF70, 0x0003, 0x0801, 0x0002, 0x2003, 0x0001, 0xFDA7, 0x0032, 0x2003, 0x0002, 0xFE1F, 0xFFFB, 0x2003, 0x0001, 0xFE0C, 0xFFE7, 0x2003, 0x0009, 0xFD6B, 0x0018, 0x2003, 0x0001, 0xFD8A, 0x000E, 0x2003, 0x0001, 0xFD87, 0xFF89, 0x2003, 0x0001, 0xFC9B, 0xFF0B, 0x2003, 0x0001, 0xFB9D, 0xFF79, 0x200B, 0x0001, 0xFB8C, 0xFFF6, 0x01D8, 0x001F, 0x200B, 0x0001, 0xFB87, 0x0001, 0x01F2, 0x0012, 0x200F, 0x0001, 0xFB8F, 0x0008, 0xFF72, 0x0002, 0x01FC, 0x0009, 0x0000, 0x0000, 0x0000,
};
