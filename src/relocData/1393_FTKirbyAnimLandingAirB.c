/* AnimJoint data for relocData file 1393 (FTKirbyAnimLandingAirB) */
/* 1856 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimLandingAirB_joint1[56];
extern u16 dFTKirbyAnimLandingAirB_joint2[18];
extern u16 dFTKirbyAnimLandingAirB_joint3[32];
extern u16 dFTKirbyAnimLandingAirB_joint5[36];
extern u16 dFTKirbyAnimLandingAirB_joint6[140];
extern u16 dFTKirbyAnimLandingAirB_joint7[14];
extern u16 dFTKirbyAnimLandingAirB_joint9[36];
extern u16 dFTKirbyAnimLandingAirB_joint10[116];
extern u16 dFTKirbyAnimLandingAirB_joint11[14];
extern u16 dFTKirbyAnimLandingAirB_joint13[10];
extern u16 dFTKirbyAnimLandingAirB_joint14[82];
extern u16 dFTKirbyAnimLandingAirB_joint16[8];
extern u16 dFTKirbyAnimLandingAirB_joint18[112];
extern u16 dFTKirbyAnimLandingAirB_joint19[88];
extern u16 dFTKirbyAnimLandingAirB_joint21[122];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimLandingAirB_joints[] = {
	(u32)dFTKirbyAnimLandingAirB_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimLandingAirB_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimLandingAirB_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimLandingAirB_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimLandingAirB_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimLandingAirB_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimLandingAirB_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimLandingAirB_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimLandingAirB_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimLandingAirB_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimLandingAirB_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimLandingAirB_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimLandingAirB_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimLandingAirB_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimLandingAirB_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF019A, /* [21] END */
};

/* Joint 1 */
u16 dFTKirbyAnimLandingAirB_joint1[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 804, 600, 4494, 4096, 4494,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 714, -34,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 360, 4505, 4505, 3072,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 18), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 1200, 3891, 4505, 3891,
	ftAnimSetValRateT(FT_ANIM_TRAY, 8), 600, -1600,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4096, 4096, 4096,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 300, 4915, 2048, 4915,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 0, 600, 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimLandingAirB_joint2[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 18), -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 7), -268,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimLandingAirB_joint3[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAZ), -804, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 20), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -804,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -178, 32,
	ftAnimBlock(0, 15),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 3), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 7), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimLandingAirB_joint5[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 178, -120, -120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 7, 178, -7,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 23), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 18), 178, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 7), 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimLandingAirB_joint6[140] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 0, -1309, -5, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1043, 108,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1107, 74,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 23), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -194, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -303, -106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -446, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1154, 96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 920, -125,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1034, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -945, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -329, 116,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 85, 17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 803, -95,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1133, 597,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 59, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -320, -589,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1945, 584, -1120, -608,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2350, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1536, -353,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1828, -174,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1592, 89,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 7), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2351, 9, -1037, -101,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 2408, 7, -1375, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1549, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1598, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2412, 4, -1387, -12, -1608, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimLandingAirB_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimLandingAirB_joint9[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, -178, 120, -120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -7, -178, 7,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 23), 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 18), -178, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 7), 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimLandingAirB_joint10[116] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 0, 1309, 5, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1083, -137,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1099, -61,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 23), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -230, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -377, -148,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1062, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1228, -138,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1912, -103,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1034, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 913, 28,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1991, -70, -1138, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -2253, -145, -1466, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2415, -77, -1790, -209,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -2350, -8, -1591, 89,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 7), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 948, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1371, 30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2369, -16, -1549, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -2408, -7, -1598, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2412, -4, 1391, 19, -1608, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimLandingAirB_joint11[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 29), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimLandingAirB_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimLandingAirB_joint14[82] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1648, -2, -1413, 0, 1608, 3,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1431, 87,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1234, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1424, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1351, -61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1619, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1344, 70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1486, -33,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1214, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1235, -52,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1518, -56, 1665, 77,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 11), 1845,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1636, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1289, -31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 9), -1305,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -1632, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1305, 1845,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimLandingAirB_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimLandingAirB_joint18[112] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 59, 3, 171, 0, -2398, 4,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 63, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -2810, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -145, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -254, -96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -457, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 40, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 7, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2874, -59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3015, -103,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -468, 34, 12, -54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -194, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -309, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3183, -151,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -3310, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -167, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -173, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -325, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -311, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3310, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -3313, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -309, 1, -176, -3, -3313, 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimLandingAirB_joint19[88] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 39, 2, 194, 0, 0, 3,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -125, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 317, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -187, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -253, -58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1, 45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -160, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -97, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -83, 39, 342, 0, 38, 72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 47, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 237, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 303, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 303, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 302, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 34, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 27, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, -6, 302, 0, 233, -4,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimLandingAirB_joint21[122] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 29), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000, 0x280E, 0xFFC5, 0xFFFD, 0xFF55, 0x0000, 0x0332, 0x0004, 0x4F00, 0x1000, 0x1000, 0x1000, 0x2809, 0x000F, 0x0159, 0xFFC0, 0x2805, 0x0011, 0xFFD2, 0x0007, 0x2003, 0x000A, 0x0053, 0x0030, 0x2003, 0x0001, 0x0081, 0x0021, 0x2803, 0x0006, 0x0138, 0x002A, 0x0801, 0x0004, 0x2009, 0x0001, 0x011E, 0xFFCD, 0x2809, 0x0002, 0x00C6, 0xFF96, 0x0801, 0x0001, 0x2007, 0x0001, 0x0163, 0x0008, 0xFFD9, 0x003F, 0x2805, 0x0002, 0x00B6, 0x0029, 0x2803, 0x0003, 0x0128, 0x0019, 0x2009, 0x0001, 0x001D, 0xFF6B, 0x2809, 0x0005, 0xFFA0, 0x0000, 0x0801, 0x0001, 0x2005, 0x0001, 0x00A2, 0xFFE7, 0x2805, 0x0008, 0x00AD, 0x0006, 0x2003, 0x0001, 0x0142, 0x0014, 0x2803, 0x0007, 0x0137, 0xFFFE, 0x0801, 0x0002, 0x2009, 0x0001, 0xFF9F, 0x0000, 0x2009, 0x0004, 0xFFA0, 0x0000, 0x200F, 0x0001, 0x0135, 0xFFFF, 0x00B0, 0x0003, 0xFF9D, 0xFFFD, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
