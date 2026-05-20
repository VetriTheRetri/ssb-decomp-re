/* AnimJoint data for relocData file 735 (FTFoxAnimItemThrowSmashU) */
/* 2416 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimItemThrowSmashU_joint1[26];
extern u16 dFTFoxAnimItemThrowSmashU_joint2[30];
extern u16 dFTFoxAnimItemThrowSmashU_joint4[48];
extern u16 dFTFoxAnimItemThrowSmashU_joint5[134];
extern u16 dFTFoxAnimItemThrowSmashU_joint6[56];
extern u16 dFTFoxAnimItemThrowSmashU_joint7[10];
extern u16 dFTFoxAnimItemThrowSmashU_joint8[64];
extern u16 dFTFoxAnimItemThrowSmashU_joint10[10];
extern u16 dFTFoxAnimItemThrowSmashU_joint11[166];
extern u16 dFTFoxAnimItemThrowSmashU_joint12[70];
extern u16 dFTFoxAnimItemThrowSmashU_joint13[28];
extern u16 dFTFoxAnimItemThrowSmashU_joint15[10];
extern u16 dFTFoxAnimItemThrowSmashU_joint16[102];
extern u16 dFTFoxAnimItemThrowSmashU_joint18[46];
extern u16 dFTFoxAnimItemThrowSmashU_joint20[84];
extern u16 dFTFoxAnimItemThrowSmashU_joint21[84];
extern u16 dFTFoxAnimItemThrowSmashU_joint23[50];
extern u16 dFTFoxAnimItemThrowSmashU_joint24[86];
extern u16 dFTFoxAnimItemThrowSmashU_joint25[10];
extern u16 dFTFoxAnimItemThrowSmashU_joint26[42];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTFoxAnimItemThrowSmashU_joints[] = {
	(AObjEvent32 *)dFTFoxAnimItemThrowSmashU_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimItemThrowSmashU_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimItemThrowSmashU_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTFoxAnimItemThrowSmashU_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTFoxAnimItemThrowSmashU_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTFoxAnimItemThrowSmashU_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTFoxAnimItemThrowSmashU_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTFoxAnimItemThrowSmashU_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTFoxAnimItemThrowSmashU_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTFoxAnimItemThrowSmashU_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimItemThrowSmashU_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimItemThrowSmashU_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTFoxAnimItemThrowSmashU_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTFoxAnimItemThrowSmashU_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTFoxAnimItemThrowSmashU_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTFoxAnimItemThrowSmashU_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTFoxAnimItemThrowSmashU_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTFoxAnimItemThrowSmashU_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTFoxAnimItemThrowSmashU_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimItemThrowSmashU_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimItemThrowSmashU_joint1[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 48, 912, -20,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, -48, 600, 47, 0, 260,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 20, 960, 131, 240, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 48, 912, -20,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimItemThrowSmashU_joint2[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -141, -338, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 268, 17, -268, 75, 0, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -21, 268, -3, 268, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -141, -338, -3,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimItemThrowSmashU_joint4[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 156, 81,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 268, -72, -268, 13, 0, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -268, -51, 268, 89, -268, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -89, 33, -89, 33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 33, 268, -16, 0, 14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 309, 156, 81,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimItemThrowSmashU_joint5[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -109, -1, -165, -16, 258, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -332, -114,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -523, -278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 281, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 415, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -486, -54, 466, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -898, -271, -441, 247, 783, 240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1065, -153, 8, -109, 947, 405,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1206, 399, -660, -14, 1594, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -265, 470, -20, 301, 1040, -295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -264, 14, -57, -33, 1003, -63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 807, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -223, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -87, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -50, -47,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 861, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 692, -112,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -229, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -119, 12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 586, -100,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 298, -64,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -103, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -147, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -109, 10, -165, -17, 258, -39,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimItemThrowSmashU_joint6[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -573, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -76, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -140, -238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -554, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -320, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -814, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -663, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -545, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -651, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -594, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 35,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimItemThrowSmashU_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimItemThrowSmashU_joint8[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -113, 136, -72,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -89, -25, 804, 111, 0, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -268, -44, 804, -223, 0, 89,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -178, 44, 357, -402,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -178, -17, 0, -53, 0, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -268, -22, 89, 33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -357, 12, 268, 3, 0, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -113, 136, -72,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimItemThrowSmashU_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimItemThrowSmashU_joint11[166] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 132, 148, 271, 19, 336, 198,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 164, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 281, 281, 535, 275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 695, 342, 886, 202,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 998, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 76, 62, 939, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 290, 245, 966, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 820, -481, 567, -72, 779, -435,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 36, -359, 146, -126, 95, -457,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 101, -215, 314, -47, -134, -683,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -394, -199, 51, -153, -1272, -541,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -298, 82, 7, -49, -1217, 57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -115, -50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -456, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1157, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -660, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -586, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -299, 134,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -161, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 192, 61,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -452, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -195, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -162, 103,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 37, 156,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 235, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 271, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -108, 111,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 113, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 231, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 327, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 132, 19, 271, 0, 336, 9,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimItemThrowSmashU_joint12[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -594, -238,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -833, -255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1106, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -637, 343,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -286, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -577, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 288,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -347, -271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -543, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -464, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -643, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -724, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -750, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -668, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 73,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimItemThrowSmashU_joint13[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0, 0, 0, 104,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 839,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTFoxAnimItemThrowSmashU_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimItemThrowSmashU_joint16[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1202, 19, -1385, 53, 1581, -89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1323, -208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1441, 126, 997, -264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1550, 76, 751, -172,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 831, 321,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1684, 107,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1638, -276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1877, -113, 1295, 445,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1816, 50, -1865, 5, 1721, 221,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1621, -68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1549, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1738, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 1580, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1549, -74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1199, 2,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1489, 52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1392, 13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1201, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1202, 1, -1385, 6, 1581, 1,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimItemThrowSmashU_joint18[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 354, 121,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 986, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 848, -277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -215,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 274, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 312, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 349, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimItemThrowSmashU_joint20[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1655, -6, 1482, -1, 1552, -52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1354, 59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1637, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 1577, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1703, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1518, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1477, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1668, 16, 1725, 129,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1667, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1498, -18, 1737, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1464, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1604, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1578, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1553, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1662, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1657, -3, 1477, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1655, -2, 1482, 4, 1552, -1,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimItemThrowSmashU_joint21[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1963, 8, -1746, -39, 1743, -81,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -2055, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 2098, 60, 1287, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2166, 164, 1300, 178,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2629, 104, 1944, 195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2062, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1792, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2636, -6, -1650, 66, 2036, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1928, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 1968, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1706, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1720, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1748, 3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1906, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1746, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1963, -4, -1746, 2, 1743, -3,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimItemThrowSmashU_joint23[50] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 332, 135,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1056, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 867, -390,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 274, -433,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -137,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 273, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 306, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 325, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimItemThrowSmashU_joint24[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1624, -2, 1711, 25, -1835, -73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1843, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1709, 103, -2281, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1860, 116, -2204, 209,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1571, 152,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1822, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1748, -100,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1652, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1557, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1741, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1797, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1625, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1653, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1708, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1788, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1832, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1624, 0, 1711, 2, -1835, -2,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimItemThrowSmashU_joint25[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 219, 0, 0, -126, -96,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimItemThrowSmashU_joint26[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -178, -122, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 64, -450,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -122, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -178, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 363, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 287, -47, -122, 91, 0, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 33, -35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 515, 322,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -178, -122, 0,
	ftAnimEnd(),
};
