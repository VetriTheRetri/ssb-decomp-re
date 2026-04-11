/* AnimJoint data for relocData file 1656 (FTCaptainAnimLandingDownSpecial) */
/* 3216 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimLandingDownSpecial_joint1[22];
extern u16 dFTCaptainAnimLandingDownSpecial_joint2[42];
extern u16 dFTCaptainAnimLandingDownSpecial_joint3[30];
extern u16 dFTCaptainAnimLandingDownSpecial_joint5[64];
extern u16 dFTCaptainAnimLandingDownSpecial_joint6[198];
extern u16 dFTCaptainAnimLandingDownSpecial_joint8[64];
extern u16 dFTCaptainAnimLandingDownSpecial_joint11[34];
extern u16 dFTCaptainAnimLandingDownSpecial_joint12[212];
extern u16 dFTCaptainAnimLandingDownSpecial_joint14[88];
extern u16 dFTCaptainAnimLandingDownSpecial_joint17[10];
extern u16 dFTCaptainAnimLandingDownSpecial_joint18[170];
extern u16 dFTCaptainAnimLandingDownSpecial_joint20[64];
extern u16 dFTCaptainAnimLandingDownSpecial_joint22[166];
extern u16 dFTCaptainAnimLandingDownSpecial_joint23[184];
extern u16 dFTCaptainAnimLandingDownSpecial_joint25[208];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTCaptainAnimLandingDownSpecial_joints[] = {
	(u32)dFTCaptainAnimLandingDownSpecial_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimLandingDownSpecial_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimLandingDownSpecial_joint3, /* [2] joint 3 */
	(u32)dFTCaptainAnimLandingDownSpecial_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTCaptainAnimLandingDownSpecial_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimLandingDownSpecial_joint8, /* [6] joint 8 */
	0x00000000, /* [7] NULL */
	(u32)dFTCaptainAnimLandingDownSpecial_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTCaptainAnimLandingDownSpecial_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimLandingDownSpecial_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTCaptainAnimLandingDownSpecial_joint17, /* [14] joint 17 */
	0x00000000, /* [15] NULL */
	0x00000000, /* [16] NULL */
	(u32)dFTCaptainAnimLandingDownSpecial_joint18, /* [17] joint 18 */
	(u32)dFTCaptainAnimLandingDownSpecial_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTCaptainAnimLandingDownSpecial_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTCaptainAnimLandingDownSpecial_joint23, /* [22] joint 23 */
	(u32)dFTCaptainAnimLandingDownSpecial_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF02D8, /* [25] END */
};

