/* AnimJoint data for relocData file 1563 (FTCaptainAnimDownForwardU) */
/* 2736 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimDownForwardU_joint1[54];
extern u16 dFTCaptainAnimDownForwardU_joint2[52];
extern u16 dFTCaptainAnimDownForwardU_joint3[24];
extern u16 dFTCaptainAnimDownForwardU_joint5[66];
extern u16 dFTCaptainAnimDownForwardU_joint6[140];
extern u16 dFTCaptainAnimDownForwardU_joint7[78];
extern u16 dFTCaptainAnimDownForwardU_joint8[16];
extern u16 dFTCaptainAnimDownForwardU_joint9[40];
extern u16 dFTCaptainAnimDownForwardU_joint11[20];
extern u16 dFTCaptainAnimDownForwardU_joint12[112];
extern u16 dFTCaptainAnimDownForwardU_joint13[48];
extern u16 dFTCaptainAnimDownForwardU_joint14[26];
extern u16 dFTCaptainAnimDownForwardU_joint15[14];
extern u16 dFTCaptainAnimDownForwardU_joint17[38];
extern u16 dFTCaptainAnimDownForwardU_joint18[132];
extern u16 dFTCaptainAnimDownForwardU_joint20[48];
extern u16 dFTCaptainAnimDownForwardU_joint22[110];
extern u16 dFTCaptainAnimDownForwardU_joint23[136];
extern u16 dFTCaptainAnimDownForwardU_joint25[162];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTCaptainAnimDownForwardU_joints[] = {
	(u32)dFTCaptainAnimDownForwardU_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimDownForwardU_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimDownForwardU_joint3, /* [2] joint 3 */
	(u32)dFTCaptainAnimDownForwardU_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTCaptainAnimDownForwardU_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimDownForwardU_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimDownForwardU_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimDownForwardU_joint9, /* [8] joint 9 */
	(u32)dFTCaptainAnimDownForwardU_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTCaptainAnimDownForwardU_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimDownForwardU_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimDownForwardU_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimDownForwardU_joint15, /* [14] joint 15 */
	(u32)dFTCaptainAnimDownForwardU_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTCaptainAnimDownForwardU_joint18, /* [17] joint 18 */
	(u32)dFTCaptainAnimDownForwardU_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTCaptainAnimDownForwardU_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTCaptainAnimDownForwardU_joint23, /* [22] joint 23 */
	(u32)dFTCaptainAnimDownForwardU_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF0275, /* [25] END */
};

