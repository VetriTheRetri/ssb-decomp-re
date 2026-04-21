/* AnimJoint data for relocData file 1608 (FTCaptainAnimItemThrowAirSmashU) */
/* 2336 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimItemThrowAirSmashU_joint1[8];
extern u16 dFTCaptainAnimItemThrowAirSmashU_joint2[38];
extern u16 dFTCaptainAnimItemThrowAirSmashU_joint4[64];
extern u16 dFTCaptainAnimItemThrowAirSmashU_joint5[122];
extern u16 dFTCaptainAnimItemThrowAirSmashU_joint6[48];
extern u16 dFTCaptainAnimItemThrowAirSmashU_joint7[30];
extern u16 dFTCaptainAnimItemThrowAirSmashU_joint10[34];
extern u16 dFTCaptainAnimItemThrowAirSmashU_joint11[134];
extern u16 dFTCaptainAnimItemThrowAirSmashU_joint12[48];
extern u16 dFTCaptainAnimItemThrowAirSmashU_joint13[42];
extern u16 dFTCaptainAnimItemThrowAirSmashU_joint14[10];
extern u16 dFTCaptainAnimItemThrowAirSmashU_joint16[8];
extern u16 dFTCaptainAnimItemThrowAirSmashU_joint17[106];
extern u16 dFTCaptainAnimItemThrowAirSmashU_joint19[64];
extern u16 dFTCaptainAnimItemThrowAirSmashU_joint21[88];
extern u16 dFTCaptainAnimItemThrowAirSmashU_joint22[106];
extern u16 dFTCaptainAnimItemThrowAirSmashU_joint24[56];
extern u16 dFTCaptainAnimItemThrowAirSmashU_joint25[112];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTCaptainAnimItemThrowAirSmashU_joints[] = {
	(u32)dFTCaptainAnimItemThrowAirSmashU_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimItemThrowAirSmashU_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimItemThrowAirSmashU_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimItemThrowAirSmashU_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimItemThrowAirSmashU_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimItemThrowAirSmashU_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimItemThrowAirSmashU_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimItemThrowAirSmashU_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimItemThrowAirSmashU_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimItemThrowAirSmashU_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimItemThrowAirSmashU_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimItemThrowAirSmashU_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimItemThrowAirSmashU_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimItemThrowAirSmashU_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimItemThrowAirSmashU_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimItemThrowAirSmashU_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimItemThrowAirSmashU_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTCaptainAnimItemThrowAirSmashU_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimItemThrowAirSmashU_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -55, 1225, -1,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTCaptainAnimItemThrowAirSmashU_joint2[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 240, 95, 49, 4, -76,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -661, -91, -200, 23, 287, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 4, 59,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 20), 4, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -306, 45, 234, 14, -110, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 240, 95, 49,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTCaptainAnimItemThrowAirSmashU_joint4[64] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 242, -182, -12, 0, -31, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 61, -59, -40, 48, 155, -35, 33, -107, 10, 42, -38, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -113, 9, 107, 15, -225, -43, -80, -61, 0, -63, -29, 90,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -43, 35, -68, -14, 74, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 134, 19, 80, -16, -192, 11,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 242, -182, -12,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, -31, 47,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimItemThrowAirSmashU_joint5[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 274, 35, -120, -42, -606, -140,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 542, 257,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -291, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -746, -251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1109, -333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 824, 181, -1414, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 904, -312, -307, -202, -1485, 357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 199, -612, -696, -93, -698, 741,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -321, -251, -493, 104, -3, 355,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -488, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -303, 18, 11, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 42, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 24, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -306, -95,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -492, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -374, 67,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 126, 72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 273, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -395, -77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -602, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -305, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -129, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 274, 0, -120, 8, -606, -3,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimItemThrowAirSmashU_joint6[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1109, 36,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -926, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -708, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -617, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -968, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -820, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -827, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -1149, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1136, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1113, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1109, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimItemThrowAirSmashU_joint7[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 191, -97, -323,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1072, -77, 0, 43, 0, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -348, 63, 205, -4, -74, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 191, -97, -323,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTCaptainAnimItemThrowAirSmashU_joint10[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -153, 113, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -209, -26, 282, -42, 53, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -313, 15, -144, -33, 35, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -40, 8, -84, 14, 207, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -153, 113, -38,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimItemThrowAirSmashU_joint11[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1742, 10, 1358, -29, 2237, 83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1285, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1752, 43, 2320, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1828, 550, 2544, -250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2853, 562, 1327, -38, 1820, -232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2952, 351, 1207, -25, 2079, 578,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3556, 477, 1275, 105, 2977, 803,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1436, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3907, 210, 3687, 394,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 4043, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3766, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1405, -49, 3828, 67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 4760, 208,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1373, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4117, 79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 5016, -7,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4967, 209,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 5487, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1396, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1362, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 5002, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 4966, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5477, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5461, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4959, -7, 1358, -3, 5454, -7,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimItemThrowAirSmashU_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -631, -63,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -896, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -874, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -584, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -682, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1220, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1215, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -661, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -631, 30,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimItemThrowAirSmashU_joint13[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, 167, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 252, 74, 109, -41, 113, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 443, 19, -81, -12, 279, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 444, 0, -16, 13, 223, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 450, -37, 55, 15, 160, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -5, 167, 63,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimItemThrowAirSmashU_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 39,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimItemThrowAirSmashU_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 255, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTCaptainAnimItemThrowAirSmashU_joint17[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 55, -85, 81, -3, -557, -157,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -227, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 19, -88, -747, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -98, -33, -307, 391,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -11, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -181, 38, 34, 204,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -77, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 100, 55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 17, -153,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -33, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -163, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -680, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -758, -80,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -917, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -49, 51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 51, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 3, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 81, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -871, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -580, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 55, 4, 81, 0, -557, 22,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimItemThrowAirSmashU_joint19[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 237, 368,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 605, 389,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1016, 256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 609, -314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 268, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 415, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 454, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 369, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 344, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 506, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 723, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 664, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 606, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 274, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 237, -37,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimItemThrowAirSmashU_joint21[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 5, -49, -2, -20, 513, -80,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 72, 133, 92, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -57, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -8, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -189, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1, 117,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -117, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 223, 88, 51, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -135, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 176, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -136, -19, 179, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 37, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 6, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -120, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 333, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 426, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 8, -19, 490, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, 0, -2, -10, 513, 23,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimItemThrowAirSmashU_joint22[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -13, -40, 289, -12, -825, 69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 59, 105,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 146, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -488, 318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -118, 347,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 310, -176,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 181, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -26, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 215, 35, 26, -308,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 87, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -487, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2, -31, -492, -106,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -262, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -890, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -977, -87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -888, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -296, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -23, 18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 119, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 285, 7,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -842, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -13, 10, 289, 3, -825, 17,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimItemThrowAirSmashU_joint24[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 875, 35,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 663, -287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 307, -229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 204, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 462, 271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 845, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 691, -228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 388, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 406, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 624, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 725, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 881, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 875, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimItemThrowAirSmashU_joint25[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, -11, -57, 17, -154, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 15, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 66, 96, 49, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 151, 53, 23, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 136, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 235, 57,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 54, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 166, -47,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 91, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 202, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 14, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 67, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 248, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -38, -18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 145, -84, 60, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -119, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -149, -8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -52, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -58, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -110, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -11, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2, 9, -57, 0, -154, -4,
	ftAnimEnd(),
	0x0000, 0x0000,
};
