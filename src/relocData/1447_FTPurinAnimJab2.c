/* AnimJoint data for relocData file 1447 (FTPurinAnimJab2) */
/* 2512 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimJab2_joint1[40];
extern u16 dFTPurinAnimJab2_joint2[10];
extern u16 dFTPurinAnimJab2_joint3[92];
extern u16 dFTPurinAnimJab2_joint5[70];
extern u16 dFTPurinAnimJab2_joint6[172];
extern u16 dFTPurinAnimJab2_joint7[22];
extern u16 dFTPurinAnimJab2_joint9[80];
extern u16 dFTPurinAnimJab2_joint10[182];
extern u16 dFTPurinAnimJab2_joint11[22];
extern u16 dFTPurinAnimJab2_joint13[34];
extern u16 dFTPurinAnimJab2_joint14[88];
extern u16 dFTPurinAnimJab2_joint16[18];
extern u16 dFTPurinAnimJab2_joint18[104];
extern u16 dFTPurinAnimJab2_joint19[110];
extern u16 dFTPurinAnimJab2_joint21[168];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTPurinAnimJab2_joints[] = {
	(u32)dFTPurinAnimJab2_joint1, /* [0] joint 1 */
	(u32)dFTPurinAnimJab2_joint2, /* [1] joint 2 */
	(u32)dFTPurinAnimJab2_joint3, /* [2] joint 3 */
	(u32)dFTPurinAnimJab2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPurinAnimJab2_joint6, /* [5] joint 6 */
	(u32)dFTPurinAnimJab2_joint7, /* [6] joint 7 */
	(u32)dFTPurinAnimJab2_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTPurinAnimJab2_joint10, /* [9] joint 10 */
	(u32)dFTPurinAnimJab2_joint11, /* [10] joint 11 */
	(u32)dFTPurinAnimJab2_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPurinAnimJab2_joint14, /* [13] joint 14 */
	(u32)dFTPurinAnimJab2_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPurinAnimJab2_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTPurinAnimJab2_joint19, /* [18] joint 19 */
	(u32)dFTPurinAnimJab2_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF022F, /* [21] END */
};

