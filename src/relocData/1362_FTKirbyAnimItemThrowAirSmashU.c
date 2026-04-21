/* AnimJoint data for relocData file 1362 (FTKirbyAnimItemThrowAirSmashU) */
/* 2320 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimItemThrowAirSmashU_joint1[54];
extern u16 dFTKirbyAnimItemThrowAirSmashU_joint2[26];
extern u16 dFTKirbyAnimItemThrowAirSmashU_joint3[56];
extern u16 dFTKirbyAnimItemThrowAirSmashU_joint5[68];
extern u16 dFTKirbyAnimItemThrowAirSmashU_joint6[146];
extern u16 dFTKirbyAnimItemThrowAirSmashU_joint7[16];
extern u16 dFTKirbyAnimItemThrowAirSmashU_joint9[70];
extern u16 dFTKirbyAnimItemThrowAirSmashU_joint10[156];
extern u16 dFTKirbyAnimItemThrowAirSmashU_joint11[30];
extern u16 dFTKirbyAnimItemThrowAirSmashU_joint13[10];
extern u16 dFTKirbyAnimItemThrowAirSmashU_joint14[116];
extern u16 dFTKirbyAnimItemThrowAirSmashU_joint16[38];
extern u16 dFTKirbyAnimItemThrowAirSmashU_joint18[110];
extern u16 dFTKirbyAnimItemThrowAirSmashU_joint19[98];
extern u16 dFTKirbyAnimItemThrowAirSmashU_joint21[14];
extern u16 dFTKirbyAnimItemThrowAirSmashU_joint22[108];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimItemThrowAirSmashU_joints[] = {
	(u32)dFTKirbyAnimItemThrowAirSmashU_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimItemThrowAirSmashU_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimItemThrowAirSmashU_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimItemThrowAirSmashU_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimItemThrowAirSmashU_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimItemThrowAirSmashU_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimItemThrowAirSmashU_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimItemThrowAirSmashU_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimItemThrowAirSmashU_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimItemThrowAirSmashU_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimItemThrowAirSmashU_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimItemThrowAirSmashU_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimItemThrowAirSmashU_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimItemThrowAirSmashU_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimItemThrowAirSmashU_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTKirbyAnimItemThrowAirSmashU_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimItemThrowAirSmashU_joint1[54] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 600, 0,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4300, 102, 3276, -409, 4300, 102,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4300, -204, 3276, 614, 4300, -204,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 3891, -34, 4505, 136, 3891, -34,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 58, 4096, -175, 4096, 58,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4300, 3276, 4300,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimItemThrowAirSmashU_joint2[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 0, 67,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 0, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 12), -268,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimItemThrowAirSmashU_joint3[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 268, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -536, -201, -357, -89, 357, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -536, 22, -357, 134, 357, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -446, 33, 178, 100, -268, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -268, 39, 446, 17, -357, 14,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), 268, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 357, -37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimItemThrowAirSmashU_joint5[68] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 178, -120, -120, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), -178, -44, -60, 119, -60, -119,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAY, 2), 178, -120,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 178, -111, -60, -240, -120, 240,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 2), -178, -60,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -268, -55, -180, -60, 0, 60, -60, -60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -178, 9, -268, 24, -120, 26, -60, -53, -120, 26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 0, 178, -120, -120, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimItemThrowAirSmashU_joint6[146] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1040, -547, 2221, -27, -287, 172,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 2101, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 492, -631, -114, 250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -223, -401, 213, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -310, -2, 230, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -228, 781, 2094, -21, 219, -436,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 2133, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1252, 666, -643, -499,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1105, -51, -780, -82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -907, -125,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1368, 51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2168, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 2055, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1059, -141,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1303, 60,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1405, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1718, 156,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2140, 81,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 2216, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1856, 84,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1807, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1234, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1064, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1530, -211, -735, 261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1200, -112, -410, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1090, -82, -328, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1036, -54, 2218, 1, -283, 45,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimItemThrowAirSmashU_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimItemThrowAirSmashU_joint9[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -178, 120, -120, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -178, -44, 0, 44, 180, 119, -60, 119, 60, 119,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -178, 134, 180, -240, -60, -120, 60, -360,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 357, 55, 60, -120, -120, 60, -120, -60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 6), 268, -19, 0, -9, 60, 26, 0, 53,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 6), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 0, -178, 120, -120, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimItemThrowAirSmashU_joint10[156] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2648, 283, 612, -672, -1895, -254,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2552, -373,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2365, 127, -59, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2393, -159, 644, 379,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2683, 0, 698, 0, -2897, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2393, 588, 644, -103, -2552, 633,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 412, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1505, 404, -1629, 462,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1583, -69, -1628, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1717, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1726, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 516, 142, -1764, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 696, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1742, 486, -1656, 614,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -744, 515, -536, 606,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -712, -5, 567, -91, -443, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1055, -107,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1269, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 404, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 363, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 487, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1138, -84,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1579, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1376, -110,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2165, -321,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 541, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2488, -239, 597, 34, -1775, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2644, -156, 609, 12, -1891, -115,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimItemThrowAirSmashU_joint11[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -965,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -965, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 479,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimItemThrowAirSmashU_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimItemThrowAirSmashU_joint14[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1313, -347, -1305, -56, 1845, 81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2036, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1432, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1865, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1881, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1863, 172, 2007, -401,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1535, 107, -1290, 19, 1234, -484,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1648, -60, -1392, -63, 1037, -124,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 975, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1655, -5, -1416, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1725, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1306, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1001, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1645, 153,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1749, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1423, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1789, 109,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1848, -8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1307, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1307, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1342, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1313, 28, -1305, 1, 1845, -2,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimItemThrowAirSmashU_joint16[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 540, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimItemThrowAirSmashU_joint18[110] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1930, 215, -1450, -225, -1255, -15,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -1572, -150, -1779, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1212, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1237, -297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1845, -75, -1673, 38, -1808, -75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1719, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1723, 79, -1388, 235,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1317, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1685, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1781, 41,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1322, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1459, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1718, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1601, 4,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1729, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1910, -35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1410, 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1271, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1590, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1462, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1930, -20, -1450, 12, -1255, 15,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimItemThrowAirSmashU_joint19[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -297, 495, 300, 155, 233, -264,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 485, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 198, 214, -30, -371,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 132, -46, -509, -270,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 132, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 461, 0, -571, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 484, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -509, 388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 186, -71, 204, 526,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -11, -100, 189, -167, 544, 183,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 137, -3, 576, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -14, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -242, -45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 142, 10, 576, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 299, 1, 238, -9,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -281, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -297, -15, 300, 0, 233, -5,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimItemThrowAirSmashU_joint21[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 23), 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTKirbyAnimItemThrowAirSmashU_joint22[108] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1930, -358, -1766, 275, -1259, 123,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1572, -34, -1491, -1, -1135, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1861, 141, -1769, -135, -1311, -93,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1761, 0, -1323, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 1856,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1861, -20, -1769, 94, -1311, 139,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1691, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1572, 69, -1043, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1631, -31, -1254, -108,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1264, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1637, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1684, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 1925, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1263, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -1263, 5,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1640, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -1752, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1930, 4, -1766, -14, -1259, 3,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
