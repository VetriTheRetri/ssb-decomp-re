/* AnimJoint data for relocData file 1991 (FTPikachuAnimStunLandD) */
/* 3008 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimStunLandD_joint1[38];
extern u16 dFTPikachuAnimStunLandD_joint2[42];
extern u16 dFTPikachuAnimStunLandD_joint3[46];
extern u16 dFTPikachuAnimStunLandD_joint5[30];
extern u16 dFTPikachuAnimStunLandD_joint6[126];
extern u16 dFTPikachuAnimStunLandD_joint7[46];
extern u16 dFTPikachuAnimStunLandD_joint8[38];
extern u16 dFTPikachuAnimStunLandD_joint9[10];
extern u16 dFTPikachuAnimStunLandD_joint10[38];
extern u16 dFTPikachuAnimStunLandD_joint11[38];
extern u16 dFTPikachuAnimStunLandD_joint13[30];
extern u16 dFTPikachuAnimStunLandD_joint14[104];
extern u16 dFTPikachuAnimStunLandD_joint16[52];
extern u16 dFTPikachuAnimStunLandD_joint17[166];
extern u16 dFTPikachuAnimStunLandD_joint19[78];
extern u16 dFTPikachuAnimStunLandD_joint21[144];
extern u16 dFTPikachuAnimStunLandD_joint22[160];
extern u16 dFTPikachuAnimStunLandD_joint24[66];
extern u16 dFTPikachuAnimStunLandD_joint25[152];
extern u16 dFTPikachuAnimStunLandD_joint26[48];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimStunLandD_joints[] = {
	(u32)dFTPikachuAnimStunLandD_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimStunLandD_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimStunLandD_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimStunLandD_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimStunLandD_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimStunLandD_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimStunLandD_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimStunLandD_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimStunLandD_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimStunLandD_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimStunLandD_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimStunLandD_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimStunLandD_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimStunLandD_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimStunLandD_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimStunLandD_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimStunLandD_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimStunLandD_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimStunLandD_joint25, /* [24] joint 25 */
	(u32)dFTPikachuAnimStunLandD_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTPikachuAnimStunLandD_joint1[38] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), -58,
	ftAnimSetValRate(FT_ANIM_TRAY), 542, 7491,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1800, 322, -66, -4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 1820, -334, -66, 1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 813, -5779, -63, 5,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -1002,
	ftAnimSetValRateT(FT_ANIM_TRAY, 8), 542, -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 8), -58,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimStunLandD_joint2[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 394, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 476, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 921, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1118, -12, 0, 2, 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 832, -67, 14, 4, 28, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 580, 34, 68,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimStunLandD_joint3[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 343, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -338, -54, -43, 3, -196, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -415, 2, 48, -6, -79, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -303, 45, -131, -1, -129, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -96, 59, 38, 38, -10, 41,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 170, 175, 199,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimStunLandD_joint5[30] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 466, 81, 45, 61, 103, -119,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 466, -51, 45, -39, 103, 76,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 324, -62, 313,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimStunLandD_joint6[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -898, -16, -1415, 42, 1026, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -915, -23, -1373, 217, 979, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -945, 298, -981, 201, 832, -555,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1125, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -319, 246, -131, -472,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -452, -93, -111, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -734, -181, 204, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1121, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1140, -124,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -946, -171, 459, 213,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 752, 73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1183, -21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1300, -99,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1396, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 813, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1099, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1197, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1005, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1397, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1286, 6,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1126, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1141, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1006, 0, -1279, 7, 1150, 8,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimStunLandD_joint7[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -645, -339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -399, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -386, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -344, 235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -10,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimStunLandD_joint8[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 250, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -152, -41, 132, 9, 27, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -331, -12, 132, 8, 27, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -330, 33, 244, 4, 1, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 65, 188, 23,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimStunLandD_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimStunLandD_joint10[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -439, -31, 138, 9, 115, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -439, 6, 138, 6, 115, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -354, 45, 233, 19, 206, 18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 111, 367, 335,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimStunLandD_joint11[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -433, -30, -130, -9, -184, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -433, -2, -130, 2, -184, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -472, -1, -93, 7, -221, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -454, -43, -274,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimStunLandD_joint13[30] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -392, -38, -92, -17, 339, 14,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -392, 12, -92, 18, 339, -41,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), -358, -41, 225,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimStunLandD_joint14[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 878, 8, 1699, -21, 1021, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1304, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1111, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1603, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1352, -183,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1255, 27,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1308, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1881, 237,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1285, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1136, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1133, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 1613, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1820, 233, 1084, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2378, 87,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1144, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2141, 221,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2569, 62,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2445, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2604, 34,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1052, -40, 2646, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2605, 0, 1063, 10, 2647, 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimStunLandD_joint16[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -10, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -391, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -531, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -506, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -524, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -637, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -806, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -668, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -285, 248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimStunLandD_joint17[166] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1360, -132, -1429, -160, 1280, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1340, 228, -1510, 146, 1469, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1685, 58, -1297, 156, 1378, 206,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1305, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1457, -180, 1882, 350,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1324, -75, 2079, 111,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1849, -107,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1480, 42,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1304, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1340, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1734, -110,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1432, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1517, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1599, 104,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1366, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1784, 355, -1367, -158, 1104, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2311, 172, -1656, -146, 1057, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2128, -399, -1661, 173, 921, 302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1512, -355, -1310, 160, 1661, 471,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1416, -95, -1340, -38, 1863, 208,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1333, 74, -1338, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2078, 96,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1307, -55,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1470, 123, -1277, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1434, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1513, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1401, -75, 1359, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1362, -39, -1475, -41, 1420, 61,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimStunLandD_joint19[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 648, -648,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 321,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 643, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 6, -60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 653, 373,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 992, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 460, -319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 226, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 408, 255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 940, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 881, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 648, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 504, -143,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPikachuAnimStunLandD_joint21[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1397, 150, 1385, 161, -1512, 622,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1559, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1247, 8, -889, 295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1381, -212, -921, -251,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1806, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1393, -270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1463, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1296, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1807, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1546, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1578, 17, -1287, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1653, 33, -1159, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1551, -279, 1706, 1, -1169, 55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1540, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2106, -180, -1047, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1912, 219, -1194, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1667, 115, 1621, 22, -1332, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1641, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1680, -29, -1273, 61,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1770, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1277, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1392, -73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1424, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1780, 119,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1839, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1571, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1398, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1357, 40, 1797, -41, -1394, 30,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimStunLandD_joint22[160] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1238, 117, -1569, -36, 1744, -227,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1180, -107,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1881, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1517, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1539, 88,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1873, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1336, -99,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1374, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1919, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1992, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1891, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1960, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1372, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1528, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1989, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1719, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1545, -83, 1681, -141,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1749, 265, 1231, 413,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1952, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1876, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1906, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1318, 217, -1715, 99, 1991, 395,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1313, 5, -1706, 3, 2022, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1844, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1307, 4, 2072, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1503, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1939, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1936, -57, 1711, -176,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1964, 0, 1613, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1596, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1587, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1537, 50, -1961, 2, 1699, 85,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimStunLandD_joint24[66] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 298, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 372, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 419, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 660, 250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 921, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 922, -460,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -461,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 6, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 278, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 475, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 308, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 158, -149,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTPikachuAnimStunLandD_joint25[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1367, -201, 1851, -149, 1968, 347,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1166, -58, 1702, -82, 2316, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1249, 188, 1687, -59, 2298, -85,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2031, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1583, -198, 2145, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1289, -103, 2203, 117,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1541, 149, 2421, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1976, -114,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1617, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1676, 115, 2391, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2046, -125,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1881, -27,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1624, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1655, -57,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1944, -90,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1682, 3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1844, -60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1595, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1722, 271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1617, 10, 2226, 276,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1967, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2274, 44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2240, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1594, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1601, 11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1902, -69, 2139, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1796, -18, 2113, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1791, -4, 1609, 8, 2152, 39,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTPikachuAnimStunLandD_joint26[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -186, 208, 50,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -487, -9, -67, -43, -352, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -323, -13, -398, -24, -696, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -682, -69, -415, 91, -790, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -672, 89, 58, 30, -702, 291,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 31, -169, 1542,
	ftAnimEnd(),
	0x0000, 0x0000,
};
