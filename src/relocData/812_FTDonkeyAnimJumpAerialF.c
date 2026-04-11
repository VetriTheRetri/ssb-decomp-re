/* AnimJoint data for relocData file 812 (FTDonkeyAnimJumpAerialF) */
/* 2032 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimJumpAerialF_joint1[52];
extern u16 dFTDonkeyAnimJumpAerialF_joint2[22];
extern u16 dFTDonkeyAnimJumpAerialF_joint4[18];
extern u16 dFTDonkeyAnimJumpAerialF_joint5[106];
extern u16 dFTDonkeyAnimJumpAerialF_joint6[44];
extern u16 dFTDonkeyAnimJumpAerialF_joint7[16];
extern u16 dFTDonkeyAnimJumpAerialF_joint8[14];
extern u16 dFTDonkeyAnimJumpAerialF_joint10[30];
extern u16 dFTDonkeyAnimJumpAerialF_joint11[114];
extern u16 dFTDonkeyAnimJumpAerialF_joint12[40];
extern u16 dFTDonkeyAnimJumpAerialF_joint13[10];
extern u16 dFTDonkeyAnimJumpAerialF_joint14[10];
extern u16 dFTDonkeyAnimJumpAerialF_joint16[30];
extern u16 dFTDonkeyAnimJumpAerialF_joint17[80];
extern u16 dFTDonkeyAnimJumpAerialF_joint19[40];
extern u16 dFTDonkeyAnimJumpAerialF_joint21[72];
extern u16 dFTDonkeyAnimJumpAerialF_joint22[108];
extern u16 dFTDonkeyAnimJumpAerialF_joint24[160];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimJumpAerialF_joints[] = {
	(u32)dFTDonkeyAnimJumpAerialF_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimJumpAerialF_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimJumpAerialF_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimJumpAerialF_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimJumpAerialF_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimJumpAerialF_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimJumpAerialF_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimJumpAerialF_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimJumpAerialF_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimJumpAerialF_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimJumpAerialF_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimJumpAerialF_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimJumpAerialF_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimJumpAerialF_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimJumpAerialF_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimJumpAerialF_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimJumpAerialF_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimJumpAerialF_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF01C0, /* [24] END */
};

