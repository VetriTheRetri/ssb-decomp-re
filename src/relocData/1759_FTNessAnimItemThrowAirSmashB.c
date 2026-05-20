/* AnimJoint data for relocData file 1759 (FTNessAnimItemThrowAirSmashB) */
/* 2928 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimItemThrowAirSmashB_joint1[54];
extern u16 dFTNessAnimItemThrowAirSmashB_joint2[44];
extern u16 dFTNessAnimItemThrowAirSmashB_joint4[74];
extern u16 dFTNessAnimItemThrowAirSmashB_joint5[94];
extern u16 dFTNessAnimItemThrowAirSmashB_joint6[40];
extern u16 dFTNessAnimItemThrowAirSmashB_joint7[18];
extern u16 dFTNessAnimItemThrowAirSmashB_joint8[76];
extern u16 dFTNessAnimItemThrowAirSmashB_joint10[30];
extern u16 dFTNessAnimItemThrowAirSmashB_joint11[128];
extern u16 dFTNessAnimItemThrowAirSmashB_joint12[32];
extern u16 dFTNessAnimItemThrowAirSmashB_joint13[60];
extern u16 dFTNessAnimItemThrowAirSmashB_joint15[18];
extern u16 dFTNessAnimItemThrowAirSmashB_joint16[108];
extern u16 dFTNessAnimItemThrowAirSmashB_joint18[56];
extern u16 dFTNessAnimItemThrowAirSmashB_joint19[106];
extern u16 dFTNessAnimItemThrowAirSmashB_joint21[54];
extern u16 dFTNessAnimItemThrowAirSmashB_joint22[146];
extern u16 dFTNessAnimItemThrowAirSmashB_joint24[54];
extern u16 dFTNessAnimItemThrowAirSmashB_joint25[136];
extern u16 dFTNessAnimItemThrowAirSmashB_joint26[84];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTNessAnimItemThrowAirSmashB_joints[] = {
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashB_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashB_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashB_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashB_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashB_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashB_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashB_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashB_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashB_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashB_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashB_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashB_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashB_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashB_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashB_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashB_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashB_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashB_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashB_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashB_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimItemThrowAirSmashB_joint1[54] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -13, 0, 0, 0, 0, 245, -86, 0, -44,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 298, 42, -60, 323,
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), 298, -21,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 0, 0, 242, 491,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), 0, 0, 247, -107,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 15), 0, 0, 0, -20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 14), 245, 41,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimItemThrowAirSmashB_joint2[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 7, -209, -44, 0, 4,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 20, 20, -1323, -21, -44, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 103, -10, -319, 661, -165, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -5, 0, 5, 0, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 0, -1, -209, -9, 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimItemThrowAirSmashB_joint4[74] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX), 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY), 148, -72, 0, 13, 0, -63, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 7), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 465, -48, 224, 38, 104, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -44, -146, 154, 12, 158, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 26, 131, 260, 42, 11, 74,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 480, 104, 323, 7, 454, 55,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 17), 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 759, -20, 312, -20, 403, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 148, -9, 0, -2, 0, -5,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimItemThrowAirSmashB_joint5[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -69, 167, -627, 24, -272, -176,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -599, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 298, 125, -673, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 444, 61, -838, -66,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 80, -33, -462, 33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -678, -62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -701, 11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 112, 6, -494, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 398, 24, -773, -25,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -689, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -645, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 415, -55, -791, 59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -33, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -408, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -636, 9, -312, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -69, -35, -627, 8, -272, 39,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimItemThrowAirSmashB_joint6[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -518, 67,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -261, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -464, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -518, -53,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimItemThrowAirSmashB_joint7[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0, 0, 268, 8,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 0, 0, 268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTNessAnimItemThrowAirSmashB_joint8[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 194, 10, 0, 47, 0, -11, 0, 0, 300, 2, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 82, -48, 110, 201,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 0, 300, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -73, 805, -56, 0, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -137, -10, -59, -561, 28, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -20, 68, -317, -160, -8, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1, 10, -380, -62, -7, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 11, -442, 22, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 194, 3, 0, 6, 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNessAnimItemThrowAirSmashB_joint10[30] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -13, 0, 4,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, -4, 0, 3, 0, -2,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimItemThrowAirSmashB_joint11[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 573, -617, 639, 61, 178, -632,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 615, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -43, -219, -454, -228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 135, 109, -278, 109,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 147, -56, -266, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 559, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 599, 415,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 64, 66, 1390, 328, -74, 166,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 320, 235,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 964, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1255, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1113, -93,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1087, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 536, 168,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1070, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1105, 139,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1547, 12,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1089, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 936, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1552, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1446, -62,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1017, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1379, 263, 958, 276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1972, 401, 920, 16, 1569, 414,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2182, 209, 968, 48, 1786, 217,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimItemThrowAirSmashB_joint12[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -433, 423,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -289, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -433, -143,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimItemThrowAirSmashB_joint13[60] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -170, 108, 267, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -63, 143, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 75, 68, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1824, 167, 0, 7, 0, -29,
	ftAnimSetValT(FT_ANIM_ROTX, 4), 1340,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 4), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 143, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -4, 0, 17,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), 580,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -63, 267,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 12), -170,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTNessAnimItemThrowAirSmashB_joint15[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 893, -22, -935, -4, 681, 21,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 75, 68, 30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 893, -935, 681,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTNessAnimItemThrowAirSmashB_joint16[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1655, 142, -1266, 169, 902, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1512, 365, -1097, 291, 845, -239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -924, 217, -683, 422, 424, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1077, -60, -252, 311, 650, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1045, -83, -60, -444, 666, -154,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1566, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1141, -751, 341, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1563, -205, 855, 318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1596, -29, -1552, 8, 978, 118,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1653, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1546, 5, 1092, 108,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1273, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1238, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1168, -71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 881, 18,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1640, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1647, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1655, -7, -1266, 7, 902, 20,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimItemThrowAirSmashB_joint18[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 416, 156,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 619, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 485, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 447, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 881, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 733, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 675, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 352, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 431, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 561, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 501, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 448, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 416, -31,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimItemThrowAirSmashB_joint19[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 14, -51, 33, -63, 19, -67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 14, 151,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -5, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -36, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 140, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 49, -30, 273, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 80, 105, 430, -7, 22, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 260, -11, 259, -265, 241, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 56, -88, -100, -178, -28, -173,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 98, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -80, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -97, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 38, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 107, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 25, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -97, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -180, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -140, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 7, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 14, -10, 33, -4, 19, 12,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimItemThrowAirSmashB_joint21[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -476, 178, 112,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 149, 286,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 102, 543,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 670, -272, 178, 85, 112, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -668, -558, 360, -85, 53, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -446, 55, 6, -44, -77, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -279, -1, 51, 9, -28, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -476, 178, 112,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimItemThrowAirSmashB_joint22[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -45, -63, 435, -152, -794, -118,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -445, -280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 9, -285, -930, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -287, -192, -786, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -753, 118, -375, 226, -618, 455,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -208, 232, 164, 191, 123, 647,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -288, -48, 7, -85, 676, 282,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 42, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -6, -13, 689, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -110, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 684, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 531, -144,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 82, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -129, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 380, 215,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 120, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, -230, 557, 95, -136, -322,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 325, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -339, -261, -561, -342,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -377, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -822, -192,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -915, 104,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 328, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 424, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -279, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -166, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -45, 121, 435, 11, -794, 120,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimItemThrowAirSmashB_joint24[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 562, 158,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 818, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 659, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 536, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 528, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -264,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 313, 272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1061, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1125, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 658, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 562, -95,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimItemThrowAirSmashB_joint25[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, -79, -102, -71, 18, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 110, 198, -185, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -39, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -122, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 384, 99, -147, 239, 189, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 308, 242, 292, 350, -48, 254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 868, 134, 553, 116, 698, 358,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 528, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 578, -227, 668, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 413, -143, 620, -51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 34, -119,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -259, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 536, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 273, -173,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -93, -98,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 121, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 80, -148,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -23, -16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -255, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 17, 7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 108, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 15, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -44, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -88, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, -21, -102, -14, 18, 0,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimItemThrowAirSmashB_joint26[84] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -339, -256, -211,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -579, -35, 41, 149, 99, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -480, 258, 339, -93, 411, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 195, 759, -239, -325, -178, -1039,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1037, 209, -311, 26, -1667, -380,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1032, 25, -134, -10, -1701, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1191, -144, -376, -74, -1372, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 166, -226, -579, 15, -521, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -169, -56, -285, 35, -552, 34,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -339, -256, -211,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
