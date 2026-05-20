/* AnimJoint data for relocData file 905 (FTDonkeyAnimHammerLanding) */
/* 2000 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimHammerLanding_joint1[16];
extern u16 dFTDonkeyAnimHammerLanding_joint2[48];
extern u16 dFTDonkeyAnimHammerLanding_joint4[22];
extern u16 dFTDonkeyAnimHammerLanding_joint5[72];
extern u16 dFTDonkeyAnimHammerLanding_joint6[52];
extern u16 dFTDonkeyAnimHammerLanding_joint7[20];
extern u16 dFTDonkeyAnimHammerLanding_joint8[30];
extern u16 dFTDonkeyAnimHammerLanding_joint10[14];
extern u16 dFTDonkeyAnimHammerLanding_joint11[96];
extern u16 dFTDonkeyAnimHammerLanding_joint12[52];
extern u16 dFTDonkeyAnimHammerLanding_joint13[74];
extern u16 dFTDonkeyAnimHammerLanding_joint14[12];
extern u16 dFTDonkeyAnimHammerLanding_joint16[20];
extern u16 dFTDonkeyAnimHammerLanding_joint17[80];
extern u16 dFTDonkeyAnimHammerLanding_joint19[32];
extern u16 dFTDonkeyAnimHammerLanding_joint21[76];
extern u16 dFTDonkeyAnimHammerLanding_joint22[104];
extern u16 dFTDonkeyAnimHammerLanding_joint24[32];
extern u16 dFTDonkeyAnimHammerLanding_joint25[98];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTDonkeyAnimHammerLanding_joints[] = {
	(AObjEvent32 *)dFTDonkeyAnimHammerLanding_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTDonkeyAnimHammerLanding_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTDonkeyAnimHammerLanding_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTDonkeyAnimHammerLanding_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTDonkeyAnimHammerLanding_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTDonkeyAnimHammerLanding_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTDonkeyAnimHammerLanding_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTDonkeyAnimHammerLanding_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTDonkeyAnimHammerLanding_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTDonkeyAnimHammerLanding_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTDonkeyAnimHammerLanding_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTDonkeyAnimHammerLanding_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTDonkeyAnimHammerLanding_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTDonkeyAnimHammerLanding_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTDonkeyAnimHammerLanding_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTDonkeyAnimHammerLanding_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTDonkeyAnimHammerLanding_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTDonkeyAnimHammerLanding_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTDonkeyAnimHammerLanding_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimHammerLanding_joint1[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 2, 864, -538,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -1, 1428, -387,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 2, 864, -538,
	ftAnimLoop(0x6800, -30),
};

/* Joint 2 */
u16 dFTDonkeyAnimHammerLanding_joint2[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -133, 4, 10, 0, 13, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 241, 23, -34, -8, 65, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -77, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -96, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 31, -1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -133, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 13, 5,
	ftAnimBlock(0, 2),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 10,
	ftAnimLoop(0x6800, -94),
};

/* Joint 4 */
u16 dFTDonkeyAnimHammerLanding_joint4[22] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 414, 48,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 2, -8, -2, 212, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 654, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 654, -20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 9), 414,
	ftAnimLoop(0x6800, -42),
};

/* Joint 5 */
u16 dFTDonkeyAnimHammerLanding_joint5[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 347, 5, -12, -13, -1582, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 464, 88, -1, -80, -1118, 222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 548, 48, -163, -90, -901, 118,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 540, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 17, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -901, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -950, -57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1552, -48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 490, -52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 347, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 30, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 1, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 347, 0, -12, -13, -1582, -30,
	ftAnimLoop(0x6800, -140),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimHammerLanding_joint6[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -805, 85,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -719, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -383, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -710, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -720, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -710, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -652, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -631, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -624, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -747, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -805, -58,
	ftAnimLoop(0x6800, -102),
};

/* Joint 7 */
u16 dFTDonkeyAnimHammerLanding_joint7[20] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1125, -10, 99, -32, 518, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -1230, -229, 345,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1125, 99, 518,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTDonkeyAnimHammerLanding_joint8[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 130, -1, -67, 0, -32, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -350, 29, -67, 0, -39, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 339, 36, -67, 0, -41, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 130, -67, -32,
	ftAnimLoop(0x6800, -58),
};

/* Joint 10 */
u16 dFTDonkeyAnimHammerLanding_joint10[14] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -328, -1, 15, -7, 35, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -328, 15, 35,
	ftAnimLoop(0x6800, -26),
};

