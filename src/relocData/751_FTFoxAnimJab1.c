/* AnimJoint data for relocData file 751 (FTFoxAnimJab1) */
/* 2320 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimJab1_joint1[38];
extern u16 dFTFoxAnimJab1_joint2[32];
extern u16 dFTFoxAnimJab1_joint4[32];
extern u16 dFTFoxAnimJab1_joint5[160];
extern u16 dFTFoxAnimJab1_joint6[66];
extern u16 dFTFoxAnimJab1_joint7[10];
extern u16 dFTFoxAnimJab1_joint8[32];
extern u16 dFTFoxAnimJab1_joint10[20];
extern u16 dFTFoxAnimJab1_joint11[108];
extern u16 dFTFoxAnimJab1_joint12[40];
extern u16 dFTFoxAnimJab1_joint13[46];
extern u16 dFTFoxAnimJab1_joint15[10];
extern u16 dFTFoxAnimJab1_joint16[96];
extern u16 dFTFoxAnimJab1_joint18[48];
extern u16 dFTFoxAnimJab1_joint20[94];
extern u16 dFTFoxAnimJab1_joint21[78];
extern u16 dFTFoxAnimJab1_joint23[36];
extern u16 dFTFoxAnimJab1_joint24[104];
extern u16 dFTFoxAnimJab1_joint25[26];
extern u16 dFTFoxAnimJab1_joint26[32];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTFoxAnimJab1_joints[] = {
	(AObjEvent32 *)dFTFoxAnimJab1_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimJab1_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimJab1_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTFoxAnimJab1_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTFoxAnimJab1_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTFoxAnimJab1_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTFoxAnimJab1_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTFoxAnimJab1_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTFoxAnimJab1_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTFoxAnimJab1_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimJab1_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimJab1_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTFoxAnimJab1_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTFoxAnimJab1_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTFoxAnimJab1_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTFoxAnimJab1_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTFoxAnimJab1_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTFoxAnimJab1_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTFoxAnimJab1_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimJab1_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimJab1_joint1[38] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 48, 912, -20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 60, 858, 717,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 54, 867, 702,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 54, 867, 702,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 51, -11, 890, 91, 105, -1447,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 48, 912, -20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimJab1_joint2[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -141, -338, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -536, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, -536, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -99, -12, -397, 17, -2, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -141, -338, -3,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimJab1_joint4[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 156, 81,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 336, 12, -88,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 336, 12, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 317, -2, 113, 13, 30, 15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 309, 156, 81,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimJab1_joint5[160] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -109, -82, -165, -21, 258, 13,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4095, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), -381, -241, 4096, 1365, 4095, 1365, 4096, 1365,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -187, 58, 272, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -48, -461, 471, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAY, 1), -675, -135, -1111, -552, 317, -82, 6144, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 1), 6144, 6144,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 4096, -273, 4096, -273, 4096, -273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -653, 17, -1153, -33, 307, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1061, -17, 164, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -641, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -511, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -480, 112, -1138, -8, 199, -75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1009, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -139, 56, -128, -52,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4096, 4095, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -173, -91, -91, 95,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -474, -163, 209, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -940, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -833, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -648, 45, -591, 130, 390, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -13, 130, -492, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 237, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -53, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -124, -48, -247, 163, 232, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -109, 14, -165, 81, 258, 26,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTFoxAnimJab1_joint6[66] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, -45,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -604, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -789, 302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 394,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -169, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -273, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -173, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -648, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -721, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -835, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1105, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -700, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -708, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 149,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimJab1_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimJab1_joint8[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -113, 136, -72,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -143, 460, -75,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -143, 460, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -122, 2, 233, -29, -73, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -113, 136, -72,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimJab1_joint10[20] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 62, -18,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTFoxAnimJab1_joint11[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1475, 117, 1336, 0, -1271, 127,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -991, 55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1389, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1357, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1080, 207,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -962, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1033, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1040, 15,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -972, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1084, -86,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1450, 80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1608, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1016, 54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -817, 18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1176, -80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1408, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -820, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1478, -92, -1094, -321,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1352, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1553, -36, -1462, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1481, 39, -1300, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1475, 6, 1336, -16, -1271, 29,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimJab1_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -594, -250,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1077, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1090, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1230, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1153, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1158, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -901, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -756, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 161,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimJab1_joint13[46] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 272, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 3), 268,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 7), 357,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 7), -89,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 4), 268,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), 536, 178,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 0,
	ftAnimSetValT(FT_ANIM_ROTX, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 625, -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTFoxAnimJab1_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimJab1_joint16[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -405, 229, -223, -238, -26, -414,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -175, 18, -461, -107, -441, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -368, -245, -438, 24, -258, 169,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -100, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -325, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -666, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -666, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -545, 49,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -126, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -144, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -501, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -416, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -562, 11, -250, -49, -118, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -393, 84, -423, -39, -283, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -394, -5, -328, 100, -167, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -405, -11, -223, 105, -26, 141,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimJab1_joint18[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 354, 519,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 873, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 783, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 506, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 504, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 452, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 448, -223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 517, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 421, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -67,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimJab1_joint20[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 46, 10, 125, -10, -56, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 81, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 61, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -66, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -186, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 188, 53, -57, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 110, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 60, 0, -55, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 31, 5, -33, 1,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 107, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 201, 29,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 38, 81, -31, 240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 195, 61, 446, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, -50, 184, -21, 131, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 94, -57, 158, -29, 63, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 46, -47, 125, -32, -56, -119,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimJab1_joint21[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 355, -143, 137, 99, 134, -128,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 369, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -123, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -37, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -218, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -217, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -217, 8, 366, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 90, 69, 388, -48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -92, 40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 182, -45,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 183, 100, 296, -108,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 333, 32, 149, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 126, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 355, 21, 137, -11, 134, 8,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimJab1_joint23[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 332, 219,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 552, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 494, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 449, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 423, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 290, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimJab1_joint24[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 16, -59, -102, 87, -226, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -70, 145,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 31, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -43, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 32, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -13, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 65, 67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 60, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -15, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -103, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 59, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 79, 8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 28, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 47, -38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -114, 103, 88, -86,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -231, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 102, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 142, -26, -53, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 49, -63, -90, -24, -242, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16, -32, -102, -12, -226, 15,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimJab1_joint25[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 219,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 0, -88, 557, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 470, -22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -711,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 0, 219,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimJab1_joint26[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -178, -122,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 0, 77, 0, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 364, -86, -20, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -607, -49, -55, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -178, -122,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
