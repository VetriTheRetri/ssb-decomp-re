/* AnimJoint data for relocData file 902 (FTDonkeyAnimStarRodSmash) */
/* 3456 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimStarRodSmash_joint1[44];
extern u16 dFTDonkeyAnimStarRodSmash_joint2[50];
extern u16 dFTDonkeyAnimStarRodSmash_joint4[48];
extern u16 dFTDonkeyAnimStarRodSmash_joint5[150];
extern u16 dFTDonkeyAnimStarRodSmash_joint6[64];
extern u16 dFTDonkeyAnimStarRodSmash_joint7[50];
extern u16 dFTDonkeyAnimStarRodSmash_joint8[64];
extern u16 dFTDonkeyAnimStarRodSmash_joint10[8];
extern u16 dFTDonkeyAnimStarRodSmash_joint11[198];
extern u16 dFTDonkeyAnimStarRodSmash_joint12[80];
extern u16 dFTDonkeyAnimStarRodSmash_joint13[58];
extern u16 dFTDonkeyAnimStarRodSmash_joint16[10];
extern u16 dFTDonkeyAnimStarRodSmash_joint17[160];
extern u16 dFTDonkeyAnimStarRodSmash_joint19[56];
extern u16 dFTDonkeyAnimStarRodSmash_joint21[180];
extern u16 dFTDonkeyAnimStarRodSmash_joint22[202];
extern u16 dFTDonkeyAnimStarRodSmash_joint24[72];
extern u16 dFTDonkeyAnimStarRodSmash_joint25[184];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimStarRodSmash_joints[] = {
	(u32)dFTDonkeyAnimStarRodSmash_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimStarRodSmash_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimStarRodSmash_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimStarRodSmash_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimStarRodSmash_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimStarRodSmash_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimStarRodSmash_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimStarRodSmash_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimStarRodSmash_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimStarRodSmash_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimStarRodSmash_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimStarRodSmash_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimStarRodSmash_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimStarRodSmash_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimStarRodSmash_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimStarRodSmash_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimStarRodSmash_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTDonkeyAnimStarRodSmash_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimStarRodSmash_joint1[44] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -24, 1032, -402,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 993, -22, 149, 146,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 4), -24,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), -24, -27, 983, 5, -71, 155,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -100, -71, 1007, 25, 576, 131,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), -220, 18, 1053, 5, 290, -230,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), -24, 1032, -402,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTDonkeyAnimStarRodSmash_joint2[50] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -265, -41, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -424, -8, -889, -47, 148, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -424, 10, -889, 60, 148, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -243, 27, 123, 165, 62, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -194, 2, 484, 18, 64, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -194, -2, 484, -15, 64, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -265, -41, -16,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimStarRodSmash_joint4[48] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 750, 24, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 745, 0, -3, -1, -207, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 745, 10, -3, 11, -207, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 982, -3, 239, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 245, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 512, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 673, -6, -17, -6, 128, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 750, 24, 41,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimStarRodSmash_joint5[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, 0, -84, 16, -473, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -822, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 293, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 8, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -20, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 134, 63,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -852, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -974, -32,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 290, -14, 214, 92,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 295, 62, 355, -45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1003, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -672, 99,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 356, 49, 293, -71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 123, -191,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 284, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -575, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -169, -148, -290, 155,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -170, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -265, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 30), -450, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -164, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -28, -10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 274, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), -62, 0,
	ftAnimBlock(0, 20),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -38, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -83, -2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -462, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -470, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, 0, -84, -1, -473, -2,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimStarRodSmash_joint6[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -407, -111,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -897, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -921, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -534, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -434, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -126, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -202, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -392, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -486, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -813, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -822, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), -500, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -471, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -412, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimStarRodSmash_joint7[50] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -258, -12, 261, 12, 449, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -258, -46, 261, -25, 449, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1230, -126, -267, -102, 301, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -957, 18, -306, -2, 287, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -957, 28, -306, 9, 287, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTDonkeyAnimStarRodSmash_joint8[64] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, -67, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -507, -52, 278, 26, -878, -64,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -507, 278, -878,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -507, 88, 278, -31, -878, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 56, 206, 75, -241, -371, 359,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 65, -109, -388, -64, 116, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -708, -5, -372, -6, 1144, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -40, 25, -503, 8, 248, -34,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 174, -67, -44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTDonkeyAnimStarRodSmash_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -398, 70, 29,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimStarRodSmash_joint11[198] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1492, -8, -1780, 18, 1129, 46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1606, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1386, -144, 1143, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1195, -156, 936, -196,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1019, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 601, -9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1618, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1871, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1018, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1294, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 595, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 843, 67,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1373, 155, -1859, 75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1756, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1720, 60, 927, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 818, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1738, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1681, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1726, -73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1360, -280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 861, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 710, -104,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1048, -236,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 896, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 640, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1511, 89, 825, 91,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1480, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 823, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 951, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 883, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), 1327, 44,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1477, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -1693, -23,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1015, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1166, 1,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1714, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1779, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1369, 39, 1166, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1489, 6, 1131, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1492, 3, -1780, -1, 1129, -2,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimStarRodSmash_joint12[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -416, -162,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -753, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -685, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -982, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1006, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -966, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -757, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -584, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -627, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -579, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -494, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -460, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -464, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -370, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -337, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -463, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -456, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -419, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimStarRodSmash_joint13[58] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 98, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1195, 52, 17, 2, 31, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 1036, -41, 49, -25, 48, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 500, 22, -406, -62, 927, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1219, 37, -465, -3, -145, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 1219, -27, -465, 11, -145, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 548, -56, -191, 23, 11, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 98, 0, 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTDonkeyAnimStarRodSmash_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -1340, 2502, 120, 120, 120,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimStarRodSmash_joint17[160] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -86, -66, -394, 6, 2912, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -288, -140, -376, -66, 3144, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -433, 191, -521, -443, 3256, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 94, 211, -1264, -418, 2760, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -10, -92, -1358, -70, 2893, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -322, -44, -1325, 47, 3299, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -375, -224, -1277, 115, 3321, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -771, -670, -1094, 10, 3488, 444,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1715, -540, -1257, -213, 4211, 415,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1852, -86, -1521, -149, 4319, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1887, -32, -1556, -3, 4326, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 4521, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -2214, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -1357, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1346, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1350, 36,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4534, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 4479, -22,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2233, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1930, 66,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1312, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1213, -1,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1865, 59, 4460, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -1696, 2, 4517, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1695, 1, -1214, 0, 4520, 3,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimStarRodSmash_joint19[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1004, 32,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1317, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1310, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 989, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1045, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 788, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 821, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 671, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 650, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 978, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 987, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1004, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1004, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimStarRodSmash_joint21[180] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, -26, 24, -81, -377, -80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -137, -77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -702, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -210, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -256, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -265, -62, 189, 256,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -221, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 255, 35, -638, 81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -78, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 147, -13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -221, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -331, -8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -42, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -61, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 135, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 68, -39,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -336, 75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 174, 98,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16, 11, -56, 46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 36, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 526, 24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 252, 82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 849, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 51, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 549, 33,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 537, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 428, 16,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 579, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 149, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 863, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 458, -99,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 444, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 29, -10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 357, -96, 46, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -60, -5, -374, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, -2, 24, -5, -377, -2,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimStarRodSmash_joint22[202] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1708, -47, -1825, 8, 1310, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1106, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1513, 68, -1780, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1671, 127, -1880, -70,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1876, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 2096, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1138, 40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1316, -43,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1899, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1967, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2054, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1979, -259, 1261, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1536, -243, -1868, 33, 1079, 116,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1809, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1492, 146, 1494, 408,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1828, 248, 1895, 285,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2173, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1679, 143, 2064, 163,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1316, 122,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 2253, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2328, 131,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 2511, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1277, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1230, -10,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2241, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 2212, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2517, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 2035, -88,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1241, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1483, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1543, -61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1928, 26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2199, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1557, -81,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1948, -79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1710, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1483, -65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1314, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1901, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1828, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1708, -2, -1825, 3, 1310, -4,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimStarRodSmash_joint24[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 993, 18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 966, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 883, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 858, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 873, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 941, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1029, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 312, -290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 206, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 306, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 993, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 993, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTDonkeyAnimStarRodSmash_joint25[184] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 105, -90, -383, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -473, -279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 59, 62, -391, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 124, -161, -332, 254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -263, 190, -749, -215, 117, -159,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1177, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 504, 331, -651, -324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 399, -56, -532, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 391, 1, -508, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 453, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -788, -55,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1202, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1121, 51,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 494, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 580, -222, -1060, 322, -854, 234,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 53, 362,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 49, -195, -319, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 188, 34, -580, -156,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -202, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 117, -30, 247, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 475, 15, 11, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 463, -24, -15, -9, -157, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -41, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), 335, 27, -313, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 376, 5, -338, -56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -413, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 2, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -43, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 104, 1,
	ftAnimBlock(0, 16),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -397, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -387, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -2, 105, 0, -383, 3,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
