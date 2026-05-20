/* AnimJoint data for relocData file 1761 (FTNessAnimItemThrowAirSmashF) */
/* 2544 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimItemThrowAirSmashF_joint1[68];
extern u16 dFTNessAnimItemThrowAirSmashF_joint2[36];
extern u16 dFTNessAnimItemThrowAirSmashF_joint4[70];
extern u16 dFTNessAnimItemThrowAirSmashF_joint5[76];
extern u16 dFTNessAnimItemThrowAirSmashF_joint6[32];
extern u16 dFTNessAnimItemThrowAirSmashF_joint7[20];
extern u16 dFTNessAnimItemThrowAirSmashF_joint8[64];
extern u16 dFTNessAnimItemThrowAirSmashF_joint10[58];
extern u16 dFTNessAnimItemThrowAirSmashF_joint11[120];
extern u16 dFTNessAnimItemThrowAirSmashF_joint12[30];
extern u16 dFTNessAnimItemThrowAirSmashF_joint13[76];
extern u16 dFTNessAnimItemThrowAirSmashF_joint15[18];
extern u16 dFTNessAnimItemThrowAirSmashF_joint16[116];
extern u16 dFTNessAnimItemThrowAirSmashF_joint18[38];
extern u16 dFTNessAnimItemThrowAirSmashF_joint19[90];
extern u16 dFTNessAnimItemThrowAirSmashF_joint21[24];
extern u16 dFTNessAnimItemThrowAirSmashF_joint22[100];
extern u16 dFTNessAnimItemThrowAirSmashF_joint24[40];
extern u16 dFTNessAnimItemThrowAirSmashF_joint25[114];
extern u16 dFTNessAnimItemThrowAirSmashF_joint26[30];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTNessAnimItemThrowAirSmashF_joints[] = {
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashF_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashF_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashF_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashF_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashF_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashF_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashF_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashF_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashF_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashF_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashF_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashF_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashF_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashF_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashF_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashF_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashF_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashF_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashF_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashF_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimItemThrowAirSmashF_joint1[68] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -13, 0, 0, 0, 0, 242, 255, 0, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 0, 693, 721, 0, -1,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 24), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 693, -1035,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 21), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 0, 0, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 305, -291,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, 0, 401, -27, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 11), 242, 122,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 11), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimItemThrowAirSmashF_joint2[36] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 6, -209, -1, 0, 8,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -804, -148,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 21), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -804,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -804, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 18), -209, 40,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTNessAnimItemThrowAirSmashF_joint4[70] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY), 148, -116, 0, -13, 0, -98, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX, 3), 0, -37, -276, -69, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 3), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 7), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX, 7), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 299, 0, 52, -276, 226,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 997, 7, 477, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 174,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 148, -43, 0, -8, 0, -23,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 0, 0, 0, -7, 0, -46,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimItemThrowAirSmashF_joint5[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1314, 596, -925, -69, 1545, -611,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -998, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1911, 202, 933, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1719, -134, 1139, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1633, 1, 1222, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1637, 5, 1213, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), 2036, 34, 781, -31,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -994, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), -974, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2065, -174, -977, 32, 757, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1686, -375, -909, 25, 1155, 394,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1314, -372, -925, -16, 1545, 389,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimItemThrowAirSmashF_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -498, 498,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -293, -244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -498, -205,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimItemThrowAirSmashF_joint7[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0, 0, 268, 8,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 0, 0, 0, 0, 268, -10,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimItemThrowAirSmashF_joint8[64] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 194, 44, 0, 29, 0, 0, 300, 2, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 402, 51,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 0, 0, 300, -3, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 402, -230,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -366, -5, 0, 0, 0, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 329, 31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -4, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 194, -25, 0, 0, 0, -19,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTNessAnimItemThrowAirSmashF_joint10[58] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 17, 0, 0, 0, -13, 0, 4,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 0, 0, 0, 16, 0, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 160, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 160, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -14, -160, -23, 0, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -161, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), -192, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 24, 0, 20, 0, 11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTNessAnimItemThrowAirSmashF_joint11[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 573, -422, 639, -376, 178, -404,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 151, -177, 263, 26, -226, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 218, -44, 692, 469, -188, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -233, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 62, -77, 1203, 255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 63, 59, 1203, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1447, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 182, 51, 27, 203,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 470, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 167, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 559, 455,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1443, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1065, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1163, 424,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1560, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 610, 137,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 926, -28,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1587, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 1444, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1372, 137, 893, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1719, 404, 947, -48, 1297, 446,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2182, 462, 968, 21, 1786, 489,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimItemThrowAirSmashF_joint12[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -433, 433,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 19), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -279, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -433, -154,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimItemThrowAirSmashF_joint13[76] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -170, 80, 267, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -63, 143, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 75, 68, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1429, 326, 0, 10, 0, -44,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 1787,
	ftAnimSetValT(FT_ANIM_ROTX, 3), 1709,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 6), 0,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 143, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), 580,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, -5, 0, 22,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 8), 625,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -63, 267,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), -170,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimItemThrowAirSmashF_joint15[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 893, -22, -935, -4, 681, 21,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 75, 68, 30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 893, -935, 681,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTNessAnimItemThrowAirSmashF_joint16[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -41, -255, -342, 37, -714, 480,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -480, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -101, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 33, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 126, 40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 119, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -462, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -553, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -172, -41, 203, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 77, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -249, -21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -530, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -326, 37,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 54, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -182, -62,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -269, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -372, 28,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -284, 110, -251, -169,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -22, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -520, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -661, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -7, -9, -721, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -41, -34, -342, 30, -714, 7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimItemThrowAirSmashF_joint18[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 423, -423,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -211,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 288, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 395, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 434, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 423, -10,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimItemThrowAirSmashF_joint19[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 14, 10, 33, -49, 18, 115,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 198, -74, 515, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 68, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 144, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 170, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 52, -80, 340, 72, 299, -109,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 64, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 250, -32, 351, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 217, -32, 377, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 158, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 12, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 45, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -26, 39,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 160, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 24, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 18, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 14, 41, 33, 21, 18, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimItemThrowAirSmashF_joint21[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -476,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 178, 112, 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -36, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 145, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -168, -34,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -476,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimItemThrowAirSmashF_joint22[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -52, 363, 435, -125, 2414, 500,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 204, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 311, 197, 2914, 276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 343, 12, 2967, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2954, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 355, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 257, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 171, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2969, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 2960, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 179, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 283, 84,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 346, -36, 2931, -84,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2431, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -38, -33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 356, 54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 423, 11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2394, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -52, -13, 435, 11, 2414, 19,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimItemThrowAirSmashF_joint24[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 568, -561,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 408, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 505, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 578, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 568, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimItemThrowAirSmashF_joint25[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, -15, -103, -105, 18, 124,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -138, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -20, -97, 142, 257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -199, -86, 533, 269,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 669, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -193, -54, -63, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -309, -51, -180, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -304, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -176, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -156, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 475, -92,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 548, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -399, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -217, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 533, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 313, -34,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -217, -1, -156, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 11), -46, 41, -145, 37,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 284, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 38, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 27, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, 41, -103, 42, 18, -9,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimItemThrowAirSmashF_joint26[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -339, -256, -211,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -150, 8, -164, 14, -125, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -222, -9, -49, -4, 96, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -339, -256, -211,
	ftAnimEnd(),
};
