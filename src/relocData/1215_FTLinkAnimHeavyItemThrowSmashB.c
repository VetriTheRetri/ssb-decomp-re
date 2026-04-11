/* AnimJoint data for relocData file 1215 (FTLinkAnimHeavyItemThrowSmashB) */
/* 2384 bytes: 120-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimHeavyItemThrowSmashB_joint1[30];
extern u16 dFTLinkAnimHeavyItemThrowSmashB_joint2[42];
extern u16 dFTLinkAnimHeavyItemThrowSmashB_joint4[74];
extern u16 dFTLinkAnimHeavyItemThrowSmashB_joint5[96];
extern u16 dFTLinkAnimHeavyItemThrowSmashB_joint6[48];
extern u16 dFTLinkAnimHeavyItemThrowSmashB_joint9[8];
extern u16 dFTLinkAnimHeavyItemThrowSmashB_joint10[178];
extern u16 dFTLinkAnimHeavyItemThrowSmashB_joint11[84];
extern u16 dFTLinkAnimHeavyItemThrowSmashB_joint12[8];
extern u16 dFTLinkAnimHeavyItemThrowSmashB_joint13[10];
extern u16 dFTLinkAnimHeavyItemThrowSmashB_joint16[28];
extern u16 dFTLinkAnimHeavyItemThrowSmashB_joint17[40];
extern u16 dFTLinkAnimHeavyItemThrowSmashB_joint18[40];
extern u16 dFTLinkAnimHeavyItemThrowSmashB_joint20[8];
extern u16 dFTLinkAnimHeavyItemThrowSmashB_joint21[84];
extern u16 dFTLinkAnimHeavyItemThrowSmashB_joint23[32];
extern u16 dFTLinkAnimHeavyItemThrowSmashB_joint25[80];
extern u16 dFTLinkAnimHeavyItemThrowSmashB_joint26[76];
extern u16 dFTLinkAnimHeavyItemThrowSmashB_joint28[24];
extern u16 dFTLinkAnimHeavyItemThrowSmashB_joint29[142];

/* Joint pointer table (30 entries, 120 bytes) */
u32 dFTLinkAnimHeavyItemThrowSmashB_joints[] = {
	(u32)dFTLinkAnimHeavyItemThrowSmashB_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimHeavyItemThrowSmashB_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimHeavyItemThrowSmashB_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimHeavyItemThrowSmashB_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimHeavyItemThrowSmashB_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimHeavyItemThrowSmashB_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimHeavyItemThrowSmashB_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimHeavyItemThrowSmashB_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimHeavyItemThrowSmashB_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimHeavyItemThrowSmashB_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimHeavyItemThrowSmashB_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimHeavyItemThrowSmashB_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimHeavyItemThrowSmashB_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimHeavyItemThrowSmashB_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimHeavyItemThrowSmashB_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimHeavyItemThrowSmashB_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimHeavyItemThrowSmashB_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimHeavyItemThrowSmashB_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimHeavyItemThrowSmashB_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	(u32)dFTLinkAnimHeavyItemThrowSmashB_joint29, /* [28] joint 29 */
	0xFFFF022E, /* [29] END */
};

