/* AnimJoint data for relocData file 1964 (FTPikachuAnimRunBrake) */
/* 2896 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimRunBrake_joint1[54];
extern u16 dFTPikachuAnimRunBrake_joint2[70];
extern u16 dFTPikachuAnimRunBrake_joint3[62];
extern u16 dFTPikachuAnimRunBrake_joint5[46];
extern u16 dFTPikachuAnimRunBrake_joint6[102];
extern u16 dFTPikachuAnimRunBrake_joint7[38];
extern u16 dFTPikachuAnimRunBrake_joint8[70];
extern u16 dFTPikachuAnimRunBrake_joint9[10];
extern u16 dFTPikachuAnimRunBrake_joint10[54];
extern u16 dFTPikachuAnimRunBrake_joint11[56];
extern u16 dFTPikachuAnimRunBrake_joint13[54];
extern u16 dFTPikachuAnimRunBrake_joint14[98];
extern u16 dFTPikachuAnimRunBrake_joint16[40];
extern u16 dFTPikachuAnimRunBrake_joint17[132];
extern u16 dFTPikachuAnimRunBrake_joint19[46];
extern u16 dFTPikachuAnimRunBrake_joint21[128];
extern u16 dFTPikachuAnimRunBrake_joint22[122];
extern u16 dFTPikachuAnimRunBrake_joint24[42];
extern u16 dFTPikachuAnimRunBrake_joint25[172];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimRunBrake_joints[] = {
	(u32)dFTPikachuAnimRunBrake_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimRunBrake_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimRunBrake_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimRunBrake_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimRunBrake_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimRunBrake_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimRunBrake_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimRunBrake_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimRunBrake_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimRunBrake_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimRunBrake_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimRunBrake_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimRunBrake_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimRunBrake_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimRunBrake_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimRunBrake_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimRunBrake_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimRunBrake_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimRunBrake_joint25, /* [24] joint 25 */
	0xFFFF02BA, /* [25] END */
};

