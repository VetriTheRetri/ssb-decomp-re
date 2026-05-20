/* AnimJoint data for relocData file 695 (FTFoxAnimDownBackU) */
/* 2912 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimDownBackU_joint1[22];
extern u16 dFTFoxAnimDownBackU_joint2[52];
extern u16 dFTFoxAnimDownBackU_joint3[20];
extern u16 dFTFoxAnimDownBackU_joint5[34];
extern u16 dFTFoxAnimDownBackU_joint6[194];
extern u16 dFTFoxAnimDownBackU_joint7[78];
extern u16 dFTFoxAnimDownBackU_joint8[16];
extern u16 dFTFoxAnimDownBackU_joint9[30];
extern u16 dFTFoxAnimDownBackU_joint11[10];
extern u16 dFTFoxAnimDownBackU_joint12[206];
extern u16 dFTFoxAnimDownBackU_joint13[92];
extern u16 dFTFoxAnimDownBackU_joint14[82];
extern u16 dFTFoxAnimDownBackU_joint16[10];
extern u16 dFTFoxAnimDownBackU_joint17[112];
extern u16 dFTFoxAnimDownBackU_joint19[40];
extern u16 dFTFoxAnimDownBackU_joint21[96];
extern u16 dFTFoxAnimDownBackU_joint22[106];
extern u16 dFTFoxAnimDownBackU_joint24[40];
extern u16 dFTFoxAnimDownBackU_joint25[94];
extern u16 dFTFoxAnimDownBackU_joint26[32];
extern u16 dFTFoxAnimDownBackU_joint27[36];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTFoxAnimDownBackU_joints[] = {
	(AObjEvent32 *)dFTFoxAnimDownBackU_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimDownBackU_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimDownBackU_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTFoxAnimDownBackU_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTFoxAnimDownBackU_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTFoxAnimDownBackU_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTFoxAnimDownBackU_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTFoxAnimDownBackU_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTFoxAnimDownBackU_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTFoxAnimDownBackU_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimDownBackU_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimDownBackU_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTFoxAnimDownBackU_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTFoxAnimDownBackU_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTFoxAnimDownBackU_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTFoxAnimDownBackU_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTFoxAnimDownBackU_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTFoxAnimDownBackU_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTFoxAnimDownBackU_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimDownBackU_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTFoxAnimDownBackU_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTFoxAnimDownBackU_joint1[22] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), -360, -400,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -1600,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 18), -3840, -640,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -640,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 8), -4200, -198,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimDownBackU_joint2[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, -513, 9, 189, -13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 180, 90,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 15), 9, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), -3216, -67,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 300, 528,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 840, 94,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 9, 14, 480, 27, -13, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), -3216, 0, 48, 912, -20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTFoxAnimDownBackU_joint3[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -141, -338, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimDownBackU_joint5[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 6, -457, 156,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 268, 35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 536, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 536, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 309, 156, 81,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimDownBackU_joint6[194] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1230, 61, -425, 37, 408, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -596, 359,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -161, 56, 299, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -170, -124, 559, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -189, 441, -410, -89, 671, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 286, 230, -349, 68, 282, -173,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -181, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 272, -37, 325, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 440, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 364, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 364, 57,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -183, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -448, -505, 501, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 760, -49, -1194, -211, 26, -443,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 341, 21, -871, 372, -384, -496,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 231, -449, 319, -967, -297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 2, -232, 233, -979, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -790, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 808, 5, 17, 129,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1027, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 25, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 18, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -30, -14,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1061, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1006, -208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -45, -143, -737, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -466, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 643, -416, -467, 359,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 173, -320, -379, 99, -45, 300,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -168, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2, -119, 133, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -106, -7, 260, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -109, -3, -165, 2, 258, -1,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimDownBackU_joint7[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -581, -44,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -650, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -486, 321,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, -634,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1269, -338,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -735, 366,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 363,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -440, -311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -623, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -584, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 26,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimDownBackU_joint8[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 272, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 36), 0, 0, 0, 269, 0, 0,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTFoxAnimDownBackU_joint9[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -134, -402, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 402, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 25), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 31), -113,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 20), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 136, -72,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTFoxAnimDownBackU_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimDownBackU_joint12[206] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1683, -57, 88, 34, 904, -145,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1418, -297, 101, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 759, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 465, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1031, -410, -137, -28, 430, 100,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 302, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 597, -340, 666, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 349, -331, 585, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -66, -234, 368, -4, 225, -145,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 179, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -119, -33, 294, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -454, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 341, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 369, 60,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 185, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 459, 507, 502, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -758, 36, 1200, 208, 35, -464,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -382, -22, 875, -371, -426, -501,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, -210, 457, -314, -967, -276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -802, 0, 246, -238, -978, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -758, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -805, -4, -18, -136,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -955, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -23, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -22, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 39, 44,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -965, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -848, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 108, 174,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 519, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -704, 177,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -6, 303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -539, 346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -155, 282, 487, -60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 276, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 25, 126, 203, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 131, 4, 338, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 132, 1, 271, -4, 336, -1,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimDownBackU_joint13[92] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -458, -193,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -651, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -945, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -549, 431,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -486, -633,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1274, -335,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -746, 358,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -439, 369,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -80, -239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -486, -290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -680, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -620, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 25,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTFoxAnimDownBackU_joint14[82] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 178, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 178, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 714, 312, 0, -44, 0, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1429, 223,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -178, -223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1608, 89, 0, 44, 0, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1787, 44, 0, 0, 0, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1787, -102,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1072, -125, 0, 0, 0, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 536, -97,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimDownBackU_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimDownBackU_joint17[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1989, -40, -1518, -30, -2006, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1641, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1427, 110, -2028, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1305, 94, -1844, 159,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -2296, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1432, 5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1671, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 1725, -12,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2323, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2255, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1423, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1344, -16,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1710, -50, -2238, 71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1284, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1789, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1749, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1643, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1254, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1209, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1361, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1378, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1202, -6, -1385, -7, -1635, 7,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimDownBackU_joint19[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 294, 202,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1019, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1007, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1333, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1327, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1137, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1091, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 384, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -30,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTFoxAnimDownBackU_joint21[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1751, 48, -1400, -51, 2183, -67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1375, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1728, -15, 1786, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1736, -4, 1757, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1279, -80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1804, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1393, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1696, -20,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1206, -64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 967, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1719, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1792, 64,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1835, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1773, 28,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1733, 56, 997, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -1563, 2, 1525, 40,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1747, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1561, 1, -1734, 13, 1552, 26,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimDownBackU_joint22[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -947, -47, 1388, -38, -1552, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1709, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1284, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1393, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1578, -133,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1786, -41,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1746, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -2265, 41,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1826, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -1450, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1328, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1360, -1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2214, 59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1556, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1359, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1457, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1452, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1261, 15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1556, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1482, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1253, 8, 1470, 13, -1473, 8,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimDownBackU_joint24[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 985, 28,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1028, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1007, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1318, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1327, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 564, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 459, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 370, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -38,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTFoxAnimDownBackU_joint25[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -208, -34, -12, -26, 29, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 21, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -47, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -156, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -137, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 247, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -32, -59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -679, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 6, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 6, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 23, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 171, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -708, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -672, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 255, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -88, -23,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 212, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 22, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -629, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -247, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16, -6, -102, -13, -226, 20,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimDownBackU_joint26[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -571, 83, -164,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -863, 9, 0, -3, 0, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -346, 41, 0, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 219, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTFoxAnimDownBackU_joint27[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -384, -219, 190,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 64, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -329, 35, -79, 9, 78, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 474, 7, 0, -2, 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -178, -122, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
