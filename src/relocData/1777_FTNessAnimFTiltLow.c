/* AnimJoint data for relocData file 1777 (FTNessAnimFTiltLow) */
/* 3600 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimFTiltLow_joint1[30];
extern u16 dFTNessAnimFTiltLow_joint2[80];
extern u16 dFTNessAnimFTiltLow_joint3[26];
extern u16 dFTNessAnimFTiltLow_joint5[26];
extern u16 dFTNessAnimFTiltLow_joint6[174];
extern u16 dFTNessAnimFTiltLow_joint7[76];
extern u16 dFTNessAnimFTiltLow_joint8[10];
extern u16 dFTNessAnimFTiltLow_joint9[20];
extern u16 dFTNessAnimFTiltLow_joint11[30];
extern u16 dFTNessAnimFTiltLow_joint12[160];
extern u16 dFTNessAnimFTiltLow_joint13[70];
extern u16 dFTNessAnimFTiltLow_joint14[10];
extern u16 dFTNessAnimFTiltLow_joint16[10];
extern u16 dFTNessAnimFTiltLow_joint17[194];
extern u16 dFTNessAnimFTiltLow_joint19[58];
extern u16 dFTNessAnimFTiltLow_joint20[156];
extern u16 dFTNessAnimFTiltLow_joint22[78];
extern u16 dFTNessAnimFTiltLow_joint23[158];
extern u16 dFTNessAnimFTiltLow_joint25[114];
extern u16 dFTNessAnimFTiltLow_joint26[212];
extern u16 dFTNessAnimFTiltLow_joint27[54];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTNessAnimFTiltLow_joints[] = {
	(AObjEvent32 *)dFTNessAnimFTiltLow_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimFTiltLow_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimFTiltLow_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTNessAnimFTiltLow_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTNessAnimFTiltLow_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimFTiltLow_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNessAnimFTiltLow_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNessAnimFTiltLow_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTNessAnimFTiltLow_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTNessAnimFTiltLow_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimFTiltLow_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimFTiltLow_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTNessAnimFTiltLow_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTNessAnimFTiltLow_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTNessAnimFTiltLow_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTNessAnimFTiltLow_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTNessAnimFTiltLow_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTNessAnimFTiltLow_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTNessAnimFTiltLow_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTNessAnimFTiltLow_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTNessAnimFTiltLow_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTNessAnimFTiltLow_joint1[30] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 12, 24,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 1020, 545,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 9), 1032, -282,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 11), 72, -398,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimFTiltLow_joint2[80] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, -73, -16, 0, 537, 4,
	ftAnimSetValBlock(FT_ANIM_TRAZ), -28,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 6), -2, -2, 636, 15,
	ftAnimSetValT(FT_ANIM_TRAZ, 35), -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -302, -74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -2088, -750,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAY, 10), 636, 3,
	ftAnimSetValRateT(FT_ANIM_TRAX, 11), -276, -272,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -2578, -44,
	ftAnimBlock(0, 9),
	ftAnimSetValRateT(FT_ANIM_TRAY, 14), 552, -44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAX, 18), -16, 0,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -3067, -121,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -40,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 13), -3216,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 537, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTNessAnimFTiltLow_joint3[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 28, 0, -360, 0, 8, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -190, -314, 356,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), 28, 0, -360, 0, 8, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimFTiltLow_joint5[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 60, 168, -536,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 28), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 28), 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimFTiltLow_joint6[174] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1198, 128, -1347, 108, -1192, -181,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1213, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1326, 302, -1373, -410,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1803, 320, -2013, -449,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2049, 174, -2382, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1325, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1340, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2317, 228, -1350, -16, -2640, -204,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1368, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2506, 96, -2790, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2510, 4, -2794, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 2504, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -2798, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1353, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), -1264, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1235, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1030, 47,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2498, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2424, -52,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2788, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2658, 109,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2355, -103, -983, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -960, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2217, -209, -2512, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1936, -458, -2216, 481,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1301, -386, -1548, 425,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1163, -71, -1081, -106, -1366, 119,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1297, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1158, 5, -1308, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1236, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1175, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1193, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1198, 4, -1347, -49, -1192, 43,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimFTiltLow_joint7[76] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -473, -147,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -621, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -183, 310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 91,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -192, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -335, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -435, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, -38,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimFTiltLow_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 35),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTNessAnimFTiltLow_joint9[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, 0, 364, 0, -32, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 35), -10, 0, 364, 0, -32, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimFTiltLow_joint11[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 7, 0, -26, 0, -19,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 47, 0, -156, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), -100,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 28), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 28), 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimFTiltLow_joint12[160] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -415, 38, 569, 43, -119, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 700, -13, -197, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -309, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -319, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -518, -119,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 672, -55, -330, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -632, -51, 589, -35, -451, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -621, 14, 601, 13, -438, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -235, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 582, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -603, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -466, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -447, 20, -204, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -412, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -134, -12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 566, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 533, -13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -416, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -470, -16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 518, -15, -148, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 502, -19, -161, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -489, 22, 480, 13, -182, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -362, 40, -31, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 529, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 563, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 572, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -344, 4, -13, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -379, -31, -66, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -415, -36, 569, -2, -119, -53,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimFTiltLow_joint13[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, 14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -354, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -226, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -209, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -379, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -560, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 1,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTNessAnimFTiltLow_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 90, 54, 126, 143, 0, 0,
	ftAnimBlock(0, 35),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimFTiltLow_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 35),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTNessAnimFTiltLow_joint17[194] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -365, -15, -279, 24, -297, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -381, -43, -255, 91, -233, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -452, -66, -96, 134, -74, 109,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 99, 105, 11, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -514, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -590, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -542, -173, 224, 138, 105, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -937, -64, 377, -95, -304, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -671, 164, 32, -184, -73, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -609, 57, 7, -19, -39, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -361, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, -10, -9, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -85, -10, 121, 4,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -343, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -413, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -94, 6, 122, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -14, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 198, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 214, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 188, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 11, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -75, -33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 144, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -54, -27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -107, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -166, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -413, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -415, 14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -167, -39, -79, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -383, 22, -244, -50, -188, -81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -365, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -267, -16, -242, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -279, -1, -292, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -365, 0, -279, 0, -297, -5,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimFTiltLow_joint19[58] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 396, -37,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 358, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 74, -179,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 236, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 324, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 390, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTNessAnimFTiltLow_joint20[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 5, 11, 12, -21, 26, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 169, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 16, 60, -9, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 127, 92, -37, 78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 266, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 201, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 271, 141, 280, 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 485, 239, 104, -98, 705, 245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 750, -1, 68, -29, 770, 46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 852, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 482, -172, 45, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -46, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 404, -80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 218, -28,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -42, 6, 861, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 2, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 601, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 199, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 88, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 51, -37, 2, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 11, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 29, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 65, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 177, -21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 548, -56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 67, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 125, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 7, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 4, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, 0, 12, 0, 26, -41,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimFTiltLow_joint22[78] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -66, 30, 0, -1, 0, -13,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 18, 0, -37, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -92, 0, -377, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -15, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 115, 38, -218, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 150, 0, -98, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 137, 17, 128, 0, 66, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 217, 0, 184, 0, 35, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -42, -3, 85, -18, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -66, -4, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTNessAnimFTiltLow_joint23[158] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3089, -114, 136, 36, 3006, -174,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 228, 47, 2565, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2975, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2807, -181,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2433, -159,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 292, 63, 2470, -97,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 435, 90, 2261, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2292, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2180, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2061, -88, 536, 71, 2123, -102,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 581, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2003, -20, 2056, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2021, 15, 2074, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 2083, 24, 2134, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 587, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 598, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2114, 81, 605, -44, 2164, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2246, 95, 509, -71, 2306, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2304, 53, 463, -39, 2363, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 2724, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 240, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 2712, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2764, 51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 3078, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2762, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2996, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 229, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 152, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3089, 11, 136, -15, 3006, 9,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimFTiltLow_joint25[114] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), 407, 222,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 762, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 779, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 675, -127,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 490, 197, 174,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4830, 0, 4543, -2, 4454, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 525, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 331, -213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 97, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -45,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 16), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 208, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 305, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 577, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 591, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 436, -29,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 11), 4096, 4096, 4096,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 409, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 391, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, 15,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimFTiltLow_joint26[212] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1532, 11, 1583, -50, -1810, 48,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1445, -97, -1655, 159,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1520, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1546, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1553, 133, 1338, -73, -1443, 255,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -899, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1279, 204, 1299, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1144, -5, 1403, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1289, -131, 1529, 86, -780, 78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -743, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), -1408, -78, 1576, 23, 6079, 899, 12974, 5481, 8977, 2066,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1574, -1,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 6344, -566, 17800, -2536, 9263, -1394,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1445, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1507, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1573, -1, -746, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -793, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1526, -7,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096, 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1527, -10,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 21), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1547, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1567, -8, -816, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1158, -136,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1469, 14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1520, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1570, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1300, -133,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1766, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1455, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1530, -17,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1573, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1581, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1545, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1547, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1779, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1801, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1532, 15, 1583, 1, -1810, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTNessAnimFTiltLow_joint27[54] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 56, -69, 0, 7, 0, -93,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 56, 0, -819, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -123, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -157, 0, 41, 0, -391, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -95, 30, 40, -7, -281, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 56, 19, 0, 53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
