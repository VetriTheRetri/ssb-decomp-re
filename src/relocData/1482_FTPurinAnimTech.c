/* AnimJoint data for relocData file 1482 (FTPurinAnimTech) */
/* 2144 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimTech_joint1[54];
extern u16 dFTPurinAnimTech_joint2[60];
extern u16 dFTPurinAnimTech_joint3[16];
extern u16 dFTPurinAnimTech_joint5[38];
extern u16 dFTPurinAnimTech_joint6[130];
extern u16 dFTPurinAnimTech_joint7[16];
extern u16 dFTPurinAnimTech_joint9[30];
extern u16 dFTPurinAnimTech_joint10[136];
extern u16 dFTPurinAnimTech_joint11[16];
extern u16 dFTPurinAnimTech_joint13[100];
extern u16 dFTPurinAnimTech_joint14[86];
extern u16 dFTPurinAnimTech_joint16[14];
extern u16 dFTPurinAnimTech_joint18[116];
extern u16 dFTPurinAnimTech_joint19[94];
extern u16 dFTPurinAnimTech_joint21[8];
extern u16 dFTPurinAnimTech_joint22[114];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTPurinAnimTech_joints[] = {
	(AObjEvent32 *)dFTPurinAnimTech_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTPurinAnimTech_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTPurinAnimTech_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTPurinAnimTech_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTPurinAnimTech_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTPurinAnimTech_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTPurinAnimTech_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTPurinAnimTech_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTPurinAnimTech_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTPurinAnimTech_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTPurinAnimTech_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTPurinAnimTech_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTPurinAnimTech_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTPurinAnimTech_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTPurinAnimTech_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTPurinAnimTech_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTPurinAnimTech_joint1[54] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAY), 905, -919,
	ftAnimSetValBlock(FT_ANIM_ROTX), 1519,
	ftAnimSetValT(FT_ANIM_ROTX, 6), 1519,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 186, -15,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 894, 610,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 4), 2412, 251, 1440, -33,
	ftAnimSetValRateT(FT_ANIM_TRAY, 8), 840, -597,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 3216,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -597,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 8), 3216,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 580, -564,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 456, 33,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 600, 256,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPurinAnimTech_joint2[60] = {
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRate(FT_ANIM_SCAY), 4096, -762,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetValT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 26), 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4915, 1638, 4915,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096, 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -268, -23,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_ROTY, 5), -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4505, 2457, 4505,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPurinAnimTech_joint3[16] = {
	ftAnimSetVal(FT_ANIM_ROTX), 0,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 18), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 5), 125,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTPurinAnimTech_joint5[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 31, -11,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -8, 126,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -14, -5,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -8, 126,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -3, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -40, 2, 178, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -52, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 0, 0, 0, 2, 0, -9,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPurinAnimTech_joint6[130] = {
	ftAnimSetValAfter(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4095,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -642, -35, -1135, 12, -19, 3,
	ftAnimSetValBlock(FT_ANIM_SCAX), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -227, 186,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -1086, -55, -285, -122,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 6), 3072,
	ftAnimSetValT(FT_ANIM_SCAX, 14), 3072,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 225, 119, -1154, -24, -425, -50,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1170, -4, -355, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 238, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 448, 36,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1138, 33, -387, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1003, -199,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1156, -58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 485, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1417, 442,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1204, -174,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1585, -30,
	ftAnimSetValT(FT_ANIM_SCAX, 6), 4095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1896, 419,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2458, 66,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1215, -61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1339, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2391, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2391, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2412, 21, -1387, -48, -1608, -22,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPurinAnimTech_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPurinAnimTech_joint9[30] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 30, 7, -127,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 26, 7, -127,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, 7, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -25, 1, 42, -2, -162, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 0, 0, 0, -1, 0, 8,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPurinAnimTech_joint10[136] = {
	ftAnimSetValAfter(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -915, -54, 479, 12, -1627, -53,
	ftAnimSetValBlock(FT_ANIM_SCAX), 3072,
	ftAnimSetValT(FT_ANIM_SCAX, 6), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 496, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1094, 55, -1738, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1007, 47, -1627, 70,
	ftAnimSetValT(FT_ANIM_SCAX, 14), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1111, -218, -1632, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1438, -241, -1807, -126,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1797, -43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2036, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 480, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 743, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1839, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1904, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2086, -337, -2109, -197,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3128, -417,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2430, -407,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 713, -56, -2925, -334,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3180, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 281, -71,
	ftAnimSetValT(FT_ANIM_SCAX, 6), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3413, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3461, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3782, -228,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3975, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3196, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3209, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4021, -45, 217, -63, -3216, -7,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPurinAnimTech_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTPurinAnimTech_joint13[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 0, 0, 43, -1072, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1162, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -860, -31, 153, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1055, -164,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 382, 30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1412, -130,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1907, -120,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1872, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 512, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 392, -58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1968, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1944, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1652, 87,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -194, -173,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1845, 261,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1072, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1276, 170,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -804, 39,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -209, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 0, 37,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPurinAnimTech_joint14[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, -43, -302, -22, 237, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -322, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -138, 64, 305, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -57, 57, 255, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -23, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 233, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -302, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -302, -11,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -23, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -64, -45,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 233, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 246, -19,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -325, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -314, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -114, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -42, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, 19, -302, 12, 237, -8,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPurinAnimTech_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 25), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTPurinAnimTech_joint18[116] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1840, -2, 1576, 106, -1350, -77,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1783, -105, 1835, -83, -1510, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1912, -54, 1671, -157, -1294, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1929, -26, 1573, 69, -1195, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1946, 0, 1659, 51, -1294, -87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1385, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1970, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 1572, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1577, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1710, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1401, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1557, -115,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1997, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1947, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1760, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1792, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1672, -66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1699, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2001, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1940, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1918, 22, 1785, -7, -1704, -5,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPurinAnimTech_joint19[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 21, 42, 302, 23, 233, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 322, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 138, -64, 305, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 57, -58, 255, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 21, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 237, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 302, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 302, 11,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 21, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 66, 46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 233, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 286, 4,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 325, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 314, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 114, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 42, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 271, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 246, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, -21, 302, -11, 233, -12,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPurinAnimTech_joint21[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 7,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPurinAnimTech_joint22[114] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1430, 8, -1572, -102, -1369, -82,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1459, 97, -1818, 83, -1522, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1349, 43, -1662, 139, -1320, 164,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -1643, 3, -1416, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1347, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1339, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1269, 41,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1629, 4, -1397, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1815, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1468, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1209, 2, -1419, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1281, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1695, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1700, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1708, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1226, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1281, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1810, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1795, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1298, -17, -1785, 10, -1708, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
