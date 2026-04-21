/* AnimJoint data for relocData file 893 (FTDonkeyAnimItemThrowSmashD) */
/* 1808 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimItemThrowSmashD_joint1[24];
extern u16 dFTDonkeyAnimItemThrowSmashD_joint2[34];
extern u16 dFTDonkeyAnimItemThrowSmashD_joint4[26];
extern u16 dFTDonkeyAnimItemThrowSmashD_joint5[56];
extern u16 dFTDonkeyAnimItemThrowSmashD_joint6[32];
extern u16 dFTDonkeyAnimItemThrowSmashD_joint7[8];
extern u16 dFTDonkeyAnimItemThrowSmashD_joint8[42];
extern u16 dFTDonkeyAnimItemThrowSmashD_joint10[8];
extern u16 dFTDonkeyAnimItemThrowSmashD_joint11[94];
extern u16 dFTDonkeyAnimItemThrowSmashD_joint12[48];
extern u16 dFTDonkeyAnimItemThrowSmashD_joint13[26];
extern u16 dFTDonkeyAnimItemThrowSmashD_joint14[10];
extern u16 dFTDonkeyAnimItemThrowSmashD_joint16[42];
extern u16 dFTDonkeyAnimItemThrowSmashD_joint17[104];
extern u16 dFTDonkeyAnimItemThrowSmashD_joint19[32];
extern u16 dFTDonkeyAnimItemThrowSmashD_joint21[90];
extern u16 dFTDonkeyAnimItemThrowSmashD_joint22[70];
extern u16 dFTDonkeyAnimItemThrowSmashD_joint24[24];
extern u16 dFTDonkeyAnimItemThrowSmashD_joint25[84];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimItemThrowSmashD_joints[] = {
	(u32)dFTDonkeyAnimItemThrowSmashD_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimItemThrowSmashD_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimItemThrowSmashD_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimItemThrowSmashD_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimItemThrowSmashD_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimItemThrowSmashD_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimItemThrowSmashD_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimItemThrowSmashD_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimItemThrowSmashD_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimItemThrowSmashD_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimItemThrowSmashD_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimItemThrowSmashD_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimItemThrowSmashD_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimItemThrowSmashD_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimItemThrowSmashD_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimItemThrowSmashD_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimItemThrowSmashD_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimItemThrowSmashD_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTDonkeyAnimItemThrowSmashD_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimItemThrowSmashD_joint1[24] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1032, -402,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), -24,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1032, 286, -115, 560,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), -121, -104,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), 1176,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 1032, -402,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTDonkeyAnimItemThrowSmashD_joint2[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -265, -41, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -243, 36, -282, 42, -175, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -119, 25, 130, 73, 45, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -42, -7, 302, -8, 272, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -265, -41, -16,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimItemThrowSmashD_joint4[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 750, 24, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 671, -5, 9, -12, -23, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 727, 3, -25, 0, 222, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 750, 24, 41,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimItemThrowSmashD_joint5[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, -15, -84, 2, -473, 95,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -84, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -163, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 81, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 123, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -465, -14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -63, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -62, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -173, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 13), -84, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, 0, -84, 0, -473, -7,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimItemThrowSmashD_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -407, -107,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -813, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -848, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -825, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -775, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -419, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimItemThrowSmashD_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimItemThrowSmashD_joint8[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, -67, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 452, 43, 214, -66, -86, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 350, -26, -333, -91, -23, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 240, 4, -513, 5, 155, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 407, -4, -267, 31, 53, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 174, -67, -44,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTDonkeyAnimItemThrowSmashD_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -398, 70, 29,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimItemThrowSmashD_joint11[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1492, 315, 1436, -134, 1129, 345,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1676, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1145, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1807, 449,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2391, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1983, -425, 1430, -253,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1069, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1540, -297, 1231, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1255, -119,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1484, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 976, -87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1140, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1148, -90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 1491, 5,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1462, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1436, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1173, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1143, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1492, 1, 1436, 0, 1129, -14,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimItemThrowSmashD_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -416, -569,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -986, -330,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1078, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1076, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -890, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -706, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -663, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -624, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -536, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -454, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 37,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimItemThrowSmashD_joint13[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 98, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1593, -49, -22, 22, 80, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -101, -67, 88, 1, 56, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 98, 0, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTDonkeyAnimItemThrowSmashD_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -1340, 2502, 120, 120, 120,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTDonkeyAnimItemThrowSmashD_joint16[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -404, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -451, -20, 86, -64, 73, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -508, 0, -320, 23, -224, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -452, -5, 390, 33, 374, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -588, 5, 179, -43, 167, -41,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -404, 0, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimItemThrowSmashD_joint17[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -86, 211, -394, 28, -304, -119,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -472, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 125, 201, -366, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 316, -139, -284, -74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -692, -286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -515, -8, -560, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -301, 147, -211, 178,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -30, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -728, -20, -202, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -604, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -281, -20,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -40, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -401, 1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -555, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -97, 20,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -297, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -304, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -398, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -395, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -86, 10, -394, 1, -304, 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimItemThrowSmashD_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1004, 35,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 879, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 639, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 597, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 574, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 1001, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1004, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimItemThrowSmashD_joint21[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, -39, 24, -174, -377, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -102, -87, -150, -178, -328, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -238, 117, -332, 128, -127, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 131, 284, 106, 361, -126, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 331, 151, 389, 149, 55, 122,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 403, -24, 166, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 417, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 427, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 141, -49,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 382, -14, 143, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 13), -55, -14, -373, -6,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 94, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 32, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, -7, 24, -8, -377, -3,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimItemThrowSmashD_joint22[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1708, 81, 1391, 26, 1310, 110,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1602, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1428, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1521, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1530, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1362, -36,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1578, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1617, 37,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1432, 1, 1328, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1391, -1, 1307, 6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1653, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1701, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1708, 6, 1391, 0, 1310, 3,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimItemThrowSmashD_joint24[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 993, -30,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 803, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 818, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 994, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 993, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTDonkeyAnimItemThrowSmashD_joint25[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1609, 31, -1713, 142, -1992, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1700, -40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -2197, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1474, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1674, -222,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -2011, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1644, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1590, 47,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2088, -68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1740, 25,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1638, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1610, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2162, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1994, 4,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1720, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1609, -1, -1713, 6, -1992, 2,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
