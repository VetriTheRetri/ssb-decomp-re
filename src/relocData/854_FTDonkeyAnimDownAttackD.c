/* AnimJoint data for relocData file 854 (FTDonkeyAnimDownAttackD) */
/* 4016 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimDownAttackD_joint1[86];
extern u16 dFTDonkeyAnimDownAttackD_joint2[156];
extern u16 dFTDonkeyAnimDownAttackD_joint4[74];
extern u16 dFTDonkeyAnimDownAttackD_joint5[206];
extern u16 dFTDonkeyAnimDownAttackD_joint6[64];
extern u16 dFTDonkeyAnimDownAttackD_joint7[10];
extern u16 dFTDonkeyAnimDownAttackD_joint8[64];
extern u16 dFTDonkeyAnimDownAttackD_joint10[14];
extern u16 dFTDonkeyAnimDownAttackD_joint11[196];
extern u16 dFTDonkeyAnimDownAttackD_joint12[62];
extern u16 dFTDonkeyAnimDownAttackD_joint13[38];
extern u16 dFTDonkeyAnimDownAttackD_joint14[8];
extern u16 dFTDonkeyAnimDownAttackD_joint16[38];
extern u16 dFTDonkeyAnimDownAttackD_joint17[204];
extern u16 dFTDonkeyAnimDownAttackD_joint19[64];
extern u16 dFTDonkeyAnimDownAttackD_joint21[222];
extern u16 dFTDonkeyAnimDownAttackD_joint22[208];
extern u16 dFTDonkeyAnimDownAttackD_joint24[88];
extern u16 dFTDonkeyAnimDownAttackD_joint25[156];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimDownAttackD_joints[] = {
	(u32)dFTDonkeyAnimDownAttackD_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimDownAttackD_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimDownAttackD_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimDownAttackD_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimDownAttackD_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimDownAttackD_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimDownAttackD_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimDownAttackD_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimDownAttackD_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimDownAttackD_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimDownAttackD_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimDownAttackD_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimDownAttackD_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimDownAttackD_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimDownAttackD_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimDownAttackD_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimDownAttackD_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimDownAttackD_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTDonkeyAnimDownAttackD_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimDownAttackD_joint1[86] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 643, 14, 600, -240,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 42), -201, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 10), 579, -16, -15, -23, 1003, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 402, -17, -29, -11, 762, -192,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 10,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), 402, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), -29, 17, 762, -2,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 143,
	ftAnimSetValRateT(FT_ANIM_TRAX, 5), 779, 588,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 762,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 6), 779, 45, 762, -15,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 7), 853, 73, 737, -51,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 880, -85, 691, 65,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 8), -400,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 779, -910, 795, 340,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 0, -29, 1031,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimDownAttackD_joint2[156] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -214, -154,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -68, -25, -10, 20, -4, -17, -214, 0, -154, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -380, -31, 312, 32, -264, -25, -214, 0, -154, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -380, 0, 312, 0, -264, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -214, -154,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 7, -23, 16,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), -214, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -326, 9, 35, -217, 45, 260,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -339, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -361, -200, 256, 356,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -926, -245, 1113, 398,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -286, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1098, -94, -73, 113, 1451, 181,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), 1477, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1116, -58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1297, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -1098, 8, -73, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), -354, -19, -214, 0, -154, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1024, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -790, 60, 779, -112,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 64, -159,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -214, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -418, 166, -386, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -303, 50, -312, 115,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -265, -41, -16,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimDownAttackD_joint4[74] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 357, 0, 0, 319, -157,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 656, 25, 5, 0, 319, 0, -157, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 40), 319, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 735, -2, 11, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 626, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 735, 21, 11, -17, 19, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 735, -11, 11, -14, 19, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 489, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -91, 0, -148, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 6, 5, 12, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 750, 24, 41,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimDownAttackD_joint5[206] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 186, -106, -581, -12, -1043, 115,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -458, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 79, -199, -927, 215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -213, -266, -612, 293,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -345, 111,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -672, -63,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -314, 104,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -544, 5,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -235, 116,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 226, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -518, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -119, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -736, -42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -707, -10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 248, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 202, -205,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -128, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 88, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -718, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -562, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -85, -400, -343, 117,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -299, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -597, -275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -635, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -266, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 129, -1, -207, 110,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -156, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 27, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -265, 0, 19, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -115, -58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -490, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -149, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 104, -26,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -173, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -326, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -539, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -354, 156,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 73, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -80, -12,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -202, 126, -366, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -100, 69, -436, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, 37, -84, -4, -473, -37,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimDownAttackD_joint6[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1152, -29,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1296, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1256, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1032, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -992, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -866, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -927, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -483, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -532, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1256, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1281, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -551, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -483, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -434, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 26,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimDownAttackD_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 702, 15, 17,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTDonkeyAnimDownAttackD_joint8[64] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -523, -342, 166, -9, 1320, -145,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 50), 1354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 10), -875, 0, 28, 22, -13, -11, -7, 1, -52, 57,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 40), 0, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -536, 33, 0, -2, 0, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -536, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -536,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -536, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 149, 35, 0, -3, 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 174, -67, -44,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTDonkeyAnimDownAttackD_joint10[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 50), -398, 70, 29,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimDownAttackD_joint11[196] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1727, -2, 1083, -9, 779, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 947, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1632, -101, 644, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1486, -269, 492, -271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 669, -294, -315, -282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 505, -114, -463, -95,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -138, 149,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 699, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1000, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1385, 87,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 9, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 686, -13, 1468, 83,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 545, 9, 1602, -162,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 14, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -149, -24,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 546, -3, 1432, -160,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 614, 26, 988, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -155, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -41, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -60, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 224, 441,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 661, 183, 918, -65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1167, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 982, 492,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1647, 400, 833, 340,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1815, 23, 883, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1828, 7, 1323, 142, 870, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1364, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1589, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 1561, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1495, -55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1431, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1331, -45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1153, -40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1540, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1505, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1492, -13, 1436, 4, 1129, -24,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimDownAttackD_joint12[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1073, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -859, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -828, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -108, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 54,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -418, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -491, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -285, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -368, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -1095, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -980, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -463, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 46,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTDonkeyAnimDownAttackD_joint13[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 98, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 702, 18, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 1063, 22, 501, 28, 708, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 534, -24, 550, -3, 3, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 443, -14, 405, -17, 134, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 98, 0, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTDonkeyAnimDownAttackD_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTDonkeyAnimDownAttackD_joint16[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -404, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1046, 573,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -297, -1, -510, 17, -464, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -445, -4, 484, 4, 420, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -401, 1, -399, -22, -263, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -404, 0, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimDownAttackD_joint17[204] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1822, -13, -1178, 4, 217, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 698, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1329, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 1372, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1348, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1222, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 731, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 833, -1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1329, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1387, -79,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1224, 110, 832, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1018, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1444, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1314, -114,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1291, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1457, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1271, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 874, -91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 874, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1550, 139,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1572, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1269, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1050, 43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1564, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1387, -77,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 874, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 882, 126,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1291, -118,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 996, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1010, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1153, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1033, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 974, 398, 1100, -281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1793, 384, 470, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1744, -144, 614, 227,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1221, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 926, 310,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1363, 52,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1223, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1207, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1340, 135, 1339, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1493, 103, 1283, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1547, 53, -1215, -8, 1279, -4,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimDownAttackD_joint19[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1107, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 741, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 705, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 959, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 959, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 959, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1094, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1048, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1085, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 1042, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1050, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1300, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1278, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1087, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1026, -61,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimDownAttackD_joint21[222] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1586, 8, -1544, -2, -1903, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -1992, -113, -1800, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 1647, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1606, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1839, 277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2106, -100, -1710, 152,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1076, 64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -2122, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2184, 254,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2374, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1066, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1149, -35,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2360, -39, -2125, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1968, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2295, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2289, -338, -1149, -425,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1618, -306, -1999, -496,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1677, 113, -1675, 330, -2142, -126,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1021, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1845, 199, -2253, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2076, -256, -2424, 274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1332, -396, -956, 16, -1703, 381,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1226, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1284, -13, -1661, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1882, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1866, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1285, -58, -1858, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -1679, -38, -1856, -45,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1869, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1874, -146,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1707, 22, -1901, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1656, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1580, -126, -1805, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1815, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1872, -91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2138, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1701, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1653, 46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1788, -65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1554, -95,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2029, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1494, -59, -1623, 29, -1978, 51,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimDownAttackD_joint22[208] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1614, 2, 1353, 3, -2768, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), -1572, -29, 1278, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -2522, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2492, 48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2253, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1595, -13, 1234, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1600, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1141, -58,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2253, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -2253, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1599, 40, -2253, 116,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1682, 241,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1203, 85,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1096, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1061, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1536, 118,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1227, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1136, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -920, 30,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1039, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 903, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1185, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -898, -18, -1163, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -957, -388, -1230, -405,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1674, -539, 864, 127, -1975, -651,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2037, -57, 1158, 235, -2533, -431,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1790, 284, 1334, 68, -2838, -58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1306, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1295, 16, -2649, 184,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2472, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1367, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1157, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1288, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1544, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2514, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2481, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1251, 89, -2249, 234,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1381, 27, -1913, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1515, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1503, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1504, 0, 1391, 10, -1904, 9,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimDownAttackD_joint24[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1158, -4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 938, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 905, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1129, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1123, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1123, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1043, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 759, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 714, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 653, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 691, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1081, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1272, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1165, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 756, -361,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 443, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 520, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1098, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1119, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 995, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 994, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTDonkeyAnimDownAttackD_joint25[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -322, -4, 162, 2, -565, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -181, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 322, 4, -342, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 314, -24, -334, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 63, 2, -524, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -76, 104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 93, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 71, 8, -519, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -406, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 92, 6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 92, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 401, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 437, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 672, 32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -377, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -100, 33,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 99, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 130, -32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 702, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 571, -392,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -63, -455, -65, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -433, -3, 145, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -429, 26, 91, -73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -420, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -190, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 9, 113,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 10, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 96, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 93, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, -2, 103, 10, -387, 33,
	ftAnimEnd(),
	0x0000, 0x0000,
};
