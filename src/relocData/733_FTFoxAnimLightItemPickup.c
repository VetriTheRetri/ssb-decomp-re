/* AnimJoint data for relocData file 733 (FTFoxAnimLightItemPickup) */
/* 1504 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimLightItemPickup_joint1[26];
extern u16 dFTFoxAnimLightItemPickup_joint2[20];
extern u16 dFTFoxAnimLightItemPickup_joint4[30];
extern u16 dFTFoxAnimLightItemPickup_joint5[68];
extern u16 dFTFoxAnimLightItemPickup_joint6[40];
extern u16 dFTFoxAnimLightItemPickup_joint7[10];
extern u16 dFTFoxAnimLightItemPickup_joint8[30];
extern u16 dFTFoxAnimLightItemPickup_joint10[10];
extern u16 dFTFoxAnimLightItemPickup_joint11[60];
extern u16 dFTFoxAnimLightItemPickup_joint12[40];
extern u16 dFTFoxAnimLightItemPickup_joint13[38];
extern u16 dFTFoxAnimLightItemPickup_joint15[10];
extern u16 dFTFoxAnimLightItemPickup_joint16[66];
extern u16 dFTFoxAnimLightItemPickup_joint18[32];
extern u16 dFTFoxAnimLightItemPickup_joint20[54];
extern u16 dFTFoxAnimLightItemPickup_joint21[50];
extern u16 dFTFoxAnimLightItemPickup_joint23[24];
extern u16 dFTFoxAnimLightItemPickup_joint24[48];
extern u16 dFTFoxAnimLightItemPickup_joint25[16];
extern u16 dFTFoxAnimLightItemPickup_joint26[28];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimLightItemPickup_joints[] = {
	(u32)dFTFoxAnimLightItemPickup_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimLightItemPickup_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimLightItemPickup_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimLightItemPickup_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimLightItemPickup_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimLightItemPickup_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimLightItemPickup_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimLightItemPickup_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimLightItemPickup_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimLightItemPickup_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimLightItemPickup_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimLightItemPickup_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimLightItemPickup_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimLightItemPickup_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimLightItemPickup_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimLightItemPickup_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimLightItemPickup_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimLightItemPickup_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimLightItemPickup_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimLightItemPickup_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimLightItemPickup_joint1[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 48, 912, -20,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, -78, 600, -404, -360, -350,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 65, 660, 417, -240, 452,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 48, 912, -20,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimLightItemPickup_joint2[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -141, -338, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 268, -268, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -141, -338, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTFoxAnimLightItemPickup_joint4[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 156, 81,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 536, -8, 714, 40, 0, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 268, -37, 357, -93, 0, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 309, 156, 81,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimLightItemPickup_joint5[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -109, -105, -165, -4, 258, 477,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -269, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -170, -216, 736, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -598, -168, 624, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -320, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 655, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -69, 94, 471, -61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 654, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -138, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -168, 115,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -122, -38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 451, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -109, 29, -165, -43, 258, -192,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimLightItemPickup_joint6[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, -400,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -959, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -541, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -597, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -430, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -426, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -718, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -711, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 153,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimLightItemPickup_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimLightItemPickup_joint8[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -113, 136, -72,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 268, 40, -357, -45, 0, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 89, -63, -89, 82, 0, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -113, 136, -72,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimLightItemPickup_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimLightItemPickup_joint11[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 132, -280, 271, -283, 336, -599,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -586, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -147, -353, -11, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -573, -81, 183, 162,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 7, 186,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 233, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -307, 279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -27, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 63, 42, -54, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 117, 20, 235, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 132, 14, 271, 38, 336, 101,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimLightItemPickup_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -594, 594,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -328, -207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -414, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -304, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -406, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -544, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, -50,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimLightItemPickup_joint13[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1027, 89, 53, 11, 71, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 357, -256, 44, -13, 44, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -89, 0, -11, 89, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimLightItemPickup_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimLightItemPickup_joint16[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2014, -116, -1385, 250, 1581, -366,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2130, 93, -1134, 113, 1215, -412,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1827, 164, -1158, 0, 757, -241,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1801, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1154, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 733, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 788, 114,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1473, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1848, -73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1998, -33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1298, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2014, -15, -1385, -86, 1581, 108,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimLightItemPickup_joint18[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 354, 188,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 542, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 321, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 642, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 635, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 489, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -135,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimLightItemPickup_joint20[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 46, 117, 125, 172, -56, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 164, 21, 298, 17, 86, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 89, -31, 160, -63, 383, 137,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 74, -25, 209, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 95, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -33, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 48, -13, 152, -41, -81, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 46, -2, 125, -26, -56, 25,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimLightItemPickup_joint21[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1253, -52, -1746, -144, 1743, -271,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1402, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1800, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1255, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1297, 89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1704, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1425, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1310, 79,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1721, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1253, 56, -1746, 54, 1743, 21,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimLightItemPickup_joint23[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 332, 372,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 960, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 849, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 441, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -109,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimLightItemPickup_joint24[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1624, -32, 1711, 4, -1835, -247,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1570, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1582, 64, -2320, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1671, 80, -2274, 69,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1676, -62, -1930, 115,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1601, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1679, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1624, -51, 1711, 31, -1835, 95,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimLightItemPickup_joint25[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 219, 0, 0, -126, -96,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), -593,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTFoxAnimLightItemPickup_joint26[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -122, 0, 0, 64, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 310, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 164, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -227, -85,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -178,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
