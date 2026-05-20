/* AnimJoint data for relocData file 1152 (FTLinkAnimDamageFlyX2) */
/* 2288 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimDamageFlyX2_joint1[42];
extern u16 dFTLinkAnimDamageFlyX2_joint2[48];
extern u16 dFTLinkAnimDamageFlyX2_joint4[40];
extern u16 dFTLinkAnimDamageFlyX2_joint5[100];
extern u16 dFTLinkAnimDamageFlyX2_joint6[48];
extern u16 dFTLinkAnimDamageFlyX2_joint9[26];
extern u16 dFTLinkAnimDamageFlyX2_joint10[114];
extern u16 dFTLinkAnimDamageFlyX2_joint11[48];
extern u16 dFTLinkAnimDamageFlyX2_joint12[26];
extern u16 dFTLinkAnimDamageFlyX2_joint13[26];
extern u16 dFTLinkAnimDamageFlyX2_joint16[26];
extern u16 dFTLinkAnimDamageFlyX2_joint17[42];
extern u16 dFTLinkAnimDamageFlyX2_joint18[26];
extern u16 dFTLinkAnimDamageFlyX2_joint20[28];
extern u16 dFTLinkAnimDamageFlyX2_joint21[94];
extern u16 dFTLinkAnimDamageFlyX2_joint23[40];
extern u16 dFTLinkAnimDamageFlyX2_joint25[86];
extern u16 dFTLinkAnimDamageFlyX2_joint26[92];
extern u16 dFTLinkAnimDamageFlyX2_joint28[50];
extern u16 dFTLinkAnimDamageFlyX2_joint29[84];

/* Joint pointer table (29 entries, 116 bytes) */
AObjEvent32 * dFTLinkAnimDamageFlyX2_joints[] = {
	(AObjEvent32 *)dFTLinkAnimDamageFlyX2_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimDamageFlyX2_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimDamageFlyX2_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTLinkAnimDamageFlyX2_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTLinkAnimDamageFlyX2_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimDamageFlyX2_joint9, /* [6] joint 9 */
	NULL, /* [7] NULL */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTLinkAnimDamageFlyX2_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTLinkAnimDamageFlyX2_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimDamageFlyX2_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimDamageFlyX2_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimDamageFlyX2_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTLinkAnimDamageFlyX2_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTLinkAnimDamageFlyX2_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimDamageFlyX2_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTLinkAnimDamageFlyX2_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTLinkAnimDamageFlyX2_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTLinkAnimDamageFlyX2_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTLinkAnimDamageFlyX2_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTLinkAnimDamageFlyX2_joint28, /* [26] joint 28 */
	NULL, /* [27] NULL */
	(AObjEvent32 *)dFTLinkAnimDamageFlyX2_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimDamageFlyX2_joint1[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAY), 901, 25,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 1), -240, -87,
	ftAnimSetValRateT(FT_ANIM_TRAY, 22), 956, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 33,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 28), 0, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -536, -42,
	ftAnimBlock(0, 14),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 7), 901,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLinkAnimDamageFlyX2_joint2[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 276, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), -107, -69,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -357, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0, -2,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 15), 151,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -357, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 21), 0,
	ftAnimBlock(0, 8),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 13), 0,
	ftAnimBlock(0, 6),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), -860,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimDamageFlyX2_joint4[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 259, 56,
	ftAnimSetValRate(FT_ANIM_ROTY), 166, -177,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 560, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 804, 82, 0, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 922, 5, -242, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 922, -10, -242, 23, 560, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 709, 242, 522,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimDamageFlyX2_joint5[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 280, 138, -326, 48, -86, -1006,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -67, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 353, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1092, -590,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1267, -109,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1092, 55,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -69, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -314, -34,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1040, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 96, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -348, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -288, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 307, -50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -250, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -274, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -400, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -245, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -121, 29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 68, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -73, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -99, 21, -410, -9, -94, -20,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimDamageFlyX2_joint6[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -500, 14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -485, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -101, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -485, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -567, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -793, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -690, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -506, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -472, 34,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimDamageFlyX2_joint9[26] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -143, 0, 245,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -143, 0, 245,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -143, 0, 245,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 445, 0, -209,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimDamageFlyX2_joint10[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1192, 13, 1484, 5, -1659, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -621, 188,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1421, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1454, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1484, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1442, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -433, 169,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -238, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1353, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1390, 6,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -249, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -340, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1464, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1549, 55,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1396, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1376, 33,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -297, -13, -1462, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1612, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -500, 35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1398, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1152, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1579, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1489, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -448, 52, 1070, -81, -1412, 77,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimDamageFlyX2_joint11[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -587, -23,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -593, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -493, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -331, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -316, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -226, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -508, -208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -644, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -612, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -553, 59,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimDamageFlyX2_joint12[26] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimDamageFlyX2_joint13[26] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 937, -804, 670,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, -804, 804,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 804, -804, 804,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 804, -804, 804,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 804, -803, 804,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimDamageFlyX2_joint16[26] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1697, -536, -339,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1697, -536, -339,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 1697, -536, -339,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1697, -536, -339,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimDamageFlyX2_joint17[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, -163,
	ftAnimSetValBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 1), -470,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 0, -83,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 7), -470,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 0, -83,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 14), -55, 22, -61, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 14), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimDamageFlyX2_joint18[26] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 379, -269, -547,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 136, -502, -98,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 271, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTLinkAnimDamageFlyX2_joint20[28] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValT(FT_ANIM_ROTZ, 8), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 460, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 460, 0,
	ftAnimSetValT(FT_ANIM_ROTY, 21), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), 460, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 343, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimDamageFlyX2_joint21[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -242, -39, -244, 112, 108, -726,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -91, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -121, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -617, -365,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -622, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -531, -11,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -81, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -157, -2,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -543, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -39, 68,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -116, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -110, 30,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 10, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -550, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -164, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -186, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -81, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -59, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -59, 0, -186, 0, -580, -29,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimDamageFlyX2_joint23[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 249, 70,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 323, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 399, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 715, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 657, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 682, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 788, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 929, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 929, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimDamageFlyX2_joint25[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 329, 523, -161, 552, -34, 97,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 273, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 852, 271, 390, 269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 872, 20, 376, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 740, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 375, -10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 366, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 219, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 177, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 232, 73,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 750, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 861, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 369, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 353, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 306, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 362, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 862, 0, 349, -3, 384, 22,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimDamageFlyX2_joint26[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, -40, 269, -192, -125, -46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -420, -132,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 70, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 77, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 73, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 148, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -528, -95,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -582, -6,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 144, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 234, 22,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -592, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -520, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 53, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -41, 48,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -323, 207,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 56, 112,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 10, 36, 244, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 31, 21, 244, 0, 118, 62,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimDamageFlyX2_joint28[50] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 424, -424,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -212,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 232, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 497, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 471, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 717, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 878, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 939, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 838, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 789, -48,
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTLinkAnimDamageFlyX2_joint29[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -427, -269, -74, -114, -69, 685,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -187, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -696, -131, 615, 363,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -691, 6, 656, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 617, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -683, -6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -188, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -145, 5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 618, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 514, -11,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -692, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1022, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1110, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1136, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1137, -1, -142, 3, 508, -6,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
