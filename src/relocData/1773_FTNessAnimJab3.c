/* AnimJoint data for relocData file 1773 (FTNessAnimJab3) */
/* 3200 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimJab3_joint1[60];
extern u16 dFTNessAnimJab3_joint2[46];
extern u16 dFTNessAnimJab3_joint4[10];
extern u16 dFTNessAnimJab3_joint5[170];
extern u16 dFTNessAnimJab3_joint6[72];
extern u16 dFTNessAnimJab3_joint7[10];
extern u16 dFTNessAnimJab3_joint8[38];
extern u16 dFTNessAnimJab3_joint10[10];
extern u16 dFTNessAnimJab3_joint11[166];
extern u16 dFTNessAnimJab3_joint12[70];
extern u16 dFTNessAnimJab3_joint13[10];
extern u16 dFTNessAnimJab3_joint15[10];
extern u16 dFTNessAnimJab3_joint16[130];
extern u16 dFTNessAnimJab3_joint18[48];
extern u16 dFTNessAnimJab3_joint19[110];
extern u16 dFTNessAnimJab3_joint21[54];
extern u16 dFTNessAnimJab3_joint22[134];
extern u16 dFTNessAnimJab3_joint24[100];
extern u16 dFTNessAnimJab3_joint25[192];
extern u16 dFTNessAnimJab3_joint26[108];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimJab3_joints[] = {
	(u32)dFTNessAnimJab3_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimJab3_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimJab3_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimJab3_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimJab3_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimJab3_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimJab3_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimJab3_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimJab3_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimJab3_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimJab3_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimJab3_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimJab3_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimJab3_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimJab3_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimJab3_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimJab3_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimJab3_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimJab3_joint25, /* [24] joint 25 */
	(u32)dFTNessAnimJab3_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimJab3_joint1[60] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -16, 537, -28,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 71, 6, 192, -111,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 1), 544,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), 71, 0, 192, 166,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 544,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 582, 41, 548, 140,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 1), 107,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 603, 28, 548, -93,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 6), 107,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 578, -41, 363, -539,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 3), 79,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -16, 537, -28,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimJab3_joint2[46] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 41, -528, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -380, -34, -267, 49,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 61,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -380, 11, -101, 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 61,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -607, 448, -533,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -607, 448, -533,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 371, -35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -559, -495,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 28, -360, 8,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimJab3_joint4[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 25),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimJab3_joint5[170] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -409, -186, -371, 45, 319, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -596, -15, -326, -8, 427, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -441, 127, -387, -35, 293, -131,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -125, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -288, 38, -382, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -263, 138, -353, -380,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -10, 140, -1142, -393,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 17, 26, -1139, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 25, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1127, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -135, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -133, 33,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -9, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -144, 189, -1092, 118, -72, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 369, 357, -890, 278, -490, -197,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 690, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -535, 225, -467, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -530, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -440, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -394, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -652, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 770, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 861, 0, -576, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 771, 313, -474, -318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1489, 251, -943, -235, -1213, -284,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1299, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1273, -134, -1043, 63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1171, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1086, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1167, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1143, -28, -1306, -7, -1208, -40,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimJab3_joint6[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -253, -582,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -836, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -706, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -497, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -415, 248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -330,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -661, -362,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -734, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -769, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -835, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -873, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -726, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -562, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -480, 81,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimJab3_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 25),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimJab3_joint8[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 42, 456, -22,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 206, 115, 45,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 439, 414, 153,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 385, -123, -128,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 385, -123, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -10, 0, 364, 0, -32, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTNessAnimJab3_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 25),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimJab3_joint11[166] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2480, -583, 234, 782, -590, -350,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1897, -204, 1017, 431, -940, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2071, 116, 1098, 76, -750, 136,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1244, 26, -593, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2130, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2142, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1921, 79, 1223, -394, -392, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2301, 186, 455, -385, -880, -249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2295, -3, 452, -5, -892, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 452, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -849, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2294, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2320, 6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 456, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2322, -74, 390, 56, -850, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2171, -31, 570, 55, -1061, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2260, 136, 501, -12, -942, 203,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2557, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 545, 0, -654, 234,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 412, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, 149,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -120, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2621, 60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2845, -20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 450, 46, -20, 66,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 581, 18, -122, -66,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2805, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2778, -26, 589, 8, -168, -45,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimJab3_joint12[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -325, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -324, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -485, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -597, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -562, 298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 276,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -443,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -896, -507,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1015, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -881, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -803, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -911, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -854, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -687, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -653, 33,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimJab3_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 90, 54, 126, 143, 0, 0,
	ftAnimBlock(0, 25),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimJab3_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 25),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimJab3_joint16[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1329, -504, -1252, -283, -1891, 700,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 824, -271, -1535, -139, -1190, 363,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 787, -20, -1531, 2, -1163, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1157, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 800, 20, -1532, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 823, 360, -1542, 250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1520, 287, -1031, 258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1398, -104, -1025, 4, -1141, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1170, -9, -1038, -10, -1178, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1161, 221, -1054, 30, -1211, -290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1614, 293, -977, 23, -1759, -377,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1747, 71, -1006, -24, -1966, -126,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1472, -76,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1172, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1901, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1873, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1954, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1405, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1285, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1218, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1280, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1274, -10, -1289, -9, -1962, -7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimJab3_joint18[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 489, -76,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 414, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 408, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 439, 298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 603, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 462, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, -20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimJab3_joint19[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -195, -9, -164, 33, 3, -194,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -52, 16, -10, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -191, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -187, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -201, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -59, -132, 27, -117, -209, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -318, -140, -244, -83, -12, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -339, -15, -140, 91, 0, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -309, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 212, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 8, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -243, 78, -180, -118,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -20, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -236, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 30, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 226, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 14, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -34, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -4, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4, 8, 12, -2, 41, 10,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimJab3_joint21[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -75, 12, 86,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 367, 88, 159, 29, 155, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 367, -52, 159, -31, 155, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 105, -37, 1, -22, 513, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 105, -14, 1, 3, 513, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -56, -13, 41, 0, 315, -31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -65, 13, 101,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimJab3_joint22[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -106, 300, 238, -509, -88, -279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 193, 124, -270, -233, -367, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 142, -40, -229, 37, -346, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 83, -37, -157, 43, -358, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 37, -151, -107, 325, -370, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -220, -127, 494, 301, -185, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -217, 0, 495, 1, -182, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -184, 14, 464, -45, -148, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -162, -48, 409, -122, -129, -121,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 87, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -281, -31, -390, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -225, 72, -479, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -48, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -209, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 19, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 59, 95,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -89, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -55, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 167, 86, -42, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 233, 42, 24, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -66, -10, 252, 18, 0, -23,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimJab3_joint24[100] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, -3, 4096, -3, 4096, -3,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 8192, 380, 8192, 380, 8192, 380,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 6962, -2114, 6897, -1738, 6923, -1738,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4090, -1578, 4116, -1578, 4103, -1578,
	ftAnimSetValT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX, 15), 4096,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 275,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), -2, -1,
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 551, 449,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 898, 215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 960, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 919, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 591, -303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 198, -295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimJab3_joint25[192] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX), 279, 385, 242, -861, 287, -996, 4096, -3,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 4093,
	ftAnimSetValRateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, -1, 4096, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 664, 83, -619, -446, -708, -385,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 445, -113, -650, 14, -484, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 459, -31, -528, 26, -483, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 374, -298, -537, 250, -363, 390,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), -137, -269, -26, 245, 296, 353, 6153, 0, 6144, 87, 6144, 118,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4084, -858, 4090, -755, 4090, -801,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -163, -21, -47, -12, 342, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -191, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 135, -135,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -94, -22,
	ftAnimBlock(0, 3),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -188, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -36, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 207, 148, -6, -110,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 83, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -117, -18, -85, -155,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 64, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -316, -132,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -174, 40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 9, -77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -58, 50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -181, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -204, 75,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 8, 69, 41, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 124, 28, 29, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -71, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 23, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 138, 13, 32, 2, 23, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTNessAnimJab3_joint26[108] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -102, -4, -20, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -313, -42, 307, 62, 425, 89,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), -313, -3, 307, -120, 425, -123, 4096, 1, 4096, 0, 4096, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), -331, -2, -296, -86, -193, -88, 5324, 256, 5324, 254, 5324, 258,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -331, 9, -296, 52, -193, -6,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4609, -954, 4605, -880, 4612, -706,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4098, -559, 4094, -687, 4098, -777,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 4096, 4096, 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -242, 6, 174, 53, -254, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -276, 29, 181, -17, 235, 25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 56, 0, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
