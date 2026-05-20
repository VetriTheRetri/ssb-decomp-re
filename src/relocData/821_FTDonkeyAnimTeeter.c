/* AnimJoint data for relocData file 821 (FTDonkeyAnimTeeter) */
/* 2768 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimTeeter_joint1[40];
extern u16 dFTDonkeyAnimTeeter_joint2[52];
extern u16 dFTDonkeyAnimTeeter_joint4[56];
extern u16 dFTDonkeyAnimTeeter_joint5[146];
extern u16 dFTDonkeyAnimTeeter_joint6[56];
extern u16 dFTDonkeyAnimTeeter_joint7[32];
extern u16 dFTDonkeyAnimTeeter_joint8[20];
extern u16 dFTDonkeyAnimTeeter_joint10[44];
extern u16 dFTDonkeyAnimTeeter_joint11[168];
extern u16 dFTDonkeyAnimTeeter_joint12[52];
extern u16 dFTDonkeyAnimTeeter_joint13[8];
extern u16 dFTDonkeyAnimTeeter_joint14[12];
extern u16 dFTDonkeyAnimTeeter_joint16[66];
extern u16 dFTDonkeyAnimTeeter_joint17[126];
extern u16 dFTDonkeyAnimTeeter_joint19[40];
extern u16 dFTDonkeyAnimTeeter_joint21[104];
extern u16 dFTDonkeyAnimTeeter_joint22[142];
extern u16 dFTDonkeyAnimTeeter_joint24[40];
extern u16 dFTDonkeyAnimTeeter_joint25[130];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTDonkeyAnimTeeter_joints[] = {
	(AObjEvent32 *)dFTDonkeyAnimTeeter_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTDonkeyAnimTeeter_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTDonkeyAnimTeeter_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTDonkeyAnimTeeter_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTDonkeyAnimTeeter_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTDonkeyAnimTeeter_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTDonkeyAnimTeeter_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTDonkeyAnimTeeter_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTDonkeyAnimTeeter_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTDonkeyAnimTeeter_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTDonkeyAnimTeeter_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTDonkeyAnimTeeter_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTDonkeyAnimTeeter_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTDonkeyAnimTeeter_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTDonkeyAnimTeeter_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTDonkeyAnimTeeter_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTDonkeyAnimTeeter_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTDonkeyAnimTeeter_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTDonkeyAnimTeeter_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimTeeter_joint1[40] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -1, 1339, 1, 222, 360,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 1206, 362,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 70), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 1339, -53, 222, -181,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 1005, -46, -316, -104,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 1104, 66, -302, 107,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 1339, 222,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimTeeter_joint2[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 753, 44, -127, -6, 12, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 753, -127, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 753, -20, -127, 2, 12, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 248, -12, -60, 1, -92, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 372, 4, -86, 0, 95, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 372, 12, -86, -1, 95, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 753, -127, 12,
	ftAnimLoop(0x6800, -100),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimTeeter_joint4[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 463, -11, -86, -2, -50, -3, -24, -9, 112, -82, -198, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 510, -92, -58, -24, 112, -198,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 70), -24, 112, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 463, -1, -86, 0, -50, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 20), 463, -9, -86, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 20), -50,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 40), -50,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 22), 73, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 18), 463, -86,
	ftAnimLoop(0x6800, -110),
};

/* Joint 5 */
u16 dFTDonkeyAnimTeeter_joint5[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1369, -1, -1198, 10, -2320, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -1283, 59, -1953, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 1049, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1036, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1347, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1218, 60, -1993, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1236, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -2290, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1318, -30, -2252, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 730, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), -1846, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1253, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), -1474, 17,
	ftAnimBlock(0, 16),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 714, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 1007, 1,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1859, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -2277, -42,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1456, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1113, 38,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1009, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1282, 25,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1078, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1195, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2314, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -2320, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1302, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 1368, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1369, 1, -1198, -2, -2320, 0,
	ftAnimLoop(0x6800, -288),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimTeeter_joint6[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -454, 54,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -702, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -766, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -474, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -454, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -759, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -779, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), -600, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -583, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -566, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -537, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -455, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -454, 1,
	ftAnimLoop(0x6800, -110),
};

/* Joint 7 */
u16 dFTDonkeyAnimTeeter_joint7[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -287, -14, -25, -1, -179, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -287, -25, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -287, 3, -25, -5, -179, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 42), -101, -313, -100,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -287, -25, -179,
	ftAnimLoop(0x6800, -62),
};

