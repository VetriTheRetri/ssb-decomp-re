/* AnimJoint data for relocData file 2031 (FTPikachuAnimLandingAirF) */
/* 2528 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimLandingAirF_joint1[42];
extern u16 dFTPikachuAnimLandingAirF_joint2[44];
extern u16 dFTPikachuAnimLandingAirF_joint3[58];
extern u16 dFTPikachuAnimLandingAirF_joint5[46];
extern u16 dFTPikachuAnimLandingAirF_joint6[112];
extern u16 dFTPikachuAnimLandingAirF_joint7[30];
extern u16 dFTPikachuAnimLandingAirF_joint8[50];
extern u16 dFTPikachuAnimLandingAirF_joint9[10];
extern u16 dFTPikachuAnimLandingAirF_joint10[34];
extern u16 dFTPikachuAnimLandingAirF_joint11[34];
extern u16 dFTPikachuAnimLandingAirF_joint13[46];
extern u16 dFTPikachuAnimLandingAirF_joint14[84];
extern u16 dFTPikachuAnimLandingAirF_joint16[32];
extern u16 dFTPikachuAnimLandingAirF_joint17[112];
extern u16 dFTPikachuAnimLandingAirF_joint19[52];
extern u16 dFTPikachuAnimLandingAirF_joint21[116];
extern u16 dFTPikachuAnimLandingAirF_joint22[112];
extern u16 dFTPikachuAnimLandingAirF_joint24[56];
extern u16 dFTPikachuAnimLandingAirF_joint25[142];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimLandingAirF_joints[] = {
	(u32)dFTPikachuAnimLandingAirF_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimLandingAirF_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimLandingAirF_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimLandingAirF_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimLandingAirF_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimLandingAirF_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimLandingAirF_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimLandingAirF_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimLandingAirF_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimLandingAirF_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimLandingAirF_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimLandingAirF_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimLandingAirF_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimLandingAirF_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimLandingAirF_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimLandingAirF_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimLandingAirF_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimLandingAirF_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimLandingAirF_joint25, /* [24] joint 25 */
	0xFFFF0268, /* [25] END */
};

