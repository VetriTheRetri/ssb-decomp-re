/* AnimJoint data for relocData file 1211 (FTLinkAnimItemThrowAirSmashB) */
/* 2560 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimItemThrowAirSmashB_joint1[26];
extern u16 dFTLinkAnimItemThrowAirSmashB_joint2[38];
extern u16 dFTLinkAnimItemThrowAirSmashB_joint4[46];
extern u16 dFTLinkAnimItemThrowAirSmashB_joint5[128];
extern u16 dFTLinkAnimItemThrowAirSmashB_joint6[56];
extern u16 dFTLinkAnimItemThrowAirSmashB_joint9[26];
extern u16 dFTLinkAnimItemThrowAirSmashB_joint10[232];
extern u16 dFTLinkAnimItemThrowAirSmashB_joint11[92];
extern u16 dFTLinkAnimItemThrowAirSmashB_joint12[26];
extern u16 dFTLinkAnimItemThrowAirSmashB_joint13[26];
extern u16 dFTLinkAnimItemThrowAirSmashB_joint16[26];
extern u16 dFTLinkAnimItemThrowAirSmashB_joint17[34];
extern u16 dFTLinkAnimItemThrowAirSmashB_joint18[42];
extern u16 dFTLinkAnimItemThrowAirSmashB_joint20[34];
extern u16 dFTLinkAnimItemThrowAirSmashB_joint21[86];
extern u16 dFTLinkAnimItemThrowAirSmashB_joint23[52];
extern u16 dFTLinkAnimItemThrowAirSmashB_joint25[46];
extern u16 dFTLinkAnimItemThrowAirSmashB_joint26[112];
extern u16 dFTLinkAnimItemThrowAirSmashB_joint28[40];
extern u16 dFTLinkAnimItemThrowAirSmashB_joint29[54];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimItemThrowAirSmashB_joints[] = {
	(u32)dFTLinkAnimItemThrowAirSmashB_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimItemThrowAirSmashB_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimItemThrowAirSmashB_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimItemThrowAirSmashB_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimItemThrowAirSmashB_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimItemThrowAirSmashB_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimItemThrowAirSmashB_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimItemThrowAirSmashB_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimItemThrowAirSmashB_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimItemThrowAirSmashB_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimItemThrowAirSmashB_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimItemThrowAirSmashB_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimItemThrowAirSmashB_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimItemThrowAirSmashB_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimItemThrowAirSmashB_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimItemThrowAirSmashB_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimItemThrowAirSmashB_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimItemThrowAirSmashB_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimItemThrowAirSmashB_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	(u32)dFTLinkAnimItemThrowAirSmashB_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimItemThrowAirSmashB_joint1[26] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 744, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 744, 4, 0, 2,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -293,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 750, -195,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 744, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLinkAnimItemThrowAirSmashB_joint2[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 32, 274, 83,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 145, 18, 244, -5, 68, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 145, -80, 244, -11, 68, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -177, -3, 196, 1, 45, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 27), 32, 274, 83,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimItemThrowAirSmashB_joint4[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 315, 166, 56,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -253, -40, -731, -90, 172, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 73, 272, -374, 205, -59, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 834, 106, 88, 55, 353, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 1137, -19, 176, 2, 601, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 315, 166, 56,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimItemThrowAirSmashB_joint5[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1300, 29, -1347, 60, -1261, -95,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1525, 245,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1207, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1357, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1691, -377,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1821, 206,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1644, -49,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -1277,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1236, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2113, 154,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1860, 40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1370, -121,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1298, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1608, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1547, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1818, 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1684, -17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1268, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -1335, -11,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1697, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1293, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1544, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1301, -1,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1276, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1344, -6, -1265, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1300, 0, -1347, -3, -1261, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTLinkAnimItemThrowAirSmashB_joint6[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -744, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -618, 235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -285, 309,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -285, -284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -827, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -849, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -453, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -379, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -700, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -724, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -738, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -744, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimItemThrowAirSmashB_joint9[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 278, 266, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 4, -54, 7, -51, 76, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 4, 8, 7, 8, 76, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 278, 266, 193,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimItemThrowAirSmashB_joint10[232] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 488, 139, 60, -33, 163, 83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 321, 456,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 628, 300, 246, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1089, -80, 196, -448,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 466, -238, 939, 338, -650, -360,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 939, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 613, 0, -525, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 466, 202, -650, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1019, 372, 932, 74, -66, 411,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1209, -67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 286, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1356, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1457, 79,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1457, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1133, -74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 949, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 379, 86,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 811, 59,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1534, 83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1652, -163,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 917, -79, 855, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 570, -334, 446, -621,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1357, -341,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 614, -323,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 119, -47, -480, -651,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1065, -305,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 475, 117, 323, -80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 529, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 354, -245,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -416, -245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1467, -423,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 355, -195, -1912, -286,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 53, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -506, -54, -2039, -76,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -458, 233, -1845, 381,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 354, 270,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 345, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -57, 407, -1302, 552,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 614, 133, -257, 320,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 622, 5, -99, 155,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 510, -39, 167, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 165, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 74, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 488, -22, 60, -14, 163, -4,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimItemThrowAirSmashB_joint11[92] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -616, -251,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -946, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -532, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -363, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -50, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -264, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -451, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -429, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -742, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -861, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -695, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1113, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1183, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -922, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1076, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -922, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -862, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -839, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -709, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -616, 92,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimItemThrowAirSmashB_joint12[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, -209, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, -209, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 0, -209, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTLinkAnimItemThrowAirSmashB_joint13[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1114, -804, 494,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 804, -62, -804, 0, 804, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 804, 9, -804, 0, 804, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 1114, -804, 494,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTLinkAnimItemThrowAirSmashB_joint16[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1508, 346, -843,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1697, 37, -536, -176, -339, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1697, -5, -536, 27, -339, -15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 1508, 346, -843,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimItemThrowAirSmashB_joint17[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 465, 125, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -11, 465, -77, 0, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -81, 0, -73, -21, 119, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, -163, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimItemThrowAirSmashB_joint18[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 92, 18, -199, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 92, -79, -199, -46, 0, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -467, -61, -523, -22, 243, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -648, 18, -473, 12, 464, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 0, -199, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimItemThrowAirSmashB_joint20[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 97, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -19, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 8, 0, 30, 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 82, 3, 306, 0, 20, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 97, 0, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimItemThrowAirSmashB_joint21[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 30, 116, 139, 31, -782, 124,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 275, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -323, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 73, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -60, -97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 124, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 247, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 86, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -475, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -758, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 133, 7, -730, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -951, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), 140, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 77, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), 29, 2,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -947, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -786, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 30, 1, 139, 0, -782, 3,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimItemThrowAirSmashB_joint23[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1205, -46,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1001, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 785, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 667, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 746, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 566, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 381, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 433, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 470, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 1201, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1204, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1205, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimItemThrowAirSmashB_joint25[46] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 2081, -134, -1425, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), -1538,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 34), -1425,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1647, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1788, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 2058, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2060, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 22), 2054, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2068, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2078, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2081, 3, -1425, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTLinkAnimItemThrowAirSmashB_joint26[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 301, -80, 318, 22, -270, -127,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 27, -177, 336, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -397, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -711, -298,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1034, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -134, -93, 241, -50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 275, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 142, -54,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -812, 236,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -482, -101,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 257, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 350, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 55, -100, -640, -175,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 27, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -914, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -901, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -272, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 360, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 319, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 56, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 300, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 301, 1, 318, -1, -270, 2,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimItemThrowAirSmashB_joint28[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 845, 89,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1104, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1077, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 998, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 927, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1153, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1153, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 847, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 845, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimItemThrowAirSmashB_joint29[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -647, -27, -89, 0, 252, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 34), -89, 0, 252, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -521, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -600, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -598, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -547, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), -673, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -675, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -648, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -647, 1, 252, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -89,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