/* Joint 1 */
u16 dFTCaptainAnimLandingDownSpecial_joint1[22] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 2,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 45), -14, -18,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 8), 508, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 33), 997,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimLandingDownSpecial_joint2[42] = {
	ftAnimSetValRate(FT_ANIM_TRAY), 859, -1072,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 685, -12,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), 0, 0,
	ftAnimSetValT(FT_ANIM_TRAX, 41), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 41), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 1), 581,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 1), 673,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 877,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 845, 63,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 20), 952, 93,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 15), 1600, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTCaptainAnimLandingDownSpecial_joint3[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -322, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -322, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -322, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 33), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 13), -272, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 5, 27,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 107,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimLandingDownSpecial_joint5[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -68, 104, -44, -32, 63,
	ftAnimSetValRate(FT_ANIM_ROTX), 190, 124,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 743, 23, -54, -11, -173, -66, 61, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -68, 104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), 350, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -68, 0, 104, 0, -62, 10, -131, 38, 119, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 18), -64, 1, 95, -2, -20, 15, -49, 24, 119, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 189, 0, 0, 0, -31, 47,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimLandingDownSpecial_joint6[198] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1137, -34, -1224, -31, -1231, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1042, -57, -1258, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1256, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1321, -55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1341, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 988, -18, -1309, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1004, 37, -1303, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1063, 110, -1220, 127, -1356, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1226, 235, -1087, 91, -1503, -202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1534, 283, -1038, 8, -1761, -254,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1108, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1794, 178, -2011, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1890, 50, -2110, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1896, 2, -1114, -5, -2119, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -1173, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1895, -2, -2122, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), 1832, 16, -2128, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1851, 20, -2157, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1924, 23, -2260, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1947, -3, -1194, -15, -2293, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1888, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1311, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2244, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2194, 46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2041, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1865, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1823, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1817, 6, -1324, -25, -2024, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 1868, 4, -1484, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2073, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2093, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2138, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1871, 1, -1525, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1872, 0, -1565, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1870, -1, -1604, -39, -2147, -9,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTCaptainAnimLandingDownSpecial_joint8[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1121, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1095, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1035, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -764, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -592, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -478, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -498, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -1066, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1084, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1117, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1114, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -941, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -917, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -807, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -785, 22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimLandingDownSpecial_joint11[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 107, 14, 28,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 360, -108,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 14, 28,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), -102,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 385,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 107, -41,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -89, 124, 52,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTCaptainAnimLandingDownSpecial_joint12[212] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2623, 14, 321, -93, -2580, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -2531, 60, -2531, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 136, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 74, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2461, -33, 5, -2, -2552, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2598, -93, 68, 89, -2503, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 317, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2649, -40, -2520, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2706, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2582, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 352, 37, -2601, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2687, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 571, 43,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2729, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2762, -78, -2732, -86,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3058, -207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2885, -156,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -3433, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 605, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 480, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3274, -189,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -3617, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3523, -69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -3583, 14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 460, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 374, -26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3601, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -3462, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3566, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -3360, 24,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 344, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 315, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3418, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -2824, 64,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 302, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 162, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3338, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -3331, -7,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2764, 55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2616, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 156, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 151, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3338, -7, 147, -4, -2624, -7,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimLandingDownSpecial_joint14[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -538, -88,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -627, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -603, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -521, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -535, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -639, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -714, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -695, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -603, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -597, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -515, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -538, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -930, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -967, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1171, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1157, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1049, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1031, 18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTCaptainAnimLandingDownSpecial_joint17[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 45),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTCaptainAnimLandingDownSpecial_joint18[170] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 135, 49, -109, 39, -1024, -137,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 229, 11, -1322, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -76, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -124, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 235, 21, -155, 50, -1344, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 271, 7, -23, 36, -1526, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 250, -20, -81, -39, -1340, 158,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 265, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1022, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -101, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -30, 14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 302, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 328, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, 1, -980, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -46, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -937, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -943, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1049, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 316, -11, -46, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -127, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 208, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 177, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -79, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -151, -20, -1045, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -765, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 77, 15,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -75, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 93, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -717, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -490, 14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 90, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 100, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 98, 4, 101, 0, -482, 7,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTCaptainAnimLandingDownSpecial_joint20[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1303, 63,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1394, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1403, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1404, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1421, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1252, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1155, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 847, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 817, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 983, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 959, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 603, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 564, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 538, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 528, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTCaptainAnimLandingDownSpecial_joint22[166] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1546, -16, 1727, -18, 1386, 78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1540, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1621, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1557, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1615, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1648, 1, 1542, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1618, -34, 1625, 7, 1745, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1426, -62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1686, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1626, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1700, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1364, -53, 1761, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1302, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1901, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1686, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1753, 7,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1310, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1446, 24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1896, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1693, -28,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1475, 35, 1759, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1754, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1673, 11,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1666, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1574, 11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1766, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1634, -14,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1686, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1779, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1621, -10, 1586, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1607, -3, 1605, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1605, -1, 1782, 2, 1609, 3,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTCaptainAnimLandingDownSpecial_joint23[184] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -309, -111, 304, -89, -925, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -485, -48, 156, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -985, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -981, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -517, -23, 143, 0, -958, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -532, -86, 154, -33, -935, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -690, -14, 75, 4, -857, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -560, 116, 164, 91, -927, -45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -979, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -458, 77, 259, 76,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -367, 6, 403, 15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1003, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -892, 27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -361, 6, 413, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -300, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 446, 15,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -863, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -667, 43,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -286, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -25, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -618, 54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -311, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 463, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 467, -32,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 49, 65, -231, 68,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -92, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 176, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 427, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 172, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 148, -21, -83, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 95, -4, -41, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 175, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 171, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 171, 0, 92, -2, -38, 3,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTCaptainAnimLandingDownSpecial_joint25[208] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1294, 63,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1381, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1384, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1378, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1405, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1312, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1301, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 1223, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1211, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 841, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 788, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 503, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 492, -10,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0107, 0x0055, 0x008E, 0xFFE5, 0xFF26, 0x0036, 0x200F, 0x0003, 0x01BE, 0x0019, 0x0047, 0xFFF3, 0xFF7E, 0xFFFB, 0x200F, 0x0001, 0x01D0, 0x0069, 0x003D, 0xFFD0, 0xFF71, 0x0004, 0x200F, 0x0001, 0x0292, 0x000B, 0xFFE6, 0xFFF5, 0xFF88, 0xFFFC, 0x200F, 0x0001, 0x01E7, 0xFF68, 0x0025, 0x002F, 0xFF67, 0xFFDB, 0x2803, 0x0004, 0x00B6, 0xFFDF, 0x2805, 0x0005, 0x0023, 0xFFFA, 0x2009, 0x0003, 0xFF1C, 0xFFF9, 0x2009, 0x0001, 0xFF17, 0xFFFC, 0x2809, 0x0014, 0xFEE9, 0xFFFF, 0x2003, 0x0001, 0x009A, 0xFFEC, 0x2803, 0x0008, 0x00F5, 0x0019, 0x2005, 0x0001, 0x0020, 0x0000, 0x2805, 0x000D, 0x006D, 0x0006, 0x0801, 0x0007, 0x2003, 0x0001, 0x010E, 0x0019, 0x2803, 0x000A, 0x01EB, 0x000F, 0x0801, 0x0005, 0x2005, 0x0001, 0x0074, 0x0008, 0x2805, 0x0007, 0x0100, 0x0022, 0x0801, 0x0004, 0x200B, 0x0001, 0x01F6, 0x0004, 0xFEE6, 0xFFFA, 0x2803, 0x0006, 0x013C, 0xFFCE, 0x2809, 0x0009, 0xFE84, 0x0009, 0x0801, 0x0002, 0x2005, 0x0001, 0x0123, 0x0020, 0x2805, 0x000A, 0x0149, 0xFFFE, 0x0801, 0x0003, 0x2003, 0x0001, 0x010B, 0xFFD3, 0x2803, 0x0006, 0x0079, 0xFFFB, 0x0801, 0x0002, 0x2009, 0x0001, 0xFE91, 0x000D, 0x2009, 0x0003, 0xFEBA, 0x0007, 0x200F, 0x0001, 0x0076, 0xFFFE, 0x0148, 0xFFFF, 0xFEBF, 0x0004, 0x0000, 0x0000, 0x0000,
};
