/* AnimJoint data for relocData file 1442 (FTKirbyAnimEggThrowEndAir) */
/* 3568 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimEggThrowEndAir_joint1[74];
extern u16 dFTKirbyAnimEggThrowEndAir_joint2[20];
extern u16 dFTKirbyAnimEggThrowEndAir_joint3[142];
extern u16 dFTKirbyAnimEggThrowEndAir_joint4[38];
extern u16 dFTKirbyAnimEggThrowEndAir_joint6[86];
extern u16 dFTKirbyAnimEggThrowEndAir_joint7[208];
extern u16 dFTKirbyAnimEggThrowEndAir_joint8[14];
extern u16 dFTKirbyAnimEggThrowEndAir_joint10[86];
extern u16 dFTKirbyAnimEggThrowEndAir_joint11[208];
extern u16 dFTKirbyAnimEggThrowEndAir_joint12[16];
extern u16 dFTKirbyAnimEggThrowEndAir_joint13[10];
extern u16 dFTKirbyAnimEggThrowEndAir_joint14[20];
extern u16 dFTKirbyAnimEggThrowEndAir_joint16[114];
extern u16 dFTKirbyAnimEggThrowEndAir_joint17[134];
extern u16 dFTKirbyAnimEggThrowEndAir_joint19[36];
extern u16 dFTKirbyAnimEggThrowEndAir_joint21[164];
extern u16 dFTKirbyAnimEggThrowEndAir_joint22[124];
extern u16 dFTKirbyAnimEggThrowEndAir_joint24[38];
extern u16 dFTKirbyAnimEggThrowEndAir_joint25[166];
extern u16 dFTKirbyAnimEggThrowEndAir_joint26[34];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTKirbyAnimEggThrowEndAir_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimEggThrowEndAir_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimEggThrowEndAir_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimEggThrowEndAir_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimEggThrowEndAir_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTKirbyAnimEggThrowEndAir_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTKirbyAnimEggThrowEndAir_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimEggThrowEndAir_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTKirbyAnimEggThrowEndAir_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTKirbyAnimEggThrowEndAir_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimEggThrowEndAir_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTKirbyAnimEggThrowEndAir_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTKirbyAnimEggThrowEndAir_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTKirbyAnimEggThrowEndAir_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTKirbyAnimEggThrowEndAir_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTKirbyAnimEggThrowEndAir_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTKirbyAnimEggThrowEndAir_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTKirbyAnimEggThrowEndAir_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTKirbyAnimEggThrowEndAir_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTKirbyAnimEggThrowEndAir_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTKirbyAnimEggThrowEndAir_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTKirbyAnimEggThrowEndAir_joint1[74] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 480, 4505, 3276, 4505,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 600, 4096, 4096, 4096,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 5,
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 240,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), 240,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 9), 600,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), -240, -768,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), -240, 274,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 840, 320,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 840, -213, 0, -213,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 600, -191, -240, -191,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), -240, 213,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 600, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimEggThrowEndAir_joint2[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 26), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 0, -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), -268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimEggThrowEndAir_joint3[142] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 44, 312, 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAZ, 5), 312, 54, 4096, 351, 4096, 409,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAY, 5), 0, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 360, 172, 5324, 327, 4096, 327, 5529, 327,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 420, 68, 4915, -117, 4915, 234, 4915, -175,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 89,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, -51, 420, 68, 0, 137,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4915, 4915, 4915,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -268, -44, 480, 80, 120, 160,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4915, 4915, 4915,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 480, -106, 120, -373, 4915, 136, 4915, 136, 4915, -955,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -268,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), -268,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 360, -134, -300, -95,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 5324, -273, 5324, -273, 2048, 409,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 4096, -351, 4096, -351,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAZ, 3), 6144,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -268, 59, 312, -42, 0, 266,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 268, 312, 0, 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTKirbyAnimEggThrowEndAir_joint4[38] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -26, 0, 300, 4915, 4915, 3072,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), -26, 0, 300, 4915, 4915, 3072,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 0, 28, 304, 1925, 122, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 28), 0, 28, 304, 1925, 122, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimEggThrowEndAir_joint6[86] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 178, 178, -120, -120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), -120, 68, -120, 68,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 178, 178,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), -60, 53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 2), -178, 0, -60,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 12, 178, 6,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 7), -120, -47, -60, -47,
	ftAnimSetValRateT(FT_ANIM_TRAX, 3), -120, 34,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), -120,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 89, -14, -90, 53, -60, 53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAY, 5), 44, 6, -60, 26,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 14), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 5), -60,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 9), 178,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 4), -90, -53, -30, -53,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), -120, -120,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimEggThrowEndAir_joint7[208] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1398, -15, -504, -5, -1615, 33,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 3072, -175, 4096, -117, 4096, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1370, 35, -544, -7, -1637, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1346, -189, -545, 96, -1679, 101,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -2252, -253, -271, 42, -1107, 166,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 2457, 3686, 3686,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 2457,
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 19), 3686, 3686,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2256, 25, -267, -2, -1102, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -355, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1843, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1907, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1648, 319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -997, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -846, 119,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -473, 195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -365, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -623, 50,
	ftAnimSetValRateT(FT_ANIM_SCAX, 9), 2457, 94,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1949, -130,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2534, -73,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -238, 239,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 202, 29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -549, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -645, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2601, -76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2645, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 208, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 149, -97,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_SCAX, 4), 3072, 136,
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 9), 4096, 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 38, -98, -642, -6, -2512, 112,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -119, 13, -2379, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -653, 15,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 3072,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -99, -97, -2420, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -314, -234, -2182, 262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -568, -253, -612, 40, -1896, 286,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTKirbyAnimEggThrowEndAir_joint8[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 34), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimEggThrowEndAir_joint10[86] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), -178, -178, 120, -120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 120, -68, -120, 68,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -178, -178,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), -60, 53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 2), 178, 0, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -12, -178, -6,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 7), 120, 47, -60, -47,
	ftAnimSetValRateT(FT_ANIM_TRAX, 3), 120, -34,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), -120,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 4), -89, 14, 90, -53, -60, 53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAY, 5), -44, -6, -60, 26,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 14), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 5), 60,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 9), -178,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 90, 53, -30, -53,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 120, -120,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimEggThrowEndAir_joint11[208] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1398, 15, 504, 5, -1615, 33,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 3072, -175, 4096, -117, 4096, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1365, -35, 542, 7, -1644, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1341, 191, 543, -95, -1684, 104,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 2252, 253, 271, -41, -1107, 166,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 2457, 3686, 3686,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 2457,
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 19), 3686, 3686,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2256, -25, 268, 3, -1102, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 365, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1843, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1907, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1645, -319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 996, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 846, -119,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 478, -190,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_SCAX, 9), 2457, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 418, 74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 623, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1949, -128,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2533, -75,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 247, -241,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -206, -33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 550, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 649, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2606, -80,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2640, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -215, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -146, 98,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_SCAX, 4), 3072, 136,
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 9), 4096, 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -37, 102, 646, 3, -2511, 115,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 166, -9, -2334, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 646, -12,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 3072,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 132, 84, -2391, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 336, 220, -2160, 249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 572, 236, 609, -37, -1891, 269,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTKirbyAnimEggThrowEndAir_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 34), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimEggThrowEndAir_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 35),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimEggThrowEndAir_joint14[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_SCAZ), -44, 20480,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY), 0, 0, 0, 60, 0, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAZ, 5), 0, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAZ, 30), 0, 4096,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimEggThrowEndAir_joint16[114] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY), 4096, 4096,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAZ), 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 20), 4096,
	_FT_ANIM_CMD(11, FT_ANIM_SCAZ, 1), 15,
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 312, 60,
	ftAnimSetValRate(FT_ANIM_ROTX), -232, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 7), 312,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 5), -277, 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ | FT_ANIM_SCAZ, 2), 0, 0, 5734,
	ftAnimSetValRateT(FT_ANIM_TRAZ | FT_ANIM_SCAZ, 3), 132, 800, 4096, -2389,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 3), 89, 432,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ | FT_ANIM_SCAZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 0, -51,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAZ, 4), 432, 132, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -268, -44, 570, 184, 228, 128,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAZ, 3), 4096,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAZ, 3), 570, -120, 228, -304, 4096, -955,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -268,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAZ), -682,
	ftAnimSetValRateT(FT_ANIM_SCAZ, 3), 1228, -682,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 480, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAZ), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 456, -192,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ | FT_ANIM_SCAZ, 3), -24, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -268, 59,
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 9), 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 268, 312, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimEggThrowEndAir_joint17[134] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 58, 4, -208, -3, 756, -21,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -269, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 42, -46, 655, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -37, -15, 531, -265,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 93, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -321, -25, 123, -239,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -289, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 52, -60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 469, -15,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 45, -45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -33, -37,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 423, -87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -717, -48,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -65, 14, -320, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 230, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -362, -15,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -740, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -223, 252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 213, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 41, 52,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -371, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -315, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 198, 128, 26, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 298, 48, 181, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 295, -3, -302, 13, 237, 55,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimEggThrowEndAir_joint19[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 56,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 21), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTKirbyAnimEggThrowEndAir_joint21[164] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -178, 2, -49, -7, -2873, -8,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -224, -64, 36, 113,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 26), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -2910, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2996, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2896, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -291, -46, 165, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -8, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -257, 42,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2931, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -3031, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -21, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -51, 2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -234, 9, -3005, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2977, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -190, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -186, -27, -54, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -413, 3, -394, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2938, 30,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, -91, 4096, -91, 4096, -91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2930, 42,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -402, 15, -375, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -327, 132,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -138, 18,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 3686, 3686, 3686,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -118, 93,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -294, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -197, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -195, 19, -2884, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -322, -28, -158, 37, -2864, 20,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimEggThrowEndAir_joint22[124] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -58, -4, 208, 3, 756, -21,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 269, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -42, 46, 655, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 34, 15, 527, -265,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -95, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 321, 25, 123, -239,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 289, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 48, -63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 465, -15,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -45, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 33, 36,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 419, -85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -717, -50,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 63, -15, 320, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -234, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 303, -9,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -740, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -223, 254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -218, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -19, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -156, -130, 26, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -280, -69, 181, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -295, -14, 302, -1, 237, 55,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTKirbyAnimEggThrowEndAir_joint24[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 119, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 20), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTKirbyAnimEggThrowEndAir_joint25[166] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 178, -2, 49, 7, 342, -8,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 224, 64, -36, -113,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 26), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 306, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 217, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 317, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 291, 46, -165, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 8, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 257, -42,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 285, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 185, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 21, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 51, -2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 234, -9, 211, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 239, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 190, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 186, 27, 54, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 426, 0, 395, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 281, 32,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, -91, 4096, -91, 4096, -91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 231, -33,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 415, -21, 377, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 311, -139,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 122, -29,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 3686, 3686, 3686,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 105, -102, 210, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 279, 107, 323, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 169, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 186, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 322, 43, 158, -28, 352, 29,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTKirbyAnimEggThrowEndAir_joint26[34] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 60, 2040,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 1608, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 26), 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 6), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 29), 0,
	ftAnimBlock(0, 20),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 60, -53,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
