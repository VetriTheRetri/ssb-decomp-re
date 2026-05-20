/* AnimJoint data for relocData file 1364 (FTKirbyAnimHeavyItemPickup) */
/* 3072 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimHeavyItemPickup_joint1[114];
extern u16 dFTKirbyAnimHeavyItemPickup_joint2[48];
extern u16 dFTKirbyAnimHeavyItemPickup_joint3[54];
extern u16 dFTKirbyAnimHeavyItemPickup_joint5[78];
extern u16 dFTKirbyAnimHeavyItemPickup_joint6[176];
extern u16 dFTKirbyAnimHeavyItemPickup_joint7[16];
extern u16 dFTKirbyAnimHeavyItemPickup_joint9[78];
extern u16 dFTKirbyAnimHeavyItemPickup_joint10[184];
extern u16 dFTKirbyAnimHeavyItemPickup_joint11[16];
extern u16 dFTKirbyAnimHeavyItemPickup_joint13[10];
extern u16 dFTKirbyAnimHeavyItemPickup_joint14[96];
extern u16 dFTKirbyAnimHeavyItemPickup_joint16[22];
extern u16 dFTKirbyAnimHeavyItemPickup_joint18[82];
extern u16 dFTKirbyAnimHeavyItemPickup_joint19[104];
extern u16 dFTKirbyAnimHeavyItemPickup_joint21[24];
extern u16 dFTKirbyAnimHeavyItemPickup_joint22[112];
extern u16 dFTKirbyAnimHeavyItemPickup_joint23[276];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTKirbyAnimHeavyItemPickup_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimHeavyItemPickup_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimHeavyItemPickup_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimHeavyItemPickup_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimHeavyItemPickup_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTKirbyAnimHeavyItemPickup_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTKirbyAnimHeavyItemPickup_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimHeavyItemPickup_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTKirbyAnimHeavyItemPickup_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTKirbyAnimHeavyItemPickup_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimHeavyItemPickup_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTKirbyAnimHeavyItemPickup_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTKirbyAnimHeavyItemPickup_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTKirbyAnimHeavyItemPickup_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTKirbyAnimHeavyItemPickup_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTKirbyAnimHeavyItemPickup_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTKirbyAnimHeavyItemPickup_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTKirbyAnimHeavyItemPickup_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTKirbyAnimHeavyItemPickup_joint1[114] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRate(FT_ANIM_TRAY), 600, -11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 480, -96, 0, -192, 4300, 40, 3276, -163, 4300, 40,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 480, 96, -240, -192, 4300, -54, 3276, 163, 4300, -54,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 600, 192,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 3891, -54, 4505, 163, 3891, -54,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), -240,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 720, 48,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), -240,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 660, -96, -240, 96, 3891, 40, 4505, -81, 3891, 40,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 600, -68, -119, 192,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 600, -480,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), 0, 95,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 300, -180, 4915, 153, 2048, -307, 4915, 153,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 420, 0, 4710, 2867, 4710,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimHeavyItemPickup_joint2[48] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_TRAZ), -268, 3, 0, 22,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, -312,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 0, 26,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), 240,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), 0, -191,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 25), 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 0, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -268, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), -268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimHeavyItemPickup_joint3[54] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 5), 268, 17, 0, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 5), 178, -53, -120, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 5), -268, -89, -180, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 5), -714, -80, -240, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 5), -1072, 29, -240, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 10), -268, 71, 0, 127,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 5), 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimHeavyItemPickup_joint5[78] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 4, 0, -4, 0, -5,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 357, 35, -357, -35, -446, -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -60, -60, -120,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 20), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 357, -357, -446, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 15), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 30), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 357, -357, -446,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 357, -23, -357, 11, -446, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -23, -178, 23, 268, 47,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -120, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 268, -120, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimHeavyItemPickup_joint6[176] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 1, -1387, -10, -1608, -37,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2137, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1079, -351, -1290, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1538, -275, -1149, 120,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1424, 119,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1138, 46,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 35), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2260, -136,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2337, 242,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1315, 92,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1467, -211,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1085, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1171, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1704, -208, -2068, 240,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1828, 204, -1968, -250,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1089, 55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1225, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1570, 204, -2272, -241,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1156, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2588, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2794, -160,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2949, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1093, 34, -1371, -105,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -937, 79, -1483, 6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2954, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -3146, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -858, 62, -1471, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1244, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -567, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -464, 89, -3245, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -388, 52, -1269, -17, -3325, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -358, 29, -1279, -10, -3358, -33,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimHeavyItemPickup_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimHeavyItemPickup_joint9[78] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 4, 0, 4, 0, 5,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 357, 35, 357, 35, 446, 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 60, -60, -120,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 20), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 357, 357, 446, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 15), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 30), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 357, 357, 446,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 357, -23, 357, -11, 446, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -23, 178, -23, -268, -47,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -120, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, -268, -120, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimHeavyItemPickup_joint10[184] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 0, 1391, -10, -1608, -30,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1126, -96,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2528, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1098, 358,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1555, 266,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1434, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1050, -50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1135, -44,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 35), 3072,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1312, -99,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1467, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2607, -50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2337, 243,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1084, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1171, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1710, 208, -2061, 240,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1829, -201, -1967, -246,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1090, -55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1220, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1577, -202, -2264, -238,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1146, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2591, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2804, -163,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2933, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1080, -35, 1362, 104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 994, -71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1497, -16,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2933, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -3147, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 914, -70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 567, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1473, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1241, 26,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 465, -89, -3246, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 388, -53, 1268, 18, -3325, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 358, -29, 1279, 11, -3358, -32,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimHeavyItemPickup_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimHeavyItemPickup_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimHeavyItemPickup_joint14[96] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, -4, -302, 2, 237, 3,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 125, 85,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -345, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 93, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -37, -120,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -200, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 206, 66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 279, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -341, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -379, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -197, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -35, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 280, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 210, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 163, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -70, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -379, 7, 19, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -301, -1, 242, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -64, 5, -302, 0, 237, -4,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimHeavyItemPickup_joint16[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 33), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimHeavyItemPickup_joint18[82] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1918, 14, 1785, -24, -1704, -26,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1899, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1539, 13, -1755, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1557, 18, -1665, 93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1470, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 1739, 11,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1900, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), -1938, 5,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1474, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -1689, -21,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1741, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1744, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1691, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1706, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1935, 3, 1744, 0, -1702, 4,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimHeavyItemPickup_joint19[104] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, 32, 302, -15, 237, 57,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 558, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -17, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 56, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 5, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 3, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 550, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 365, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -8, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 131, 35,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 370, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 257, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 84, 3,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 167, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 306, -5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 233, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 235, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 83, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 67, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 62, -4, 302, -3, 233, -2,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimHeavyItemPickup_joint21[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 36), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTKirbyAnimHeavyItemPickup_joint22[112] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1298, 0, -1785, -23, -1704, -21,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -2137, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1281, 40, -1642, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1233, -12, -1573, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1483, -26, -1897, -56,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2066, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1984, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1484, 1, -1923, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -1901, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -1517, 4,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1984, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1723, 20,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1917, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1708, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1506, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1277, -5,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1714, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1739, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1708, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1703, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1281, -3, -1744, -4, -1706, -2,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTKirbyAnimHeavyItemPickup_joint23[276] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 300, 31, 900, 88,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 317, 237, 892, -99,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 359, 403, 875, -136,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 417, 482, 858, -103,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 479, 428, 849, -3,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 525, 350, 857, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 71, 19,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 567, 426, 856, -116,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 631, 547, 828, -271,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 704, 566, 788, -293,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 773, 481, 754, -183,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 825, 342, 742, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 196, 31,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 858, 237, 758, 193,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 884, 186, 791, 291,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 905, 163, 831, 319,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 925, 167, 871, 273,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 947, 332, 900, -84,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 0, -45,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1008, 701, 849, -652,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1122, 1358, 736, -1165,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1348, 1571, 558, -1694,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1515, 1152, 313, -1981,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1636, 825, 63, -997,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -258, -52,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1721, 793, 63, 30,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1834, 929, 70, 66,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1954, 898, 80, 72,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 2059, 691, 88, 50,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 2127, 454, 92, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -526, -50,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 2173, 342, 89, -47,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 2212, 197, 81, -80,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 2222, -153, 69, -91,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 2174, -730, 58, -82,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 2040, -1779, 49, -70,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAY, 5), -759, -43, 840, -320,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 40, -82,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 28, -101,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 15, -93,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 5, -60,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 0, -27,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 5), 780,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 1), -789, -22, -1, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 1), -804, -8, -1, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 1), -807, 0, -1, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 1), -806, 1, 0, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 1), -804, 0,
	ftAnimEnd(),
	0x0000, 0x0000,
};
