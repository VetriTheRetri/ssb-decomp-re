/* AnimJoint data for relocData file 950 (FTDonkeyAnimCargoTurn) */
/* 1200 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimCargoTurn_joint1[36];
extern u16 dFTDonkeyAnimCargoTurn_joint2[8];
extern u16 dFTDonkeyAnimCargoTurn_joint4[16];
extern u16 dFTDonkeyAnimCargoTurn_joint5[22];
extern u16 dFTDonkeyAnimCargoTurn_joint6[16];
extern u16 dFTDonkeyAnimCargoTurn_joint7[8];
extern u16 dFTDonkeyAnimCargoTurn_joint8[18];
extern u16 dFTDonkeyAnimCargoTurn_joint10[10];
extern u16 dFTDonkeyAnimCargoTurn_joint11[24];
extern u16 dFTDonkeyAnimCargoTurn_joint12[14];
extern u16 dFTDonkeyAnimCargoTurn_joint13[8];
extern u16 dFTDonkeyAnimCargoTurn_joint14[10];
extern u16 dFTDonkeyAnimCargoTurn_joint16[16];
extern u16 dFTDonkeyAnimCargoTurn_joint17[68];
extern u16 dFTDonkeyAnimCargoTurn_joint19[32];
extern u16 dFTDonkeyAnimCargoTurn_joint21[70];
extern u16 dFTDonkeyAnimCargoTurn_joint22[62];
extern u16 dFTDonkeyAnimCargoTurn_joint24[32];
extern u16 dFTDonkeyAnimCargoTurn_joint25[78];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTDonkeyAnimCargoTurn_joints[] = {
	(u32)dFTDonkeyAnimCargoTurn_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimCargoTurn_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimCargoTurn_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimCargoTurn_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimCargoTurn_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimCargoTurn_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimCargoTurn_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimCargoTurn_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimCargoTurn_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimCargoTurn_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimCargoTurn_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimCargoTurn_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimCargoTurn_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimCargoTurn_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimCargoTurn_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimCargoTurn_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimCargoTurn_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimCargoTurn_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTDonkeyAnimCargoTurn_joint25, /* [24] joint 25 */
	0xFFFF0127, /* [25] END */
};

/* Joint 1 */
u16 dFTDonkeyAnimCargoTurn_joint1[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -29, 1031, -640,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 12), 1608, 640,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 3), -18, 14, 1292, 15,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 1043, 62,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 3), -18,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 3), -18, 63, 1339, -15,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 29, 1031,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimCargoTurn_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -265, -41, -16,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTDonkeyAnimCargoTurn_joint4[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1018, 24, 41,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 994, -7, -133,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1018, 24, 41,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimCargoTurn_joint5[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 277,
	ftAnimSetValRate(FT_ANIM_ROTY), 1807, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), -1508,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 277, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 11), 1807,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), 277, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 1807,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimCargoTurn_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1165, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -1165, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1165, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimCargoTurn_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1001, -314, 309,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimCargoTurn_joint8[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, -67, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 210, 0, 231, 1, -243, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 166, -53, -76,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTDonkeyAnimCargoTurn_joint10[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -398, 70, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -356, 89, 54,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimCargoTurn_joint11[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -156, 0, 285, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), -1388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -156, 0, 285, 0, -1388, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -156, 0, 285, 0, -1388, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimCargoTurn_joint12[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1171, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), -1171,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -1171,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimCargoTurn_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1067, 346, 380,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimCargoTurn_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -1340, 2502, 120, 120, 120,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTDonkeyAnimCargoTurn_joint16[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -404, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -280, -307, -382,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -404, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTDonkeyAnimCargoTurn_joint17[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -77, 60, -437, 54, -463, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -217, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -2, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -277, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -298, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -68, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -227, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -273, -92,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -85, -68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -153, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -11, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -340, -158,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -390, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -159, -5, -462, -72, -450, -109,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimCargoTurn_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 998, 36,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1141, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1114, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 660, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 765, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 915, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 970, 54,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimCargoTurn_joint21[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1595, -78, -1718, 37, 1372, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1285, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1842, -32, -1601, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1863, -48, -1562, 100,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1901, 73, -1310, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1344, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1270, 22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1792, 87, -1338, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -1601, 87, -1691, -37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1303, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1353, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1521, 80, -1684, 6, 1392, 39,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimCargoTurn_joint22[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 211, -4, 309, -42, -415, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 378, 119,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 83, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -154, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -161, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -292, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 512, 110,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 514, -158,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 135, 69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 331, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 305, -150, -386, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 212, -93, 306, -24, -410, -23,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimCargoTurn_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 962, -55,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 755, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 864, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 933, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 871, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 941, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 956, 15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTDonkeyAnimCargoTurn_joint25[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -143, 35, 39, 62, -248, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -494, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 265, -85, -443, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 138, -101, -609, -123,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -104, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -561, 218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -624, -78, -253, 227,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -534, 180,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -196, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -128, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -16, 56,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -290, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -148, 141, 23, 39, -252, -56,
	ftAnimEnd(),
	0x50EE, 0xFCDC, 0x0000, 0x0000, 0x001D, 0x01F7, 0x0367, 0x0801, 0x000C, 0x0000,
};
