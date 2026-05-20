/* AnimJoint data for relocData file 938 (FTDonkeyAnimGiantPunchAirLoop) */
/* 1216 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimGiantPunchAirLoop_joint1[18];
extern u16 dFTDonkeyAnimGiantPunchAirLoop_joint2[18];
extern u16 dFTDonkeyAnimGiantPunchAirLoop_joint4[18];
extern u16 dFTDonkeyAnimGiantPunchAirLoop_joint5[64];
extern u16 dFTDonkeyAnimGiantPunchAirLoop_joint6[24];
extern u16 dFTDonkeyAnimGiantPunchAirLoop_joint7[10];
extern u16 dFTDonkeyAnimGiantPunchAirLoop_joint8[18];
extern u16 dFTDonkeyAnimGiantPunchAirLoop_joint10[18];
extern u16 dFTDonkeyAnimGiantPunchAirLoop_joint11[96];
extern u16 dFTDonkeyAnimGiantPunchAirLoop_joint12[48];
extern u16 dFTDonkeyAnimGiantPunchAirLoop_joint13[16];
extern u16 dFTDonkeyAnimGiantPunchAirLoop_joint14[8];
extern u16 dFTDonkeyAnimGiantPunchAirLoop_joint16[18];
extern u16 dFTDonkeyAnimGiantPunchAirLoop_joint17[26];
extern u16 dFTDonkeyAnimGiantPunchAirLoop_joint19[16];
extern u16 dFTDonkeyAnimGiantPunchAirLoop_joint21[36];
extern u16 dFTDonkeyAnimGiantPunchAirLoop_joint22[36];
extern u16 dFTDonkeyAnimGiantPunchAirLoop_joint24[32];
extern u16 dFTDonkeyAnimGiantPunchAirLoop_joint25[38];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTDonkeyAnimGiantPunchAirLoop_joints[] = {
	(AObjEvent32 *)dFTDonkeyAnimGiantPunchAirLoop_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTDonkeyAnimGiantPunchAirLoop_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTDonkeyAnimGiantPunchAirLoop_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTDonkeyAnimGiantPunchAirLoop_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTDonkeyAnimGiantPunchAirLoop_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTDonkeyAnimGiantPunchAirLoop_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTDonkeyAnimGiantPunchAirLoop_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTDonkeyAnimGiantPunchAirLoop_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTDonkeyAnimGiantPunchAirLoop_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTDonkeyAnimGiantPunchAirLoop_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTDonkeyAnimGiantPunchAirLoop_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTDonkeyAnimGiantPunchAirLoop_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTDonkeyAnimGiantPunchAirLoop_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTDonkeyAnimGiantPunchAirLoop_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTDonkeyAnimGiantPunchAirLoop_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTDonkeyAnimGiantPunchAirLoop_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTDonkeyAnimGiantPunchAirLoop_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTDonkeyAnimGiantPunchAirLoop_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTDonkeyAnimGiantPunchAirLoop_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimGiantPunchAirLoop_joint1[18] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 94, 49, 1003, -11, -100, 120,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 94, 47, 1003, 0, -100, 431,
	ftAnimLoop(0x6800, -32),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimGiantPunchAirLoop_joint2[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -110, 7, -551, -25, 107, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -110, -3, -551, 15, 107, -6,
	ftAnimLoop(0x6800, -32),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimGiantPunchAirLoop_joint4[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 453, -14, -172, -9, -168, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 453, 28, -172, 29, -168, 19,
	ftAnimLoop(0x6800, -32),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimGiantPunchAirLoop_joint5[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -490, 35, -602, -47, -426, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -677, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -158, 243, -795, -250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 127, 246, -1086, -250,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 208, -227, -1159, 236,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -685, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -668, 50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -79, -274, -862, 285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -341, -205, -588, 218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -490, -148, -602, 65, -426, 162,
	ftAnimLoop(0x6800, -124),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimGiantPunchAirLoop_joint6[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -636, 59,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -333, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -421, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -523, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -636, -113,
	ftAnimLoop(0x6800, -46),
};

/* Joint 7 */
u16 dFTDonkeyAnimGiantPunchAirLoop_joint7[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 8,
	ftAnimBlock(0, 12),
	ftAnimLoop(0x6800, -18),
};

/* Joint 8 */
u16 dFTDonkeyAnimGiantPunchAirLoop_joint8[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -31, -10, -60, 0, 29, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -31, 17, -60, 0, 29, -16,
	ftAnimLoop(0x6800, -32),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTDonkeyAnimGiantPunchAirLoop_joint10[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -441, -2, 215, 7, -161, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -441, 6, 215, -13, -161, 16,
	ftAnimLoop(0x6800, -32),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimGiantPunchAirLoop_joint11[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1527, -136, 315, -57, 670, -245,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1090, -127, -5, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 425, -301,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 68, -253,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -103, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 955, -206, 17, -54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 315, -263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -114, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -38, 104, -66, -119,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 138, 64, -639, -262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 151, -121,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 48, -123,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 223, 168, -865, -295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -174, -18, 475, 459, -1230, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 11, 46, 1143, 408, -877, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -80, -92, 1293, 150, -937, -59,
	ftAnimLoop(0x6800, -188),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimGiantPunchAirLoop_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -457, -176,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -796, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -619, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -392, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -619, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -836, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -810, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -685, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -698, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -642, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -457, 185,
	ftAnimLoop(0x6800, -94),
};

/* Joint 13 */
u16 dFTDonkeyAnimGiantPunchAirLoop_joint13[16] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 446, 17,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 446, 10, 0, 0, 0, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 14 */
u16 dFTDonkeyAnimGiantPunchAirLoop_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 12),
	ftAnimLoop(0x6800, -14),
};

/* Joint 16 */
u16 dFTDonkeyAnimGiantPunchAirLoop_joint16[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -402, 0, 53, 2, 53, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -402, 6, 53, -17, 53, -21,
	ftAnimLoop(0x6800, -32),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimGiantPunchAirLoop_joint17[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 301, 14, -990, -18, 2553, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 343, -34, -1019, 25, 2535, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 301, -41, -990, 29, 2553, 17,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimGiantPunchAirLoop_joint19[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1104, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1081, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1104, 22,
	ftAnimLoop(0x6800, -30),
};

/* Joint 21 */
u16 dFTDonkeyAnimGiantPunchAirLoop_joint21[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1511, -45, 1354, -9, 1599, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 1337, 14, 1621, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 1404, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1402, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1435, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1511, 75, 1354, 16, 1599, -22,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimGiantPunchAirLoop_joint22[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 419, 56, 281, -15, -209, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), 449, -25, -174, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), 120, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 169, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 222, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 419, -29, 281, 58, -209, -35,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimGiantPunchAirLoop_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 427, -56,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 90, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 144, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 241, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 335, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 427, 91,
	ftAnimLoop(0x6800, -62),
};

/* Joint 25 */
u16 dFTDonkeyAnimGiantPunchAirLoop_joint25[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1280, -38, -1240, 43, -1472, 51,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 11), 1295, -11, -1229, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1452, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1482, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1489, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1280, -14, -1240, -11, -1472, 17,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
	0x0000, 0x0000,
};
