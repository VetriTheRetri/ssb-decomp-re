/* AnimJoint data for relocData file 737 (FTFoxAnimItemThrowDash) */
/* 2576 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimItemThrowDash_joint1[22];
extern u16 dFTFoxAnimItemThrowDash_joint2[34];
extern u16 dFTFoxAnimItemThrowDash_joint3[28];
extern u16 dFTFoxAnimItemThrowDash_joint5[36];
extern u16 dFTFoxAnimItemThrowDash_joint6[166];
extern u16 dFTFoxAnimItemThrowDash_joint7[70];
extern u16 dFTFoxAnimItemThrowDash_joint8[10];
extern u16 dFTFoxAnimItemThrowDash_joint9[32];
extern u16 dFTFoxAnimItemThrowDash_joint11[8];
extern u16 dFTFoxAnimItemThrowDash_joint12[188];
extern u16 dFTFoxAnimItemThrowDash_joint13[64];
extern u16 dFTFoxAnimItemThrowDash_joint14[54];
extern u16 dFTFoxAnimItemThrowDash_joint16[10];
extern u16 dFTFoxAnimItemThrowDash_joint17[86];
extern u16 dFTFoxAnimItemThrowDash_joint19[36];
extern u16 dFTFoxAnimItemThrowDash_joint21[90];
extern u16 dFTFoxAnimItemThrowDash_joint22[90];
extern u16 dFTFoxAnimItemThrowDash_joint24[44];
extern u16 dFTFoxAnimItemThrowDash_joint25[94];
extern u16 dFTFoxAnimItemThrowDash_joint26[26];
extern u16 dFTFoxAnimItemThrowDash_joint27[46];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTFoxAnimItemThrowDash_joints[] = {
	(AObjEvent32 *)dFTFoxAnimItemThrowDash_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimItemThrowDash_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimItemThrowDash_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTFoxAnimItemThrowDash_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTFoxAnimItemThrowDash_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTFoxAnimItemThrowDash_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTFoxAnimItemThrowDash_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTFoxAnimItemThrowDash_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTFoxAnimItemThrowDash_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTFoxAnimItemThrowDash_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimItemThrowDash_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimItemThrowDash_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTFoxAnimItemThrowDash_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTFoxAnimItemThrowDash_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTFoxAnimItemThrowDash_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTFoxAnimItemThrowDash_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTFoxAnimItemThrowDash_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTFoxAnimItemThrowDash_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTFoxAnimItemThrowDash_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimItemThrowDash_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTFoxAnimItemThrowDash_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTFoxAnimItemThrowDash_joint1[22] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 3200,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 960, 1120,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 800,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 26), 2400, 240,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), 2400,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimItemThrowDash_joint2[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 780, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, -1, 720, -80, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 8), 660, -36,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 8), -2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 18), 0, 14, 600, 72, 0, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 48, 912, -20,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTFoxAnimItemThrowDash_joint3[28] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 357, -268, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 268, 17, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 357, -13, 268, -16, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -141, -338, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimItemThrowDash_joint5[36] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 320, 201, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -178, -16, 357, 5, 178, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 26), -178, 12, 178, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 26), 357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 178, 48, 357, -20, 357, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 309, 156, 81,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTFoxAnimItemThrowDash_joint6[166] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -281, -91, -284, 198, 398, 304,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 5, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -336, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 834, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 800, -40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 706, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -63, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -154, -42,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -332, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -70, 72,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 662, -43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -59, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -201, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -485, 58,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 13, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 252, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 429, 93, -383, 47, -288, -120,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 448, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -400, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -312, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -316, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -333, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 450, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 390, -47,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -391, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -263, -39,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -326, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 317, -124, -233, 175,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -22, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -312, -1, 23, 191,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -168, 7, 254, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -68, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -98, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -109, -10, -165, 2, 258, 4,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimItemThrowDash_joint7[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -575,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -890, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -869, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -724, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -750, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -959, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -918, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -451, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -305, 225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 152,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -143, -239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -485, -227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -573, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 15,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimItemThrowDash_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTFoxAnimItemThrowDash_joint9[32] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -536, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 178, 23, -268, -8, -268, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 178, -268, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 178, -29, -268, 40, -268, 19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -113, 136, -72,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTFoxAnimItemThrowDash_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTFoxAnimItemThrowDash_joint12[188] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 302, 387, 261, 382, 440, 383,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 982, 252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 689, -155, 824, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -8, -258, 94, -270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 173, 185, 1150, 176, 284, 192,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1377, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 363, 117, 480, 135,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 516, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 374, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1311, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1224, 22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 533, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1014, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 395, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1092, 71,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1149, 99,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1372, 63,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1143, 42, 1238, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1599, 87,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1061, 32,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1446, 77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1740, 17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1681, 70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1910, 86,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1766, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1956, 209,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2010, 185, 1111, 99,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 2368, -22, 1505, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2259, 206,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2328, -40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2235, -138, 1567, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 1762, -32, 1352, -29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2273, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1979, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1741, -21, 1336, -16, 1945, -33,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimItemThrowDash_joint13[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -73, 73,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -7, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -18, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -262, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -403, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -583, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -566, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -570, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -504, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -465, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, -238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -767, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -691, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -624, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 29,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTFoxAnimItemThrowDash_joint14[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 446, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 402, -111, -268, -55, 268, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -15, -223, 9, 491, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), -35, 1, 0, 8, 0, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 35, 117, -6, -6, 16, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 199, -3, -13, 0, 33, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimItemThrowDash_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimItemThrowDash_joint17[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -90, 45, -214, 62, -952, -70,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 60, -12, -988, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 168, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 172, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), 185, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 48, -12, -1001, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 55, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -1137, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1115, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -293, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 175, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -240, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 63, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -390, -27,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -156, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -230, 8, -62, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -405, -14, -223, 7, -26, 35,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimItemThrowDash_joint19[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 107, 194,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 624, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 636, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 810, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 807, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 467, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 388, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -34,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTFoxAnimItemThrowDash_joint21[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1537, 100, 1708, -19, -1540, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1480, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -1556, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1435, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1553, -75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1535, 9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1466, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), 1562, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1526, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), -1605, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1555, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -1728, -21,
	ftAnimBlock(0, 16),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1599, 13, 1567, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -1564, 4, 1476, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1746, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1678, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1561, 2, 1482, 5, -1664, 14,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimItemThrowDash_joint22[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -161, 85, 225, -64, 159, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -201, 16, 282, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 215, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 254, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 656, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -175, 32, 214, -71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -50, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -147, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 662, 5, -148, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 17), 570, -23, -24, 18,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -45, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 119, 24,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 540, -40, 1, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 335, 15, 169, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 349, 10, 148, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 355, 5, 137, -10, 134, 14,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimItemThrowDash_joint24[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 305, 67,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 617, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 654, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 331, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 343, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 506, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 514, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 420, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 359, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -27,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTFoxAnimItemThrowDash_joint25[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -72, -23, 104, -6, 316, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 280, 49, -123, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -119, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -89, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 167, 186, 309, -6, -297, -150,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 140, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -429, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 283, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 273, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 281, 7, 139, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 19), 230, -22, 186, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -438, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -285, 45,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 204, -31, 178, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 22, -12, -86, -30,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -244, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16, -5, -102, -16, -226, 17,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimItemThrowDash_joint26[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValRate(FT_ANIM_ROTX), -442, 59,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -126, -96,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 40), 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 17), 178, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -384, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 0, 89,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTFoxAnimItemThrowDash_joint27[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -178, 53,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 64, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 22), -178, 18, -47, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 348, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -68, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -102, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -341, -47,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -114, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -178, -122,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
