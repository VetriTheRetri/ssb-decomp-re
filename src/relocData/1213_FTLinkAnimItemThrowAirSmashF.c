/* AnimJoint data for relocData file 1213 (FTLinkAnimItemThrowAirSmashF) */
/* 2288 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimItemThrowAirSmashF_joint1[8];
extern u16 dFTLinkAnimItemThrowAirSmashF_joint2[46];
extern u16 dFTLinkAnimItemThrowAirSmashF_joint4[38];
extern u16 dFTLinkAnimItemThrowAirSmashF_joint5[110];
extern u16 dFTLinkAnimItemThrowAirSmashF_joint6[52];
extern u16 dFTLinkAnimItemThrowAirSmashF_joint9[8];
extern u16 dFTLinkAnimItemThrowAirSmashF_joint10[166];
extern u16 dFTLinkAnimItemThrowAirSmashF_joint11[76];
extern u16 dFTLinkAnimItemThrowAirSmashF_joint12[34];
extern u16 dFTLinkAnimItemThrowAirSmashF_joint13[8];
extern u16 dFTLinkAnimItemThrowAirSmashF_joint16[34];
extern u16 dFTLinkAnimItemThrowAirSmashF_joint17[34];
extern u16 dFTLinkAnimItemThrowAirSmashF_joint18[50];
extern u16 dFTLinkAnimItemThrowAirSmashF_joint20[8];
extern u16 dFTLinkAnimItemThrowAirSmashF_joint21[118];
extern u16 dFTLinkAnimItemThrowAirSmashF_joint23[32];
extern u16 dFTLinkAnimItemThrowAirSmashF_joint25[52];
extern u16 dFTLinkAnimItemThrowAirSmashF_joint26[100];
extern u16 dFTLinkAnimItemThrowAirSmashF_joint28[32];
extern u16 dFTLinkAnimItemThrowAirSmashF_joint29[80];

/* Joint pointer table (29 entries, 116 bytes) */
AObjEvent32 * dFTLinkAnimItemThrowAirSmashF_joints[] = {
	(AObjEvent32 *)dFTLinkAnimItemThrowAirSmashF_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimItemThrowAirSmashF_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimItemThrowAirSmashF_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTLinkAnimItemThrowAirSmashF_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTLinkAnimItemThrowAirSmashF_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimItemThrowAirSmashF_joint9, /* [6] joint 9 */
	NULL, /* [7] NULL */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTLinkAnimItemThrowAirSmashF_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTLinkAnimItemThrowAirSmashF_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimItemThrowAirSmashF_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimItemThrowAirSmashF_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimItemThrowAirSmashF_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTLinkAnimItemThrowAirSmashF_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTLinkAnimItemThrowAirSmashF_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimItemThrowAirSmashF_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTLinkAnimItemThrowAirSmashF_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTLinkAnimItemThrowAirSmashF_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTLinkAnimItemThrowAirSmashF_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTLinkAnimItemThrowAirSmashF_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTLinkAnimItemThrowAirSmashF_joint28, /* [26] joint 28 */
	NULL, /* [27] NULL */
	(AObjEvent32 *)dFTLinkAnimItemThrowAirSmashF_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimItemThrowAirSmashF_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 744, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLinkAnimItemThrowAirSmashF_joint2[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 32, 274, 83,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -86, 8, -51, 45, -2, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 84, 6, 550, 71, 73, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -31, -13, 587, -19, -3, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -107, 5, 276, -26, 0, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 32, 274, 83,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimItemThrowAirSmashF_joint4[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 315, 166, 56,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 528, 64, -356, 8, -457, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 701, 66, 217, 101, 352, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 996, -21, 355, -2, 935, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 315, 166, 56,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimItemThrowAirSmashF_joint5[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1300, 27, -1347, 86, -1261, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1328, 298, -1261, 130, -1356, -415,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1897, 488, -1086, -8, -2092, -580,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2305, 201, -1279, -76, -2517, -207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2300, -43, -1238, 74, -2507, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -986, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2020, -276, -2209, 295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1665, -304, -1831, 328,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1207, -68, -1304, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1025, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1350, -62,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1134, -62, -1209, 85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1159, -72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1280, 31,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1404, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -1399, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1362, 25, -1230, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1300, 19, -1347, 14, -1261, -31,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimItemThrowAirSmashF_joint6[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -744, -163,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -907, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -754, 277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -352, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -373, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -591, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -508, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -452, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -427, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -768, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -755, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -744, 10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimItemThrowAirSmashF_joint9[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 278, 266, 193,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimItemThrowAirSmashF_joint10[166] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2728, 125, 60, -63, -3053, 160,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2654, 242,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 400, 208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2602, 289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2150, 347,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2070, -393,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2407, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3157, -564,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2694, -598, 632, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3268, -364, 307, -203, -3721, -364,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3859, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3424, -117, 225, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 492, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -4041, -82,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3895, -46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -4298, -97,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 544, 51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 721, 170,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4125, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4143, -290, -4386, -503,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4706, -162, 994, 212, -5305, -746,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1254, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4468, -272, -5879, -721,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -5250, -440, -6748, -505,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5350, 155, 1555, -143, -6890, 298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4939, -230, 967, -526, -6150, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5811, -463, 501, -401, -6533, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5867, -67, 165, -220, -6293, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5945, -78, 60, -104, -6270, 22,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimItemThrowAirSmashF_joint11[76] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -616, -297,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -955, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -596, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -553, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -127, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -187, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -340, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -446, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -625, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -695, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1113, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1138, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -922, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -981, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -831, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -835, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -616, 218,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimItemThrowAirSmashF_joint12[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 0, -209, -1, 0, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 12, 74, -227, 0, 190, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 447, -1, -213, 1, 37, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -209, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTLinkAnimItemThrowAirSmashF_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimItemThrowAirSmashF_joint16[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1508, 346, -843,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 1697, 9, -536, -31, -339, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1654, 46, -149, 45, -275, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 2119, -18, -127, 62, 77, -71,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1508, 346, -843,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimItemThrowAirSmashF_joint17[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 383, 22, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -29, -83,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, -365, -7, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, -163, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimItemThrowAirSmashF_joint18[50] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 112, 18, 117, -2, 0, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 111, 5, -214, -113, -64, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 143, -5, -563, -41, -148, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 78, 5, -463, 30, -75, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 177, -6, -378, 21, -46, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 0, -199, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimItemThrowAirSmashF_joint20[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 97, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimItemThrowAirSmashF_joint21[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 30, 51, 139, -1, -782, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -5, -134,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 546, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -475, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -350, 99,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -321, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -147, -135,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -456, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 530, -76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 208, -82,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -650, -98, -505, -110,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -619, 28, -684, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 226, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 331, -36,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -586, 37, -735, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -6, 79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -738, -21,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 291, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 40, -18,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 62, 57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 132, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -760, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -776, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 30, -10, 139, 7, -782, -5,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimItemThrowAirSmashF_joint23[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1205, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 887, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 719, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1038, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1100, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1207, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1205, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimItemThrowAirSmashF_joint25[52] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -1135, -122,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -1425, -1538,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1839, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1878, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1853, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1892, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -2249, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2234, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1939, 446,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1340, 371,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1156, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1140, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1135, 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTLinkAnimItemThrowAirSmashF_joint26[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 301, -51, 318, 5, -270, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -697, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -555, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 290, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 329, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 288, 36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -753, -78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -833, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 338, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 349, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -571, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -16, 101,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -807, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -471, 74,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 372, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 323, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 81, 90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 293, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -400, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -278, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 301, 8, 318, -4, -270, 8,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimItemThrowAirSmashF_joint28[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 845, 25,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 913, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 850, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 997, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 982, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 852, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 845, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimItemThrowAirSmashF_joint29[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -647, -414, -89, 0, 252, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), -89, 0, 252, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1061, -535,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1718, -300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1662, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1568, 279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -617, 341,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -421, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -443, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -548, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1185, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1270, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1067, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -857, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -700, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -647, 53, -89, 0, 252, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
