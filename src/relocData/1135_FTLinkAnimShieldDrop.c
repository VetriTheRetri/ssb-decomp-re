/* AnimJoint data for relocData file 1135 (FTLinkAnimShieldDrop) */
/* 1856 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimShieldDrop_joint1[20];
extern u16 dFTLinkAnimShieldDrop_joint2[22];
extern u16 dFTLinkAnimShieldDrop_joint4[22];
extern u16 dFTLinkAnimShieldDrop_joint5[122];
extern u16 dFTLinkAnimShieldDrop_joint6[40];
extern u16 dFTLinkAnimShieldDrop_joint9[26];
extern u16 dFTLinkAnimShieldDrop_joint10[100];
extern u16 dFTLinkAnimShieldDrop_joint11[40];
extern u16 dFTLinkAnimShieldDrop_joint12[16];
extern u16 dFTLinkAnimShieldDrop_joint13[18];
extern u16 dFTLinkAnimShieldDrop_joint16[18];
extern u16 dFTLinkAnimShieldDrop_joint17[12];
extern u16 dFTLinkAnimShieldDrop_joint18[26];
extern u16 dFTLinkAnimShieldDrop_joint20[14];
extern u16 dFTLinkAnimShieldDrop_joint21[78];
extern u16 dFTLinkAnimShieldDrop_joint23[40];
extern u16 dFTLinkAnimShieldDrop_joint25[80];
extern u16 dFTLinkAnimShieldDrop_joint26[74];
extern u16 dFTLinkAnimShieldDrop_joint28[32];
extern u16 dFTLinkAnimShieldDrop_joint29[70];

/* Joint pointer table (29 entries, 116 bytes) */
AObjEvent32 * dFTLinkAnimShieldDrop_joints[] = {
	(AObjEvent32 *)dFTLinkAnimShieldDrop_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimShieldDrop_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimShieldDrop_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTLinkAnimShieldDrop_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTLinkAnimShieldDrop_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimShieldDrop_joint9, /* [6] joint 9 */
	NULL, /* [7] NULL */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTLinkAnimShieldDrop_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTLinkAnimShieldDrop_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimShieldDrop_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimShieldDrop_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimShieldDrop_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTLinkAnimShieldDrop_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTLinkAnimShieldDrop_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimShieldDrop_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTLinkAnimShieldDrop_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTLinkAnimShieldDrop_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTLinkAnimShieldDrop_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTLinkAnimShieldDrop_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTLinkAnimShieldDrop_joint28, /* [26] joint 28 */
	NULL, /* [27] NULL */
	(AObjEvent32 *)dFTLinkAnimShieldDrop_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimShieldDrop_joint1[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAY), 0, 469,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAY, 6), 0, -134, 469, 91,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAY, 18), -3216, 744,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLinkAnimShieldDrop_joint2[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, 276, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -68, 5, 210, 0, -224, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 32, 274, 83,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimShieldDrop_joint4[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 551, 423, 273,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 497, -12, -5, -10, -392, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 259, 166, 56,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimShieldDrop_joint5[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 670, -25, -281, -76, -389, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -534, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 507, -310, -292, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 22, -437, -6, 102,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -477, -51, -251, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -361, 66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -510, -30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -470, 17, -307, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -240, 157, -133, -65,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -536, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -602, 41,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -37, 173, -260, -114,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -57, 157,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -352, -29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -553, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -353, -19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 101, 141,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 272, -24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -368, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -308, 17,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -372, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -297, 11, -380, -8, 256, -15,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimShieldDrop_joint6[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -359, -105,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -778, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -723, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1037, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1058, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -807, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -686, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -471, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -430, 40,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimShieldDrop_joint9[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -76, 36, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -76, -50, 36, -1, -44, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -731, 4, 23, -1, 9, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 4, 7, 76,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimShieldDrop_joint10[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 954, 5, 84, 7, 165, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 885, -119, 5, -82, 150, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 715, -251, -81, 1, 193, 71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 161, 59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -133, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 293, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 93, -218,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -318, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 126, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 264, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -196, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 341, 186,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -306, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 120, 156,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 309, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 442, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 511, 135, 262, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 700, 5, 431, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 702, 1, 464, 21, 433, 1,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimShieldDrop_joint11[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -812, 15,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -961, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1138, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1130, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1052, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -929, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -500, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -444, 56,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimShieldDrop_joint12[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -209, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 0, 22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), 296,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 11), 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTLinkAnimShieldDrop_joint13[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 804, 16, -804, 0, 804, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 1209, -804, 398,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTLinkAnimShieldDrop_joint16[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2182, -376, -605,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 2182, -28, -376, 30, -605, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 1508, 346, -843,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimShieldDrop_joint17[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -163,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), 163,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 21), -163,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimShieldDrop_joint18[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -199, -499, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -3, 38, 59, 178, -52, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 34, 0, 568, -12, -32, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 0, -199, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimShieldDrop_joint20[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -163,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -163, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 21), 97,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimShieldDrop_joint21[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -51, 10, -328, -3, -27, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 251, 55, -298, 51, -269, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 289, -14, -232, 26, -418, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 161, 19, -229, 45, -486, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 183, 1, -173, 49, -609, -119,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -734, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -53, 11, 5, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -36, 19, 55, 50,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 8, 15, 147, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -724, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -716, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 18, 9, 163, 16, -712, 3,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimShieldDrop_joint23[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1094, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1180, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1081, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 609, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 700, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1177, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1192, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1041, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1036, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimShieldDrop_joint25[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1385, 24, -1404, 20, -2248, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1950, 95,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1232, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1151, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1128, 74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -796, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1858, 79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1596, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1337, -102,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1431, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -831, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -959, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -966, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1134, -29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1580, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1542, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1152, -17, -1425, 6, -1538, 3,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimShieldDrop_joint26[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1892, 4, 1335, -1, 706, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1403, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1635, 134, 687, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1474, 54, 753, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 675, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1647, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1694, -38, 1469, 59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1333, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1263, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 727, 58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1441, 21,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1344, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1356, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1253, 9, 1361, 5, 1453, 11,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimShieldDrop_joint28[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 839, -4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 882, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 978, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1143, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1067, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 573, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 551, -21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimShieldDrop_joint29[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -356, 9, -73, 0, 150, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -566, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 68, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 69, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 28, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 247, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -557, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -309, -26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 73, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -86, -6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -349, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -424, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -415, 9, -89, -3, 252, 5,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
