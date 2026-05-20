/* AnimJoint data for relocData file 811 (FTDonkeyAnimJumpB) */
/* 2016 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimJumpB_joint1[50];
extern u16 dFTDonkeyAnimJumpB_joint2[34];
extern u16 dFTDonkeyAnimJumpB_joint4[64];
extern u16 dFTDonkeyAnimJumpB_joint5[104];
extern u16 dFTDonkeyAnimJumpB_joint6[40];
extern u16 dFTDonkeyAnimJumpB_joint7[24];
extern u16 dFTDonkeyAnimJumpB_joint8[10];
extern u16 dFTDonkeyAnimJumpB_joint10[16];
extern u16 dFTDonkeyAnimJumpB_joint11[106];
extern u16 dFTDonkeyAnimJumpB_joint12[40];
extern u16 dFTDonkeyAnimJumpB_joint13[18];
extern u16 dFTDonkeyAnimJumpB_joint14[10];
extern u16 dFTDonkeyAnimJumpB_joint16[48];
extern u16 dFTDonkeyAnimJumpB_joint17[90];
extern u16 dFTDonkeyAnimJumpB_joint19[24];
extern u16 dFTDonkeyAnimJumpB_joint21[88];
extern u16 dFTDonkeyAnimJumpB_joint22[82];
extern u16 dFTDonkeyAnimJumpB_joint24[24];
extern u16 dFTDonkeyAnimJumpB_joint25[86];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTDonkeyAnimJumpB_joints[] = {
	(AObjEvent32 *)dFTDonkeyAnimJumpB_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTDonkeyAnimJumpB_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTDonkeyAnimJumpB_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTDonkeyAnimJumpB_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTDonkeyAnimJumpB_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTDonkeyAnimJumpB_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTDonkeyAnimJumpB_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTDonkeyAnimJumpB_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTDonkeyAnimJumpB_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTDonkeyAnimJumpB_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTDonkeyAnimJumpB_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTDonkeyAnimJumpB_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTDonkeyAnimJumpB_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTDonkeyAnimJumpB_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTDonkeyAnimJumpB_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTDonkeyAnimJumpB_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTDonkeyAnimJumpB_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTDonkeyAnimJumpB_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTDonkeyAnimJumpB_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimJumpB_joint1[50] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 940, -319,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 30, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 836, -13, 109, 248,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 898, 572, 458, 517,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 1409, 1571, 626, -433,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 2077, 696, 133, -1432,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 1931, -922, -448, -452,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 1039, -714, -376, 93,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 949, -319,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTDonkeyAnimJumpB_joint2[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -391, -28, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -136, -68, -4, 1, -19, -7,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 30), -3462,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -4, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -4, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -4, 0, -19, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 10, 156,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimJumpB_joint4[64] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 440, 73, -78, 0, 319, -157,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -181, 9, 17, -2, 19, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -24, 120, -200,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 37), 0, 319, -157,
	ftAnimBlock(0, 7),
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 671, 54,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 17, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 17, 0, 19, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 690, -15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 12, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 441, -22, 17, 4, 19, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 791, 73, -78,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimJumpB_joint5[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1842, -3, -1278, 1, 1121, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 1463, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1191, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -2270, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2310, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2023, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1481, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1293, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1238, -64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1575, -24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1873, 137,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1614, -21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1291, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 1580, 44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1594, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -1222, 7,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1637, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1994, -10,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1625, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1778, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1999, -5, -1218, 3, 1787, 9,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimJumpB_joint6[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -827, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -1148, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1170, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1169, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1091, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -1037, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1036, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1016, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1014, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimJumpB_joint7[24] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -558, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -558, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -558, -13, 0, -15, 0, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -825, -308, 166,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimJumpB_joint8[10] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 584, 230, 133,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 45), 393, 144, 74,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTDonkeyAnimJumpB_joint10[16] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -452, -206, 75,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -217, -206, 75,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -452, -206, 75,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimJumpB_joint11[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -216, 7, 215, 5, -581, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 14), 515, 50, 521, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -255, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -220, 39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -166, -43,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 553, 10, 525, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 55, -50, 121, -21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -205, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -206, -6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 13, -32, 104, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 393, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 354, 31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -209, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 61, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 436, 43, 119, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 595, 19, 372, 32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 383, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 414, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 605, 10, 418, 3, 390, 17,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimJumpB_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -449, -19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -1064, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1079, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1060, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -996, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -1058, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1059, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1030, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1028, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimJumpB_joint13[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 415, 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 943, 10, 118, 0, 138, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 893, 0, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTDonkeyAnimJumpB_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -1340, 2502, 120, 44, 163,
	ftAnimBlock(0, 45),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTDonkeyAnimJumpB_joint16[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -404, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1046, 573,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -511, -4, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -404, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -511, -4, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -404, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -511, -4, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -404, -30, 0, 29, 0, -22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -1429, 893, -670,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTDonkeyAnimJumpB_joint17[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -617, 2, -250, -2, -176, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -190, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -880, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 15), -426, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -442, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -446, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -174, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -64, -20,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -363, 72, -907, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -209, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -387, 24,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -86, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -278, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -194, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -74, 2,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -364, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -308, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -278, 0, -73, 1, -305, 2,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimJumpB_joint19[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 616, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), 1254, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1230, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 839, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 834, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimJumpB_joint21[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 577, -6, -26, 0, 539, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -97, -34, -21, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), 307, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 334, 71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 668, -77,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -128, -22, 3, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -170, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 8, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 548, -121,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 193, -15,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -161, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 40, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 12, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 9, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 177, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 13, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 12, -1, 9, 0, 41, 1,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimJumpB_joint22[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -124, 1, 213, 1, -546, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 18), 68, 18, -707, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 16), 495, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 561, 70,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 587, -141,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 85, -8, -721, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -69, -14, -935, -15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 415, -146,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 176, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -82, -11, -948, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 19), -193, 0, -876, 1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 170, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 14), 139, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -194, 0, 139, 0, -875, 0,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimJumpB_joint24[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1134, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 32), 1263, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1255, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1177, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1176, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTDonkeyAnimJumpB_joint25[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1546, 2, 1725, 0, -1540, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 1574, -66, 1659, -20, -1728, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1486, -106, 1630, -39, -1720, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1541, 59, -1695, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1200, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1302, 104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1539, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1608, 62, -1752, -50,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 1786, 2, -1601, 21,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1541, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1546, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1789, 1, -1579, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 1789, 0, -1481, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1546, 0, 1789, 0, -1480, 1,
	ftAnimEnd(),
};