/* Joint 8 */
u16 dFTDonkeyAnimTeeter_joint8[20] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -6, 0, 3, 0, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 70), 0, 0, 0,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTDonkeyAnimTeeter_joint10[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -557, -11, 108, 4, -115, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -557, 108, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -557, 5, 108, 0, -115, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -369, 17, 93, -2, -16, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 176, -5, 0, 0, 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -557, 108, -115,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimTeeter_joint11[168] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1638, -38, 1178, -32, -2426, -67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1929, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1352, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -2871, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2869, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2736, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1911, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -1347, 58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1378, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 1204, 26,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2675, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -2198, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2113, 84,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 29), -1882, -32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1292, 50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -1235, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1234, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 18), 1376, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1252, -17, 1351, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -1120, 92,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 956, -10,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1912, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1479, 91,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1026, 90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -986, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1391, 80,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1546, -226,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 943, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1084, 42,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1210, -207, -1813, -250,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -1636, -4, -2421, -9,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1123, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1171, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1638, -2, 1178, 6, -2426, -5,
	ftAnimLoop(0x6800, -332),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimTeeter_joint12[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -756, 15,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -311, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -247, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -577, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -646, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -902, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -882, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -632, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -631, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -765, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -759, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -756, 2,
	ftAnimLoop(0x6800, -102),
};

/* Joint 13 */
u16 dFTDonkeyAnimTeeter_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 98, 0, 0,
	ftAnimBlock(0, 80),
	ftAnimLoop(0x6800, -14),
};

/* Joint 14 */
u16 dFTDonkeyAnimTeeter_joint14[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -1340, 2502, 120, 120, 120,
	ftAnimBlock(0, 80),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTDonkeyAnimTeeter_joint16[66] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1117, -39, 0, 4, 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1046, 573,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -1392, 9, 117, -2, -240, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -841, 30, -70, 7, 22, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -641, 7, 305, -4, 93, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -673, 10, -173, -8, -44, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -372, -18, 100, 2, 110, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -1044, -49, -128, -6, 64, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1117, 0, 0,
	ftAnimLoop(0x6800, -130),
};

/* Joint 17 */
u16 dFTDonkeyAnimTeeter_joint17[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -190, 10, -87, 17, -847, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -232, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -103, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -784, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -795, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -794, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -234, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 54, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -101, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 31, 0,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 71, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -147, -14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -794, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -922, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 32, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -56, 10,
	ftAnimBlock(0, 16),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -160, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), -175, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -909, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), -846, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -46, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -86, -2,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -183, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -188, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -190, -1, -87, -1, -847, 0,
	ftAnimLoop(0x6800, -248),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimTeeter_joint19[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 754, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 734, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 729, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 1154, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1143, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 935, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 937, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 757, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 754, -2,
	ftAnimLoop(0x6800, -78),
};

/* Joint 21 */
u16 dFTDonkeyAnimTeeter_joint21[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -109, -14, 95, -15, -344, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 138, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), -40, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -397, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -379, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -409, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 142, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -140, -6,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -37, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -77, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -144, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 34), 51, -9,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -403, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 42), -344, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -61, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 35), -117, 6,
	ftAnimBlock(0, 20),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 43, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 93, 3,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -111, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -109, 2, 95, 1, -344, 0,
	ftAnimLoop(0x6800, -204),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimTeeter_joint22[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -27, -210, 110, -238, -1018, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -288, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -897, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -175, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -159, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -25, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -254, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -76, 27,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -900, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -904, 20,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -34, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 35, -4,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -50, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), -114, -19,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -884, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), -1071, 10,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 32, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 34), -25, 5,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -132, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), -89, 12,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1060, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), -1011, -6,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -20, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 98, 18,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -75, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -37, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1017, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -27, 10, 110, 12, -1018, -1,
	ftAnimLoop(0x6800, -280),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimTeeter_joint24[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 851, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 856, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 848, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 1087, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1086, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 1045, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1037, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 854, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 851, -2,
	ftAnimLoop(0x6800, -78),
};

/* Joint 25 */
u16 dFTDonkeyAnimTeeter_joint25[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1628, 187, -1438, -301, -1920, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1852, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -1975, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1739, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1813, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1622, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1833, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 1674, -10,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1610, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1537, 28,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1956, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -1918, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1510, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -1542, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1664, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), 1654, 3,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1918, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 38), -1922, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1551, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 32), -1533, 18,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1658, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 1636, -11,
	ftAnimBlock(0, 21),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1511, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1453, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1628, -8, -1438, 15, -1920, 1,
	ftAnimLoop(0x6800, -248),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
