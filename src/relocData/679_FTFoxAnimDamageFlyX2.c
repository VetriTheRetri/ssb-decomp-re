/* AnimJoint data for relocData file 679 (FTFoxAnimDamageFlyX2) */
/* 2544 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimDamageFlyX2_joint1[48];
extern u16 dFTFoxAnimDamageFlyX2_joint2[44];
extern u16 dFTFoxAnimDamageFlyX2_joint4[58];
extern u16 dFTFoxAnimDamageFlyX2_joint5[138];
extern u16 dFTFoxAnimDamageFlyX2_joint6[54];
extern u16 dFTFoxAnimDamageFlyX2_joint7[10];
extern u16 dFTFoxAnimDamageFlyX2_joint8[62];
extern u16 dFTFoxAnimDamageFlyX2_joint10[10];
extern u16 dFTFoxAnimDamageFlyX2_joint11[134];
extern u16 dFTFoxAnimDamageFlyX2_joint12[48];
extern u16 dFTFoxAnimDamageFlyX2_joint13[48];
extern u16 dFTFoxAnimDamageFlyX2_joint15[16];
extern u16 dFTFoxAnimDamageFlyX2_joint16[102];
extern u16 dFTFoxAnimDamageFlyX2_joint18[58];
extern u16 dFTFoxAnimDamageFlyX2_joint20[82];
extern u16 dFTFoxAnimDamageFlyX2_joint21[90];
extern u16 dFTFoxAnimDamageFlyX2_joint23[60];
extern u16 dFTFoxAnimDamageFlyX2_joint24[70];
extern u16 dFTFoxAnimDamageFlyX2_joint25[50];
extern u16 dFTFoxAnimDamageFlyX2_joint26[38];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimDamageFlyX2_joints[] = {
	(u32)dFTFoxAnimDamageFlyX2_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimDamageFlyX2_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimDamageFlyX2_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimDamageFlyX2_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimDamageFlyX2_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimDamageFlyX2_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimDamageFlyX2_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimDamageFlyX2_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimDamageFlyX2_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimDamageFlyX2_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimDamageFlyX2_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimDamageFlyX2_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimDamageFlyX2_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimDamageFlyX2_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimDamageFlyX2_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimDamageFlyX2_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimDamageFlyX2_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimDamageFlyX2_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimDamageFlyX2_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimDamageFlyX2_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimDamageFlyX2_joint1[48] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 132, 48, -10, 912, -85, -20, 30,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), -536, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 47, -12, 945, 130, -296, -297,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 36, -12, 1043, 7, -318, 49,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 13, -10, 965, -167, -165, 122,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 9, 603, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimDamageFlyX2_joint2[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -141,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -338, 135, -3, 1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -327, -27, -210, 25, -1, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -365, 9, -134, 8, 32, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -137, -18, -23, 6, 105, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 0, -31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -748, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimDamageFlyX2_joint4[58] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, -121, 156, -60, 81, -31,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 413, 23, 100, 0, 53, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 498, 8, 158, 9, 125, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 536, 4, 236, 9, 214, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 555, -5, 288, -7, 273, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 487, 1, 165, 4, 57, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 565, 323, 312,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimDamageFlyX2_joint5[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1498, 564, -1442, 110, -1349, -1427,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1407, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2063, 311, -2777, -736,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2121, 53, -2821, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 2247, -58, -2844, 66,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1416, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1324, 99,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2162, -121, -2737, 161,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1735, -24, -2006, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1222, 54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1263, 28,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1722, -14, -1909, 93,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1429, -211, -1417, 247,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1220, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1369, 29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1204, -185, -1174, 177,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1013, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 995, 38,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1327, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -995, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -999, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1123, -50,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1041, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1104, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1142, 37, -973, 21, -1161, -38,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimDamageFlyX2_joint6[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, 551,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -593, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -668, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -810, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -915, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -731, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -712, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -615, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -599, 16,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimDamageFlyX2_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimDamageFlyX2_joint8[62] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -113, 256, 136, -50, -72, 29,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 186, 58, -43, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 86,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 356, -2, 12, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 7), 7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 142, -8, 82, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), -186,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 231, 11, 112, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), -311,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 246, 0, 25, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), -130,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 225, -423, 133,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimDamageFlyX2_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimDamageFlyX2_joint11[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1475, -65, 1336, -107, -1271, -1221,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1726, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1290, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2492, -735,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2741, -145,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2816, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1763, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1986, -53,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1290, 0, -2827, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1242, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -2877, 16,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2052, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2163, -111, 1222, -99,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 501, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2276, 231, -2834, 372,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1700, 37, -2132, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2201, -294, -2574, -254,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2338, -45, -2660, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 257, -204,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 181, 33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2379, -34, -2654, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -2339, 15, -2434, 24,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 215, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 277, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2330, 9, 288, 11, -2419, 14,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimDamageFlyX2_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -594, 357,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -772, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -879, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -500, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -446, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -373, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -363, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimDamageFlyX2_joint13[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -263, -78,
	ftAnimSetValRate(FT_ANIM_ROTX), -94, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 169, 23, -197, 20, -47, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 258, 81, 46, 6, 28, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 824, 79, -145, -21, 64, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 656, -64, -60, 12, 16, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 44, 0, 44,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimDamageFlyX2_joint15[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 263, -1082, 1447, 65, -45, -32,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 29), 0, -804, 1608, 60, -60, 12,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimDamageFlyX2_joint16[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -405, 147, -223, 60, -26, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -257, 220, -162, -17, -8, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 36, 257, -258, -61, -363, -302,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -317, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 241, -37, -769, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 198, -47, -770, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -620, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -266, 17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -318, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -230, -17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -615, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -333, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -308, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -452, -18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -244, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -246, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -88, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 1, -76, 11, -462, -10,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimDamageFlyX2_joint18[58] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 354, -348,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 292, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 5, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 246, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 318, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 252, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 305, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 705, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 696, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 688, -7,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTFoxAnimDamageFlyX2_joint20[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 46, 9, 125, -26, -56, 373,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -58, -141,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 134, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 317, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 363, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 316, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -226, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -210, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -194, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 38, -10,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 281, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 153, -35,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 26, -11, 162, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 19, -10, 51, -38,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 117, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 15, -3, 25, -26, 98, -18,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimDamageFlyX2_joint21[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 355, -260, 137, -243, 134, -449,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -579, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 94, -105, -105, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 144, 33, -120, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 43, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -127, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -664, -95,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -770, 26,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 23, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 38, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -103, 34, -733, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 116, 23, -386, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 129, 1, -192, 178,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 104, 3, 39, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 88, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 131, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 130, 0, 107, 3, 23, -16,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimDamageFlyX2_joint23[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 332, -35,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 296, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 315, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 530, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 681, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 891, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 639, -262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 197, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 258, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 293, 34,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimDamageFlyX2_joint24[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 16, -105, -102, -28, -226, 270,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -32, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -110, 0, 517, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -110, 0, 518, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -82, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 303, 61,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -28, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -8, -1,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -110, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -145, -6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 370, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 480, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -150, -4, -8, 0, 498, 18,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimDamageFlyX2_joint25[50] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -238, 219, -91, 0, 58,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 343, -264, 121, -23, 141, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1058, -47, 126, 0, 71, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -643, 46, 119, 1, 28, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -85, 91, 163, 14, 13, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 219, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTFoxAnimDamageFlyX2_joint26[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -178, -122,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 64, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 0, -34, 0, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -384, -18, 20, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), -321, 0, 13, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -381, 69, 7, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 446, 0,
	ftAnimEnd(),
	0x0000,
};
