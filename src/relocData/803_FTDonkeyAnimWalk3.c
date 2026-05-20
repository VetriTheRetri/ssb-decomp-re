/* AnimJoint data for relocData file 803 (FTDonkeyAnimWalk3) */
/* 1920 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimWalk3_joint1[46];
extern u16 dFTDonkeyAnimWalk3_joint2[52];
extern u16 dFTDonkeyAnimWalk3_joint4[46];
extern u16 dFTDonkeyAnimWalk3_joint5[64];
extern u16 dFTDonkeyAnimWalk3_joint6[32];
extern u16 dFTDonkeyAnimWalk3_joint7[16];
extern u16 dFTDonkeyAnimWalk3_joint8[60];
extern u16 dFTDonkeyAnimWalk3_joint10[66];
extern u16 dFTDonkeyAnimWalk3_joint11[70];
extern u16 dFTDonkeyAnimWalk3_joint12[28];
extern u16 dFTDonkeyAnimWalk3_joint13[16];
extern u16 dFTDonkeyAnimWalk3_joint14[12];
extern u16 dFTDonkeyAnimWalk3_joint16[16];
extern u16 dFTDonkeyAnimWalk3_joint17[78];
extern u16 dFTDonkeyAnimWalk3_joint19[32];
extern u16 dFTDonkeyAnimWalk3_joint21[86];
extern u16 dFTDonkeyAnimWalk3_joint22[72];
extern u16 dFTDonkeyAnimWalk3_joint24[40];
extern u16 dFTDonkeyAnimWalk3_joint25[78];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTDonkeyAnimWalk3_joints[] = {
	(AObjEvent32 *)dFTDonkeyAnimWalk3_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTDonkeyAnimWalk3_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTDonkeyAnimWalk3_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTDonkeyAnimWalk3_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTDonkeyAnimWalk3_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTDonkeyAnimWalk3_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTDonkeyAnimWalk3_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTDonkeyAnimWalk3_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTDonkeyAnimWalk3_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTDonkeyAnimWalk3_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTDonkeyAnimWalk3_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTDonkeyAnimWalk3_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTDonkeyAnimWalk3_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTDonkeyAnimWalk3_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTDonkeyAnimWalk3_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTDonkeyAnimWalk3_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTDonkeyAnimWalk3_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTDonkeyAnimWalk3_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTDonkeyAnimWalk3_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimWalk3_joint1[46] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 110, 44, 1298, -195, -327, 13,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 6), -314,
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), 1007, 66,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 2), 94, -69,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -69,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 4), 2,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), -42, -2,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 21, 99, 1422, 166, -343, -7,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 99,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 110, -4, 1298, -52, -327, 6,
	ftAnimLoop(0x6800, -90),
};

/* Joint 2 */
u16 dFTDonkeyAnimWalk3_joint2[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -79, -8, -96, 1, -61, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -133, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 65, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), 10,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 31, -1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 14), -96,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -77, -1,
	ftAnimBlock(0, 3),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -79, -4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -61, 2,
	ftAnimLoop(0x6800, -100),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimWalk3_joint4[46] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 653, 8, -18, -2,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 69,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 735, -39, 20,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -3, 8,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -5,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 14), 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 688, -4, 85, -7,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -4,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -18, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 574, -5,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 653, 4,
	ftAnimLoop(0x6800, -90),
};

/* Joint 5 */
u16 dFTDonkeyAnimWalk3_joint5[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, 5, -71, -6, -476, -45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 291, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -45, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -757, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -727, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -360, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 279, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 175, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -24, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -74, 3,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -336, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -433, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 174, -1, -71, 2, -476, -42,
	ftAnimLoop(0x6800, -124),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimWalk3_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -742, 11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -472, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -418, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -255, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -307, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -738, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -742, -4,
	ftAnimLoop(0x6800, -62),
};

/* Joint 7 */
u16 dFTDonkeyAnimWalk3_joint7[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -327, 61, 81,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 8 */
u16 dFTDonkeyAnimWalk3_joint8[60] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 150, -2, 9, 5,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), -67,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 130, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 23, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -32,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -69, 2,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 14), -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 71, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 154, 0,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 9, 0,
	ftAnimBlock(0, 6),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 150, 0,
	ftAnimLoop(0x6800, -116),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTDonkeyAnimWalk3_joint10[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -280, -5, 153, -18, -30, -6,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -328, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -33, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 35,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -1, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -45, 5,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 97, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), -382,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -269, 9,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 163, 0,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -30, -1,
	ftAnimBlock(0, 7),
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -280, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 153, -4,
	ftAnimLoop(0x6800, -130),
};

/* Joint 11 */
u16 dFTDonkeyAnimWalk3_joint11[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -352, 20, 62, 49, -666, 78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -136, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 224, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -284, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -386, -106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -749, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -177, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -357, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 214, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 72, -50,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -735, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -732, 32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 27, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -352, 4, 62, 34, -666, 65,
	ftAnimLoop(0x6800, -136),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimWalk3_joint12[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -302, -140,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -878, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -804, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -252, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -179, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -302, -122,
	ftAnimLoop(0x6800, -54),
};

/* Joint 13 */
u16 dFTDonkeyAnimWalk3_joint13[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 554, 60, 239,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 405, 110, 338,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 554, 60, 239,
	ftAnimLoop(0x6800, -30),
};

/* Joint 14 */
u16 dFTDonkeyAnimWalk3_joint14[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -1340, 2502, 120, 120, 120,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTDonkeyAnimWalk3_joint16[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -404,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 1046, 573,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -814,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -404,
	ftAnimLoop(0x6800, -30),
};

/* Joint 17 */
u16 dFTDonkeyAnimWalk3_joint17[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -171, -195, -154, -116, -453, 73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -246, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -207, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -510, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -426, 94,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -22, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -245, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -16, -74,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -152, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -56, -5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -111, -102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -480, 6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -19, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -42, -75, -71, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -171, -128, -154, -83, -453, 27,
	ftAnimLoop(0x6800, -152),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimWalk3_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 630, 57,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1029, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 986, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 897, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1010, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 743, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 630, -113,
	ftAnimLoop(0x6800, -62),
};

/* Joint 21 */
u16 dFTDonkeyAnimWalk3_joint21[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 126, 53, -109, 200, -148, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -162, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -556, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 250, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 211, -53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 43, 13,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -182, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -110, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 57, 8, -484, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -463, 62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -165, -24,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -90, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 42, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -391, 72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -201, 84,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -187, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 126, 84, -109, 78, -148, 53,
	ftAnimLoop(0x6800, -168),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimWalk3_joint22[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -73, -23, 247, -24, -38, -92,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 8, 36, -647, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 171, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 220, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 203, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 24, 0, -646, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 159, 68, -261, 106,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 209, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 230, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 229, 40, -150, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -31, -71, -67, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -71, -40, 246, 16, -37, 29,
	ftAnimLoop(0x6800, -140),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimWalk3_joint24[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 886, 81,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1113, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1063, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 703, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 608, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 660, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 776, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 856, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 887, 30,
	ftAnimLoop(0x6800, -78),
};

/* Joint 25 */
u16 dFTDonkeyAnimWalk3_joint25[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 198, 2, -208, 25, -376, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -190, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 73, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -25, -64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 34, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -243, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -351, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -3, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -211, -50,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 40, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 166, 36,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -254, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -205, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 199, 32, -206, 0, -376, -24,
	ftAnimLoop(0x6800, -148),
	ftAnimEnd(),
	0x0000, 0x0000,
};
