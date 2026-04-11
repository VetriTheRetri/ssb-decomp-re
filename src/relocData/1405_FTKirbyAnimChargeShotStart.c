/* AnimJoint data for relocData file 1405 (FTKirbyAnimChargeShotStart) */
/* 1520 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimChargeShotStart_joint1[26];
extern u16 dFTKirbyAnimChargeShotStart_joint2[14];
extern u16 dFTKirbyAnimChargeShotStart_joint3[42];
extern u16 dFTKirbyAnimChargeShotStart_joint5[66];
extern u16 dFTKirbyAnimChargeShotStart_joint6[116];
extern u16 dFTKirbyAnimChargeShotStart_joint7[16];
extern u16 dFTKirbyAnimChargeShotStart_joint9[64];
extern u16 dFTKirbyAnimChargeShotStart_joint10[110];
extern u16 dFTKirbyAnimChargeShotStart_joint11[16];
extern u16 dFTKirbyAnimChargeShotStart_joint13[10];
extern u16 dFTKirbyAnimChargeShotStart_joint14[38];
extern u16 dFTKirbyAnimChargeShotStart_joint16[16];
extern u16 dFTKirbyAnimChargeShotStart_joint18[50];
extern u16 dFTKirbyAnimChargeShotStart_joint19[50];
extern u16 dFTKirbyAnimChargeShotStart_joint21[82];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimChargeShotStart_joints[] = {
	(u32)dFTKirbyAnimChargeShotStart_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimChargeShotStart_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimChargeShotStart_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimChargeShotStart_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimChargeShotStart_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimChargeShotStart_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimChargeShotStart_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimChargeShotStart_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimChargeShotStart_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimChargeShotStart_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimChargeShotStart_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimChargeShotStart_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimChargeShotStart_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimChargeShotStart_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimChargeShotStart_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF015B, /* [21] END */
};

/* Joint 1 */
u16 dFTKirbyAnimChargeShotStart_joint1[26] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 600, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 8), -120, -119,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 8), 840,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 600, -120, -240, -60,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimChargeShotStart_joint2[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 16), 0, 11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimChargeShotStart_joint3[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 312, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -178, 5, 0, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 3891, 4505, 3891,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 89, 16, 89, 5,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, 51, 4096, -102, 4096, 51,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimChargeShotStart_joint5[66] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 4), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 8), 357,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 0, -16,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), -120, -239, -120, -119,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), -120, 159, -60, -39,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 90, -150, -30, 0, -60,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 4), -30, -59, -90, 149,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -268, -16, 0, -22,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), -60,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -60, -20, 0, 60, 0, 40,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimChargeShotStart_joint6[116] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2412, -152, -217, -341, 0, 221,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2565, 198, -558, -165, 221, 649,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2015, 249, -547, 84, 1299, 628,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -292, 24,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 14), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2066, -56, 1479, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2129, -87, 1609, 105,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -2378, 44, 1751, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -340, -58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -448, 64,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2313, 70, 1628, -106,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2177, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1631, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -372, 84,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -127, 38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2251, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2195, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1857, 249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2129, 252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2195, 0, -99, 27, 2362, 233,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimChargeShotStart_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimChargeShotStart_joint9[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 4), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 33, -357, 11,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 120, 179, -120, -239,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 90, -159, -120, -39,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 30, -150, 30, 0, -120,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 536, 33, 178, 33,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 120, 119, -90, 119, -120, -119,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), -30, 40,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), 120, -120,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimChargeShotStart_joint10[110] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 56, 217, 300, 0, -78,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -827, -74, 647, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -78, -649,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1298, -694,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 14), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -896, -16, 548, -66, -1467, -86,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -411, 57, 369, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1470, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1342, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -392, -30, 338, 11, -1381, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1044, -279, 438, -71, -1848, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1272, -134, 324, -81, -1932, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 495, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1312, 67, -1748, 333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1137, 74, -1264, 313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1164, -80, -1121, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1297, -133, 604, 108, -1152, -31,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimChargeShotStart_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimChargeShotStart_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimChargeShotStart_joint14[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, 4, -302, 5, 237, -6,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 104, 19, 19, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 13), -277, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -299, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -317, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 123, 18, -328, -11, -4, -24,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimChargeShotStart_joint16[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimChargeShotStart_joint18[50] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1918, 0, 1785, 1, -1704, 12,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1955, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1786, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1382, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1407, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1520, -19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1958, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1965, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1970, -5, 1786, 0, -1536, -16,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimChargeShotStart_joint19[50] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, -6, 302, -1, 237, -8,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 425, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 218, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -208, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -256, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -110, 43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 484, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 635, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -76, 34, 199, -18, 657, 22,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimChargeShotStart_joint21[82] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000, 0x280E, 0xFAEE, 0xFFFF, 0xF907, 0x0005, 0xF958, 0x0003, 0x4F00, 0x1000, 0x1000, 0x1000, 0x2809, 0x000A, 0xFB9C, 0x004E, 0x2007, 0x0008, 0xFC19, 0x0085, 0xF8FA, 0xFFD1, 0x2007, 0x0001, 0xFCA7, 0x0083, 0xF8C8, 0xFFD6, 0x2803, 0x0004, 0xFCDE, 0xFFA7, 0x2805, 0x0006, 0xF901, 0x0017, 0x0801, 0x0001, 0x2009, 0x0001, 0xFBDF, 0x0030, 0x2809, 0x0004, 0xFBF7, 0xFFFA, 0x0801, 0x0002, 0x2003, 0x0001, 0xFC7F, 0xFFA9, 0x2003, 0x0001, 0xFC2F, 0xFFBC, 0x200F, 0x0001, 0xFBF6, 0xFFC8, 0xF917, 0x0015, 0xFBEE, 0xFFF8, 0x0000, 0x0000, 0x0000,
};
