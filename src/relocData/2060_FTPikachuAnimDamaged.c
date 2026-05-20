/* AnimJoint data for relocData file 2060 (FTPikachuAnimDamaged) */
/* 1552 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimDamaged_joint1[18];
extern u16 dFTPikachuAnimDamaged_joint2[28];
extern u16 dFTPikachuAnimDamaged_joint3[32];
extern u16 dFTPikachuAnimDamaged_joint5[40];
extern u16 dFTPikachuAnimDamaged_joint6[58];
extern u16 dFTPikachuAnimDamaged_joint7[16];
extern u16 dFTPikachuAnimDamaged_joint8[32];
extern u16 dFTPikachuAnimDamaged_joint9[12];
extern u16 dFTPikachuAnimDamaged_joint10[28];
extern u16 dFTPikachuAnimDamaged_joint11[28];
extern u16 dFTPikachuAnimDamaged_joint13[28];
extern u16 dFTPikachuAnimDamaged_joint14[40];
extern u16 dFTPikachuAnimDamaged_joint16[36];
extern u16 dFTPikachuAnimDamaged_joint17[58];
extern u16 dFTPikachuAnimDamaged_joint19[24];
extern u16 dFTPikachuAnimDamaged_joint21[62];
extern u16 dFTPikachuAnimDamaged_joint22[66];
extern u16 dFTPikachuAnimDamaged_joint24[36];
extern u16 dFTPikachuAnimDamaged_joint25[62];
extern u16 dFTPikachuAnimDamaged_joint26[20];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTPikachuAnimDamaged_joints[] = {
	(AObjEvent32 *)dFTPikachuAnimDamaged_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTPikachuAnimDamaged_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTPikachuAnimDamaged_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTPikachuAnimDamaged_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTPikachuAnimDamaged_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTPikachuAnimDamaged_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTPikachuAnimDamaged_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTPikachuAnimDamaged_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTPikachuAnimDamaged_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTPikachuAnimDamaged_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTPikachuAnimDamaged_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTPikachuAnimDamaged_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTPikachuAnimDamaged_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTPikachuAnimDamaged_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTPikachuAnimDamaged_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTPikachuAnimDamaged_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTPikachuAnimDamaged_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTPikachuAnimDamaged_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTPikachuAnimDamaged_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTPikachuAnimDamaged_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTPikachuAnimDamaged_joint1[18] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 942, 48,
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 21), -3217,
	ftAnimLoop(0x6800, -34),
};

/* Joint 2 */
u16 dFTPikachuAnimDamaged_joint2[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 54,
	ftAnimSetValRate(FT_ANIM_ROTZ), -317, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -753, 0, -240, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 126, -6, -47, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -15, -4, 57, -15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 54, -317,
	ftAnimLoop(0x6800, -54),
};

/* Joint 3 */
u16 dFTPikachuAnimDamaged_joint3[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -68, -140, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 166, 21, 303, -4, 53, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 210, -14, -200, -27, 43, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -68, -140, 0,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimDamaged_joint5[40] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 155, -47, 495,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 155, -246, -47, -36, 495, -22,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -31, -115, -75, -98, 477, -116,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 78, 98, -113, 14, 417, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 155, -47, 495,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimDamaged_joint6[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 917, 0, -170, -8, -661, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 915, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -194, 73, -667, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 272, 52, -539, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -626, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 122, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 17, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -144, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -645, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -656, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 917, 0, -174, -10, -662, -1,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimDamaged_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, -3,
	ftAnimLoop(0x6800, -30),
};

/* Joint 8 */
u16 dFTPikachuAnimDamaged_joint8[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 86, -241, -217,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 129, 18, -58, 14, 11, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 337, -2, -45, -12, -65, -15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 86, -241, -217,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimDamaged_joint9[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 40, -29, 2414, 5, 29, 491,
	ftAnimBlock(0, 21),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimDamaged_joint10[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -201, 52, 117,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -201, 16, 52, -17, 117, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 53, -219, -21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -201, 52, 117,
	ftAnimLoop(0x6800, -54),
};

/* Joint 11 */
u16 dFTPikachuAnimDamaged_joint11[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -166, -144, -146,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -166, 37, -144, 0, -146, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 410, -133, -351,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -166, -144, -146,
	ftAnimLoop(0x6800, -54),
};

/* Joint 13 */
u16 dFTPikachuAnimDamaged_joint13[28] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -457, -36, 212,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -457, 52, -36, -71, 212, 24,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -398, -117, 240,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), -457, -36, 212,
	ftAnimLoop(0x6800, -54),
};

/* Joint 14 */
u16 dFTPikachuAnimDamaged_joint14[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 498, -2, 997, -2, 751, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 18), 517, -11, 766, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 1082, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1372, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 1114, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1023, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 492, -8, 994, -9, 745, -6,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimDamaged_joint16[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -631, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -284, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, -3,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimDamaged_joint17[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1421, -13, -1426, 62, 990, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1221, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1381, 43, 817, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1684, 92, 636, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1938, 31, -1454, -40, 893, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1379, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1873, -37, 869, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 1547, -48, 992, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1422, -41, -1425, -15, 989, 0,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimDamaged_joint19[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 549, 28,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 867, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 845, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 832, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 554, -92,
	ftAnimLoop(0x6800, -46),
};

/* Joint 21 */
u16 dFTPikachuAnimDamaged_joint21[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -18, 17, -14, 101, 196, -45,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 48, -12, 73, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 289, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 252, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -42, 23, 34, -27, 201, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 363, 1, 379, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 87, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 77, -24,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 199, -63, 120, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -18, -72, -13, -30, 195, 24,
	ftAnimLoop(0x6800, -120),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimDamaged_joint22[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1988, 40, 1009, 69, 178, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1868, 5, 1217, 85, 91, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1955, 24, 1521, 47, 443, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1724, 73, 1503, -4, 1055, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1516, 87, 1494, -42, 1324, 79,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1007, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1200, -14, 1529, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1600, -131, 896, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1988, -129, 1010, 1, 182, -237,
	ftAnimLoop(0x6800, -128),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimDamaged_joint24[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 882, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 874, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1027, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 848, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 795, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 806, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 937, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 884, -17,
	ftAnimLoop(0x6800, -70),
};

/* Joint 25 */
u16 dFTPikachuAnimDamaged_joint25[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1579, 46, 1576, 23, 1882, -56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1523, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1631, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1718, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 2041, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 2014, -47, 1350, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1757, -30, 1580, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1834, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1670, -4, 1708, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1551, -15, 1947, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1582, -83, 1576, 8, 1883, -21,
	ftAnimLoop(0x6800, -120),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTPikachuAnimDamaged_joint26[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -35, 8,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 158, 203, 382,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 0, -35, 8,
	ftAnimLoop(0x6800, -38),
};
