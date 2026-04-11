/* AnimJoint data for relocData file 865 (FTDonkeyAnimThrowB) */
/* 2656 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimThrowB_joint1[68];
extern u16 dFTDonkeyAnimThrowB_joint2[54];
extern u16 dFTDonkeyAnimThrowB_joint4[54];
extern u16 dFTDonkeyAnimThrowB_joint5[92];
extern u16 dFTDonkeyAnimThrowB_joint6[40];
extern u16 dFTDonkeyAnimThrowB_joint7[22];
extern u16 dFTDonkeyAnimThrowB_joint8[10];
extern u16 dFTDonkeyAnimThrowB_joint10[46];
extern u16 dFTDonkeyAnimThrowB_joint11[116];
extern u16 dFTDonkeyAnimThrowB_joint12[56];
extern u16 dFTDonkeyAnimThrowB_joint13[22];
extern u16 dFTDonkeyAnimThrowB_joint14[10];
extern u16 dFTDonkeyAnimThrowB_joint16[34];
extern u16 dFTDonkeyAnimThrowB_joint17[138];
extern u16 dFTDonkeyAnimThrowB_joint19[60];
extern u16 dFTDonkeyAnimThrowB_joint21[118];
extern u16 dFTDonkeyAnimThrowB_joint22[90];
extern u16 dFTDonkeyAnimThrowB_joint24[40];
extern u16 dFTDonkeyAnimThrowB_joint25[206];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTDonkeyAnimThrowB_joints[] = {
	(u32)dFTDonkeyAnimThrowB_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimThrowB_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimThrowB_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimThrowB_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimThrowB_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimThrowB_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimThrowB_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimThrowB_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimThrowB_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimThrowB_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimThrowB_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimThrowB_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimThrowB_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimThrowB_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimThrowB_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimThrowB_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimThrowB_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimThrowB_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTDonkeyAnimThrowB_joint25, /* [24] joint 25 */
	0xFFFF0265, /* [25] END */
};

