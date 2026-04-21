/* AnimJoint data for relocData file 743 (FTFoxAnimHeavyItemThrowSmashB) */
/* 2448 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimHeavyItemThrowSmashB_joint1[34];
extern u16 dFTFoxAnimHeavyItemThrowSmashB_joint2[30];
extern u16 dFTFoxAnimHeavyItemThrowSmashB_joint4[28];
extern u16 dFTFoxAnimHeavyItemThrowSmashB_joint5[126];
extern u16 dFTFoxAnimHeavyItemThrowSmashB_joint6[28];
extern u16 dFTFoxAnimHeavyItemThrowSmashB_joint7[10];
extern u16 dFTFoxAnimHeavyItemThrowSmashB_joint8[36];
extern u16 dFTFoxAnimHeavyItemThrowSmashB_joint10[10];
extern u16 dFTFoxAnimHeavyItemThrowSmashB_joint11[158];
extern u16 dFTFoxAnimHeavyItemThrowSmashB_joint12[32];
extern u16 dFTFoxAnimHeavyItemThrowSmashB_joint13[10];
extern u16 dFTFoxAnimHeavyItemThrowSmashB_joint15[10];
extern u16 dFTFoxAnimHeavyItemThrowSmashB_joint16[94];
extern u16 dFTFoxAnimHeavyItemThrowSmashB_joint18[58];
extern u16 dFTFoxAnimHeavyItemThrowSmashB_joint20[94];
extern u16 dFTFoxAnimHeavyItemThrowSmashB_joint21[106];
extern u16 dFTFoxAnimHeavyItemThrowSmashB_joint23[56];
extern u16 dFTFoxAnimHeavyItemThrowSmashB_joint24[118];
extern u16 dFTFoxAnimHeavyItemThrowSmashB_joint25[30];
extern u16 dFTFoxAnimHeavyItemThrowSmashB_joint26[42];
extern u16 dFTFoxAnimHeavyItemThrowSmashB_joint27[60];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTFoxAnimHeavyItemThrowSmashB_joints[] = {
	(u32)dFTFoxAnimHeavyItemThrowSmashB_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimHeavyItemThrowSmashB_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimHeavyItemThrowSmashB_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimHeavyItemThrowSmashB_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimHeavyItemThrowSmashB_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimHeavyItemThrowSmashB_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimHeavyItemThrowSmashB_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimHeavyItemThrowSmashB_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimHeavyItemThrowSmashB_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimHeavyItemThrowSmashB_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimHeavyItemThrowSmashB_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimHeavyItemThrowSmashB_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimHeavyItemThrowSmashB_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimHeavyItemThrowSmashB_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimHeavyItemThrowSmashB_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimHeavyItemThrowSmashB_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimHeavyItemThrowSmashB_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimHeavyItemThrowSmashB_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimHeavyItemThrowSmashB_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimHeavyItemThrowSmashB_joint26, /* [25] joint 26 */
	(u32)dFTFoxAnimHeavyItemThrowSmashB_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTFoxAnimHeavyItemThrowSmashB_joint1[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 720, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 20), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 480, 96, -240, 192,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 960, 160, 480, 320,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 19, 780, -18, 360, -200,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 48, 912, -20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimHeavyItemThrowSmashB_joint2[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -178, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -536, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 268, 1, -268, 7, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -141, -338, -3,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimHeavyItemThrowSmashB_joint4[28] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 268, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 0, 13, 268, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 536, 12, 268, -4, 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 309, 156, 81,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimHeavyItemThrowSmashB_joint5[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 845, 6, -112, 2, 1326, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 122, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 13), 1397, 25, 1715, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1409, -15, 1720, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1550, -126,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1002, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 98, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -152, 25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1435, -81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1954, 113,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 903, -105, -110, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 614, -69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -149, -13,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2068, 125,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 2889, 66,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 536, -74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 37, -91,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2956, 61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3198, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -161, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -171, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -48, -65, 3363, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -94, -30, 3447, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -109, -15, -165, 6, 3475, 28,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimHeavyItemThrowSmashB_joint6[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -431, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -527, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, -31,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimHeavyItemThrowSmashB_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimHeavyItemThrowSmashB_joint8[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 268, 223, -134,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 536, 17, 0, -14, 0, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 536, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 536, -25, 0, 5, 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -113, 136, -72,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTFoxAnimHeavyItemThrowSmashB_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimHeavyItemThrowSmashB_joint11[158] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2370, -1, 1556, -2, 3021, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 3378, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1318, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -2324, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2325, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2458, -23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3366, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3245, -207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2458, -69, 1333, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2806, -110,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1630, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2953, -296,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2457, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2817, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2371, -12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1610, -20, 2600, 169,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 3295, 107,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1569, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2395, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -2405, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3389, 92,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 3998, 138,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1568, -93,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1237, -113,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2324, 126, 4163, 205,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1597, 95, 5060, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1154, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1330, 13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1526, 54, 5125, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1488, 25, 5154, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1475, 12, 1336, 5, 5162, 8,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimHeavyItemThrowSmashB_joint12[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -293, -248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -497, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -609, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimHeavyItemThrowSmashB_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 272, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimHeavyItemThrowSmashB_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimHeavyItemThrowSmashB_joint16[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -142, 2, -337, -4, -496, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 89, 1, -621, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 14), -680, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -682, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -81, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 70, -99, -614, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -238, -79, -339, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -269, -10, -238, 141,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -373, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 57, 71, -56, 97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -64, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -42, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -99, 14,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -99, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -212, 7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -84, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 21, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -376, -3, -207, 4, 28, 7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimHeavyItemThrowSmashB_joint18[58] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 625, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 531, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 529, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 712, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 844, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 470, -381,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -232,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 160, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 336, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 407, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 351, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 328, -23,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTFoxAnimHeavyItemThrowSmashB_joint20[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 15, 0, 24, 0, -2, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 83, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 10, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 296, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 287, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 98, -216,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 72, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 12, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -174, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -337, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 0, -6, -138, 99,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -143, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 24, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 96, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -164, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -494, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -511, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -67, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 1, 96, 0, -50, 17,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimHeavyItemThrowSmashB_joint21[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 271, -10, 222, 0, -74, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), -395, 18, 256, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -29, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -19, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -349, 162, 307, 74, 44, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -70, 152, 406, 21, 389, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -45, 35, 350, -55, 324, -66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 206, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 242, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 257, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 377, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 397, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 284, -78,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 187, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 129, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 263, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 341, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 234, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 199, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 347, 5, 122, -6, 198, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimHeavyItemThrowSmashB_joint23[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 803, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 903, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 865, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 681, -429,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -338,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 215, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 293, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 298, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 290, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimHeavyItemThrowSmashB_joint24[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1540, 3, -1624, -1, -2146, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -2360, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1332, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 13), -1643, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1647, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1836, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2347, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2265, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1363, -39, -1912, 318,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1218, 67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1315, -7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1798, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1731, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1197, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1746, -14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1325, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1412, 6,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1694, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1522, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1409, -11, -1755, -50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1556, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1859, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1842, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1825, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1563, -7, -1517, 4, -1818, 7,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimHeavyItemThrowSmashB_joint25[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), -76, -9, 268, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -213, 57,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 9), 272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 844, 11, 268, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 11), 0, 219,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTFoxAnimHeavyItemThrowSmashB_joint26[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 402, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 69, -27, 10, 0, 10, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -207, -30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 10, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -386, 53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 10, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 432, 17, 10, -11, 10, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -178, -122, 0,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTFoxAnimHeavyItemThrowSmashB_joint27[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, 780, 240,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 0, 924, 96, -8, -128,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -893,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 0, 0, 0, 487,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 5), -893, 960,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), -714, 41, 0, 0, 600, 1868,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 480,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 10), -268, 35, 3503, 1928,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 10), 0, 1020,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, -48, -12, 5420,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
