/* AnimJoint data for relocData file 1546 (FTCaptainAnimDamageAir) */
/* 2512 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimDamageAir_joint1[90];
extern u16 dFTCaptainAnimDamageAir_joint2[46];
extern u16 dFTCaptainAnimDamageAir_joint4[90];
extern u16 dFTCaptainAnimDamageAir_joint5[92];
extern u16 dFTCaptainAnimDamageAir_joint6[40];
extern u16 dFTCaptainAnimDamageAir_joint7[30];
extern u16 dFTCaptainAnimDamageAir_joint8[40];
extern u16 dFTCaptainAnimDamageAir_joint10[8];
extern u16 dFTCaptainAnimDamageAir_joint11[134];
extern u16 dFTCaptainAnimDamageAir_joint12[46];
extern u16 dFTCaptainAnimDamageAir_joint13[42];
extern u16 dFTCaptainAnimDamageAir_joint14[10];
extern u16 dFTCaptainAnimDamageAir_joint16[34];
extern u16 dFTCaptainAnimDamageAir_joint17[102];
extern u16 dFTCaptainAnimDamageAir_joint19[40];
extern u16 dFTCaptainAnimDamageAir_joint21[106];
extern u16 dFTCaptainAnimDamageAir_joint22[98];
extern u16 dFTCaptainAnimDamageAir_joint24[46];
extern u16 dFTCaptainAnimDamageAir_joint25[112];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTCaptainAnimDamageAir_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimDamageAir_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimDamageAir_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimDamageAir_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamageAir_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTCaptainAnimDamageAir_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimDamageAir_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimDamageAir_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTCaptainAnimDamageAir_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamageAir_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTCaptainAnimDamageAir_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimDamageAir_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimDamageAir_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTCaptainAnimDamageAir_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamageAir_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTCaptainAnimDamageAir_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamageAir_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamageAir_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTCaptainAnimDamageAir_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamageAir_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimDamageAir_joint1[90] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 1225, -1,
	ftAnimSetValBlock(FT_ANIM_TRAX), -55,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 65, 0, -243, 0, -44, 1210, -508, 59, -182,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 1), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 223,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1098, -44, -46, -1044,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 229, 15, -369, -24, -63, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 1), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 14), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1199, 57, -201, -661,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 229, -369, -63,
	ftAnimSetValRateT(FT_ANIM_TRAY, 13), 1199, -18,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), -212,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 12), -201, 187,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, 17, 3,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, -55, 1159, 26, 162, 200,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -55, 1225, -1,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimDamageAir_joint2[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 240, 95, 49,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, -76, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 413, 0, 215, 0, 354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 573, 37, 321, 21, 245, 15,
	ftAnimSetValT(FT_ANIM_ROTZ, 14), 245,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), 574, 322,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -13, -13,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 240, 95,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 49,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTCaptainAnimDamageAir_joint4[90] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 242, -182, -12, 0, -31, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 57, 143, -247, 131, 0, 41, -27, 338, 0, 247, -4, -637,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -250, 202, 67, 299, -210, 99, 84, 539, 30, -343, -111, 298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 461, 47, 351, 20, 198, 29, 107, 12, -85, -66, 70, 103,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 351, -26, 198, -9, 107, -74, -85, 26, 70, -8,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 13), 461,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 253, -27, -64, -66, 51, -26, -41, -107, -33, 53, 52, -22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 242, -182, -12, 0, -31, 47,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTCaptainAnimDamageAir_joint5[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1334, -124, -1487, -17, 1001, 361,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1627, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1458, -23, 1362, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1380, 86, 912, -96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1244, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1170, 245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1489, 76, 1403, 118,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1463, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1409, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1409, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1395, -38,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1468, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1489, 2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1254, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1337, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1336, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1021, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1334, 3, -1487, 1, 1001, -19,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimDamageAir_joint6[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1109, 25,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1084, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -755, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -802, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -834, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -898, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -983, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1107, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1109, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimDamageAir_joint7[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 191, -97, -323,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -268, -275, 0, 32, 0, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -633, 19, 0, -4, 0, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 191, -97, -323,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTCaptainAnimDamageAir_joint8[40] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -153, 113, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 40, 0, -63, 0, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 99, 19, -78, -13, 48, 34,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 144, -119, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 99, -20, -78, 16, 48, -32,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -153, 113, -38,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTCaptainAnimDamageAir_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimDamageAir_joint11[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 133, 560, 249, 1476, 628, 100,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1029, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1726, 637, 728, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1525, -229, 565, -165,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1188, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1162, 21, 397, 398,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1072, -39, 1362, 486,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1083, 8, 1191, 3, 1371, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 1077, -4, 1189, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1377, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1366, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1072, -77, 1188, 76, 1362, -221,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1483, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 923, -259, 922, -523,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 553, -76, 315, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 769, 184, 1424, -28, 563, 212,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1370, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 922, 136, 740, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1041, 299, 897, 400,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1522, 423, 1340, 56, 1541, 669,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1888, 109, 1483, 8, 2236, 348,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1742, -146, 1358, -124, 2237, 1,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimDamageAir_joint12[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -631, 395,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -292, -414,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1064, -506,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1305, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -1305,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1305, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1283, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -876, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1252, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1015, 310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -631, 384,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimDamageAir_joint13[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, 167, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 211, 56, 56, -18, 565, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 219, 0, 95, 0, 495, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 219, 0, 95, 0, 495, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 779, -28, -1, 9, 683, -53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -5, 167, 63,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimDamageAir_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 39,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimDamageAir_joint16[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 255, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 252, -38, 41, -71, -76, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -814, -66, -287, -23, -126, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -814, 53, -287, 14, -126, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 255, 0, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimDamageAir_joint17[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 55, -197, 81, -233, -557, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -142, 9, -151, -41, -549, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 73, -28, -1, 84, -1000, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -199, -133, 17, -88, -969, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -193, 0, -178, -101, -1035, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1054, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -199, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -196, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -201, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -57, 66,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1054, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -695, 117,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -165, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -58, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 7, 51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -15, 41,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -116, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 55, 171, 81, 97, -557, 138,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimDamageAir_joint19[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 237, 227,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 464, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1107, 328,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1103, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1109, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1053, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 539, -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 237, -302,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimDamageAir_joint21[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 5, 84, -2, -72, 513, -547,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -177, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 90, -37, -33, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -69, -19, 418, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 51, -61, -275, 37, 88, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -193, -134, -102, 84, 79, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -237, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 89, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -106, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -107, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -252, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -72, 39,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -97, -28, 70, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -66, 102, 270, 65,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -31, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 91, 3, 44, 31, 358, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, -85, -2, -47, 513, 155,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimDamageAir_joint22[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -13, -98, 289, -401, -825, -60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1088, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -281, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -112, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 80, 153,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 190, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1089, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1091, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -280, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -285, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 189, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 192, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 214, -37, -1040, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 106, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1181, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -247, 49, -1164, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -27, 31, -863, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 120, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 255, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -13, 13, 289, 33, -825, 38,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimDamageAir_joint24[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 875, -19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 558, -427,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 4, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 484, 345,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 694, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 874, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 875, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTCaptainAnimDamageAir_joint25[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, 92, -57, 217, -154, 311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 90, 16, 159, 40, 157, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 29, -28, 23, -83, -24, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -70, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -3, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 476, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 474, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 470, -32,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -70, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -10, 7,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 101, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 416, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 134, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -23, -135,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -167, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -13, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -54, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 81, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 45, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2, -47, -57, -2, -154, 13,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