/* Joint 1 */
u16 dFTPikachuAnimLandingAirF_joint1[42] = {
	ftAnimSetVal(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 476, -187, 4915, 2867, 5324,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), -26, 33, -28, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 1006, -108, 2457, 6144, 2867,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 705, -187, 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4096, 4096, 4096,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 722, 93,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), -29, 288,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 675, 108,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimLandingAirF_joint2[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 673, -85, 717,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 673, -85, 717,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 673, 1, -85, 0, 717, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 684, -25, -90, 9, -24, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 520, -157, -30, 53, 29, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 23, 133, 32,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPikachuAnimLandingAirF_joint3[58] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 138,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -6, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 138, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -6, 24,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 137, -16, -13, -9, 49, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 41, -34, -66, 3, -5, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 16, 0, 16, 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 107, -3, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -13, 0, -2,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimLandingAirF_joint5[46] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), -68,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 346, 256,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 4), -68,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), 346, 256,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), -68, 59,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), 346, 256,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), -8, 38,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), 382, 322,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), -103, 246,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 268, -111, -39, -102, 441, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 324, -62, 313,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTPikachuAnimLandingAirF_joint6[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1126, 36, -1767, -45, 850, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -940, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 604, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1701, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1568, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -938, 7, -1615, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -926, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1596, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1886, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -910, 153,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -305, 127,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1876, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1628, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -364, -145, 479, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -837, -80, 760, 37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1500, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -758, 2, -1190, 11, 682, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -833, -258, -1476, -288, 752, 230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1275, -4, -1768, -183, 1143, 321,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -841, 434, -1842, -74, 1396, 253,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimLandingAirF_joint7[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -10, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -211,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -432,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimLandingAirF_joint8[50] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -2,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -138, -76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -138, -76,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -8, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -10, 6, -205, 45, -48, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 36, -107, 131, 33, -252, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -654, -6, -2, -47, -52, 43,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -2, -163, 20,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimLandingAirF_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimLandingAirF_joint10[34] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -184, 169, 460,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -184, 169, 460,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -184, 169, 460,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 728, 75, 198,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 22, -20, -56,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTPikachuAnimLandingAirF_joint11[34] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 330, -391, -77,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 330, -391, -77,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 330, -391, -77,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 743, -177, -35,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -40, 47, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTPikachuAnimLandingAirF_joint13[46] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX), -320,
	ftAnimSetValBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 42, 307,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 4), -320,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 42, 307,
	ftAnimSetValRateT(FT_ANIM_TRAX, 4), -320, 75,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 42, 307,
	ftAnimSetValRateT(FT_ANIM_TRAX, 4), -244, -1,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 34, 375,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), -156, -43,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -321, -150, -74, -184, 274, -117,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -324, -62, 313,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTPikachuAnimLandingAirF_joint14[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 908, -72, 1791, -57, 948, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 780, 21, 855, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1809, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1880, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1756, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1649, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1831, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 803, 11, 812, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 797, 51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 803, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2017, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1988, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1670, -153, 880, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1726, 30, 830, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1743, -10, 1073, 235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 0, 1705, -38, 1302, 228,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimLandingAirF_joint16[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -122, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimLandingAirF_joint17[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1773, -73, -1464, 0, 1060, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1136, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1208, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1788, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1744, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1849, -20, 1112, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1785, -157, 883, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2165, -309, -1259, -179, 926, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1908, -151,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 808, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2404, -164,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1994, 357,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1871, 109,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1415, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 833, -90,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 526, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1620, 371,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1251, 194, -1360, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1484, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1230, -58, 549, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1438, -88, 851, 275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1545, -106, -1605, -121, 1186, 334,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimLandingAirF_joint19[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 837, -43,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 847, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 984, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 671, -448,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 81, -332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, 302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 611, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 657, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 881, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 947, 66,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPikachuAnimLandingAirF_joint21[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1273, 153, 37, -36, 370, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -887, 162,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 439, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 96, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 187, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 137, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -688, 84,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -424, 701,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 47, 0, 361, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 336, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 684, 628, 383, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 832, -15, 645, 144,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 406, -311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 652, -339,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -300, -359,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 167, -166, 49, -234,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 14, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -63, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -566, -113,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -164, 164,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 111, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 137, 7, -221, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1, 162, 125, -11, -349, -128,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimLandingAirF_joint22[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1309, -1, 1638, -54, 1201, 72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1411, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1456, 2, 1446, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1499, -8, 1346, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1476, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1530, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1571, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1548, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1492, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1240, -242,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1396, 208, 1346, -138,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2364, 270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 965, -39, 1271, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1431, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1396, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1258, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2369, -225,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1547, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1254, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1525, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1294, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1643, 94, 1355, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1735, 92, 1660, 135, 1412, 56,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimLandingAirF_joint24[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1003, -155,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 618, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 545, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 734, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 553, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1039, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 871, -237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 259, -278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 415, 344,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 695, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 881, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 814, -67,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimLandingAirF_joint25[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1657, 85, 1680, 27, 1745, 71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1841, -129,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1787, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1958, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1867, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2012, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1987, -70, 1653, -176,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1186, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1870, -112, 1726, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1762, -248, 1733, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1373, 127, 1371, -93,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1949, 269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2016, 324, 1064, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1764, -157, 1480, 103,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2083, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1710, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1708, 1, 1415, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1768, -15, 1284, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1676, -78, 1588, -188, 1260, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1611, -65, 1333, -255, 1137, -123,
	ftAnimEnd(),
	0x380E, 0xFFF2, 0x0000, 0xFFFD, 0x380F, 0x0004, 0xFFF2, 0x0000, 0xFFFD, 0x200F, 0x0004, 0xFFF2, 0xFFAF, 0x0000, 0x001D, 0xFFFD, 0xFFB4, 0x380F, 0x0004, 0xFD66, 0x00EE, 0xFD9C, 0x380F, 0x0004, 0xFFF2, 0x0000, 0xFFFD, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