/* Joint 11 */
u16 dFTDonkeyAnimHammerLanding_joint11[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -339, -49, 62, 0, -1636, 311,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -341, 116,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -154, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1324, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1240, 207,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -521, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -155, 93,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -261, -21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -484, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -788, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -103, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 249, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -265, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -274, -36,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -939, -176,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1608, -92,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 246, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -316, -32, 177, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -339, -22, 62, -114, -1636, -27,
	ftAnimLoop(0x6800, -188),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimHammerLanding_joint12[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -987, 103,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -883, 269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -449, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -420, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -725, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -726, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -725, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -747, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -879, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -912, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -975, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -987, -12,
	ftAnimLoop(0x6800, -102),
};

/* Joint 13 */
u16 dFTDonkeyAnimHammerLanding_joint13[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1038, 74, -9, -112, 554, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1146, 27, -262, -155, 796, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1092, -119, -319, 77, 721, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 908, -90, -107, 175, 613, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 911, -18, 32, 84, 658, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 870, 14, 62, -37, 526, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 956, 31, -81, -28, 571, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1125, 9, -161, 8, 353, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1038, 12, -9, 0, 554, 96,
	ftAnimLoop(0x6800, -144),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTDonkeyAnimHammerLanding_joint14[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 2681, -1673, 615, 118, 122, 46,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTDonkeyAnimHammerLanding_joint16[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -404, -102,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -916, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -367, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -404, -54,
	ftAnimLoop(0x6800, -38),
};

/* Joint 17 */
u16 dFTDonkeyAnimHammerLanding_joint17[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -214, 0, -341, 16, -326, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -270, 57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -450, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -430, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -563, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -204, 131,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -207, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -285, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -118, 96, -533, -73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -435, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -57, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -133, -70, -357, -51,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -225, -7, -377, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -366, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -214, 11, -341, 36, -326, 40,
	ftAnimLoop(0x6800, -156),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimHammerLanding_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1221, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1073, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 912, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1133, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1174, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1204, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1221, 17,
	ftAnimLoop(0x6800, -62),
};

/* Joint 21 */
u16 dFTDonkeyAnimHammerLanding_joint21[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 17, -7, 99, 4, -610, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -269, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 61, 32, 271, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 92, -13, 342, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -49, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -20, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -82, -65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -40, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -64, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 49, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -275, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -582, -38,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 27, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 96, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 17, -31, 99, 3, -610, -28,
	ftAnimLoop(0x6800, -148),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimHammerLanding_joint22[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 103, -2, 480, -31, -768, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 394, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -384, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 243, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 399, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 477, -100, 381, -66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 228, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 199, -164, -380, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 145, -22, -353, -73,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 275, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 403, 140,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 118, 47, -466, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 240, 388, 605, 128, -567, 176,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 542, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 894, 256, -113, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 341, -283, -656, -225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 186, -119, -750, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 103, -83, 480, -62, -768, -18,
	ftAnimLoop(0x6800, -204),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimHammerLanding_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1120, -30,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 827, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 660, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1237, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1201, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1125, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1120, -5,
	ftAnimLoop(0x6800, -62),
};

/* Joint 25 */
u16 dFTDonkeyAnimHammerLanding_joint25[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -249, 49, -179, -8, -159, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 34, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -371, -81, -248, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -433, 83, -255, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -423, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -204, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 24, -37, -180, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -382, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -82, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -143, -191, -415, 141,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -782, -107, 120, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -470, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -267, 59,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -681, 154, 79, -66,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -348, 112, -84, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -227, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -189, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -249, 98, -179, 10, -159, -75,
	ftAnimLoop(0x6800, -192),
	ftAnimEnd(),
};
