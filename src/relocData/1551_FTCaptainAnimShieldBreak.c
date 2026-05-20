/* AnimJoint data for relocData file 1551 (FTCaptainAnimShieldBreak) */
/* 3408 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimShieldBreak_joint1[20];
extern u16 dFTCaptainAnimShieldBreak_joint2[46];
extern u16 dFTCaptainAnimShieldBreak_joint4[44];
extern u16 dFTCaptainAnimShieldBreak_joint5[188];
extern u16 dFTCaptainAnimShieldBreak_joint6[64];
extern u16 dFTCaptainAnimShieldBreak_joint7[26];
extern u16 dFTCaptainAnimShieldBreak_joint8[18];
extern u16 dFTCaptainAnimShieldBreak_joint10[10];
extern u16 dFTCaptainAnimShieldBreak_joint11[176];
extern u16 dFTCaptainAnimShieldBreak_joint12[56];
extern u16 dFTCaptainAnimShieldBreak_joint13[16];
extern u16 dFTCaptainAnimShieldBreak_joint14[16];
extern u16 dFTCaptainAnimShieldBreak_joint16[42];
extern u16 dFTCaptainAnimShieldBreak_joint17[266];
extern u16 dFTCaptainAnimShieldBreak_joint19[120];
extern u16 dFTCaptainAnimShieldBreak_joint21[122];
extern u16 dFTCaptainAnimShieldBreak_joint22[182];
extern u16 dFTCaptainAnimShieldBreak_joint24[88];
extern u16 dFTCaptainAnimShieldBreak_joint25[154];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTCaptainAnimShieldBreak_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimShieldBreak_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimShieldBreak_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimShieldBreak_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTCaptainAnimShieldBreak_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTCaptainAnimShieldBreak_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimShieldBreak_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimShieldBreak_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTCaptainAnimShieldBreak_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTCaptainAnimShieldBreak_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTCaptainAnimShieldBreak_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimShieldBreak_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimShieldBreak_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTCaptainAnimShieldBreak_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTCaptainAnimShieldBreak_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTCaptainAnimShieldBreak_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTCaptainAnimShieldBreak_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTCaptainAnimShieldBreak_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTCaptainAnimShieldBreak_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTCaptainAnimShieldBreak_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimShieldBreak_joint1[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -214, 0, 0, 0, 154,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -55, 1210, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 60), -7238, -6, 3197, 17, 1280, 156,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimShieldBreak_joint2[46] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 240, -14,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 95, 49, 4, -76, 9,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 60), 0, -83, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -246, -9, 674, 44, -230, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 38), 490, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 56), -66, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 31), -691, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), 0, 47,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 0, -11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTCaptainAnimShieldBreak_joint4[44] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 242, -182, -12, 0, -31, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -134, 0, -268, 0, 0, 0, -2, -8, 28, 0, -25, 6,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 55), -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 35), 268, 6, 0, 2, -44, 0, -30, -4, 82, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), -415, 75, -1, 0, -76,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimShieldBreak_joint5[188] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1334, -23, -1487, 162, 1001, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1357, -469, -1325, 246, 987, 375,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2272, -639, -995, 32, 1752, 519,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2588, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1259, -130, 2026, 262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1256, 41, 2276, 206,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1189, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2463, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2602, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2793, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1205, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1001, 75,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2472, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2635, 160,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2895, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3130, -386, -926, 48, 2861, 374,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1373, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3667, -467, 3384, 446,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -4495, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3754, 255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 3984, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4548, -50, 4003, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 4620, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), -4683, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1390, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1368, -2,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4612, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 4509, 30,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1368, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -1026, 3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4542, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 5121, 40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4712, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -5302, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -5344, -28, 5155, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5360, -15, -1025, 1, 5167, 12,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimShieldBreak_joint6[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1109, -118,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1320, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1026, 359,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -308, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -365, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -790, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -733, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -463, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -547, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -920, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -861, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -443, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -488, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -1306, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1309, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimShieldBreak_joint7[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 191, -97, -323, 424, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 60), 424, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -358, -9, 65, 4, -130, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 58), -402, 178, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTCaptainAnimShieldBreak_joint8[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -153, 113, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -187, -2, 268, 5, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 55), -274, 446, -71,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTCaptainAnimShieldBreak_joint10[10] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 60), 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimShieldBreak_joint11[176] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1742, 101, 1358, 1, 2237, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 2025, 159, 1300, -137, 2248, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2161, 248, 1085, -220, 2225, 158,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 728, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2522, -102, 2565, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1956, -54, 2001, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2414, 510, 747, -7, 2359, 398,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 257, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2976, 400, 2798, 280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 3375, 34, 2948, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3392, 5, 2950, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 3030, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 28), 3024, 28,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 202, -50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 191, 41,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3007, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 2929, 17,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 230, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 200, 18,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2945, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 3265, 56,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3057, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 4026, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 221, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 346, 26,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3318, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 3215, -5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 367, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 370, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4022, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 3979, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3212, -2, 369, 0, 3976, -3,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimShieldBreak_joint12[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -631, -107,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -842, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -635, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -672, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -728, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -733, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -779, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -928, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -933, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -1099, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1051, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -645, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -635, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimShieldBreak_joint13[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -5, 167, 63, 424, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 60), 592, -35, -292, 424, 0, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimShieldBreak_joint14[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 39,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 60), 1538, -1003, 119, 85, 49, 39,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimShieldBreak_joint16[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 256, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 639, -22, 0, -2, 0, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 78, -43, -19, 0, -58, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -146, 5, -3, 2, -174, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 247, 9, 66, 0, -376, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 223, 0, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimShieldBreak_joint17[266] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1553, -2, -1690, 47, 1051, -64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1740, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1642, 192, 986, 304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1305, 172, 1660, 508,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1347, 73, 2134, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2025, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2130, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2054, 378, -1151, 162, 1997, -459,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1373, 490, -1022, -133, 1214, -656,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1073, 26, -1418, -192, 683, -334,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1662, -127, -1329, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 546, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 821, 127,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 911, 290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1576, 75, -1304, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1204, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1511, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1765, -237, 1382, 420,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2010, 107, 1808, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1316, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1290, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1771, 313, -1081, 137, 1534, -310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1263, -161, -989, 21, 1116, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1706, -408, -972, -101, 1574, 433,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1442, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2080, -207, 1983, 262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2121, -3, 2099, 57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2128, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -2055, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1504, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1546, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2148, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1995, -157,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2066, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1951, 98,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1546, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1320, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1850, 79, -1332, -21, 1823, -164,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -2138, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1197, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1585, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1650, 62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1267, -101,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2133, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1486, 15,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1178, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1446, -18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1170, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 971, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1478, 7, -1456, -9, 968, -3,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimShieldBreak_joint19[120] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 237, 685,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 922, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 665, -299,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 125, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 462, 379,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1035, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 681, -444,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 146, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 336, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 546, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 346, -273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 457, 339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 683, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 663, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 347, -329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 285, 239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 482, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 766, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 724, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 994, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 999, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 997, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 996, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimShieldBreak_joint21[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 5, -1471, -2, 7, 513, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 116, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 44), -73, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1465, -567,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1128, 498,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -468, 451,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -224, 168,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 4, 79,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 112, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), 301, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 102, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -65, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -5, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -24, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 21, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 111, 31,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 308, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), 270, -17,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 145, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 299, -59,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -71, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 89, 3,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 234, -67, 253, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 73, 10, 208, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 90, 17, 91, 1, 206, -2,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimShieldBreak_joint22[182] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -13, 70, 289, 131, -825, 362,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 56, 239, 420, -15, -462, 562,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 465, 66, 258, -199, 299, 444,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 190, -230, 21, -151, 426, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4, -101, -44, -57, 394, -127,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -26, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 65, -18, -715, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 40, -11, -728, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 150, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -597, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -46, -28, -585, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -222, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -392, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 103, -33, -239, 101,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -70, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -83, -69,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -216, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 173, 1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -65, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 245, 22,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -157, -66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -239, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 179, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 385, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 265, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -87, -31,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 374, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 95, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -222, 19, -115, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 13), 144, 9, -84, 7,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 89, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 75, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 149, 5, 74, -1, -80, 4,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimShieldBreak_joint24[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 875, 117,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 993, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 487, -438,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 140, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 463, 311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 869, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 586, -317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 234, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 297, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 508, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 514, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 414, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 420, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 628, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 611, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 620, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 652, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 778, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 731, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 471, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 462, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimShieldBreak_joint25[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, 364, -57, 6, -154, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 294, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 39, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 361, 399,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 796, 308,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 977, 523,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1843, 417,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1813, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1797, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1912, 658, 307, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 347, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3113, 639,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3192, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3184, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 3078, 28,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 37, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 41), 85, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3106, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 3074, -19,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 363, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 28), 430, 17,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3057, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 3570, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3633, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 3417, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3398, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 3041, -7,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 448, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 516, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 91, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 103, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3037, -3, 104, 0, 517, 1,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
