/* AnimJoint data for relocData file 845 (FTDonkeyAnimStunLandU) */
/* 2048 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimStunLandU_joint2[32];
extern u16 dFTDonkeyAnimStunLandU_joint4[34];
extern u16 dFTDonkeyAnimStunLandU_joint5[132];
extern u16 dFTDonkeyAnimStunLandU_joint7[48];
extern u16 dFTDonkeyAnimStunLandU_joint10[36];
extern u16 dFTDonkeyAnimStunLandU_joint11[98];
extern u16 dFTDonkeyAnimStunLandU_joint12[48];
extern u16 dFTDonkeyAnimStunLandU_joint13[8];
extern u16 dFTDonkeyAnimStunLandU_joint14[8];
extern u16 dFTDonkeyAnimStunLandU_joint16[20];
extern u16 dFTDonkeyAnimStunLandU_joint17[128];
extern u16 dFTDonkeyAnimStunLandU_joint19[56];
extern u16 dFTDonkeyAnimStunLandU_joint21[104];
extern u16 dFTDonkeyAnimStunLandU_joint22[90];
extern u16 dFTDonkeyAnimStunLandU_joint24[132];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimStunLandU_joints[] = {
	(u32)dFTDonkeyAnimStunLandU_joint2, /* [0] joint 2 */
	0x00000000, /* [1] NULL */
	(u32)dFTDonkeyAnimStunLandU_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimStunLandU_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimStunLandU_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTDonkeyAnimStunLandU_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimStunLandU_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimStunLandU_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimStunLandU_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimStunLandU_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimStunLandU_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimStunLandU_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimStunLandU_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimStunLandU_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimStunLandU_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimStunLandU_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF01D6, /* [24] END */
};

/* Joint 2 */
u16 dFTDonkeyAnimStunLandU_joint2[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAZ), 12, -111,
	ftAnimSetValRate(FT_ANIM_TRAY), 360, 1902,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX), -804, 0, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -71, -3,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 26), -19,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 2014, -16,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 11), 360, -1867,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAY, 5), -80, 384,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimStunLandU_joint4[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 284, 14, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), -45, -3, 44, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -187, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), 0, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 268, 8,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -80, 156,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 53,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimStunLandU_joint5[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1450, -29, -1557, -1, -1781, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2212, -100,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1508, 264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1326, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1154, 142,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1052, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2322, -153,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -3267, -118,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1833, 314,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2573, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3347, -57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3293, 168,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2534, -102,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2143, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1062, -39, -3051, 243,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2619, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1311, 111,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2134, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2152, 141, -2609, -422,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2417, 163, -1077, 92, -3464, -473,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2251, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1126, -22, -3556, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3294, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1123, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1079, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2234, -17, -1070, 9, -3257, 37,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimStunLandU_joint7[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1041, -35,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1159, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1071, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -777, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -799, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -603, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -820, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -731, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -722, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -800, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -816, -16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTDonkeyAnimStunLandU_joint10[36] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 268, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -402, -33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -268, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -402, 43, 0, 18, 0, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 241, 22, 0, -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -134,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -268, -268, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimStunLandU_joint11[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1467, 32, -1788, 5, -1753, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1075, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1658, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1343, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1179, 132,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1128, -59,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1084, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1567, -65,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1198, -76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1925, -135,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1606, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1561, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1634, -249, -1542, -99, -2060, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2066, -231, -1760, -90, -1772, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2097, -18, -1724, 46, -1743, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -2088, 7, -1569, 30, -1731, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2083, 5, -1551, 17, -1736, -4,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimStunLandU_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -903, -24,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -967, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -898, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -951, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -910, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -479, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -264, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -780, -252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -769, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -595, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -569, 25,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimStunLandU_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 98, 0, 0,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimStunLandU_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTDonkeyAnimStunLandU_joint16[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -404,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 1046, 573,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -404, -36,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), -952,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 11), -404,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTDonkeyAnimStunLandU_joint17[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -94, 28, -99, -7, -515, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 74, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -196, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -70, 221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 158, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 25, -4, 300, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -92, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 129, -141,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -627, -125,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -206, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -315, 47,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -741, -90,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -754, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -203, -107,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -469, 40,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -261, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -202, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -148, -188, -739, 108,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -409, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -374, 18, -579, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -431, 35, -662, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -672, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -302, 145, -513, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -140, 108, -671, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -84, 56, -660, 11, -730, -58,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimStunLandU_joint19[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 548, 44,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 467, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 206, -230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 285, 218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 893, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 949, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 525, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 423, 238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1003, 279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 982, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 932, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 923, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimStunLandU_joint21[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1549, -18, -1464, 8, 1350, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1849, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1538, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1822, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1795, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1724, 94,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1860, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1822, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1614, 117, -1569, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1707, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -1023, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -999, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -983, -203, -1691, 234, 1826, 46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1908, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1406, -280, -1239, 214,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1426, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1263, -58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1491, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1888, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1864, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1409, 17, -1567, -75, 1852, -12,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimStunLandU_joint22[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1650, -11, 1581, 0, 847, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1420, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1518, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 981, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1057, 48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 726, -14,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1394, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1307, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1570, 66, 721, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 2104, 84, 918, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2173, 233, 1313, -108, 933, 388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2570, 170, 1091, -69, 1695, 410,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2514, -68, 1173, 55, 1755, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 2287, -119, 1215, 16, 1508, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2193, -93, 1235, 19, 1390, -117,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimStunLandU_joint24[132] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 667, 44,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 931, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 933, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 619, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 529, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 286, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 271, 410,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1108, 402,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1076, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1077, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1083, 6,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFFB6, 0x001D, 0x013F, 0xFFFE, 0xFF8D, 0x0003, 0x2805, 0x000D, 0xFF7A, 0xFFD2, 0x2809, 0x0015, 0x0179, 0xFFF1, 0x2003, 0x0007, 0x00E1, 0xFFDA, 0x2003, 0x0001, 0x00B5, 0xFFD0, 0x2803, 0x000B, 0xFE96, 0xFFBD, 0x0801, 0x0005, 0x2005, 0x0001, 0xFF4E, 0xFFD9, 0x2805, 0x0008, 0xFED3, 0x0026, 0x0801, 0x0005, 0x2003, 0x0001, 0xFE55, 0xFFCA, 0x2003, 0x0001, 0xFE28, 0xFF45, 0x200B, 0x0001, 0xFCDD, 0xFF97, 0x0157, 0xFFC5, 0x2803, 0x0002, 0xFE2F, 0x00CC, 0x2809, 0x0003, 0x003F, 0xFFC3, 0x2005, 0x0001, 0xFF0E, 0x004D, 0x2805, 0x0002, 0xFFCC, 0x0042, 0x0801, 0x0001, 0x2003, 0x0001, 0xFEEF, 0x0088, 0x200F, 0x0001, 0xFF41, 0x0052, 0xFFF4, 0x0027, 0x001D, 0xFFDE, 0x0000,
};
