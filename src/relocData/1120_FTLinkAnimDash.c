/* AnimJoint data for relocData file 1120 (FTLinkAnimDash) */
/* 2688 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimDash_joint1[38];
extern u16 dFTLinkAnimDash_joint2[38];
extern u16 dFTLinkAnimDash_joint4[62];
extern u16 dFTLinkAnimDash_joint5[136];
extern u16 dFTLinkAnimDash_joint6[64];
extern u16 dFTLinkAnimDash_joint9[34];
extern u16 dFTLinkAnimDash_joint10[98];
extern u16 dFTLinkAnimDash_joint11[40];
extern u16 dFTLinkAnimDash_joint12[8];
extern u16 dFTLinkAnimDash_joint13[8];
extern u16 dFTLinkAnimDash_joint16[34];
extern u16 dFTLinkAnimDash_joint17[8];
extern u16 dFTLinkAnimDash_joint18[40];
extern u16 dFTLinkAnimDash_joint20[40];
extern u16 dFTLinkAnimDash_joint21[142];
extern u16 dFTLinkAnimDash_joint23[56];
extern u16 dFTLinkAnimDash_joint25[140];
extern u16 dFTLinkAnimDash_joint26[124];
extern u16 dFTLinkAnimDash_joint28[48];
extern u16 dFTLinkAnimDash_joint29[128];

/* Joint pointer table (29 entries, 116 bytes) */
AObjEvent32 * dFTLinkAnimDash_joints[] = {
	(AObjEvent32 *)dFTLinkAnimDash_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimDash_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimDash_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTLinkAnimDash_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTLinkAnimDash_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimDash_joint9, /* [6] joint 9 */
	NULL, /* [7] NULL */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTLinkAnimDash_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTLinkAnimDash_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimDash_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimDash_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimDash_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTLinkAnimDash_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTLinkAnimDash_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimDash_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTLinkAnimDash_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTLinkAnimDash_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTLinkAnimDash_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTLinkAnimDash_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTLinkAnimDash_joint28, /* [26] joint 28 */
	NULL, /* [27] NULL */
	(AObjEvent32 *)dFTLinkAnimDash_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimDash_joint1[38] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 901, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 720, -63,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 901, 144, 0, 51,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 901, -60, 0, 36,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 815, -140, 50, 206,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 729, 50, 253, -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 901, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimDash_joint2[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, 276, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 59, 13, -319, -49, -58, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 59, 4, -319, 17, -58, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 100, -8, -161, 31, -131, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -107, 276, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimDash_joint4[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 259, 166, 56,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 494, 119, 131, 65, 88, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 979, 48, 559, 42, 789, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 979, -22, 559, -10, 789, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 780, -62, 464, -34, 599, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 720, -22, 417, -41, 525, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 600, -31, 132, -17, 201, -31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 259, 166, 56,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimDash_joint5[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1328, -1, -1281, -87, 1522, -85,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1416, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1368, -157, 1436, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1596, -138, 1222, -126,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1262, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1354, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1434, 84,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1645, -107,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1184, 63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1144, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1459, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1401, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1277, 51, 1493, -63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1599, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1536, -47,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1118, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1247, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1661, 61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1647, -131,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1577, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1326, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1510, -114,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1514, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1322, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1287, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1326, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1327, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1328, 0, -1281, 5, 1522, 7,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimDash_joint6[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -500, -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -678, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -563, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -615, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -685, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -290, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -81, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -393, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -377, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -186, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -266, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -480, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, -19,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimDash_joint9[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 4, 1, 7, 4, 76, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 25, 2, 58, 5, 247, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 23, -1, 52, -2, 229, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 4, 7, 76,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimDash_joint10[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 416, 0, 123, 10, -50, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 13), 353, 57, -139, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), 448, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 440, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 274, 3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 413, 47, -40, 82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -64, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 378, 13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 275, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 211, 23,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -99, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -128, 34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 237, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 127, -8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 393, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 414, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -96, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -56, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 416, 1, 123, -4, -50, 5,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimDash_joint11[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -587, -14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -541, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -520, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -666, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -798, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -330, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -209, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -568, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, -19,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimDash_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 31),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimDash_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 31),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimDash_joint16[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1647, -3, -447, 7, -275, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1653, 5, -447, 6, -283, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1697, 2, -385, -4, -339, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 1697, -536, -339,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimDash_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimBlock(0, 31),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimDash_joint18[40] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -277, 21, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 5, -199, -27, 0, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -221, -27,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -255, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -247, 11, -199, 2, 0, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, -199, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTLinkAnimDash_joint20[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 96, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -127, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 114, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -32, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -32, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -21, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 199, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimDash_joint21[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -242, 85, -244, -53, 108, -133,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -490, -191,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -376, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -46, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -13, 60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 246, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -693, -166,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -789, 73,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -363, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -524, 81,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 212, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 184, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -721, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -915, 72,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -401, 90,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -270, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 52, -151, -763, 216,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -143, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -481, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -509, -50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -650, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -143, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -174, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -281, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -253, 14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -573, 86,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 81, 45,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -198, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -235, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -6, -244, 9, 108, 27,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimDash_joint23[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 249, 252,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1129, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1170, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1331, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1224, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 595, -410,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 128, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 325, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 497, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 497, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 388, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 293, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -43,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimDash_joint25[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 329, -20, -161, -59, -34, -140,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 366, 148, -210, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -145, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 47, 190,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 310, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 548, 102, -108, 93,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 108, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 639, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 703, 47, 230, -85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 86, 74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 495, -154,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 80, -78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -281, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 230, 112,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 260, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 354, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 586, 56,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -270, 34, 306, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -101, -77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -29, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 635, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 342, -13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -172, -60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -56, 35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -34, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -155, -12,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 332, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, -3, -161, -6, -34, 22,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimDash_joint26[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, -191, 269, -3, -125, -211,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -525, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 78, -215, 266, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -159, -46, 73, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -14, 68, 119, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -22, -56, 100, -8, -350, 193,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 294, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -265, -1, 156, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -258, 12, 192, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -65, 82, 109, -80,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 297, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 164, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 16, 60, 46, -42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 20, -58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 266, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 167, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 266, 18,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -42, -61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -135, 15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 280, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 273, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 4, 269, -3, -125, 10,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimDash_joint28[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 424, 169,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 886, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 710, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 387, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 767, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 758, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 715, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 627, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 457, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -32,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimDash_joint29[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1180, -1, -1534, -65, 1538, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1191, -83, 1491, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1599, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1731, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1011, -107, -1533, 140, 1376, -71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1528, 201,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1043, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1449, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1513, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1751, 174,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1951, -14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 973, -79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 759, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1511, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1436, -18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1929, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1307, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 851, 80, 1179, -107,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1145, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1515, 39,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1452, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1531, -5,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1170, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1180, 9, -1534, -2, 1538, 22,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