/* Joint 1 */
u16 dFTLinkAnimHeavyItemThrowSmashB_joint1[30] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 719, -80, 0, 52,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 782, 33, 99, 52,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 782, -18, 99, -4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 755, 37, 92, -31,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 18), 901, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimHeavyItemThrowSmashB_joint2[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, -4, 276, -18, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -173, -4, 0, -18, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -173, 36, 0, 4, 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 266, 2, 48, 11, 52, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -107, 276, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTLinkAnimHeavyItemThrowSmashB_joint4[74] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 338, -21, 135, -11, 99, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -56, -31, 0, -9, 0, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -138, -16, 0, 3, 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -207, 66, 27, 1, 24, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 329, 159, 7, 9, 70, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 749, 52, 83, 9, 249, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 749, -17, 83, 0, 249, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 578, -48, 82, 8, 224, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 259, 166, 56,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTLinkAnimHeavyItemThrowSmashB_joint5[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -266, 1, 185, 0, -1283, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 62, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), -28, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -1318, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1314, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1040, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 40, -18, -1007, 104,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -398, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -548, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 29, 72, -551, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -561, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 480, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 690, 144,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 376, -66,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -414, -5, -432, 126,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -332, 10, -90, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 325, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 283, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 280, -3, -326, 5, -86, 4,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimHeavyItemThrowSmashB_joint6[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -612, -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -621, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -603, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -325, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -260, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -480, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -424, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -600, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -630, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -514, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimHeavyItemThrowSmashB_joint9[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimHeavyItemThrowSmashB_joint10[178] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2064, 0, 1313, -2, 4, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 1301, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 13), -2119, -6, -58, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2113, 27, -51, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1841, -3, 402, 37,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1306, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1398, -17,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1853, -17, 432, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1981, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 462, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 685, 206,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 902, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1393, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1608, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2176, -148,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2432, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 878, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 750, -79,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1459, -154,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1026, -121,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2457, 33, 659, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2366, 484, 911, -15, 628, 234,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1134, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1489, 559, 1128, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1247, -276, 570, -724,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2041, -442, 1250, 210, -321, -513,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2133, 159, 1555, -141, -456, 302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1722, -230, 967, -526, 283, 178,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 229, -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2594, -509, -99, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2741, -103, -26, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2800, -59, 123, -105, -50, -24,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimHeavyItemThrowSmashB_joint11[84] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -453, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -392, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -400, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -452, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -365, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -151, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -360, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -259, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -468, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -582, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -660, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -695, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1113, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1138, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -922, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -981, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -831, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -772, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 185,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimHeavyItemThrowSmashB_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimHeavyItemThrowSmashB_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 804, -804, 804, 83, 0, 12,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTLinkAnimHeavyItemThrowSmashB_joint16[28] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1697, -536, -339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1697, 7, -536, 20, -339, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 1892, -2, -61,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1697, -536, -339,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimHeavyItemThrowSmashB_joint17[40] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -163, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -14, -163, -3, 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -213, -14, -211, -3, -28, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -213, 14, -211, 3, -28, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -163, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimHeavyItemThrowSmashB_joint18[40] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -21, -199, 8, 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -315, -21, -71, 8, 34, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -315, 21, -71, -8, 34, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -199, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTLinkAnimHeavyItemThrowSmashB_joint20[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimHeavyItemThrowSmashB_joint21[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, -4, -329, 0, -154, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 174, -111,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -232, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), -283, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -275, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -438, -50,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 60, -109,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -152, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -254, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -245, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -474, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -243, 4,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -132, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 103, 9,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -241, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -241, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, 0, -244, 1, 108, 5,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimHeavyItemThrowSmashB_joint23[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 735, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 395, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 451, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 393, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 367, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 254, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimHeavyItemThrowSmashB_joint25[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 250, -9, -200, -19, -236, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -124, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -331, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 163, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 165, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 610, -10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -148, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -36, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -282, 57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -123, -12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 586, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 325, 3,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -135, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -162, 0,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 328, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, 1, -161, 0, -34, 2,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimHeavyItemThrowSmashB_joint26[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1658, -13, 1254, 12, 1193, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 1552, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 1421, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 1360, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1326, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 787, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1550, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 1847, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1395, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 1337, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 799, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 1477, 11,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1856, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1878, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1879, 1, 1338, 1, 1483, 6,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimHeavyItemThrowSmashB_joint28[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 837, 15,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 762, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 772, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 429, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimHeavyItemThrowSmashB_joint29[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2007, -8, -1558, 5, 1378, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -1528, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), 1450, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), -1985, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1982, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -2056, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1513, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -1532, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1458, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 1537, 2,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2046, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -2034, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2036, -1, -1534, -1, 1538, 1,
	ftAnimEnd(),
	0x28E2, 0xFCDC, 0xFFDD, 0x0000, 0x0000, 0x0384, 0xFFCF, 0x0078, 0xFFFE, 0x480C, 0x0000, 0x0000, 0x2803, 0x000A, 0xFC21, 0xFFEE, 0x20E1, 0x0005, 0x0000, 0x0000, 0x0391, 0xFFAA, 0xFF83, 0xFE4B, 0x20E1, 0x0005, 0x0000, 0x0000, 0x0317, 0xFF82, 0xFE56, 0xFE9E, 0x20E3, 0x0005, 0xFBC3, 0x0023, 0x0000, 0x0000, 0x02F3, 0x0055, 0xFDC8, 0x00EE, 0x2803, 0x0005, 0xFD84, 0x002B, 0x20E1, 0x0003, 0x0000, 0x0000, 0x036D, 0x0072, 0xFF45, 0x0637, 0x20E1, 0x0002, 0x0000, 0x0000, 0x033B, 0x00DA, 0x01AA, 0x05A6, 0x38E3, 0x0014, 0x0000, 0x0000, 0x05C5, 0x0ECF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
