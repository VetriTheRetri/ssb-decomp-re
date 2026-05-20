/* AnimJoint data for relocData file 702 (FTFoxAnimRollF) */
/* 4064 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimRollF_joint1[60];
extern u16 dFTFoxAnimRollF_joint2[46];
extern u16 dFTFoxAnimRollF_joint3[78];
extern u16 dFTFoxAnimRollF_joint5[66];
extern u16 dFTFoxAnimRollF_joint6[206];
extern u16 dFTFoxAnimRollF_joint7[90];
extern u16 dFTFoxAnimRollF_joint8[10];
extern u16 dFTFoxAnimRollF_joint9[60];
extern u16 dFTFoxAnimRollF_joint11[10];
extern u16 dFTFoxAnimRollF_joint12[188];
extern u16 dFTFoxAnimRollF_joint13[88];
extern u16 dFTFoxAnimRollF_joint14[112];
extern u16 dFTFoxAnimRollF_joint16[10];
extern u16 dFTFoxAnimRollF_joint17[176];
extern u16 dFTFoxAnimRollF_joint19[68];
extern u16 dFTFoxAnimRollF_joint21[174];
extern u16 dFTFoxAnimRollF_joint22[170];
extern u16 dFTFoxAnimRollF_joint24[68];
extern u16 dFTFoxAnimRollF_joint25[152];
extern u16 dFTFoxAnimRollF_joint26[72];
extern u16 dFTFoxAnimRollF_joint27[74];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTFoxAnimRollF_joints[] = {
	(AObjEvent32 *)dFTFoxAnimRollF_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimRollF_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimRollF_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTFoxAnimRollF_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTFoxAnimRollF_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTFoxAnimRollF_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTFoxAnimRollF_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTFoxAnimRollF_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTFoxAnimRollF_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTFoxAnimRollF_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimRollF_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimRollF_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTFoxAnimRollF_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTFoxAnimRollF_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTFoxAnimRollF_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTFoxAnimRollF_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTFoxAnimRollF_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTFoxAnimRollF_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTFoxAnimRollF_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimRollF_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTFoxAnimRollF_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTFoxAnimRollF_joint1[60] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAY), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 6), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 4), -900,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 300, 3747,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 840, 5086,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 1440, 1280,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), 1680, 1338,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 1), -886, 730,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 9), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 2040, 2141,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), 2640, 1546,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 3600, 780,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 12), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 11), 4200,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), 4200,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimRollF_joint2[46] = {
	ftAnimSetValAfter(FT_ANIM_TRAZ), -20,
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 912,
	ftAnimSetValBlock(FT_ANIM_TRAX), 48,
	ftAnimSetValT(FT_ANIM_TRAX, 32), -48,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 672, -320,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 672, 64,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 720, 675,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 900, 267,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 900, -66,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 840, -178,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 720, -125,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 11), 600, 132,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 1), 912,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTFoxAnimRollF_joint3[78] = {
	ftAnimSetValAfter(FT_ANIM_TRAY), 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -141, -3,
	ftAnimSetValRate(FT_ANIM_ROTY), -338, 4,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), -141,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 32), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -338, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -3, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), -338,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 157, 163, -293, 32,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 0, 89,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 5), -804,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 804,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 804, 0, 804, 224,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1608, 57,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 8), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 804,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 0, -58,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 1270,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -141, 1270, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimRollF_joint5[66] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 156, 81,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 309, 81,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 156,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 156,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 223, -49, 178, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 0, -31,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 7), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 0, 99, 178, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 804, 43, 156, 12, 81, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 580, -42,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 162, 78,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 309, 156, 81,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTFoxAnimRollF_joint6[206] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -109, -63, -165, 230, 258, 338,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -165, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 65, 124, 597, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 84, 14, 660, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 90, -9, 620, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -161, 68, 78, -101, 591, -416,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -29, -25, -112, -9, -212, -696,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -211, 0, 58, 64, -802, -392,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -275, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -29, 192, -996, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 172, 455, -816, -303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 880, 276, -884, -106, -1604, -340,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 725, -211, -489, 301, -1496, 261,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 328, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -281, 181, -1081, 278,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -154, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -938, 75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1371, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 260, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 629, 329, -372, -503,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 920, 323, -1160, -473,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1275, 234, -1319, -102,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1235, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1389, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1354, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1296, 40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1339, -23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1366, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1529, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1221, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1203, -7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1369, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1431, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1680, 69, -1618, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1668, -121, -1582, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1438, -88, -1219, -137, -1248, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1492, 53, -1477, -258, -1324, -75,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimRollF_joint7[90] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, -363,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -921, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -954, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -275, 272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 137,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -503, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -299,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -598, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -431, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -613, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -601, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -328, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -231, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -328, -261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -530, -201,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTFoxAnimRollF_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTFoxAnimRollF_joint9[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -113,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 136, -12, -72, 4,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -114, 149, -75,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -114, 149, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 268, 89, 0, -23, 178, 40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 178, -49,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 446, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 268, -69, 0, 16, -178, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -113, -23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 136, -72,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -113, 136, -72,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTFoxAnimRollF_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimRollF_joint12[188] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 132, -591, 271, -349, 336, -1264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -458, -285, -77, -155, -927, -612,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -438, 28, -39, 42, -887, 68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 55, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -330, 32, -534, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -297, 387, -394, 705,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 444, 152, 875, 419,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 8, -307, 444, -281,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -38, 143, 411, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -32, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 56, -46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 116, 105, 389, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 151, 26, 362, 46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -3, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 464, 119,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 236, -22, 477, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 105, -107, 43, -348,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 21, -223, -219, -396,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -340, -178, 584, -121, -749, -360,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -334, 10, 221, -256, -940, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -389, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 70, -79, -769, 98,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 0, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -742, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -746, 13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -26, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -105, 49,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -400, 37, -703, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -314, 220, -592, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 41, 236, -36, 188, -435, 486,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 157, 116, 270, 306, 380, 816,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimRollF_joint13[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -594, 587,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -100, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -343, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -379, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -632, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 316,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -516, -237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -474, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -841, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -582, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -479, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -438, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -122, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 61,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -566, -566,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTFoxAnimRollF_joint14[112] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 84, 14, -84, -14, 16, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 84, 15, -84, 14, 16, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 178, 167, 0, 131, -357, -138,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -357, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 536, 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 178, -80, 0, -57, -268, 107,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 30, -24, 318, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 89, 70, 0, 44, -223, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 156, 33, -11, -8, 0, 215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 178, 8, -22, -8, 357, 166,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -44, 3, 446, -18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 178, -8, 0, 4, 268, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 89, -66, 0, 0, 268, -99,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimRollF_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimRollF_joint17[176] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1202, 196, -1385, 165, -1635, -285,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1224, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1554, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1921, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1962, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1956, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1246, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1433, -74,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1590, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1544, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2022, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1507, 11, -1745, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1664, -34, -1409, -96, -1569, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1474, -96, -1699, -122, -1418, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1600, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1470, 6, -1516, -102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1604, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1485, -115,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1575, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1731, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1538, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1663, -10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1308, -131,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1312, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1812, 70, -1627, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1927, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1415, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1352, 54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1203, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1338, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1478, -24,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1974, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1965, 183,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1441, -142, -1204, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1194, -247, -1399, -194, -1622, 343,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimRollF_joint19[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 354, 537,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 891, 289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 933, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 887, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 865, -440,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -432,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 563, 445,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 896, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1028, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1064, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1082, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1037, -351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 379, -657,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTFoxAnimRollF_joint21[174] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1628, -18, 1482, 21, 1552, -248,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1523, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1695, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1303, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1285, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1294, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1497, 72, 1304, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1667, 20, 1668, -46, 1093, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1537, -86, 1601, 3, 1297, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1494, 72, 1675, -70, 1682, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1683, 81, 1460, -116, 1522, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1617, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1442, -90, 1653, 97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1059, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1717, 70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1784, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1665, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1727, 55,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1075, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1128, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1864, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1793, -80, 1871, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1566, -125, 1240, 176, 1468, -425,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1542, -5, 1482, 137, 1020, -180,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1627, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1516, 8, 1108, 54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1513, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1176, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1200, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1211, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1509, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1504, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1659, 32, 1480, -23, 1510, 298,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimRollF_joint22[170] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 355, -137, 137, 169, 134, 144,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 219, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 320, 7, 269, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 321, -2, 269, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 298, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 282, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 227, -101, 290, -343,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -166, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 310, -152, -404, -636,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, -151, -982, 218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 112, 129, 6, 10, 31, 570,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -49, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 92, 8, 159, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 45, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 129, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 91, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 107, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 198, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 89, -84,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 112, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 85, 121,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 342, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 114, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 187, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 221, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 183, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 172, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 145, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 185, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -39, -15,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 333, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 314, -85,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 163, 97, -47, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 339, 176, 148, -165, 159, 207,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimRollF_joint24[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 332, 162,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 514, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 490, 339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1192, 326,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1144, -593,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -569,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 120, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 489, 241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 686, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 752, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1026, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 987, -363,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 299, -688,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTFoxAnimRollF_joint25[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 43, 260, -102, -8, -226, -336,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -114, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 304, 133, -563, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 309, 3, -600, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -505, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 303, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 299, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 80, -155, -49, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -11, -68, 125, 25, -429, 241,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -67, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1, -73, -23, 208,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 93, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -11, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 131, 30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -122, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 14, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 295, 153,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 296, -13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -12, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 267, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 164, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -298, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 277, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -28, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -28, 0, -356, -52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -648, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -37, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 282, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 126, -47,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -638, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 49, -76, -84, -46, -218, 419,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimRollF_joint26[72] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 219, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 219, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 519, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -46, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -343, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -617, -26, 219, -60, 0, 88,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -535, 228, -211, -66,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 636,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 609, 173, -138, 72, 0, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 553, -128, 244, 57, 75, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -430, -44, 328, -1, -53, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 0, 219, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTFoxAnimRollF_joint27[74] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -178, -122, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 7), -122,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 12), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 246, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -245, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -290, 30, -122, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 94, 0, -20, 0, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 385, 37, -272, -25, 58, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 306, -42, -207, 15, 9, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 77, -107, -162, 55, 0, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -368, -47, 141, 7, -47, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -178, -122, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
