/* AnimJoint data for relocData file 759 (FTFoxAnimFTilt) */
/* 3472 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimFTilt_joint1[66];
extern u16 dFTFoxAnimFTilt_joint2[42];
extern u16 dFTFoxAnimFTilt_joint4[46];
extern u16 dFTFoxAnimFTilt_joint5[176];
extern u16 dFTFoxAnimFTilt_joint6[80];
extern u16 dFTFoxAnimFTilt_joint7[10];
extern u16 dFTFoxAnimFTilt_joint8[68];
extern u16 dFTFoxAnimFTilt_joint10[10];
extern u16 dFTFoxAnimFTilt_joint11[164];
extern u16 dFTFoxAnimFTilt_joint12[78];
extern u16 dFTFoxAnimFTilt_joint13[38];
extern u16 dFTFoxAnimFTilt_joint15[10];
extern u16 dFTFoxAnimFTilt_joint16[164];
extern u16 dFTFoxAnimFTilt_joint18[66];
extern u16 dFTFoxAnimFTilt_joint20[128];
extern u16 dFTFoxAnimFTilt_joint21[188];
extern u16 dFTFoxAnimFTilt_joint23[78];
extern u16 dFTFoxAnimFTilt_joint24[156];
extern u16 dFTFoxAnimFTilt_joint25[60];
extern u16 dFTFoxAnimFTilt_joint26[56];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimFTilt_joints[] = {
	(u32)dFTFoxAnimFTilt_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimFTilt_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimFTilt_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimFTilt_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimFTilt_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimFTilt_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimFTilt_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimFTilt_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimFTilt_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimFTilt_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimFTilt_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimFTilt_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimFTilt_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimFTilt_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimFTilt_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimFTilt_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimFTilt_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimFTilt_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimFTilt_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimFTilt_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimFTilt_joint1[66] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 48, 912, -20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, -97, 600, -625, -360, -678,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 600, 719, -360, 959,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 3), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 8), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 960, 1920, 120, 3840,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1080, 137, 600, 548,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 1080, -39, 600, -239,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 26, 1020, -288, 240, -331,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 9), 48, -20,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 720, -95,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 912,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimFTilt_joint2[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -141, -338, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 178, -446, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 178, -446, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -804, 402, -804,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -804, 402, -804,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -135, 44, 17, -49, -258, 53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -141, -338, -3,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimFTilt_joint4[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 156, 81,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 178, -55, -268, 94, 178, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 89, -35, 536, -89, 0, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -11, -714, -156, -89, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 14, -714, 41, -89, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 309, 156, 81,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimFTilt_joint5[176] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -109, 295, -165, -373, 258, -708,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 185, -182, -539, -10, -449, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -474, -297, -187, 318, 390, 467,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -410, 2, 97, 40, 484, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -469, -225, -105, -255, 350, 387,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -862, -300, -414, -670, 1259, 498,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1069, -98, -1446, -470, 1347, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1042, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1309, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1355, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1345, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1446, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1025, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1033, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1069, -152, 1347, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1337, -461, -1190, 69, 1719, 505,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1992, -467, -1306, -51, 2358, 305,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2400, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1293, 13, 2331, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1280, -136, 2374, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1934, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1566, -201,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1520, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2389, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1844, 105,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1496, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1453, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1916, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1879, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1753, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1718, 35, -1442, 11, 1867, -12,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimFTilt_joint6[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, 141,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -417, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -322, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -731, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -508, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -690, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -477, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -581, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -577, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -477, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -791, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -808, 251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -289, 404,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -282, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -353, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -371, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -555, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimFTilt_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 27),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimFTilt_joint8[68] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -113, 136, -72,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -178, 5, 446, -56, -357, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -89, 111, -89, -78, -178, 111,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 268, 312, 134, 134,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 536, 55, 178, 33, -178, -78,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 491, 268, -223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 536, -32, 178, 0, -178, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 194, -43, 271, -2, 71, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -113, 136, -72,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimFTilt_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 27),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimFTilt_joint11[164] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1741, 428, 1336, -163, 1945, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2169, 425, 1173, -594, 1832, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2591, 100, 146, -557, 2342, 237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2371, -94, 58, -84, 2306, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2402, -263, -23, 758, 2362, 69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2366, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1843, -94, 1575, 767,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2214, 186, 1511, -130,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 2195, -3, 1230, -28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2329, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2436, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2208, 12, 1257, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 2147, -88, 1471, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2012, -290, 1317, -135, 2255, -381,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1565, -374, 1201, 16, 1674, -501,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1263, -241, 1351, 106, 1252, -304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 883, -137, 1420, -138, 912, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 808, 11, 1137, -207, 856, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1159, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1395, 199, 1492, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1595, 154, 1724, 194,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1737, 4, 1951, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1249, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1312, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1741, 3, 1336, 24, 1945, -6,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimFTilt_joint12[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -594, -210,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -805, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -591, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -566, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -339, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -616, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -672, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -682, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -684, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -610, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -248, 305,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -437, -314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -700, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -746, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -635, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 40,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimFTilt_joint13[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), 268, 134,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 536,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -134, 268, 402,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -134, 268, 402,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTFoxAnimFTilt_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 27),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimFTilt_joint16[164] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4095,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1202, 242, -1385, 302, -1635, -791,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4095,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1445, -295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1082, 157, -2426, -487,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1071, 4, -2609, -97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1082, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2620, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2426, 767,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1009, 162, -1161, 97, -1085, 479,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1770, 359, -887, 143, -1467, -165,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1728, -40, -873, 11, -1417, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1725, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1142, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1373, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1467, 13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1770, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1395, -32,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 15), 4095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1387, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1131, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1412, 13, -1212, -102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1931, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1252, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1259, -92,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1261, -34,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1897, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1670, 54,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1305, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1217, -24, -1356, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1202, -14, -1385, -28, -1635, 34,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTFoxAnimFTilt_joint18[66] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 354, 602,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 956, 302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 959, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 953, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 956, -406,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 141, -478,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -67,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 75, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 421, 291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 658, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 586, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 434, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -80,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTFoxAnimFTilt_joint20[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1561, 6, 1482, 87, 1552, -152,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1576, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1555, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1400, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1487, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1397, 117,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1570, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1708, -88, 1349, -74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1756, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1422, 55, 1635, 142,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1486, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1712, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1751, 6, 1695, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1566, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1565, 32,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1530, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1452, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1580, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1252, -26,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1539, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1564, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1251, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1510, 59,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1467, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1478, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1561, 2, 1482, 4, 1552, 41,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimFTilt_joint21[188] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 355, -620, 137, 214, 134, -770,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4096, 4095,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4095, 4096, 4095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -265, -336, 351, 85, -636, -428,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -316, -27, 308, -25, -721, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -265, 194, 351, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -732, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -636, 505,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 5324, 4300, 4300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 68, 193, 151, 17, 278, 403,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 45, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 386, 120, 171, -100,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 5324, 4300, 4300,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -121, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 393, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 308, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -72, -27,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -176, -96,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -498, -14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -140, -87, 296, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -279, 78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 237, -108,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -472, 100,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 90, 87,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 9), 4095, 4096, 4095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -90, 222,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 265, 61,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 127, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 181, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 289, 9, 123, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 343, 18, 112, 28,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 155, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 355, 11, 137, -18, 134, 22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTFoxAnimFTilt_joint23[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 332, 582,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 914, 355,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1043, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 914, -280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 490, -454,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 178, 318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 637, 318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 928, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1012, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 994, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 755, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 644, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 535, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 405, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -72,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimFTilt_joint24[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1592, 288, -1505, -3, 1381, -204,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1132, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1509, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1303, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1306, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1303, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1135, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1509, -168, 1177, 467,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1494, -167, -1846, -53, 2070, 276,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1649, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1617, 126, 1730, -102,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1588, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1866, 95,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1922, -10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1598, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1550, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1645, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1816, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1913, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1618, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1600, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1367, -168,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1699, 105,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1632, 51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1607, -57, 1171, -158,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1123, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1517, 21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1564, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1573, -26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1176, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1338, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1592, -19, -1505, 11, 1381, 43,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimFTilt_joint25[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 219,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -357, -134, 178, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -536, 67, 0, -107,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -357, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -89, 178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -89, 14, 357, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -89, -17, 0, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -268, -16, 536, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -268, 29, 357, -35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 0, 219,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimFTilt_joint26[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -178, -122,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 64, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 268, 89, 357, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 178, -125, 0, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -357, -44, -268, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 0, 59, -536, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 0, 17, 536, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 178, 16, 357, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 178, -39, 357, -53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -178, -122,
	ftAnimEnd(),
	0x0000,
};
