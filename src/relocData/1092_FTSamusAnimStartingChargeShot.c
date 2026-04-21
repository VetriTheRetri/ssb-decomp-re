/* AnimJoint data for relocData file 1092 (FTSamusAnimStartingChargeShot) */
/* 1216 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimStartingChargeShot_joint1[30];
extern u16 dFTSamusAnimStartingChargeShot_joint2[8];
extern u16 dFTSamusAnimStartingChargeShot_joint4[28];
extern u16 dFTSamusAnimStartingChargeShot_joint5[86];
extern u16 dFTSamusAnimStartingChargeShot_joint6[40];
extern u16 dFTSamusAnimStartingChargeShot_joint7[16];
extern u16 dFTSamusAnimStartingChargeShot_joint8[10];
extern u16 dFTSamusAnimStartingChargeShot_joint11[10];
extern u16 dFTSamusAnimStartingChargeShot_joint12[98];
extern u16 dFTSamusAnimStartingChargeShot_joint14[48];
extern u16 dFTSamusAnimStartingChargeShot_joint15[24];
extern u16 dFTSamusAnimStartingChargeShot_joint17[24];
extern u16 dFTSamusAnimStartingChargeShot_joint19[34];
extern u16 dFTSamusAnimStartingChargeShot_joint20[42];
extern u16 dFTSamusAnimStartingChargeShot_joint22[24];
extern u16 dFTSamusAnimStartingChargeShot_joint23[40];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimStartingChargeShot_joints[] = {
	(u32)dFTSamusAnimStartingChargeShot_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimStartingChargeShot_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimStartingChargeShot_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimStartingChargeShot_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimStartingChargeShot_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimStartingChargeShot_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimStartingChargeShot_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimStartingChargeShot_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimStartingChargeShot_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimStartingChargeShot_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimStartingChargeShot_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimStartingChargeShot_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimStartingChargeShot_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimStartingChargeShot_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimStartingChargeShot_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTSamusAnimStartingChargeShot_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimStartingChargeShot_joint1[30] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1600, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 16), 1200, -512,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), -33, -67,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), -551,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 9), -551, 0,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -56,
	ftAnimSetValRateT(FT_ANIM_TRAY, 8), 1200, 34,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimStartingChargeShot_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTSamusAnimStartingChargeShot_joint4[28] = {
	ftAnimSetValAfter(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -8, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 142, 0, 0, 0,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -8, 142, 0, 0, 0,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimStartingChargeShot_joint5[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1132, -14, -1722, 87, 1377, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1501, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1366, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1468, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1593, -104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1515, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1448, -105,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 902, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1340, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1551, -42,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1410, 45, 673, -119,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1465, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 662, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 676, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1552, 137, 931, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1190, 292, -1556, -159, 1048, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -967, 223, -1871, -314, 1199, 151,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimStartingChargeShot_joint6[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -739, -119,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -647, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -380, 323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -470, -351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -707, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -468, 239,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimStartingChargeShot_joint7[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 701,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), 402, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 402, 0,
	ftAnimBlock0(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimStartingChargeShot_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimStartingChargeShot_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 479, 0,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimStartingChargeShot_joint12[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 58, 52, -128, 22, 3001, 221,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 3785, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 582, 195, -50, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 803, 198, -65, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1120, 156, -22, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3823, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3910, 115,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1293, 402, 14, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1925, 767, 419, 193, 4099, 467,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2827, 517, 402, -43, 4845, 488,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 105, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2961, 150, 5077, 385,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3129, 110, 5616, 387,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3267, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5852, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6040, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3309, 41, 50, -55, 6167, 126,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimStartingChargeShot_joint14[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, -244,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -901, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -733, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -688, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -624, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -783, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -782, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -761, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -619, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -563, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -599, -35,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimStartingChargeShot_joint15[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 87, -9, -27, -4, -389, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -19, 0, -81, -5, -667, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -16, 2, -87, -5, -722, -55,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimStartingChargeShot_joint17[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 415, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 392, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 452, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 518, 65,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimStartingChargeShot_joint19[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -75, 4, -28, 9, -41, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 26, 8, 86, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 172, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 217, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 269, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 34, 7, 90, 3, 258, -10,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimStartingChargeShot_joint20[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 226, -33, 160, -18, -49, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 86, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 89, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -29, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -99, -66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -294, -25,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 81, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 76, -5, 93, 3, -315, -20,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimStartingChargeShot_joint22[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 442, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 435, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 515, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 866, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 923, 57,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimStartingChargeShot_joint23[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 142, 11, 193, 54, -213, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 59, 3, -469, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), 232, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 237, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 240, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 64, 5, 240, 0, -501, -32,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
