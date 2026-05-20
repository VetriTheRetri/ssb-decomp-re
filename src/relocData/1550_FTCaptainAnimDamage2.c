/* AnimJoint data for relocData file 1550 (FTCaptainAnimDamage2) */
/* 2912 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimDamage2_joint1[128];
extern u16 dFTCaptainAnimDamage2_joint2[64];
extern u16 dFTCaptainAnimDamage2_joint4[122];
extern u16 dFTCaptainAnimDamage2_joint5[170];
extern u16 dFTCaptainAnimDamage2_joint6[56];
extern u16 dFTCaptainAnimDamage2_joint7[26];
extern u16 dFTCaptainAnimDamage2_joint8[10];
extern u16 dFTCaptainAnimDamage2_joint10[10];
extern u16 dFTCaptainAnimDamage2_joint11[138];
extern u16 dFTCaptainAnimDamage2_joint12[48];
extern u16 dFTCaptainAnimDamage2_joint13[26];
extern u16 dFTCaptainAnimDamage2_joint14[16];
extern u16 dFTCaptainAnimDamage2_joint16[10];
extern u16 dFTCaptainAnimDamage2_joint17[118];
extern u16 dFTCaptainAnimDamage2_joint19[64];
extern u16 dFTCaptainAnimDamage2_joint21[102];
extern u16 dFTCaptainAnimDamage2_joint22[122];
extern u16 dFTCaptainAnimDamage2_joint24[72];
extern u16 dFTCaptainAnimDamage2_joint25[104];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTCaptainAnimDamage2_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimDamage2_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimDamage2_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimDamage2_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamage2_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTCaptainAnimDamage2_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimDamage2_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimDamage2_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTCaptainAnimDamage2_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamage2_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTCaptainAnimDamage2_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimDamage2_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimDamage2_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTCaptainAnimDamage2_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamage2_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTCaptainAnimDamage2_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamage2_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamage2_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTCaptainAnimDamage2_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamage2_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimDamage2_joint1[128] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 1600, 0,
	ftAnimSetValBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1813, -1229, 0, 1,
	ftAnimSetValT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1038, 456, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 1293, -1206, 0, -331,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 0, 1210, 106, -165, -234,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1826, 686, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2411, 326, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 3784, 264, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 1359, 90, -146, 312,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 6, 1266, -28, 29, 110,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 4792, 220, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), 17, 1280, 156,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 5548, 138, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 11), 5629,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 4), -6,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 4), -19,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTCaptainAnimDamage2_joint2[64] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 107, 0, 4, -76, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 143, -59,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 29), 0, -84, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 108, 2, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 434, -4, 286, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -597, -58, -38, -27, -58, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -70, 5, -108, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -846, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 0, 0,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 7), -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 32,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTCaptainAnimDamage2_joint4[122] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 191, 0, 0, 0, -31, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 209, -114, 92, -121, -301, -57, 75, -22, -10, 272, 26, -296,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -38, -95, -243, -52, -114, 23, -5, -97, 36, 12, -26, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -170, -38, -119, 52, -206, -21, 26, 73, -4, -100, -43, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -231, 31, 19, 70, -219, 65, 40, -46, -26, 12, -44, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -15, 21, 235, 41, 120, 45, -3, -62, 3, 33, 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -61, 36, 330, -10, 128, 4, -18, 5, 5, -58, -39, 64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 61, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 110, -39, 176, -3, 5, 9, -84, -2, 96, -20,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -221, 75, -1, 0, -76,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -415, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTCaptainAnimDamage2_joint5[170] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1368, -206, -1614, 87, 1084, 182,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1470, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1575, -65, 1266, -296,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1500, 63, 492, -420,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1427, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 425, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1457, -13, 408, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1468, 113,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 194, -37,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1412, 80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -819, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1328, 119,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1301, -158,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 177, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 584, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -889, -159,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1474, -234,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1514, -159,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1473, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1607, -66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1561, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 628, 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 810, 65,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1545, 16, -1359, 138,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1575, -212,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -914, 25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 906, 260,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1800, 287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1954, -400,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2376, -227, -969, -64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1038, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2409, 18, 1905, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -2176, 54, 1958, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2143, 33, -1025, 13, 1950, -7,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimDamage2_joint6[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -797, -223,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1020, 396,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 327,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -366, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -492, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -268, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -359, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -569, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -592, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1278, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1311, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1316, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1309, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimDamage2_joint7[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -781, -89, -388, 424, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 29), 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 101, 13, 0, 9, 0, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), -402, 178, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTCaptainAnimDamage2_joint8[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), -274, 446, -71,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTCaptainAnimDamage2_joint10[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimDamage2_joint11[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -129, 124, 144, 140, 592, -871,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4, -51, 284, -65, -278, -915,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -232, -93, 12, -117, -1237, -442,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -170, 33, 131, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1163, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1101, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -611, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -125, 71, 208, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 307, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 55, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -21, -94,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -339, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 408, 88,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 609, 14,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -330, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -48, 127,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 625, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 489, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -484, 154,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 633, 280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 103, 224,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 653, -106,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 300, -86,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 382, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 430, -231, 936, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 44, -97, 809, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4, -48, 369, -13, 759, -49,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimDamage2_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1024, 206,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -818, 512,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -428, -310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -621, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -715, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -730, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -995, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1093, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -710, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -635, 74,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimDamage2_joint13[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 275, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 75, 0, 250, -18, 34, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 262, 21, 47, -11, 133, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 592, -35, -292,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimDamage2_joint14[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 29), 1538, -1003, 119, 85, 49, 38,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimDamage2_joint16[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 223, 0, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimDamage2_joint17[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1799, -188, -1678, 98, -2081, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1611, -161, -1579, 41, -2241, 323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1476, 138, -1595, 95, -1433, 334,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1888, 135, -1389, 115, -1573, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1748, -162, -1365, -7, -1431, 167,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -938, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1479, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1519, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1514, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1747, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -921, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -933, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1477, -6, -1180, -266,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -1467, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1643, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1687, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2052, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1731, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1743, -7,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2086, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -2242, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1738, -4, -1456, 10, -2248, -6,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimDamage2_joint19[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 445, 755,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1201, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -366,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 467, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 460, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 4, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 313, 263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 502, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 342, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 553, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 603, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 990, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 996, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimDamage2_joint21[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -126, 91, -42, -13, 80, 78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 80, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -55, 67, 158, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 92, 66, 348, 101,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 377, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -14, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -17, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 157, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 43, -96, 381, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -199, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 151, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -56, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 33, 16,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -175, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 38, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 22, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 76, 22,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 49, 16, 164, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 87, 6, 202, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 90, 13, 91, 3, 206, 3,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimDamage2_joint22[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1768, -39, 1498, 63, 1531, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1728, 60, 1561, -36, 1364, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1888, 58, 1425, 19, 1619, 301,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1549, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1601, 75, 1967, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1576, -38, 2046, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1963, 57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1672, -33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1534, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1509, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2062, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1771, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1556, -167,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1271, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1414, -52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1590, 23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1636, -38, 1135, -120,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1421, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1570, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1608, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 1956, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1984, -99, 1431, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1758, -226, 1534, 102, 1528, -42,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimDamage2_joint24[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 541, -537,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 220, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 140, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 273, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 220, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 4, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 228, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 368, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 286, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 746, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 769, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 480, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 462, -18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimDamage2_joint25[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 161, -200, 365, -385, -279, 350,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 402, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -39, -94, -20, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -26, -13, -18, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 23, 100,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), 86, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 421, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), 453, 22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 133, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -72, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -73, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 181, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 234, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 4, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -36, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -391, -44,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 476, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 512, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -437, 106, 99, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -179, 258, 104, 4, 517, 5,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
