/* AnimJoint data for relocData file 1612 (FTCaptainAnimStarRodNeutral) */
/* 2864 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimStarRodNeutral_joint1[56];
extern u16 dFTCaptainAnimStarRodNeutral_joint2[34];
extern u16 dFTCaptainAnimStarRodNeutral_joint4[60];
extern u16 dFTCaptainAnimStarRodNeutral_joint5[150];
extern u16 dFTCaptainAnimStarRodNeutral_joint6[64];
extern u16 dFTCaptainAnimStarRodNeutral_joint7[16];
extern u16 dFTCaptainAnimStarRodNeutral_joint8[42];
extern u16 dFTCaptainAnimStarRodNeutral_joint10[8];
extern u16 dFTCaptainAnimStarRodNeutral_joint11[156];
extern u16 dFTCaptainAnimStarRodNeutral_joint12[72];
extern u16 dFTCaptainAnimStarRodNeutral_joint13[86];
extern u16 dFTCaptainAnimStarRodNeutral_joint14[10];
extern u16 dFTCaptainAnimStarRodNeutral_joint16[14];
extern u16 dFTCaptainAnimStarRodNeutral_joint17[138];
extern u16 dFTCaptainAnimStarRodNeutral_joint19[64];
extern u16 dFTCaptainAnimStarRodNeutral_joint21[116];
extern u16 dFTCaptainAnimStarRodNeutral_joint22[114];
extern u16 dFTCaptainAnimStarRodNeutral_joint24[56];
extern u16 dFTCaptainAnimStarRodNeutral_joint25[126];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTCaptainAnimStarRodNeutral_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimStarRodNeutral_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimStarRodNeutral_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimStarRodNeutral_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTCaptainAnimStarRodNeutral_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTCaptainAnimStarRodNeutral_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimStarRodNeutral_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimStarRodNeutral_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTCaptainAnimStarRodNeutral_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTCaptainAnimStarRodNeutral_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTCaptainAnimStarRodNeutral_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimStarRodNeutral_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimStarRodNeutral_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTCaptainAnimStarRodNeutral_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTCaptainAnimStarRodNeutral_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTCaptainAnimStarRodNeutral_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTCaptainAnimStarRodNeutral_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTCaptainAnimStarRodNeutral_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTCaptainAnimStarRodNeutral_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTCaptainAnimStarRodNeutral_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimStarRodNeutral_joint1[56] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1600, 0,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1680, -257, -116, 305,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 4), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 1375, 0, 267, -5,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 3), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 1375, 26, 267, 29,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 5), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1289, 9, 86, -299,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 4), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 8), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 8), 1600, 13,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 8), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimStarRodNeutral_joint2[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 107, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 4, -76, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -158, 19, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 245, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 245, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 107, -3, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTCaptainAnimStarRodNeutral_joint4[60] = {
	ftAnimSetValRate(FT_ANIM_ROTY), 0, -111,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 189, 0, 0, -31, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -16, 17, -220, 34, -132, 43, -19, -25, -7, 37, 11, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 309, 0, 244, 0, 307, 0, -22, -2, 0, 8, 6, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 309, 0, 244, 0, 307, 0, -22, 10, 0, -15, 6, 19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 189, 0, 0, 0, -31, 47,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimStarRodNeutral_joint5[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 239, 14, 5, -117, -524, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 192, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -111, -176, -477, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -347, -201, -316, 221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 25, -69, -513, -144, -34, 230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 53, -74, -636, 23, 144, 150,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 405, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -123, -108, -466, 174,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -120, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -287, 127,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -193, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -105, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -119, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -198, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -221, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 397, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 361, -21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -98, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 54, 67,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 143, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -228, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -141, 55,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 127, 65, -24, -168,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 237, 3, -499, -45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -83, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -4, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 239, 2, 5, 10, -524, -25,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimStarRodNeutral_joint6[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -797, -81,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -878, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -965, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -895, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -766, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -900, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -935, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -925, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -925, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -943, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -961, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1125, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1082, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -828, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 31,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimStarRodNeutral_joint7[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -781, -89, -388,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -223, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -781, -89, -388,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimStarRodNeutral_joint8[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 8, 1, 302, 13, 69, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 8, -4, 67, -286, 53, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -5, -2, -557, 2, 0, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -5, 0, -557, 2, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTCaptainAnimStarRodNeutral_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimStarRodNeutral_joint11[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -129, 148, 144, 98, 592, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 284, -35, 616, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 19, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 154, 214,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 461, -351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 170, 198, 476, -372,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 682, -1, -127, -624,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -255, -267, 167, -142, -772, -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -72, 193, 397, 192, -507, 278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 131, 85, 553, 83, -215, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 98, -40, 563, 6, -236, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 49, -43, 566, 0, -291, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 435, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 18, 41, -341, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 93, 93, -251, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 290, 59, 41, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 324, 9, 353, -80, 161, 111,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 518, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -83, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 218, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 231, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 198, -35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 583, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -118, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -128, -5, 161, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -129, 0, 144, -16, 592, 8,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimStarRodNeutral_joint12[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1024, -29,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1054, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -887, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -837, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1124, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -517, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -668, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -584, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -560, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -440, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -501, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -864, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -944, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1022, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1027, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1025, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimStarRodNeutral_joint13[86] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 275, 62,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 206, -110, 223, -22, 262, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 48, -221, 230, -60, 259, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -236, 441, 102, -82, 435, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 931, 158, 65, 87, 225, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 80, -252, 277, -20, 70, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 173, 0, 3, 1, 700, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 173, 3, 3, 1, 700, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 147, 31, -84, -16, 669, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 396, 12, -112, 35, 292, -60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 270, 275, 62,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimStarRodNeutral_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimStarRodNeutral_joint16[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 18, 0, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 24), 0, 18, 0, -3,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimStarRodNeutral_joint17[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 191, -49, 70, -48, -472, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -409, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 141, -82, 22, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 25, -93, -69, -73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -127, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -45, -12, -343, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 0, 55, -355, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 64, 49, -57, 91, -494, -123,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 133, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 99, 35, -603, -70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 151, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -635, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -629, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 155, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 136, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -632, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -684, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 140, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 136, 13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 144, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 88, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -720, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -486, 23,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 150, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 188, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 76, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, 2, 70, -5, -472, 14,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimStarRodNeutral_joint19[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 445, -41,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 403, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 305, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 242, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 500, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 736, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 832, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 832, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 833, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 844, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 844, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 577, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 515, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 466, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimStarRodNeutral_joint21[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -126, 29, -42, 13, 80, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 99, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -97, 43, -28, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -39, 39, 2, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -58, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -13, -39, 114, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -150, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -77, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 65, 57,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -80, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -133, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 87, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 63, -13, -148, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -107, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 60, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 82, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -127, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -127, 1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 73, -10, -72, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -36, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 58, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -126, 0, 73, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -126, 0, -42, -5, 80, 6,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimStarRodNeutral_joint22[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 160, -11, 110, 14, -76, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 107, -3, 164, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -166, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 108, 30, 167, -34, -143, 82,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 13, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 169, 46, -17, 93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 41, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 201, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 201, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 13, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 46, 26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 41, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -12, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 201, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 152, 3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 74, 25, -60, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -100, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 111, -2,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 156, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 159, 2, -83, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, 0, 110, -1, -76, 7,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimStarRodNeutral_joint24[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 541, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 506, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 479, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 493, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 600, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 654, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 637, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 640, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 634, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 836, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 842, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 561, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, -20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimStarRodNeutral_joint25[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 161, -5, 365, -38, -279, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -223, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 119, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 326, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 241, -84,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 130, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -189, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 120, 31, -188, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 245, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 230, 126, -257, -81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -412, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 383, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 240, -1, 468, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 237, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 468, 0, -410, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -447, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 468, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 420, -11,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -461, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -289, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 237, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 164, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 408, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 369, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 161, -2, 365, -4, -279, 9,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
