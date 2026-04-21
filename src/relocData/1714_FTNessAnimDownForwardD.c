/* AnimJoint data for relocData file 1714 (FTNessAnimDownForwardD) */
/* 3328 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimDownForwardD_joint1[14];
extern u16 dFTNessAnimDownForwardD_joint2[56];
extern u16 dFTNessAnimDownForwardD_joint3[24];
extern u16 dFTNessAnimDownForwardD_joint5[24];
extern u16 dFTNessAnimDownForwardD_joint6[92];
extern u16 dFTNessAnimDownForwardD_joint7[40];
extern u16 dFTNessAnimDownForwardD_joint8[10];
extern u16 dFTNessAnimDownForwardD_joint9[54];
extern u16 dFTNessAnimDownForwardD_joint11[24];
extern u16 dFTNessAnimDownForwardD_joint12[112];
extern u16 dFTNessAnimDownForwardD_joint13[46];
extern u16 dFTNessAnimDownForwardD_joint14[98];
extern u16 dFTNessAnimDownForwardD_joint16[10];
extern u16 dFTNessAnimDownForwardD_joint17[156];
extern u16 dFTNessAnimDownForwardD_joint19[52];
extern u16 dFTNessAnimDownForwardD_joint20[120];
extern u16 dFTNessAnimDownForwardD_joint22[164];
extern u16 dFTNessAnimDownForwardD_joint23[150];
extern u16 dFTNessAnimDownForwardD_joint25[64];
extern u16 dFTNessAnimDownForwardD_joint26[152];
extern u16 dFTNessAnimDownForwardD_joint27[148];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTNessAnimDownForwardD_joints[] = {
	(u32)dFTNessAnimDownForwardD_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimDownForwardD_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimDownForwardD_joint3, /* [2] joint 3 */
	(u32)dFTNessAnimDownForwardD_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTNessAnimDownForwardD_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimDownForwardD_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimDownForwardD_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimDownForwardD_joint9, /* [8] joint 9 */
	(u32)dFTNessAnimDownForwardD_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTNessAnimDownForwardD_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimDownForwardD_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimDownForwardD_joint14, /* [13] joint 14 */
	(u32)dFTNessAnimDownForwardD_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTNessAnimDownForwardD_joint17, /* [16] joint 17 */
	(u32)dFTNessAnimDownForwardD_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTNessAnimDownForwardD_joint20, /* [19] joint 20 */
	(u32)dFTNessAnimDownForwardD_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTNessAnimDownForwardD_joint23, /* [22] joint 23 */
	(u32)dFTNessAnimDownForwardD_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTNessAnimDownForwardD_joint26, /* [25] joint 26 */
	(u32)dFTNessAnimDownForwardD_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTNessAnimDownForwardD_joint1[14] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 1600,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 25), 4200,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 11), 4200,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimDownForwardD_joint2[56] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 723, 134, 697, 5, 293, -8,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 5, -1, 720, -60, -6, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), 3395, 69,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 180, -47, 17, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 31), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 10), 4,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 21), 537,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 10), 5, -7, 6, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 11), 3216, 0, -16, -28,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTNessAnimDownForwardD_joint3[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 25), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 25), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 28, -360, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimDownForwardD_joint5[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 6, -457, 156,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 402, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 31), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), 402,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 11), 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimDownForwardD_joint6[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1279, 0, -1464, 12, -2356, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -2472, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 1679, 25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), -1299,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1299, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1466, -19,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2488, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2421, 44,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1704, 49, -1486, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 1959, 13, -1354, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1963, -113, -1304, 103, -2369, 207,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1257, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1144, -41, -1620, 320,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1231, -87, -1365, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1192, -29, -1319, -57, -1232, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1198, 5, -1347, -27, -1192, 40,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimDownForwardD_joint7[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -435, -329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -659, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -674, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, 201,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTNessAnimDownForwardD_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTNessAnimDownForwardD_joint9[54] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 204, -764, -525, 0, 288, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 36), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 482, 18, 0, 50, 0, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 482, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 134, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 348, -13, 0, 33, 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -10, 0, 364, 0, -32, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTNessAnimDownForwardD_joint11[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 54, -18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 36), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 20), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 11), 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimDownForwardD_joint12[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1952, -412, 612, -11, -2742, -372,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 528, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2365, -634, -3114, -584,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3222, -425, -3910, -364,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3215, 0, 328, -142, -3844, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 210, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3223, -2, -3829, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 20), -3210, -36, -3961, -31,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 211, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 234, 13,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3250, -71, -3994, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -3568, -45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -3627, 55,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 247, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 568, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3609, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -3641, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3571, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -3392, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3632, 8, 569, 1, -3336, 56,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimDownForwardD_joint13[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -522, -71,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 292,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 22), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -324, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -406, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -562, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 3,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTNessAnimDownForwardD_joint14[98] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -268, -1072, 714,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -821, -89, -55, 215, 471, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -714, 17, 6, 45, 1, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -715, -3, 219, 20, -53, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -743, 0, 168, -17, -43, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -714, 38, 26, -14, 4, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -281, 130, -3, -22, 157, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 329, 202, -153, -28, 213, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 528, 82, -119, 23, 128, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 576, -18, -83, 0, 129, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 473, -97, -116, 27, 177, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 90, 44, 54, 13, 126, -17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTNessAnimDownForwardD_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTNessAnimDownForwardD_joint17[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 940, -38, -338, 117, -524, -95,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -63, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 901, -154, -619, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 631, -309, -896, -172,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 89, -138, -777, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -125, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -44, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 6, -34, -554, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 51, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -680, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -773, -87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -893, 94,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -37, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -29, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 61, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -46, -27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -782, 94,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -992, -100,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -16, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -224, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1076, -62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -885, 62,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -78, -51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -179, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -258, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -285, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -816, 79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -328, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -173, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -336, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -365, -29, -279, 5, -297, 30,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimDownForwardD_joint19[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 792, 40,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 689, -229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 382, -344,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 261, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1395, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1402, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 927, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 823, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 454, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 414, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, -17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTNessAnimDownForwardD_joint20[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1719, -160, -1909, 10, 1766, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1700, 102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2055, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1657, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1832, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1373, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1596, 71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1624, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2037, -70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1537, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1546, 137,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1456, 29,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1628, -3, 1485, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -1633, 0, 1622, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1502, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 1611, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1653, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1753, -44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1632, -32, 1644, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1630, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -1731, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1709, -39, -1696, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 1613, -5, -1614, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1614, 1, -1620, -6, 1634, 4,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimDownForwardD_joint22[164] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -511, 310, 180,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -514, 25, 80, -70, 234, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -355, 74, -111, -54, 169, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -278, -33, -137, 15, 420, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -94, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -491, -13, -49, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 130, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -347, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -323, 44, -72, 61,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -215, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 49, -57, 27, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 15, -30, 25, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -12, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -257, -43, -11, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -75, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -302, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -344, -13, 9, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -342, -43, 55, 10, -148, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -473, -105, -43, -60, -143, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -553, -67, -65, -10, -122, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -676, -22, -73, 8, -100, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -620, 1, -41, 47, -225, -50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 73, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -672, 59, -253, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -321, 67, 203, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -59, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -66, -4, 0, 22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTNessAnimDownForwardD_joint23[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 802, 57, -52, 155, 195, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -80, -236,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 140, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1026, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1152, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1031, -520, -378, -232,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1045, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 111, -574, -21, -99,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -190, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -144, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -127, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 129, -48,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -193, -3, -1062, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -225, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -681, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -714, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -800, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 83, -44, -166, 48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -50, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -54, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -176, -69, -733, 174,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -98, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 73, 55, -452, 170,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 45, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -391, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -255, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -106, -5, -331, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), -127, -2, -217, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 37, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 130, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -127, 0, 136, 5, -210, 6,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimDownForwardD_joint25[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 106, 296,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 631, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 368, -311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 280, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1204, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1255, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1185, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1138, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1360, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1239, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 804, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 749, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 412, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTNessAnimDownForwardD_joint26[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -296, 87, -260, 26, 598, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 406, -115,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 236, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -208, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -540, -333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -916, 351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -171, 426,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -63, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -88, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -228, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 281, -124,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -241, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 258, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 292, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -163, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -119, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -102, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -24, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -69, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 94, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 298, 42, -262, -94,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 362, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -429, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 43, -36, -475, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -508, 66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 100, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 355, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 30, -14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -441, 64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -195, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 106, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 80, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 76, -4, 25, -5, -202, -6,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTNessAnimDownForwardD_joint27[148] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 187, -104, 265,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -192, -89, 26, 49, 123, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -529, -8, 152, 0, 159, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -270, 82,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 147, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 90, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 172, 28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -32, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 60, -71, 135, 3, 204, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -176, -138, 153, -13, 188, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -216, -45, 109, -12, 201, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -268, -35, 128, -2, 116, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -323, -10, 102, 9, 18, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -300, 148, 156, -37, -269, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -25, 149, 26, -92, -182, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1, 60, -27, -52, -84, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 96, -22, -77, -41, -50, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -70, -3, -150, 6, 47, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 56, -6, 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 185, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 2,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
