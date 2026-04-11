/* AnimJoint data for relocData file 1067 (FTSamusAnimFTiltMidHigh) */
/* 1920 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimFTiltMidHigh_joint1[44];
extern u16 dFTSamusAnimFTiltMidHigh_joint2[34];
extern u16 dFTSamusAnimFTiltMidHigh_joint4[34];
extern u16 dFTSamusAnimFTiltMidHigh_joint5[120];
extern u16 dFTSamusAnimFTiltMidHigh_joint6[44];
extern u16 dFTSamusAnimFTiltMidHigh_joint7[38];
extern u16 dFTSamusAnimFTiltMidHigh_joint8[16];
extern u16 dFTSamusAnimFTiltMidHigh_joint11[10];
extern u16 dFTSamusAnimFTiltMidHigh_joint12[100];
extern u16 dFTSamusAnimFTiltMidHigh_joint14[52];
extern u16 dFTSamusAnimFTiltMidHigh_joint15[100];
extern u16 dFTSamusAnimFTiltMidHigh_joint17[40];
extern u16 dFTSamusAnimFTiltMidHigh_joint19[68];
extern u16 dFTSamusAnimFTiltMidHigh_joint20[90];
extern u16 dFTSamusAnimFTiltMidHigh_joint22[124];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimFTiltMidHigh_joints[] = {
	(u32)dFTSamusAnimFTiltMidHigh_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimFTiltMidHigh_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimFTiltMidHigh_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimFTiltMidHigh_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimFTiltMidHigh_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimFTiltMidHigh_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimFTiltMidHigh_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimFTiltMidHigh_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimFTiltMidHigh_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimFTiltMidHigh_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimFTiltMidHigh_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimFTiltMidHigh_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimFTiltMidHigh_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimFTiltMidHigh_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimFTiltMidHigh_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF01BC, /* [22] END */
};

/* Joint 1 */
u16 dFTSamusAnimFTiltMidHigh_joint1[44] = {
	ftAnimSetValAfter(FT_ANIM_TRAY), 1600,
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1072, -273,
	ftAnimSetValAfterT(FT_ANIM_TRAY, 32), 1600,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), 247, 46,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -367,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -2309, -150,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 212, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 508, 85,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 24), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 17), -3401,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -3216, 56,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimFTiltMidHigh_joint2[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterT(FT_ANIM_ROTY, 32), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 147, 0, -589, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 0, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -497, 24,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 95,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 18), 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimFTiltMidHigh_joint4[34] = {
	ftAnimSetValAfter(FT_ANIM_ROTZ), 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTZ, 32), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 223, -491, -79, -53, -12,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY, 28), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -46, -11, -7,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimFTiltMidHigh_joint5[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1132, 63, -1722, 32, 1377, -65,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1003, -234, 1278, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1560, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1468, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1584, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1338, -303, 1617, 272,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1646, 74, 1476, -139,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1555, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1290, -35,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1559, 100, 1334, -144,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1007, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 692, 4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1332, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1735, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1001, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1204, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 712, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1351, 31,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1189, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1140, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1730, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1724, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1132, 7, -1722, 2, 1377, 25,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimFTiltMidHigh_joint6[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -739, 20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 32), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -887, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1067, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1259, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1232, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -561, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -574, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -721, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, -18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimFTiltMidHigh_joint7[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 701, 0,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 323, 78,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -89, 45,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -403, -65,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 0, 21, 0, 100,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 10, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 701, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimFTiltMidHigh_joint8[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 32), 67, -17, -1474, 98, 60, -42,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimFTiltMidHigh_joint11[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 32), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimFTiltMidHigh_joint12[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 180, -84, -195, 65, -232, 182,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 402, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 99, 47, 295, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 163, 2, 463, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -137, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 127, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -38, -55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 76, 62,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -94, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 202, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 141, 64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 330, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 413, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 322, -34,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 150, -50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 134, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 256, -73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -168, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 281, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -152, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 180, 46, -195, -43, -232, -63,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimFTiltMidHigh_joint14[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, -216,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 32), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1016, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1003, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1073, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1029, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -938, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -902, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -864, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -902, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -685, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 89,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimFTiltMidHigh_joint15[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 87, -76, -27, -36, -389, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -256, -115, -363, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -133, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -108, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 59, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 380, 197, -382, -118, -466, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -329, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -578, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 471, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 488, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 476, -71,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -300, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -3, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -430, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 406, -65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 138, -43,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 13, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), -2, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 87, -51, -27, -24, -389, 40,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimFTiltMidHigh_joint17[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, 30,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 32), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 513, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 447, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 440, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 428, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 446, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 463, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, 14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimFTiltMidHigh_joint19[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1684, 60, 1637, 8, -1650, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1619, -26, -1818, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1619, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1640, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1718, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1626, 37, 1592, -10, -1778, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 1635, 1, -1646, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -1699, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1636, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1577, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1579, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -1703, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1684, 18, 1637, 1, -1650, -4,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimFTiltMidHigh_joint20[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 226, -61, 160, 15, -49, -82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -89, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 182, 61, -387, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 248, 39, -221, 216,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 179, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 59, 91, 45, 163,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 273, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 105, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 261, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 173, -76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -81, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 189, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 163, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 309, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 230, -8,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -77, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -52, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, -4, 160, -2, -49, 3,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimFTiltMidHigh_joint22[124] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 442, 143,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 32), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 982, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 755, -278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 426, -375,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 147, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 338, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 453, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, -11,
	ftAnimEnd(),
	0x0000, 0x200E, 0x008E, 0xFFE0, 0x00C1, 0xFFF8, 0xFF2C, 0x000F, 0x2809, 0x0008, 0x0038, 0xFFF8, 0x2805, 0x0009, 0x0014, 0x0009, 0x2003, 0x0004, 0x0006, 0x000F, 0x2003, 0x0001, 0x0010, 0x0004, 0x2803, 0x000F, 0xFFD4, 0x000C, 0x0801, 0x0003, 0x2009, 0x0001, 0x002C, 0xFFF3, 0x2809, 0x0016, 0xFF2C, 0xFFFF, 0x2005, 0x0001, 0x001E, 0x000A, 0x2805, 0x0015, 0x00C1, 0x0000, 0x0801, 0x000A, 0x2003, 0x0001, 0xFFDD, 0x0000, 0x2003, 0x0007, 0x0040, 0x0024, 0x2003, 0x0001, 0x0062, 0x001C, 0x2003, 0x0002, 0x0089, 0x000A, 0x200F, 0x0001, 0x008E, 0x0005, 0x00C1, 0x0000, 0xFF2C, 0x0000, 0x0000,
};
