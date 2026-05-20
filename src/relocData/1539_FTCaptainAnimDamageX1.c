/* AnimJoint data for relocData file 1539 (FTCaptainAnimDamageX1) */
/* 2032 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimDamageX1_joint1[42];
extern u16 dFTCaptainAnimDamageX1_joint2[48];
extern u16 dFTCaptainAnimDamageX1_joint4[78];
extern u16 dFTCaptainAnimDamageX1_joint5[94];
extern u16 dFTCaptainAnimDamageX1_joint6[32];
extern u16 dFTCaptainAnimDamageX1_joint7[40];
extern u16 dFTCaptainAnimDamageX1_joint8[32];
extern u16 dFTCaptainAnimDamageX1_joint10[46];
extern u16 dFTCaptainAnimDamageX1_joint11[82];
extern u16 dFTCaptainAnimDamageX1_joint12[40];
extern u16 dFTCaptainAnimDamageX1_joint13[10];
extern u16 dFTCaptainAnimDamageX1_joint14[10];
extern u16 dFTCaptainAnimDamageX1_joint16[30];
extern u16 dFTCaptainAnimDamageX1_joint17[68];
extern u16 dFTCaptainAnimDamageX1_joint19[40];
extern u16 dFTCaptainAnimDamageX1_joint21[68];
extern u16 dFTCaptainAnimDamageX1_joint22[82];
extern u16 dFTCaptainAnimDamageX1_joint24[40];
extern u16 dFTCaptainAnimDamageX1_joint25[84];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTCaptainAnimDamageX1_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimDamageX1_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimDamageX1_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimDamageX1_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamageX1_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTCaptainAnimDamageX1_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimDamageX1_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimDamageX1_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTCaptainAnimDamageX1_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamageX1_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTCaptainAnimDamageX1_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimDamageX1_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimDamageX1_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTCaptainAnimDamageX1_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamageX1_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTCaptainAnimDamageX1_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamageX1_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamageX1_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTCaptainAnimDamageX1_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamageX1_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimDamageX1_joint1[42] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValRate(FT_ANIM_TRAY), 1600, 110,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1433, -912, -468, -3863,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 1), -35,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 103, 1372, -965,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 103, 1266, -912,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 103, 1248, -742,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 1600, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTCaptainAnimDamageX1_joint2[48] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 107, 0, 4, -76, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 249, 100, 78, -54, 3, 41,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 4, -76, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 300, -53, -56, -18, 123, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -139, -32, -56, 17, 123, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 107, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTCaptainAnimDamageX1_joint4[78] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 189, 0, 0, 0, -31, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -143, 53, 260, -101, -180, -96, 96, 0, -13, -17, -54, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 350, 59, -304, -68, -289, -13, 0, -126, -38, 0, 45, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 350, -14, -304, 37, -289, 29, -33, -28, -12, 16, 36, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 233, -58, 9, 110, -43, 105,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -26, 98, -23, -57, 80, 32,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, -31, 47,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 189, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimDamageX1_joint5[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 239, 167, 5, 234, -524, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 406, 303, 240, 79, -628, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 846, 293, 163, -192, -946, -300,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 614, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -145, -217, -1228, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -271, -94, -1141, 150,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -407, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -637, 270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 530, -370, -386, 449,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -126, -298, -398, 91, 261, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -66, 137, -223, 114, 100, -167,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -231, -225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 149, 146, -169, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 226, 45, -34, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 239, 13, 5, 39, -524, -292,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimDamageX1_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -797, 369,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -366, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -705, -261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1081, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1010, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -881, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 83,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimDamageX1_joint7[40] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -515, -2, -333, 420, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -158, 28, -69, -3, 75, 51,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 424, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 420, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -313, -32, -25, 6, 27, -37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -515, -2, -333,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimDamageX1_joint8[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 360, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 0, 26, 0, -100,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -402, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 107,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 8), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 30, 92,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTCaptainAnimDamageX1_joint10[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 120, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 32, 0, 11, 0, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 98, 23, 33, 46, -167, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 107, -15, 211, -5, -130, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -16, 0, -32, 0, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimDamageX1_joint11[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -129, -178, 144, 327, 592, -951,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -307, 159, 471, -119, -358, -296,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 190, 240, -95, -229, -1, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 172, -30, 11, 61, -88, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 128, -41, 27, 7, -10, 85,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -90, -53, 89, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 156, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 28, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -79, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -123, -7, 147, 24, 130, 261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -105, -3, 137, -1, 444, 230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -129, -23, 144, 6, 592, 147,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimDamageX1_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1024, 261,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -763, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -925, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -695, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -686, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -541, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -544, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1018, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimDamageX1_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 270, 275, 62, 388, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimDamageX1_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimDamageX1_joint16[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 10, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 272, 93, -153,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTCaptainAnimDamageX1_joint17[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 191, -82, 70, -93, -472, -159,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -771, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 64, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -23, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 38, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 82, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -727, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -492, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -431, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 48, -9, 83, -6, -532, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 67, 72, 46, 0, -530, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, 123, 70, 23, -472, 57,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimDamageX1_joint19[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 445, -441,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 4, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 51, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 457, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 517, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 489, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -43,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimDamageX1_joint21[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -126, 32, -42, 71, 80, 390,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -50, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 29, -30, 470, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -103, -110, 469, -108,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -216, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 253, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 251, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 145, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -104, -127,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 5, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -37, 1, -151, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -87, -39, 10, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -126, -39, -42, -52, 80, 74,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimDamageX1_joint22[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 160, 11, 110, 79, -76, -591,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 171, 108, 189, 149, -667, -364,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 377, 23, 409, 166, -806, -122,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 605, 64, -920, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 219, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 88, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -225, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -411, 155, 693, 0, -931, 307,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 340, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 84, 253, -305, 375,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 96, 36, -180, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 157, 32, 212, -115, -133, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, 3, 110, -101, -76, 56,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimDamageX1_joint24[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 541, 116,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 658, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 570, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 732, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 798, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 914, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 817, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 696, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, -155,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimDamageX1_joint25[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 161, -161, 365, -70, -279, 128,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 14, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 0, -194, 294, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -228, -61, 71, -119,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 68, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -123, 70, -52, -69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -352, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -87, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 50, 60,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 56, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 145, 164,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 142, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 23, 73,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 361, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 376, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 161, 137, 365, -11, -279, 72,
	ftAnimEnd(),
};