/* Joint 1 */
u16 dFTPikachuAnimRunBrake_joint1[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), -26, 33, 953, -94,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX), -28, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 20), -26, 33,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 803, -310, -109, -17,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 680, -114,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 3), -109,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 680, -1, -109, 167,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 678, -2, 53, 302,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 678, -6, 53, 101,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 675, -9, 108, 155,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 675, 108,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimRunBrake_joint2[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 741, -49, 17,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 783, 0, -44, 1, 9, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 740, -137, -41, 0, 4, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 71, -77, -48, 0, 24, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 71, 25, -48, 0, 24, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 287, 16, -56, 0, 17, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 141, -61, -46, 54, 21, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 23, 0, 133, 0, 32, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 23, 133, 32,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimRunBrake_joint3[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -198, 32, 3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 72, 71, 18, -3, 15, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 301, 26, 11, 0, 12, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 301, -24, 11, 0, 12, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 91, -60, 11, 0, 11, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 91, -30, 11, -3, 11, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -13, -28, 0, -3, -2, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -13, 0, -2,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimRunBrake_joint5[46] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 267, 97, 442,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 204, -70, -22, -199, 424, 58,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 205, 1, -78, -56, 494, 46,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 205, 30, -82, -46, 474, -39,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 238, 132, -128, 22, 452, -180,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 324, -62, 313,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimRunBrake_joint6[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -196, -32, 4, -1107, -53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 85, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 357, -240, -1226, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 125, -111, -1221, 257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 135, -9, 184, 44, -710, 208,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 79, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 106, -5, -803, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -710, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 297, 61,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 72, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 200, 48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -717, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -670, 92,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 371, 91,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 794, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -549, 101,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -195, 33,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 235, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 9, 236, 0, -202, -6,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimRunBrake_joint7[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -543, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimRunBrake_joint8[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -326, -6, -41,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -360, -15, -14, 4, -44, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -394, 98, 15, 4, -43, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 148, 62, 10, -1, -10, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 148, -2, 2, 1, -21, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 128, -5, 23, 6, -12, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 128, -23, 23, 1, -12, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -2, -31, -163, -67, 20, 14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2, -163, 20,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimRunBrake_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimRunBrake_joint10[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -280, -6, -10,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -280, 82, -6, 2, -10, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 86, 19, 2, 0, 2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -44, 28, 0, 2, 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 406, 104, 29, 7, -32, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 406, -89, 29, -6, -32, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimRunBrake_joint11[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -312, -8, -1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -312, 76, -8, 3, -1, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 29, 27, 9, 0, 3, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -88, 28, 0, 1, 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 348, 84, 24, 4, -36, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 348, -76, 24, -5, -36, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimRunBrake_joint13[54] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -302, 83, 399,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -321, 182, 109, -59, 385, 52,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -200, 216, 50, -276, 428, 145,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -180, 17, -69, -123, 480, 51,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -181, -37, -83, -5, 483, 25,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -221, -160, -76, 23, 508, -190,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -324, -62, 313,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimRunBrake_joint14[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 803, 64, 1621, 0, 505, -92,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1008, 146, 1662, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 282, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 242, 356,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1235, 115, 1577, 30, 995, 315,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1235, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1722, 62, 874, -82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 865, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1701, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1762, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1219, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 808, -9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 850, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1161, 115,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1802, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1698, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1254, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1321, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, -4, 1703, 4, 1311, -10,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimRunBrake_joint16[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -627, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimRunBrake_joint17[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1639, -129, -1571, 10, 1433, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1418, 190, 1205, -237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1509, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1239, -129,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1451, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1178, 164, 921, -299,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 429, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1105, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1487, 67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1617, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 530, 107,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 697, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1141, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1198, -51,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1610, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1534, -118,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 682, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 793, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1370, -90, 1087, 176,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1569, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1245, -34, 1145, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1568, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1018, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1163, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1172, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1644, 48, 1197, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1666, 22, -1609, -40, 1201, 3,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimRunBrake_joint19[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 303, 350,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 894, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 825, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 900, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 880, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 975, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 989, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 946, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 946, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPikachuAnimRunBrake_joint21[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1634, 48, -1660, -40, 2264, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1573, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1882, -151, 2011, -249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2004, -63, 1725, -230,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1873, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1549, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1445, -55, 1305, -76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1463, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1440, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1836, 54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1769, -36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1490, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1479, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1437, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1447, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1466, 112, -1829, -131, 1374, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -2062, 36, 1283, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1672, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1656, -52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1566, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1959, 97, 1209, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1782, 47, 1256, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1617, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1627, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1614, -12, -1736, 46, 1255, -1,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimRunBrake_joint22[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -307, 343, 25, -7, -174, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 11, 116,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -322, -245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 35, 389,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 472, 250,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 250, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 250, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 439, 79, -627, -335,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 409, -35, -993, -163,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 211, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 158, -71, -954, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -865, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 175, 62,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 220, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 172, -38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -868, 39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -616, -26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 233, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 134, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 155, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 17, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -694, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -190, 76,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -50, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 128, -5, -57, -7, -192, -1,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimRunBrake_joint24[42] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 857, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 794, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 944, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 921, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 891, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 807, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 807, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTPikachuAnimRunBrake_joint25[172] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1977, -378, -1752, 159, -997, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1435, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1210, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1039, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -977, -132,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2012, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1515, 102,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1827, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1167, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1374, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1791, 9, -1490, -148, -1923, 78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1810, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1880, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1727, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1742, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1533, 25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1757, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1557, 48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1846, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2091, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1531, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1884, -55,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1608, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1615, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1601, -14, -1893, -9, -2092, -1,
	ftAnimEnd(),
	0x400E, 0xFC3E, 0xFF17, 0xFE00, 0x48E0, 0xFFFF, 0xFF4C, 0xFE9E, 0x200F, 0x0007, 0x0006, 0x004A, 0x00BA, 0x0020, 0xFF93, 0x001E, 0x200F, 0x0006, 0x0006, 0x000B, 0x00BA, 0xFFEF, 0xFF93, 0x000B, 0x200F, 0x0004, 0x0071, 0xFFEC, 0x0017, 0xFFDB, 0xFFFD, 0x0010, 0x200F, 0x0001, 0xFF9B, 0xFFDB, 0xFFFA, 0xFFFA, 0xFFE8, 0x0000, 0x200F, 0x0002, 0xFFF2, 0xFFFA, 0x0000, 0x000D, 0xFFFD, 0xFFFA, 0x0000, 0x0000, 0x0000, 0x0000,
};
