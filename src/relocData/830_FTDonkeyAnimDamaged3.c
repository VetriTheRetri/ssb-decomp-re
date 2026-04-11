/* AnimJoint data for relocData file 830 (FTDonkeyAnimDamaged3) */
/* 1392 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimDamaged3_joint1[36];
extern u16 dFTDonkeyAnimDamaged3_joint2[44];
extern u16 dFTDonkeyAnimDamaged3_joint4[28];
extern u16 dFTDonkeyAnimDamaged3_joint5[62];
extern u16 dFTDonkeyAnimDamaged3_joint6[32];
extern u16 dFTDonkeyAnimDamaged3_joint7[8];
extern u16 dFTDonkeyAnimDamaged3_joint10[30];
extern u16 dFTDonkeyAnimDamaged3_joint11[46];
extern u16 dFTDonkeyAnimDamaged3_joint12[16];
extern u16 dFTDonkeyAnimDamaged3_joint13[12];
extern u16 dFTDonkeyAnimDamaged3_joint14[8];
extern u16 dFTDonkeyAnimDamaged3_joint16[32];
extern u16 dFTDonkeyAnimDamaged3_joint17[34];
extern u16 dFTDonkeyAnimDamaged3_joint19[16];
extern u16 dFTDonkeyAnimDamaged3_joint21[54];
extern u16 dFTDonkeyAnimDamaged3_joint22[70];
extern u16 dFTDonkeyAnimDamaged3_joint24[118];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimDamaged3_joints[] = {
	(u32)dFTDonkeyAnimDamaged3_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimDamaged3_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimDamaged3_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimDamaged3_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimDamaged3_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimDamaged3_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimDamaged3_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimDamaged3_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimDamaged3_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimDamaged3_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimDamaged3_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimDamaged3_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimDamaged3_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimDamaged3_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimDamaged3_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimDamaged3_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimDamaged3_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF0135, /* [24] END */
};

/* Joint 1 */
u16 dFTDonkeyAnimDamaged3_joint1[36] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX), -29,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ), 0, 70, 0, -84, 0, -42, -400, 1627,
	ftAnimSetValAfterBlock(FT_ANIM_TRAY), 1031,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), -49, 350,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 2), 408,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 10), -29,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), -50, -281,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), -400,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimDamaged3_joint2[44] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, -517, -214, 89,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ), -265, -41, -16, -154,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ, 1), -265, 10, -41, -38, -16, -70, -225, -698,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), -120, -193,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 11), 0, -154,
	ftAnimSetValRateT(FT_ANIM_TRAY, 11), -214, -227,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -243, -117, -157,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -265, -41, -16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTDonkeyAnimDamaged3_joint4[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 750, -1,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 24, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 705, -21, 59, 4, -188, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 707, 4, 33, -3, -118, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 750, 24, 41,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimDamaged3_joint5[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, -64, -84, 62, -473, 418,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 50, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -279, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -54, 248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 23, 76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 148, -63,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 26, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -85, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 46, -149,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -357, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -164, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -90, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, 27, -84, 0, -473, -115,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimDamaged3_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -407, -745,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1153, -407,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1223, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1169, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1072, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -586, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 178,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimDamaged3_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTDonkeyAnimDamaged3_joint10[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, 4, -67, 117, -44, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 306, 43, 227, 0, -21, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 521, -11, -69, -26, -209, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 174, -67, -44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimDamaged3_joint11[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -115, -18, 172, -296, -479, -115,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -454, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -107, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -124, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -114, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 176, 1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -438, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -453, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -115, -8, 172, -4, -479, -25,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimDamaged3_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -416, -16,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -462, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 45,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimDamaged3_joint13[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 98,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 733,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 11), 98,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTDonkeyAnimDamaged3_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTDonkeyAnimDamaged3_joint16[32] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -404, 15,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -378, 9, 0, -47, 0, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -346, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -284, -297,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -404, 35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTDonkeyAnimDamaged3_joint17[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -60, -121, -392, 24, -329, 145,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 11), -78, 22, -384, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 2, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -270, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -60, 18, -392, -8, -329, -58,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimDamaged3_joint19[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1026, -34,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1004, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1026, 21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimDamaged3_joint21[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -113, 34, 14, -63, -369, -119,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -182, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -198, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -676, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -675, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -396, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -184, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -2, 29,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -211, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -140, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -113, 26, 14, 17, -369, 26,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimDamaged3_joint22[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1504, -213, 1391, 72, -1904, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1717, -103, 1464, -12, -1719, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1710, -29, 1367, -23, -1517, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1496, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1767, 71, -1869, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1631, 114, -1845, 60,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1516, 12, -1795, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1505, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1407, -20,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1504, 6, -1861, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1504, 0, 1391, -16, -1904, -42,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimDamaged3_joint24[118] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 994, 39,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1034, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 658, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 913, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 811, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 672, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 732, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 962, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 994, 32,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0007, 0x01E2, 0x0067, 0xFFAB, 0x0B0D, 0xFF87, 0x200F, 0x0001, 0x01E9, 0x00FA, 0x0012, 0xFF69, 0x0A93, 0x0035, 0x200F, 0x0001, 0x01FC, 0xFFF9, 0xFF39, 0xFF88, 0x0B79, 0x009B, 0x2803, 0x0003, 0x010A, 0xFF80, 0x2805, 0x0004, 0x0024, 0x0029, 0x2009, 0x0001, 0x0BCB, 0x0062, 0x2009, 0x0001, 0x0C3D, 0x0022, 0x2809, 0x0003, 0x0B44, 0xFFC4, 0x0801, 0x0001, 0x2003, 0x0001, 0x009F, 0xFFBB, 0x2803, 0x0005, 0x0016, 0xFFEA, 0x2005, 0x0001, 0x0027, 0x000B, 0x2805, 0x0004, 0x0066, 0x0004, 0x2009, 0x0001, 0x0B0E, 0xFFD7, 0x2009, 0x0003, 0x0B06, 0x000D, 0x200F, 0x0001, 0x0007, 0xFFF2, 0x0067, 0x0001, 0x0B0D, 0x0007, 0x0000,
};
