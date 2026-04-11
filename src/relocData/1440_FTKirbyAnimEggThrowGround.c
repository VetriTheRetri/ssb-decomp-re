/* AnimJoint data for relocData file 1440 (FTKirbyAnimEggThrowGround) */
/* 3088 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimEggThrowGround_joint1[74];
extern u16 dFTKirbyAnimEggThrowGround_joint2[20];
extern u16 dFTKirbyAnimEggThrowGround_joint3[142];
extern u16 dFTKirbyAnimEggThrowGround_joint4[38];
extern u16 dFTKirbyAnimEggThrowGround_joint6[78];
extern u16 dFTKirbyAnimEggThrowGround_joint7[190];
extern u16 dFTKirbyAnimEggThrowGround_joint8[14];
extern u16 dFTKirbyAnimEggThrowGround_joint10[78];
extern u16 dFTKirbyAnimEggThrowGround_joint11[190];
extern u16 dFTKirbyAnimEggThrowGround_joint12[16];
extern u16 dFTKirbyAnimEggThrowGround_joint13[10];
extern u16 dFTKirbyAnimEggThrowGround_joint14[20];
extern u16 dFTKirbyAnimEggThrowGround_joint16[116];
extern u16 dFTKirbyAnimEggThrowGround_joint17[126];
extern u16 dFTKirbyAnimEggThrowGround_joint19[8];
extern u16 dFTKirbyAnimEggThrowGround_joint21[110];
extern u16 dFTKirbyAnimEggThrowGround_joint22[120];
extern u16 dFTKirbyAnimEggThrowGround_joint24[14];
extern u16 dFTKirbyAnimEggThrowGround_joint25[128];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTKirbyAnimEggThrowGround_joints[] = {
	(u32)dFTKirbyAnimEggThrowGround_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimEggThrowGround_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimEggThrowGround_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimEggThrowGround_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimEggThrowGround_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTKirbyAnimEggThrowGround_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimEggThrowGround_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimEggThrowGround_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimEggThrowGround_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimEggThrowGround_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimEggThrowGround_joint13, /* [12] joint 13 */
	(u32)dFTKirbyAnimEggThrowGround_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimEggThrowGround_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimEggThrowGround_joint17, /* [16] joint 17 */
	(u32)dFTKirbyAnimEggThrowGround_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimEggThrowGround_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTKirbyAnimEggThrowGround_joint22, /* [21] joint 22 */
	(u32)dFTKirbyAnimEggThrowGround_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTKirbyAnimEggThrowGround_joint25, /* [24] joint 25 */
	0xFFFF02FC, /* [25] END */
};

