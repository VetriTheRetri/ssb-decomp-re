/* AnimJoint data for relocData file 1721 (FTNessAnimClangRecoil) */
/* 1984 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimClangRecoil_joint1[36];
extern u16 dFTNessAnimClangRecoil_joint2[14];
extern u16 dFTNessAnimClangRecoil_joint4[30];
extern u16 dFTNessAnimClangRecoil_joint5[78];
extern u16 dFTNessAnimClangRecoil_joint6[30];
extern u16 dFTNessAnimClangRecoil_joint7[30];
extern u16 dFTNessAnimClangRecoil_joint8[34];
extern u16 dFTNessAnimClangRecoil_joint10[16];
extern u16 dFTNessAnimClangRecoil_joint11[82];
extern u16 dFTNessAnimClangRecoil_joint12[42];
extern u16 dFTNessAnimClangRecoil_joint13[58];
extern u16 dFTNessAnimClangRecoil_joint15[10];
extern u16 dFTNessAnimClangRecoil_joint16[88];
extern u16 dFTNessAnimClangRecoil_joint18[34];
extern u16 dFTNessAnimClangRecoil_joint19[68];
extern u16 dFTNessAnimClangRecoil_joint21[58];
extern u16 dFTNessAnimClangRecoil_joint22[76];
extern u16 dFTNessAnimClangRecoil_joint24[28];
extern u16 dFTNessAnimClangRecoil_joint25[74];
extern u16 dFTNessAnimClangRecoil_joint26[54];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTNessAnimClangRecoil_joints[] = {
	(AObjEvent32 *)dFTNessAnimClangRecoil_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimClangRecoil_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimClangRecoil_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTNessAnimClangRecoil_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTNessAnimClangRecoil_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimClangRecoil_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNessAnimClangRecoil_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNessAnimClangRecoil_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTNessAnimClangRecoil_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTNessAnimClangRecoil_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimClangRecoil_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimClangRecoil_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTNessAnimClangRecoil_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTNessAnimClangRecoil_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTNessAnimClangRecoil_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTNessAnimClangRecoil_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTNessAnimClangRecoil_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTNessAnimClangRecoil_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTNessAnimClangRecoil_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTNessAnimClangRecoil_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimClangRecoil_joint1[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -241, 0, 0, 540, -600,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 420, -87, -480, 87,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, -10, 420, 78, -480, 301,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -16, 537, -28,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimClangRecoil_joint2[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -71, -790, -95,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 28, -360, 8,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimClangRecoil_joint4[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 294, 258, 110,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 348, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 258, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 348, -29, 258, -21, 110, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimClangRecoil_joint5[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2166, 53, -1843, 13, -2326, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1444, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -2357, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 2544, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2561, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2544, -59,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1465, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1461, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2458, -378, -1137, 240, -2314, 364,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1787, -552, -980, -30, -1628, 568,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1352, -271, -1199, -176, -1177, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1244, -77, -1333, -74, -1158, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1198, -46, -1347, -13, -1192, -33,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimClangRecoil_joint6[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -554, -408,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -816, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -620, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, 146,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimClangRecoil_joint7[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 187, 17, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 187, -18, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimClangRecoil_joint8[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 375, 168, 251, 0, 288,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 16), 0, 300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 362, -1, 56, -10, 65, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 362, -31, 56, 25, 65, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -10, 364, -32,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNessAnimClangRecoil_joint10[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -221, 139, -209, 0, 54, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimClangRecoil_joint11[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 44, -25, 473, -9, -799, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 243, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -14, 62, -742, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 145, 82, -416, 255,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -68, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -73, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 165, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 370, 139,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -73, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -206, -129,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -75, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -81, -49,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 500, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -348, -104, 560, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -415, -67, 569, 9, -119, -37,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimClangRecoil_joint12[42] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -438, -353,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -715, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -906, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -910, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -722, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -613, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 54,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimClangRecoil_joint13[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -813, 25, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -233, 616, 100, -23, 193, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 419, 161, -21, -32, 16, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 736, -14, -92, 8, -53, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 270, -33, 65, 21, -110, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 503, -44, 60, -2, 13, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 90, 99, 54, 17, 126, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTNessAnimClangRecoil_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimClangRecoil_joint16[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2636, 6, -1258, 0, 2238, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -2556, 14, 2151, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1262, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1267, 79,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -882, 49,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2525, 120, 2102, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2315, 467, 1871, -490,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1590, 475, -875, -33, 1120, -503,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1097, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1344, -11, 798, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1388, -90, 786, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1946, -55, 1266, 74,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1135, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1287, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1974, -28, -1328, -41, 1310, 44,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimClangRecoil_joint18[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 342, 279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 565, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 653, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 485, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, -89,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimClangRecoil_joint19[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -365, -8, 160, 5, 616, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -377, 81,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 94, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 364, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 154, -160,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -64, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -278, 80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -128, 76,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -40, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 11, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -45, 65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 9, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 39, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, -3, 12, -27, 26, 14,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimClangRecoil_joint21[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 516, 198, 582,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 471, -34, 265, 25, 517, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 308, -68, 349, 0, 563, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 130, -58, 264, -25, 445, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 16, -35, 220, -49, 429, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -48, -16, 18, -44, 313, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -66, -4, 0, 2, 0, -12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTNessAnimClangRecoil_joint22[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -165, -149, -140, -73, -164, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -27, 129,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -320, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -314, -276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -717, -306,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -345, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 86, 60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -303, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -289, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -246, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -139, 98,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 124, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -263, 68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -132, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -293, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -233, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -127, 5, 136, 12, -210, 22,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimClangRecoil_joint24[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 480, 73,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 862, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 889, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 589, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 468, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, -61,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimClangRecoil_joint25[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -71, 62, -180, 147, -43, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 215, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -402, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -32, 240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 300, 247,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 291, 17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 181, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -32, -40,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 316, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 34, -20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -55, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 60, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -362, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -234, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 76, 15, 25, -9, -202, 32,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimClangRecoil_joint26[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 54, -73, 124,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 328, 30, 472, 94, 520, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 239, -45, 492, -3, 151, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 145, -42, 459, -46, 95, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 28, -9, 258, -51, -9, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 56, -4, 0, -12, 0, -2,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
