/* AnimJoint data for relocData file 1672 (FTNessAnimTurn) */
/* 2160 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimTurn_joint1[50];
extern u16 dFTNessAnimTurn_joint2[20];
extern u16 dFTNessAnimTurn_joint4[48];
extern u16 dFTNessAnimTurn_joint5[100];
extern u16 dFTNessAnimTurn_joint6[52];
extern u16 dFTNessAnimTurn_joint7[10];
extern u16 dFTNessAnimTurn_joint8[46];
extern u16 dFTNessAnimTurn_joint10[26];
extern u16 dFTNessAnimTurn_joint11[94];
extern u16 dFTNessAnimTurn_joint12[46];
extern u16 dFTNessAnimTurn_joint13[22];
extern u16 dFTNessAnimTurn_joint15[10];
extern u16 dFTNessAnimTurn_joint16[86];
extern u16 dFTNessAnimTurn_joint18[44];
extern u16 dFTNessAnimTurn_joint19[86];
extern u16 dFTNessAnimTurn_joint21[26];
extern u16 dFTNessAnimTurn_joint22[88];
extern u16 dFTNessAnimTurn_joint24[44];
extern u16 dFTNessAnimTurn_joint25[100];
extern u16 dFTNessAnimTurn_joint26[30];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTNessAnimTurn_joints[] = {
	(AObjEvent32 *)dFTNessAnimTurn_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimTurn_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimTurn_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTNessAnimTurn_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTNessAnimTurn_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimTurn_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNessAnimTurn_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNessAnimTurn_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTNessAnimTurn_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTNessAnimTurn_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimTurn_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimTurn_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTNessAnimTurn_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTNessAnimTurn_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTNessAnimTurn_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTNessAnimTurn_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTNessAnimTurn_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTNessAnimTurn_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTNessAnimTurn_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTNessAnimTurn_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimTurn_joint1[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -16, -2, 537, 0, -28, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -252, -141,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 118, 0, 536, -2, -6, 38,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, -36, 493, 1, -7, -38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1608, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -16, 2, 537, 131, -28, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimTurn_joint2[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 28, 0, -360, 0, 8, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 28, 0, -360, 0, 8, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimTurn_joint4[48] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 5), 178,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 89, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 12), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 268, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 268, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 0, 0, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimTurn_joint5[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -410, 86, -261, -2, 415, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -223, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -323, 132, 382, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -145, 169, 262, -134,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 59, -15, 66, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -196, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -308, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -15, -80, 127, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -101, 61, 134, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 106, 155, -270, 44, -196, -278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 209, -42, -218, -9, -421, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, -199, -289, -8, -34, 392,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -145, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -189, -138, 362, 299,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -256, -62, 564, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -314, -58, -143, 2, 552, -12,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimTurn_joint6[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -473, -92,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -566, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -694, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -729, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -640, 258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -211, 315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -334, -303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -607, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -681, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -669, 11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimTurn_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimTurn_joint8[46] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, 0, 364, 0, -32, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -4, -74, 136, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 0, 0, 300, -1, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 178,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -157, 0, 4, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 364, 0, -32, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTNessAnimTurn_joint10[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimTurn_joint11[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -415, 224, 569, -32, -119, 393,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -191, 32, 537, -100, 274, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -350, -100, 369, -120, 276, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -401, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 404, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 391, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 409, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -374, 47, 386, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -317, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 334, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 518, 48, 91, -307,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -541, -143, 502, -82, -281, -224,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -462, 44, -138, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 352, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 327, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 489, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -462, 0, 550, 61, -178, -40,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimTurn_joint12[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, 96,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -462, 279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -518, -212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -678, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -706, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -269, 437,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimTurn_joint13[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 90, 54, 126,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 720, 54, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 90, 0, 54, 0, 126, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimTurn_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimTurn_joint16[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -365, 14, -279, 16, -297, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -148, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -243, 79, -379, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -151, 80, -386, -94,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -712, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -81, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -194, -151, -127, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -383, -94, -8, 121, -580, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -383, 18, 115, -62, -384, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -322, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -132, -174, -485, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -355, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -232, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -354, -35, -261, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -392, -37, -248, 13, -290, 65,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimTurn_joint18[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 396, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 427, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 454, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1017, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 665, -490,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 36, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 428, 248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 533, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 537, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 482, -55,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimTurn_joint19[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 5, 48, 12, 46, 26, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 152, 3, 82, -5, 6, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 123, -4, 68, 10, -31, -119,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 207, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 103, 12, -231, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 92, 7, -237, 173,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 413, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 368, 73, 119, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 354, -94, 259, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 179, -138, 164, -96, 116, -218,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 34, -21, -85, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 66, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 6, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 35, 0, 15, 9, -83, 1,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimTurn_joint21[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -66, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -133, -36, 0, -7, 0, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -285, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -46, -91,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -66, 0, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimTurn_joint22[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -127, 56, 136, -117, -210, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -34, -9, -74, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -195, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -88, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -49, -8, -54, 28, 12, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 61, 83,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -119, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 11, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -371, -233,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 150, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -207, -22, 141, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -163, 67, -12, -89, -640, -142,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 71, 130, -426, 284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -72, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -170, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -104, 66, 223, 151, -87, 338,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimTurn_joint24[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 407, 186,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 651, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 491, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 312, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 341, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 509, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 548, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1128, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 819, -455,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 217, -601,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimTurn_joint25[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 76, -133, 25, 84, -202, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -56, -73, 109, 170, -291, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -70, -38, 365, 188, -278, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -133, -120, 486, 90, -324, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -311, -43, 547, -18, -476, -50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 101, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -220, 116, -425, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -78, 146, -376, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 159, 6, -207, 124,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -41, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 85, -1, 327, 252, -63, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 156, -6, 463, -98, -134, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 72, -8, 131, -216, -308, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 139, 66, 31, -100, -143, 165,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimTurn_joint26[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 56,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 56, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -225, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -305, 93,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 56,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
