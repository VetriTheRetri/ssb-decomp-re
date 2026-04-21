/* AnimJoint data for relocData file 1642 (FTCaptainAnimAttackAirD) */
/* 3760 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimAttackAirD_joint1[24];
extern u16 dFTCaptainAnimAttackAirD_joint2[106];
extern u16 dFTCaptainAnimAttackAirD_joint4[114];
extern u16 dFTCaptainAnimAttackAirD_joint5[224];
extern u16 dFTCaptainAnimAttackAirD_joint6[80];
extern u16 dFTCaptainAnimAttackAirD_joint7[8];
extern u16 dFTCaptainAnimAttackAirD_joint10[72];
extern u16 dFTCaptainAnimAttackAirD_joint11[238];
extern u16 dFTCaptainAnimAttackAirD_joint12[88];
extern u16 dFTCaptainAnimAttackAirD_joint13[8];
extern u16 dFTCaptainAnimAttackAirD_joint14[10];
extern u16 dFTCaptainAnimAttackAirD_joint16[8];
extern u16 dFTCaptainAnimAttackAirD_joint17[198];
extern u16 dFTCaptainAnimAttackAirD_joint19[88];
extern u16 dFTCaptainAnimAttackAirD_joint21[154];
extern u16 dFTCaptainAnimAttackAirD_joint22[192];
extern u16 dFTCaptainAnimAttackAirD_joint24[86];
extern u16 dFTCaptainAnimAttackAirD_joint25[132];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTCaptainAnimAttackAirD_joints[] = {
	(u32)dFTCaptainAnimAttackAirD_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimAttackAirD_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimAttackAirD_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimAttackAirD_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimAttackAirD_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimAttackAirD_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimAttackAirD_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimAttackAirD_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimAttackAirD_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimAttackAirD_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimAttackAirD_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimAttackAirD_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimAttackAirD_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimAttackAirD_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimAttackAirD_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimAttackAirD_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimAttackAirD_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTCaptainAnimAttackAirD_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimAttackAirD_joint1[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -55, 1225, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 25), 37, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 506, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1659, 478,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), 3216,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimAttackAirD_joint2[106] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 240, 95, 49, 4, -76, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 11, -45, 67, -5, -45, -18, 4, 0, -76, 0, -217, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 11, -39, 67, 39, -45, 0, 4, 158, -76, 0, -217, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -224, 0, 307, 2, -48, 0, 122, 3, -76, 0, 49, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), -224, 1, 307, -2, -48, 0, 122, 3, -76, -10, 49, 2,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 240, 95, 49,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 88, -49, -104, 210, -69, -196,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 85, 20, 81, 961, -97, -373,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 98, 71, 375, 398, -256, -463,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 130, -94, 330, -452, -387, 265,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 4, -76, 9,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTCaptainAnimAttackAirD_joint4[114] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 242, -182, -12, 0, -31, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 508, 27, -19, -30, -110, -126, 99, 82,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -182, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 508, -26, -182, 46, -12, 9, -19, 7, -110, 229, 99, -231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -296, -5, 95, 4, 45, 3, -13, 18, 61, 233, -74, -175,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -296, 2, 95, 4, 45, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -7, 35, -96,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), -13, 13, 61, -1, -74, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -35, 155, 18, -19, -59, -16,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 21, 26, 32, -226, -121, 24,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 6, -13, -108, -39, -56, 104,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 635, 23, -18, -16, -51, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 242, -182, -12, 0, -31, 47,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTCaptainAnimAttackAirD_joint5[224] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1334, -161, -1487, 153, 1001, 750,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1495, -82, -1334, 79, 1752, 378,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1499, 0, -1328, 4, 1759, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1752, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1495, 0, -1326, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1498, -102, -1335, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1113, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1701, -225, 1862, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1948, -97, 2002, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1895, 8, -1121, -2, 1962, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2011, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1026, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1931, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1945, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1994, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2117, 7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1974, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2173, -35,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1006, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -856, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2113, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2191, 99, 2055, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1975, -251, 1752, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2695, -304, -713, 140, 2389, 227,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -403, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2583, 63, 2206, -130,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2231, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2568, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2658, -213, -261, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2994, -216, 64, 250, 2581, 246,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -3027, 121, 2702, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 238, 81,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 50, -35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2848, 158, 2526, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2710, 60, 2348, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2726, -23, 53, 1, 2361, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -2936, -9, 2599, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -90, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -113, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2942, -5, -120, -7, 2610, 10,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimAttackAirD_joint6[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1109, 333,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -775, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -759, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -770, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -775, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -907, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -911, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1003, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -962, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1014, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -845, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -645, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -694, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -640, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -794, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -815, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1104, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1109, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimAttackAirD_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 191, -97, -323,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTCaptainAnimAttackAirD_joint10[72] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -153, 113, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 174, 65,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 113, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 174, -40, 113, 0, -38, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -71, -176, 118, 1, -34, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -354, 118, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -71, 17, 118, 0, -34, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -71, 23, 118, 0, -34, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 330, -16, 117, 0, -35, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -290, -37, 113, 0, -37, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -153, 113, -38,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimAttackAirD_joint11[238] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 133, -306, 249, 147, 628, -705,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -172, -166, 397, 72, -76, -372,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -199, -17, 395, 1, -116, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -199, 17, 403, -1, -104, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -172, 253, 397, 80, -76, 249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 307, 521, 563, 37, 395, 576,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 869, 284, 471, -72, 1077, 352,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 470, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 877, 2, 1100, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 875, -2, 1109, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 920, -69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 916, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 472, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 998, 157,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 836, -108,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 411, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 917, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 833, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 748, 50, 292, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 934, 51, 466, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 851, -46, 377, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 841, 5, 1172, 90, 360, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1267, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 862, 290, 424, 308,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1421, 384, 977, 392,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1631, 92, 1536, 187, 1209, 94,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1408, -50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1466, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1166, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1102, -42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1511, 290,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1402, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1524, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1385, -80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1292, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1704, 145, 1866, 319,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2277, 76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1751, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1348, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1360, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2304, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 2253, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1742, -8, 1358, -1, 2237, -15,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimAttackAirD_joint12[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -631, -37,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -663, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -669, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -896, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -833, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -972, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -905, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -823, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -830, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -873, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -799, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -647, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -750, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1047, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1160, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1065, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1121, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1313, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1239, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -679, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -631, 48,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimAttackAirD_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, 167, 63,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimAttackAirD_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 39,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimAttackAirD_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 255, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTCaptainAnimAttackAirD_joint17[198] = {
	ftAnimSetValAfter(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 55, -38, 81, 8, -557, -429,
	ftAnimSetValBlock(FT_ANIM_SCAX), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 12, 0,
	ftAnimSetValT(FT_ANIM_SCAX, 6), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 55, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -987, -251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1061, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1117, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 17, 35, -987, 388,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 111, 15, 163, 130,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), -20, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 4915,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 114, 6, 55, 8, -79, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 121, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2, -30, 143, 111,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -7, 0,
	ftAnimSetValT(FT_ANIM_SCAX, 31), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 143, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 147, -4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -7, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -5, 9,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 143, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 127, -68, 12, 79, 100, -387,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -189, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 152, 21, -630, -629,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 55, -69, -1157, -311,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 39, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -205, 3, -1254, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -168, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1216, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1231, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1130, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -178, -6, 29, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 102, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 42, 20,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1011, 125,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -625, 94,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 90, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 55, 12, 81, -8, -557, 67,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTCaptainAnimAttackAirD_joint19[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 237, 856,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1093, 461,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1159, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1112, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1093, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 683, -544,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 490, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 482,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 969, 570,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1141, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1106, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1111, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 914, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 748, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 355, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 237, -117,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimAttackAirD_joint21[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 5, 95, -2, -6, 513, -710,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 107, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -9, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -197, -369,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -225, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -197, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 109, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 100, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -26, -49, -82, -63, -257, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -134, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2, -16, -205, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -59, 15, -231, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 32, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 39, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 37, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -135, -1, -300, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -365, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -71, 9,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 32, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -14, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 90, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -40, -35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -379, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -54, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -63, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -4, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -52, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -89, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -110, -7, 121, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -14, 35, 490, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, 20, -2, 2, 513, 22,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimAttackAirD_joint22[192] = {
	ftAnimSetValAfter(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -13, -32, 289, -186, -825, -122,
	ftAnimSetValBlock(FT_ANIM_SCAX), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1058, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -74, 11,
	ftAnimSetValT(FT_ANIM_SCAX, 6), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 102, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 78, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 55, -79,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1060, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -45, 79, -947, 352,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 83, 63, -356, 552,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 81, 7, -55, -37, 158, 131,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 4915,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 235, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -19, -1, -93, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -58, -17, 149, 120,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -55, 0,
	ftAnimSetValT(FT_ANIM_SCAX, 31), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 147, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 152, -1,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -56, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -56, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 238, -7, -53, 72, 148, -147,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 226, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 221, -107, -141, -418,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 22, -212, -689, -534,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -203, -135, 112, -103, -1210, -299,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -92, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -248, -42, -1287, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -74, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1199, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -53, 43, -1174, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 280, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -977, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -905, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -31, 30, -848, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -13, 17, 289, 8, -825, 22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTCaptainAnimAttackAirD_joint24[86] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 875, 201,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1076, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1098, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1084, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1076, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 704, -536,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -92,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 519,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1132, 370,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1277, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1219, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1197, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 996, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 939, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 893, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 875, -18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimAttackAirD_joint25[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, 6, -57, 1, -154, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -181, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), -34, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 37, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 47, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -185, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -34, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 44, 24, -117, -76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -172, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 96, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 86, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 13, -20,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -169, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -187, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -28, 8, -214, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -531, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -5, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -41, 25,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -527, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -164, 18,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -12, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -55, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -17, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -5, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2, 3, -57, -2, -154, 9,
	ftAnimEnd(),
	0x0000, 0x0000,
};
