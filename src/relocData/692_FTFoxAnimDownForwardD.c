/* AnimJoint data for relocData file 692 (FTFoxAnimDownForwardD) */
/* 2848 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimDownForwardD_joint1[14];
extern u16 dFTFoxAnimDownForwardD_joint2[46];
extern u16 dFTFoxAnimDownForwardD_joint3[22];
extern u16 dFTFoxAnimDownForwardD_joint5[28];
extern u16 dFTFoxAnimDownForwardD_joint6[148];
extern u16 dFTFoxAnimDownForwardD_joint7[54];
extern u16 dFTFoxAnimDownForwardD_joint8[16];
extern u16 dFTFoxAnimDownForwardD_joint9[38];
extern u16 dFTFoxAnimDownForwardD_joint11[10];
extern u16 dFTFoxAnimDownForwardD_joint12[138];
extern u16 dFTFoxAnimDownForwardD_joint13[56];
extern u16 dFTFoxAnimDownForwardD_joint14[38];
extern u16 dFTFoxAnimDownForwardD_joint16[10];
extern u16 dFTFoxAnimDownForwardD_joint17[126];
extern u16 dFTFoxAnimDownForwardD_joint19[56];
extern u16 dFTFoxAnimDownForwardD_joint21[166];
extern u16 dFTFoxAnimDownForwardD_joint22[146];
extern u16 dFTFoxAnimDownForwardD_joint24[56];
extern u16 dFTFoxAnimDownForwardD_joint25[134];
extern u16 dFTFoxAnimDownForwardD_joint26[32];
extern u16 dFTFoxAnimDownForwardD_joint27[36];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTFoxAnimDownForwardD_joints[] = {
	(AObjEvent32 *)dFTFoxAnimDownForwardD_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimDownForwardD_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimDownForwardD_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTFoxAnimDownForwardD_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTFoxAnimDownForwardD_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTFoxAnimDownForwardD_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTFoxAnimDownForwardD_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTFoxAnimDownForwardD_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTFoxAnimDownForwardD_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTFoxAnimDownForwardD_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimDownForwardD_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimDownForwardD_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTFoxAnimDownForwardD_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTFoxAnimDownForwardD_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTFoxAnimDownForwardD_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTFoxAnimDownForwardD_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTFoxAnimDownForwardD_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTFoxAnimDownForwardD_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTFoxAnimDownForwardD_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimDownForwardD_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTFoxAnimDownForwardD_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTFoxAnimDownForwardD_joint1[14] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 1440,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 28), 4200,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 8), 4200,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimDownForwardD_joint2[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 804, 0, 9, 189, -13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 25), 3395, 67, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 9, -1, 540, -15, -11, 22,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 10), 28, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 10), 6, 159,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 9, 16, 540, 286, 11, -18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 3216, 0, 48, 912, -20,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTFoxAnimDownForwardD_joint3[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, -3, 0, -9, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -141, -338, -3,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimDownForwardD_joint5[28] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 6, 0, 156,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 402, 15, 0, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 402, -2, 0, 5, 0, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 309, 156, 81,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTFoxAnimDownForwardD_joint6[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -578, -23, -555, 0, -14, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -565, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -518, 4, 69, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -530, -28, 67, -61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -605, -182,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -263, 240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -354, 293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 288, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 385, 52, -728, -162,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 160, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 33, 170, -931, -94,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 107, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -917, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -881, 28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 124, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 119, 20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 108, -50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -210, 8,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -846, 92,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -168, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -186, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -103, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 145, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -136, -27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 19, 164,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 265, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -121, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -114, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -157, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -109, 5, -165, -7, 258, -6,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimDownForwardD_joint7[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -692, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -726, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -816, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -738, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -529, 369,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 264,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 13), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -174, -282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -565, -288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -595, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 37,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTFoxAnimDownForwardD_joint8[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 272, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 36), 0, 0, 0, 269, 0, 0,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTFoxAnimDownForwardD_joint9[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -402, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 15), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 482, 32, 0, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 482, -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -402, -28, 0, 6, 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -113, 136, -72,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimDownForwardD_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimDownForwardD_joint12[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -140, 32, 298, 17, -1045, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 299, -56, -476, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 122, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 250, 79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -200, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 236, -36, -319, 126,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -468, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 138, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -225, -7, 54, -86,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -161, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -55, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -567, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -814, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -804, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -801, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -167, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -131, 38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -28, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 80, -47,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -775, 87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -188, 175,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 22, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 150, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -74, 67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 263, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -22, 158,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 341, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 139, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 132, -6, 271, 8, 336, -4,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimDownForwardD_joint13[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -728, -60,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1281, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1240, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -696, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, 344,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -716, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -832, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -626, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 31,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTFoxAnimDownForwardD_joint14[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 536, 119, 0, 14, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 714, 17, 89, 44, 0, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 625, -23, 223, -2, -625, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 27), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimDownForwardD_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimDownForwardD_joint17[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 106, 26, -86, 11, -162, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 307, 120, -24, -28, -515, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 438, 70, -104, -36, -499, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 199, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -720, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -820, -87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -780, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 163, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -17, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -4, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -76, 15,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -706, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1041, -25,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -63, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -308, -45,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1053, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -162, 106,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -35, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -386, -16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -348, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -248, 38,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -399, -9, -67, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -405, -5, -223, 25, -26, 40,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimDownForwardD_joint19[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 292, 90,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 367, -228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 351, 289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 578, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 1165, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1096, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 715, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 655, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 406, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -52,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTFoxAnimDownForwardD_joint21[166] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -561, -118, -424, -28, 419, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 155, -331,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -485, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -679, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -701, 267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -144, 498, -293, -339,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -543, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 294, 215, -321, 137,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 101, -126,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 24, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -284, 291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 34, -24, 39, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 53, -58, 141, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 187, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -82, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 21, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 35, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 94, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 190, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -37, -105,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 24, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 139, 40,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 80, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 19, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -152, -99,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -158, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 174, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 128, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 78, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 99, -43,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -120, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -64, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 61, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 46, -15, 125, -2, -56, 8,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimDownForwardD_joint22[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1022, -210, 337, 22, 110, -220,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 117, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 811, -299, -109, -309,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 423, -260, -507, -262,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 198, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -634, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -17, -69, -517, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 47, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -904, 81,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 163, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 423, 117,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 92, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 348, -18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -783, 147,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -224, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 537, 79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 426, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 304, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 303, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -216, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 34, 73,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 415, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 533, 7,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 298, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 149, -17,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 527, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 357, -6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 103, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 355, -1, 137, -11, 134, 31,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimDownForwardD_joint24[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 915, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 575, -391,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 31, -285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 518, 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 716, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1424, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1390, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 812, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 747, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 382, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -50,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTFoxAnimDownForwardD_joint25[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 107, 251, -50, -20, -94, -63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -306, 226,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -68, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 354, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 114, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 131, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 54, -87,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -428, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -25, 197,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 59, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -23, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 241, 11,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 35, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -660, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -520, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -599, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -620, -4, 248, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -13, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -500, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -204, 284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 165, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 170, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -4, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -617, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -236, 17,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -51, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -96, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 8, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16, 7, -102, -5, -226, 9,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimDownForwardD_joint26[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -804, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 20), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1064, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -953, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -1228, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -323, 76, 0, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 14), 0, 219,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTFoxAnimDownForwardD_joint27[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -404, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 64, -450,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 11), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -312, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -566, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -436, -50, 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1123, 16, -12, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 14), -178, -122,
	ftAnimEnd(),
};
