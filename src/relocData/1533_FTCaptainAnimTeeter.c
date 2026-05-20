/* AnimJoint data for relocData file 1533 (FTCaptainAnimTeeter) */
/* 4080 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimTeeter_joint1[82];
extern u16 dFTCaptainAnimTeeter_joint2[52];
extern u16 dFTCaptainAnimTeeter_joint4[80];
extern u16 dFTCaptainAnimTeeter_joint5[262];
extern u16 dFTCaptainAnimTeeter_joint6[120];
extern u16 dFTCaptainAnimTeeter_joint7[60];
extern u16 dFTCaptainAnimTeeter_joint8[20];
extern u16 dFTCaptainAnimTeeter_joint10[56];
extern u16 dFTCaptainAnimTeeter_joint11[330];
extern u16 dFTCaptainAnimTeeter_joint12[112];
extern u16 dFTCaptainAnimTeeter_joint13[28];
extern u16 dFTCaptainAnimTeeter_joint14[12];
extern u16 dFTCaptainAnimTeeter_joint16[16];
extern u16 dFTCaptainAnimTeeter_joint17[190];
extern u16 dFTCaptainAnimTeeter_joint19[96];
extern u16 dFTCaptainAnimTeeter_joint21[196];
extern u16 dFTCaptainAnimTeeter_joint22[126];
extern u16 dFTCaptainAnimTeeter_joint24[62];
extern u16 dFTCaptainAnimTeeter_joint25[90];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTCaptainAnimTeeter_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimTeeter_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimTeeter_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimTeeter_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTCaptainAnimTeeter_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTCaptainAnimTeeter_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimTeeter_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimTeeter_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTCaptainAnimTeeter_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTCaptainAnimTeeter_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTCaptainAnimTeeter_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimTeeter_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimTeeter_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTCaptainAnimTeeter_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTCaptainAnimTeeter_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTCaptainAnimTeeter_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTCaptainAnimTeeter_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTCaptainAnimTeeter_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTCaptainAnimTeeter_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTCaptainAnimTeeter_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimTeeter_joint1[82] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 1679,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAZ), 127, 0, 24, 405,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 179,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 10), 588, 598,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 29), 77,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 1622, -174,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 6), 1461, -222,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 8), 1038, 333,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 1344, -232,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 1229, -201,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 10), 1080, -183,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 7), 1067, -134,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 1037, -67,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 1025, -57,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 13), 408, -321,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), 127, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 11), 1035, 53,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 17), 24,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 1125, 251,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 13), 1679,
	ftAnimLoop(0x6800, -162),
};

/* Joint 2 */
u16 dFTCaptainAnimTeeter_joint2[52] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 457, 2, -235, -33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 4, -76, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 977, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), -357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 174,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 11), -360,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), 810, -22,
	ftAnimBlock(0, 10),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 15), 177,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -136, -33,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 457, -28,
	ftAnimBlock(0, 9),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), -235,
	ftAnimLoop(0x6800, -100),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTCaptainAnimTeeter_joint4[80] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -89,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), -176, 0, 29, 0, -52, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX), -71, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -146, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 58), 29, 0, -52, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), -356,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 10), 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -74, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -128, -14,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 11), -356,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -191, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -191, 10,
	ftAnimBlock(0, 6),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 15), 179,
	ftAnimBlock(0, 7),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), -77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -176, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 9), -178,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 9), -89,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -176, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -176, 0,
	ftAnimLoop(0x6800, -156),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimTeeter_joint5[262] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2945, -107, -88, -52, 62, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2527, -467,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -141, -158, 84, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -405, -252, 138, 288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1902, -640, -645, -78, 661, 587,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1247, -193, -562, -6, 1313, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1515, 526, -657, 0, 1009, -553,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2299, 485, -562, 139, 207, -479,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2486, 122, -378, 123, 49, -95,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2551, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -314, 55, 17, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -264, -56, 142, 52,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2529, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2187, -258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -347, -96, 196, 67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -602, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 477, 280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1864, -289, 836, 329,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1233, -102, 1502, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -568, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -396, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1188, -37, -377, 6, 1470, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1143, -14, -409, -30, 1445, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1129, 46, -444, -81, 1441, -74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -667, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1237, 219, 1297, -249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1568, 396, 941, -414,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2031, 353, -659, 39, 469, -359,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -441, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2276, 178, 222, -175,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 2492, 35, 36, -23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -394, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -322, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2522, 25, 19, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 311, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 2498, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -323, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -141, 35,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 330, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 23, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2503, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 2901, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2916, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2935, 14, -104, 26, 49, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2945, 10, -88, 16, 62, 13,
	ftAnimLoop(0x6800, -520),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimTeeter_joint6[120] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -871, -130,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1001, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1028, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -675, 410,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -207, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -366, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -602, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -492, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -575, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -917, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -991, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -721, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -541, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -281, 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -232, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -444, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -530, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -528, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -810, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -836, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -885, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -870, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -869, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -871, -1,
	ftAnimLoop(0x6800, -238),
};

/* Joint 7 */
u16 dFTCaptainAnimTeeter_joint7[60] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3572, -218, -494,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 3524, 2, -213, 12, -489, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 3608, 4, -44, 0, 109, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 3590, 0, -220, -16, -495, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 3615, 0, -223, 8, -498, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 3608, 2, -44, 0, 109, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 3677, -1, -230, -9, -504, -33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 3572, -218, -494,
	ftAnimLoop(0x6800, -116),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTCaptainAnimTeeter_joint8[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -153,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 360, -108,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 25), -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 30), -153, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -153,
	ftAnimLoop(0x6800, -38),
};

