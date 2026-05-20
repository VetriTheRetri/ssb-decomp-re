/* AnimJoint data for relocData file 1676 (FTNessAnimJumpAerialF) */
/* 2848 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimJumpAerialF_joint1[50];
extern u16 dFTNessAnimJumpAerialF_joint2[32];
extern u16 dFTNessAnimJumpAerialF_joint3[40];
extern u16 dFTNessAnimJumpAerialF_joint5[30];
extern u16 dFTNessAnimJumpAerialF_joint6[132];
extern u16 dFTNessAnimJumpAerialF_joint7[54];
extern u16 dFTNessAnimJumpAerialF_joint8[10];
extern u16 dFTNessAnimJumpAerialF_joint9[42];
extern u16 dFTNessAnimJumpAerialF_joint11[10];
extern u16 dFTNessAnimJumpAerialF_joint12[158];
extern u16 dFTNessAnimJumpAerialF_joint13[54];
extern u16 dFTNessAnimJumpAerialF_joint14[14];
extern u16 dFTNessAnimJumpAerialF_joint16[10];
extern u16 dFTNessAnimJumpAerialF_joint17[140];
extern u16 dFTNessAnimJumpAerialF_joint19[30];
extern u16 dFTNessAnimJumpAerialF_joint20[156];
extern u16 dFTNessAnimJumpAerialF_joint22[54];
extern u16 dFTNessAnimJumpAerialF_joint23[150];
extern u16 dFTNessAnimJumpAerialF_joint25[32];
extern u16 dFTNessAnimJumpAerialF_joint26[118];
extern u16 dFTNessAnimJumpAerialF_joint27[54];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTNessAnimJumpAerialF_joints[] = {
	(AObjEvent32 *)dFTNessAnimJumpAerialF_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimJumpAerialF_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimJumpAerialF_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTNessAnimJumpAerialF_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTNessAnimJumpAerialF_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimJumpAerialF_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNessAnimJumpAerialF_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNessAnimJumpAerialF_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTNessAnimJumpAerialF_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTNessAnimJumpAerialF_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimJumpAerialF_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimJumpAerialF_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTNessAnimJumpAerialF_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTNessAnimJumpAerialF_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTNessAnimJumpAerialF_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTNessAnimJumpAerialF_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTNessAnimJumpAerialF_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTNessAnimJumpAerialF_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTNessAnimJumpAerialF_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTNessAnimJumpAerialF_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTNessAnimJumpAerialF_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTNessAnimJumpAerialF_joint1[50] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 306, 0, 1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 347, 443, 230, 311,
	ftAnimSetValRateT(FT_ANIM_TRAY, 21), 2935, 1692,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 8), 584, 464,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 19), 897, -34,
	ftAnimBlock(0, 13),
	ftAnimSetValRateT(FT_ANIM_TRAY, 32), 5755, 10,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 26), 476, -237,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 15), 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 8), 5527, -661,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 7), 4887, -883,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimJumpAerialF_joint2[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 242,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 75), 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -1108, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -2343, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 23), -2833, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 30), -3216, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTNessAnimJumpAerialF_joint3[40] = {
	ftAnimSetValRate(FT_ANIM_ROTY), -209, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 42, 0, -96, 9, -48, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 19, 0, 3, 2, -65, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 19, 0, 3, -4, -65, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), -209, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 30), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimJumpAerialF_joint5[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 148, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 445, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 473, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), 5, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 22), -192, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 148, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimJumpAerialF_joint6[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 472, -23, -1366, 10, -943, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1340, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 149, -137, -517, 218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 9, -71, -278, 128,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -273, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 32, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1367, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 46), -963, 20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -300, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -416, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 45, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 32), 361, 39,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -408, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 32), -904, -25,
	ftAnimBlock(0, 21),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 397, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), 995, 22,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -940, 20, -931, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -1198, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -1017, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1013, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -961, -6,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1019, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1278, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1249, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1614, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1282, 4, -964, -3, -1627, -13,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimJumpAerialF_joint7[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -673, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -321, 267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 32), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -188, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -267, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -539, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -539, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimJumpAerialF_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 268, 143, 0, 0,
	ftAnimBlock(0, 75),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTNessAnimJumpAerialF_joint9[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 138,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 281, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 207, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 258, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 23), 7, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 105, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 234, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 280, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 194, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTNessAnimJumpAerialF_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 75),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimJumpAerialF_joint12[158] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -393, 30, 1115, -17, -799, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1108, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -17, 284, -375, 321,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 313, 173, 4, 205,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 308, -31, 26, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1146, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1366, -41,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 266, -51, -5, -42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -402, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -24, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -30, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 44), -479, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -412, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 42), -863, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1324, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 18), 1221, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1220, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 971, -24,
	ftAnimBlock(0, 21),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -877, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -914, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -484, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -643, -93,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 944, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 988, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1039, -95,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1346, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -707, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1028, -11,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 982, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 969, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1379, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1423, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1034, -6, 968, 0, -1429, -6,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimJumpAerialF_joint13[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -584, 22,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -334, 239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 38), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -265, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -325, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -433, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -433, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTNessAnimJumpAerialF_joint14[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -104, 44, 566,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 75), -170, -63, 267,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimJumpAerialF_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 75),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTNessAnimJumpAerialF_joint17[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -95, -12, -335, -3, -623, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 107, 50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -505, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -188, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -150, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -85, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 155, 40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 266, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -524, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), -675, 7,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 278, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), 173, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -85, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 44), -186, -10,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -665, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -493, -10,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 157, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), 8, -42,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -504, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -394, 23,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -34, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -371, 60, -196, -58, -78, -122,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -352, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -35, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -279, -161,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -695, -10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -359, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -360, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -32, 2, -360, 0, -700, -4,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimJumpAerialF_joint19[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 66), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 310, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 419, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 448, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 439, -9,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTNessAnimJumpAerialF_joint20[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1629, -1, 1659, -2, -1414, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1353, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1527, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 1737, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1825, 72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1977, 39,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1296, 76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1047, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2011, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1993, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1530, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1369, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1051, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 40), -1288, -11,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2028, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 1753, -28,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1363, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), 1583, 16,
	ftAnimBlock(0, 20),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1725, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 1564, 4,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1299, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1363, 18,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1599, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1585, -16,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1557, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1601, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1322, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1150, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1290, -164,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1583, -68,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1575, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1596, -5, 1573, -2, -1615, -31,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimJumpAerialF_joint22[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -384, 178, 112,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -194, 49, 180, 0, 104, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 175, 23, 176, 0, 92, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 244, -1, 173, 1, 69, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 116, -10, 215, -2, -25, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), -217, -19, 56, -1, -4, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -476, 178, 112,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTNessAnimJumpAerialF_joint23[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1432, 10, 1284, -5, -2229, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1600, 65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1120, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 1422, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1473, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1548, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1538, 63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -1252, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1079, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -844, -2,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1551, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), 1442, -15,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1251, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -1473, -22,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -847, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -1154, -6,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1493, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -1670, -30,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1161, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -1596, 7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1427, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1488, -20,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1700, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1850, -17,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1575, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1584, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1458, -53, -1869, -83,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1179, -27, -2373, -60,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1642, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1668, -26, 1165, -13, -2407, -34,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimJumpAerialF_joint25[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 69), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 442, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 548, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 599, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 614, 15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTNessAnimJumpAerialF_joint26[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -66, 5, 10, -1, 226, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), -369, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 33), 682, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -182, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -290, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -516, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -558, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), -582, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -589, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), -173, 45,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -375, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -115, 36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 686, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), 257, -22,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -128, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -223, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -79, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -42, -49,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 235, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -24, -14,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -219, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -5, 22,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -86, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, 13, -104, -17, -32, -8,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTNessAnimJumpAerialF_joint27[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -392, -96, -76,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -237, 46, -98, 0, -68, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 133, 23, -107, -1, -15, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 194, 0, -120, 0, 52, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 107, -10, -120, 1, 52, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), -264, -14, -42, -4, 11, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -339, -256, -211,
	ftAnimEnd(),
};
