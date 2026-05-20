/* AnimJoint data for relocData file 687 (FTFoxAnimStunLandU) */
/* 2240 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimStunLandU_joint2[32];
extern u16 dFTFoxAnimStunLandU_joint4[24];
extern u16 dFTFoxAnimStunLandU_joint5[162];
extern u16 dFTFoxAnimStunLandU_joint7[64];
extern u16 dFTFoxAnimStunLandU_joint10[36];
extern u16 dFTFoxAnimStunLandU_joint11[142];
extern u16 dFTFoxAnimStunLandU_joint12[56];
extern u16 dFTFoxAnimStunLandU_joint13[28];
extern u16 dFTFoxAnimStunLandU_joint15[10];
extern u16 dFTFoxAnimStunLandU_joint16[102];
extern u16 dFTFoxAnimStunLandU_joint18[52];
extern u16 dFTFoxAnimStunLandU_joint20[108];
extern u16 dFTFoxAnimStunLandU_joint21[86];
extern u16 dFTFoxAnimStunLandU_joint23[48];
extern u16 dFTFoxAnimStunLandU_joint24[72];
extern u16 dFTFoxAnimStunLandU_joint25[26];
extern u16 dFTFoxAnimStunLandU_joint26[20];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTFoxAnimStunLandU_joints[] = {
	(AObjEvent32 *)dFTFoxAnimStunLandU_joint2, /* [0] joint 2 */
	NULL, /* [1] NULL */
	(AObjEvent32 *)dFTFoxAnimStunLandU_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTFoxAnimStunLandU_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTFoxAnimStunLandU_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTFoxAnimStunLandU_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTFoxAnimStunLandU_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTFoxAnimStunLandU_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimStunLandU_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimStunLandU_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTFoxAnimStunLandU_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTFoxAnimStunLandU_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTFoxAnimStunLandU_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTFoxAnimStunLandU_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTFoxAnimStunLandU_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTFoxAnimStunLandU_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTFoxAnimStunLandU_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimStunLandU_joint26, /* [25] joint 26 */
};

/* Joint 2 */
u16 dFTFoxAnimStunLandU_joint2[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAZ), 12, -76,
	ftAnimSetValRate(FT_ANIM_TRAY), 127, 1902,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX), -804, 0, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -71, -20,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 26), -13,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 1255, -16,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 11), 198, -1867,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAY, 5), -513, 189,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimStunLandU_joint4[24] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 284, 14, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), -45, -18, 44, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -187, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -158, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 6, -457, 156,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimStunLandU_joint5[162] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1498, -67, -1428, -9, -1745, 62,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1554, -88, -1285, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1220, -287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 855, -274,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 683, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1651, -44, -1066, 177,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1503, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -785, 32,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 669, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 503, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1450, 56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1408, -82,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -749, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1091, -123,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1498, -85,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1689, -136,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 516, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 648, 281, -1851, -63, -1200, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1079, 355, -1815, 163, -1072, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1544, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1524, 189, -1315, -287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1437, 50, -1648, -297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1673, -411, -1422, 256, -1911, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 720, -673, -923, 245, -1380, 420,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 327, -221, -931, -41, -1071, 159,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1155, -47, -1181, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 324, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 362, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 378, 15, -1183, -27, -1200, -18,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimStunLandU_joint7[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1041, -63,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1125, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -907, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -178, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -41, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -345, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -539, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1245, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1055, 253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -738, 306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -443, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -749, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -638, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -583, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -581, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTFoxAnimStunLandU_joint10[36] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 268, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -402, -33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -268, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -402, 58, 0, 18, 0, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 455, 44, 0, -66,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -134,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -134, -402, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTFoxAnimStunLandU_joint11[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1495, 30, 1378, -16, -1739, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1340, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1141, 230, -1264, 321,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -900, 151, -911, 273,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -918, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -553, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1463, 88,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1492, 62,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -940, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -819, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -554, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -677, -73,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1564, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1327, -256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -774, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1014, -522,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -761, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1024, -146, -1048, -614,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1839, -514, 1034, 133, -1991, -655,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2043, -473, 1291, 79, -2359, -622,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2786, -476, 1192, 15, -3235, -584,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2997, -154, 1323, 116, -3528, -252,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1510, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3096, -66, -3741, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -3139, -6, -3916, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3142, -2, 1520, 9, -3921, -5,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimStunLandU_joint12[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -903, -34,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1086, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -999, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -467, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -352, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -648, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -853, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -433, 373,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -618, -327,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -663, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -516, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -458, 58,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimStunLandU_joint13[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 272, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 536, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 446, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -357, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -178, 69,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimStunLandU_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimStunLandU_joint16[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -93, 26, -99, -10, -515, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 72, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -119, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -87, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 118, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 25, -11, 300, 63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 82, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 245, -63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -377, 20,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -98, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -39, 21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 43, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -129, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -98, 126, -19, -66, -351, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 123, 141, -172, -75, 2, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 185, 74, -170, 22, -114, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 345, 54, -92, 18, -379, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 381, 35, -90, 1, -397, -18,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimStunLandU_joint18[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 548, 57,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 553, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 314, -274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 102, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 537, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 473, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 213, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 167, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 412, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 371, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 294, -76,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimStunLandU_joint20[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1474, -56, -1464, 9, 1350, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1847, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1486, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1858, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2048, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2079, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1887, 93,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1863, 66,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1855, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1819, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1765, 120, -1509, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1691, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1372, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1331, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1177, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1190, -85, 1826, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1347, -100, -1697, 20, 2021, 126,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1458, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1391, -113, 2079, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1724, -88, 2167, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1751, -26, -1400, 57, 2183, 16,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimStunLandU_joint21[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1661, -13, 1571, 0, 848, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1502, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 1563, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1058, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1079, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 787, 10,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1498, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1459, 30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 803, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 865, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1601, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2175, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 848, 265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1395, 334,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1492, -1, 1516, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1401, -34, 1624, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2269, 93, 1388, -13, 1664, 40,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimStunLandU_joint23[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 667, 40,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 933, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 936, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 442, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 347, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 232, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 271, 302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 837, 254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 780, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 941, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 985, 44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimStunLandU_joint24[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -159, 43, 319, -4, -115, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -119, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -350, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 266, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 212, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 262, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 367, 119, -127, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -43, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 500, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 126, -170, -332, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -46, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 158, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 80, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -97, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -208, -110, -12, 30, 29, 75,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimStunLandU_joint25[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 287, -107, 3, 3, -6, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -1232, -37, 70, 3, -139, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -571, 83, -164,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimStunLandU_joint26[20] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 147, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -315, -20, 0, -8, 0, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -384, -219, 190,
	ftAnimEnd(),
	0x0000, 0x0000,
};