/* Joint 1 */
u16 dFTCaptainAnimDownForwardU_joint1[54] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), 840, 1920,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 2938,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), 1323, 2062,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 0, 330,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 206, -95,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 8), 3303, 1095,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), -157, -191,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 13), 4200,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 51, 66,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 8), 0, -25,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 4200,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimDownForwardU_joint2[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 17, 420, -23,
	ftAnimSetValRate(FT_ANIM_ROTZ), 268, 36,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 36), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 160, 0, -9, 840, 144, -23, -1,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 20), 3216, 35,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 600, -480, -25, -3,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 240, 192, -28, -4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 960, 518, -33, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 3216, 0, 1600, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTCaptainAnimDownForwardU_joint3[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 36), 4, -76, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, 2, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 107, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimDownForwardU_joint5[66] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -72, 0, -74,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 205, 5, 39, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 375, 13, 0, -1, 0, 1, -57, -66, 110, 170,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 20), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 536, -5,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -70, 39, -66, -24, 96, -3,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 19, 58, -69, -63, 108, 19,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 17, -5, -162, 11, 125, -17,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 0, -31, 47,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), 189, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimDownForwardU_joint6[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1605, -13, 1464, -4, -1128, -101,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -1712, 91, 1600, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1229, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1560, -342,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2172, -266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1563, 94, 1662, 42, -2447, -76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1540, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1535, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2101, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1956, 77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2014, -26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1527, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -1370, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2044, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2180, -97,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1558, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1583, 12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2316, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2263, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2252, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2206, 62,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1597, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1658, -40,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1377, -7, -2088, 88,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1370, 1, -2114, -28,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1618, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1368, 1, 1602, -16, -2132, -17,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimDownForwardU_joint7[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1129, -47,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -953, 290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -591, 438,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -76, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -328, -320,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -912, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -887, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -890, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -814, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -368, 282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -287, -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -484, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -796, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTCaptainAnimDownForwardU_joint8[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 406, 68, 69,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), -89, -388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 22), -3, -33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 14), -781,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTCaptainAnimDownForwardU_joint9[40] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -178, 60,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -134, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 20), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 0, 58, 0, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 402, 26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 26), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 402, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -187, -25, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimDownForwardU_joint11[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -357, 369,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 178, 55,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 21), -134, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 11), 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimDownForwardU_joint12[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1089, 48, 1324, -34, 1335, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1537, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1266, -19, 1172, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1241, -13, 1110, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 1161, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1111, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1112, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1062, -20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1606, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 1435, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1406, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1302, -43,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1138, 14, 1039, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1593, 120,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1506, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1271, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1445, 20,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1714, 121,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2140, 72,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1504, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1493, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1479, -14, 1464, 18, 2200, 60,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimDownForwardU_joint13[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1185, 31,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -878, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -688, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -747, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -787, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -520, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -432, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -749, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -862, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1084, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, 59,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimDownForwardU_joint14[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 449, 44, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 398, -2, 391, 7, -353, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 379, -4, 227, -4, 79, 15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 270, 275, 62,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTCaptainAnimDownForwardU_joint15[14] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 85, 49, 38,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1538, -1003, 119,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 36), 85, 49, 38,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimDownForwardU_joint17[38] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 151, 62, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -402, 0, 54, -1, -179, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 145, 26, 31, -2, -119, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 170, -8, 5, -1, -39, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 0, 5, 0, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTCaptainAnimDownForwardU_joint18[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -765, 5, 9, -201, 88, -74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -432, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -633, 198, -172, -289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -362, 250, -565, -361,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1023, -86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -50, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -269, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -35, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -37, -18, -1067, -86,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -83, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -79, -33, -1195, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 83, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1144, 80,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1050, -21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -78, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -18, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1077, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -1000, 37,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 68, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 154, 16,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -10, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 70, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -945, 59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -483, 17,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 169, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 181, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, 9, 70, 0, -472, 11,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTCaptainAnimDownForwardU_joint20[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 111, 363,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1182, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1194, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1160, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1081, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1332, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1311, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 556, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 498, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 460, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTCaptainAnimDownForwardU_joint22[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1648, 82, -1530, -30, -1290, -120,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1714, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), -1578, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1430, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1288, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1332, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1544, -103, -1751, -87,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1385, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1888, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1823, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1952, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1440, -52, -1946, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -1608, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -1637, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1623, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1729, -6,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1580, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1563, 16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1569, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1568, 1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1548, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1533, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1735, -6, -1566, 1, -1528, 5,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTCaptainAnimDownForwardU_joint23[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -193, -14, -87, -55, -457, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1038, -66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -23, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -97, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -25, 53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -98, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1079, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -98, -82, -1243, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -16, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1186, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -49, 27, -1042, 70,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 13, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1044, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1068, 3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 29, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -171, 22,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1048, 55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -479, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 13, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 235, -14,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -145, 27, -402, 72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -127, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 152, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 221, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 111, -5,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -100, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -85, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, 7, 110, -1, -76, 8,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTCaptainAnimDownForwardU_joint25[162] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 964, 50,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1161, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1171, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1185, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1096, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1275, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1304, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1302, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1230, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 595, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 559, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, -18,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFAAD, 0x0007, 0xF8F4, 0xFFF9, 0xFABC, 0xFFC9, 0x2805, 0x0018, 0xF8D5, 0x000A, 0x200B, 0x0004, 0xF9DF, 0xFFB7, 0xF98F, 0xFFCC, 0x200B, 0x0001, 0xF99A, 0x0004, 0xF961, 0xFF9B, 0x2803, 0x0004, 0xFA5B, 0xFFF1, 0x2009, 0x0001, 0xF8C4, 0xFFF7, 0x2009, 0x0001, 0xF94D, 0x0020, 0x2009, 0x0002, 0xF8FA, 0xFFF4, 0x200B, 0x0001, 0xFA2F, 0xFFCE, 0xF8ED, 0xFFF3, 0x2809, 0x000E, 0xF7AB, 0xFFDE, 0x2003, 0x000A, 0xF9A8, 0x004B, 0x2003, 0x0001, 0xF9F6, 0x003F, 0x2803, 0x0005, 0xFA31, 0x0015, 0x0801, 0x0003, 0x200D, 0x0001, 0xF8E0, 0xFFFA, 0xF787, 0xFFFF, 0x2809, 0x0008, 0xF864, 0x0016, 0x2805, 0x000A, 0xF851, 0xFFFA, 0x0801, 0x0001, 0x2003, 0x0001, 0xFA30, 0x0000, 0x2803, 0x0008, 0xFA41, 0x0013, 0x0801, 0x0006, 0x2009, 0x0001, 0xF879, 0x0014, 0x2009, 0x0001, 0xF88D, 0x0013, 0x200F, 0x0001, 0xFA59, 0x0018, 0xF84B, 0xFFFA, 0xF8A0, 0x0012, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
