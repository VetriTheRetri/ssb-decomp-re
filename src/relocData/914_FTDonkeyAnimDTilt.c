/* AnimJoint data for relocData file 914 (FTDonkeyAnimDTilt) */
/* 2400 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimDTilt_joint1[36];
extern u16 dFTDonkeyAnimDTilt_joint2[38];
extern u16 dFTDonkeyAnimDTilt_joint4[28];
extern u16 dFTDonkeyAnimDTilt_joint5[106];
extern u16 dFTDonkeyAnimDTilt_joint6[48];
extern u16 dFTDonkeyAnimDTilt_joint7[8];
extern u16 dFTDonkeyAnimDTilt_joint8[52];
extern u16 dFTDonkeyAnimDTilt_joint10[34];
extern u16 dFTDonkeyAnimDTilt_joint11[156];
extern u16 dFTDonkeyAnimDTilt_joint12[80];
extern u16 dFTDonkeyAnimDTilt_joint13[38];
extern u16 dFTDonkeyAnimDTilt_joint14[8];
extern u16 dFTDonkeyAnimDTilt_joint16[34];
extern u16 dFTDonkeyAnimDTilt_joint17[98];
extern u16 dFTDonkeyAnimDTilt_joint19[32];
extern u16 dFTDonkeyAnimDTilt_joint21[108];
extern u16 dFTDonkeyAnimDTilt_joint22[114];
extern u16 dFTDonkeyAnimDTilt_joint24[32];
extern u16 dFTDonkeyAnimDTilt_joint25[100];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTDonkeyAnimDTilt_joints[] = {
	(AObjEvent32 *)dFTDonkeyAnimDTilt_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTDonkeyAnimDTilt_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTDonkeyAnimDTilt_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDTilt_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTDonkeyAnimDTilt_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTDonkeyAnimDTilt_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTDonkeyAnimDTilt_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTDonkeyAnimDTilt_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDTilt_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTDonkeyAnimDTilt_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTDonkeyAnimDTilt_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTDonkeyAnimDTilt_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTDonkeyAnimDTilt_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDTilt_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTDonkeyAnimDTilt_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDTilt_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDTilt_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTDonkeyAnimDTilt_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDTilt_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimDTilt_joint1[36] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -24, 689, -524,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 12), -46, -5, 391, 230,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 7), 911, -26,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 649, -136,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -37, 17, 724, 31, -6, -732,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -24, 35, 689, 55, -524, -98,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTDonkeyAnimDTilt_joint2[38] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -139, -35, -26,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), -266,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 17), -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -313, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 40, 16,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -139, -2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -35, -5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -26, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTDonkeyAnimDTilt_joint4[28] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 907, 22, 40,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 18), 314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 905, 4, -182, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), 980, 0, 103, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 907, -1, 22, -2, 40, -8,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimDTilt_joint5[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 124, -123, 2883, -23, -1109, 235,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -130, 121, 2910, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -874, 336,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -435, 288,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -471, -60,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 66, 181, 2913, 55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 3114, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -136, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -492, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -299, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 3108, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 3006, 12,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -144, -2, -299, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -175, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -257, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -183, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -216, 74, 3015, -58, -252, -307,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -27, 170, 2890, -66, -799, -428,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 124, 151, 2883, -6, -1109, -310,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimDTilt_joint6[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1222, -60,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1202, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1119, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -920, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -950, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -797, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -773, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1057, -228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1308, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1314, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1222, 92,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimDTilt_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -822, -326, 86,
	ftAnimBlock(0, 22),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimDTilt_joint8[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -199, 6,
	ftAnimSetValBlock(FT_ANIM_ROTY), -78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 37, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 6, -7,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 6), -63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 0, 1,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 1), -63,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 4), -62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -111, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 4), -63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 53, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 6, 3,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 3), -65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -199, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 4), -78,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTDonkeyAnimDTilt_joint10[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 61, 70, 29,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 7), -152,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 18), -545,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 290, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -81, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 29, 4,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 61, 8, 70, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimDTilt_joint11[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3005, 799, 335, -30, 2030, 712,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3256, 273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3805, 472, 304, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3951, 17, -83, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3759, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 185, 226, 3289, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 3234, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 369, 158,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 532, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3726, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 4007, -177,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 449, -24, 3339, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 533, 65, 3239, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3678, -2, 613, 308, 2985, 125,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1616, 303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4002, 178, 3491, 270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4036, 7, 3527, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 3895, -112,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 3336, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1757, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1490, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1511, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1494, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3763, -90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3844, 273,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1310, -161, 3302, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4262, 351, 1171, -34, 3553, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4547, 176, 1241, 50, 3680, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4614, 66, 1272, 31, 3639, -41,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimDTilt_joint12[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1269, -198,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1468, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1143, 413,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -641, 428,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -286, 318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -4, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -316, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -680, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -928, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -789, 338,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -252, 392,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -142, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -319, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -298, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -458, -235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, -294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1218, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1269, -50,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimDTilt_joint13[38] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 893, 446, 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 2070, 74, -221, -47, 170, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1416, -39, 111, 23, 508, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 1518, -34, 113, 22, 574, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 893, -43, 446, -3, 268, -17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimDTilt_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 22),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTDonkeyAnimDTilt_joint16[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -404, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -404, -94, 0, -49, 0, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1448, -49, -543, 6, 622, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -999, 94, 78, 49, -264, -56,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -404, 0, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimDTilt_joint17[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 321, -22, -396, 81, -1166, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 147, -134, -284, -14, -468, 280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -9, -130, -280, 25, -202, 221,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 521, 123,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -478, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -217, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -308, -96,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -712, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 651, 129,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 676, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -638, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -662, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -488, 283, 440, -343,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -94, 284, -684, 58, -10, -340,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -343, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 80, 149, -240, -225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 320, 12, -1044, -202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 321, 0, -396, -52, -1166, -122,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimDTilt_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1327, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 993, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 914, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1032, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1107, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1346, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1327, -19,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimDTilt_joint21[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 95, -148, -218, -57, -251, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -360, -91,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -470, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -53, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -322, -201,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -308, -51,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -456, -89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -734, -29,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -395, 87,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 108, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -379, -82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -689, 15,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 130, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 62, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -668, 38, -763, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -388, 86,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -385, 144,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -30, -87,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -171, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -278, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -60, 187, -252, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 95, 156, -218, -47, -251, 1,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimDTilt_joint22[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -16, 156, 421, 169, -924, 84,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 612, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 139, 247, -840, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 477, 214, -525, 213,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 311, -117, -461, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 534, -75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 143, 12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 201, -102, -483, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -96, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -604, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -567, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -961, -16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 164, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -87, 39, 255, 178,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 54, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 521, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 424, -36, -921, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -901, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 447, 77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 631, -78,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 104, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -16, -121, 421, -209, -924, -23,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimDTilt_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1306, -42,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1226, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1303, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1331, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1255, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1267, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1306, 39,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTDonkeyAnimDTilt_joint25[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -190, -180, 170, -161, -350, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -106, 66, -306, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -513, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -362, 160,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 69, 42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -33, 70, -357, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 222, -36, -371, 91,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 110, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -62, -173,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 162, -118, -285, 71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -295, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -304, -77, -13, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -216, 33, 60, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -9, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -237, -64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -381, 77,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -312, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -190, 190, 170, 179, -350, -37,
	ftAnimEnd(),
};
