/* AnimJoint data for relocData file 990 (FTSamusAnimDamageFlyX2) */
/* 2336 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimDamageFlyX2_joint1[62];
extern u16 dFTSamusAnimDamageFlyX2_joint2[54];
extern u16 dFTSamusAnimDamageFlyX2_joint4[68];
extern u16 dFTSamusAnimDamageFlyX2_joint5[138];
extern u16 dFTSamusAnimDamageFlyX2_joint6[64];
extern u16 dFTSamusAnimDamageFlyX2_joint7[26];
extern u16 dFTSamusAnimDamageFlyX2_joint8[10];
extern u16 dFTSamusAnimDamageFlyX2_joint9[14];
extern u16 dFTSamusAnimDamageFlyX2_joint11[10];
extern u16 dFTSamusAnimDamageFlyX2_joint12[138];
extern u16 dFTSamusAnimDamageFlyX2_joint14[48];
extern u16 dFTSamusAnimDamageFlyX2_joint15[98];
extern u16 dFTSamusAnimDamageFlyX2_joint17[56];
extern u16 dFTSamusAnimDamageFlyX2_joint19[92];
extern u16 dFTSamusAnimDamageFlyX2_joint20[108];
extern u16 dFTSamusAnimDamageFlyX2_joint22[136];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimDamageFlyX2_joints[] = {
	(u32)dFTSamusAnimDamageFlyX2_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimDamageFlyX2_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimDamageFlyX2_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimDamageFlyX2_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimDamageFlyX2_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimDamageFlyX2_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimDamageFlyX2_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimDamageFlyX2_joint9, /* [8] joint 9 */
	(u32)dFTSamusAnimDamageFlyX2_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimDamageFlyX2_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimDamageFlyX2_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimDamageFlyX2_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimDamageFlyX2_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimDamageFlyX2_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimDamageFlyX2_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimDamageFlyX2_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF021C, /* [22] END */
};

/* Joint 1 */
u16 dFTSamusAnimDamageFlyX2_joint1[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 1600, 0,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1682, 977, -233, -1899,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 143, -18, 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 1), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 1844, 185, -474, -44,
	ftAnimSetValRateT(FT_ANIM_TRAX, 6), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 20), -349, 90,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 6), 1844,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 14), 0, 0, 1844, -359,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -536, 0, 0, 0, 901, -168,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimDamageFlyX2_joint2[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY), 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 114, 57, 2, 1,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 29), -84,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 114, -10, 0, -1, 2, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 44, -12, -13, -3, 239, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -141, -43, -70, 0, -108, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 0, -65,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -860, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTSamusAnimDamageFlyX2_joint4[68] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 211, 254, -47, 0, -179, 0, 30, -20, -29, -602, 64, 556,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 508, 42, 1, -5, 0, 27, -5, -81, -150, -138, 139, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 510, -3, -84, 15, 14, 9, -40, 23, -151, 40, 102, -24,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 21), 74, -14, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 443, -4, 310, 23, 195, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 425, 417, 240,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimDamageFlyX2_joint5[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1132, -496, -1722, 173, 1377, 184,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1469, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1628, -163, 1561, -464,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1458, 100, 447, -606,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1354, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 348, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1472, 4, 307, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 443, 83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1201, 41,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1330, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1430, -42,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 515, 69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 910, 145,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1161, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1205, -126,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1478, -92,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2000, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1104, 249,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1798, 120,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2041, -13, -1342, -111,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2094, -55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1213, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1889, 71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2203, 63,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2154, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2207, -38, 2261, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2230, -22, -1203, 10, 2286, 24,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimDamageFlyX2_joint6[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -739, -348,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1088, 225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -288, 500,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -86, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -308, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -401, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -911, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1008, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -915, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -925, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -922, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -917, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimDamageFlyX2_joint7[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 701, 424, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 29), 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -73, -300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 101, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 27), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimDamageFlyX2_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimDamageFlyX2_joint9[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 480, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 22, 303, 12,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimDamageFlyX2_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimDamageFlyX2_joint12[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 58, -625, -128, 310, -215, -432,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 306, 85, -1040, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -566, -303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -547, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -597, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 352, 52, -1044, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1148, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1093, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -591, 85, -1082, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -426, -145, -918, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -881, -164, -1378, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -754, 84, -1261, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -713, 37, -1233, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1163, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -680, -68,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1160, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1245, 36,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1122, 76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -889, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1279, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1060, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -740, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -801, -273, -886, -298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1287, -351, -1485, -430,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1505, -138, 1200, 79, -1747, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1565, -60, 1220, 20, -1789, -42,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimDamageFlyX2_joint14[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, -188,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -784, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -564, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -663, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -730, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1022, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -982, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1021, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1135, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1195, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1178, 17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimDamageFlyX2_joint15[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 87, -50, -27, -25, -389, -115,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -24, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -179, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -681, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -702, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -693, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -64, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -148, 13,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -706, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -683, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -132, 31, -663, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -817, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 264, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -197, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -37, -11,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -745, 80,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -579, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 238, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 210, -20, -51, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 197, -12, -56, -5, -546, 32,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimDamageFlyX2_joint17[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, -474,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 214, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 218, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 170, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 422, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 573, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1023, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1023, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimDamageFlyX2_joint19[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -75, 30, -28, 63, -41, 442,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 33, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -45, -33, 400, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -142, -30, 150, -109,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -44, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 246, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 326, 76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 201, -23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -28, 16, 41, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 130, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 95, -6,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 179, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 198, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 142, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 82, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -100, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -248, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -250, -1, 91, -4, 206, 7,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimDamageFlyX2_joint20[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 226, -222, 160, -52, -49, -630,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 141, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4, -83, -679, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 59, 37, -452, 83,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 96, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -573, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -633, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -712, 13,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 133, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 170, 49,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 100, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -57, -72,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -698, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -758, 187,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -115, -2, 237, 83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 381, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 333, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -512, 296,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 163, 178,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 292, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 350, 17, 288, -3, 191, 28,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimDamageFlyX2_joint22[136] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 442, 390,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 833, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -416,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 683, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 406, -339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFA46, 0xFF9B, 0xF8F6, 0x003A, 0x0572, 0x0136, 0x2803, 0x000D, 0xF98B, 0x0003, 0x200D, 0x0001, 0xF931, 0x0081, 0x06A8, 0x01AA, 0x200D, 0x0001, 0xF9F9, 0x006A, 0x08C7, 0x011D, 0x2805, 0x0003, 0xFA0E, 0x0001, 0x2009, 0x0001, 0x08E3, 0x0013, 0x2009, 0x0001, 0x08ED, 0x0005, 0x2809, 0x0014, 0x0818, 0xFFDF, 0x0801, 0x0001, 0x2005, 0x0001, 0xFA0F, 0x0000, 0x2805, 0x0013, 0xFA0F, 0xFFEE, 0x0801, 0x0007, 0x2003, 0x0001, 0xF98E, 0x0002, 0x2003, 0x000A, 0xF97A, 0x000B, 0x200B, 0x0001, 0xF98F, 0x0024, 0x07F0, 0xFFD1, 0x280B, 0x0003, 0xF9ED, 0xFFFE, 0x0748, 0xFFDD, 0x2005, 0x0001, 0xF9F5, 0xFFE3, 0x2005, 0x0002, 0xF9B6, 0xFFEC, 0x200F, 0x0001, 0xF9E8, 0xFFFC, 0xF9AA, 0xFFF4, 0x0734, 0xFFEC, 0x0000,
};
