/* AnimJoint data for relocData file 1051 (FTSamusAnimItemThrowAirSmashB) */
/* 1840 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimItemThrowAirSmashB_joint1[10];
extern u16 dFTSamusAnimItemThrowAirSmashB_joint2[30];
extern u16 dFTSamusAnimItemThrowAirSmashB_joint4[48];
extern u16 dFTSamusAnimItemThrowAirSmashB_joint5[108];
extern u16 dFTSamusAnimItemThrowAirSmashB_joint6[52];
extern u16 dFTSamusAnimItemThrowAirSmashB_joint7[26];
extern u16 dFTSamusAnimItemThrowAirSmashB_joint8[16];
extern u16 dFTSamusAnimItemThrowAirSmashB_joint11[28];
extern u16 dFTSamusAnimItemThrowAirSmashB_joint12[80];
extern u16 dFTSamusAnimItemThrowAirSmashB_joint14[40];
extern u16 dFTSamusAnimItemThrowAirSmashB_joint15[80];
extern u16 dFTSamusAnimItemThrowAirSmashB_joint17[44];
extern u16 dFTSamusAnimItemThrowAirSmashB_joint19[94];
extern u16 dFTSamusAnimItemThrowAirSmashB_joint20[78];
extern u16 dFTSamusAnimItemThrowAirSmashB_joint22[138];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimItemThrowAirSmashB_joints[] = {
	(u32)dFTSamusAnimItemThrowAirSmashB_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimItemThrowAirSmashB_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimItemThrowAirSmashB_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimItemThrowAirSmashB_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimItemThrowAirSmashB_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimItemThrowAirSmashB_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimItemThrowAirSmashB_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimItemThrowAirSmashB_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimItemThrowAirSmashB_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimItemThrowAirSmashB_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimItemThrowAirSmashB_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimItemThrowAirSmashB_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimItemThrowAirSmashB_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimItemThrowAirSmashB_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimItemThrowAirSmashB_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF0199, /* [22] END */
};

/* 4-byte alignment padding */
static u32 dFTSamusAnimItemThrowAirSmashB_pad[1] = { 0 };

/* Joint 1 */
u16 dFTSamusAnimItemThrowAirSmashB_joint1[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -4, 1300, 0,
	ftAnimSetValAfterBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), -4, 1300, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimItemThrowAirSmashB_joint2[30] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 12, 344, -14, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 76, 21, -89, -17, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 0, -36,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTSamusAnimItemThrowAirSmashB_joint4[48] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 240, 0, 0, 0, -21, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -49, 30, 160, -82, 187, -74, -22, -40, 0, 39, -32, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 423, 14, -494, -8, -446, -9, -30, 8, 8, -8, 57, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAY, 18), 240, -10, -21, 31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 18), 0, 0, 0, 56,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimItemThrowAirSmashB_joint5[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1619, -34, -1589, 67, -1531, 95,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1292, -378, -1406, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1436, 218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1093, 288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 827, -348, -1546, -21, -860, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 595, -369, -1450, 64, -797, 269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 89, -405, -1417, 153, -320, 498,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -215, -33, -1142, 189, 199, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 22, 220, -1037, 79, -86, -247,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1227, 105,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1417, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -296, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1241, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1318, 82, -1317, -67,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 1617, 4, -1530, -2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1473, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1581, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1619, 2, -1589, -8, -1531, -1,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimItemThrowAirSmashB_joint6[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1015, -117,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 24), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1133, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1299, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -897, 289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -593, 448,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -371, -266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -790, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -846, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -1016, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1015, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimItemThrowAirSmashB_joint7[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 536, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1340, -177, 0, 80, 0, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -526, 93,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 482, 162,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 536, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimItemThrowAirSmashB_joint8[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 67, -17, -1474, 98, 60, -42,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimItemThrowAirSmashB_joint11[28] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, -30, -266, 114, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 686, 13, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -184,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTSamusAnimItemThrowAirSmashB_joint12[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -275, -9, 111, 58, -68, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -244, 94,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 395, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -41, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 17, 163,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 487, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -91, 117,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -68, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 354, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 194, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 484, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -64, -7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -93, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -275, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 171, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 114, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -275, 0, 111, -2, -68, -3,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimItemThrowAirSmashB_joint14[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -985, 16,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 24), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -845, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -801, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -978, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -999, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -998, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -989, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -985, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimItemThrowAirSmashB_joint15[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1576, 32, 1659, -5, -2174, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2123, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 1727, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1494, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1609, -73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1629, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2071, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -2205, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1632, -6, -2220, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), -1638, 25, -2427, -4,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1717, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1664, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1614, 22, -2420, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1593, 18, -2361, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1576, 16, 1659, -4, -2174, 186,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimItemThrowAirSmashB_joint17[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1329, -21,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 24), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 823, -236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 582, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 550, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 526, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 880, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 995, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1236, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1329, 92,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimItemThrowAirSmashB_joint19[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 34, -43, 21, -7, 48, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1, 64, -59, 53, 108, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 50, -4, 49, 27, 20, -40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -5, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 7, 14, -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 19, 8, -13, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 88, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 148, 22,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -22, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 76, 113,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 80, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -8, 24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 167, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 61, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 197, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 221, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 34, -27, 21, 30, 48, -173,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimItemThrowAirSmashB_joint20[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1608, 22, 1569, -4, 1016, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 848, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -1694, -79, 1618, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1763, 30, 1649, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 1582, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1633, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1633, -4, 891, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1644, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 903, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 875, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 921, 75,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1623, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1606, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1570, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1608, -2, 1569, 0, 1016, 95,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimItemThrowAirSmashB_joint22[138] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1100, 11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 24), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 866, -265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 558, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 382, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 302, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 1044, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1100, 56,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFFBA, 0x0001, 0x0040, 0xFFF7, 0x003B, 0x0006, 0x2805, 0x0004, 0x000A, 0x0036, 0x2809, 0x0006, 0x0041, 0x0019, 0x2003, 0x0003, 0x000E, 0x001B, 0x2003, 0x0001, 0x0000, 0x003C, 0x2007, 0x0001, 0x0087, 0xFFF9, 0x0066, 0xFFF5, 0x2007, 0x0001, 0xFFF2, 0xFFB7, 0xFFF3, 0xFFC8, 0x2803, 0x0004, 0x000F, 0x0008, 0x200D, 0x0001, 0xFFF5, 0x0006, 0x003E, 0x0003, 0x2809, 0x0009, 0x0054, 0xFFF6, 0x2805, 0x000E, 0x004B, 0xFFF8, 0x0801, 0x0003, 0x2003, 0x0001, 0x0017, 0x0007, 0x2803, 0x000A, 0xFFBE, 0xFFE8, 0x0801, 0x0005, 0x2009, 0x0001, 0x004B, 0xFFFA, 0x2809, 0x0006, 0x004C, 0xFFF6, 0x0801, 0x0004, 0x2007, 0x0001, 0xFFAB, 0xFFF6, 0x0044, 0xFFFC, 0x2007, 0x0001, 0xFFAA, 0x0007, 0x0042, 0xFFFE, 0x200F, 0x0001, 0xFFBA, 0x0010, 0x0040, 0xFFFE, 0x003B, 0xFFF0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