/* Joint 10 */
u16 dFTCaptainAnimTeeter_joint10[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -179, 0, 120, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 148, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -199, -4, 6, 2, 139, 6, 26, 8,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 21), 6, 139, 26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -199, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 6, -1, 139, -4, 26, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -199, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -179, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 120, 0,
	ftAnimLoop(0x6800, -110),
};

/* Joint 11 */
u16 dFTCaptainAnimTeeter_joint11[330] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3124, 53, -2856, 60, 318, -249,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3031, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -2632, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 69, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 21, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -73, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3036, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2615, 344,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2568, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2458, -18, 40, 243,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 778, 295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2175, 372, -2604, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1870, 150, -2654, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1873, -53, -2835, -159, 1003, 163,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -2956, 131, 1056, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1977, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1996, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1942, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1827, -140, -2742, 214, 903, -378,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2679, -262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2527, 65, 298, -540,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2611, -81, -177, -248,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -2828, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2748, -50, -197, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2781, -80, -111, 71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -95, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2909, -165,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3259, -89,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2841, -4, -180, -62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -2778, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3291, -18, -220, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3232, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -279, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -105, 46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3123, 100,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2854, 56,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2761, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -2527, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -68, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -45, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2786, 417, 7, 410,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2019, 654, -2441, 11, 774, 654,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1477, 293, -2503, -52, 1316, 289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1432, 23, -2547, -36, 1354, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -2608, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1431, -9, 1348, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1756, -134, 971, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1903, -149, 812, -158,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 378, -76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2547, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2635, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -2852, -38,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 303, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2870, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -2865, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2569, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -2979, -61,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 308, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 319, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3037, -52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3114, -20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2858, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3124, -10, -2856, 2, 318, 0,
	ftAnimLoop(0x6800, -656),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimTeeter_joint12[112] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -368, 368,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 181,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -566, -323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -652, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -611, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -643, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -716, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -650, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -576, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -552, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -316, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -166, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -114, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -36, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -610, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -693, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -551, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -515, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -572, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -625, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -510, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -493, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -369, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -368, 0,
	ftAnimLoop(0x6800, -220),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimTeeter_joint13[28] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 57, 96, -418,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -281, -11, 83, 6, -11, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), -232, 6, 267, 0, 59, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 33), 57, 96, -418,
	ftAnimLoop(0x6800, -52),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimTeeter_joint14[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 58),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimTeeter_joint16[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -245,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, 0, -368,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 33), 0, 0, -245,
	ftAnimLoop(0x6800, -30),
};

/* Joint 17 */
u16 dFTCaptainAnimTeeter_joint17[190] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1419, 1, -1609, -7, -2183, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1641, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1597, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -2284, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2313, -60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2477, -61,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1622, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1687, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1643, 45, -2527, -45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -2436, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 1666, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1613, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1326, 25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1734, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1802, 24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2434, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2573, -25,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1776, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1615, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1356, 33, -2600, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1703, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -2943, 35,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1624, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1594, -12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1694, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1547, -13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2902, 45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2565, 61,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1532, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1433, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2499, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2419, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1618, -9, -2298, 72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2245, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1609, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1431, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1415, -6, -2213, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1419, 3, -1608, 1, -2185, 27,
	ftAnimLoop(0x6800, -376),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimTeeter_joint19[96] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 129, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 221, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 324, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 317, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 121, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 96, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 327, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 393, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 908, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 926, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 812, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 747, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 387, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 300, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 190, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 4,
	ftAnimLoop(0x6800, -190),
};

/* Joint 21 */
u16 dFTCaptainAnimTeeter_joint21[196] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1598, 1, -1556, 39, 1689, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1449, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1642, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1553, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1537, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1632, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1479, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1661, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1654, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1627, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1643, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1730, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1619, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1599, 34,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1646, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -1622, -20,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1564, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1590, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1746, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1590, -24,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1577, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1651, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1567, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 1426, -26,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1643, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1640, 13,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1630, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1539, -10,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1400, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1517, 48,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1551, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1571, -18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1630, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1605, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1570, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1668, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1691, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1704, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1576, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1586, -13, -1568, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1598, -12, -1556, 12, 1687, -17,
	ftAnimLoop(0x6800, -388),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimTeeter_joint22[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 73, -32, 205, 20, -206, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 263, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -33, -102, -235, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -164, -59, -396, -106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -485, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 69, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 240, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 232, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -487, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -279, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 69, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 2, 0,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 233, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 37), 206, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 53, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -275, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -230, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -216, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -205, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 57, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 73, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -204, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -206, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 72, 0, 206, 0, -208, -2,
	ftAnimLoop(0x6800, -248),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimTeeter_joint24[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 256, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 355, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 498, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 479, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 308, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 299, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 117, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 85, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 4, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 4,
	ftAnimLoop(0x6800, -122),
};

/* Joint 25 */
u16 dFTCaptainAnimTeeter_joint25[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 13, 29, 219, -7, 269, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 49, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 49), 336, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 122, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 222, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -21, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -19, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 294, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 48, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 33), 48, 2,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 299, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 25), 91, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 88, -3, 51, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), 12, 0, 218, 3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 330, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 266, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 14, 2, 219, 0, 269, 3,
	ftAnimLoop(0x6800, -172),
	ftAnimEnd(),
	0x0000, 0x0000,
};