/* Joint 1 */
u16 dFTKirbyAnimEggThrowGround_joint1[74] = {
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
u16 dFTKirbyAnimEggThrowGround_joint2[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 26), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 0, -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), -268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimEggThrowGround_joint3[142] = {
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
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -268, 29, 312, -42, 0, 266,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 0, 312, 0, 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTKirbyAnimEggThrowGround_joint4[38] = {
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
u16 dFTKirbyAnimEggThrowGround_joint6[78] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 178, 178, -120, -120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), -120, 68, -120, 102,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 178, 178,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), -60, 96, -30, 144,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -178, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 12, 178, 6,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 3), -60, -47, -30, -71,
	ftAnimSetValRateT(FT_ANIM_TRAY, 7), -120, -43,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 7), -120,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 89, -14, -60, 80, -90, 53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 14), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 44, -6, -30, 34, -60, 51,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 9), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimEggThrowGround_joint7[190] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1398, -15, -504, -5, 1601, 33,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1365, 35, -541, -8, 1573, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1346, -196, -545, 91, 1538, 108,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -2270, -259, -278, 46, 2134, 177,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 2457, 3686, 3686,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 23), 2457, 3686, 3686,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2277, 26, -266, 4, 2145, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -365, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1376, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1908, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1639, 324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -995, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -847, 118,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -324, 216,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -418, -67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -615, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1285, -106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 677, -86,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -88, 205,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 229, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -554, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -602, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 573, -108,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 429, 31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 306, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 524, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -598, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -345, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 472, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 73, -110,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 610, 82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 769, 57,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -258, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 34, -217, 41, 0, -73,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTKirbyAnimEggThrowGround_joint8[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 34), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimEggThrowGround_joint10[78] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), -178, -178, 120, -120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 120, -68, -120, 102,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -178, -178,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 60, -96, -30, 144,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 178, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -12, -178, -6,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 60, 47, -30, -71,
	ftAnimSetValRateT(FT_ANIM_TRAY, 7), -120, -43,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 7), 120,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 4), -89, 14, 60, -80, -90, 53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 14), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 5), -44, 6, 30, -34, -60, 51,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 9), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimEggThrowGround_joint11[190] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1398, 15, 504, 5, 1601, 33,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1364, -35, 541, 8, 1573, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1341, 196, 543, -91, 1531, 108,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 2270, 259, 278, -45, 2134, 177,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 2457, 3686, 3686,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 23), 2457, 3686, 3686,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2277, -27, 267, -2, 2145, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 365, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1377, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1906, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1638, -322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 995, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 847, -118,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 326, -220,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 415, 69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 616, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1283, -106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 754, -87,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 81, -202,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -237, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 555, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 604, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 678, -93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 428, 30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -304, -52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -525, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 604, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 414, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 471, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 73, -111,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -615, -82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -769, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 309, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 245, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, -34, 217, -28, 0, -73,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTKirbyAnimEggThrowGround_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 34), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimEggThrowGround_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 35),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimEggThrowGround_joint14[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_SCAZ), -44, 20480,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY), 0, 0, 0, 60, 0, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAZ, 5), 0, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAZ, 30), 0, 4096,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimEggThrowGround_joint16[116] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY), 4096, 4096,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAZ), 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 20), 4096,
	_FT_ANIM_CMD(11, FT_ANIM_SCAZ, 1), 15,
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 312,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAZ), -232, 0, 60, 9,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 7), 312,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 5), -277, 72,
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
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -268, 29,
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 9), 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 312, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTKirbyAnimEggThrowGround_joint17[126] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -249, 402,
	ftAnimSetValRate(FT_ANIM_ROTX), -115, 4,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -101, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -297, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 402, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 402, -72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -4, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -34, 112,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 158, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -328, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -273, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -57, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 216, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 146, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 5, 12,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 183, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 30, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 14, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 139, -1,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -294, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -312, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 177, 54,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 135, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -15, -17,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 221, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, -8, -302, 9, 237, 15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimEggThrowGround_joint19[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 35),
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTKirbyAnimEggThrowGround_joint21[110] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1880, 1, 1785, 3, -1776, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1970, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1785, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1777, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1716, 120,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1491, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1982, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1931, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1500, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1629, 100,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1756, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1786, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1504, 102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1529, -9,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1952, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1927, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1536, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1648, -43,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1789, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1787, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1688, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1918, 9, 1785, -2, -1704, -16,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimEggThrowGround_joint22[120] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 113, -4, 250, 0, 398, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 99, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 297, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 398, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 398, -72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -4, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 32, -111,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -158, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 328, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 272, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -57, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 212, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -149, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 9, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -7, -11, 179, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 61, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -123, -20,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 293, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 299, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 26, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 172, 54,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -139, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 12, 16,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 217, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, 8, 302, 2, 233, 15,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTKirbyAnimEggThrowGround_joint24[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 34), 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTKirbyAnimEggThrowGround_joint25[128] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 272, -1, 176, 3, -171, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 362, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 176, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -172, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -111, 122,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 117, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 373, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 322, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 104, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -24, 100,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 147, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 173, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 100, 104,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 75, -8,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 343, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 307, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 71, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -34, -51,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 169, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 174, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -78, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -96, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 309, 1, 176, 2, -99, -3,
	ftAnimEnd(),
	0x4080, 0x07F8, 0x486E, 0x0000, 0x0648, 0x0000, 0x0000, 0x003C, 0x3881, 0x0006, 0x0000, 0x3881, 0x001D, 0x0000, 0x0000, 0x0000,
};