/* Joint 1 */
u16 dFTDonkeyAnimThrowB_joint1[68] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -24, -236, 973, 3, -317, 518,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 201, -201, 266, 892, 93, 297, 802,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1608, 89,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 175, 451, 1044, 566, 283, -867,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 24, -191, 1175, 53, -136, -473,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 14), 1608,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 7, -14, 1091, -119, -130, 254,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 7, 14, 1041, -52, 149, 473,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 24, 1032, 402,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTDonkeyAnimThrowB_joint2[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -265, -3, -41, 80, -16, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -286, -21, 439, 42, -25, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -394, 5, 212, -120, -21, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -265, 24, -41, -54, -16, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -225, 4, -167, -14, 9, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -225, -4, -167, 14, 9, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -265, -41, -16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTDonkeyAnimThrowB_joint4[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 725, -85, 23, 34, 41, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 281, -112, 229, 17, 57, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 47, 117, 128, -51, 178, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 750, 118, 24, -15, 41, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 880, 14, 16, 0, 1, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 880, -14, 16, 0, 1, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 750, 24, 41,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimThrowB_joint5[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -33, -24, -143, 4, -636, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -697, -194,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 8, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -176, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -309, -81,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -133, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -996, -286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 97, 43, -1270, -102,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -60, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1202, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1217, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -122, 14, -1100, 121,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -835, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -83, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -55, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -66, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -848, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -462, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, 3, -84, -1, -473, -11,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimThrowB_joint6[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -695, -127,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -748, 317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -349, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -413, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -514, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -599, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -655, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -483, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 75,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimThrowB_joint7[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1008, 11, 87, 6, 64, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -891, 45, 29, -3, 103, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimThrowB_joint8[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, -67, -44,
	_FT_ANIM_CMD(11, 0, 1), 8,
	ftAnimBlock(0, 22),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTDonkeyAnimThrowB_joint10[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -331, 73, 73, -42, 29, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -53, -8, -182, 0, 153, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -398, -36, 70, 22, 29, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -382, 1, 20, -5, 67, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -382, -1, 20, 5, 67, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -398, 70, 29,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimThrowB_joint11[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1223, -22, -2041, 27, 838, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1868, 61, 716, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1167, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1208, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1536, 227, -1765, 46, 750, -159,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1818, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1663, 10, 398, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1557, -189, 408, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1284, -140, 288, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1299, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1816, -17, 336, 78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 739, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1835, 42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1340, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1438, 67,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 705, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 868, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1500, 38, 1022, 124,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1502, -11, 1138, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1797, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1492, -10, -1780, 17, 1129, -8,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimThrowB_joint12[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -692, -31,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -729, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -804, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1080, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -986, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -737, 326,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -333, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -386, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -481, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -554, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -622, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -486, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 70,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimThrowB_joint13[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1287, -22, 72, -15, 28, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 1123, -53, -50, -3, 65, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 103, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimThrowB_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 797, -33, 720, 118, 122, 46,
	ftAnimBlock(0, 22),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTDonkeyAnimThrowB_joint16[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -536, 14, 0, -29, 0, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -205, -49, -418, -5, -406, -16,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1133, -12, -66, 26, -201, 25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -404, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTDonkeyAnimThrowB_joint17[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1567, 19, -1221, 134, 1324, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1085, -254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1778, 366, 1169, -403,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2319, 278, 541, -437,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2335, 34, -1449, -224, 294, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2388, -147, -1533, 90, 508, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2039, -489, -1268, 208, 486, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1410, -426, -1115, 27, 966, 436,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1102, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1213, -45, 1358, 202,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1173, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1371, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1366, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1080, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 893, -48,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1180, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1157, 56,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 854, 28, 1372, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1177, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1509, 46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1111, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1200, -30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1249, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1521, 11, -1214, -14, 1303, 54,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimThrowB_joint19[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1062, -55,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 993, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1174, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1333, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1177, -258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 815, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 802, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 658, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 677, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 580, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 511, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 941, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 997, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1004, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimThrowB_joint21[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -155, -83, -99, 115, -422, 46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 376, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -269, 122, -241, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -70, -122, 72, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -514, 29, -89, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -12, 455, 415, -65, 203, 121,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 25, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 396, 107, 246, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 202, -72, 237, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 301, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 310, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 27, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 245, 53,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 342, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 490, 34,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 297, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 114, -73,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 519, -29, 295, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -24, -77, -329, -89,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 48, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, -38, 24, -24, -377, -48,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimThrowB_joint22[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 239, -45, 27, 66, -471, -68,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -382, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 192, 46, 318, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 267, 17, 401, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 162, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 226, 15, -182, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 299, 0, 39, 116,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 142, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 138, -32, 50, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 158, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 205, 18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 138, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 98, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 127, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -299, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -299, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 99, 1, 216, 11, -297, 1,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimThrowB_joint24[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 501, 178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1092, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 961, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 691, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 719, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1016, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1007, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 997, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 993, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTDonkeyAnimThrowB_joint25[206] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -271, 6, 289, 33, 95, -97,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -198, 129, 338, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -356, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -524, -85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -496, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -41, 61, 495, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -74, 20, 58, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1, 95, 228, 144,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 271, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 115, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 65, -43, -512, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -573, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -62, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 228, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 92, 18,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -530, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -392, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -54, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -11, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 11, 105, 12, -383, 9,
	ftAnimEnd(),
	0x28E6, 0x0000, 0x0046, 0x0648, 0x0094, 0x0018, 0x065E, 0x001C, 0x068A, 0x05C3, 0xF471, 0x3808, 0x0000, 0x28C1, 0x0004, 0x0569, 0x09B1, 0xFE3E, 0xF1C7, 0x202F, 0x0003, 0x0161, 0x01FF, 0x092E, 0x00B8, 0x0000, 0xFEF8, 0x0413, 0x061C, 0x202F, 0x0001, 0x07FC, 0x039E, 0x0929, 0xFF69, 0xFBDD, 0xFFFF, 0x0326, 0xE5B0, 0x2881, 0x0002, 0xFB19, 0x032C, 0x2805, 0x0004, 0x063B, 0xFFD8, 0x206B, 0x0001, 0x089E, 0x0125, 0xFFFE, 0x0211, 0xFD80, 0xE263, 0x062B, 0xFC2D, 0x206B, 0x0001, 0x0A47, 0xFFAC, 0x0000, 0x0008, 0xFBC0, 0x0A88, 0x0474, 0x08EC, 0x28E1, 0x0001, 0x0021, 0x111C, 0x0866, 0xFE36, 0xFF6F, 0x2D19, 0x2803, 0x0002, 0x07A0, 0xFF5C, 0x3809, 0x0001, 0x000F, 0x4009, 0x000F, 0x0000, 0x20E1, 0x0001, 0x0006, 0xFFFC, 0x0402, 0xF997, 0x065F, 0x0215, 0x38E7, 0x000E, 0x0000, 0x0648, 0x0018, 0xFC61, 0x0356, 0x0000, 0x0000,
};