/* Joint 1 */
u16 dFTPurinAnimJab2_joint1[40] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 600, 240,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 600, 192, 240, 192,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 720, 106, 360, 106,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 720, -48, 360, -113,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 660, -119, 217, -359,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 600, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPurinAnimJab2_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -268, 0, 0, -312, 0,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPurinAnimJab2_joint3[92] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 312,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 143, -4, -132, -5, 4096, -81, 4096, 327, 4096, -81,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 5), 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 143, 6, -132, 151, 4096, 163, 4096, -327, 4096, 163,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 178, 3, 625, 84,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4505, 3276, 4505,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY, 7), 178, -11, 625, -41, 312, -47,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, -117, 4096, 234, 4096, -117,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 5), 240,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 81, 4096, -327, 4096, 81,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4300, 3276, 4300,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 312, 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTPurinAnimJab2_joint5[70] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -263, 11, -143, 4, -19, 10, -119, -119, -145, -115,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -263, 88, -143, -6, -19, -163, -119, 116, -145, 300,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 178, 49, -178, -3,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -100, -458, -61, 338, 5, 867,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -133, -54, -34, 52, 71, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 178, -11, -178, 11, -155, 48, -8, 18, 45, -38,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 0, -41, 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPurinAnimJab2_joint6[172] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1142, 5, -486, -49, -1132, -23,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1147, 26, -536, -51, -1155, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1195, -2, -588, 24, -1218, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1142, 294, -486, 202, -1132, -208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1784, 338, -182, -29, -1634, -354,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1614, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -546, -203, -1841, 13,
	ftAnimSetValRateT(FT_ANIM_SCAX, 7), 3072, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -589, -20, -1607, 182,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -583, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1504, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1533, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1667, 81,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -586, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -602, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1608, -108,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1837, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1751, 77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1773, -116,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -623, -37, -1746, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1609, -19, -678, -69, -1557, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1735, 227, -762, -134, -1612, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2064, 296, -947, -208, -1456, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2328, 164, -1179, -185, -1548, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2393, 42, -1318, -91, -1592, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2412, 19, -1362, -43, -1608, -16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTPurinAnimJab2_joint7[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -6, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPurinAnimJab2_joint9[80] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -287, 8, 147, 103, -79, -73, 103, 68,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -287, 146, 0, 53, 133, 128, -73, 86, 98, -222,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 446, 81, 268, 29,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 211, -455, -35, -210, -7, -1521,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 19, -443, -126, -82, -281, -361,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 446, -29, 268, -17,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -10, 121, -77, 99, -188, 164,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 126, 34, -39, 51, -137, 125,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 0, 41, 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPurinAnimJab2_joint10[182] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1506, 119, 553, 36, 1383, 100,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 612, -19,
	ftAnimSetValRateT(FT_ANIM_SCAX, 3), 3072, 1228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1625, 143, 1484, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1794, -62, 1627, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1500, -46, 551, -63, 1378, 10,
	ftAnimSetValRateT(FT_ANIM_SCAX, 2), 6144, 409,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1701, 101, 484, -33, 1647, 239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1703, -146, 483, 4, 1857, -57,
	ftAnimSetValRateT(FT_ANIM_SCAX, 3), 4096, -877,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1407, -237, 492, -38, 1532, -271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1228, -116, 405, -85, 1314, -155,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 276, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1175, -33, 1221, -65,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1148, -3, 1156, -3,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 3072,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 266, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 533, 152,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1145, 1, 1157, 10,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1151, 22, 1176, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1190, 148, 1244, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1447, 598, 704, 43, 1554, 680,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2386, 488, 619, -156, 2604, 652,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2424, 15, 391, -177, 2859, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2417, -4, 264, -75, 3054, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2414, -2, 241, -9, 3175, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2412, -1, 245, 4, 3216, 40,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTPurinAnimJab2_joint11[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 16), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPurinAnimJab2_joint13[34] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 122, -81, -55, 64, -12, -12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 0, -1072,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 122, -1, -55, 2, -12, 6,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 120, -5, -52, -1, -4, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 110, -57, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTPurinAnimJab2_joint14[88] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -67, -5, -179, -7, 384, 1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -67, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 371, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -194, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -179, 53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -50, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -168, -81, 356, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 349, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -212, -36, 15, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -123, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 0, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -27, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -291, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -71, 44, 338, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -22, 0, 244, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, 1, -302, -11, 233, -11,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPurinAnimJab2_joint16[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 18), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTPurinAnimJab2_joint18[104] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -208, -6, -136, 7, -219, -6,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -208, 30, -136, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -234, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -219, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -74, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -160, 35, -211, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -129, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -162, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -130, 26, -65, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -193, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -96, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -130, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -209, -31,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -228, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -182, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -107, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -99, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -244, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -300, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -309, -8, -176, 5, -99, 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPurinAnimJab2_joint19[110] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 325, 3, 279, -5, 712, -2,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 279, 43, 712, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 334, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 325, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 247, -130, 351, 73, 754, 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 813, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 64, -112, 426, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 21, -30, 438, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 429, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4, -4, 828, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 798, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 55, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 64, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 96, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 759, -58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 250, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 432, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 312, -17,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 58, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 31, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, -10, 302, -9, 233, -17,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPurinAnimJab2_joint21[168] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
	0x0000, 0x280E, 0x006F, 0x0005, 0xFFD9, 0x0000, 0x0192, 0xFFF9, 0x4F00, 0x1000, 0x1000, 0x1000, 0x2805, 0x0003, 0xFFD9, 0x0006, 0x200B, 0x0002, 0x007A, 0xFFFE, 0x0188, 0x0003, 0x200B, 0x0001, 0x006F, 0xFFD4, 0x0192, 0x0039, 0x2809, 0x0002, 0x025B, 0x0035, 0x2007, 0x0001, 0x0021, 0xFFDD, 0xFFE5, 0x0000, 0x2805, 0x0004, 0xFFC7, 0xFFFF, 0x2003, 0x0001, 0x0028, 0x000E, 0x2803, 0x0004, 0x004B, 0xFFFA, 0x2009, 0x0001, 0x0265, 0x0004, 0x2809, 0x0005, 0x0253, 0x0004, 0x0801, 0x0002, 0x2005, 0x0001, 0xFFC7, 0x0001, 0x2805, 0x0005, 0x003C, 0x004D, 0x2003, 0x0001, 0x0042, 0xFFF6, 0x2803, 0x0003, 0x0019, 0xFFF2, 0x0801, 0x0001, 0x2009, 0x0001, 0x025B, 0x0000, 0x2809, 0x0002, 0x0205, 0xFF87, 0x0801, 0x0001, 0x2003, 0x0001, 0x000A, 0x0009, 0x200F, 0x0001, 0x002D, 0x008C, 0x0091, 0x003F, 0x0161, 0xFF58, 0x2809, 0x0003, 0xFFCC, 0xFFC0, 0x2805, 0x0004, 0x00B5, 0xFFF8, 0x2003, 0x0001, 0x0124, 0x00AC, 0x2003, 0x0001, 0x0185, 0x0020, 0x2003, 0x0001, 0x0164, 0xFFDF, 0x200B, 0x0001, 0x0142, 0xFFE9, 0xFFA6, 0xFFE9, 0x200F, 0x0001, 0x0135, 0xFFF3, 0x00B0, 0xFFFC, 0xFF9D, 0xFFF7, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
