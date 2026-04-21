/* AnimJoint data for relocData file 987 (FTSamusAnimDamageAir) */
/* 2288 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimDamageAir_joint1[76];
extern u16 dFTSamusAnimDamageAir_joint2[46];
extern u16 dFTSamusAnimDamageAir_joint4[90];
extern u16 dFTSamusAnimDamageAir_joint5[94];
extern u16 dFTSamusAnimDamageAir_joint6[40];
extern u16 dFTSamusAnimDamageAir_joint7[24];
extern u16 dFTSamusAnimDamageAir_joint8[10];
extern u16 dFTSamusAnimDamageAir_joint9[38];
extern u16 dFTSamusAnimDamageAir_joint11[10];
extern u16 dFTSamusAnimDamageAir_joint12[118];
extern u16 dFTSamusAnimDamageAir_joint14[56];
extern u16 dFTSamusAnimDamageAir_joint15[106];
extern u16 dFTSamusAnimDamageAir_joint17[40];
extern u16 dFTSamusAnimDamageAir_joint19[116];
extern u16 dFTSamusAnimDamageAir_joint20[86];
extern u16 dFTSamusAnimDamageAir_joint22[46];
extern u16 dFTSamusAnimDamageAir_joint23[102];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimDamageAir_joints[] = {
	(u32)dFTSamusAnimDamageAir_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimDamageAir_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimDamageAir_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimDamageAir_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimDamageAir_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimDamageAir_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimDamageAir_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimDamageAir_joint9, /* [8] joint 9 */
	(u32)dFTSamusAnimDamageAir_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimDamageAir_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimDamageAir_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimDamageAir_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimDamageAir_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimDamageAir_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimDamageAir_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimDamageAir_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTSamusAnimDamageAir_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimDamageAir_joint1[76] = {
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1618, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 65, 0, -243, 0, -44,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1618, 59,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), -447, -187,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 229, 15, -369, -24, -63, -4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1506, -44, -46, -1044,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1607, 57, -201, -88,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 1607, -18, -201, 171,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 229, -369, -63,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, 17, 3,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1568, 11, 162, 201,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1618, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimDamageAir_joint2[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 413, 0, 215, 0, 354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 573, 37, 321, 21, 245, 15,
	ftAnimSetValT(FT_ANIM_ROTZ, 14), 245,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), 574, 322,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -13, -13,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimDamageAir_joint4[90] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 57, 143, -247, 131, 0, 41, -27, 338, 0, 120, -4, -445,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -250, 202, 67, 299, -210, 99, 84, 539, 30, -343, -111, 298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 461, 47, 351, 20, 198, 29, 107, 12, -85, -66, 70, 103,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 351, -26, 198, -9, 107, -74, -85, 26, 70, -8,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 13), 461,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 253, -57, -64, -43, 51, -24, -41, -107, -33, 85, 52, -70,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimDamageAir_joint5[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1460, -8, -1390, -87, 2116, -751,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1609, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1236, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 913, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1174, 248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1474, 74, 1411, 120,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1451, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1416, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1420, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1223, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1325, -19,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1456, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1398, 27,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1384, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1327, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1363, -46, -1384, 5, 1524, 230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1453, -20, -1390, -1, 1994, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1460, -6, -1390, 0, 2116, 122,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimDamageAir_joint6[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1171, 84,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1086, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -763, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -817, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -843, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -1038, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1138, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1206, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1171, 35,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimDamageAir_joint7[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -268, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -633, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), -633, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), -268,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimDamageAir_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimDamageAir_joint9[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 480, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -10, 0, -26, 0, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -30, -2, -78, -5, 48, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -30, 1, -78, 3, 48, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimDamageAir_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimDamageAir_joint12[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -730, -181, 114, -201, -445, -438,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -912, 81, -87, -8, -883, -297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -568, 237, 97, 226, -1039, -160,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 459, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -498, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1204, 406,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -226, 493,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 455, -3, -217, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 457, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -491, 5, -211, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), -504, -4, -222, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -509, -93, 459, -76, -226, -236,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 153, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -690, -274, -694, -532,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1058, -35, -1291, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -760, 244, 240, 48, -982, 258,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 166, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -568, 104, -773, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -836, -5, -604, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -730, 105, 114, -52, -445, 159,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimDamageAir_joint14[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -879, 600,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -278, 290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -297, -394,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1067, -505,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1307, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1307, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1307, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1307, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1295, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1015, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -933, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -903, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -879, 24,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimDamageAir_joint15[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1618, -172, -1582, 101, 775, 371,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1446, 23, -1480, -16, 1147, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1665, -16, -1614, -90, 628, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1412, -136, -1661, 79, 723, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1393, -12, -1454, 107, 613, -56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 596, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1394, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1434, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1430, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1601, -52,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 594, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 584, -7,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1413, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1643, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 603, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 776, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1640, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1586, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1618, -24, -1582, 3, 775, -1,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimDamageAir_joint17[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1063, -738,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 299, 520,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1040, 369,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1037, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 1155, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1184, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1132, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1063, -69,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimDamageAir_joint19[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1596, 74, 1619, 64, -1278, -310,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1774, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1522, -36, -1589, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1668, -16, -1189, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1554, -66, 1885, -25, -1466, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1800, -135, 1722, -78, -1507, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1848, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1453, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1728, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1729, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1865, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1737, -10,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1465, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1557, -14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1718, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1741, -66,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1556, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1420, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1723, 29, 1663, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1677, 63, 1604, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1596, 81, 1619, 15, -1278, 141,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimDamageAir_joint20[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -8, -34, 5, -36, -414, -422,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -43, -100, -31, 50, -836, -284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -209, -112, 107, 115, -983, -113,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 192, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -264, 0, -1069, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -264, 0, -1072, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1065, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -48, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 192, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 199, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 219, -24, -1003, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -5, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1025, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -904, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -485, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -8, 39, 5, 10, -414, 71,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimDamageAir_joint22[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 786, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 794, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 464, -397,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -229,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 358, 299,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 598, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 801, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 786, -14,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTSamusAnimDamageAir_joint23[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -7, -21, 86, 32, -18, 150,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -15, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -69, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 132, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 463, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -17, -1, 469, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 461, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -70, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 41, 49,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 423, -131,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 43, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -11, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -60, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -55, -69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -59, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -15, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -113, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 89, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 88, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -7, 105, 86, -2, -18, 40,
	ftAnimEnd(),
};
