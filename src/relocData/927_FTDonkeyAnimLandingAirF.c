/* AnimJoint data for relocData file 927 (FTDonkeyAnimLandingAirF) */
/* 1632 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimLandingAirF_joint1[22];
extern u16 dFTDonkeyAnimLandingAirF_joint2[24];
extern u16 dFTDonkeyAnimLandingAirF_joint4[26];
extern u16 dFTDonkeyAnimLandingAirF_joint5[92];
extern u16 dFTDonkeyAnimLandingAirF_joint6[44];
extern u16 dFTDonkeyAnimLandingAirF_joint7[16];
extern u16 dFTDonkeyAnimLandingAirF_joint8[8];
extern u16 dFTDonkeyAnimLandingAirF_joint10[16];
extern u16 dFTDonkeyAnimLandingAirF_joint11[86];
extern u16 dFTDonkeyAnimLandingAirF_joint12[48];
extern u16 dFTDonkeyAnimLandingAirF_joint13[22];
extern u16 dFTDonkeyAnimLandingAirF_joint14[8];
extern u16 dFTDonkeyAnimLandingAirF_joint16[26];
extern u16 dFTDonkeyAnimLandingAirF_joint17[48];
extern u16 dFTDonkeyAnimLandingAirF_joint19[24];
extern u16 dFTDonkeyAnimLandingAirF_joint21[74];
extern u16 dFTDonkeyAnimLandingAirF_joint22[80];
extern u16 dFTDonkeyAnimLandingAirF_joint24[32];
extern u16 dFTDonkeyAnimLandingAirF_joint25[70];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimLandingAirF_joints[] = {
	(u32)dFTDonkeyAnimLandingAirF_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimLandingAirF_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimLandingAirF_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimLandingAirF_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimLandingAirF_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimLandingAirF_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimLandingAirF_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimLandingAirF_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimLandingAirF_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimLandingAirF_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimLandingAirF_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimLandingAirF_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimLandingAirF_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimLandingAirF_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimLandingAirF_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimLandingAirF_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimLandingAirF_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimLandingAirF_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTDonkeyAnimLandingAirF_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimLandingAirF_joint1[22] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 536, 529,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), -24,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 543, 21, 505, -60,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 551, 315, 486, -431,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 1032, -402,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimLandingAirF_joint2[24] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1002, -22, 38,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1002, -22, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1002, 59, -22, -1, 38, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -265, -41, -16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTDonkeyAnimLandingAirF_joint4[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 333, 29, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 333, 30, 29, -18, 41, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 612, 33, -139, 0, -238, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 750, 24, 41,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimLandingAirF_joint5[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -143, -233, -434, -53, -488, 396,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -482, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -377, -344, -92, 865,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -832, -32, 1242, 561,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -441, 254, -576, -5, 1029, -162,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -158, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -323, 42, 917, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -203, 181, 810, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 27, 222, -216, -34, 659, -171,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -64, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 191, -159, 328, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -78, -227, 98, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -238, 58, 135, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -146, 82, -104, -275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -73, 73, -84, -20, -415, -310,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimLandingAirF_joint6[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -753, -115,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -896, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -748, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -853, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -671, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -297, 235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -624, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -688, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -469, 218,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimLandingAirF_joint7[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -480, -384, 172,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimLandingAirF_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, -67, -44,
	ftAnimBlock(0, 15),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTDonkeyAnimLandingAirF_joint10[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -398, 70, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -54, 63, 27,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -398, 70, 29,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimLandingAirF_joint11[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1699, 127, 1210, 34, 1277, 226,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1787, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1898, -126, 1330, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1574, -423, 1212, -130,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1091, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1050, -294, 1604, -141,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1662, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 986, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1591, 120,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1193, 86,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1390, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1670, 60, 1645, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1602, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1572, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1580, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1404, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1506, -96, 1425, 35, 1171, -232,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimLandingAirF_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -548, -102,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -626, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -597, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -606, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -508, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -345, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -303, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -519, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -583, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -454, 128,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimLandingAirF_joint13[22] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 98, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 747, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 98, -75, 0, 0, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 103, 0, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTDonkeyAnimLandingAirF_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 15),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTDonkeyAnimLandingAirF_joint16[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -404, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -369, -28, 57, 11, 12, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -693, -3, 115, -5, 25, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -404, 0, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimLandingAirF_joint17[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -152, 131, -361, -21, -95, -121,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -316, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 346, 63, -361, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 346, 1, -361, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -60, -32, -319, 17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -318, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -394, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -83, -23, -394, 0, -306, 13,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimLandingAirF_joint19[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 615, 177,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1154, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1153, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1019, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1006, -13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimLandingAirF_joint21[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -33, -10, 132, -17, 279, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 96, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 18, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 11, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 110, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -134, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 116, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -222, -57,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 34, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 28, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -108, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -65, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -278, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -357, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -63, 2, 24, -3, -375, -17,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimLandingAirF_joint22[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 175, -17, 78, 57, -676, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 169, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 182, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -687, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -411, 321,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -45, 237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 191, 7, 62, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -410, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 76, 8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 217, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 220, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -400, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -317, 22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 85, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 94, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 99, 5, 217, -3, -300, 17,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimLandingAirF_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 503, 252,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 879, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 656, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 994, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1090, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1014, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 995, -18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTDonkeyAnimLandingAirF_joint25[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -354, -45, -187, 81, 48, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 196, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 37, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -403, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -252, 111,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -265, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 182, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 210, -32,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -257, 21, -86, -102,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -19, 26, -368, -19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 175, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 120, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1, 17, 107, -13, -381, -13,
	ftAnimEnd(),
};
