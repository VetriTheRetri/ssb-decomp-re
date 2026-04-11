/* AnimJoint data for relocData file 1644 (FTCaptainAnimLandingAirB) */
/* 1424 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimLandingAirB_joint1[38];
extern u16 dFTCaptainAnimLandingAirB_joint2[26];
extern u16 dFTCaptainAnimLandingAirB_joint4[26];
extern u16 dFTCaptainAnimLandingAirB_joint5[76];
extern u16 dFTCaptainAnimLandingAirB_joint6[32];
extern u16 dFTCaptainAnimLandingAirB_joint7[16];
extern u16 dFTCaptainAnimLandingAirB_joint10[18];
extern u16 dFTCaptainAnimLandingAirB_joint11[90];
extern u16 dFTCaptainAnimLandingAirB_joint12[40];
extern u16 dFTCaptainAnimLandingAirB_joint13[10];
extern u16 dFTCaptainAnimLandingAirB_joint16[16];
extern u16 dFTCaptainAnimLandingAirB_joint17[72];
extern u16 dFTCaptainAnimLandingAirB_joint19[24];
extern u16 dFTCaptainAnimLandingAirB_joint21[66];
extern u16 dFTCaptainAnimLandingAirB_joint22[48];
extern u16 dFTCaptainAnimLandingAirB_joint24[64];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTCaptainAnimLandingAirB_joints[] = {
	(u32)dFTCaptainAnimLandingAirB_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimLandingAirB_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimLandingAirB_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimLandingAirB_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimLandingAirB_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimLandingAirB_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimLandingAirB_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimLandingAirB_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimLandingAirB_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimLandingAirB_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimLandingAirB_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimLandingAirB_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimLandingAirB_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimLandingAirB_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimLandingAirB_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimLandingAirB_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF014E, /* [24] END */
};

/* Joint 1 */
u16 dFTCaptainAnimLandingAirB_joint1[38] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), -415,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_TRAY), 0, -4, 793, -100,
	ftAnimSetValBlock(FT_ANIM_TRAX), -69,
	ftAnimSetValT(FT_ANIM_TRAX, 8), -69,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 8), 0, -4, -448, 110,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 660, -192,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 6), 655, 291,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 22), 1600, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX, 22), 0, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimLandingAirB_joint2[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -331, -55, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -378, 7, -55, 6, -57, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -215, 17, 42, 7, -23, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 0, 107, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTCaptainAnimLandingAirB_joint4[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 374, 363, 416,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 431, -6, 356, -8, 426, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 265, -11, 233, -16, 266, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 189, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimLandingAirB_joint5[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1709, -81, -1066, 22, 1881, 58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 1979, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -1374, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1939, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1938, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -1552, 26,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1969, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1466, -106,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1382, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1565, -45,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1524, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1355, -7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1358, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1086, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1368, -13, -1614, -48, 1084, -2,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimLandingAirB_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -752, -52,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -788, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -745, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -824, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -884, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -814, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimLandingAirB_joint7[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -265, 1, -311, 394, 1, 50,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), -698, -86, -445, 451, 38, 1,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTCaptainAnimLandingAirB_joint10[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 406, 540, 260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 315, -13, 32, -18, -22, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimLandingAirB_joint11[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1641, 54, 1330, 0, -991, 64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1476, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1386, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -952, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -999, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1030, 51,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1493, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1658, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -977, 48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -951, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1361, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1678, -45,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1655, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1473, -19,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -958, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1002, -15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1718, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1737, -19, 1464, -9, -1016, -13,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimLandingAirB_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -569, -77,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -629, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -552, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -240, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -320, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -672, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -703, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -1027, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimLandingAirB_joint13[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 584, -174, -362,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 270, 275, 62,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimLandingAirB_joint16[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1674, 0, 0, 73, 29, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 1538, -1003, 119, 85, 49, 38,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimLandingAirB_joint17[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 301, 47, 127, 71, -702, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 412, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -628, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 289, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 283, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 26, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 393, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 111, 4,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 28, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 69, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -607, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -474, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 117, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 190, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, 0, 70, 0, -472, 2,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimLandingAirB_joint19[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1200, 27,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), 541, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 503, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 452, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimLandingAirB_joint21[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -181, -83, -31, 4, -42, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 18, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -35, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -375, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -359, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -114, 1,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 13, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -41, -1,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -112, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -127, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -22, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 77, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -126, 1, -42, 0, 80, 2,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimLandingAirB_joint22[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1513, -42, 1229, -9, 1479, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 1321, 25, 1467, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -1573, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1562, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -1443, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1346, 22, 1463, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 1502, 1, 1546, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1443, 0, 1502, 0, 1547, 1,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimLandingAirB_joint24[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1294, 46,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), 538, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 519, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 512, -6,
	ftAnimEnd(),
	0x0000, 0x200E, 0xF9A8, 0x001E, 0xF9AA, 0x0001, 0x03A1, 0xFFE5, 0x2803, 0x000D, 0xF9B9, 0xFFF1, 0x2809, 0x001D, 0x0504, 0x0007, 0x2005, 0x000C, 0xF933, 0xFFDB, 0x2005, 0x0001, 0xF90E, 0xFFDD, 0x2805, 0x0010, 0xF851, 0x0000, 0x2003, 0x0001, 0xF9AB, 0xFFF4, 0x2003, 0x000F, 0xF9ED, 0x0003, 0x200F, 0x0001, 0xF9F0, 0x0002, 0xF851, 0x0000, 0x0508, 0x0004, 0x0000,
};
