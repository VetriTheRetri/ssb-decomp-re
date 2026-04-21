/* AnimJoint data for relocData file 1755 (FTNessAnimItemThrowSmashU) */
/* 2576 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimItemThrowSmashU_joint1[68];
extern u16 dFTNessAnimItemThrowSmashU_joint2[42];
extern u16 dFTNessAnimItemThrowSmashU_joint4[50];
extern u16 dFTNessAnimItemThrowSmashU_joint5[124];
extern u16 dFTNessAnimItemThrowSmashU_joint6[40];
extern u16 dFTNessAnimItemThrowSmashU_joint7[10];
extern u16 dFTNessAnimItemThrowSmashU_joint8[56];
extern u16 dFTNessAnimItemThrowSmashU_joint10[46];
extern u16 dFTNessAnimItemThrowSmashU_joint11[146];
extern u16 dFTNessAnimItemThrowSmashU_joint12[38];
extern u16 dFTNessAnimItemThrowSmashU_joint13[46];
extern u16 dFTNessAnimItemThrowSmashU_joint15[18];
extern u16 dFTNessAnimItemThrowSmashU_joint16[82];
extern u16 dFTNessAnimItemThrowSmashU_joint18[54];
extern u16 dFTNessAnimItemThrowSmashU_joint19[110];
extern u16 dFTNessAnimItemThrowSmashU_joint21[10];
extern u16 dFTNessAnimItemThrowSmashU_joint22[114];
extern u16 dFTNessAnimItemThrowSmashU_joint24[54];
extern u16 dFTNessAnimItemThrowSmashU_joint25[94];
extern u16 dFTNessAnimItemThrowSmashU_joint26[34];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimItemThrowSmashU_joints[] = {
	(u32)dFTNessAnimItemThrowSmashU_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimItemThrowSmashU_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimItemThrowSmashU_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimItemThrowSmashU_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimItemThrowSmashU_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimItemThrowSmashU_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimItemThrowSmashU_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimItemThrowSmashU_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimItemThrowSmashU_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimItemThrowSmashU_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimItemThrowSmashU_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimItemThrowSmashU_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimItemThrowSmashU_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimItemThrowSmashU_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimItemThrowSmashU_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimItemThrowSmashU_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimItemThrowSmashU_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimItemThrowSmashU_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimItemThrowSmashU_joint25, /* [24] joint 25 */
	(u32)dFTNessAnimItemThrowSmashU_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimItemThrowSmashU_joint1[68] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -28, 0, 0, 0, 0, 540, -36, 0, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 360, -289, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 360, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 360, 1724, 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 1006, 206, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 540, -233, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 0, 0, 540, 5, 0, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimItemThrowSmashU_joint2[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 28, 5, -360, -1, 8, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, -5, -804, -88, 0, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -804, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -804, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 1, -804, 24, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 28, -1, -360, 2, 8, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimItemThrowSmashU_joint4[50] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, -104, 0, -11, 0, -21, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 402, 80,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 24), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 402,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 402, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -276, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, 2, 0, 2, 0, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimItemThrowSmashU_joint5[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -410, -117, -261, -97, 415, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -527, 300, -358, -238, 388, -445,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 190, 692, -737, -118, -475, -778,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 858, 363, -596, 110, -1167, -376,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 917, 29, -517, 41, -1228, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -517, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 916, 0, -1226, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 917, -228, -1228, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 459, -387, -637, -42, -740, 420,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -588, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 143, -177, -386, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 69, -29, -299, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 45, -32, -580, 7, -269, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -369, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), -238, -24, 103, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -262, -59, 144, 92,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -400, -26, 377, 63,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -298, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -410, -10, -261, 36, 415, 38,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimItemThrowSmashU_joint6[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -473, -82,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -556, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -71, 273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -392, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, -80,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimItemThrowSmashU_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimItemThrowSmashU_joint8[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -10, 0, 364, -3, -32, 4, 0, 0, 300, 2, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -428, -83, 0, -72, 0, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -428, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -428, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -366, 23, 0, 20, 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -10, 0, 364, -3, -32, 4,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNessAnimItemThrowSmashU_joint10[46] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 33, 0, 0, 0, -13, 0, 4,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 332, 66,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 332, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -160, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, -4, 0, 5, 0, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTNessAnimItemThrowSmashU_joint11[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1192, -16, 1038, 124, -1727, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1321, 153, 1136, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1674, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1403, 271,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -873, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1483, -486, 1101, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1310, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 349, -562,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 358, 11, -868, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 371, -45, -868, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 267, 10, -445, 318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 491, 78, -11, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 550, 29, 1463, 93, 170, 101,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1410, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 535, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 169, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 197, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 350, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1371, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1123, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 551, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 540, 364,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 955, -130, 340, 116,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 999, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 582, 471,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1138, 338, 1282, 427,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1203, -12, 1472, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1192, -10, 1038, 38, 1489, 17,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimItemThrowSmashU_joint12[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, 558,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 274,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -619, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -711, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -604, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 45,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimItemThrowSmashU_joint13[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 54,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 90, 73, 126, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1429, 138, 0, -6, 0, -14,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 4), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), 1340,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 3, 0, 8,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), 580,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 54, 126,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 12), 90,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimItemThrowSmashU_joint15[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 893, -22, -935, -4, 681, 21,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 75, 68, 30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 893, -935, 681,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTNessAnimItemThrowSmashU_joint16[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 41, 13, -87, 2, -352, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -29, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 12, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -241, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -247, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 0, 14, 108, 159,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 61, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, -6, 72, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -88, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 76, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 77, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -153, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -238, -72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -360, 11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 66, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 43, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 41, -1, -87, 0, -352, 8,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimItemThrowSmashU_joint18[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 430, 124,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 952, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 955, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 960, -474,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -476,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 432, 273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 554, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 445, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 430, -14,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimItemThrowSmashU_joint19[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -137, 11, -395, -69, 39, -62,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -124, 21, -842, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -202, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -339, -69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -378, -121,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -88, 410, -834, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1131, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 696, 465, -583, -166,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -894, -232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 842, 91,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1016, 215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1117, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -925, -35,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1350, 228, -1253, -350,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1452, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1596, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -965, -39, -1644, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -1208, -6, -1573, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1448, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 1472, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1471, -1, -1212, -4, -1569, 4,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimItemThrowSmashU_joint21[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -66, 0, 0, 126, -82, -12,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimItemThrowSmashU_joint22[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1488, -93, 1429, -164, 1458, -70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1254, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 959, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1264, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1310, 73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1571, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1279, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1262, 106,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1586, -21, 936, 184,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1406, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1482, 125, 1327, 239,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1498, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1414, 44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1269, -73,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1478, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1425, 21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1423, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1429, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1211, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1438, 26,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1446, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1480, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1488, 8, 1429, 0, 1458, 19,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimItemThrowSmashU_joint24[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 311, -311,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -155,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 248, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 327, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 371, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 448, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 333, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 311, -21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimItemThrowSmashU_joint25[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 107, 209, 28, -110, -172, 249,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 400, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -278, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 76, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 148, 82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 201, -51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 376, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 374, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 374, -214, -266, 8, 154, 118,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 25, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -54, -269, 438, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -164, -41, 527, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 233, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 150, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 16, -116,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -179, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 231, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 111, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 107, -3, 28, 3, -172, 6,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimItemThrowSmashU_joint26[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 56, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -151, -103, -22, 14, -156, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -356, 9, 59, 1, 29, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 56, 0, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
