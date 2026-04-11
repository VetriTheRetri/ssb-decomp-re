/* AnimJoint data for relocData file 928 (FTDonkeyAnimLandingAirB) */
/* 1344 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimLandingAirB_joint1[14];
extern u16 dFTDonkeyAnimLandingAirB_joint2[10];
extern u16 dFTDonkeyAnimLandingAirB_joint4[26];
extern u16 dFTDonkeyAnimLandingAirB_joint5[60];
extern u16 dFTDonkeyAnimLandingAirB_joint6[28];
extern u16 dFTDonkeyAnimLandingAirB_joint7[26];
extern u16 dFTDonkeyAnimLandingAirB_joint8[10];
extern u16 dFTDonkeyAnimLandingAirB_joint10[16];
extern u16 dFTDonkeyAnimLandingAirB_joint11[54];
extern u16 dFTDonkeyAnimLandingAirB_joint12[24];
extern u16 dFTDonkeyAnimLandingAirB_joint13[26];
extern u16 dFTDonkeyAnimLandingAirB_joint14[10];
extern u16 dFTDonkeyAnimLandingAirB_joint16[18];
extern u16 dFTDonkeyAnimLandingAirB_joint17[72];
extern u16 dFTDonkeyAnimLandingAirB_joint19[24];
extern u16 dFTDonkeyAnimLandingAirB_joint21[62];
extern u16 dFTDonkeyAnimLandingAirB_joint22[62];
extern u16 dFTDonkeyAnimLandingAirB_joint24[80];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimLandingAirB_joints[] = {
	(u32)dFTDonkeyAnimLandingAirB_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimLandingAirB_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimLandingAirB_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimLandingAirB_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimLandingAirB_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimLandingAirB_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimLandingAirB_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimLandingAirB_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimLandingAirB_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimLandingAirB_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimLandingAirB_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimLandingAirB_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimLandingAirB_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimLandingAirB_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimLandingAirB_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimLandingAirB_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimLandingAirB_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimLandingAirB_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF0134, /* [24] END */
};

/* Joint 1 */
u16 dFTDonkeyAnimLandingAirB_joint1[14] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 567, -390,
	ftAnimSetValBlock(FT_ANIM_TRAX), 30,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 1032, -402,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 15), -24,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTDonkeyAnimLandingAirB_joint2[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 758, -52, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -263, -82, -42,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimLandingAirB_joint4[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -183, -2, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 411, 62, 1, 1, 25, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 616, 43, 20, 2, 40, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 750, 24, 41,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimLandingAirB_joint5[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1492, 50, -1349, 76, 1132, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1174, -62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1789, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -1055, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1096, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1501, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1104, -65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1091, 52,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1709, -73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1582, -46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1511, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1549, -32, -1521, -9, 1130, 39,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimLandingAirB_joint6[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -800, -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -576, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -445, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -141, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -270, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -389, -119,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimLandingAirB_joint7[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -170, -279, -301,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 409, -13, -669, 11, -1058, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -313, -39, -164, 64, -188, 102,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTDonkeyAnimLandingAirB_joint8[10] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 393, 144, 74,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 174, -67, -44,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTDonkeyAnimLandingAirB_joint10[16] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -568, -186, 12,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -235, -79, 22,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -398, 70, 29,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimLandingAirB_joint11[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1427, -12, 1429, -53, -1826, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1715, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1050, 7, -1713, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1078, 41, -1828, -119,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2153, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1454, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1807, -73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1752, 29,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2118, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1727, 24, 1439, -15, -2090, 28,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimLandingAirB_joint12[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1067, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -718, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -581, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -299, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -401, -102,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimLandingAirB_joint13[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 103, 308, -260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -179, 9, 503, -1, -801, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 202, 27, 293, -48, -316, 77,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 103, 0, 1,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTDonkeyAnimLandingAirB_joint14[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1117, -1589, 2626,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -893, -1340, 2502,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTDonkeyAnimLandingAirB_joint16[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -404,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -327, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -614, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -404,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTDonkeyAnimLandingAirB_joint17[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -202, 1, -91, -14, -238, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -225, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -322, -145, -420, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -500, -129, -453, -108,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -368, -3, -1098, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -143, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 21, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -32, -35, -391, -26, -716, 245,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -83, -3, -408, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -502, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -412, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -346, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -85, -1, -396, 12, -310, 36,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimLandingAirB_joint19[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 726, 47,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1315, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1286, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1025, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1006, -18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimLandingAirB_joint21[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -112, 5, -24, -19, -8, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -66, -68, -337, 10, -387, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -146, -10, -287, 99, -506, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 67, 37, -406, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -12, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -44, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -71, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 79, 3, -397, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 40, -16, -379, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -65, 6, 26, -14, -376, 2,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimLandingAirB_joint22[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -702, 38, 512, 33, 1887, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 567, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -513, 220, 2113, 251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -222, 246, 2438, 285,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -110, 9, 2744, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 486, -78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 221, -5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -77, 36, 2770, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 89, 15, 2907, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 100, 11, 217, -4, 2918, 11,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimLandingAirB_joint24[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1240, -18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1045, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1123, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1012, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 995, -17,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0503, 0x0008, 0x0727, 0xFFED, 0xF937, 0xFFFC, 0x2803, 0x0007, 0x06BB, 0x0055, 0x2809, 0x0009, 0xF830, 0xFFC7, 0x2005, 0x0004, 0x05D7, 0xFF6D, 0x2005, 0x0001, 0x0548, 0xFF8D, 0x2805, 0x0009, 0x05C4, 0x0020, 0x0801, 0x0002, 0x2003, 0x0001, 0x06FB, 0x0012, 0x2803, 0x0006, 0x065E, 0xFFE6, 0x0801, 0x0001, 0x2009, 0x0001, 0xF805, 0xFFEC, 0x2009, 0x0004, 0xF82F, 0x000A, 0x200F, 0x0001, 0x064A, 0xFFEC, 0x05DC, 0x0017, 0xF837, 0x0007, 0x0000,
};