/* Joint 1 */
u16 dFTDonkeyAnimJumpAerialF_joint1[52] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 949, -319,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 30,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 1451, 805, -453, 458,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1653, -95, 81, 1741,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 1392, -1079, 634, 1280,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 978, -1562, 882, -59,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 415, -879, 597, -1007,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 318, 8, 126, -1187,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 420, 411, -145, -291,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 949, -319,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimJumpAerialF_joint2[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -257,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -28, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 977, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 2132, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 2814, 54,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), 2959,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTDonkeyAnimJumpAerialF_joint4[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 791,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 73, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 660, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 660, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), 791,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimJumpAerialF_joint5[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2000, 29, -1217, -54, 1786, -63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1483, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -1569, 97, -1567, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1493, 56, -1581, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1436, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1550, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1483, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1605, 43,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1446, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1689, -217,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1659, 93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1924, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1563, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1953, -150, -1600, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1925, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1466, 107,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1254, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1901, 24, 1898, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1752, 27, 1595, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1727, 24, -1240, 13, 1548, -46,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimJumpAerialF_joint6[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1013, -23,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1109, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1084, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -916, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -908, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -899, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -789, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -748, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -744, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -745, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimJumpAerialF_joint7[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -825, -308, 165,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), -356, 43, -150,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -825, -308, 165,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimJumpAerialF_joint8[14] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTZ), 393, 74,
	ftAnimSetValAfter(FT_ANIM_ROTY), 144,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 21), 393, 74,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 393, 74,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTDonkeyAnimJumpAerialF_joint10[30] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -452, -206, 75,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -93, -206, 75,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -93, -206, 75,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -93, -206, 75,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -452, -206, 75,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -452, -206, 75,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimJumpAerialF_joint11[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 604, -62, 417, -40, 389, -125,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 93, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -16, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -66, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -101, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 67, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 89, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 74, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -12, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -29, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -60, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 72, 126,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 103, 68, 46, -50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 361, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -138, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 203, 72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 131, -13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 392, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 389, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -150, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -142, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 122, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 150, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 172, 21, 400, 11, -114, 28,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimJumpAerialF_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1029, -23,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1141, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1122, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -976, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -957, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -698, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -678, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -765, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -802, -37,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimJumpAerialF_joint13[10] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 893,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 0, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTDonkeyAnimJumpAerialF_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -1340, 2502, 120, 120, 120,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTDonkeyAnimJumpAerialF_joint16[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1429, 893, -670,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1046, 573,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -426, 53, -22, -47, -36, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -404, 27, 0, 29, 0, 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 268, 714, 1072,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimJumpAerialF_joint17[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -277, 4, -74, -14, -305, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -249, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -13, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -792, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -915, -97,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -106, 13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -247, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -64, 43,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -45, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -481, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -479, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -288, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -29, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -65, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -99, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -181, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -281, 7, -65, 0, -188, -7,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimJumpAerialF_joint19[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 834, 37,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1317, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1334, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 705, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 571, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 312, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 376, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 635, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 680, 45,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimJumpAerialF_joint21[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 11, 0, 9, 0, 41, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 66, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 100, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -191, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -184, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -79, 51,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 123, 62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 388, -58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 90, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -44, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16, 50, 320, -71, -31, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 19, -26, 29, -31, 76, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -7, -27, 2, -26, 82, 6,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimJumpAerialF_joint22[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -192, 5, 139, 2, -875, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 180, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -976, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -109, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -120, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 44, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 185, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 255, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -948, 76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -353, 42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 233, 172,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 399, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 209, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 516, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -327, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -617, -13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 261, -124,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -100, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 488, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 193, -35,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -629, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -672, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -108, -8, 160, -33, -693, -21,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimJumpAerialF_joint24[160] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1176, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1355, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1305, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 456, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 402, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 680, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 713, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1004, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1051, 47,
	ftAnimEnd(),
	0x0000, 0x200E, 0xF978, 0x000B, 0x06FB, 0xFFFE, 0xFA38, 0xFFF2, 0x2809, 0x0009, 0xF8B3, 0xFFFE, 0x2805, 0x000D, 0x06D6, 0x0031, 0x2003, 0x0004, 0xF9BD, 0x0008, 0x2003, 0x0001, 0xF9C2, 0xFFB6, 0x2003, 0x0001, 0xF928, 0xFFB1, 0x2003, 0x0001, 0xF923, 0x0016, 0x2803, 0x0004, 0xF950, 0xFFDB, 0x0801, 0x0002, 0x2009, 0x0001, 0xF8B7, 0x000C, 0x2809, 0x0003, 0xF964, 0x007B, 0x0801, 0x0001, 0x2003, 0x0001, 0xF928, 0x000E, 0x2003, 0x0001, 0xF96C, 0xFFCD, 0x200F, 0x0001, 0xF8C1, 0xFF7A, 0x0706, 0x0025, 0xF9E8, 0x0063, 0x2805, 0x0006, 0x0811, 0x0028, 0x2803, 0x0009, 0xF898, 0x003C, 0x2009, 0x0005, 0xFACA, 0x003C, 0x2009, 0x0001, 0xFB0C, 0x0034, 0x2809, 0x0008, 0xFA63, 0xFFED, 0x2005, 0x0001, 0x0828, 0x0005, 0x2805, 0x0008, 0x0708, 0xFFE8, 0x0801, 0x0002, 0x2003, 0x0001, 0xF8CF, 0x002F, 0x2803, 0x0005, 0xF95A, 0x0012, 0x0801, 0x0004, 0x2009, 0x0001, 0xFA53, 0xFFF2, 0x200F, 0x0001, 0xF96B, 0x0011, 0x06F3, 0xFFEB, 0xFA46, 0xFFF4, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
